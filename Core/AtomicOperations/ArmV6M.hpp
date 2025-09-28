/**
 * @file ArmV6M.hpp
 * @author ZhiYi-R(jinyi.shy@gmail.com)
 * @brief ARMv6M 架构下的原子操作
 * @version 0.1
 * @date 2025-09-28
 * @copyright 2025 @ZhiYi-R All right reserved.
 * 
 */
#ifndef EMBEDDED_PLUS_PLUS_ATOMIC_ARMV6M_HPP
#define EMBEDDED_PLUS_PLUS_ATOMIC_ARMV6M_HPP

#if defined (TARGET_ARCH_ARM_V6M) && TARGET_ARCH_ARM_V6M

#include <cstdint>
#include <concepts>

#include "OperationConstraints.hpp"


namespace EmbeddedPP::LowLevel {

    class AtomicOperations final {
    private:
        [[gnu::always_inline]]static inline uint32_t EnterCriticalSection() noexcept {
            uint32_t PreviousInterruptMask;
            __asm volatile("mrs %0, primask" : "=r"(PreviousInterruptMask));
            __asm volatile("cpsid i" : : : "memory");
            return PreviousInterruptMask;
        }
        [[gnu::always_inline]]static inline void LeaveCriticalSection(uint32_t PreviousInterruptMask) noexcept {
            __asm volatile("msr primask, %0" :: "r"(PreviousInterruptMask) : "memory");
        }
    public:
        AtomicOperations() = delete;
        ~AtomicOperations() = delete;
        AtomicOperations(const AtomicOperations&) = delete;
        AtomicOperations& operator=(const AtomicOperations&) = delete;
        /**
         * @brief 应用原子单目操作到寄存器
         * 
         * @tparam ParameterType 操作数类型
         * @tparam Functor 操作符类
         * @param pRegister 寄存器指针
         */
        template<std::unsigned_integral ParameterType, UnaryOperators<ParameterType> Functor>
        [[gnu::always_inline]]static inline void UnaryAtomicOperation(volatile ParameterType *pRegister) noexcept {
            uint32_t PreviousInterruptMask = EnterCriticalSection();
            *pRegister = Functor::apply(*pRegister);
            LeaveCriticalSection(PreviousInterruptMask);
        }
        /**
         * @brief 应用原子双目操作到寄存器
         * 
         * @tparam ParameterType 操作数类型
         * @tparam Functor 操作符类
         * @param pRegister 寄存器指针
         * @param operand 操作数
         */
        template<std::unsigned_integral ParameterType, BinaryOperators<ParameterType> Functor>
        [[gnu::always_inline]]static inline void BinaryAtomicOperation(volatile ParameterType *pRegister, ParameterType operand) noexcept {
            uint32_t PreviousInterruptMask = EnterCriticalSection();
            *pRegister = Functor::apply(*pRegister, operand);
            LeaveCriticalSection(PreviousInterruptMask);
        }
        /**
         * @brief 应用原子三目操作到寄存器
         * 
         * @tparam ParameterType 操作数类型
         * @tparam Functor 操作符类
         * @param pRegister 寄存器指针
         * @param operand1 操作数1
         * @param operand2 操作数2
         */
        template<std::unsigned_integral ParameterType, TernaryOperators<ParameterType> Functor>
        [[gnu::always_inline]]static inline void TernaryAtomicOperation(volatile ParameterType *pRegister, ParameterType operand1, ParameterType operand2) noexcept {
            uint32_t PreviousInterruptMask = EnterCriticalSection();
            *pRegister = Functor::apply(*pRegister, operand1, operand2);
            LeaveCriticalSection(PreviousInterruptMask);
        }
    };
}

#endif // TARGET_ARCH_ARM_V6M

#endif // EMBEDDED_PLUS_PLUS_ATOMIC_ARMV6M_HPP