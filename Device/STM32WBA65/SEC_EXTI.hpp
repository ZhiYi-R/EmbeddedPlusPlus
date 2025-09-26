/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA65_SEC_EXTI_HPP
#define EMBEDDED_PP_STM32WBA65_SEC_EXTI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief EXTI address block description */
namespace STM32WBA65::SEC_EXTI {

    /** @brief EXTI rising trigger selection register */
    using EXTI_RTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT0_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT0_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT1_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT1_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT2_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT2_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT3_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT3_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT4_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT4_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT5_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT5_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT6_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT6_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT7_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT7_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT8_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT8_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT9_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT9_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT10_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT10_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT11_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT11_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT12_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT12_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT13_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT13_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT14_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT14_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT15_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT15_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT16_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT16_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT17_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT17_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT18_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT18_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT19_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT19_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x */
    using EXTI_RTSR1_RT20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT20_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT20_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register */
    using EXTI_FTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT0_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT0_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT1_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT1_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT2_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT2_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT3_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT3_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT4_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT4_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT5_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT5_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT6_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT6_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT7_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT7_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT8_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT8_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT9_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT9_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT10_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT10_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT11_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT11_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT12_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT12_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT13_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT13_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT14_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT14_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT15_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT15_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT16_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT16_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT17_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT17_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT18_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT18_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT19_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT19_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x */
    using EXTI_FTSR1_FT20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT20_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT20_B_0x1 = 1;

    /** @brief EXTI software interrupt event register */
    using EXTI_SWIER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI0_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI0_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI1_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI1_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI2_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI2_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI3_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI3_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI4_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI4_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI5_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI5_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI6_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI6_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI7_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI7_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI8_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI8_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI9_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI9_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI10_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI10_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI11_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI11_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI12_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI12_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI13_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI13_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI14_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI14_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI15_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI15_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI16_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI16_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI17_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI17_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI18_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI18_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI19_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI19_B_0x1 = 1;

    /** @brief Software interrupt on event x */
    using EXTI_SWIER1_SWI20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI20_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. */
    constexpr std::uint32_t EXTI_SWIER1_SWI20_B_0x1 = 1;

    /** @brief EXTI rising edge pending register */
    using EXTI_RPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF0_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF0_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF1_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF1_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF2_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF2_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF3_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF3_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF4_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF4_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF5_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF5_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF6_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF6_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF7_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF7_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF8_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF8_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF9_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF9_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF10_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF10_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF11_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF11_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF12_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF12_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF13_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF13_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF14_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF14_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF15_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF15_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF16_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF16_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF17_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF17_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF18_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF18_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF19_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF19_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit */
    using EXTI_RPR1_RPIF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF20_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF20_B_0x1 = 1;

    /** @brief EXTI falling edge pending register */
    using EXTI_FPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF0_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF0_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF1_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF1_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF2_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF2_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF3_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF3_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF4_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF4_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF5_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF5_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF6_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF6_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF7_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF7_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF8_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF8_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF9_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF9_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF10_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF10_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF11_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF11_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF12_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF12_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF13_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF13_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF14_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF14_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF15_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF15_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF16_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF16_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF17_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF17_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF18_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF18_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF19_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF19_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit */
    using EXTI_FPR1_FPIF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF20_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF20_B_0x1 = 1;

    /** @brief EXTI security configuration register */
    using EXTI_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC0_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC0_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC1_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC1_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC2_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC2_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC3_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC3_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC4_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC4_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC5_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC5_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC6_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC6_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC7_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC7_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC8_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC8_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC9_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC9_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC10_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC10_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC11_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC11_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC12_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC12_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC13_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC13_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC14_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC14_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC15_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC15_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC16_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC16_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC17_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC17_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC18_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC18_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC19_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC19_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_SECCFGR1_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC20_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC20_B_0x1 = 1;

    /** @brief EXTI privilege configuration register */
    using EXTI_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV0_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV0_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV1_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV1_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV2_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV2_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV3_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV3_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV4_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV4_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV5_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV5_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV6_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV6_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV7_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV7_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV8_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV8_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV9_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV9_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV10_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV10_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV11_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV11_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV12_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV12_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV13_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV13_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV14_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV14_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV15_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV15_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV16_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV16_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV17_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV17_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV18_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV18_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV19_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV19_B_0x1 = 1;

