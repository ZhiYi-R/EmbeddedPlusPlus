/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H563_SEC_GTZC1_TZSC_HPP
#define EMBEDDED_PP_STM32H563_SEC_GTZC1_TZSC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Global TrustZone controller */
namespace STM32H563::SEC_GTZC1_TZSC {

    /** @brief GTZC1 TZSC control register */
    using GTZC1_TZSC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief lock the configuration of GTZC1_TZSC_SECCFGRx and GTZC1_TZSC_PRIVCFGRx until next reset This bit is cleared by default and once set, it can not be reset until system reset. */
    using GTZC1_TZSC_CR_LCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: configuration of all GTZC1_TZSC_SECCFGRx and GTZC1_TZSC_PRIVCFGRx not locked (value: 0)
     *          - B_0x1: configuration of all GTZC1_TZSC_SECCFGRx and GTZC1_TZSC_PRIVCFGRx locked (value: 1)
     */
        /** @brief configuration of all GTZC1_TZSC_SECCFGRx and GTZC1_TZSC_PRIVCFGRx not locked */
    constexpr std::uint32_t GTZC1_TZSC_CR_LCK_B_0x0 = 0;
        /** @brief configuration of all GTZC1_TZSC_SECCFGRx and GTZC1_TZSC_PRIVCFGRx locked */
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

    /** @brief secure access mode for TIM4 */
    using GTZC1_TZSC_SECCFGR1_TIM4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM4SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM4SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM5 */
    using GTZC1_TZSC_SECCFGR1_TIM5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM5SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM5SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM6 */
    using GTZC1_TZSC_SECCFGR1_TIM6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM6SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM6SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM7 */
    using GTZC1_TZSC_SECCFGR1_TIM7SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM7SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM7SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM12 */
    using GTZC1_TZSC_SECCFGR1_TIM12SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM12SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM12SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM13 */
    using GTZC1_TZSC_SECCFGR1_TIM13SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM13SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM13SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM14 */
    using GTZC1_TZSC_SECCFGR1_TIM14SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM14SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM14SEC_B_0x1 = 1;

    /** @brief secure access mode for WWDG */
    using GTZC1_TZSC_SECCFGR1_WWDGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_WWDGSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_WWDGSEC_B_0x1 = 1;

    /** @brief secure access mode for IWDG */
    using GTZC1_TZSC_SECCFGR1_IWDGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_IWDGSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_IWDGSEC_B_0x1 = 1;

    /** @brief secure access mode for SPI2 */
    using GTZC1_TZSC_SECCFGR1_SPI2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_SPI2SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_SPI2SEC_B_0x1 = 1;

    /** @brief secure access mode for SPI3 */
    using GTZC1_TZSC_SECCFGR1_SPI3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_SPI3SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_SPI3SEC_B_0x1 = 1;

    /** @brief secure access mode for USART2 */
    using GTZC1_TZSC_SECCFGR1_USART2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART2SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART2SEC_B_0x1 = 1;

    /** @brief secure access mode for USART3 */
    using GTZC1_TZSC_SECCFGR1_USART3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART3SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART3SEC_B_0x1 = 1;

    /** @brief secure access mode for UART4 */
    using GTZC1_TZSC_SECCFGR1_UART4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART4SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART4SEC_B_0x1 = 1;

    /** @brief secure access mode for UART5 */
    using GTZC1_TZSC_SECCFGR1_UART5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART5SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART5SEC_B_0x1 = 1;

    /** @brief secure access mode for I2C1 */
    using GTZC1_TZSC_SECCFGR1_I2C1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C1SEC_B_0x1 = 1;

    /** @brief secure access mode for I2C2 */
    using GTZC1_TZSC_SECCFGR1_I2C2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C2SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C2SEC_B_0x1 = 1;

    /** @brief secure access mode for I3C1 */
    using GTZC1_TZSC_SECCFGR1_I3C1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I3C1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I3C1SEC_B_0x1 = 1;

    /** @brief secure access mode for CRS */
    using GTZC1_TZSC_SECCFGR1_CRSSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_CRSSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_CRSSEC_B_0x1 = 1;

    /** @brief secure access mode for USART6 */
    using GTZC1_TZSC_SECCFGR1_USART6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART6SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART6SEC_B_0x1 = 1;

    /** @brief secure access mode for USART10 */
    using GTZC1_TZSC_SECCFGR1_USART10SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART10SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART10SEC_B_0x1 = 1;

    /** @brief secure access mode for USART11 */
    using GTZC1_TZSC_SECCFGR1_USART11SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART11SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART11SEC_B_0x1 = 1;

    /** @brief secure access mode for HDMICEC */
    using GTZC1_TZSC_SECCFGR1_HDMICECSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_HDMICECSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_HDMICECSEC_B_0x1 = 1;

    /** @brief secure access mode for DAC1 */
    using GTZC1_TZSC_SECCFGR1_DAC1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_DAC1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_DAC1SEC_B_0x1 = 1;

    /** @brief secure access mode for UART7 */
    using GTZC1_TZSC_SECCFGR1_UART7SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART7SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART7SEC_B_0x1 = 1;

    /** @brief secure access mode for UART8 */
    using GTZC1_TZSC_SECCFGR1_UART8SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART8SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART8SEC_B_0x1 = 1;

    /** @brief secure access mode for UART9 */
    using GTZC1_TZSC_SECCFGR1_UART9SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART9SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART9SEC_B_0x1 = 1;

    /** @brief secure access mode for UART12 */
    using GTZC1_TZSC_SECCFGR1_UART12SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART12SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART12SEC_B_0x1 = 1;

