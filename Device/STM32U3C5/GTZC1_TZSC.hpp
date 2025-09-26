/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3C5_GTZC1_TZSC_HPP
#define EMBEDDED_PP_STM32U3C5_GTZC1_TZSC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GTZC1_TZSC address block description */
namespace STM32U3C5::GTZC1_TZSC {

    /** @brief GTZC1 TZSC control register */
    using GTZC1_TZSC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lock GTZC1_TZSC_SECCFGRx and GTZC1_TZSC_PRIVCFGRx configuration untilnext reset */
    using GTZC1_TZSC_CR_LCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Configuration of all GTZC1_TZSC_SECCFGRx and GTZC1_TZSC_PRIVCFGRx registers not locked (value: 0)
     *          - B_0x1: Configuration of all GTZC1_TZSC_SECCFGRx and GTZC1_TZSC_PRIVCFGRx registers locked (value: 1)
     */
        /** @brief Configuration of all GTZC1_TZSC_SECCFGRx and GTZC1_TZSC_PRIVCFGRx registers not locked */
    constexpr std::uint32_t GTZC1_TZSC_CR_LCK_B_0x0 = 0;
        /** @brief Configuration of all GTZC1_TZSC_SECCFGRx and GTZC1_TZSC_PRIVCFGRx registers locked */
    constexpr std::uint32_t GTZC1_TZSC_CR_LCK_B_0x1 = 1;

    /** @brief GTZC1 TZSC secure configuration register 1 */
    using GTZC1_TZSC_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure access mode for TIM2 */
    using GTZC1_TZSC_SECCFGR1_TIM2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM2SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM2SEC_B_0x1 = 1;

    /** @brief Secure access mode for TIM3 */
    using GTZC1_TZSC_SECCFGR1_TIM3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM3SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM3SEC_B_0x1 = 1;

    /** @brief Secure access mode for TIM4 */
    using GTZC1_TZSC_SECCFGR1_TIM4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM4SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM4SEC_B_0x1 = 1;

    /** @brief Secure access mode for TIM6 */
    using GTZC1_TZSC_SECCFGR1_TIM6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM6SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM6SEC_B_0x1 = 1;

    /** @brief Secure access mode for TIM7 */
    using GTZC1_TZSC_SECCFGR1_TIM7SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM7SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_TIM7SEC_B_0x1 = 1;

    /** @brief Secure access mode for WWDG */
    using GTZC1_TZSC_SECCFGR1_WWDGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_WWDGSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_WWDGSEC_B_0x1 = 1;

    /** @brief Secure access mode for IWDG */
    using GTZC1_TZSC_SECCFGR1_IWDGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_IWDGSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_IWDGSEC_B_0x1 = 1;

    /** @brief Secure access mode for SPI2 */
    using GTZC1_TZSC_SECCFGR1_SPI2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_SPI2SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_SPI2SEC_B_0x1 = 1;

    /** @brief Secure access mode for USART2 */
    using GTZC1_TZSC_SECCFGR1_USART2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART2SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART2SEC_B_0x1 = 1;

    /** @brief Secure access mode for USART3 */
    using GTZC1_TZSC_SECCFGR1_USART3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART3SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_USART3SEC_B_0x1 = 1;

    /** @brief Secure access mode for UART4 */
    using GTZC1_TZSC_SECCFGR1_UART4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART4SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART4SEC_B_0x1 = 1;

    /** @brief Secure access mode for UART5 */
    using GTZC1_TZSC_SECCFGR1_UART5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART5SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_UART5SEC_B_0x1 = 1;

    /** @brief Secure access mode for I2C1 */
    using GTZC1_TZSC_SECCFGR1_I2C1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C1SEC_B_0x1 = 1;

    /** @brief Secure access mode for I2C2 */
    using GTZC1_TZSC_SECCFGR1_I2C2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C2SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C2SEC_B_0x1 = 1;

    /** @brief Secure access mode for CRS */
    using GTZC1_TZSC_SECCFGR1_CRSSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_CRSSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_CRSSEC_B_0x1 = 1;

