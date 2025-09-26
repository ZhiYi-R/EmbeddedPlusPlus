/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA54_SEC_EXTI_HPP
#define EMBEDDED_PP_STM32WBA54_SEC_EXTI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief External interrupt/event controller */
namespace STM32WBA54::SEC_EXTI {

    /** @brief EXTI rising trigger selection register */
    using EXTI_RTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT0_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT0_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT1_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT1_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT2_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT2_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT3_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT3_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT4_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT4_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT5_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT5_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT6_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT6_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT7_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT7_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT8_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT8_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT9_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT9_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT10_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT10_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT11_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT11_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT12_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT12_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT13_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT13_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT14_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT14_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT15_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT15_B_0x1 = 1;

    /** @brief Rising trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, RTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RTx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RTx can only be accessed with privileged access. Unprivileged write to this bit x is discarded, unprivileged read returns 0. */
    using EXTI_RTSR1_RT16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising trigger disabled (for event and interrupt) for input line (value: 0)
     *          - B_0x1: Rising trigger enabled (for event and interrupt) for input line (value: 1)
     */
        /** @brief Rising trigger disabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT16_B_0x0 = 0;
        /** @brief Rising trigger enabled (for event and interrupt) for input line */
    constexpr std::uint32_t EXTI_RTSR1_RT16_B_0x1 = 1;

    /** @brief EXTI falling trigger selection register */
    using EXTI_FTSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT0_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT0_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT1_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT1_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT2_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT2_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT3_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT3_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT4_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT4_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT5_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT5_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT6_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT6_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT7_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT7_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT8_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT8_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT9_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT9_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT10_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT10_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT11_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT11_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT12_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT12_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT13_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT13_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT14_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT14_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT15_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT15_B_0x1 = 1;

    /** @brief Falling trigger event configuration bit of configurable event input x When EXTI_SECCFGR.SECx is disabled, FTx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FTx can only be accessed with secure access. Non-secure write to this FTx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FTx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FTx can only be accessed with privileged access. Unprivileged write to this FTx is discarded, unprivileged read returns 0. */
    using EXTI_FTSR1_FT16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling trigger disabled (for event and Interrupt) for input line (value: 0)
     *          - B_0x1: Falling trigger enabled (for event and Interrupt) for input line. (value: 1)
     */
        /** @brief Falling trigger disabled (for event and Interrupt) for input line */
    constexpr std::uint32_t EXTI_FTSR1_FT16_B_0x0 = 0;
        /** @brief Falling trigger enabled (for event and Interrupt) for input line. */
    constexpr std::uint32_t EXTI_FTSR1_FT16_B_0x1 = 1;

    /** @brief EXTI software interrupt event register */
    using EXTI_SWIER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI0_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI0_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI1_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI1_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI2_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI2_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI3_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI3_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI4_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI4_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI5_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI5_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI6_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI6_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI7_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI7_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI8_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI8_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI9_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI9_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI10_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI10_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI11_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI11_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI12_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI12_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI13_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI13_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI14_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI14_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI15_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI15_B_0x1 = 1;

    /** @brief Software interrupt on event x When EXTI_SECFGR.SECx is disabled, SWIx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, SWIx can only be accessed with secure access. Non-secure write to this SWI x is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, SWIx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SWIx can only be accessed with privileged access. Unprivileged write to this SWIx is discarded, unprivileged read returns 0. A software interrupt is generated independently from the setting in EXTI_RTSR and EXTI_FTSR. It always returns 0 when read. */
    using EXTI_SWIER1_SWI16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing 0 has no effect. (value: 0)
     *          - B_0x1: Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. (value: 1)
     */
        /** @brief Writing 0 has no effect. */
    constexpr std::uint32_t EXTI_SWIER1_SWI16_B_0x0 = 0;
        /** @brief Writing 1 triggers a rising edge event on event x. This bit is auto cleared by hardware. */
    constexpr std::uint32_t EXTI_SWIER1_SWI16_B_0x1 = 1;

    /** @brief EXTI rising edge pending register */
    using EXTI_RPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF0_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF0_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF1_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF1_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF2_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF2_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF3_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF3_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF4_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF4_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF5_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF5_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF6_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF6_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF7_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF7_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF8_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF8_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF9_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF9_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF10_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF10_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF11_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF11_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF12_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF12_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF13_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF13_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF14_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF14_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF15_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF15_B_0x1 = 1;