    /** @brief secure access mode for DTS */
    using GTZC1_TZSC_SECCFGR1_DTSSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_DTSSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_DTSSEC_B_0x1 = 1;

    /** @brief secure access mode for LPTIM2 */
    using GTZC1_TZSC_SECCFGR1_LPTIM2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief secure access mode for FDCAN1 */
    using GTZC1_TZSC_SECCFGR2_FDCAN1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_FDCAN1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_FDCAN1SEC_B_0x1 = 1;

    /** @brief secure access mode for FDCAN2 */
    using GTZC1_TZSC_SECCFGR2_FDCAN2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_FDCAN2SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_FDCAN2SEC_B_0x1 = 1;

    /** @brief secure access mode for UCPD */
    using GTZC1_TZSC_SECCFGR2_UCPDSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_UCPDSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_UCPDSEC_B_0x1 = 1;

    /** @brief secure access mode for TIM1 */
    using GTZC1_TZSC_SECCFGR2_TIM1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM1SEC_B_0x1 = 1;

    /** @brief secure access mode for SPI1 */
    using GTZC1_TZSC_SECCFGR2_SPI1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI1SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM8 */
    using GTZC1_TZSC_SECCFGR2_TIM8SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM8SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM8SEC_B_0x1 = 1;

    /** @brief secure access mode for USART1 */
    using GTZC1_TZSC_SECCFGR2_USART1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_USART1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_USART1SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM15 */
    using GTZC1_TZSC_SECCFGR2_TIM15SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM15SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM15SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM16 */
    using GTZC1_TZSC_SECCFGR2_TIM16SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM16SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM16SEC_B_0x1 = 1;

    /** @brief secure access mode for TIM17 */
    using GTZC1_TZSC_SECCFGR2_TIM17SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM17SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM17SEC_B_0x1 = 1;

    /** @brief secure access mode for SPI4 */
    using GTZC1_TZSC_SECCFGR2_SPI4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI4SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI4SEC_B_0x1 = 1;

    /** @brief secure access mode for SPI6 */
    using GTZC1_TZSC_SECCFGR2_SPI6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI6SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI6SEC_B_0x1 = 1;

    /** @brief secure access mode for SAI1 */
    using GTZC1_TZSC_SECCFGR2_SAI1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SAI1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SAI1SEC_B_0x1 = 1;

    /** @brief secure access mode for SAI2 */
    using GTZC1_TZSC_SECCFGR2_SAI2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SAI2SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SAI2SEC_B_0x1 = 1;

    /** @brief secure access mode for USB */
    using GTZC1_TZSC_SECCFGR2_USBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_USBSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_USBSEC_B_0x1 = 1;

    /** @brief secure access mode for SPI5 */
    using GTZC1_TZSC_SECCFGR2_SPI5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI5SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI5SEC_B_0x1 = 1;

    /** @brief secure access mode for LPUART */
    using GTZC1_TZSC_SECCFGR2_LPUART1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPUART1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPUART1SEC_B_0x1 = 1;

    /** @brief secure access mode for I2C3 */
    using GTZC1_TZSC_SECCFGR2_I2C3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_I2C3SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_I2C3SEC_B_0x1 = 1;

    /** @brief secure access mode for I2C4 */
    using GTZC1_TZSC_SECCFGR2_I2C4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_I2C4SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_I2C4SEC_B_0x1 = 1;

    /** @brief secure access mode for LPTIM1 */
    using GTZC1_TZSC_SECCFGR2_LPTIM1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM1SEC_B_0x1 = 1;

    /** @brief secure access mode for LPTIM3 */
    using GTZC1_TZSC_SECCFGR2_LPTIM3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM3SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM3SEC_B_0x1 = 1;

    /** @brief secure access mode for LPTIM4 */
    using GTZC1_TZSC_SECCFGR2_LPTIM4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM4SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM4SEC_B_0x1 = 1;

    /** @brief secure access mode for LPTIM5 */
    using GTZC1_TZSC_SECCFGR2_LPTIM5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM5SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM5SEC_B_0x1 = 1;

    /** @brief GTZC1 TZSC secure configuration register 3 */
    using GTZC1_TZSC_SECCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for LPTIM6 */
    using GTZC1_TZSC_SECCFGR3_LPTIM6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_LPTIM6SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_LPTIM6SEC_B_0x1 = 1;

    /** @brief secure access mode for VREFBUF */
    using GTZC1_TZSC_SECCFGR3_VREFBUFSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_VREFBUFSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_VREFBUFSEC_B_0x1 = 1;

    /** @brief secure access mode for CRC */
    using GTZC1_TZSC_SECCFGR3_CRCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_CRCSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_CRCSEC_B_0x1 = 1;

    /** @brief secure access mode for CORDIC */
    using GTZC1_TZSC_SECCFGR3_CORDICSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_CORDICSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_CORDICSEC_B_0x1 = 1;

    /** @brief secure access mode for FMAC */
    using GTZC1_TZSC_SECCFGR3_FMACSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_FMACSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_FMACSEC_B_0x1 = 1;

    /** @brief secure access mode for register of ETH */
    using GTZC1_TZSC_SECCFGR3_ETHSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ETHSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ETHSEC_B_0x1 = 1;

    /** @brief secure access mode for ICACHE */
    using GTZC1_TZSC_SECCFGR3_ICACHESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ICACHESEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ICACHESEC_B_0x1 = 1;

    /** @brief secure access mode for DCACHE */
    using GTZC1_TZSC_SECCFGR3_DCACHESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_DCACHESEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_DCACHESEC_B_0x1 = 1;

