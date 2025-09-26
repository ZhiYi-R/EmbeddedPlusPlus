/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32L562_GTZC_TZSC_HPP
#define EMBEDDED_PP_STM32L562_GTZC_TZSC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GTZC_TZSC */
namespace STM32L562::GTZC_TZSC {

    /** @brief TZSC control register */
    using TZSC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK */
    using TZSC_CR_LCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC secure configuration register 1 */
    using TZSC_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2SEC */
    using TZSC_SECCFGR1_TIM2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3SEC */
    using TZSC_SECCFGR1_TIM3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4SEC */
    using TZSC_SECCFGR1_TIM4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5SEC */
    using TZSC_SECCFGR1_TIM5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6SEC */
    using TZSC_SECCFGR1_TIM6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM7SEC */
    using TZSC_SECCFGR1_TIM7SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDGSEC */
    using TZSC_SECCFGR1_WWDGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDGSEC */
    using TZSC_SECCFGR1_IWDGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2SEC */
    using TZSC_SECCFGR1_SPI2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3SEC */
    using TZSC_SECCFGR1_SPI3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2SEC */
    using TZSC_SECCFGR1_USART2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART3SEC */
    using TZSC_SECCFGR1_USART3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART4SEC */
    using TZSC_SECCFGR1_UART4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART5SEC */
    using TZSC_SECCFGR1_UART5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1SEC */
    using TZSC_SECCFGR1_I2C1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2SEC */
    using TZSC_SECCFGR1_I2C2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3SEC */
    using TZSC_SECCFGR1_I2C3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRSSEC */
    using TZSC_SECCFGR1_CRSSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DACSEC */
    using TZSC_SECCFGR1_DACSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMPSEC */
    using TZSC_SECCFGR1_OPAMPSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1SEC */
    using TZSC_SECCFGR1_LPTIM1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1SEC */
    using TZSC_SECCFGR1_LPUART1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4SEC */
    using TZSC_SECCFGR1_I2C4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2SEC */
    using TZSC_SECCFGR1_LPTIM2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3SEC */
    using TZSC_SECCFGR1_LPTIM3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN1SEC */
    using TZSC_SECCFGR1_FDCAN1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBFSSEC */
    using TZSC_SECCFGR1_USBFSSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD1SEC */
    using TZSC_SECCFGR1_UCPD1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFBUFSEC */
    using TZSC_SECCFGR1_VREFBUFSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMPSEC */
    using TZSC_SECCFGR1_COMPSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1SEC */
    using TZSC_SECCFGR1_TIM1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1SEC */
    using TZSC_SECCFGR1_SPI1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC secure configuration register 2 */
    using TZSC_SECCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM8SEC */
    using TZSC_SECCFGR2_TIM8SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1SEC */
    using TZSC_SECCFGR2_USART1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15SEC */
    using TZSC_SECCFGR2_TIM15SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16SEC */
    using TZSC_SECCFGR2_TIM16SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM17SEC */
    using TZSC_SECCFGR2_TIM17SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI1SEC */
    using TZSC_SECCFGR2_SAI1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI2SEC */
    using TZSC_SECCFGR2_SAI2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM1SEC */
    using TZSC_SECCFGR2_DFSDM1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRCSEC */
    using TZSC_SECCFGR2_CRCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSCSEC */
    using TZSC_SECCFGR2_TSCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICACHESEC */
    using TZSC_SECCFGR2_ICACHESEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADCSEC */
    using TZSC_SECCFGR2_ADCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AESSEC */
    using TZSC_SECCFGR2_AESSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASHSEC */
    using TZSC_SECCFGR2_HASHSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNGSEC */
    using TZSC_SECCFGR2_RNGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKASEC */
    using TZSC_SECCFGR2_PKASEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC1SEC */
    using TZSC_SECCFGR2_SDMMC1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FSMC_REGSEC */
    using TZSC_SECCFGR2_FSMC_REGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI1_REGSEC */
    using TZSC_SECCFGR2_OCTOSPI1_REGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC privilege configuration register 1 */
    using TZSC_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2PRIV */
    using TZSC_PRIVCFGR1_TIM2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3PRIV */
    using TZSC_PRIVCFGR1_TIM3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4PRIV */
    using TZSC_PRIVCFGR1_TIM4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5PRIV */
    using TZSC_PRIVCFGR1_TIM5PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6PRIV */
    using TZSC_PRIVCFGR1_TIM6PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM7PRIV */
    using TZSC_PRIVCFGR1_TIM7PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WWDGPRIV */
    using TZSC_PRIVCFGR1_WWDGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDGPRIV */
    using TZSC_PRIVCFGR1_IWDGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2PRIV */
    using TZSC_PRIVCFGR1_SPI2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI3PRIV */
    using TZSC_PRIVCFGR1_SPI3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART2PRIV */
    using TZSC_PRIVCFGR1_USART2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART3PRIV */
    using TZSC_PRIVCFGR1_USART3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART4PRIV */
    using TZSC_PRIVCFGR1_UART4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UART5PRIV */
    using TZSC_PRIVCFGR1_UART5PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1PRIV */
    using TZSC_PRIVCFGR1_I2C1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2PRIV */
    using TZSC_PRIVCFGR1_I2C2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3PRIV */
    using TZSC_PRIVCFGR1_I2C3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRSPRIV */
    using TZSC_PRIVCFGR1_CRSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DACPRIV */
    using TZSC_PRIVCFGR1_DACPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMPPRIV */
    using TZSC_PRIVCFGR1_OPAMPPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM1PRIV */
    using TZSC_PRIVCFGR1_LPTIM1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART1PRIV */
    using TZSC_PRIVCFGR1_LPUART1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4PRIV */
    using TZSC_PRIVCFGR1_I2C4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2PRIV */
    using TZSC_PRIVCFGR1_LPTIM2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM3PRIV */
    using TZSC_PRIVCFGR1_LPTIM3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN1PRIV */
    using TZSC_PRIVCFGR1_FDCAN1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBFSPRIV */
    using TZSC_PRIVCFGR1_USBFSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD1PRIV */
    using TZSC_PRIVCFGR1_UCPD1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFBUFPRIV */
    using TZSC_PRIVCFGR1_VREFBUFPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMPPRIV */
    using TZSC_PRIVCFGR1_COMPPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1PRIV */
    using TZSC_PRIVCFGR1_TIM1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI1PRIV */
    using TZSC_PRIVCFGR1_SPI1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC privilege configuration register 2 */
    using TZSC_PRIVCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM8PRIV */
    using TZSC_PRIVCFGR2_TIM8PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART1PRIV */
    using TZSC_PRIVCFGR2_USART1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15PRIV */
    using TZSC_PRIVCFGR2_TIM15PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16PRIV */
    using TZSC_PRIVCFGR2_TIM16PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM17PRIV */
    using TZSC_PRIVCFGR2_TIM17PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI1PRIV */
    using TZSC_PRIVCFGR2_SAI1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAI2PRIV */
    using TZSC_PRIVCFGR2_SAI2PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFSDM1PRIV */
    using TZSC_PRIVCFGR2_DFSDM1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRCPRIV */
    using TZSC_PRIVCFGR2_CRCPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSCPRIV */
    using TZSC_PRIVCFGR2_TSCPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICACHEPRIV */
    using TZSC_PRIVCFGR2_ICACHEPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADCPRIV */
    using TZSC_PRIVCFGR2_ADCPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AESPRIV */
    using TZSC_PRIVCFGR2_AESPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASHPRIV */
    using TZSC_PRIVCFGR2_HASHPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNGPRIV */
    using TZSC_PRIVCFGR2_RNGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKAPRIV */
    using TZSC_PRIVCFGR2_PKAPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC1PRIV */
    using TZSC_PRIVCFGR2_SDMMC1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FSMC_REGPRIV */
    using TZSC_PRIVCFGR2_FSMC_REGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI1_REGRIV */
    using TZSC_PRIVCFGR2_OCTOSPI1_REGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC external memory non-secure watermark register 1 */
    using TZSC_MPCWM1_NSWMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSWM1STRT */
    using TZSC_MPCWM1_NSWMR1_NSWM1STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSWM1LGTH */
    using TZSC_MPCWM1_NSWMR1_NSWM1LGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC external memory non-secure watermark register 1 */
    using TZSC_MPCWM1_NSWMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSWM2STRT */
    using TZSC_MPCWM1_NSWMR2_NSWM2STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSWM2LGTH */
    using TZSC_MPCWM1_NSWMR2_NSWM2LGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC external memory non-secure watermark register 1 */
    using TZSC_MPCWM2_NSWMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSWM1STRT */
    using TZSC_MPCWM2_NSWMR1_NSWM1STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSWM1LGTH */
    using TZSC_MPCWM2_NSWMR1_NSWM1LGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC external memory non-secure watermark register 2 */
    using TZSC_MPCWM3_NSWMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSWM2STRT */
    using TZSC_MPCWM3_NSWMR1_NSWM2STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSWM2LGTH */
    using TZSC_MPCWM3_NSWMR1_NSWM2LGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC external memory non-secure watermark register 2 */
    using TZSC_MPCWM2_NSWMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSWM2STRT */
    using TZSC_MPCWM2_NSWMR2_NSWM2STRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSWM2LGTH */
    using TZSC_MPCWM2_NSWMR2_NSWM2LGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
