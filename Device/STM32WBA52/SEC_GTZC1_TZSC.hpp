/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA52_SEC_GTZC1_TZSC_HPP
#define EMBEDDED_PP_STM32WBA52_SEC_GTZC1_TZSC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GTZC1_TZSC */
namespace STM32WBA52::SEC_GTZC1_TZSC {

    /** @brief GTZC1 TZSC control register */
    using GTZC1_TZSC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief lock the configuration of GTZC1_TZSC_SECCFGRn and GTZC1_TZSC_PRIVCFGRn registers until next reset This bit is cleared by default and once set, it can not be reset until system reset. */
    using GTZC1_TZSC_CR_LCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: configuration of all GTZC1_TZSC_SECCFGRn and GTZC1_TZSC_PRIVCFGRn registers not locked (value: 0)
     *          - B_0x1: configuration of all GTZC1_TZSC_SECCFGRn and GTZC1_TZSC_PRIVCFGRn registers locked (value: 1)
     */
        /** @brief configuration of all GTZC1_TZSC_SECCFGRn and GTZC1_TZSC_PRIVCFGRn registers not locked */
    constexpr std::uint32_t GTZC1_TZSC_CR_LCK_B_0x0 = 0;
        /** @brief configuration of all GTZC1_TZSC_SECCFGRn and GTZC1_TZSC_PRIVCFGRn registers locked */
    constexpr std::uint32_t GTZC1_TZSC_CR_LCK_B_0x1 = 1;

    /** @brief GTZC1 TZSC secure configuration register 1 */
    using GTZC1_TZSC_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for TIM2 */
    using GTZC1_TZSC_SECCFGR1_TIM2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM2SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM2SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM3 */
    using GTZC1_TZSC_SECCFGR1_TIM3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM3SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM3SEC_B_0x1 = 1;

    /** @brief secure access mode for WWDG */
    using GTZC1_TZSC_SECCFGR1_WWDGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_WWDGSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_WWDGSEC_B_0x1 = 1;

    /** @brief secure access mode for IWDG */
    using GTZC1_TZSC_SECCFGR1_IWDGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_IWDGSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_IWDGSEC_B_0x1 = 1;

    /** @brief secure access mode for USART2 */
    using GTZC1_TZSC_SECCFGR1_USART2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART2SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART2SEC_B_0x1 = 1;

    /** @brief secure access mode for I2C1 */
    using GTZC1_TZSC_SECCFGR1_I2C1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C1SEC_B_0x1 = 1;

    /** @brief secure access mode for LPTIM2 */
    using GTZC1_TZSC_SECCFGR1_LPTIM2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_LPTIM2SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_LPTIM2SEC_B_0x1 = 1;

    /** @brief GTZC1 TZSC secure configuration register 2 */
    using GTZC1_TZSC_SECCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for TIM1 */
    using GTZC1_TZSC_SECCFGR2_TIM1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM1SEC_B_0x1 = 1;

    /** @brief secure access mode for SPI1 */
    using GTZC1_TZSC_SECCFGR2_SPI1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI1SEC_B_0x1 = 1;

    /** @brief secure access mode for USART1 */
    using GTZC1_TZSC_SECCFGR2_USART1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_USART1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_USART1SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM16 */
    using GTZC1_TZSC_SECCFGR2_TIM16SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM16SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM16SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM17 */
    using GTZC1_TZSC_SECCFGR2_TIM17SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM17SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM17SEC_B_0x1 = 1;

    /** @brief secure access mode for SPI3 */
    using GTZC1_TZSC_SECCFGR2_SPI3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI3SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI3SEC_B_0x1 = 1;

    /** @brief secure access mode for LPUART1 */
    using GTZC1_TZSC_SECCFGR2_LPUART1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPUART1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPUART1SEC_B_0x1 = 1;

    /** @brief secure access mode for I2C3 */
    using GTZC1_TZSC_SECCFGR2_I2C3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_I2C3SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_I2C3SEC_B_0x1 = 1;

    /** @brief secure access mode for LPTIM1 */
    using GTZC1_TZSC_SECCFGR2_LPTIM1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM1SEC_B_0x1 = 1;

    /** @brief secure access mode for COMP Note that bit 23 is reserved on sales type STM32WBA52. */
    using GTZC1_TZSC_SECCFGR2_COMPSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_COMPSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_COMPSEC_B_0x1 = 1;

    /** @brief secure access mode for ADC4 */
    using GTZC1_TZSC_SECCFGR2_ADC4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_ADC4SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_ADC4SEC_B_0x1 = 1;

    /** @brief GTZC1 TZSC secure configuration register 3 */
    using GTZC1_TZSC_SECCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for CRC */
    using GTZC1_TZSC_SECCFGR3_CRCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_CRCSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_CRCSEC_B_0x1 = 1;

    /** @brief secure access mode for TSC */
    using GTZC1_TZSC_SECCFGR3_TSCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_TSCSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_TSCSEC_B_0x1 = 1;

    /** @brief secure access mode for ICACHE registers */
    using GTZC1_TZSC_SECCFGR3_ICACHE_REGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ICACHE_REGSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ICACHE_REGSEC_B_0x1 = 1;

    /** @brief secure access mode for AES */
    using GTZC1_TZSC_SECCFGR3_AESSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_AESSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_AESSEC_B_0x1 = 1;

    /** @brief secure access mode for HASH */
    using GTZC1_TZSC_SECCFGR3_HASHSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_HASHSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_HASHSEC_B_0x1 = 1;

