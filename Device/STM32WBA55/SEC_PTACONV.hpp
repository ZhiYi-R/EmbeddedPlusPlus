/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA55_SEC_PTACONV_HPP
#define EMBEDDED_PP_STM32WBA55_SEC_PTACONV_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PTA converter */
namespace STM32WBA55::SEC_PTACONV {

    /** @brief PTACONV active control register */
    using PTACONV_ACTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTA_ACTIVE setup time in us */
    using PTACONV_ACTCR_TACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTA_ACTIVE polarity */
    using PTACONV_ACTCR_ACTPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTA_ACTIVE delay to cease an ongoing transmission in us */
    using PTACONV_ACTCR_TABORT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable PTA_ACTIVE deny to abort an ongoing transmission */
    using PTACONV_ACTCR_ABORTDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTACONV priority control register */
    using PTACONV_PRICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Priority valid time in us. */
    using PTACONV_PRICR_TPRIORITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Priority polarity. */
    using PTACONV_PRICR_PRIPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTACONV control register */
    using PTACONV_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTA_STATUS transmit and receive polarity. */
    using PTACONV_CR_TXRXPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTA_GRANT polarity. */
    using PTACONV_CR_GRANTPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
