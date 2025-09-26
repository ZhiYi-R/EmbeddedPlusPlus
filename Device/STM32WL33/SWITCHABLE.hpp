/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_SWITCHABLE_HPP
#define EMBEDDED_PP_STM32WL33_SWITCHABLE_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SWITCHABLE peripheral */
namespace STM32WL33::SWITCHABLE {

    /** @brief RFIP_VERSION register */
    using RFIP_VERSION = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision of the RFIP to be used for metal fixes) */
    using RFIP_VERSION_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version of the RFIP (to be used for cut upgrades) */
    using RFIP_VERSION_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Used for major upgrades (new protocols support / new features) */
    using RFIP_VERSION_PRODUCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IRQ_ENABLE register */
    using IRQ_ENABLE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble has been detected, the content of the PAYLOAD_X registers is not yet valid. */
    using IRQ_ENABLE_BIT_SYNC_DETECTED_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame Sync has been detected, the content of the PAYLOAD_X registers is not yet valid. */
    using IRQ_ENABLE_FRAME_SYNC_COMPLETE_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame ( payload + CRC) received, the content of the PAYLOAD_X registers is valid. */
    using IRQ_ENABLE_FRAME_COMPLETE_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame ( payload + CRC) received wthout error (the CRC has been checked and is matching with the received CRC). */
    using IRQ_ENABLE_FRAME_VALID_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STATUS register */
    using STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble has been detected, the content of the PAYLOAD_X registers is not yet valid. */
    using STATUS_BIT_SYNC_DETECTED_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame Sync has been detected, the content of the PAYLOAD_X registers is not yet valid. */
    using STATUS_FRAME_SYNC_COMPLETE_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame ( payload + CRC) received, the content of the PAYLOAD_X registers is valid. */
    using STATUS_FRAME_COMPLETE_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame ( payload + CRC) received wthout error (the CRC has been checked and is matching with the received CRC). */
    using STATUS_FRAME_VALID_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - 11 : CRC error */
    using STATUS_ERROR_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