    /** @brief secure access mode for ADC1 and ADC2 */
    using GTZC1_TZSC_SECCFGR3_ADC12SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ADC12SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ADC12SEC_B_0x1 = 1;

    /** @brief secure access mode for DCMI */
    using GTZC1_TZSC_SECCFGR3_DCMISEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_DCMISEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_DCMISEC_B_0x1 = 1;

    /** @brief secure access mode for HASH */
    using GTZC1_TZSC_SECCFGR3_HASHSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_HASHSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_HASHSEC_B_0x1 = 1;

    /** @brief secure access mode for RNG */
    using GTZC1_TZSC_SECCFGR3_RNGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RNGSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RNGSEC_B_0x1 = 1;

    /** @brief secure access mode for SAES */
    using GTZC1_TZSC_SECCFGR3_SAESSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SAESSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SAESSEC_B_0x1 = 1;

    /** @brief secure access mode for PKA */
    using GTZC1_TZSC_SECCFGR3_PKASEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_PKASEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_PKASEC_B_0x1 = 1;

    /** @brief secure access mode for SDMMC2 */
    using GTZC1_TZSC_SECCFGR3_SDMMC1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SDMMC1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SDMMC1SEC_B_0x1 = 1;

    /** @brief secure access mode for SDMMC1 */
    using GTZC1_TZSC_SECCFGR3_SDMMC2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SDMMC2SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SDMMC2SEC_B_0x1 = 1;

    /** @brief secure access mode for FMC */
    using GTZC1_TZSC_SECCFGR3_FMCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_FMCSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_FMCSEC_B_0x1 = 1;

    /** @brief secure access mode for OCTOSPI1 */
    using GTZC1_TZSC_SECCFGR3_OCTOSPI1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_OCTOSPI1SEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_OCTOSPI1SEC_B_0x1 = 1;

    /** @brief secure access mode for RAMSCFG */
    using GTZC1_TZSC_SECCFGR3_RAMCFGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RAMCFGSEC_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RAMCFGSEC_B_0x1 = 1;

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

    /** @brief privileged access mode for TIM4 */
    using GTZC1_TZSC_PRIVCFGR1_TIM4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM4PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM4PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM5 */
    using GTZC1_TZSC_PRIVCFGR1_TIM5PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM5PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM5PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM6 */
    using GTZC1_TZSC_PRIVCFGR1_TIM6PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM6PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM6PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM7 */
    using GTZC1_TZSC_PRIVCFGR1_TIM7PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM7PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM7PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM12 */
    using GTZC1_TZSC_PRIVCFGR1_TIM12PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM12PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM12PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM13 */
    using GTZC1_TZSC_PRIVCFGR1_TIM13PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM13PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM13PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM14 */
    using GTZC1_TZSC_PRIVCFGR1_TIM14PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM14PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM14PRIV_B_0x1 = 1;

    /** @brief privileged access mode for WWDG */
    using GTZC1_TZSC_PRIVCFGR1_WWDGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_WWDGPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_WWDGPRIV_B_0x1 = 1;

    /** @brief privileged access mode for IWDG */
    using GTZC1_TZSC_PRIVCFGR1_IWDGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_IWDGPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_IWDGPRIV_B_0x1 = 1;

    /** @brief privileged access mode for SPI2 */
    using GTZC1_TZSC_PRIVCFGR1_SPI2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_SPI2PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_SPI2PRIV_B_0x1 = 1;

    /** @brief privileged access mode for SPI3 */
    using GTZC1_TZSC_PRIVCFGR1_SPI3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_SPI3PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_SPI3PRIV_B_0x1 = 1;

    /** @brief privileged access mode for USART2 */
    using GTZC1_TZSC_PRIVCFGR1_USART2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART2PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART2PRIV_B_0x1 = 1;

    /** @brief privileged access mode for USART3 */
    using GTZC1_TZSC_PRIVCFGR1_USART3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART3PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART3PRIV_B_0x1 = 1;

    /** @brief privileged access mode for UART4 */
    using GTZC1_TZSC_PRIVCFGR1_UART4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART4PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART4PRIV_B_0x1 = 1;

    /** @brief privileged access mode for UART5 */
    using GTZC1_TZSC_PRIVCFGR1_UART5PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART5PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART5PRIV_B_0x1 = 1;

    /** @brief privileged access mode for I2C1 */
    using GTZC1_TZSC_PRIVCFGR1_I2C1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for I2C2 */
    using GTZC1_TZSC_PRIVCFGR1_I2C2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C2PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C2PRIV_B_0x1 = 1;

    /** @brief privileged access mode for I3C1 */
    using GTZC1_TZSC_PRIVCFGR1_I3C1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I3C1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I3C1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for CRS */
    using GTZC1_TZSC_PRIVCFGR1_CRSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_CRSPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_CRSPRIV_B_0x1 = 1;

    /** @brief privileged access mode for USART6 */
    using GTZC1_TZSC_PRIVCFGR1_USART6PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART6PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART6PRIV_B_0x1 = 1;

    /** @brief privileged access mode for USART10 */
    using GTZC1_TZSC_PRIVCFGR1_USART10PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART10PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART10PRIV_B_0x1 = 1;

    /** @brief privileged access mode for USART11 */
    using GTZC1_TZSC_PRIVCFGR1_USART11PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART11PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART11PRIV_B_0x1 = 1;

    /** @brief privileged access mode for HDMICEC */
    using GTZC1_TZSC_PRIVCFGR1_HDMICECPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_HDMICECPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_HDMICECPRIV_B_0x1 = 1;

