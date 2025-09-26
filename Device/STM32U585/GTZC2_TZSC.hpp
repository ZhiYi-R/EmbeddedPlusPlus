/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U585_GTZC2_TZSC_HPP
#define EMBEDDED_PP_STM32U585_GTZC2_TZSC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GTZC2_TZSC */
namespace STM32U585::GTZC2_TZSC {

    /** @brief TZSC control register */
    using TZSC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief lock the configuration of GTZC1_TZSC_SECCFGRx and GTZC1_TZSC_PRIVCFGRx */
    using TZSC_CR_LCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC secure configuration register 1 */
    using TZSC_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for SPI3 */
    using TZSC_SECCFGR1_SPI3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for LPUART1 */
    using TZSC_SECCFGR1_LPUART1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for I2C3 */
    using TZSC_SECCFGR1_I2C3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for LPTIM1 */
    using TZSC_SECCFGR1_LPTIM1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for LPTIM3 */
    using TZSC_SECCFGR1_LPTIM3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for LPTIM4 */
    using TZSC_SECCFGR1_LPTIM4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for OPAMP */
    using TZSC_SECCFGR1_OPAMPSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for COMP */
    using TZSC_SECCFGR1_COMPSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for ADC4 */
    using TZSC_SECCFGR1_ADC4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for VREFBUF */
    using TZSC_SECCFGR1_VREFBUFSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for DAC1 */
    using TZSC_SECCFGR1_DAC1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure access mode for ADF1 */
    using TZSC_SECCFGR1_ADF1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC privilege configuration register 1 */
    using TZSC_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for SPI3 */
    using TZSC_PRIVCFGR1_SPI3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for LPUART1 */
    using TZSC_PRIVCFGR1_LPUART1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for I2C3 */
    using TZSC_PRIVCFGR1_I2C3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for LPTIM1 */
    using TZSC_PRIVCFGR1_LPTIM1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for LPTIM3 */
    using TZSC_PRIVCFGR1_LPTIM3PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for LPTIM4 */
    using TZSC_PRIVCFGR1_LPTIM4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for OPAMP */
    using TZSC_PRIVCFGR1_OPAMPPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for COMP */
    using TZSC_PRIVCFGR1_COMPPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for ADC4 */
    using TZSC_PRIVCFGR1_ADC4PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for VREFBUF */
    using TZSC_PRIVCFGR1_VREFBUFPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for DAC1 */
    using TZSC_PRIVCFGR1_DAC1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged access mode for ADF1 */
    using TZSC_PRIVCFGR1_ADF1PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