    /** @brief configurable event inputs x rising edge pending bit When EXTI_SECCFGR.SECx is disabled, RPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, RPIFx can only be accessed with secure access. Non-secure write to this RPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, RPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, RPIFx can only be accessed with privileged access. Unprivileged write to this RPIFx is discarded, unprivileged read returns 0. This bit is set when the rising edge event or an EXTI_SWIER software trigger arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_RPR1_RPIF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising edge trigger request occurred (value: 0)
     *          - B_0x1: Rising edge trigger request occurred (value: 1)
     */
        /** @brief No rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF16_B_0x0 = 0;
        /** @brief Rising edge trigger request occurred */
    constexpr std::uint32_t EXTI_RPR1_RPIF16_B_0x1 = 1;

    /** @brief EXTI falling edge pending register */
    using EXTI_FPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF0_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF0_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF1_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF1_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF2_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF2_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF3_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF3_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF4_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF4_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF5_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF5_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF6_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF6_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF7_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF7_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF8_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF8_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF9_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF9_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF10_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF10_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF11_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF11_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF12_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF12_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF13_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF13_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF14_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF14_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF15_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF15_B_0x1 = 1;

    /** @brief configurable event inputs x falling edge pending bit When EXTI_SECCFGR.SECx is disabled, FPIFx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, FPIFx can only be accessed with secure access. Non-secure write to this FPIFx is discarded, non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, FPIFx can be accessed with unprivileged and privileged access. When EXTI_PRIVCFGR.PRIVx is enabled, FPIFx can only be accessed with privileged access. Unprivileged write to this FPIFx is discarded, unprivileged read returns 0. This bit is set when the falling edge event arrives on the configurable event line. This bit is cleared by writing 1 to it. */
    using EXTI_FPR1_FPIF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No falling edge trigger request occurred (value: 0)
     *          - B_0x1: Falling edge trigger request occurred (value: 1)
     */
        /** @brief No falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF16_B_0x0 = 0;
        /** @brief Falling edge trigger request occurred */
    constexpr std::uint32_t EXTI_FPR1_FPIF16_B_0x1 = 1;

    /** @brief EXTI security configuration register */
    using EXTI_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC0_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC0_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC1_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC1_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC2_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC2_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC3_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC3_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC4_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC4_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC5_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC5_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC6_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC6_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC7_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC7_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC8_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC8_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC9_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC9_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC10_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC10_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC11_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC11_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC12_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC12_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC13_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC13_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC14_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC14_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC15_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC15_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_PRIVCFGR.PRIVx is disabled, SECx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, SECx can only be written with privileged access. Unprivileged write to this SECx is discarded. */
    using EXTI_SECCFGR1_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event security disabled (non-secure) (value: 0)
     *          - B_0x1: Event security enabled (secure) (value: 1)
     */
        /** @brief Event security disabled (non-secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC16_B_0x0 = 0;
        /** @brief Event security enabled (secure) */
    constexpr std::uint32_t EXTI_SECCFGR1_SEC16_B_0x1 = 1;

    /** @brief EXTI privilege configuration register */
    using EXTI_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV0_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV0_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV1_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV1_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV2_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV2_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV3_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV3_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV4_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV4_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV5_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV5_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV6_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV6_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV7_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV7_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV8_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV8_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV9_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV9_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV10_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV10_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV11_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV11_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV12_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV12_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV13_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV13_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV14_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV14_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV15_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV15_B_0x1 = 1;

