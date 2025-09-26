/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N655_GPIOB_S_HPP
#define EMBEDDED_PP_STM32N655_GPIOB_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief General-purpose I/Os */
namespace STM32N655::GPIOB_S {

    /** @brief GPIO port B mode register */
    using GPIOB_MODER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE0_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE0_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE0_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE0_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE1_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE1_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE1_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE1_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE2_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE2_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE2_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE2_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE3_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE3_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE3_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE3_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE4_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE4_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE4_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE4_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE5_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE5_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE5_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE5_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE6_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE6_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE6_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE6_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE7_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE7_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE7_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE7_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE8_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE8_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE8_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE8_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE9_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE9_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE9_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE9_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE10_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE10_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE10_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE10_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE11_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE11_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE11_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE11_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE12_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE12_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE12_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE12_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE13_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE13_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE13_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE13_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE14_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE14_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE14_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE14_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_MODER_MODE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General-purpose input mode (value: 0)
     *          - B_0x1: General-purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (refer to device datasheet for available options) (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief General-purpose input mode */
    constexpr std::uint32_t GPIOB_MODER_MODE15_B_0x0 = 0;
        /** @brief General-purpose output mode */
    constexpr std::uint32_t GPIOB_MODER_MODE15_B_0x1 = 1;
        /** @brief Alternate function mode (refer to device datasheet for available options) */
    constexpr std::uint32_t GPIOB_MODER_MODE15_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIOB_MODER_MODE15_B_0x3 = 3;

    /** @brief GPIO port B output type register */
    using GPIOB_OTYPER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT0_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT0_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT1_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT1_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT2_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT2_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT3_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT3_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT4_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT4_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT5_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT5_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT6_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT6_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT7_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT7_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT8_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT8_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT9_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT9_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT10_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT10_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT11_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT11_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT12_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT12_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT13_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT13_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT14_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT14_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OTYPER_OT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIOB_OTYPER_OT15_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIOB_OTYPER_OT15_B_0x1 = 1;

    /** @brief GPIO port B output speed register */
    using GPIOB_OSPEEDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED0_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED0_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED0_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED0_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED1_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED1_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED1_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED1_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED2_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED2_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED2_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED2_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED3_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED3_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED3_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED3_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED4_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED4_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED4_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED4_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED5_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED5_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED5_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED5_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED6_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED6_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED6_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED6_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED7_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED7_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED7_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED7_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED8_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED8_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED8_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED8_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED9_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED9_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED9_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED9_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED10_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED10_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED10_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED10_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED11_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED11_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED11_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED11_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED12_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED12_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED12_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED12_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED13_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED13_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED13_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED13_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED14_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED14_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED14_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED14_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_OSPEEDR_OSPEED15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED15_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED15_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED15_B_0x2 = 2;
        /** @brief Very high speed */
    constexpr std::uint32_t GPIOB_OSPEEDR_OSPEED15_B_0x3 = 3;

    /** @brief GPIO port B pull-up/pull-down register */
    using GPIOB_PUPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD0_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD0_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD0_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD1_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD1_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD1_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD2_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD2_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD2_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD3_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD3_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD3_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD4_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD4_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD4_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD5_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD5_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD5_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD6_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD6_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD6_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD7_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD7_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD7_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD8_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD8_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD8_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD9_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD9_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD9_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD10_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD10_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD10_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD11_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD11_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD11_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD12_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD12_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD12_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD13_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD13_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD13_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD14_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD14_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD14_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIOB_PUPDR_PUPD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD15_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD15_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIOB_PUPDR_PUPD15_B_0x2 = 2;

    /** @brief GPIO port B input data register */
    using GPIOB_IDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIOB_IDR_ID15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B output data register */
    using GPIOB_ODR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x output data I/O pin y */
    using GPIOB_ODR_OD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B bit set/reset register */
    using GPIOB_BSRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS0_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS0_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS1_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS1_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS2_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS2_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS3_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS3_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS4_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS4_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS5_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS5_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS6_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS6_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS7_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS7_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS8_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS8_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS9_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS9_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS10_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS10_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS11_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS11_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS12_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS12_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS13_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS13_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS14_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS14_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIOB_BSRR_BS15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Sets the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS15_B_0x0 = 0;
        /** @brief Sets the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BSRR_BS15_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR0_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR0_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR1_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR1_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR2_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR2_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR3_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR3_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR4_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR4_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR5_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR5_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR6_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR6_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR7_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR7_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR8_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR8_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR9_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR9_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR10_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR10_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR11_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR11_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR12_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR12_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR13_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR13_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR14_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR14_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIOB_BSRR_BR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR15_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIOB_BSRR_BR15_B_0x1 = 1;

    /** @brief GPIO port B configuration lock register */
    using GPIOB_LCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK0_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK0_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK1_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK1_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK2_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK2_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK3_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK3_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK4_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK4_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK5_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK5_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK6_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK6_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK7_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK7_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK8_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK8_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK9_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK9_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK10_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK10_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK11_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK11_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK12_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK12_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK13_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK13_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK14_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK14_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIOB_LCKR_LCK15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK15_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIOB_LCKR_LCK15_B_0x1 = 1;

    /** @brief Lock key */
    using GPIOB_LCKR_LCKK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration lock key not active (value: 0)
     *          - B_0x1: Port configuration lock key active. The GPIOx_LCKR register is locked until the next MCU reset or peripheral reset. (value: 1)
     */
        /** @brief Port configuration lock key not active */
    constexpr std::uint32_t GPIOB_LCKR_LCKK_B_0x0 = 0;
        /** @brief Port configuration lock key active. The GPIOx_LCKR register is locked until the next MCU reset or peripheral reset. */
    constexpr std::uint32_t GPIOB_LCKR_LCKK_B_0x1 = 1;

    /** @brief GPIO port B alternate function low register */
    using GPIOB_AFRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRL_AFSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AF0 (value: 0)
     *          - B_0x1: AF1 (value: 1)
     *          - B_0x2: AF2 (value: 2)
     *          - B_0x3: AF3 (value: 3)
     *          - B_0x4: AF4 (value: 4)
     *          - B_0x5: AF5 (value: 5)
     *          - B_0x6: AF6 (value: 6)
     *          - B_0x7: AF7 (value: 7)
     *          - B_0x8: AF8 (value: 8)
     *          - B_0x9: AF9 (value: 9)
     *          - B_0xA: AF10 (value: 10)
     *          - B_0xB: AF11 (value: 11)
     *          - B_0xC: AF12 (value: 12)
     *          - B_0xD: AF13 (value: 13)
     *          - B_0xE: AF14 (value: 14)
     *          - B_0xF: AF15 (value: 15)
     */
        /** @brief AF0 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL0_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRL_AFSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AF0 (value: 0)
     *          - B_0x1: AF1 (value: 1)
     *          - B_0x2: AF2 (value: 2)
     *          - B_0x3: AF3 (value: 3)
     *          - B_0x4: AF4 (value: 4)
     *          - B_0x5: AF5 (value: 5)
     *          - B_0x6: AF6 (value: 6)
     *          - B_0x7: AF7 (value: 7)
     *          - B_0x8: AF8 (value: 8)
     *          - B_0x9: AF9 (value: 9)
     *          - B_0xA: AF10 (value: 10)
     *          - B_0xB: AF11 (value: 11)
     *          - B_0xC: AF12 (value: 12)
     *          - B_0xD: AF13 (value: 13)
     *          - B_0xE: AF14 (value: 14)
     *          - B_0xF: AF15 (value: 15)
     */
        /** @brief AF0 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL1_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRL_AFSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AF0 (value: 0)
     *          - B_0x1: AF1 (value: 1)
     *          - B_0x2: AF2 (value: 2)
     *          - B_0x3: AF3 (value: 3)
     *          - B_0x4: AF4 (value: 4)
     *          - B_0x5: AF5 (value: 5)
     *          - B_0x6: AF6 (value: 6)
     *          - B_0x7: AF7 (value: 7)
     *          - B_0x8: AF8 (value: 8)
     *          - B_0x9: AF9 (value: 9)
     *          - B_0xA: AF10 (value: 10)
     *          - B_0xB: AF11 (value: 11)
     *          - B_0xC: AF12 (value: 12)
     *          - B_0xD: AF13 (value: 13)
     *          - B_0xE: AF14 (value: 14)
     *          - B_0xF: AF15 (value: 15)
     */
        /** @brief AF0 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL2_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRL_AFSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AF0 (value: 0)
     *          - B_0x1: AF1 (value: 1)
     *          - B_0x2: AF2 (value: 2)
     *          - B_0x3: AF3 (value: 3)
     *          - B_0x4: AF4 (value: 4)
     *          - B_0x5: AF5 (value: 5)
     *          - B_0x6: AF6 (value: 6)
     *          - B_0x7: AF7 (value: 7)
     *          - B_0x8: AF8 (value: 8)
     *          - B_0x9: AF9 (value: 9)
     *          - B_0xA: AF10 (value: 10)
     *          - B_0xB: AF11 (value: 11)
     *          - B_0xC: AF12 (value: 12)
     *          - B_0xD: AF13 (value: 13)
     *          - B_0xE: AF14 (value: 14)
     *          - B_0xF: AF15 (value: 15)
     */
        /** @brief AF0 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL3_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRL_AFSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AF0 (value: 0)
     *          - B_0x1: AF1 (value: 1)
     *          - B_0x2: AF2 (value: 2)
     *          - B_0x3: AF3 (value: 3)
     *          - B_0x4: AF4 (value: 4)
     *          - B_0x5: AF5 (value: 5)
     *          - B_0x6: AF6 (value: 6)
     *          - B_0x7: AF7 (value: 7)
     *          - B_0x8: AF8 (value: 8)
     *          - B_0x9: AF9 (value: 9)
     *          - B_0xA: AF10 (value: 10)
     *          - B_0xB: AF11 (value: 11)
     *          - B_0xC: AF12 (value: 12)
     *          - B_0xD: AF13 (value: 13)
     *          - B_0xE: AF14 (value: 14)
     *          - B_0xF: AF15 (value: 15)
     */
        /** @brief AF0 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL4_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRL_AFSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AF0 (value: 0)
     *          - B_0x1: AF1 (value: 1)
     *          - B_0x2: AF2 (value: 2)
     *          - B_0x3: AF3 (value: 3)
     *          - B_0x4: AF4 (value: 4)
     *          - B_0x5: AF5 (value: 5)
     *          - B_0x6: AF6 (value: 6)
     *          - B_0x7: AF7 (value: 7)
     *          - B_0x8: AF8 (value: 8)
     *          - B_0x9: AF9 (value: 9)
     *          - B_0xA: AF10 (value: 10)
     *          - B_0xB: AF11 (value: 11)
     *          - B_0xC: AF12 (value: 12)
     *          - B_0xD: AF13 (value: 13)
     *          - B_0xE: AF14 (value: 14)
     *          - B_0xF: AF15 (value: 15)
     */
        /** @brief AF0 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL5_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRL_AFSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AF0 (value: 0)
     *          - B_0x1: AF1 (value: 1)
     *          - B_0x2: AF2 (value: 2)
     *          - B_0x3: AF3 (value: 3)
     *          - B_0x4: AF4 (value: 4)
     *          - B_0x5: AF5 (value: 5)
     *          - B_0x6: AF6 (value: 6)
     *          - B_0x7: AF7 (value: 7)
     *          - B_0x8: AF8 (value: 8)
     *          - B_0x9: AF9 (value: 9)
     *          - B_0xA: AF10 (value: 10)
     *          - B_0xB: AF11 (value: 11)
     *          - B_0xC: AF12 (value: 12)
     *          - B_0xD: AF13 (value: 13)
     *          - B_0xE: AF14 (value: 14)
     *          - B_0xF: AF15 (value: 15)
     */
        /** @brief AF0 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL6_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRL_AFSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AF0 (value: 0)
     *          - B_0x1: AF1 (value: 1)
     *          - B_0x2: AF2 (value: 2)
     *          - B_0x3: AF3 (value: 3)
     *          - B_0x4: AF4 (value: 4)
     *          - B_0x5: AF5 (value: 5)
     *          - B_0x6: AF6 (value: 6)
     *          - B_0x7: AF7 (value: 7)
     *          - B_0x8: AF8 (value: 8)
     *          - B_0x9: AF9 (value: 9)
     *          - B_0xA: AF10 (value: 10)
     *          - B_0xB: AF11 (value: 11)
     *          - B_0xC: AF12 (value: 12)
     *          - B_0xD: AF13 (value: 13)
     *          - B_0xE: AF14 (value: 14)
     *          - B_0xF: AF15 (value: 15)
     */
        /** @brief AF0 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIOB_AFRL_AFSEL7_B_0xF = 15;

    /** @brief GPIO port B alternate function high register */
    using GPIOB_AFRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRH_AFSEL8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRH_AFSEL9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRH_AFSEL10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRH_AFSEL11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRH_AFSEL12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRH_AFSEL13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRH_AFSEL14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x I/O pin y */
    using GPIOB_AFRH_AFSEL15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B bit reset register */
    using GPIOB_BRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR0_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR0_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR1_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR1_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR2_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR2_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR3_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR3_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR4_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR4_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR5_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR5_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR6_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR6_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR7_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR7_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR8_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR8_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR9_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR9_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR10_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR10_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR11_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR11_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR12_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR12_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR13_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR13_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR14_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR14_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIOB_BRR_BR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODx bit (value: 0)
     *          - B_0x1: Reset the corresponding ODx bit (value: 1)
     */
        /** @brief No action on the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR15_B_0x0 = 0;
        /** @brief Reset the corresponding ODx bit */
    constexpr std::uint32_t GPIOB_BRR_BR15_B_0x1 = 1;

    /** @brief GPIO port B secure configuration register */
    using GPIOB_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC0_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC0_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC1_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC1_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC2_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC2_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC3_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC3_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC4_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC4_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC5_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC5_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC6_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC6_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC7_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC7_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC8_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC8_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC9_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC9_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC10_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC10_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC11_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC11_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC12_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC12_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC13_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC13_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC14_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC14_B_0x1 = 1;

    /** @brief I/O pin y of Port x security configuration */
    using GPIOB_SECCFGR_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is non-secure. Secure access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is secure (see Table 70 for all corresponding secure bits). (value: 1)
     */
        /** @brief The I/O pin y is non-secure. Secure access is also possible. */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC15_B_0x0 = 0;
        /** @brief The I/O pin y is secure (see Table 70 for all corresponding secure bits). */
    constexpr std::uint32_t GPIOB_SECCFGR_SEC15_B_0x1 = 1;

    /** @brief GPIO port B privileged configuration register */
    using GPIOB_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV0_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV0_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV1_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV1_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV2_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV2_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV3_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV3_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV4_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV4_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV5_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV5_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV6_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV6_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV7_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV7_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV8_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV8_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV9_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV9_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV10_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV10_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV11_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV11_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV12_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV12_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV13_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV13_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV14_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV14_B_0x1 = 1;

    /** @brief I/O pin y of Port x privilege configuration */
    using GPIOB_PRIVCFGR_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin y is unprivileged. Privileged access is also possible. (value: 0)
     *          - B_0x1: The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). (value: 1)
     */
        /** @brief The I/O pin y is unprivileged. Privileged access is also possible. */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV15_B_0x0 = 0;
        /** @brief The I/O pin y is privileged only (see Table 70 for all corresponding protected bits). */
    constexpr std::uint32_t GPIOB_PRIVCFGR_PRIV15_B_0x1 = 1;