    /** @brief privileged access mode for DAC1 */
    using GTZC1_TZSC_PRIVCFGR1_DAC1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_DAC1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_DAC1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for UART7 */
    using GTZC1_TZSC_PRIVCFGR1_UART7PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART7PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART7PRIV_B_0x1 = 1;

    /** @brief privileged access mode for UART8 */
    using GTZC1_TZSC_PRIVCFGR1_UART8PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART8PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART8PRIV_B_0x1 = 1;

    /** @brief privileged access mode for UART9 */
    using GTZC1_TZSC_PRIVCFGR1_UART9PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART9PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART9PRIV_B_0x1 = 1;

    /** @brief privileged access mode for UART12 */
    using GTZC1_TZSC_PRIVCFGR1_UART12PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART12PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART12PRIV_B_0x1 = 1;

    /** @brief privileged access mode for DTS */
    using GTZC1_TZSC_PRIVCFGR1_DTSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_DTSPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_DTSPRIV_B_0x1 = 1;

    /** @brief privileged access mode for LPTIM2 */
    using GTZC1_TZSC_PRIVCFGR1_LPTIM2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief privileged access mode for FDCAN1 */
    using GTZC1_TZSC_PRIVCFGR2_FDCAN1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_FDCAN1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_FDCAN1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for FDCAN2 */
    using GTZC1_TZSC_PRIVCFGR2_FDCAN2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_FDCAN2PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_FDCAN2PRIV_B_0x1 = 1;

    /** @brief privileged access mode for UCPD */
    using GTZC1_TZSC_PRIVCFGR2_UCPDPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_UCPDPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_UCPDPRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM1 */
    using GTZC1_TZSC_PRIVCFGR2_TIM1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for SPI1 */
    using GTZC1_TZSC_PRIVCFGR2_SPI1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM8 */
    using GTZC1_TZSC_PRIVCFGR2_TIM8PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM8PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM8PRIV_B_0x1 = 1;

    /** @brief privileged access mode for USART1 */
    using GTZC1_TZSC_PRIVCFGR2_USART1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_USART1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_USART1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM15 */
    using GTZC1_TZSC_PRIVCFGR2_TIM15PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM15PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM15PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM16 */
    using GTZC1_TZSC_PRIVCFGR2_TIM16PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM16PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM16PRIV_B_0x1 = 1;

    /** @brief privileged access mode for TIM17 */
    using GTZC1_TZSC_PRIVCFGR2_TIM17PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM17PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM17PRIV_B_0x1 = 1;

    /** @brief privileged access mode for SPI4 */
    using GTZC1_TZSC_PRIVCFGR2_SPI4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI4PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI4PRIV_B_0x1 = 1;

    /** @brief privileged access mode for SPI6 */
    using GTZC1_TZSC_PRIVCFGR2_SPI6PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI6PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI6PRIV_B_0x1 = 1;

    /** @brief privileged access mode for SAI1 */
    using GTZC1_TZSC_PRIVCFGR2_SAI1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SAI1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SAI1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for SAI2 */
    using GTZC1_TZSC_PRIVCFGR2_SAI2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SAI2PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SAI2PRIV_B_0x1 = 1;

    /** @brief privileged access mode for USB */
    using GTZC1_TZSC_PRIVCFGR2_USBPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_USBPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_USBPRIV_B_0x1 = 1;

    /** @brief privileged access mode for SPI5 */
    using GTZC1_TZSC_PRIVCFGR2_SPI5PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI5PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI5PRIV_B_0x1 = 1;

    /** @brief privileged access mode for LPUART */
    using GTZC1_TZSC_PRIVCFGR2_LPUART1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPUART1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPUART1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for I2C3 */
    using GTZC1_TZSC_PRIVCFGR2_I2C3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_I2C3PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_I2C3PRIV_B_0x1 = 1;

    /** @brief privileged access mode for I2C4 */
    using GTZC1_TZSC_PRIVCFGR2_I2C4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_I2C4PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_I2C4PRIV_B_0x1 = 1;

    /** @brief privileged access mode for LPTIM1 */
    using GTZC1_TZSC_PRIVCFGR2_LPTIM1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for LPTIM3 */
    using GTZC1_TZSC_PRIVCFGR2_LPTIM3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM3PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM3PRIV_B_0x1 = 1;

    /** @brief privileged access mode for LPTIM4 */
    using GTZC1_TZSC_PRIVCFGR2_LPTIM4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM4PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM4PRIV_B_0x1 = 1;

    /** @brief privileged access mode for LPTIM5 */
    using GTZC1_TZSC_PRIVCFGR2_LPTIM5PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM5PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM5PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC privilege configuration register 3 */
    using GTZC1_TZSC_PRIVCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for LPTIM6 */
    using GTZC1_TZSC_PRIVCFGR3_LPTIM6PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_LPTIM6PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_LPTIM6PRIV_B_0x1 = 1;

    /** @brief privileged access mode for VREFBUF */
    using GTZC1_TZSC_PRIVCFGR3_VREFBUFPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_VREFBUFPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_VREFBUFPRIV_B_0x1 = 1;

    /** @brief privileged access mode for CRC */
    using GTZC1_TZSC_PRIVCFGR3_CRCPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_CRCPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_CRCPRIV_B_0x1 = 1;

    /** @brief privileged access mode for CORDIC */
    using GTZC1_TZSC_PRIVCFGR3_CORDICPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_CORDICPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_CORDICPRIV_B_0x1 = 1;

    /** @brief privileged access mode for FMAC */
    using GTZC1_TZSC_PRIVCFGR3_FMACPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_FMACPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_FMACPRIV_B_0x1 = 1;