    /** @brief Secure access mode for I2C4 */
    using GTZC1_TZSC_SECCFGR1_I2C4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C4SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I2C4SEC_B_0x1 = 1;

    /** @brief Secure access mode for LPTIM2 */
    using GTZC1_TZSC_SECCFGR1_LPTIM2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_LPTIM2SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_LPTIM2SEC_B_0x1 = 1;

    /** @brief Secure access mode for FDCAN1 */
    using GTZC1_TZSC_SECCFGR1_FDCAN1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_FDCAN1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_FDCAN1SEC_B_0x1 = 1;

    /** @brief Secure access mode for FDCAN2 */
    using GTZC1_TZSC_SECCFGR1_FDCAN2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_FDCAN2SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_FDCAN2SEC_B_0x1 = 1;

    /** @brief Secure access mode for SPI3 */
    using GTZC1_TZSC_SECCFGR1_SPI3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_SPI3SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_SPI3SEC_B_0x1 = 1;

    /** @brief Secure access mode for I3C1 */
    using GTZC1_TZSC_SECCFGR1_I3C1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I3C1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_I3C1SEC_B_0x1 = 1;

    /** @brief Secure access mode for OPAMP */
    using GTZC1_TZSC_SECCFGR1_OPAMPSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_OPAMPSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_OPAMPSEC_B_0x1 = 1;

    /** @brief Secure access mode for VREFBUF */
    using GTZC1_TZSC_SECCFGR1_VREFBUFSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_VREFBUFSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_VREFBUFSEC_B_0x1 = 1;

    /** @brief Secure access mode for VREFBUF */
    using GTZC1_TZSC_SECCFGR1_SPI4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_SPI4SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR1_SPI4SEC_B_0x1 = 1;

    /** @brief GTZC1 TZSC secure configuration register 2 */
    using GTZC1_TZSC_SECCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure access mode for TIM1 */
    using GTZC1_TZSC_SECCFGR2_TIM1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM1SEC_B_0x1 = 1;

    /** @brief Secure access mode for SPI1 */
    using GTZC1_TZSC_SECCFGR2_SPI1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SPI1SEC_B_0x1 = 1;

    /** @brief Secure access mode for TIM8 */
    using GTZC1_TZSC_SECCFGR2_TIM8SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM8SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM8SEC_B_0x1 = 1;

    /** @brief Secure access mode for USART1 */
    using GTZC1_TZSC_SECCFGR2_USART1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_USART1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_USART1SEC_B_0x1 = 1;

    /** @brief Secure access mode for TIM15 */
    using GTZC1_TZSC_SECCFGR2_TIM15SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM15SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM15SEC_B_0x1 = 1;

    /** @brief Secure access mode for TIM16 */
    using GTZC1_TZSC_SECCFGR2_TIM16SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM16SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM16SEC_B_0x1 = 1;

    /** @brief Secure access mode for TIM17 */
    using GTZC1_TZSC_SECCFGR2_TIM17SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM17SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM17SEC_B_0x1 = 1;

    /** @brief Secure access mode for SAI1 */
    using GTZC1_TZSC_SECCFGR2_SAI1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SAI1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_SAI1SEC_B_0x1 = 1;

    /** @brief Secure access mode for TIM12 */
    using GTZC1_TZSC_SECCFGR2_TIM12SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM12SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_TIM12SEC_B_0x1 = 1;

    /** @brief Secure access mode for USB */
    using GTZC1_TZSC_SECCFGR2_USBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_USBSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_USBSEC_B_0x1 = 1;

    /** @brief Secure access mode for I3C2 */
    using GTZC1_TZSC_SECCFGR2_I3C2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_I3C2SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_I3C2SEC_B_0x1 = 1;

    /** @brief Secure access mode for LPUART1 */
    using GTZC1_TZSC_SECCFGR2_LPUART1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPUART1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPUART1SEC_B_0x1 = 1;

