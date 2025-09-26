/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7B3_OCTOSPII_O_MANAGER_HPP
#define EMBEDDED_PP_STM32H7B3_OCTOSPII_O_MANAGER_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief OctoSPI IO Manager */
namespace STM32H7B3::OctoSPII_O_Manager {

    /** @brief OctoSPI IO Manager Control Register */
    using CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiplexed mode Enable */
    using CR_MUXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REQ to ACK Time */
    using CR_REQ2ACK_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OctoSPI IO Manager Port 1 configuration register */
    using P1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLK/CLKn Enable for Port n */
    using P1CR_CLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLK/CLKn Source for Port n */
    using P1CR_CLKSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DQSEN */
    using P1CR_DQSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DQSSRC */
    using P1CR_DQSSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NCSEN */
    using P1CR_NCSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NCSSRC */
    using P1CR_NCSSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IOLEN */
    using P1CR_IOLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IOLSRC */
    using P1CR_IOLSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IOHEN */
    using P1CR_IOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IOHSRC */
    using P1CR_IOHSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OctoSPI IO Manager Port 2 configuration register */
    using P2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLKEN */
    using P2CR_CLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLKSRC */
    using P2CR_CLKSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DQSEN */
    using P2CR_DQSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DQSSRC */
    using P2CR_DQSSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NCSEN */
    using P2CR_NCSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NCSSRC */
    using P2CR_NCSSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IOLEN */
    using P2CR_IOLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IOLSRC */
    using P2CR_IOLSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IOHEN */
    using P2CR_IOHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IOHSRC */
    using P2CR_IOHSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
