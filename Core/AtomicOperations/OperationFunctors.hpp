/** */
#ifndef EMBEDDED_PLUS_PLUS_OPERATION_FUNCTORS_HPP
#define EMBEDDED_PLUS_PLUS_OPERATION_FUNCTORS_HPP

#include <concepts>

namespace EmbeddedPP::LowLevel {
    /**
     * @brief 按位与操作符
     * 
     * @tparam ParameterType 操作数类型(必须为无符号整型)
     */
    template <std::unsigned_integral ParameterType>
    struct FunctorAnd {
        /**
         * @brief 应用操作 a & b
         * 
         * @param a 操作数a
         * @param b 操作数b
         * @return ParameterType 按位与结果
         */
        [[gnu::always_inline]]static inline ParameterType apply(ParameterType a, ParameterType b) noexcept {
            return a & b;
        }
    };
    /**
     * @brief 按位或操作符
     * 
     * @tparam ParameterType 操作数类型(必须为无符号整型)
     */
    template <std::unsigned_integral ParameterType>
    struct FunctorOr {
        /**
         * @brief 应用操作 a | b
         * 
         * @param a 操作数a
         * @param b 操作数b
         * @return ParameterType 按位或结果
         */
        [[gnu::always_inline]]static inline ParameterType apply(ParameterType a, ParameterType b) noexcept {
            return a | b;
        }
    };
    /**
     * @brief 按位异或操作符
     * 
     * @tparam ParameterType 操作数类型(必须为无符号整型)
     */
    template <std::unsigned_integral ParameterType>
    struct FunctorXor {
        /**
         * @brief 应用操作 a ^ b
         * 
         * @param a 操作数a
         * @param b 操作数b
         * @return ParameterType 按位异或结果
         */
        [[gnu::always_inline]]static inline ParameterType apply(ParameterType a, ParameterType b) noexcept {
            return a ^ b;
        }
    };
    /**
     * @brief 按位取反操作符
     * 
     * @tparam ParameterType 操作数类型(必须为无符号整型)
     */
    template <std::unsigned_integral ParameterType>
    struct FunctorNot {
        /**
         * @brief 应用操作 ~a
         * 
         * @param a 操作数a
         * @return ParameterType 按位取反结果
         */
        [[gnu::always_inline]]static inline ParameterType apply(ParameterType a) noexcept {
            return ~a;
        }
    };
    /**
     * @brief 按位左移操作符
     * 
     * @tparam ParameterType 操作数类型(必须为无符号整型)
     */
    template <std::unsigned_integral ParameterType>
    struct FunctorLeftShift {
        /**
         * @brief 应用操作 a << b
         * 
         * @param a 操作数a
         * @param b 操作数b
         * @return ParameterType 按位左移结果
         */
        [[gnu::always_inline]]static inline ParameterType apply(ParameterType a, ParameterType b) noexcept {
            return a << b;
        }
    };
    /**
     * @brief 按位右移操作符
     * 
     * @tparam ParameterType 操作数类型(必须为无符号整型)
     */
    template <std::unsigned_integral ParameterType>
    struct FunctorRightShift {
        /**
         * @brief 应用操作 a >> b
         * 
         * @param a 操作数a
         * @param b 操作数b
         * @return ParameterType 按位右移结果
         */
        [[gnu::always_inline]]static inline ParameterType apply(ParameterType a, ParameterType b) noexcept {
            return a >> b;
        }
    };
    /**
     * @brief 按位域写入操作符
     * 
     * @tparam ParameterType 操作数类型(必须为无符号整型)
     */
    template<std::unsigned_integral ParameterType>
    struct FunctorWriteBitField {
        /**
         * @brief 按位域写入操作符(a = (a & (~c)) | (b & c))
         * 
         * @param a 操作数a(待写入的寄存器)
         * @param b 操作数b(写入的数值,注意:需要预先移位到对应位置)
         * @param c 操作数c(位域掩码)
         * @return ParameterType 按位域写入结果
         */
        [[gnu::always_inline]]static inline ParameterType apply(ParameterType a, ParameterType b, ParameterType c) noexcept {
            return (a & (~c)) | (b & c);
        }
    };
}

#endif