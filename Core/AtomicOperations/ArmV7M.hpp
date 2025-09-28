/**
 * @file ArmV7M.hpp
 * @author ZhiYi-R(jinyi.shy@gmail.com)
 * @brief ARMv7M 架构下的原子操作
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright 2025 @ZhiYi-R All right reserved.
 * 
 */
#ifndef EMBEDDED_PLUS_PLUS_ATOMIC_ARMV7M_HPP
#define EMBEDDED_PLUS_PLUS_ATOMIC_ARMV7M_HPP

#if defined (TARGET_ARCH_ARM_V7M) && TARGET_ARCH_ARM_V7M

#include <cstdint>
#include <concepts>
#include <type_traits>

#include "OperationConstraints.hpp"

namespace EmbeddedPP::LowLevel {
    class AtomicOperations final {
    private:
        /**
         * @brief 进入临界区
         * 
         * @return uint32_t 上一个中断掩码
         */
        [[gnu::always_inline]]static inline uint32_t EnterCriticalSection() noexcept {
            uint32_t PreviousInterruptMask;
            __asm__ volatile ("mrs %0, primask" : "=r"(PreviousInterruptMask));
            __asm__ volatile ("cpsid i" ::: "memory");
            return PreviousInterruptMask;
        }
        /**
         * @brief 离开临界区
         * 
         * @param PreviousInterruptMask 上一个中断掩码
         */
        [[gnu::always_inline]]static inline void LeaveCriticalSection(uint32_t PreviousInterruptMask) noexcept {
            __asm__ volatile ("msr primask, %0" : : "r"(PreviousInterruptMask) : "memory");
        }
        /**
         * @brief LDREX C++ Wrapper
         * 
         * @tparam ParameterType 操作数类型(必须为无符号整型)
         * @param pRegister 寄存器指针
         * @return ParameterType 寄存器值
         */
        template<std::unsigned_integral ParameterType>
        [[gnu::always_inline]]static inline ParameterType LoadExclusive(volatile ParameterType *pRegister) noexcept {
            static_assert(std::is_same_v<uint32_t, ParameterType>, "LDREX only support uint32_t");
            ParameterType Result;
            __asm__ volatile ("ldrex %0, [%1]" : "=r"(Result) : "r"(pRegister) : "memory");
            return Result;
        }
        /**
         * @brief STREX C++ Wrapper
         * 
         * @tparam ParameterType 操作数类型(必须为无符号整型)
         * @param pRegister 寄存器指针
         * @param operand 操作数
         * @return uint32_t 操作是否成功
         */
         template<std::unsigned_integral ParameterType>
        [[gnu::always_inline]]static inline uint32_t StoreExclusive(volatile ParameterType *pRegister, ParameterType Operand) noexcept {
            static_assert(std::is_same_v<uint32_t, ParameterType>, "STREX only support uint32_t");
            uint32_t Result;
            __asm__ volatile ("strex %0, %2, [%1]" : "=&r"(Result) : "r"(pRegister), "r"(Operand) : "memory");
            return Result;
        }
    public:
        AtomicOperations() = delete;
        AtomicOperations(const AtomicOperations&) = delete;
        ~AtomicOperations() = delete;
        AtomicOperations& operator=(const AtomicOperations&) = delete;
        template<std::unsigned_integral ParameterType, UnaryOperators<ParameterType> Functor>
        [[gnu::always_inline]]static inline void UnaryAtomicOperation(volatile ParameterType *pRegister) noexcept {
            if constexpr(std::is_same_v<ParameterType, uint32_t>) {
                /* 32Bit寄存器，使用 LDREX/STREX 原子原语 */
                ParameterType Result, Original;
                do {
                    Original = LoadExclusive(pRegister);
                    Result = Functor::apply(Original);
                } while(StoreExclusive(pRegister, Result) != 0u);
            } else {
                /* Fallback路径，使用关键区实现 */
                uint32_t PreviousInterruptMask = EnterCriticalSection();
                ParameterType Original = *pRegister;
                *pRegister = Functor::apply(Original);
                LeaveCriticalSection(PreviousInterruptMask);
            }
        }
        /**
         * @brief 二元原子操作
         * 
         * @tparam ParameterType 操作数类型(必须为无符号整型)
         * @tparam Functor 操作符类型(必须为BinaryOperators)
         * @param pRegister 寄存器指针
         * @param operand 操作数
         */
        template<std::unsigned_integral ParameterType, BinaryOperators<ParameterType> Functor>
        [[gnu::always_inline]]static inline void BinaryAtomicOperation(volatile ParameterType *pRegister, ParameterType operand) noexcept {
            if constexpr(std::is_same_v<ParameterType, uint32_t>) {
                /* 32Bit寄存器，使用 LDREX/STREX 原子原语 */
                ParameterType Result, Original;
                do {
                    Original = LoadExclusive(pRegister);
                    Result = Functor::apply(Original, operand);
                } while(StoreExclusive(pRegister, Result) != 0u);
            } else {
                /* Fallback路径，使用关键区实现 */
                uint32_t PreviousInterruptMask = EnterCriticalSection();
                ParameterType Original = *pRegister;
                *pRegister = Functor::apply(Original, operand);
                LeaveCriticalSection(PreviousInterruptMask);
            }
        }
        /**
         * @brief 三目原子操作
         * 
         * @tparam ParameterType 操作数类型(必须为无符号整型)
         * @tparam Functor 操作符类型(必须为TernaryOperators)
         * @param pRegister 寄存器指针
         * @param operand1 操作数1
         * @param operand2 操作数2
         */
        template<std::unsigned_integral ParameterType, TernaryOperators<ParameterType> Functor>
        [[gnu::always_inline]]static inline void TernaryAtomicOperation(volatile ParameterType *pRegister, ParameterType operand1, ParameterType operand2) noexcept {
            if constexpr(std::is_same_v<ParameterType, uint32_t>) {
                /* 32Bit寄存器，使用 LDREX/STREX 原子原语 */
                ParameterType Result, Original;
                do {
                    Original = LoadExclusive(pRegister);
                    Result = Functor::apply(Original, operand1, operand2);
                } while(StoreExclusive(pRegister, Result) != 0u);
            } else {
                /* Fallback路径，使用关键区实现 */
                uint32_t PreviousInterruptMask = EnterCriticalSection();
                ParameterType Original = *pRegister;
                *pRegister = Functor::apply(Original, operand1, operand2);
                LeaveCriticalSection(PreviousInterruptMask);
            }
        }
    };
}

#endif // TARGET_ARCH_ARM_V7M
#endif // EMBEDDED_PLUS_PLUS_ATOMIC_ARMV7M_HPP