    /** @brief Security enable on event input x When EXTI_SECCFGR.SECx is disabled, PRIVx can be accessed with secure and non-secure access. When EXTI_SECCFGR.SECx is enabled, PRIVx can only be written with secure access. Non-secure write to this PRIVx is discarded. */
    using EXTI_PRIVCFGR1_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event privilege disabled (unprivileged) (value: 0)
     *          - B_0x1: Event privilege enabled (privileged) (value: 1)
     */
        /** @brief Event privilege disabled (unprivileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV16_B_0x0 = 0;
        /** @brief Event privilege enabled (privileged) */
    constexpr std::uint32_t EXTI_PRIVCFGR1_PRIV16_B_0x1 = 1;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI0 GPIO port selection These bits are written by software to select the source input for EXTI0 external interrupt. When EXTI_SECCFGR.SEC0 is disabled, EXTI0 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC0 is enabled, EXTI0 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV0 is disabled, EXTI0 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV0 is enabled, EXTI0 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR1_EXTI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA0 pin (value: 0)
     *          - B_0x01: PB0 pin (value: 1)
     */
        /** @brief PA0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x00 = 0;
        /** @brief PB0 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI0_B_0x01 = 1;

    /** @brief EXTI1 GPIO port selection These bits are written by software to select the source input for EXTI1 external interrupt. When EXTI_SECCFGR.SEC1 is disabled, EXTI1 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC1 is enabled, EXTI1 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV1 is disabled, EXTI1 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV1 is enabled, EXTI1 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR1_EXTI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA1 pin (value: 0)
     *          - B_0x01: PB1 pin (value: 1)
     */
        /** @brief PA1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x00 = 0;
        /** @brief PB1 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI1_B_0x01 = 1;

    /** @brief EXTI2 GPIO port selection These bits are written by software to select the source input for EXTI2 external interrupt. When EXTI_SECCFGR.SEC2 is disabled, EXTI2 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC2 is enabled, EXTI2 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV2 is disabled, EXTI2 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV2 is enabled, EXTI2 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR1_EXTI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA2 pin (value: 0)
     *          - B_0x01: PB2 pin (value: 1)
     */
        /** @brief PA2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x00 = 0;
        /** @brief PB2 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI2_B_0x01 = 1;

    /** @brief EXTI3 GPIO port selection These bits are written by software to select the source input for EXTI3 external interrupt. When EXTI_SECCFGR.SEC3 is disabled, EXTI3 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC3 is enabled, EXTI3 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV3 is disabled, EXTI3 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV3 is enabled, EXTI3 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR1_EXTI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA3 pin (value: 0)
     *          - B_0x01: PB3 pin (value: 1)
     *          - B_0x07: PH3 pin (value: 7)
     */
        /** @brief PA3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x00 = 0;
        /** @brief PB3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x01 = 1;
        /** @brief PH3 pin */
    constexpr std::uint32_t EXTI_EXTICR1_EXTI3_B_0x07 = 7;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI4 GPIO port selection These bits are written by software to select the source input for EXTI4 external interrupt. When EXTI_SECCFGR.SEC4 is disabled, EXTI4 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC4 is enabled, EXTI4 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV4 is disabled, EXTI4 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV4 is enabled, EXTI4 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR2_EXTI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: No port pin selected (value: 0)
     *          - B_0x01: PB4 pin (value: 1)
     */
        /** @brief No port pin selected */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x00 = 0;
        /** @brief PB4 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI4_B_0x01 = 1;

    /** @brief EXTI5 GPIO port selection These bits are written by software to select the source input for EXTI5 external interrupt. When EXTI_SECCFGR.SEC5 is disabled, EXTI5 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC5 is enabled, EXTI5 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV5 is disabled, EXTI5 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV5 is enabled, EXTI5 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR2_EXTI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA5 pin (value: 0)
     *          - B_0x01: PB5 pin (value: 1)
     */
        /** @brief PA5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x00 = 0;
        /** @brief PB5 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI5_B_0x01 = 1;

    /** @brief EXTI6 GPIO port selection These bits are written by software to select the source input for EXTI6 external interrupt. When EXTI_SECCFGR.SEC6 is disabled, EXTI6 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC6 is enabled, EXTI6 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV6 is disabled, EXTI6 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV6 is enabled, EXTI6 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR2_EXTI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA6 pin (value: 0)
     *          - B_0x01: PB6 pin (value: 1)
     */
        /** @brief PA6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x00 = 0;
        /** @brief PB6 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI6_B_0x01 = 1;

    /** @brief EXTI7 GPIO port selection These bits are written by software to select the source input for EXTI7 external interrupt. When EXTI_SECCFGR.SEC7 is disabled, EXTI7 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC7 is enabled, EXTI7 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV7 is disabled, EXTI7 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV7 is enabled, EXTI7 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR2_EXTI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA7 pin (value: 0)
     *          - B_0x01: PB7 pin (value: 1)
     */
        /** @brief PA7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x00 = 0;
        /** @brief PB7 pin */
    constexpr std::uint32_t EXTI_EXTICR2_EXTI7_B_0x01 = 1;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI8 GPIO port selection These bits are written by software to select the source input for EXTI8 external interrupt. When EXTI_SECCFGR.SEC8 is disabled, EXTI8 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC8 is enabled, EXTI8 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV8 is disabled, EXTI8 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV8 is enabled, EXTI8 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR3_EXTI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA8 pin (value: 0)
     *          - B_0x01: PB8 pin (value: 1)
     */
        /** @brief PA8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x00 = 0;
        /** @brief PB8 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI8_B_0x01 = 1;

    /** @brief EXTI9 GPIO port selection These bits are written by software to select the source input for EXTI9 external interrupt. When EXTI_SECCFGR.SEC9 is disabled, EXTI9 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC9 is enabled, EXTI9 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV9 is disabled, EXTI9 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV9 is enabled, EXTI9 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR3_EXTI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA9 pin (value: 0)
     *          - B_0x01: PB9 pin (value: 1)
     */
        /** @brief PA9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x00 = 0;
        /** @brief PB9 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI9_B_0x01 = 1;

    /** @brief EXTI10 GPIO port selection These bits are written by software to select the source input for EXTI10 external interrupt. When EXTI_SECCFGR.SEC10 is disabled, EXTI10 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC10 is enabled, EXTI10 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV10 is disabled, EXTI10 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV10 is enabled, EXTI10 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR3_EXTI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA10 pin (value: 0)
     *          - B_0x01: PB10 pin (reserved on STM32WBA55xx devices) (value: 1)
     */
        /** @brief PA10 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x00 = 0;
        /** @brief PB10 pin (reserved on STM32WBA55xx devices) */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI10_B_0x01 = 1;

