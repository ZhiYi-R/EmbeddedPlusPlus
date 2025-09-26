/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U535_GPIOH_HPP
#define EMBEDDED_PP_STM32U535_GPIOH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief General-purpose I/Os */
namespace STM32U535::GPIOH {

    /** @brief GPIO port mode register */
    using GPIO_MODER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE0_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE0_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE0_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE0_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE1_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE1_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE1_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE1_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE2_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE2_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE2_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE2_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE3_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE3_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE3_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE3_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE4_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE4_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE4_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE4_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE5_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE5_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE5_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE5_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE6_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE6_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE6_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE6_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE7_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE7_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE7_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE7_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE8_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE8_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE8_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE8_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE9_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE9_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE9_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE9_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE10_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE10_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE10_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE10_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE11_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE11_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE11_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE11_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE12_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE12_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE12_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE12_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE13_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE13_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE13_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE13_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE14_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE14_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE14_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE14_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_MODER_MODE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input mode (value: 0)
     *          - B_0x1: General purpose output mode (value: 1)
     *          - B_0x2: Alternate function mode (value: 2)
     *          - B_0x3: Analog mode (reset state) (value: 3)
     */
        /** @brief Input mode */
    constexpr std::uint32_t GPIO_MODER_MODE15_B_0x0 = 0;
        /** @brief General purpose output mode */
    constexpr std::uint32_t GPIO_MODER_MODE15_B_0x1 = 1;
        /** @brief Alternate function mode */
    constexpr std::uint32_t GPIO_MODER_MODE15_B_0x2 = 2;
        /** @brief Analog mode (reset state) */
    constexpr std::uint32_t GPIO_MODER_MODE15_B_0x3 = 3;

    /** @brief GPIO port output type register */
    using GPIO_OTYPER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT0_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT0_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT1_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT1_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT2_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT2_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT3_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT3_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT4_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT4_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT5_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT5_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT6_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT6_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT7_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT7_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT8_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT8_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT9_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT9_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT10_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT10_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT11_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT11_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT12_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT12_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT13_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT13_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT14_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT14_B_0x1 = 1;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OTYPER_OT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output push-pull (reset state) (value: 0)
     *          - B_0x1: Output open-drain (value: 1)
     */
        /** @brief Output push-pull (reset state) */
    constexpr std::uint32_t GPIO_OTYPER_OT15_B_0x0 = 0;
        /** @brief Output open-drain */
    constexpr std::uint32_t GPIO_OTYPER_OT15_B_0x1 = 1;

    /** @brief GPIO port output speed register */
    using GPIO_OSPEEDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED0_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED0_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED0_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED0_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED1_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED1_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED1_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED1_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED2_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED2_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED2_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED2_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED3_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED3_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED3_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED3_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED4_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED4_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED4_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED4_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED5_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED5_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED5_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED5_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED6_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED6_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED6_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED6_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED7_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED7_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED7_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED7_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED8_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED8_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED8_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED8_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED9_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED9_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED9_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED9_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED10_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED10_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED10_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED10_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED11_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED11_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED11_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED11_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED12_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED12_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED12_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED12_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED13_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED13_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED13_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED13_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED14_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED14_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED14_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED14_B_0x3 = 3;

    /** @brief Port x configuration I/O pin y */
    using GPIO_OSPEEDR_OSPEED15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     *          - B_0x2: High speed (value: 2)
     *          - B_0x3: Very-high speed (value: 3)
     */
        /** @brief Low speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED15_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED15_B_0x1 = 1;
        /** @brief High speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED15_B_0x2 = 2;
        /** @brief Very-high speed */
    constexpr std::uint32_t GPIO_OSPEEDR_OSPEED15_B_0x3 = 3;

