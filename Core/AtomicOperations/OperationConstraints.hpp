/**
 * @file OperationConstraints.hpp
 * @author ZhiYi-R(jinyi.shy@gmail.com)
 * @brief 操作符概念约束
 * @details 实现了单目、双目、三目Functor的concept，用于将操作符模板化以便于跨平台编程
 * @version 0.1
 * @date 2025-09-28
 * @copyright 2025 @ZhiYi-R All right reserved.
 * 
 */
#ifndef EMBEDDED_PLUS_PLUS_OPERATION_CONSTRAINTS_HPP
#define EMBEDDED_PLUS_PLUS_OPERATION_CONSTRAINTS_HPP

#include <concepts>

namespace EmbeddedPP::LowLevel {
    /**
     * @brief 单目操作符概念约束
     * 
     * @tparam Functor 操作符类
     * @tparam ParameterType 操作数类型
     */
    template<typename Functor, typename ParameterType>
    concept UnaryOperators = std::unsigned_integral<ParameterType> && requires {
        { Functor::apply(ParameterType{})} -> std::same_as<ParameterType>;
    };
    /**
     * @brief 双目操作符概念约束
     * 
     * @tparam Functor 操作符类
     * @tparam ParameterType 操作数类型
     */
    template<typename Functor, typename ParameterType>
    concept BinaryOperators = std::unsigned_integral<ParameterType> && requires {
        { Functor::apply(ParameterType{}, ParameterType{})} -> std::same_as<ParameterType>;
    };
    /**
     * @brief 三目操作符概念约束
     * 
     * @tparam Functor 操作符类
     * @tparam ParameterType 操作数类型
     */
    template<typename Functor, typename ParameterType>
    concept TernaryOperators = std::unsigned_integral<ParameterType> && requires {
        { Functor::apply(ParameterType{}, ParameterType{}, ParameterType{})} -> std::same_as<ParameterType>;
    };
    /**
     * @brief 操作符概念约束
     * 
     * @tparam Functor 操作符类
     * @tparam ParameterType 操作数类型
     */
    template<typename Functor, typename ParameterType>
    concept Operators = UnaryOperators<Functor, ParameterType> || BinaryOperators<Functor, ParameterType> || TernaryOperators<Functor, ParameterType>;
}

#endif