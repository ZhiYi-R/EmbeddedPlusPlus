/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_SEC_EXTI_HPP
#define EMBEDDED_PP_STM32U3B5_SEC_EXTI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief EXTI register block */
namespace STM32U3B5::SEC_ExTI {

    /** @brief EXTI rising trigger selection register */
    using EXTI_RTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT0_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT0_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT1_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT1_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT2_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT2_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT3_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT3_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT4_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT4_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT5_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT5_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT6_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT6_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT7_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT7_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT8_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT8_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT9_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT9_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT10_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT10_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT11_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT11_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT12_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT12_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT13_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT13_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT14_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT14_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT15_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT15_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT16_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT16_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT17_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT17_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT18_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT18_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT19_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT19_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT20_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT20_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT21_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT21_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input i */
    using EXTI_RTSR1_RT22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT22_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT22_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register */
    using EXTI_FTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT0_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT0_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT1_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT1_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT2_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT2_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT3_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT3_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT4_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT4_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT5_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT5_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT6_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT6_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT7_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT7_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT8_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT8_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT9_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT9_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT10_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT10_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT11_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT11_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT12_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT12_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT13_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT13_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT14_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT14_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT15_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT15_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT16_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT16_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT17_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT17_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT18_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT18_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT19_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT19_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT20_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT20_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT21_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT21_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input i */
    using EXTI_FTSR1_FT22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT22_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT22_B_0x1 = 1;

    /** @brief EXTI software interrupt event register */
    using EXTI_SWIER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI0_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI0_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI1_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI1_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI2_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI2_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI3_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI3_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI4_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI4_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI5_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI5_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI6_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI6_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI7_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI7_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI8_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI8_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI9_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI9_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI10_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI10_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI11_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI11_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI12_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI12_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI13_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI13_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI14_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI14_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI15_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI15_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI16_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI16_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI17_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI17_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI18_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI18_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI19_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI19_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI20_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI20_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI21_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI21_B_0x1 = 1;

    /** @brief Software interrupt on event i */
    using EXTI_SWIER1_SWI22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event i. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI22_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event i. */
    constexpr std::uint32_t EXTI_SWIER1_SWI22_B_0x1 = 1;

    /** @brief EXTI rising edge pending register */
    using EXTI_RPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF0_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF0_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF1_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF1_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF2_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF2_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF3_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF3_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF4_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF4_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF5_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF5_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF6_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF6_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF7_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF7_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF8_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF8_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF9_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF9_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF10_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF10_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF11_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF11_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF12_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF12_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF13_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF13_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF14_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF14_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF15_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF15_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF16_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF16_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF17_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF17_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF18_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF18_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF19_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF19_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF20_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF20_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF21_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF21_B_0x1 = 1;

    /** @brief Configurable event input i rising edge pending bit */
    using EXTI_RPR1_RPIF22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred. (value: 0)
     *          - B_0x1: Rising edge trigger request occurred. (value: 1)
     */
        /** @brief No rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF22_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred. */
    constexpr std::uint32_t EXTI_RPR1_RPIF22_B_0x1 = 1;

    /** @brief EXTI falling edge pending register */
    using EXTI_FPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF0_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF0_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF1_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF1_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF2_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF2_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF3_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF3_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF4_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF4_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF5_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF5_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF6_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF6_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF7_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF7_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF8_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF8_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF9_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF9_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF10_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF10_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF11_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF11_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF12_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF12_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF13_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF13_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF14_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF14_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF15_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF15_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF16_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF16_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF17_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF17_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF18_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF18_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF19_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF19_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF20_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF20_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF21_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF21_B_0x1 = 1;

    /** @brief configurable event inputs i falling edge pending bit */
    using EXTI_FPR1_FPIF22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF22_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF22_B_0x1 = 1;