    /** @brief privileged access mode for register of ETH */
    using GTZC1_TZSC_PRIVCFGR3_ETHPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ETHPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ETHPRIV_B_0x1 = 1;

    /** @brief privileged access mode for ICACHE */
    using GTZC1_TZSC_PRIVCFGR3_ICACHEPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ICACHEPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ICACHEPRIV_B_0x1 = 1;

    /** @brief privileged access mode for DCACHE */
    using GTZC1_TZSC_PRIVCFGR3_DCACHEPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_DCACHEPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_DCACHEPRIV_B_0x1 = 1;

    /** @brief privileged access mode for ADC1 and ADC2 */
    using GTZC1_TZSC_PRIVCFGR3_ADC12PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ADC12PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ADC12PRIV_B_0x1 = 1;

    /** @brief privileged access mode for DCMI */
    using GTZC1_TZSC_PRIVCFGR3_DCMIPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_DCMIPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_DCMIPRIV_B_0x1 = 1;

    /** @brief privileged access mode for HASH */
    using GTZC1_TZSC_PRIVCFGR3_HASHPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_HASHPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_HASHPRIV_B_0x1 = 1;

    /** @brief privileged access mode for RNG */
    using GTZC1_TZSC_PRIVCFGR3_RNGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RNGPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RNGPRIV_B_0x1 = 1;

    /** @brief privileged access mode for SDMMC2 */
    using GTZC1_TZSC_PRIVCFGR3_SDMMC2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_SDMMC2PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_SDMMC2PRIV_B_0x1 = 1;

    /** @brief privileged access mode for SDMMC1 */
    using GTZC1_TZSC_PRIVCFGR3_SDMMC1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_SDMMC1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_SDMMC1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for FMC */
    using GTZC1_TZSC_PRIVCFGR3_FMCPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_FMCPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_FMCPRIV_B_0x1 = 1;

    /** @brief privileged access mode for OCTOSPI1 */
    using GTZC1_TZSC_PRIVCFGR3_OCTOSPI1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_OCTOSPI1PRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_OCTOSPI1PRIV_B_0x1 = 1;