    /** @brief GPIO port pull-up/pull-down register */
    using GPIO_PUPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD0_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD0_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD0_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD1_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD1_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD1_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD2_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD2_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD2_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD3_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD3_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD3_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD4_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD4_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD4_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD5_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD5_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD5_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD6_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD6_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD6_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD7_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD7_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD7_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD8_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD8_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD8_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD9_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD9_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD9_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD10_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD10_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD10_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD11_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD11_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD11_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD12_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD12_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD12_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD13_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD13_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD13_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD14_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD14_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD14_B_0x2 = 2;

    /** @brief Port x configuration I/O pin y */
    using GPIO_PUPDR_PUPD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up, pull-down (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pull-up, pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD15_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t GPIO_PUPDR_PUPD15_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t GPIO_PUPDR_PUPD15_B_0x2 = 2;

    /** @brief GPIO port input data register */
    using GPIO_IDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x input data I/O pin y */
    using GPIO_IDR_ID15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port output data register */
    using GPIO_ODR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port output data I/O pin y */
    using GPIO_ODR_OD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIO port bit set/reset register */
    using GPIO_BSRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS0_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS0_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS1_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS1_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS2_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS2_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS3_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS3_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS4_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS4_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS5_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS5_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS6_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS6_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS7_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS7_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS8_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS8_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS9_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS9_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS10_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS10_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS11_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS11_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS12_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS12_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS13_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS13_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS14_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS14_B_0x1 = 1;

    /** @brief Port x set I/O pin y */
    using GPIO_BSRR_BS15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Sets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS15_B_0x0 = 0;
        /** @brief Sets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BS15_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR0_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR0_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR1_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR1_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR2_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR2_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR3_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR3_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR4_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR4_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR5_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR5_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR6_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR6_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR7_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR7_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR8_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR8_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR9_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR9_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR10_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR10_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR11_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR11_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR12_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR12_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR13_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR13_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR14_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR14_B_0x1 = 1;

    /** @brief Port x reset I/O pin y */
    using GPIO_BSRR_BR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Resets the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR15_B_0x0 = 0;
        /** @brief Resets the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BSRR_BR15_B_0x1 = 1;

    /** @brief GPIO port configuration lock register */
    using GPIO_LCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK0_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK0_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK1_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK1_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK2_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK2_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK3_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK3_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK4_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK4_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK5_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK5_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK6_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK6_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK7_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK7_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK8_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK8_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK9_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK9_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK10_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK10_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK11_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK11_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK12_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK12_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK13_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK13_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK14_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK14_B_0x1 = 1;

    /** @brief Port x lock I/O pin y */
    using GPIO_LCKR_LCK15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration not locked (value: 0)
     *          - B_0x1: Port configuration locked (value: 1)
     */
        /** @brief Port configuration not locked */
    constexpr std::uint32_t GPIO_LCKR_LCK15_B_0x0 = 0;
        /** @brief Port configuration locked */
    constexpr std::uint32_t GPIO_LCKR_LCK15_B_0x1 = 1;

    /** @brief Lock key */
    using GPIO_LCKR_LCKK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port configuration lock key not active (value: 0)
     *          - B_0x1: Port configuration lock key active. The GPIOx_LCKR register is locked until the next MCU reset or peripheral reset. (value: 1)
     */
        /** @brief Port configuration lock key not active */
    constexpr std::uint32_t GPIO_LCKR_LCKK_B_0x0 = 0;
        /** @brief Port configuration lock key active. The GPIOx_LCKR register is locked until the next MCU reset or peripheral reset. */
    constexpr std::uint32_t GPIO_LCKR_LCKK_B_0x1 = 1;

    /** @brief GPIO alternate function low register */
    using GPIO_AFRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRL_AFSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL0_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRL_AFSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL1_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRL_AFSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL2_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRL_AFSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL3_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRL_AFSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL4_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRL_AFSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL5_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRL_AFSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL6_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRL_AFSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRL_AFSEL7_B_0xF = 15;

    /** @brief GPIO alternate function high register */
    using GPIO_AFRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRH_AFSEL8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL8_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRH_AFSEL9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL9_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRH_AFSEL10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL10_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRH_AFSEL11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL11_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRH_AFSEL12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL12_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRH_AFSEL13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL13_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRH_AFSEL14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL14_B_0xF = 15;

    /** @brief Alternate function selection for port x I/O pin y */
    using GPIO_AFRH_AFSEL15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0x0 = 0;
        /** @brief AF1 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0x1 = 1;
        /** @brief AF2 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0x2 = 2;
        /** @brief AF3 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0x3 = 3;
        /** @brief AF4 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0x4 = 4;
        /** @brief AF5 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0x5 = 5;
        /** @brief AF6 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0x6 = 6;
        /** @brief AF7 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0x7 = 7;
        /** @brief AF8 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0x8 = 8;
        /** @brief AF9 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0x9 = 9;
        /** @brief AF10 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0xA = 10;
        /** @brief AF11 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0xB = 11;
        /** @brief AF12 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0xC = 12;
        /** @brief AF13 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0xD = 13;
        /** @brief AF14 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0xE = 14;
        /** @brief AF15 */
    constexpr std::uint32_t GPIO_AFRH_AFSEL15_B_0xF = 15;

    /** @brief GPIO port bit reset register */
    using GPIO_BRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR0_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR0_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR1_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR1_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR2_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR2_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR3_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR3_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR4_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR4_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR5_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR5_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR6_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR6_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR7_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR7_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR8_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR8_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR9_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR9_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR10_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR10_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR11_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR11_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR12_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR12_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR13_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR13_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR14_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR14_B_0x1 = 1;

    /** @brief Port x reset IO pin y */
    using GPIO_BRR_BR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action on the corresponding ODy bit (value: 0)
     *          - B_0x1: Reset the corresponding ODy bit (value: 1)
     */
        /** @brief No action on the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR15_B_0x0 = 0;
        /** @brief Reset the corresponding ODy bit */
    constexpr std::uint32_t GPIO_BRR_BR15_B_0x1 = 1;

    /** @brief GPIO high-speed low-voltage register */
    using GPIO_HSLVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV0_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV0_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV1_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV1_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV2_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV2_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV3_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV3_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV4_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV4_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV5_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV5_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV6_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV6_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV7_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV7_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV8_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV8_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV9_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV9_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV10_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV10_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV11_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV11_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV12_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV12_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV13_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV13_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV14_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV14_B_0x1 = 1;

    /** @brief Port x high-speed low-voltage configuration */
    using GPIO_HSLVR_HSLV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O speed optimization disabled (value: 0)
     *          - B_0x1: I/O speed optimization enabled (value: 1)
     */
        /** @brief I/O speed optimization disabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV15_B_0x0 = 0;
        /** @brief I/O speed optimization enabled */
    constexpr std::uint32_t GPIO_HSLVR_HSLV15_B_0x1 = 1;

    /** @brief GPIO secure configuration register */
    using GPIO_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC0_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC0_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC1_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC1_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC2_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC2_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC3_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC3_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC4_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC4_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC5_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC5_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC6_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC6_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC7_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC7_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC8_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC8_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC9_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC9_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC10_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC10_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC11_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC11_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC12_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC12_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC13_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC13_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC14_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC14_B_0x1 = 1;

    /** @brief I/O pin of Port x secure bit enable y */
    using GPIO_SECCFGR_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The I/O pin is non-secure (value: 0)
     *          - B_0x1: The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. (value: 1)
     */
        /** @brief The I/O pin is non-secure */
    constexpr std::uint32_t GPIO_SECCFGR_SEC15_B_0x0 = 0;
        /** @brief The I/O pin is secure. Refer to Table 131 for all corresponding secured bits. */
    constexpr std::uint32_t GPIO_SECCFGR_SEC15_B_0x1 = 1;

}

#endif
