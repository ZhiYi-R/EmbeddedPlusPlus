/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL5X_CM0P_TZSC_HPP
#define EMBEDDED_PP_STM32WL5X_CM0P_TZSC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Global TrustZone Controller */
namespace STM32WL5x_CM0P::TZSC {

    /** @brief TZSC control register */
    using TZSC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK */
    using TZSC_CR_LCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC security configuration register */
    using TZSC_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AESSEC */
    using TZSC_SECCFGR1_AESSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNGSEC */
    using TZSC_SECCFGR1_RNGSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKASEC */
    using TZSC_SECCFGR1_PKASEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TZSC privilege configuration register 1 */
    using TZSC_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AESPRIV */
    using TZSC_PRIVCFGR1_AESPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNGPRIV */
    using TZSC_PRIVCFGR1_RNGPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SUBGHZSPIPRIV */
    using TZSC_PRIVCFGR1_SUBGHZSPIPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKAPRIV */
    using TZSC_PRIVCFGR1_PKAPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unprivileged Water Mark 1 register */
    using TZSC_MPCWM1_UPWMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LGTH */
    using TZSC_MPCWM1_UPWMR_LGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unprivileged Writable Water Mark 1 register */
    using TZSC_MPCWM1_UPWWMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Define the length of Flash Unprivileged Writable area, in 2 */
    using TZSC_MPCWM1_UPWWMR_LGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unprivileged Water Mark 2 register */
    using TZSC_MPCWM2_UPWMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LGTH */
    using TZSC_MPCWM2_UPWMR_LGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unprivileged Water Mark 3 register */
    using TZSC_MPCWM3_UPWMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LGTH */
    using TZSC_MPCWM3_UPWMR_LGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
