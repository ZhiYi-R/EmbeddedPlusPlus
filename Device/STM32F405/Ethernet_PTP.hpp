/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F405_ETHERNET_PTP_HPP
#define EMBEDDED_PP_STM32F405_ETHERNET_PTP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Ethernet: Precision time protocol */
namespace STM32F405::Ethernet_PTP {

    /** @brief Ethernet PTP time stamp control register */
    using PTPTSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSE */
    using PTPTSCR_TSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSFCU */
    using PTPTSCR_TSFCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSPTPPSV2E */
    using PTPTSCR_TSPTPPSV2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSPTPOEFE */
    using PTPTSCR_TSSPTPOEFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSIPV6FE */
    using PTPTSCR_TSSIPV6FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSIPV4FE */
    using PTPTSCR_TSSIPV4FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSEME */
    using PTPTSCR_TSSEME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSMRME */
    using PTPTSCR_TSSMRME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSCNT */
    using PTPTSCR_TSCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSPFFMAE */
    using PTPTSCR_TSPFFMAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSTI */
    using PTPTSCR_TSSTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSTU */
    using PTPTSCR_TSSTU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSITE */
    using PTPTSCR_TSITE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TTSARU */
    using PTPTSCR_TTSARU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSARFE */
    using PTPTSCR_TSSARFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSSR */
    using PTPTSCR_TSSSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP subsecond increment register */
    using PTPSSIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STSSI */
    using PTPSSIR_STSSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp high register */
    using PTPTSHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STS */
    using PTPTSHR_STS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp low register */
    using PTPTSLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STSS */
    using PTPTSLR_STSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STPNS */
    using PTPTSLR_STPNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp high update register */
    using PTPTSHUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSUS */
    using PTPTSHUR_TSUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp low update register */
    using PTPTSLUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSUSS */
    using PTPTSLUR_TSUSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSUPNS */
    using PTPTSLUR_TSUPNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp addend register */
    using PTPTSAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSA */
    using PTPTSAR_TSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP target time high register */
    using PTPTTHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 0 */
    using PTPTTHR_TTSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP target time low register */
    using PTPTTLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TTSL */
    using PTPTTLR_TTSL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp status register */
    using PTPTSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSO */
    using PTPTSSR_TSSO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSTTR */
    using PTPTSSR_TSTTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP PPS control register */
    using PTPPPSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSSO */
    using PTPPPSCR_TSSO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSTTR */
    using PTPPPSCR_TSTTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