    /** @brief EXTI11 GPIO port selection These bits are written by software to select the source input for EXTI11 external interrupt. When EXTI_SECCFGR.SEC11 is disabled, EXTI11 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC11 is enabled, EXTI11 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV11 is disabled, EXTI11 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV11 is enabled, EXTI11 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR3_EXTI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA11 pin (value: 0)
     *          - B_0x01: PB11 pin (value: 1)
     */
        /** @brief PA11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x00 = 0;
        /** @brief PB11 pin */
    constexpr std::uint32_t EXTI_EXTICR3_EXTI11_B_0x01 = 1;

    /** @brief EXTI external interrupt selection register */
    using EXTI_EXTICR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTI0 GPIO port selection These bits are written by software to select the source input for EXTI12 external interrupt. When EXTI_SECCFGR.SEC12 is disabled, EXTI12 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC12 is enabled, EXTI12 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV12 is disabled, EXTI12 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV12 is enabled, EXTI12 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR4_EXTI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA12 pin (value: 0)
     *          - B_0x01: PB12 pin (value: 1)
     */
        /** @brief PA12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x00 = 0;
        /** @brief PB12 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI12_B_0x01 = 1;

    /** @brief EXTI13 GPIO port selection These bits are written by software to select the source input for EXTI13 external interrupt. When EXTI_SECCFGR.SEC13 is disabled, EXTI13 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC13 is enabled, EXTI13 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV13 is disabled, EXTI13 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV13 is enabled, EXTI13 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR4_EXTI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA13 pin (value: 0)
     *          - B_0x01: PB13 pin (value: 1)
     *          - B_0x02: PC13 pin (value: 2)
     */
        /** @brief PA13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x00 = 0;
        /** @brief PB13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x01 = 1;
        /** @brief PC13 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI13_B_0x02 = 2;

    /** @brief EXTI14 GPIO port selection These bits are written by software to select the source input for EXTI14 external interrupt. When EXTI_SECCFGR.SEC14 is disabled, EXTI14 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC14 is enabled, EXTI14 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV14 is disabled, EXTI14 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV14 is enabled, EXTI14 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR4_EXTI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA14 pin (value: 0)
     *          - B_0x01: PB14 pin (value: 1)
     *          - B_0x02: PC14 pin (value: 2)
     */
        /** @brief PA14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x00 = 0;
        /** @brief PB14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x01 = 1;
        /** @brief PC14 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI14_B_0x02 = 2;

    /** @brief EXTI15 GPIO port selection These bits are written by software to select the source input for EXTI15 external interrupt. When EXTI_SECCFGR.SEC15 is disabled, EXTI15 can be accessed with non-secure and secure access. When EXTI_SECCFGR.SEC15 is enabled, EXTI15 can only be accessed with secure access. Non-secure write is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIV15 is disabled, EXTI15 can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIV15 is enabled, EXTI15 can only be accessed with privileged access. Unprivileged write to this bit is discarded. Others: reserved */
    using EXTI_EXTICR4_EXTI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA15 pin (value: 0)
     *          - B_0x01: PB15 pin (value: 1)
     *          - B_0x02: PC15 pin (value: 2)
     */
        /** @brief PA15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x00 = 0;
        /** @brief PB15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x01 = 1;
        /** @brief PC15 pin */
    constexpr std::uint32_t EXTI_EXTICR4_EXTI15_B_0x02 = 2;

