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
#include "AtomicOperations/AtomicOps.hpp"
#include "AtomicOperations/OperationFunctors.hpp"

namespace EmbeddedPP::LowLevel {
    template <std::integral ValueType, uint32_t Address, Accessibility Privilege>
    class Register final {
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
            volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
            AtomicOperations::BinaryAtomicOperation<ValueType, FunctorOr>(pRegister, ValueType{1} << BitPosition);
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
            volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
            AtomicOperations::BinaryAtomicOperation<ValueType, FunctorAnd>(pRegister, ~(ValueType{1} << BitPosition));
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
            volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
            AtomicOperations::BinaryAtomicOperation<ValueType, FunctorXor>(pRegister, ValueType{1} << BitPosition);
        }
        /**
         * @brief 位域操作: 全部置位
         * 
         * @tparam BitFieldInstance 待操作位域
         */
        template<Internal::BitFieldDescriptor BitFieldInstance>
        [[gnu::always_inline]]static inline void SetBitField() noexcept {
            static_assert(Privilege != Accessibility::ReadOnly && Privilege != Accessibility::Reserved, "Cannot write to a read-only/Reserved register");
            volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
            AtomicOperations::BinaryAtomicOperation<ValueType, FunctorOr>(pRegister, BitFieldInstance::Mask);
        }
        /**
         * @brief 位域操作: 全部清除
         * 
         * @tparam BitFieldInstance 待操作位域
         */
        template<Internal::BitFieldDescriptor BitFieldInstance>
        [[gnu::always_inline]]static inline void ClearBitField() noexcept {
            static_assert(Privilege != Accessibility::ReadOnly && Privilege != Accessibility::Reserved, "Cannot write to a read-only/Reserved register");
            volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
            AtomicOperations::BinaryAtomicOperation<ValueType, FunctorAnd>(pRegister, ~BitFieldInstance::Mask);
        }
        /**
         * @brief 位域操作: 反转
         * 
         * @tparam BitFieldInstance 待操作位域
         */
        template<Internal::BitFieldDescriptor BitFieldInstance>
        [[gnu::always_inline]]static inline void ToggleBitField() noexcept {
            static_assert(Privilege != Accessibility::ReadOnly && Privilege != Accessibility::Reserved, "Cannot write to a read-only/Reserved register");
            volatile ValueType* pRegister = reinterpret_cast<volatile ValueType*>(Address);
            AtomicOperations::BinaryAtomicOperation<ValueType, FunctorXor>(pRegister, BitFieldInstance::Mask);
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
            value = (value << BitFieldInstance::Offset)  & (SafeMask); // 预处理待写入值, 避免溢出到位域外
            volatile UnsignedValueType* pRegister = reinterpret_cast<volatile UnsignedValueType*>(Address);
            AtomicOperations::TernaryAtomicOperation<UnsignedValueType, FunctorWriteBitField>(pRegister, value, BitFieldInstance::Mask);
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