    /** @brief Secure access mode for I2C3 */
    using GTZC1_TZSC_SECCFGR2_I2C3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_I2C3SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_I2C3SEC_B_0x1 = 1;

    /** @brief Secure access mode for LPTIM1 */
    using GTZC1_TZSC_SECCFGR2_LPTIM1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM1SEC_B_0x1 = 1;

    /** @brief Secure access mode for LPTIM3 */
    using GTZC1_TZSC_SECCFGR2_LPTIM3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM3SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM3SEC_B_0x1 = 1;

    /** @brief Secure access mode for LPTIM4 */
    using GTZC1_TZSC_SECCFGR2_LPTIM4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM4SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_LPTIM4SEC_B_0x1 = 1;

    /** @brief Secure access mode for COMP */
    using GTZC1_TZSC_SECCFGR2_COMPSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_COMPSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR2_COMPSEC_B_0x1 = 1;

    /** @brief GTZC1 TZSC secure configuration register 3 */
    using GTZC1_TZSC_SECCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secure access mode for CRC */
    using GTZC1_TZSC_SECCFGR3_CRCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_CRCSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_CRCSEC_B_0x1 = 1;

    /** @brief Secure access mode for TSC */
    using GTZC1_TZSC_SECCFGR3_TSCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_TSCSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_TSCSEC_B_0x1 = 1;

    /** @brief Secure access mode for ICACHE registers */
    using GTZC1_TZSC_SECCFGR3_ICACHE_REGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ICACHE_REGSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ICACHE_REGSEC_B_0x1 = 1;

    /** @brief Secure access mode for ADC1 and ADC2 */
    using GTZC1_TZSC_SECCFGR3_ADC12SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ADC12SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ADC12SEC_B_0x1 = 1;

    /** @brief Secure access mode for AES */
    using GTZC1_TZSC_SECCFGR3_AESSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_AESSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_AESSEC_B_0x1 = 1;

    /** @brief Secure access mode for HASH */
    using GTZC1_TZSC_SECCFGR3_HASHSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_HASHSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_HASHSEC_B_0x1 = 1;

    /** @brief Secure access mode for RNG */
    using GTZC1_TZSC_SECCFGR3_RNGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RNGSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RNGSEC_B_0x1 = 1;

    /** @brief Secure access mode for PKA */
    using GTZC1_TZSC_SECCFGR3_PKASEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_PKASEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_PKASEC_B_0x1 = 1;

    /** @brief Secure access mode for SAES */
    using GTZC1_TZSC_SECCFGR3_SAESSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SAESSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SAESSEC_B_0x1 = 1;

    /** @brief Secure access mode for CCB */
    using GTZC1_TZSC_SECCFGR3_CCBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_CCBSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_CCBSEC_B_0x1 = 1;

    /** @brief Secure access mode for SDMMC1 */
    using GTZC1_TZSC_SECCFGR3_SDMMC1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SDMMC1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_SDMMC1SEC_B_0x1 = 1;

    /** @brief Secure access mode for OCTOSPI1 registers */
    using GTZC1_TZSC_SECCFGR3_OCTOSPI1_REGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_OCTOSPI1_REGSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_OCTOSPI1_REGSEC_B_0x1 = 1;

    /** @brief Secure access mode for RAMCFG */
    using GTZC1_TZSC_SECCFGR3_RAMCFGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RAMCFGSEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_RAMCFGSEC_B_0x1 = 1;

    /** @brief Secure access mode for DAC1 */
    using GTZC1_TZSC_SECCFGR3_DAC1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_DAC1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_DAC1SEC_B_0x1 = 1;

    /** @brief Secure access mode for ADF1 */
    using GTZC1_TZSC_SECCFGR3_ADF1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ADF1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_ADF1SEC_B_0x1 = 1;