    /** @brief EXTI lock register */
    using EXTI_LOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global security and privilege configuration registers (EXTI_SECCFGR and EXTI_PRIVCFGR) lock This bit is written once after reset. */
    using EXTI_LOCKR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Security and privilege configuration open, can be modified. (value: 0)
     *          - B_0x1: Security and privilege configuration locked, can no longer be modified. (value: 1)
     */
        /** @brief Security and privilege configuration open, can be modified. */
    constexpr std::uint32_t EXTI_LOCKR_LOCK_B_0x0 = 0;
        /** @brief Security and privilege configuration locked, can no longer be modified. */
    constexpr std::uint32_t EXTI_LOCKR_LOCK_B_0x1 = 1;

    /** @brief EXTI CPU wakeup with interrupt mask register */
    using EXTI_IMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM0_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM0_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM1_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM1_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM2_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM2_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM3_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM3_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM4_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM4_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM5_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM5_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM6_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM6_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM7_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM7_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM8_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM8_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM9_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM9_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM10_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM10_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM11_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM11_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM12_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM12_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM13_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM13_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM14_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM14_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM15_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM15_B_0x1 = 1;

    /** @brief CPU wakeup with interrupt mask on event input x When EXTI_SECCFGR.SECx is disabled, IMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, IMx can only be accessed with secure access. Non-secure write to this bit is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, IMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, IMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_IMR1_IM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with interrupt request from input event x is masked. (value: 0)
     *          - B_0x1: Wakeup with interrupt request from input event x is unmasked. (value: 1)
     */
        /** @brief Wakeup with interrupt request from input event x is masked. */
    constexpr std::uint32_t EXTI_IMR1_IM16_B_0x0 = 0;
        /** @brief Wakeup with interrupt request from input event x is unmasked. */
    constexpr std::uint32_t EXTI_IMR1_IM16_B_0x1 = 1;

    /** @brief EXTI CPU wakeup with event mask register */
    using EXTI_EMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM0_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM0_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM1_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM1_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM2_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM2_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM3_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM3_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM4_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM4_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM5_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM5_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM6_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM6_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM7_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM7_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM8_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM8_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM9_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM9_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM10_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM10_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM11_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM11_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM12_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM12_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM13_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM13_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM14_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM14_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM15_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM15_B_0x1 = 1;

    /** @brief CPU wakeup with event generation mask on event input x When EXTI_SECCFGR.SECx is disabled, EMx can be accessed with non-secure and secure access. When EXTI_SECCFGR.SECx is enabled, EMx can only be accessed with secure access. Non-secure write to this bit x is discarded and non-secure read returns 0. When EXTI_PRIVCFGR.PRIVx is disabled, EMx can be accessed with privileged and unprivileged access. When EXTI_PRIVCFGR.PRIVx is enabled, EMx can only be accessed with privileged access. Unprivileged write to this bit is discarded. */
    using EXTI_EMR1_EM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup with event generation from Line x is masked. (value: 0)
     *          - B_0x1: Wakeup with event generation from Line x is unmasked. (value: 1)
     */
        /** @brief Wakeup with event generation from Line x is masked. */
    constexpr std::uint32_t EXTI_EMR1_EM16_B_0x0 = 0;
        /** @brief Wakeup with event generation from Line x is unmasked. */
    constexpr std::uint32_t EXTI_EMR1_EM16_B_0x1 = 1;

}

#endif
