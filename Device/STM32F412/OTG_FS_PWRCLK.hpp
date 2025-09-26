/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F412_OTG_FS_PWRCLK_HPP
#define EMBEDDED_PP_STM32F412_OTG_FS_PWRCLK_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USB on the go full speed */
namespace STM32F412::OTG_FS_PWRCLK {

    /** @brief OTG_FS power and clock gating control register (OTG_FS_PCGCCTL) */
    using FS_PCGCCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop PHY clock */
    using FS_PCGCCTL_STPPCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gate HCLK */
    using FS_PCGCCTL_GATEHCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Suspended */
    using FS_PCGCCTL_PHYSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