    /** @brief Secure access mode for HSP1 */
    using GTZC1_TZSC_SECCFGR3_HSP1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure (value: 0)
     *          - B_0x1: Secure (value: 1)
     */
        /** @brief Nonsecure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_HSP1SEC_B_0x0 = 0;
        /** @brief Secure */
    constexpr std::uint32_t GTZC1_TZSC_SECCFGR3_HSP1SEC_B_0x1 = 1;

    /** @brief GTZC1 TZSC privilege configuration register 1 */
    using GTZC1_TZSC_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged access mode for TIM2 */
    using GTZC1_TZSC_PRIVCFGR1_TIM2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM2PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM2PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for TIM3 */
    using GTZC1_TZSC_PRIVCFGR1_TIM3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM3PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM3PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for TIM4 */
    using GTZC1_TZSC_PRIVCFGR1_TIM4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM4PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM4PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for TIM6 */
    using GTZC1_TZSC_PRIVCFGR1_TIM6PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM6PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM6PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for TIM7 */
    using GTZC1_TZSC_PRIVCFGR1_TIM7PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM7PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_TIM7PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for WWDG */
    using GTZC1_TZSC_PRIVCFGR1_WWDGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_WWDGPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_WWDGPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for IWDG */
    using GTZC1_TZSC_PRIVCFGR1_IWDGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_IWDGPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_IWDGPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for SPI2 */
    using GTZC1_TZSC_PRIVCFGR1_SPI2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_SPI2PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_SPI2PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for USART2 */
    using GTZC1_TZSC_PRIVCFGR1_USART2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART2PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART2PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for USART3 */
    using GTZC1_TZSC_PRIVCFGR1_USART3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART3PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_USART3PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for UART4 */
    using GTZC1_TZSC_PRIVCFGR1_UART4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART4PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART4PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for UART5 */
    using GTZC1_TZSC_PRIVCFGR1_UART5PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART5PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_UART5PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for I2C1 */
    using GTZC1_TZSC_PRIVCFGR1_I2C1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for I2C2 */
    using GTZC1_TZSC_PRIVCFGR1_I2C2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C2PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C2PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for CRS */
    using GTZC1_TZSC_PRIVCFGR1_CRSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_CRSPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_CRSPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for I2C4 */
    using GTZC1_TZSC_PRIVCFGR1_I2C4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C4PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I2C4PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for LPTIM2 */
    using GTZC1_TZSC_PRIVCFGR1_LPTIM2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_LPTIM2PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_LPTIM2PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for FDCAN1 */
    using GTZC1_TZSC_PRIVCFGR1_FDCAN1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_FDCAN1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_FDCAN1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for FDCAN2 */
    using GTZC1_TZSC_PRIVCFGR1_FDCAN2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_FDCAN2PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_FDCAN2PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for SPI3 */
    using GTZC1_TZSC_PRIVCFGR1_SPI3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_SPI3PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_SPI3PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for I3C1 */
    using GTZC1_TZSC_PRIVCFGR1_I3C1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I3C1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_I3C1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for OPAMP */
    using GTZC1_TZSC_PRIVCFGR1_OPAMPPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_OPAMPPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_OPAMPPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for VREFBUF */
    using GTZC1_TZSC_PRIVCFGR1_VREFBUFPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_VREFBUFPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_VREFBUFPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for SPI4 */
    using GTZC1_TZSC_PRIVCFGR1_SPI4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_SPI4PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR1_SPI4PRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC privilege configuration register 2 */
    using GTZC1_TZSC_PRIVCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged access mode for TIM1 */
    using GTZC1_TZSC_PRIVCFGR2_TIM1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for SPI1 */
    using GTZC1_TZSC_PRIVCFGR2_SPI1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SPI1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for TIM8 */
    using GTZC1_TZSC_PRIVCFGR2_TIM8PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM8PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM8PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for USART1 */
    using GTZC1_TZSC_PRIVCFGR2_USART1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_USART1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_USART1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for TIM15 */
    using GTZC1_TZSC_PRIVCFGR2_TIM15PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM15PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM15PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for TIM16 */
    using GTZC1_TZSC_PRIVCFGR2_TIM16PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM16PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM16PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for TIM17 */
    using GTZC1_TZSC_PRIVCFGR2_TIM17PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM17PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM17PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for SAI1 */
    using GTZC1_TZSC_PRIVCFGR2_SAI1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SAI1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_SAI1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for TIM12 */
    using GTZC1_TZSC_PRIVCFGR2_TIM12PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM12PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_TIM12PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for USB */
    using GTZC1_TZSC_PRIVCFGR2_USBPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_USBPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_USBPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for I3C2 */
    using GTZC1_TZSC_PRIVCFGR2_I3C2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_I3C2PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_I3C2PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for LPUART1 */
    using GTZC1_TZSC_PRIVCFGR2_LPUART1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPUART1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPUART1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for I2C3 */
    using GTZC1_TZSC_PRIVCFGR2_I2C3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_I2C3PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_I2C3PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for LPTIM1 */
    using GTZC1_TZSC_PRIVCFGR2_LPTIM1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for LPTIM3 */
    using GTZC1_TZSC_PRIVCFGR2_LPTIM3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM3PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM3PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for LPTIM4 */
    using GTZC1_TZSC_PRIVCFGR2_LPTIM4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM4PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_LPTIM4PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for COMP */
    using GTZC1_TZSC_PRIVCFGR2_COMPPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_COMPPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR2_COMPPRIV_B_0x1 = 1;

