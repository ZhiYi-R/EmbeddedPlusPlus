/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F767_OTG_HS_PWRCLK_HPP
#define EMBEDDED_PP_STM32F767_OTG_HS_PWRCLK_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USB on the go high speed */
namespace STM32F767::OTG_HS_PWRCLK {

    /** @brief Power and clock gating control register */
    using OTG_HS_PCGCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop PHY clock */
    using OTG_HS_PCGCR_STPPCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gate HCLK */
    using OTG_HS_PCGCR_GATEHCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY suspended */
    using OTG_HS_PCGCR_PHYSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