    /** @brief EXTI security configuration register */
    using EXTI_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC0_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC0_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC1_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC1_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC2_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC2_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC3_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC3_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC4_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC4_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC5_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC5_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC6_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC6_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC7_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC7_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC8_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC8_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC9_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC9_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC10_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC10_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC11_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC11_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC12_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC12_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC13_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC13_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC14_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC14_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC15_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC15_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC16_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC16_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC17_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC17_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC18_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC18_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC19_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC19_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC20_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC20_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC21_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC21_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_SECCFGR1_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (nonsecure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (nonsecure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC22_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC22_B_0x1 = 1;

    /** @brief EXTI privilege configuration register */
    using EXTI_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV0_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV0_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV1_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV1_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV2_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV2_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV3_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV3_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV4_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV4_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV5_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV5_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV6_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV6_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV7_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV7_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV8_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV8_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV9_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV9_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV10_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV10_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV11_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV11_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV12_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV12_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV13_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV13_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV14_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV14_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV15_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV15_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV16_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV16_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV17_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV17_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV18_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV18_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV19_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV19_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV20_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV20_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV21_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV21_B_0x1 = 1;

    /** @brief Security enable on event input i */
    using EXTI_PRIVCFGR1_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV22_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV22_B_0x1 = 1;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI0 GPIO port selection */
    using EXTI_EXTICR1_EXTI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[0] pin (value: 0)
     *          - B_0x01: PB[0] pin (value: 1)
     *          - B_0x02: PC[0] pin (value: 2)
     *          - B_0x03: PD[0] pin (value: 3)
     *          - B_0x04: PE[0] pin (value: 4)
     *          - B_0x05: PF[0] pin (value: 5)
     *          - B_0x06: PG[0] pin (value: 6)
     *          - B_0x07: PH[0] pin (value: 7)
     */
        /** @brief PA[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x00 = 0;
        /** @brief PB[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x01 = 1;
        /** @brief PC[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x02 = 2;
        /** @brief PD[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x03 = 3;
        /** @brief PE[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x04 = 4;
        /** @brief PF[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x05 = 5;
        /** @brief PG[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x06 = 6;
        /** @brief PH[0] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x07 = 7;

    /** @brief EXTI1 GPIO port selection */
    using EXTI_EXTICR1_EXTI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[1] pin (value: 0)
     *          - B_0x01: PB[1] pin (value: 1)
     *          - B_0x02: PC[1] pin (value: 2)
     *          - B_0x03: PD[1] pin (value: 3)
     *          - B_0x04: PE[1] pin (value: 4)
     *          - B_0x05: PF[1] pin (value: 5)
     *          - B_0x06: PG[1] pin (value: 6)
     *          - B_0x07: PH[1] pin (value: 7)
     */
        /** @brief PA[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x00 = 0;
        /** @brief PB[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x01 = 1;
        /** @brief PC[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x02 = 2;
        /** @brief PD[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x03 = 3;
        /** @brief PE[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x04 = 4;
        /** @brief PF[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x05 = 5;
        /** @brief PG[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x06 = 6;
        /** @brief PH[1] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x07 = 7;

    /** @brief EXTI2 GPIO port selection */
    using EXTI_EXTICR1_EXTI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[2] pin (value: 0)
     *          - B_0x01: PB[2] pin (value: 1)
     *          - B_0x02: PC[2] pin (value: 2)
     *          - B_0x03: PD[2] pin (value: 3)
     *          - B_0x04: PE[2] pin (value: 4)
     *          - B_0x05: PF[2] pin (value: 5)
     *          - B_0x06: PG[2] pin (value: 6)
     *          - B_0x07: PH[2] pin (value: 7)
     */
        /** @brief PA[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x00 = 0;
        /** @brief PB[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x01 = 1;
        /** @brief PC[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x02 = 2;
        /** @brief PD[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x03 = 3;
        /** @brief PE[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x04 = 4;
        /** @brief PF[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x05 = 5;
        /** @brief PG[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x06 = 6;
        /** @brief PH[2] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x07 = 7;

    /** @brief EXTI3 GPIO port selection */
    using EXTI_EXTICR1_EXTI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[3] pin (value: 0)
     *          - B_0x01: PB[3] pin (value: 1)
     *          - B_0x02: PC[3] pin (value: 2)
     *          - B_0x03: PD[3] pin (value: 3)
     *          - B_0x04: PE[3] pin (value: 4)
     *          - B_0x05: PF[3] pin (value: 5)
     *          - B_0x06: PG[3] pin (value: 6)
     *          - B_0x07: PH[3] pin (value: 7)
     */
        /** @brief PA[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x00 = 0;
        /** @brief PB[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x01 = 1;
        /** @brief PC[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x02 = 2;
        /** @brief PD[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x03 = 3;
        /** @brief PE[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x04 = 4;
        /** @brief PF[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x05 = 5;
        /** @brief PG[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x06 = 6;
        /** @brief PH[3] pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x07 = 7;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI4 GPIO port selection */
    using EXTI_EXTICR2_EXTI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[4] pin (value: 0)
     *          - B_0x01: PB[4] pin (value: 1)
     *          - B_0x02: PC[4] pin (value: 2)
     *          - B_0x03: PD[4] pin (value: 3)
     *          - B_0x04: PE[4] pin (value: 4)
     *          - B_0x05: PF[4] pin (value: 5)
     *          - B_0x06: PG[4] pin (value: 6)
     *          - B_0x07: PH[4] pin (value: 7)
     */
        /** @brief PA[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x00 = 0;
        /** @brief PB[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x01 = 1;
        /** @brief PC[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x02 = 2;
        /** @brief PD[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x03 = 3;
        /** @brief PE[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x04 = 4;
        /** @brief PF[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x05 = 5;
        /** @brief PG[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x06 = 6;
        /** @brief PH[4] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x07 = 7;

    /** @brief EXTI5 GPIO port selection */
    using EXTI_EXTICR2_EXTI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[5] pin (value: 0)
     *          - B_0x01: PB[5] pin (value: 1)
     *          - B_0x02: PC[5] pin (value: 2)
     *          - B_0x03: PD[5] pin (value: 3)
     *          - B_0x04: PE[5] pin (value: 4)
     *          - B_0x05: PF[5] pin (value: 5)
     *          - B_0x06: PG[5] pin (value: 6)
     *          - B_0x07: PH[5] pin (value: 7)
     */
        /** @brief PA[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x00 = 0;
        /** @brief PB[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x01 = 1;
        /** @brief PC[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x02 = 2;
        /** @brief PD[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x03 = 3;
        /** @brief PE[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x04 = 4;
        /** @brief PF[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x05 = 5;
        /** @brief PG[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x06 = 6;
        /** @brief PH[5] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x07 = 7;

    /** @brief EXTI6 GPIO port selection */
    using EXTI_EXTICR2_EXTI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[6] pin (value: 0)
     *          - B_0x01: PB[6] pin (value: 1)
     *          - B_0x02: PC[6] pin (value: 2)
     *          - B_0x03: PD[6] pin (value: 3)
     *          - B_0x04: PE[6] pin (value: 4)
     *          - B_0x05: PF[6] pin (value: 5)
     *          - B_0x06: PG[6] pin (value: 6)
     *          - B_0x07: PH[6] pin (value: 7)
     */
        /** @brief PA[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x00 = 0;
        /** @brief PB[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x01 = 1;
        /** @brief PC[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x02 = 2;
        /** @brief PD[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x03 = 3;
        /** @brief PE[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x04 = 4;
        /** @brief PF[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x05 = 5;
        /** @brief PG[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x06 = 6;
        /** @brief PH[6] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x07 = 7;

    /** @brief EXTI7 GPIO port selection */
    using EXTI_EXTICR2_EXTI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[7] pin (value: 0)
     *          - B_0x01: PB[7] pin (value: 1)
     *          - B_0x02: PC[7] pin (value: 2)
     *          - B_0x03: PD[7] pin (value: 3)
     *          - B_0x04: PE[7] pin (value: 4)
     *          - B_0x05: PF[7] pin (value: 5)
     *          - B_0x06: PG[7] pin (value: 6)
     *          - B_0x07: PH[7] pin (value: 7)
     */
        /** @brief PA[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x00 = 0;
        /** @brief PB[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x01 = 1;
        /** @brief PC[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x02 = 2;
        /** @brief PD[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x03 = 3;
        /** @brief PE[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x04 = 4;
        /** @brief PF[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x05 = 5;
        /** @brief PG[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x06 = 6;
        /** @brief PH[7] pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x07 = 7;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI8 GPIO port selection */
    using EXTI_EXTICR3_EXTI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[8] pin (value: 0)
     *          - B_0x01: PB[8] pin (value: 1)
     *          - B_0x02: PC[8] pin (value: 2)
     *          - B_0x03: PD[8] pin (value: 3)
     *          - B_0x04: PE[8] pin (value: 4)
     *          - B_0x05: PF[8] pin (value: 5)
     *          - B_0x06: PG[8] pin (value: 6)
     *          - B_0x07: PH[8] pin (value: 7)
     */
        /** @brief PA[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x00 = 0;
        /** @brief PB[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x01 = 1;
        /** @brief PC[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x02 = 2;
        /** @brief PD[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x03 = 3;
        /** @brief PE[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x04 = 4;
        /** @brief PF[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x05 = 5;
        /** @brief PG[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x06 = 6;
        /** @brief PH[8] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x07 = 7;

    /** @brief EXTI9 GPIO port selection */
    using EXTI_EXTICR3_EXTI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[9] pin (value: 0)
     *          - B_0x01: PB[9] pin (value: 1)
     *          - B_0x02: PC[9] pin (value: 2)
     *          - B_0x03: PD[9] pin (value: 3)
     *          - B_0x04: PE[9] pin (value: 4)
     *          - B_0x05: PF[9] pin (value: 5)
     *          - B_0x06: PG[9] pin (value: 6)
     *          - B_0x07: PH[9] pin (value: 7)
     */
        /** @brief PA[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x00 = 0;
        /** @brief PB[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x01 = 1;
        /** @brief PC[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x02 = 2;
        /** @brief PD[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x03 = 3;
        /** @brief PE[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x04 = 4;
        /** @brief PF[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x05 = 5;
        /** @brief PG[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x06 = 6;
        /** @brief PH[9] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x07 = 7;

    /** @brief EXTI10 GPIO port selection */
    using EXTI_EXTICR3_EXTI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[10] pin (value: 0)
     *          - B_0x01: PB[10] pin (value: 1)
     *          - B_0x02: PC[10] pin (value: 2)
     *          - B_0x03: PD[10] pin (value: 3)
     *          - B_0x04: PE[10] pin (value: 4)
     *          - B_0x05: PF[10] pin (value: 5)
     *          - B_0x06: PG[10] pin (value: 6)
     *          - B_0x07: PH[10] pin (value: 7)
     */
        /** @brief PA[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x00 = 0;
        /** @brief PB[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x01 = 1;
        /** @brief PC[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x02 = 2;
        /** @brief PD[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x03 = 3;
        /** @brief PE[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x04 = 4;
        /** @brief PF[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x05 = 5;
        /** @brief PG[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x06 = 6;
        /** @brief PH[10] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x07 = 7;

    /** @brief EXTI11 GPIO port selection */
    using EXTI_EXTICR3_EXTI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[11] pin (value: 0)
     *          - B_0x01: PB[11] pin (value: 1)
     *          - B_0x02: PC[11] pin (value: 2)
     *          - B_0x03: PD[11] pin (value: 3)
     *          - B_0x04: PE[11] pin (value: 4)
     *          - B_0x05: PF[11] pin (value: 5)
     *          - B_0x06: PG[11] pin (value: 6)
     *          - B_0x07: PH[11] pin (value: 7)
     */
        /** @brief PA[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x00 = 0;
        /** @brief PB[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x01 = 1;
        /** @brief PC[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x02 = 2;
        /** @brief PD[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x03 = 3;
        /** @brief PE[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x04 = 4;
        /** @brief PF[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x05 = 5;
        /** @brief PG[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x06 = 6;
        /** @brief PH[11] pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x07 = 7;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI12 GPIO port selection */
    using EXTI_EXTICR4_EXTI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[12] pin (value: 0)
     *          - B_0x01: PB[12] pin (value: 1)
     *          - B_0x02: PC[12] pin (value: 2)
     *          - B_0x03: PD[12] pin (value: 3)
     *          - B_0x04: PE[12] pin (value: 4)
     *          - B_0x05: PF[12] pin (value: 5)
     *          - B_0x06: PG[12] pin (value: 6)
     *          - B_0x07: PH[12] pin (value: 7)
     */
        /** @brief PA[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x00 = 0;
        /** @brief PB[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x01 = 1;
        /** @brief PC[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x02 = 2;
        /** @brief PD[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x03 = 3;
        /** @brief PE[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x04 = 4;
        /** @brief PF[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x05 = 5;
        /** @brief PG[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x06 = 6;
        /** @brief PH[12] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x07 = 7;

    /** @brief EXTI13 GPIO port selection */
    using EXTI_EXTICR4_EXTI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[13] pin (value: 0)
     *          - B_0x01: PB[13] pin (value: 1)
     *          - B_0x02: PC[13] pin (value: 2)
     *          - B_0x03: PD[13] pin (value: 3)
     *          - B_0x04: PE[13] pin (value: 4)
     *          - B_0x05: PF[13] pin (value: 5)
     *          - B_0x06: PG[13] pin (value: 6)
     *          - B_0x07: PH[13] pin (value: 7)
     */
        /** @brief PA[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x00 = 0;
        /** @brief PB[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x01 = 1;
        /** @brief PC[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x02 = 2;
        /** @brief PD[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x03 = 3;
        /** @brief PE[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x04 = 4;
        /** @brief PF[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x05 = 5;
        /** @brief PG[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x06 = 6;
        /** @brief PH[13] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x07 = 7;

    /** @brief EXTI14 GPIO port selection */
    using EXTI_EXTICR4_EXTI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[14] pin (value: 0)
     *          - B_0x01: PB[14] pin (value: 1)
     *          - B_0x02: PC[14] pin (value: 2)
     *          - B_0x03: PD[14] pin (value: 3)
     *          - B_0x04: PE[14] pin (value: 4)
     *          - B_0x05: PF[14] pin (value: 5)
     *          - B_0x06: PG[14] pin (value: 6)
     *          - B_0x07: PH[14] pin (value: 7)
     */
        /** @brief PA[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x00 = 0;
        /** @brief PB[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x01 = 1;
        /** @brief PC[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x02 = 2;
        /** @brief PD[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x03 = 3;
        /** @brief PE[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x04 = 4;
        /** @brief PF[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x05 = 5;
        /** @brief PG[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x06 = 6;
        /** @brief PH[14] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x07 = 7;

    /** @brief EXTI15 GPIO port selection */
    using EXTI_EXTICR4_EXTI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[15] pin (value: 0)
     *          - B_0x01: PB[15] pin (value: 1)
     *          - B_0x02: PC[15] pin (value: 2)
     *          - B_0x03: PD[15] pin (value: 3)
     *          - B_0x04: PE[15] pin (value: 4)
     *          - B_0x05: PF[15] pin (value: 5)
     *          - B_0x06: PG[15] pin (value: 6)
     *          - B_0x07: PH[15] pin (value: 7)
     */
        /** @brief PA[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x00 = 0;
        /** @brief PB[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x01 = 1;
        /** @brief PC[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x02 = 2;
        /** @brief PD[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x03 = 3;
        /** @brief PE[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x04 = 4;
        /** @brief PF[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x05 = 5;
        /** @brief PG[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x06 = 6;
        /** @brief PH[15] pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x07 = 7;

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
    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM0_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM0_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM1_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM1_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM2_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM2_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM3_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM3_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM4_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM4_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM5_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM5_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM6_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM6_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM7_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM7_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM8_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM8_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM9_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM9_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM10_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM10_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM11_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM11_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM12_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM12_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM13_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM13_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM14_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM14_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM15_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM15_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM16_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM16_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM17_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM17_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM18_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM18_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM19_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM19_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM20_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM20_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM21_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM21_B_0x1 = 1;

    /** @brief CPU wake-up with interrupt mask on event input i */
    using EXTI_IMR1_IM22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with interrupt request from input event i is masked. (value: 0)
     *          - B_0x1: Wake-up with interrupt request from input event i is unmasked. (value: 1)
     */
        /** @brief Wake-up with interrupt request from input event i is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM22_B_0x0 = 0;
        /** @brief Wake-up with interrupt request from input event i is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM22_B_0x1 = 1;

    /** @brief EXTI CPU wake-up with event mask register */
    using EXTI_EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM0_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM0_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM1_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM1_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM2_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM2_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM3_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM3_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM4_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM4_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM5_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM5_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM6_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM6_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM7_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM7_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM8_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM8_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM9_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM9_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM10_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM10_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM11_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM11_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM12_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM12_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM13_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM13_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM14_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM14_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM15_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM15_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM16_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM16_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM17_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM17_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM18_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM18_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM19_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM19_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM20_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM20_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM21_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM21_B_0x1 = 1;

    /** @brief CPU wake-up with event generation mask on event input i */
    using EXTI_EMR1_EM22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up with event generation from line i is masked. (value: 0)
     *          - B_0x1: Wake-up with event generation from line i is unmasked. (value: 1)
     */
        /** @brief Wake-up with event generation from line i is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM22_B_0x0 = 0;
        /** @brief Wake-up with event generation from line i is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM22_B_0x1 = 1;

}

#endif
