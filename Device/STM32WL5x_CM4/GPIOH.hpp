/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL5X_CM4_GPIOH_HPP
#define EMBEDDED_PP_STM32WL5X_CM4_GPIOH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief General-purpose I/Os */
namespace STM32WL5x_CM4::GPIOH {

    /** @brief GPIO port mode register */
    using MODER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration bits (y = 0..15) */
    using MODER_MODER3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port output type register */
    using OTYPER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration bits (y = 0..15) */
    using OTYPER_OT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port output speed register */
    using OSPEEDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration bits (y = 0..15) */
    using OSPEEDR_OSPEEDR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port pull-up/pull-down register */
    using PUPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration bits (y = 0..15) */
    using PUPDR_PUPDR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port input data register */
    using IDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port input data (y = 0..15) */
    using IDR_IDR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port output data register */
    using ODR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data (y = 0..15) */
    using ODR_ODR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port bit set/reset register */
    using BSRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x reset bit y (y = 0..15) */
    using BSRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x set bit y (y= 0..15) */
    using BSRR_BS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port configuration lock register */
    using LCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x lock bit y (y= 0..15) */
    using LCKR_LCKK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x lock bit y (y= 0..15) */
    using LCKR_LCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO alternate function low register */
    using AFRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x bit y (y = 0..7) */
    using AFRL_AFRL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO alternate function high register */
    using AFRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x bit y (y = 8..15) */
    using AFRH_AFRH15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x bit y (y = 8..15) */
    using AFRH_AFRH14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x bit y (y = 8..15) */
    using AFRH_AFRH13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x bit y (y = 8..15) */
    using AFRH_AFRH12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x bit y (y = 8..15) */
    using AFRH_AFRH11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x bit y (y = 8..15) */
    using AFRH_AFRH10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x bit y (y = 8..15) */
    using AFRH_AFRH9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x bit y (y = 8..15) */
    using AFRH_AFRH8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port bit reset register */
    using BRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port Reset bit */
    using BRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
