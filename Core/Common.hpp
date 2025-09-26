/**
 * @file Common.hpp
 * @author ZhiYi-R(jinyi.shy@gmail.com)
 * @brief 一些不知道该放哪的东西....
 * @version 0.1
 * @date 2025-09-25
 * 
 * @copyright 2025 @ZhiYi-R All right reserved.
 * 
 */
#ifndef EMBEDDED_PLUS_PLUS_COMMON_HPP
#define EMBEDDED_PLUS_PLUS_COMMON_HPP

#include <cstdint>

namespace EmbeddedPP::LowLevel {
    /// @brief 访问权限枚举
    enum class Accessibility:uint8_t { ReadOnly, WriteOnly, ReadWrite, Reserved };
}

#endif