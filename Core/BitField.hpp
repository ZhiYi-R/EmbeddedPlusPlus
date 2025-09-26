/**
 * @file BitField.hpp
 * @author ZhiYi-R(jinyi.shy@gmail.com)
 * @brief 位域模板及其对应的concept约束的实现
 * @version 0.1
 * @date 2025-09-25
 * @copyright 2025 @ZhiYi-R All right reserved.
 */
#ifndef EMBEDDED_PLUS_PLUS_BITFIELD_HPP
#define EMBEDDED_PLUS_PLUS_BITFIELD_HPP

#include <cstdint>
#include <concepts>
#include <type_traits>

#include "Common.hpp"

namespace EmbeddedPP::LowLevel {
    /**
     * @brief 计算位域对应的掩码
     * 
     * @tparam RegisterValueType 位域所在寄存器值的类型
     * @tparam StartBit 位域起始位
     * @tparam BitWidth 位域宽度
     * @return RegisterValueType 位域掩码
     */
    template<std::integral RegisterValueType, uint8_t StartBit, uint8_t BitWidth>
    consteval RegisterValueType CalculateBitMask(void) {
        using UnsignedValueType = std::make_unsigned_t<RegisterValueType>;
        UnsignedValueType RawMask;
        if constexpr(BitWidth == sizeof(RegisterValueType) * 8)
            RawMask = ~UnsignedValueType{0};
        else
            RawMask = ((UnsignedValueType{1} << BitWidth) - 1) << StartBit;
        return static_cast<RegisterValueType>(RawMask);
    }
    /**
     * @brief 位域模板
     * 
     * @tparam RegisterValueType 位域所在寄存器值的类型
     * @tparam StartBit 位域起始位
     * @tparam BitWidth 位域宽度
     * @tparam Access 访问权限修饰符
     */
    template <std::integral RegisterValueType, uint8_t StartBit, uint8_t BitWidth, Accessibility Access>
    struct BitField {
        static_assert(BitWidth > 0, "Bitfield width must be greater than 0");
        static_assert(StartBit + BitWidth <= sizeof(RegisterValueType) * 8, "Bitfield out of bounds");
        static constexpr RegisterValueType Mask = CalculateBitMask<RegisterValueType, StartBit, BitWidth>();
        static constexpr uint8_t Offset = StartBit;
        static constexpr uint8_t Width = BitWidth;
        static constexpr Accessibility Privilege = Access;
    };
};

namespace EmbeddedPP::LowLevel::Internal {
    /**
     * @brief 检查T是否符合位域类型要求
     * 
     * @tparam T 待检查类型
     */
    template<typename T>
    concept BitFieldDescriptor = std::is_class_v<T> && requires {
        requires std::integral<decltype(T::Mask)>;
        requires std::unsigned_integral<decltype(T::Offset)>;
        requires std::unsigned_integral<decltype(T::Width)>;
        requires std::is_same_v<Accessibility, decltype(T::Privilege)>;
        requires T::Width > 0;
    };
}

#endif