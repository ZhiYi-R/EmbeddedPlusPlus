/**
 * @file Register.hpp
 * @author ZhiYi-R(jinyi.shy@gmail.com)
 * @brief 寄存器抽象层
 * @version 0.1
 * @date 2025-09-25
 * 
 * @copyright 2025 @ZhiYi-R All right reserved.
 * 
 */
#ifndef EMBEDDED_PLUS_PLUS_REGISTER_HPP
#define EMBEDDED_PLUS_PLUS_REGISTER_HPP

#include <cstdint>
#include <concepts>
#include <type_traits>

#include "Common.hpp"
#include "BitField.hpp"

namespace EmbeddedPP::LowLevel {
    template <std::integral ValueType, uint32_t Address, Accessibility Privilege>
    class Register final {
    private:
        /* ARMv7-M LDREx/STREx原子原语 */
#if defined (TARGET_ARCH_ARM_V7M) && TARGET_ARCH_ARM_V7M
        /**
         * @brief STREX指令的C++ Wrapper(零运行时开销)
         * 
         * @param value 待写入值
         * @return uint32_t 操作结果 0表示成功，非零表示失败
         */
        [[gnu::always_inline]]static inline uint32_t StoreExclusive(ValueType value) noexcept {
            static_assert(sizeof(ValueType) == 4, "STREX only support 32-bit register");
            uint32_t status;
            __asm volatile("strex %0, %1, [%2]" : "=&r"(status) : "r"(value), "r"(Address) : "memory");
            return status;
        }
        /**
         * @brief LDREX指令的C++ Wrapper(零运行时开销)
         * 
         * @return uint32_t LDREX返回值
         */
        [[gnu::always_inline]]static inline uint32_t LoadExclusive(void) noexcept {
            static_assert(sizeof(ValueType) == 4, "LDREX only support 32-bit register");
            uint32_t value;
            __asm volatile("ldrex %0, [%1]" : "=r"(value) : "r"(Address) : "memory");
            return static_cast<ValueType>(value);
        }
        /**
         * @brief 数据内存屏障(DMB)
         * 
         */
        [[gnu::always_inline]]static inline void DataMemoryBarrier(void) noexcept { __asm volatile("dmb" : : : "memory"); }
#endif
        /* 通用原子原语(关键区) */
        /**
         * @brief 进入关键区
         * 
         * @return uint32_t 进入关键区前的primask
         */
        [[gnu::always_inline]]static inline uint32_t EnterCriticalSection(void) noexcept {
            uint32_t PreviousInterruptMask;
            __asm volatile("mrs %0, primask" : "=r"(PreviousInterruptMask));
            __asm volatile("cpsid i" : : : "memory");
            return PreviousInterruptMask;
        }
        /**
         * @brief 退出关键区
         * 
         * @param PreviousInterruptMask 进入关键区前的primask
         */
        [[gnu::always_inline]]static inline void ExitCriticalSection(uint32_t PreviousInterruptMask) noexcept {
            if (PreviousInterruptMask == 0) 
                __asm volatile("cpsie i" : : : "memory");
        }
        /**
         * @brief 原子操作：按位与
         * 
         * @param mask 操作mask
         */
        [[gnu::always_inline]]static inline void AtomicAnd(ValueType mask) noexcept {
            using UnsignedValueType = std::make_unsigned_t<ValueType>;
            UnsignedValueType SafeMask = static_cast<UnsignedValueType>(mask);
            volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
#if defined (TARGET_ARCH_ARM_V7M) && TARGET_ARCH_ARM_V7M
            if constexpr(sizeof(ValueType) == 4) {
                /* 路径1：STREx/LDREx原语 */
                UnsignedValueType RawValue;
                do {
                    RawValue = LoadExclusive();
                    RawValue = RawValue & SafeMask;
                } while(StoreExclusive(RawValue));
                DataMemoryBarrier();    // 插入DMB
            } else {
                /* 路径2：关键区 */
                uint32_t PreviousInterruptMask = EnterCriticalSection();
                *pRegister = *pRegister & SafeMask;
                ExitCriticalSection(PreviousInterruptMask);
            }
            return; // 对于ARMv7-M, 此时操作已完成，在此返回
#endif
            /* ARMv6-M Fallback路径: 关键区 */
            uint32_t PreviousInterruptMask = EnterCriticalSection();
            *pRegister = *pRegister & SafeMask;
            ExitCriticalSection(PreviousInterruptMask);
        }
        /**
         * @brief 原子操作：按位或
         * 
         * @param mask 操作mask
         */
        [[gnu::always_inline]]static inline void AtomicOr(ValueType mask) noexcept {
            using UnsignedValueType = std::make_unsigned_t<ValueType>;
            UnsignedValueType SafeMask = static_cast<UnsignedValueType>(mask);
            volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
#if defined (TARGET_ARCH_ARM_V7M) && TARGET_ARCH_ARM_V7M
            if constexpr(sizeof(ValueType) == 4) {
                /* 路径1：STREx/LDREx原语 */
                UnsignedValueType RawValue;
                do {
                    RawValue = LoadExclusive();
                    RawValue = RawValue | SafeMask;
                } while(StoreExclusive(RawValue));
                DataMemoryBarrier();
            } else {
                /* 路径2：关键区 */
                uint32_t PreviousInterruptMask = EnterCriticalSection();
                *pRegister = *pRegister | SafeMask;
                ExitCriticalSection(PreviousInterruptMask);
            }
            return; // 对于ARMv7-M, 此时操作已完成，在此返回
#endif
            /* ARMv6-M Fallback路径: 关键区 */
            uint32_t PreviousInterruptMask = EnterCriticalSection();
            *pRegister = *pRegister | SafeMask;
            ExitCriticalSection(PreviousInterruptMask);
        }
        /**
         * @brief 原子操作：按位异或
         * 
         * @param mask 操作mask
         */
        [[gnu::always_inline]]static inline void AtomicXor(ValueType mask) noexcept {
            using UnsignedValueType = std::make_unsigned_t<ValueType>;
            UnsignedValueType SafeMask = static_cast<UnsignedValueType>(mask);
            volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
#if defined (TARGET_ARCH_ARM_V7M) && TARGET_ARCH_ARM_V7M
            if constexpr(sizeof(ValueType) == 4) {
                /* 路径1：STREx/LDREx原语 */
                UnsignedValueType RawValue;
                do {
                    RawValue = LoadExclusive();
                    RawValue = RawValue ^ SafeMask;
                } while(StoreExclusive(RawValue));
                DataMemoryBarrier();
            } else {
                /* 路径2：关键区 */
                uint32_t PreviousInterruptMask = EnterCriticalSection();
                *pRegister = *pRegister ^ SafeMask;
                ExitCriticalSection(PreviousInterruptMask);
            }
            return; // 对于ARMv7-M, 此时操作已完成，在此返回
#endif
            /* ARMv6-M Fallback路径: 关键区 */
            uint32_t PreviousInterruptMask = EnterCriticalSection();
            *pRegister = *pRegister ^ SafeMask;
            ExitCriticalSection(PreviousInterruptMask);
        }
    public:
        /* 删除构造器/析构器，防止误用 */
        Register() = delete;
        ~Register() = delete;
        Register(Register&) = delete;
        Register& operator=(Register&) = delete;
        /**
         * @brief 写入寄存器
         * 
         * @param value 待写入的值
         */
        [[gnu::always_inline]]static inline void Write(ValueType value) noexcept {
            static_assert(Privilege != Accessibility::ReadOnly && Privilege != Accessibility::Reserved, "Cannot write to a read-only/Reserved register");
            *reinterpret_cast<volatile ValueType*>(Address) = value;
        }
        /**
         * @brief 读取寄存器
         * 
         * @return ValueType 寄存器值
         */
        [[gnu::always_inline]]static inline ValueType Read() noexcept {
            static_assert(Privilege != Accessibility::WriteOnly && Privilege != Accessibility::Reserved, "Cannot read from a write-only/Reserved register");
            return *reinterpret_cast<volatile ValueType*>(Address);
        }
        /**
         * @brief 位操作: 置位
         * 
         * @tparam BitPosition 待操作位
         */
        template<uint8_t BitPosition>
        [[gnu::always_inline]]static inline void SetBit() noexcept {
            static_assert(Privilege != Accessibility::ReadOnly && Privilege != Accessibility::Reserved, "Cannot write to a read-only/Reserved register");
            static_assert(BitPosition < sizeof(ValueType) * 8, "BitPosition out of range");
            AtomicOr(ValueType{1} << BitPosition);
        }
        /**
         * @brief 位操作: 清除
         * 
         * @tparam BitPosition 待操作位
         */
        template<uint8_t BitPosition>
        [[gnu::always_inline]]static inline void ClearBit() noexcept {
            static_assert(Privilege != Accessibility::ReadOnly && Privilege != Accessibility::Reserved, "Cannot write to a read-only/Reserved register");
            static_assert(BitPosition < sizeof(ValueType) * 8, "BitPosition out of range");
            AtomicAnd(~(ValueType{1} << BitPosition));
        }
        /**
         * @brief 位操作: 反转
         * 
         * @tparam BitPosition 待操作位
         */
        template<uint8_t BitPosition>
        [[gnu::always_inline]]static inline void ToggleBit() noexcept {
            static_assert(Privilege != Accessibility::ReadOnly && Privilege != Accessibility::Reserved, "Cannot write to a read-only/Reserved register");
            static_assert(BitPosition < sizeof(ValueType) * 8, "BitPosition out of range");
            AtomicXor(ValueType{1} << BitPosition);
        }
        /**
         * @brief 位域操作: 全部置位
         * 
         * @tparam BitFieldInstance 待操作位域
         */
        template<Internal::BitFieldDescriptor BitFieldInstance>
        [[gnu::always_inline]]static inline void SetBitField() noexcept {
            static_assert(Privilege != Accessibility::ReadOnly && Privilege != Accessibility::Reserved, "Cannot write to a read-only/Reserved register");
            AtomicOr(BitFieldInstance::Mask);
        }
        /**
         * @brief 位域操作: 全部清除
         * 
         * @tparam BitFieldInstance 待操作位域
         */
        template<Internal::BitFieldDescriptor BitFieldInstance>
        [[gnu::always_inline]]static inline void ClearBitField() noexcept {
            static_assert(Privilege != Accessibility::ReadOnly && Privilege != Accessibility::Reserved, "Cannot write to a read-only/Reserved register");
            AtomicAnd(~BitFieldInstance::Mask);
        }
        /**
         * @brief 位域操作: 反转
         * 
         * @tparam BitFieldInstance 待操作位域
         */
        template<Internal::BitFieldDescriptor BitFieldInstance>
        [[gnu::always_inline]]static inline void ToggleBitField() noexcept {
            static_assert(Privilege != Accessibility::ReadOnly && Privilege != Accessibility::Reserved, "Cannot write to a read-only/Reserved register");
            AtomicXor(BitFieldInstance::Mask);
        }
        /**
         * @brief 位域操作: 写入
         * 
         * @tparam BitFieldInstance 待操作位域
         * @param value 待写入的值(无需移位, 函数内部自动处理)
         */
        template<Internal::BitFieldDescriptor BitFieldInstance>
        [[gnu::always_inline]]static inline void WriteBitField(ValueType value) noexcept {
            static_assert(Privilege != Accessibility::ReadOnly && Privilege != Accessibility::Reserved, "Cannot write to a read-only/Reserved register");
            using UnsignedValueType = std::make_unsigned_t<ValueType>;
            UnsignedValueType SafeMask = static_cast<UnsignedValueType>(BitFieldInstance::Mask);
            value = value  & (SafeMask >> BitFieldInstance::Offset); // 预处理待写入值, 避免溢出到位域外
#if defined(TARGET_ARCH_ARM_V7M) && TARGET_ARCH_ARM_V7M
            if constexpr(sizeof(ValueType) == 4) {
                /* 路径1：STREx/LDREx原语 */
                UnsignedValueType RawValue;
                do {
                    RawValue = LoadExclusive();
                    RawValue = RawValue & (~SafeMask);
                    RawValue = RawValue | (static_cast<UnsignedValueType>(value) << BitFieldInstance::Offset);
                } while(StoreExclusive(RawValue));
                DataMemoryBarrier();
            } else {
                /* 路径2：关键区 */
                volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
                uint32_t PreviousInterruptMask = EnterCriticalSection();
                *pRegister = *pRegister & (~SafeMask);
                *pRegister = *pRegister | (static_cast<UnsignedValueType>(value) << BitFieldInstance::Offset);
                ExitCriticalSection(PreviousInterruptMask);
            }
            return; // 对于ARMv7-m, 此时操作完成, 立刻返回
#endif
            /* ARMv6-M Fallback路径: 关键区 */
            volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
            uint32_t PreviousInterruptMask = EnterCriticalSection();
            *pRegister = *pRegister & (~SafeMask);
            *pRegister = *pRegister | (static_cast<UnsignedValueType>(value) << BitFieldInstance::Offset);
            ExitCriticalSection(PreviousInterruptMask);
        }
        /**
         * @brief 位域操作: 读取
         * 
         * @tparam BitFieldInstance 待操作位域 
         * @return ValueType 读取到的值
         */
        template<Internal::BitFieldDescriptor BitFieldInstance>
        [[gnu::always_inline]]static inline ValueType ReadBitField() noexcept {
            static_assert(Privilege != Accessibility::WriteOnly && Privilege != Accessibility::Reserved, "Cannot read from a write-only/Reserved register");
            volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
            using UnsignedValueType = std::make_unsigned_t<ValueType>;
            UnsignedValueType SafeMask = static_cast<UnsignedValueType>(BitFieldInstance::Mask);
            return (*pRegister & SafeMask) >> BitFieldInstance::Offset;
        }
    };
}

#endif