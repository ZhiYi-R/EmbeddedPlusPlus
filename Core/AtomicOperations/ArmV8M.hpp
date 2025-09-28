/**
 * @file ArmV8M.hpp
 * @author ZhiYi-R(jinyi.shy@gmail.com)
 * @brief ARMv8M 架构下的原子操作
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright 2025 @ZhiYi-R All right reserved.
 * 
 */
#ifndef EMBEDDED_PLUS_PLUS_ATOMIC_ARMV8M_HPP
#define EMBEDDED_PLUS_PLUS_ATOMIC_ARMV8M_HPP

#if defined (TARGET_ARCH_ARM_V8M) && TARGET_ARCH_ARM_V8M

#include <cstdint>
#include <concepts>
#include <type_traits>

#include "OperationConstraints.hpp"

namespace EmbeddedPP::LowLevel {
    class AtomicOperations final {
    private:
        /**
         * @brief 加载独占操作
         * 
         * @tparam ParameterType 操作数类型(必须为无符号整型)
         * @param pRegister 操作数指针
         * @return ParameterType 加载结果
         */
        template<std::unsigned_integral ParameterType>
        [[gnu::always_inline]]static inline ParameterType LoadExclusive(volatile ParameterType *pRegister) noexcept {
            if constexpr(std::is_same_v<uint8_t, ParameterType>) {
                /* 8Bit路径：LDREXB */
                ParameterType Result;
                __asm__ volatile("ldrexb %0, [%1]" : "=r"(Result) : "r"(pRegister) : "memory");
                return Result;
            } else if constexpr(std::is_same_v<uint16_t, ParameterType>) {
                /* 16Bit路径：LDREXH */
                ParameterType Result;
                __asm__ volatile("ldrexh %0, [%1]" : "=r"(Result) : "r"(pRegister) : "memory");
                return Result;
            } else if constexpr(std::is_same_v<uint32_t, ParameterType>) {
                /* 32Bit路径：LDREX */
                ParameterType Result;
                __asm__ volatile("ldrex %0, [%1]" : "=r"(Result) : "r"(pRegister) : "memory");
                return Result;
            } else {
                static_assert(sizeof(ParameterType) == 0, "Unsupported parameter type for LoadExclusive");
            }
        }
        /**
         * @brief 存储独占操作
         * 
         * @tparam ParameterType 操作数类型(必须为无符号整型)
         * @param pRegister 操作数指针
         * @param Operand 操作数
         */
        template<std::unsigned_integral ParameterType>
        [[gnu::always_inline]]static inline bool StoreExclusive(volatile ParameterType* pRegister, ParameterType Operand) noexcept {
            if constexpr(std::is_same_v<uint8_t, ParameterType>) {
                /* 8Bit路径：STREXB */
                uint32_t status;
                __asm__ volatile("strexb %0, %1, [%2]" : "=&r"(status) : "r"(Operand), "r"(pRegister) : "memory");
                return status == 0;
            } else if constexpr(std::is_same_v<uint16_t, ParameterType>) {
                /* 16Bit路径：STREXH */
                uint32_t status;
                __asm__ volatile("strexh %0, %1, [%2]" : "=&r"(status) : "r"(Operand), "r"(pRegister) : "memory");
                return status == 0;
            } else if constexpr(std::is_same_v<uint32_t, ParameterType>) {
                /* 32Bit路径：STREX */
                uint32_t status;
                __asm__ volatile("strex %0, %1, [%2]" : "=&r"(status) : "r"(Operand), "r"(pRegister) : "memory");
                return status == 0;
            } else {
                static_assert(sizeof(ParameterType) == 0, "Unsupported parameter type for StoreExclusive");
            }
        }
    public:
        AtomicOperations() = delete;
        ~AtomicOperations() = delete;
        AtomicOperations(const AtomicOperations &) = delete;
        AtomicOperations &operator=(const AtomicOperations &) = delete;
        /**
         * @brief 单目原子操作
         * 
         * @tparam ParameterType 操作数类型(必须为无符号整型)
         * @tparam Functor 操作符类型(必须为Functor类型)
         * @param pRegister 操作数指针
         */
        template<std::unsigned_integral ParameterType, UnaryOperators<ParameterType> Functor>
        [[gnu::always_inline]]static inline void UnaryAtomicOperation(volatile ParameterType* pRegister) noexcept {
            ParameterType Original, Result;
            do {
                Original = LoadExclusive(pRegister);
                Result = Functor::apply(Original);
            } while(!StoreExclusive(pRegister, Result));
        }
        /**
         * @brief 双目原子操作
         * 
         * @tparam ParameterType 操作数类型(必须为无符号整型)
         * @tparam Functor 操作符类型(必须为Functor类型)
         * @param pRegister 操作数指针
         * @param Operand 操作数
         */
        template<std::unsigned_integral ParameterType, BinaryOperators<ParameterType> Functor>
        [[gnu::always_inline]]static inline void BinaryAtomicOperation(volatile ParameterType* pRegister, ParameterType Operand) noexcept {
            ParameterType Original, Result;
            do {
                Original = LoadExclusive(pRegister);
                Result = Functor::apply(Original, Operand);
            } while(!StoreExclusive(pRegister, Result));
        }
        /**
         * @brief 三目原子操作
         * 
         * @tparam ParameterType 操作数类型(必须为无符号整型)
         * @tparam Functor 操作符类型(必须为Functor类型)
         * @param pRegister 操作数指针
         * @param Operand 操作数
         */
        template<std::unsigned_integral ParameterType, TernaryOperators<ParameterType> Functor>
        [[gnu::always_inline]]static inline void TernaryAtomicOperation(volatile ParameterType* pRegister, ParameterType Operand1, ParameterType Operand2) noexcept {
            ParameterType Original, Result;
            do {
                Original = LoadExclusive(pRegister);
                Result = Functor::apply(Original, Operand1, Operand2);
            } while(!StoreExclusive(pRegister, Result));
        }
    };
}

#endif /* TARGET_ARCH_ARM_V8M */

#endif /* EMBEDDED_PLUS_PLUS_ATOMIC_ARMV8M_HPP */