    /** @brief GTZC1 TZSC privilege configuration register 3 */
    using GTZC1_TZSC_PRIVCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged access mode for CRC */
    using GTZC1_TZSC_PRIVCFGR3_CRCPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_CRCPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_CRCPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for TSC */
    using GTZC1_TZSC_PRIVCFGR3_TSCPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_TSCPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_TSCPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for ICACHE registers */
    using GTZC1_TZSC_PRIVCFGR3_ICACHE_REGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ICACHE_REGPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ICACHE_REGPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for ADC1 and ADC2 */
    using GTZC1_TZSC_PRIVCFGR3_ADC12PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ADC12PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ADC12PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for AES */
    using GTZC1_TZSC_PRIVCFGR3_AESPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_AESPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_AESPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for HASH */
    using GTZC1_TZSC_PRIVCFGR3_HASHPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_HASHPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_HASHPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for RNG */
    using GTZC1_TZSC_PRIVCFGR3_RNGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RNGPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RNGPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for PKA */
    using GTZC1_TZSC_PRIVCFGR3_PKAPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_PKAPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_PKAPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for SAES */
    using GTZC1_TZSC_PRIVCFGR3_SAESPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_SAESPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_SAESPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for CCB */
    using GTZC1_TZSC_PRIVCFGR3_CCBPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_CCBPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_CCBPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for SDMMC1 */
    using GTZC1_TZSC_PRIVCFGR3_SDMMC1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_SDMMC1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_SDMMC1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for OCTOSPI1 registers */
    using GTZC1_TZSC_PRIVCFGR3_OCTOSPI1_REGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_OCTOSPI1_REGPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_OCTOSPI1_REGPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for RAMCFG */
    using GTZC1_TZSC_PRIVCFGR3_RAMCFGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RAMCFGPRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_RAMCFGPRIV_B_0x1 = 1;

    /** @brief Privileged access mode for DAC1 */
    using GTZC1_TZSC_PRIVCFGR3_DAC1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_DAC1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_DAC1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for ADF1 */
    using GTZC1_TZSC_PRIVCFGR3_ADF1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ADF1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_ADF1PRIV_B_0x1 = 1;

    /** @brief Privileged access mode for HSP1 */
    using GTZC1_TZSC_PRIVCFGR3_HSP1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unprivileged (value: 0)
     *          - B_0x1: Privileged (value: 1)
     */
        /** @brief Unprivileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_HSP1PRIV_B_0x0 = 0;
        /** @brief Privileged */
    constexpr std::uint32_t GTZC1_TZSC_PRIVCFGR3_HSP1PRIV_B_0x1 = 1;

}

#endif