    /** @brief Security enable on event input x */
    using EXTI_PRIVCFGR1_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV20_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV20_B_0x1 = 1;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI0 GPIO port selection on interconnect exti0 */
    using EXTI_EXTICR1_EXTI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA0 pin (value: 0)
     *          - B_0x01: PB0 pin (value: 1)
     *          - B_0x02: PC0 pin (value: 2)
     *          - B_0x03: PD0 pin (value: 3)
     *          - B_0x04: PE0 pin (value: 4)
     */
        /** @brief PA0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x00 = 0;
        /** @brief PB0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x01 = 1;
        /** @brief PC0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x02 = 2;
        /** @brief PD0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x03 = 3;
        /** @brief PE0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x04 = 4;

    /** @brief EXTI1 GPIO port selection on interconnect exti1 */
    using EXTI_EXTICR1_EXTI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA1 pin (value: 0)
     *          - B_0x01: PB1 pin (value: 1)
     *          - B_0x02: PC1 pin (value: 2)
     *          - B_0x03: PD1 pin (value: 3)
     *          - B_0x04: PE1 pin (value: 4)
     */
        /** @brief PA1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x00 = 0;
        /** @brief PB1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x01 = 1;
        /** @brief PC1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x02 = 2;
        /** @brief PD1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x03 = 3;
        /** @brief PE1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x04 = 4;

    /** @brief EXTI2 GPIO port selection on interconnect exti2 */
    using EXTI_EXTICR1_EXTI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA2 pin (value: 0)
     *          - B_0x01: PB2 pin (value: 1)
     *          - B_0x02: PC2 pin (value: 2)
     *          - B_0x03: PD2 pin (value: 3)
     *          - B_0x04: PE2 pin (value: 4)
     *          - B_0x06: PG2 pin (value: 6)
     */
        /** @brief PA2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x00 = 0;
        /** @brief PB2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x01 = 1;
        /** @brief PC2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x02 = 2;
        /** @brief PD2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x03 = 3;
        /** @brief PE2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x04 = 4;
        /** @brief PG2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x06 = 6;

    /** @brief EXTI3 GPIO port selection on interconnect exti3 */
    using EXTI_EXTICR1_EXTI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA3 pin (value: 0)
     *          - B_0x01: PB3 pin (value: 1)
     *          - B_0x02: PC3 pin (value: 2)
     *          - B_0x03: PD3 pin (value: 3)
     *          - B_0x04: PE3 pin (value: 4)
     *          - B_0x06: PG3 pin (value: 6)
     *          - B_0x07: PH3 pin (value: 7)
     */
        /** @brief PA3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x00 = 0;
        /** @brief PB3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x01 = 1;
        /** @brief PC3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x02 = 2;
        /** @brief PD3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x03 = 3;
        /** @brief PE3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x04 = 4;
        /** @brief PG3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x06 = 6;
        /** @brief PH3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x07 = 7;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI4 GPIO port selection on interconnect exti4 */
    using EXTI_EXTICR2_EXTI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA4 pin (value: 0)
     *          - B_0x01: PB4 pin (value: 1)
     *          - B_0x02: PC4 pin (value: 2)
     *          - B_0x03: PD4 pin (value: 3)
     *          - B_0x04: PE4 pin (value: 4)
     *          - B_0x06: PG4 pin (value: 6)
     */
        /** @brief PA4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x00 = 0;
        /** @brief PB4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x01 = 1;
        /** @brief PC4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x02 = 2;
        /** @brief PD4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x03 = 3;
        /** @brief PE4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x04 = 4;
        /** @brief PG4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x06 = 6;

    /** @brief EXTI5 GPIO port selection on interconnect exti5 */
    using EXTI_EXTICR2_EXTI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA5 pin (value: 0)
     *          - B_0x01: PB5 pin (value: 1)
     *          - B_0x02: PC5 pin (value: 2)
     *          - B_0x03: PD5 pin (value: 3)
     *          - B_0x04: PE5 pin (value: 4)
     *          - B_0x06: PG5 pin (value: 6)
     */
        /** @brief PA5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x00 = 0;
        /** @brief PB5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x01 = 1;
        /** @brief PC5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x02 = 2;
        /** @brief PD5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x03 = 3;
        /** @brief PE5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x04 = 4;
        /** @brief PG5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x06 = 6;

    /** @brief EXTI6 GPIO port selection on interconnect exti6 */
    using EXTI_EXTICR2_EXTI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA6 pin (value: 0)
     *          - B_0x01: PB6 pin (value: 1)
     *          - B_0x02: PC6 pin (value: 2)
     *          - B_0x03: PD6 pin (value: 3)
     *          - B_0x04: PE6 pin (value: 4)
     *          - B_0x06: PG6 pin (value: 6)
     */
        /** @brief PA6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x00 = 0;
        /** @brief PB6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x01 = 1;
        /** @brief PC6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x02 = 2;
        /** @brief PD6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x03 = 3;
        /** @brief PE6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x04 = 4;
        /** @brief PG6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x06 = 6;

    /** @brief EXTI7 GPIO port selection on interconnect exti7 */
    using EXTI_EXTICR2_EXTI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA7 pin (value: 0)
     *          - B_0x01: PB7 pin (value: 1)
     *          - B_0x02: PC7 pin (value: 2)
     *          - B_0x03: PD7 pin (value: 3)
     *          - B_0x06: PG7 pin (value: 6)
     */
        /** @brief PA7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x00 = 0;
        /** @brief PB7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x01 = 1;
        /** @brief PC7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x02 = 2;
        /** @brief PD7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x03 = 3;
        /** @brief PG7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x06 = 6;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI8 GPIO port selection on interconnect exti8 */
    using EXTI_EXTICR3_EXTI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA8 pin (value: 0)
     *          - B_0x01: PB8 pin (value: 1)
     *          - B_0x02: PC8 pin (value: 2)
     *          - B_0x03: PD8 pin (value: 3)
     *          - B_0x06: PG8 pin (value: 6)
     */
        /** @brief PA8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x00 = 0;
        /** @brief PB8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x01 = 1;
        /** @brief PC8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x02 = 2;
        /** @brief PD8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x03 = 3;
        /** @brief PG8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x06 = 6;

    /** @brief EXTI9 GPIO port selection on interconnect exti9 */
    using EXTI_EXTICR3_EXTI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA9 pin (value: 0)
     *          - B_0x01: PB9 pin (value: 1)
     *          - B_0x02: PC9 pin (value: 2)
     *          - B_0x03: PD9 pin (value: 3)
     *          - B_0x06: PG9 pin (value: 6)
     */
        /** @brief PA9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x00 = 0;
        /** @brief PB9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x01 = 1;
        /** @brief PC9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x02 = 2;
        /** @brief PD9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x03 = 3;
        /** @brief PG9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x06 = 6;

    /** @brief EXTI10 GPIO port selection on interconnect exti10 */
    using EXTI_EXTICR3_EXTI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA10 pin (value: 0)
     *          - B_0x01: PB10 pin (value: 1)
     *          - B_0x02: PC10 pin (value: 2)
     *          - B_0x03: PD10 pin (value: 3)
     *          - B_0x06: PG10 pin (value: 6)
     */
        /** @brief PA10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x00 = 0;
        /** @brief PB10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x01 = 1;
        /** @brief PC10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x02 = 2;
        /** @brief PD10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x03 = 3;
        /** @brief PG10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x06 = 6;

    /** @brief EXTI11 GPIO port selection on interconnect exti11 */
    using EXTI_EXTICR3_EXTI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA11 pin (value: 0)
     *          - B_0x01: PB11 pin (value: 1)
     *          - B_0x02: PC11 pin (value: 2)
     *          - B_0x03: PD11 pin (value: 3)
     *          - B_0x06: PG11 pin (value: 6)
     */
        /** @brief PA11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x00 = 0;
        /** @brief PB11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x01 = 1;
        /** @brief PC11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x02 = 2;
        /** @brief PD11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x03 = 3;
        /** @brief PG11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x06 = 6;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI0 GPIO port selection on interconnect exti12 */
    using EXTI_EXTICR4_EXTI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA12 pin (value: 0)
     *          - B_0x01: PB12 pin (value: 1)
     *          - B_0x02: PC12 pin (value: 2)
     *          - B_0x03: PD12 pin (value: 3)
     *          - B_0x06: PG12 pin (value: 6)
     */
        /** @brief PA12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x00 = 0;
        /** @brief PB12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x01 = 1;
        /** @brief PC12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x02 = 2;
        /** @brief PD12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x03 = 3;
        /** @brief PG12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x06 = 6;

    /** @brief EXTI13 GPIO port selection on interconnect exti13 */
    using EXTI_EXTICR4_EXTI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA13 pin (value: 0)
     *          - B_0x01: PB13 pin (value: 1)
     *          - B_0x02: PC13 pin (value: 2)
     *          - B_0x03: PD13 pin (value: 3)
     *          - B_0x06: PG13 pin (value: 6)
     */
        /** @brief PA13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x00 = 0;
        /** @brief PB13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x01 = 1;
        /** @brief PC13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x02 = 2;
        /** @brief PD13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x03 = 3;
        /** @brief PG13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x06 = 6;

    /** @brief EXTI14 GPIO port selection on interconnect exti14 */
    using EXTI_EXTICR4_EXTI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA14 pin (value: 0)
     *          - B_0x01: PB14 pin (value: 1)
     *          - B_0x02: PC14 pin (value: 2)
     *          - B_0x03: PD14 pin (value: 3)
     *          - B_0x06: PG14 pin (value: 6)
     */
        /** @brief PA14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x00 = 0;
        /** @brief PB14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x01 = 1;
        /** @brief PC14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x02 = 2;
        /** @brief PD14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x03 = 3;
        /** @brief PG14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x06 = 6;

    /** @brief EXTI15 GPIO port selection on interconnect exti15 */
    using EXTI_EXTICR4_EXTI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA15 pin (value: 0)
     *          - B_0x01: PB15 pin (value: 1)
     *          - B_0x02: PC15 pin (value: 2)
     *          - B_0x03: PD15 pin (value: 3)
     *          - B_0x06: PG15 pin (value: 6)
     */
        /** @brief PA15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x00 = 0;
        /** @brief PB15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x01 = 1;
        /** @brief PC15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x02 = 2;
        /** @brief PD15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x03 = 3;
        /** @brief PG15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x06 = 6;

    /** @brief EXTI lock register */
    using EXTI_LOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global security and privilege configuration registers (EXTI_SECCFGR and EXTI_PRIVCFGR) lock */
    using EXTI_LOCKR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Security and privilege configuration open, can be modified. (value: 0)
     *          - B_0x1: Security and privilege configuration locked, can no longer be modified. (value: 1)
     */
        /** @brief Security and privilege configuration open, can be modified. */
    constexpr std::uint32_t EXTI_LOCKR_LOCK_B_0x0 = 0;
        /** @brief Security and privilege configuration locked, can no longer be modified. */
    constexpr std::uint32_t EXTI_LOCKR_LOCK_B_0x1 = 1;

    /** @brief EXTI CPU wake-up with interrupt mask register */
    using EXTI_IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM0_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM0_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM1_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM1_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM2_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM2_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM3_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM3_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM4_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM4_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM5_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM5_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM6_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM6_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM7_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM7_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM8_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM8_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM9_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM9_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM10_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM10_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM11_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM11_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM12_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM12_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM13_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM13_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM14_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM14_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM15_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM15_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM16_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM16_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM17_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM17_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM18_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM18_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM19_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM19_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input x */
    using EXTI_IMR1_IM20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM20_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM20_B_0x1 = 1;

    /** @brief EXTI CPU wake-up with event mask register */
    using EXTI_EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM0_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM0_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM1_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM1_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM2_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM2_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM3_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM3_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM4_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM4_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM5_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM5_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM6_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM6_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM7_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM7_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM8_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM8_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM9_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM9_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM10_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM10_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM11_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM11_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM12_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM12_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM13_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM13_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM14_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM14_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM15_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM15_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM16_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM16_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM17_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM17_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM18_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM18_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM19_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM19_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input x */
    using EXTI_EMR1_EM20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM20_B_0x0 = 0;
        /** @brief Wake-up with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM20_B_0x1 = 1;

}

#endif
