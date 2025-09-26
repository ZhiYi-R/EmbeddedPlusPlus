/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7A3X_AC_HPP
#define EMBEDDED_PP_STM32H7A3X_AC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Access control */
namespace STM32H7A3x::AC {

    /** @brief Instruction and Data Tightly-Coupled Memory Control Registers */
    using ITCMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EN */
    using ITCMCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RMW */
    using ITCMCR_RMW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RETEN */
    using ITCMCR_RETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SZ */
    using ITCMCR_SZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction and Data Tightly-Coupled Memory Control Registers */
    using DTCMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EN */
    using DTCMCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RMW */
    using DTCMCR_RMW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RETEN */
    using DTCMCR_RETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SZ */
    using DTCMCR_SZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBP Control register */
    using AHBPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EN */
    using AHBPCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SZ */
    using AHBPCR_SZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Cache Control register */
    using CACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SIWT */
    using CACR_SIWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECCEN */
    using CACR_ECCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FORCEWT */
    using CACR_FORCEWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB Slave Control register */
    using AHBSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CTL */
    using AHBSCR_CTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TPRI */
    using AHBSCR_TPRI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INITCOUNT */
    using AHBSCR_INITCOUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Bus Fault Status register */
    using ABFSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITCM */
    using ABFSR_ITCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTCM */
    using ABFSR_DTCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBP */
    using ABFSR_AHBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXIM */
    using ABFSR_AXIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPPB */
    using ABFSR_EPPB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXIMTYPE */
    using ABFSR_AXIMTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