    /** @brief GPIO port B resource configuration lock register */
    using GPIOB_RCFGLOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK0_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK0_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK1_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK1_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK2_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK2_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK3_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK3_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK4_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK4_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK5_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK5_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK6_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK6_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK7_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK7_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK8_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK8_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK9_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK9_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK10_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK10_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK11_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK11_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK12_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK12_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK13_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK13_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK14_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK14_B_0x1 = 1;

    /** @brief I/O pin y of port x resource lock */
    using GPIOB_RCFGLOCKR_RLOCK15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. (value: 0)
     *          - B_0x1: Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. (value: 1)
     */
        /** @brief SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are writable. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK15_B_0x0 = 0;
        /** @brief Writes to SECy in GPIOx_SECCFGR and PRIVy in GPIOx_PRIVCFGR are ignored. */
    constexpr std::uint32_t GPIOB_RCFGLOCKR_RLOCK15_B_0x1 = 1;

    /** @brief GPIO port B delay low register */
    using GPIOB_DELAYRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x IO pin y delay setup */
    using GPIOB_DELAYRL_DELAY0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay 0.3 ns (value: 1)
     *          - B_0x2: Delay 0.5 ns (value: 2)
     *          - B_0x3: Delay 0.75 ns (value: 3)
     *          - B_0x4: Delay 1.0 ns (value: 4)
     *          - B_0x5: Delay 1.25 ns (value: 5)
     *          - B_0x6: Delay 1.5 ns (value: 6)
     *          - B_0x7: Delay 1.75 ns (value: 7)
     *          - B_0x8: Delay 2.0 ns (value: 8)
     *          - B_0x9: Delay 2.25 ns (value: 9)
     *          - B_0xA: Delay 2.5 ns (value: 10)
     *          - B_0xB: Delay 2.75 ns (value: 11)
     *          - B_0xC: Delay 3.0 ns (value: 12)
     *          - B_0xD: Delay 3.25 ns (value: 13)
     */
        /** @brief No delay */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0x0 = 0;
        /** @brief Delay 0.3 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0x1 = 1;
        /** @brief Delay 0.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0x2 = 2;
        /** @brief Delay 0.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0x3 = 3;
        /** @brief Delay 1.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0x4 = 4;
        /** @brief Delay 1.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0x5 = 5;
        /** @brief Delay 1.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0x6 = 6;
        /** @brief Delay 1.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0x7 = 7;
        /** @brief Delay 2.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0x8 = 8;
        /** @brief Delay 2.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0x9 = 9;
        /** @brief Delay 2.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0xA = 10;
        /** @brief Delay 2.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0xB = 11;
        /** @brief Delay 3.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0xC = 12;
        /** @brief Delay 3.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY0_B_0xD = 13;

    /** @brief Port x IO pin y delay setup */
    using GPIOB_DELAYRL_DELAY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay 0.3 ns (value: 1)
     *          - B_0x2: Delay 0.5 ns (value: 2)
     *          - B_0x3: Delay 0.75 ns (value: 3)
     *          - B_0x4: Delay 1.0 ns (value: 4)
     *          - B_0x5: Delay 1.25 ns (value: 5)
     *          - B_0x6: Delay 1.5 ns (value: 6)
     *          - B_0x7: Delay 1.75 ns (value: 7)
     *          - B_0x8: Delay 2.0 ns (value: 8)
     *          - B_0x9: Delay 2.25 ns (value: 9)
     *          - B_0xA: Delay 2.5 ns (value: 10)
     *          - B_0xB: Delay 2.75 ns (value: 11)
     *          - B_0xC: Delay 3.0 ns (value: 12)
     *          - B_0xD: Delay 3.25 ns (value: 13)
     */
        /** @brief No delay */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0x0 = 0;
        /** @brief Delay 0.3 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0x1 = 1;
        /** @brief Delay 0.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0x2 = 2;
        /** @brief Delay 0.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0x3 = 3;
        /** @brief Delay 1.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0x4 = 4;
        /** @brief Delay 1.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0x5 = 5;
        /** @brief Delay 1.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0x6 = 6;
        /** @brief Delay 1.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0x7 = 7;
        /** @brief Delay 2.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0x8 = 8;
        /** @brief Delay 2.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0x9 = 9;
        /** @brief Delay 2.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0xA = 10;
        /** @brief Delay 2.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0xB = 11;
        /** @brief Delay 3.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0xC = 12;
        /** @brief Delay 3.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY1_B_0xD = 13;

    /** @brief Port x IO pin y delay setup */
    using GPIOB_DELAYRL_DELAY2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay 0.3 ns (value: 1)
     *          - B_0x2: Delay 0.5 ns (value: 2)
     *          - B_0x3: Delay 0.75 ns (value: 3)
     *          - B_0x4: Delay 1.0 ns (value: 4)
     *          - B_0x5: Delay 1.25 ns (value: 5)
     *          - B_0x6: Delay 1.5 ns (value: 6)
     *          - B_0x7: Delay 1.75 ns (value: 7)
     *          - B_0x8: Delay 2.0 ns (value: 8)
     *          - B_0x9: Delay 2.25 ns (value: 9)
     *          - B_0xA: Delay 2.5 ns (value: 10)
     *          - B_0xB: Delay 2.75 ns (value: 11)
     *          - B_0xC: Delay 3.0 ns (value: 12)
     *          - B_0xD: Delay 3.25 ns (value: 13)
     */
        /** @brief No delay */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0x0 = 0;
        /** @brief Delay 0.3 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0x1 = 1;
        /** @brief Delay 0.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0x2 = 2;
        /** @brief Delay 0.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0x3 = 3;
        /** @brief Delay 1.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0x4 = 4;
        /** @brief Delay 1.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0x5 = 5;
        /** @brief Delay 1.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0x6 = 6;
        /** @brief Delay 1.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0x7 = 7;
        /** @brief Delay 2.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0x8 = 8;
        /** @brief Delay 2.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0x9 = 9;
        /** @brief Delay 2.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0xA = 10;
        /** @brief Delay 2.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0xB = 11;
        /** @brief Delay 3.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0xC = 12;
        /** @brief Delay 3.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY2_B_0xD = 13;

    /** @brief Port x IO pin y delay setup */
    using GPIOB_DELAYRL_DELAY3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay 0.3 ns (value: 1)
     *          - B_0x2: Delay 0.5 ns (value: 2)
     *          - B_0x3: Delay 0.75 ns (value: 3)
     *          - B_0x4: Delay 1.0 ns (value: 4)
     *          - B_0x5: Delay 1.25 ns (value: 5)
     *          - B_0x6: Delay 1.5 ns (value: 6)
     *          - B_0x7: Delay 1.75 ns (value: 7)
     *          - B_0x8: Delay 2.0 ns (value: 8)
     *          - B_0x9: Delay 2.25 ns (value: 9)
     *          - B_0xA: Delay 2.5 ns (value: 10)
     *          - B_0xB: Delay 2.75 ns (value: 11)
     *          - B_0xC: Delay 3.0 ns (value: 12)
     *          - B_0xD: Delay 3.25 ns (value: 13)
     */
        /** @brief No delay */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0x0 = 0;
        /** @brief Delay 0.3 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0x1 = 1;
        /** @brief Delay 0.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0x2 = 2;
        /** @brief Delay 0.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0x3 = 3;
        /** @brief Delay 1.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0x4 = 4;
        /** @brief Delay 1.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0x5 = 5;
        /** @brief Delay 1.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0x6 = 6;
        /** @brief Delay 1.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0x7 = 7;
        /** @brief Delay 2.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0x8 = 8;
        /** @brief Delay 2.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0x9 = 9;
        /** @brief Delay 2.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0xA = 10;
        /** @brief Delay 2.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0xB = 11;
        /** @brief Delay 3.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0xC = 12;
        /** @brief Delay 3.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY3_B_0xD = 13;

    /** @brief Port x IO pin y delay setup */
    using GPIOB_DELAYRL_DELAY4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay 0.3 ns (value: 1)
     *          - B_0x2: Delay 0.5 ns (value: 2)
     *          - B_0x3: Delay 0.75 ns (value: 3)
     *          - B_0x4: Delay 1.0 ns (value: 4)
     *          - B_0x5: Delay 1.25 ns (value: 5)
     *          - B_0x6: Delay 1.5 ns (value: 6)
     *          - B_0x7: Delay 1.75 ns (value: 7)
     *          - B_0x8: Delay 2.0 ns (value: 8)
     *          - B_0x9: Delay 2.25 ns (value: 9)
     *          - B_0xA: Delay 2.5 ns (value: 10)
     *          - B_0xB: Delay 2.75 ns (value: 11)
     *          - B_0xC: Delay 3.0 ns (value: 12)
     *          - B_0xD: Delay 3.25 ns (value: 13)
     */
        /** @brief No delay */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0x0 = 0;
        /** @brief Delay 0.3 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0x1 = 1;
        /** @brief Delay 0.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0x2 = 2;
        /** @brief Delay 0.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0x3 = 3;
        /** @brief Delay 1.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0x4 = 4;
        /** @brief Delay 1.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0x5 = 5;
        /** @brief Delay 1.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0x6 = 6;
        /** @brief Delay 1.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0x7 = 7;
        /** @brief Delay 2.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0x8 = 8;
        /** @brief Delay 2.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0x9 = 9;
        /** @brief Delay 2.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0xA = 10;
        /** @brief Delay 2.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0xB = 11;
        /** @brief Delay 3.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0xC = 12;
        /** @brief Delay 3.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY4_B_0xD = 13;

    /** @brief Port x IO pin y delay setup */
    using GPIOB_DELAYRL_DELAY5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay 0.3 ns (value: 1)
     *          - B_0x2: Delay 0.5 ns (value: 2)
     *          - B_0x3: Delay 0.75 ns (value: 3)
     *          - B_0x4: Delay 1.0 ns (value: 4)
     *          - B_0x5: Delay 1.25 ns (value: 5)
     *          - B_0x6: Delay 1.5 ns (value: 6)
     *          - B_0x7: Delay 1.75 ns (value: 7)
     *          - B_0x8: Delay 2.0 ns (value: 8)
     *          - B_0x9: Delay 2.25 ns (value: 9)
     *          - B_0xA: Delay 2.5 ns (value: 10)
     *          - B_0xB: Delay 2.75 ns (value: 11)
     *          - B_0xC: Delay 3.0 ns (value: 12)
     *          - B_0xD: Delay 3.25 ns (value: 13)
     */
        /** @brief No delay */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0x0 = 0;
        /** @brief Delay 0.3 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0x1 = 1;
        /** @brief Delay 0.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0x2 = 2;
        /** @brief Delay 0.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0x3 = 3;
        /** @brief Delay 1.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0x4 = 4;
        /** @brief Delay 1.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0x5 = 5;
        /** @brief Delay 1.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0x6 = 6;
        /** @brief Delay 1.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0x7 = 7;
        /** @brief Delay 2.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0x8 = 8;
        /** @brief Delay 2.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0x9 = 9;
        /** @brief Delay 2.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0xA = 10;
        /** @brief Delay 2.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0xB = 11;
        /** @brief Delay 3.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0xC = 12;
        /** @brief Delay 3.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY5_B_0xD = 13;

    /** @brief Port x IO pin y delay setup */
    using GPIOB_DELAYRL_DELAY6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay 0.3 ns (value: 1)
     *          - B_0x2: Delay 0.5 ns (value: 2)
     *          - B_0x3: Delay 0.75 ns (value: 3)
     *          - B_0x4: Delay 1.0 ns (value: 4)
     *          - B_0x5: Delay 1.25 ns (value: 5)
     *          - B_0x6: Delay 1.5 ns (value: 6)
     *          - B_0x7: Delay 1.75 ns (value: 7)
     *          - B_0x8: Delay 2.0 ns (value: 8)
     *          - B_0x9: Delay 2.25 ns (value: 9)
     *          - B_0xA: Delay 2.5 ns (value: 10)
     *          - B_0xB: Delay 2.75 ns (value: 11)
     *          - B_0xC: Delay 3.0 ns (value: 12)
     *          - B_0xD: Delay 3.25 ns (value: 13)
     */
        /** @brief No delay */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0x0 = 0;
        /** @brief Delay 0.3 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0x1 = 1;
        /** @brief Delay 0.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0x2 = 2;
        /** @brief Delay 0.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0x3 = 3;
        /** @brief Delay 1.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0x4 = 4;
        /** @brief Delay 1.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0x5 = 5;
        /** @brief Delay 1.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0x6 = 6;
        /** @brief Delay 1.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0x7 = 7;
        /** @brief Delay 2.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0x8 = 8;
        /** @brief Delay 2.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0x9 = 9;
        /** @brief Delay 2.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0xA = 10;
        /** @brief Delay 2.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0xB = 11;
        /** @brief Delay 3.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0xC = 12;
        /** @brief Delay 3.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY6_B_0xD = 13;

    /** @brief Port x IO pin y delay setup */
    using GPIOB_DELAYRL_DELAY7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay (value: 0)
     *          - B_0x1: Delay 0.3 ns (value: 1)
     *          - B_0x2: Delay 0.5 ns (value: 2)
     *          - B_0x3: Delay 0.75 ns (value: 3)
     *          - B_0x4: Delay 1.0 ns (value: 4)
     *          - B_0x5: Delay 1.25 ns (value: 5)
     *          - B_0x6: Delay 1.5 ns (value: 6)
     *          - B_0x7: Delay 1.75 ns (value: 7)
     *          - B_0x8: Delay 2.0 ns (value: 8)
     *          - B_0x9: Delay 2.25 ns (value: 9)
     *          - B_0xA: Delay 2.5 ns (value: 10)
     *          - B_0xB: Delay 2.75 ns (value: 11)
     *          - B_0xC: Delay 3.0 ns (value: 12)
     *          - B_0xD: Delay 3.25 ns (value: 13)
     */
        /** @brief No delay */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0x0 = 0;
        /** @brief Delay 0.3 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0x1 = 1;
        /** @brief Delay 0.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0x2 = 2;
        /** @brief Delay 0.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0x3 = 3;
        /** @brief Delay 1.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0x4 = 4;
        /** @brief Delay 1.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0x5 = 5;
        /** @brief Delay 1.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0x6 = 6;
        /** @brief Delay 1.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0x7 = 7;
        /** @brief Delay 2.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0x8 = 8;
        /** @brief Delay 2.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0x9 = 9;
        /** @brief Delay 2.5 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0xA = 10;
        /** @brief Delay 2.75 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0xB = 11;
        /** @brief Delay 3.0 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0xC = 12;
        /** @brief Delay 3.25 ns */
    constexpr std::uint32_t GPIOB_DELAYRL_DELAY7_B_0xD = 13;