    /** @brief secure access mode for RNG */
    using GTZC1_TZSC_SECCFGR3_RNGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RNGSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RNGSEC_B_0x1 = 1;

    /** @brief secure access mode for SAES */
    using GTZC1_TZSC_SECCFGR3_SAESSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SAESSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SAESSEC_B_0x1 = 1;

    /** @brief secure access mode for PKA */
    using GTZC1_TZSC_SECCFGR3_PKASEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_PKASEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_PKASEC_B_0x1 = 1;

    /** @brief secure access mode for RAMCFG */
    using GTZC1_TZSC_SECCFGR3_RAMCFGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RAMCFGSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RAMCFGSEC_B_0x1 = 1;

    /** @brief secure access mode for 2.4 GHz RADIO */
    using GTZC1_TZSC_SECCFGR3_RADIOSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RADIOSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RADIOSEC_B_0x1 = 1;

    /** @brief GTZC1 TZSC privilege configuration register 1 */
    using GTZC1_TZSC_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for TIM2 */
    using GTZC1_TZSC_PRIVCFGR1_TIM2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM2PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM2PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM3 */
    using GTZC1_TZSC_PRIVCFGR1_TIM3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM3PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM3PRIV_B_0x1 = 1;

    /** @brief privileged access mode for WWDG */
    using GTZC1_TZSC_PRIVCFGR1_WWDGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_WWDGPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_WWDGPRIV_B_0x1 = 1;

    /** @brief privileged access mode for IWDG */
    using GTZC1_TZSC_PRIVCFGR1_IWDGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_IWDGPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_IWDGPRIV_B_0x1 = 1;

    /** @brief privileged access mode for USART2 */
    using GTZC1_TZSC_PRIVCFGR1_USART2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART2PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART2PRIV_B_0x1 = 1;

    /** @brief privileged access mode for I2C1 */
    using GTZC1_TZSC_PRIVCFGR1_I2C1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for LPTIM2 */
    using GTZC1_TZSC_PRIVCFGR1_LPTIM2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_LPTIM2PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_LPTIM2PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC privilege configuration register 2 */
    using GTZC1_TZSC_PRIVCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for TIM1 */
    using GTZC1_TZSC_PRIVCFGR2_TIM1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for SPI1PRIV */
    using GTZC1_TZSC_PRIVCFGR2_SPI1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for USART1 */
    using GTZC1_TZSC_PRIVCFGR2_USART1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_USART1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_USART1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM16 */
    using GTZC1_TZSC_PRIVCFGR2_TIM16PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM16PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM16PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM17 */
    using GTZC1_TZSC_PRIVCFGR2_TIM17PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM17PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM17PRIV_B_0x1 = 1;

    /** @brief privileged access mode for SPI3 */
    using GTZC1_TZSC_PRIVCFGR2_SPI3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI3PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI3PRIV_B_0x1 = 1;

    /** @brief privileged access mode for LPUART1 */
    using GTZC1_TZSC_PRIVCFGR2_LPUART1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPUART1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPUART1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for I2C3 */
    using GTZC1_TZSC_PRIVCFGR2_I2C3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_I2C3PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_I2C3PRIV_B_0x1 = 1;

    /** @brief privileged access mode for LPTIM1 */
    using GTZC1_TZSC_PRIVCFGR2_LPTIM1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for COMP Note that bit 23 is reserved on sales type STM32WBA52. */
    using GTZC1_TZSC_PRIVCFGR2_COMPPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_COMPPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_COMPPRIV_B_0x1 = 1;

    /** @brief privileged access mode for ADC4 */
    using GTZC1_TZSC_PRIVCFGR2_ADC4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_ADC4PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_ADC4PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC privilege configuration register 3 */
    using GTZC1_TZSC_PRIVCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for CRC */
    using GTZC1_TZSC_PRIVCFGR3_CRCPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_CRCPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_CRCPRIV_B_0x1 = 1;

    /** @brief privileged access mode for TSC */
    using GTZC1_TZSC_PRIVCFGR3_TSCPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_TSCPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_TSCPRIV_B_0x1 = 1;

    /** @brief privileged access mode for ICACHE registers */
    using GTZC1_TZSC_PRIVCFGR3_ICACHE_REGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ICACHE_REGPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ICACHE_REGPRIV_B_0x1 = 1;

    /** @brief privileged access mode for AES */
    using GTZC1_TZSC_PRIVCFGR3_AESPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_AESPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_AESPRIV_B_0x1 = 1;

    /** @brief privileged access mode for HASH */
    using GTZC1_TZSC_PRIVCFGR3_HASHPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_HASHPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_HASHPRIV_B_0x1 = 1;

    /** @brief privileged access mode for RNG */
    using GTZC1_TZSC_PRIVCFGR3_RNGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RNGPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RNGPRIV_B_0x1 = 1;

    /** @brief privileged access mode for SAES */
    using GTZC1_TZSC_PRIVCFGR3_SAESPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_SAESPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_SAESPRIV_B_0x1 = 1;

    /** @brief privileged access mode for PKA */
    using GTZC1_TZSC_PRIVCFGR3_PKAPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_PKAPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_PKAPRIV_B_0x1 = 1;

    /** @brief privileged access mode for RAMCFG */
    using GTZC1_TZSC_PRIVCFGR3_RAMCFGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RAMCFGPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RAMCFGPRIV_B_0x1 = 1;

    /** @brief privileged access mode for 2.4 GHz RADIO */
    using GTZC1_TZSC_PRIVCFGR3_RADIOPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RADIOPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RADIOPRIV_B_0x1 = 1;

}

#endif