    /** @brief privileged access mode for RAMSCFG */
    using GTZC1_TZSC_PRIVCFGR3_RAMCFGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RAMCFGPRIV_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RAMCFGPRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC memory 1 sub-region A watermark configuration	register */
    using GTZC1_TZSC_MPCWM1ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-region z enable Note: External memories that are watermark controlled start fully non-secure/unprivileged at reset when TZEN = 0xC3. When TZEN = 0xB4, external memories start fully secure/fully privileged (inverted reset-value). */
    using GTZC1_TZSC_MPCWM1ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sub-region A is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. (value: 0)
     *          - B_0x1: Sub-region A of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. (value: 1)
     */
        /** @brief Sub-region A is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1ACFGR_SREN_B_0x0 = 0;
        /** @brief Sub-region A of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1ACFGR_SREN_B_0x1 = 1;

    /** @brief Sub-region A lock This bit, once set, can be cleared only by a system reset. */
    using GTZC1_TZSC_MPCWM1ACFGR_SRLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. (value: 1)
     */
        /** @brief GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1ACFGR_SRLOCK_B_0x0 = 0;
        /** @brief Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1ACFGR_SRLOCK_B_0x1 = 1;

    /** @brief Secure sub-region A of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM1ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure data accesses are granted to sub-region A of region x. (value: 0)
     *          - B_0x1: Only secure data accesses are granted to sub-region A of region x. (value: 1)
     */
        /** @brief Only non-secure data accesses are granted to sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure data accesses are granted to sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1ACFGR_SEC_B_0x1 = 1;

    /** @brief Privileged sub-region A of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM1ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in sub-region A. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in sub-region A of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in sub-region A. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1ACFGR_PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC memory 1 sub-region A watermark register */
    using GTZC1_TZSC_MPCWM1AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of sub-region A in region x This field defines the address offset of the sub-region A, to be multiplied by the granularity defined in Table30, versus the start of the region x. External memories that are watermark controlled, start fully non-secure at reset when TZEN=0xC3. When TZEN=0xB4, external memories start fully secure (inverted reset value). */
    using GTZC1_TZSC_MPCWM1AR_SUBA_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of sub-region A in region x This field defines the length of the sub-region A, to be multiplied by the granularity defined in Table30. When SUBA_START + SUBA_LENGTH is higher than the maximum size allowed for the memory, a saturation of SUBA_LENGTH is applied automatically. If SUBA_LENGTH = 0, the sub-region A is disabled.(SREN bit in GTZC1_TZSC_MPCMWxACFGR is cleared). */
    using GTZC1_TZSC_MPCWM1AR_SUBA_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GTZC1 TZSC memory 1 sub-region B watermark configuration	register */
    using GTZC1_TZSC_MPCWM1BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-region B enable Note: External memories that are watermark controlled start fully non-secure/unprivileged at reset when TZEN = 0xC3. When TZEN = 0xB4, external memories start fully secure/fully privileged (inverted reset-value). */
    using GTZC1_TZSC_MPCWM1BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sub-region B is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. (value: 0)
     *          - B_0x1: Sub-region B of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. (value: 1)
     */
        /** @brief Sub-region B is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1BCFGR_SREN_B_0x0 = 0;
        /** @brief Sub-region B of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1BCFGR_SREN_B_0x1 = 1;

    /** @brief Sub-region B lock This bit, once set, can be cleared only by a system reset. */
    using GTZC1_TZSC_MPCWM1BCFGR_SRLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. (value: 1)
     */
        /** @brief GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1BCFGR_SRLOCK_B_0x0 = 0;
        /** @brief Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1BCFGR_SRLOCK_B_0x1 = 1;

    /** @brief Secure sub-region B of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM1BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure data accesses are granted to sub-region B of region x. (value: 0)
     *          - B_0x1: Only secure data accesses are granted to sub-region B of region x. (value: 1)
     */
        /** @brief Only non-secure data accesses are granted to sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure data accesses are granted to sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1BCFGR_SEC_B_0x1 = 1;

    /** @brief Privileged sub-region B of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM1BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in sub-region B. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in sub-region B of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in sub-region B. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM1BCFGR_PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC memory 1 sub-region B watermark register */
    using GTZC1_TZSC_MPCWM1BR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of sub-region B in region x This field defines the address offset of the sub-region B, to be multiplied by the granularity defined in Table30, versus the start of the region x. External memories that are watermark controlled, start fully non-secure at reset when TZEN=0xC3. When TZEN=0xB4, external memories start fully secure (inverted reset value). */
    using GTZC1_TZSC_MPCWM1BR_SUBB_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of sub-region B in region x This field defines the length of the sub-region B, to be multiplied by the granularity defined in Table30. When SUBB_START + SUBB_LENGTH is higher than the maximum size allowed for the memory, a saturation of SUBB_LENGTH is applied automatically. If SUBB_LENGTH = 0, the sub-region B is disabled.(SREN bit in GTZC1_TZSC_MPCMWxBCFGR is cleared). */
    using GTZC1_TZSC_MPCWM1BR_SUBB_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GTZC1 TZSC memory 2 sub-region A watermark configuration	register */
    using GTZC1_TZSC_MPCWM2ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-region z enable Note: External memories that are watermark controlled start fully non-secure/unprivileged at reset when TZEN = 0xC3. When TZEN = 0xB4, external memories start fully secure/fully privileged (inverted reset-value). */
    using GTZC1_TZSC_MPCWM2ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sub-region A is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. (value: 0)
     *          - B_0x1: Sub-region A of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. (value: 1)
     */
        /** @brief Sub-region A is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2ACFGR_SREN_B_0x0 = 0;
        /** @brief Sub-region A of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2ACFGR_SREN_B_0x1 = 1;

    /** @brief Sub-region A lock This bit, once set, can be cleared only by a system reset. */
    using GTZC1_TZSC_MPCWM2ACFGR_SRLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. (value: 1)
     */
        /** @brief GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2ACFGR_SRLOCK_B_0x0 = 0;
        /** @brief Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2ACFGR_SRLOCK_B_0x1 = 1;

    /** @brief Secure sub-region A of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM2ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure data accesses are granted to sub-region A of region x. (value: 0)
     *          - B_0x1: Only secure data accesses are granted to sub-region A of region x. (value: 1)
     */
        /** @brief Only non-secure data accesses are granted to sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure data accesses are granted to sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2ACFGR_SEC_B_0x1 = 1;

    /** @brief Privileged sub-region A of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM2ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in sub-region A. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in sub-region A of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in sub-region A. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2ACFGR_PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC memory 2 sub-region A watermark register */
    using GTZC1_TZSC_MPCWM2AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of sub-region A in region x This field defines the address offset of the sub-region A, to be multiplied by the granularity defined in Table30, versus the start of the region x. External memories that are watermark controlled, start fully non-secure at reset when TZEN=0xC3. When TZEN=0xB4, external memories start fully secure (inverted reset value). */
    using GTZC1_TZSC_MPCWM2AR_SUBA_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of sub-region A in region x This field defines the length of the sub-region A, to be multiplied by the granularity defined in Table30. When SUBA_START + SUBA_LENGTH is higher than the maximum size allowed for the memory, a saturation of SUBA_LENGTH is applied automatically. If SUBA_LENGTH = 0, the sub-region A is disabled.(SREN bit in GTZC1_TZSC_MPCMWxACFGR is cleared). */
    using GTZC1_TZSC_MPCWM2AR_SUBA_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GTZC1 TZSC memory 2 sub-region B watermark configuration	register */
    using GTZC1_TZSC_MPCWM2BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-region B enable Note: External memories that are watermark controlled start fully non-secure/unprivileged at reset when TZEN = 0xC3. When TZEN = 0xB4, external memories start fully secure/fully privileged (inverted reset-value). */
    using GTZC1_TZSC_MPCWM2BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sub-region B is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. (value: 0)
     *          - B_0x1: Sub-region B of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. (value: 1)
     */
        /** @brief Sub-region B is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2BCFGR_SREN_B_0x0 = 0;
        /** @brief Sub-region B of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2BCFGR_SREN_B_0x1 = 1;

    /** @brief Sub-region B lock This bit, once set, can be cleared only by a system reset. */
    using GTZC1_TZSC_MPCWM2BCFGR_SRLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. (value: 1)
     */
        /** @brief GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2BCFGR_SRLOCK_B_0x0 = 0;
        /** @brief Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2BCFGR_SRLOCK_B_0x1 = 1;

    /** @brief Secure sub-region B of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM2BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure data accesses are granted to sub-region B of region x. (value: 0)
     *          - B_0x1: Only secure data accesses are granted to sub-region B of region x. (value: 1)
     */
        /** @brief Only non-secure data accesses are granted to sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure data accesses are granted to sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2BCFGR_SEC_B_0x1 = 1;

    /** @brief Privileged sub-region B of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM2BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in sub-region B. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in sub-region B of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in sub-region B. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM2BCFGR_PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC memory 2 sub-region B watermark register */
    using GTZC1_TZSC_MPCWM2BR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of sub-region B in region x This field defines the address offset of the sub-region B, to be multiplied by the granularity defined in Table30, versus the start of the region x. External memories that are watermark controlled, start fully non-secure at reset when TZEN=0xC3. When TZEN=0xB4, external memories start fully secure (inverted reset value). */
    using GTZC1_TZSC_MPCWM2BR_SUBB_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of sub-region B in region x This field defines the length of the sub-region B, to be multiplied by the granularity defined in Table30. When SUBB_START + SUBB_LENGTH is higher than the maximum size allowed for the memory, a saturation of SUBB_LENGTH is applied automatically. If SUBB_LENGTH = 0, the sub-region B is disabled.(SREN bit in GTZC1_TZSC_MPCMWxBCFGR is cleared). */
    using GTZC1_TZSC_MPCWM2BR_SUBB_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GTZC1 TZSC memory 3 sub-region A watermark configuration	register */
    using GTZC1_TZSC_MPCWM3ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-region z enable Note: External memories that are watermark controlled start fully non-secure/unprivileged at reset when TZEN = 0xC3. When TZEN = 0xB4, external memories start fully secure/fully privileged (inverted reset-value). */
    using GTZC1_TZSC_MPCWM3ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sub-region A is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. (value: 0)
     *          - B_0x1: Sub-region A of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. (value: 1)
     */
        /** @brief Sub-region A is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3ACFGR_SREN_B_0x0 = 0;
        /** @brief Sub-region A of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3ACFGR_SREN_B_0x1 = 1;

    /** @brief Sub-region A lock This bit, once set, can be cleared only by a system reset. */
    using GTZC1_TZSC_MPCWM3ACFGR_SRLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. (value: 1)
     */
        /** @brief GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3ACFGR_SRLOCK_B_0x0 = 0;
        /** @brief Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3ACFGR_SRLOCK_B_0x1 = 1;

    /** @brief Secure sub-region A of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM3ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure data accesses are granted to sub-region A of region x. (value: 0)
     *          - B_0x1: Only secure data accesses are granted to sub-region A of region x. (value: 1)
     */
        /** @brief Only non-secure data accesses are granted to sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure data accesses are granted to sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3ACFGR_SEC_B_0x1 = 1;

    /** @brief Privileged sub-region A of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM3ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in sub-region A. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in sub-region A of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in sub-region A. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3ACFGR_PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC memory 3 sub-region A watermark register */
    using GTZC1_TZSC_MPCWM3AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of sub-region A in region x This field defines the address offset of the sub-region A, to be multiplied by the granularity defined in Table30, versus the start of the region x. External memories that are watermark controlled, start fully non-secure at reset when TZEN=0xC3. When TZEN=0xB4, external memories start fully secure (inverted reset value). */
    using GTZC1_TZSC_MPCWM3AR_SUBA_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of sub-region A in region x This field defines the length of the sub-region A, to be multiplied by the granularity defined in Table30. When SUBA_START + SUBA_LENGTH is higher than the maximum size allowed for the memory, a saturation of SUBA_LENGTH is applied automatically. If SUBA_LENGTH = 0, the sub-region A is disabled.(SREN bit in GTZC1_TZSC_MPCMWxACFGR is cleared). */
    using GTZC1_TZSC_MPCWM3AR_SUBA_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GTZC1 TZSC memory 3 sub-region B watermark configuration	register */
    using GTZC1_TZSC_MPCWM3BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-region B enable Note: External memories that are watermark controlled start fully non-secure/unprivileged at reset when TZEN = 0xC3. When TZEN = 0xB4, external memories start fully secure/fully privileged (inverted reset-value). */
    using GTZC1_TZSC_MPCWM3BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sub-region B is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. (value: 0)
     *          - B_0x1: Sub-region B of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. (value: 1)
     */
        /** @brief Sub-region B is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3BCFGR_SREN_B_0x0 = 0;
        /** @brief Sub-region B of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3BCFGR_SREN_B_0x1 = 1;

    /** @brief Sub-region B lock This bit, once set, can be cleared only by a system reset. */
    using GTZC1_TZSC_MPCWM3BCFGR_SRLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. (value: 1)
     */
        /** @brief GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3BCFGR_SRLOCK_B_0x0 = 0;
        /** @brief Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3BCFGR_SRLOCK_B_0x1 = 1;

    /** @brief Secure sub-region B of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM3BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure data accesses are granted to sub-region B of region x. (value: 0)
     *          - B_0x1: Only secure data accesses are granted to sub-region B of region x. (value: 1)
     */
        /** @brief Only non-secure data accesses are granted to sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure data accesses are granted to sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3BCFGR_SEC_B_0x1 = 1;

    /** @brief Privileged sub-region B of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM3BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in sub-region B. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in sub-region B of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in sub-region B. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM3BCFGR_PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC memory 3 sub-region B watermark register */
    using GTZC1_TZSC_MPCWM3BR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of sub-region B in region x This field defines the address offset of the sub-region B, to be multiplied by the granularity defined in Table30, versus the start of the region x. External memories that are watermark controlled, start fully non-secure at reset when TZEN=0xC3. When TZEN=0xB4, external memories start fully secure (inverted reset value). */
    using GTZC1_TZSC_MPCWM3BR_SUBB_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of sub-region B in region x This field defines the length of the sub-region B, to be multiplied by the granularity defined in Table30. When SUBB_START + SUBB_LENGTH is higher than the maximum size allowed for the memory, a saturation of SUBB_LENGTH is applied automatically. If SUBB_LENGTH = 0, the sub-region B is disabled.(SREN bit in GTZC1_TZSC_MPCMWxBCFGR is cleared). */
    using GTZC1_TZSC_MPCWM3BR_SUBB_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GTZC1 TZSC memory 4 sub-region A watermark configuration	register */
    using GTZC1_TZSC_MPCWM4ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-region z enable Note: External memories that are watermark controlled start fully non-secure/unprivileged at reset when TZEN = 0xC3. When TZEN = 0xB4, external memories start fully secure/fully privileged (inverted reset-value). */
    using GTZC1_TZSC_MPCWM4ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sub-region A is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. (value: 0)
     *          - B_0x1: Sub-region A of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. (value: 1)
     */
        /** @brief Sub-region A is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4ACFGR_SREN_B_0x0 = 0;
        /** @brief Sub-region A of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4ACFGR_SREN_B_0x1 = 1;

    /** @brief Sub-region A lock This bit, once set, can be cleared only by a system reset. */
    using GTZC1_TZSC_MPCWM4ACFGR_SRLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. (value: 1)
     */
        /** @brief GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4ACFGR_SRLOCK_B_0x0 = 0;
        /** @brief Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4ACFGR_SRLOCK_B_0x1 = 1;

    /** @brief Secure sub-region A of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM4ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure data accesses are granted to sub-region A of region x. (value: 0)
     *          - B_0x1: Only secure data accesses are granted to sub-region A of region x. (value: 1)
     */
        /** @brief Only non-secure data accesses are granted to sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure data accesses are granted to sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4ACFGR_SEC_B_0x1 = 1;

    /** @brief Privileged sub-region A of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM4ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in sub-region A. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in sub-region A of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in sub-region A. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in sub-region A of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4ACFGR_PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC memory 4 sub-region A watermark register */
    using GTZC1_TZSC_MPCWM4AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of sub-region A in region x This field defines the address offset of the sub-region A, to be multiplied by the granularity defined in Table30, versus the start of the region x. External memories that are watermark controlled, start fully non-secure at reset when TZEN=0xC3. When TZEN=0xB4, external memories start fully secure (inverted reset value). */
    using GTZC1_TZSC_MPCWM4AR_SUBA_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of sub-region A in region x This field defines the length of the sub-region A, to be multiplied by the granularity defined in Table30. When SUBA_START + SUBA_LENGTH is higher than the maximum size allowed for the memory, a saturation of SUBA_LENGTH is applied automatically. If SUBA_LENGTH = 0, the sub-region A is disabled.(SREN bit in GTZC1_TZSC_MPCMWxACFGR is cleared). */
    using GTZC1_TZSC_MPCWM4AR_SUBA_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GTZC1 TZSC memory 4 sub-region B watermark configuration	register */
    using GTZC1_TZSC_MPCWM4BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-region B enable Note: External memories that are watermark controlled start fully non-secure/unprivileged at reset when TZEN = 0xC3. When TZEN = 0xB4, external memories start fully secure/fully privileged (inverted reset-value). */
    using GTZC1_TZSC_MPCWM4BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sub-region B is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. (value: 0)
     *          - B_0x1: Sub-region B of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. (value: 1)
     */
        /** @brief Sub-region B is disabled. Access control of base region x applies to any access between this sub-region start- and end-addresses. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4BCFGR_SREN_B_0x0 = 0;
        /** @brief Sub-region B of region x is enabled. Access control defined in GTZC1_TZSC_MPCWMx_CFGR applies to any access between this sub-region start- and end-addresses, both defined in GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4BCFGR_SREN_B_0x1 = 1;

    /** @brief Sub-region B lock This bit, once set, can be cleared only by a system reset. */
    using GTZC1_TZSC_MPCWM4BCFGR_SRLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. (value: 1)
     */
        /** @brief GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR can be written. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4BCFGR_SRLOCK_B_0x0 = 0;
        /** @brief Writes to GTZC1_TZSC_MPCWMxCFGR, GTZC1_TZSC_MPCWMxAR and GTZC1_TZSC_MPCWMxBR are ignored. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4BCFGR_SRLOCK_B_0x1 = 1;

    /** @brief Secure sub-region B of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM4BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure data accesses are granted to sub-region B of region x. (value: 0)
     *          - B_0x1: Only secure data accesses are granted to sub-region B of region x. (value: 1)
     */
        /** @brief Only non-secure data accesses are granted to sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure data accesses are granted to sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4BCFGR_SEC_B_0x1 = 1;

    /** @brief Privileged sub-region B of base region x This bit is taken into account only if SREN is set. */
    using GTZC1_TZSC_MPCWM4BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in sub-region B. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in sub-region B of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in sub-region B. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in sub-region B of region x. */
    constexpr std::uint32_t GTZC1_TZSC_MPCWM4BCFGR_PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC memory 4 sub-region B watermark register */
    using GTZC1_TZSC_MPCWM4BR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of sub-region B in region x This field defines the address offset of the sub-region B, to be multiplied by the granularity defined in Table30, versus the start of the region x. External memories that are watermark controlled, start fully non-secure at reset when TZEN=0xC3. When TZEN=0xB4, external memories start fully secure (inverted reset value). */
    using GTZC1_TZSC_MPCWM4BR_SUBB_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of sub-region B in region x This field defines the length of the sub-region B, to be multiplied by the granularity defined in Table30. When SUBB_START + SUBB_LENGTH is higher than the maximum size allowed for the memory, a saturation of SUBB_LENGTH is applied automatically. If SUBB_LENGTH = 0, the sub-region B is disabled.(SREN bit in GTZC1_TZSC_MPCMWxBCFGR is cleared). */
    using GTZC1_TZSC_MPCWM4BR_SUBB_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