    /** @brief GPIO port B delay high register */
    using GPIOB_DELAYRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y delay setup */
    using GPIOB_DELAYRH_DELAY8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y delay setup */
    using GPIOB_DELAYRH_DELAY9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y delay setup */
    using GPIOB_DELAYRH_DELAY10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y delay setup */
    using GPIOB_DELAYRH_DELAY11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y delay setup */
    using GPIOB_DELAYRH_DELAY12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y delay setup */
    using GPIOB_DELAYRH_DELAY13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y delay setup */
    using GPIOB_DELAYRH_DELAY14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y delay setup */
    using GPIOB_DELAYRH_DELAY15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B PIO control low register */
    using GPIOB_PIOCFGRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRL_PIOCFG0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input and output data are not synchronized or retimed on clock edges. (value: 0)
     *          - B_0x1: Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). (value: 1)
     */
        /** @brief Input and output data are not synchronized or retimed on clock edges. */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG0_B_0x0 = 0;
        /** @brief Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG0_B_0x1 = 1;

    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRL_PIOCFG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input and output data are not synchronized or retimed on clock edges. (value: 0)
     *          - B_0x1: Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). (value: 1)
     */
        /** @brief Input and output data are not synchronized or retimed on clock edges. */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG1_B_0x0 = 0;
        /** @brief Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG1_B_0x1 = 1;

    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRL_PIOCFG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input and output data are not synchronized or retimed on clock edges. (value: 0)
     *          - B_0x1: Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). (value: 1)
     */
        /** @brief Input and output data are not synchronized or retimed on clock edges. */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG2_B_0x0 = 0;
        /** @brief Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG2_B_0x1 = 1;

    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRL_PIOCFG3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input and output data are not synchronized or retimed on clock edges. (value: 0)
     *          - B_0x1: Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). (value: 1)
     */
        /** @brief Input and output data are not synchronized or retimed on clock edges. */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG3_B_0x0 = 0;
        /** @brief Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG3_B_0x1 = 1;

    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRL_PIOCFG4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input and output data are not synchronized or retimed on clock edges. (value: 0)
     *          - B_0x1: Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). (value: 1)
     */
        /** @brief Input and output data are not synchronized or retimed on clock edges. */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG4_B_0x0 = 0;
        /** @brief Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG4_B_0x1 = 1;

    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRL_PIOCFG5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input and output data are not synchronized or retimed on clock edges. (value: 0)
     *          - B_0x1: Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). (value: 1)
     */
        /** @brief Input and output data are not synchronized or retimed on clock edges. */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG5_B_0x0 = 0;
        /** @brief Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG5_B_0x1 = 1;

    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRL_PIOCFG6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input and output data are not synchronized or retimed on clock edges. (value: 0)
     *          - B_0x1: Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). (value: 1)
     */
        /** @brief Input and output data are not synchronized or retimed on clock edges. */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG6_B_0x0 = 0;
        /** @brief Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG6_B_0x1 = 1;

    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRL_PIOCFG7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input and output data are not synchronized or retimed on clock edges. (value: 0)
     *          - B_0x1: Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). (value: 1)
     */
        /** @brief Input and output data are not synchronized or retimed on clock edges. */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG7_B_0x0 = 0;
        /** @brief Input and output data are retimed to either rising or falling clock edge depending on PIOCFG[2] value (cfg_invertclk). */
    constexpr std::uint32_t GPIOB_PIOCFGRL_PIOCFG7_B_0x1 = 1;

    /** @brief GPIO port B PIO control high register */
    using GPIOB_PIOCFGRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRH_PIOCFG8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRH_PIOCFG9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRH_PIOCFG10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRH_PIOCFG11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRH_PIOCFG12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRH_PIOCFG13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRH_PIOCFG14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x I/O pin y configuration */
    using GPIOB_PIOCFGRH_PIOCFG15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B hardware configuration register 10 */
    using GPIOB_HWCFGR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus interface selection */
    using GPIOB_HWCFGR10_AHB_IOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB (value: 0)
     *          - B_0x1: IOP (value: 1)
     */
        /** @brief AHB */
    constexpr std::uint32_t GPIOB_HWCFGR10_AHB_IOP_B_0x0 = 0;
        /** @brief IOP */
    constexpr std::uint32_t GPIOB_HWCFGR10_AHB_IOP_B_0x1 = 1;

    /** @brief Number of AF available for each I/O (accepted value: 1 to 4) */
    using GPIOB_HWCFGR10_AFSIZE_CFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: One AF/IO (value: 1)
     */
        /** @brief One AF/IO */
    constexpr std::uint32_t GPIOB_HWCFGR10_AFSIZE_CFG_B_0x1 = 1;

    /** @brief Number of speed lines for each I/O */
    using GPIOB_HWCFGR10_SPEED_CFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: One line (value: 0)
     *          - B_0x1: Two lines (value: 1)
     */
        /** @brief One line */
    constexpr std::uint32_t GPIOB_HWCFGR10_SPEED_CFG_B_0x0 = 0;
        /** @brief Two lines */
    constexpr std::uint32_t GPIOB_HWCFGR10_SPEED_CFG_B_0x1 = 1;

    /** @brief Lock mechanism activation */
    using GPIOB_HWCFGR10_LOCK_CFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-active (value: 0)
     *          - B_0x1: Active (value: 1)
     */
        /** @brief Non-active */
    constexpr std::uint32_t GPIOB_HWCFGR10_LOCK_CFG_B_0x0 = 0;
        /** @brief Active */
    constexpr std::uint32_t GPIOB_HWCFGR10_LOCK_CFG_B_0x1 = 1;

    /** @brief Security activation */
    using GPIOB_HWCFGR10_SEC_CFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-active (value: 0)
     *          - B_0x1: Active (value: 1)
     */
        /** @brief Non-active */
    constexpr std::uint32_t GPIOB_HWCFGR10_SEC_CFG_B_0x0 = 0;
        /** @brief Active */
    constexpr std::uint32_t GPIOB_HWCFGR10_SEC_CFG_B_0x1 = 1;

    /** @brief Option register configuration */
    using GPIOB_HWCFGR10_OR_CFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-active (value: 0)
     *          - B_0x1: Active (value: 1)
     */
        /** @brief Non-active */
    constexpr std::uint32_t GPIOB_HWCFGR10_OR_CFG_B_0x0 = 0;
        /** @brief Active */
    constexpr std::uint32_t GPIOB_HWCFGR10_OR_CFG_B_0x1 = 1;

    /** @brief GPIO port B hardware configuration register 9 */
    using GPIOB_HWCFGR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Presence granularity, each bit indicate the I/O presence */
    using GPIOB_HWCFGR9_EN_IO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O not present (value: 0)
     *          - B_0x1: I/O present (value: 1)
     */
        /** @brief I/O not present */
    constexpr std::uint32_t GPIOB_HWCFGR9_EN_IO_B_0x0 = 0;
        /** @brief I/O present */
    constexpr std::uint32_t GPIOB_HWCFGR9_EN_IO_B_0x1 = 1;

    /** @brief GPIO port B hardware configuration register 8 */
    using GPIOB_HWCFGR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR8_FAST_AF_IO8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR8_FAST_AF_IO9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR8_FAST_AF_IO10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR8_FAST_AF_IO11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR8_FAST_AF_IO12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR8_FAST_AF_IO13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR8_FAST_AF_IO14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR8_FAST_AF_IO15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B hardware configuration register 7 */
    using GPIOB_HWCFGR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR7_FAST_AF_IO0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR7_FAST_AF_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR7_FAST_AF_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR7_FAST_AF_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR7_FAST_AF_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR7_FAST_AF_IO5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR7_FAST_AF_IO6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate which is the fastest AF for I/Oy (0 to F) */
    using GPIOB_HWCFGR7_FAST_AF_IO7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B hardware configuration register 6 */
    using GPIOB_HWCFGR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODER register reset value */
    using GPIOB_HWCFGR6_MODER_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B hardware configuration register 5 */
    using GPIOB_HWCFGR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pull-up/pull-down register reset value */
    using GPIOB_HWCFGR5_PUPDR_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B hardware configuration register 4 */
    using GPIOB_HWCFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED register reset value */
    using GPIOB_HWCFGR4_OSPEED_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B hardware configuration register 3 */
    using GPIOB_HWCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output data register reset value */
    using GPIOB_HWCFGR3_ODR_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output type register reset value */
    using GPIOB_HWCFGR3_OTYPER_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B hardware configuration register 2 */
    using GPIOB_HWCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AF register low reset value */
    using GPIOB_HWCFGR2_AFRL_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B hardware configuration register 1 */
    using GPIOB_HWCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AF register high reset value */
    using GPIOB_HWCFGR1_AFRH_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B hardware configuration register 0 */
    using GPIOB_HWCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option register reset value */
    using GPIOB_HWCFGR0_OR_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B version register */
    using GPIOB_VERR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO minor revision */
    using GPIOB_VERR_MINREV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO major revision */
    using GPIOB_VERR_MAJREV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B identification register */
    using GPIOB_IPIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO identifier */
    using GPIOB_IPIDR_IPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port B size identification register */
    using GPIOB_SIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Size of the memory region allocated to GPIO registers */
    using GPIOB_SIDR_SID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
