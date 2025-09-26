/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_XSPIM1_HPP
#define EMBEDDED_PP_STM32H7S_XSPIM1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief XSPIM1 register block */
namespace STM32H7S::XSPIM1 {

    /** @brief XSPIM control register */
    using XSPIM_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplexed mode enable This bit enables the multiplexing of the two XSPIs. */
    using XSPIM_CR_MUXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI multiplexing mode */
    using XSPIM_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Chip select selector override enable */
    using XSPIM_CR_CSSEL_OVR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Chip select selector override setting for XSPI1 */
    using XSPIM_CR_CSSEL_OVR_O1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Chip select selector override setting for XSPI2 */
    using XSPIM_CR_CSSEL_OVR_O2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REQ to ACK time In Multiplexed mode (MUXEN = 1), this field defines the time between two transactions. */
    using XSPIM_CR_REQ2ACK_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
