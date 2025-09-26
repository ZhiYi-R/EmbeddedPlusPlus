/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F207_ETHERNET_PTP_HPP
#define EMBEDDED_PP_STM32F207_ETHERNET_PTP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Ethernet: Precision time protocol */
namespace STM32F207::Ethernet_PTP {

    /** @brief Ethernet PTP time stamp control register */
    using PTPTSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp enable */
    using PTPTSCR_TSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp fine or coarse update */
    using PTPTSCR_TSFCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp system time initialize */
    using PTPTSCR_TSSTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp system time update */
    using PTPTSCR_TSSTU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp interrupt trigger enable */
    using PTPTSCR_TSITE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp addend register update */
    using PTPTSCR_TTSARU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp snapshot for all received frames enable */
    using PTPTSCR_TSSARFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp subsecond rollover: digital or binary rollover control */
    using PTPTSCR_TSSSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp PTP packet snooping for version2 format enable */
    using PTPTSCR_TSPTPPSV2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp snapshot for PTP over ethernet frames enable */
    using PTPTSCR_TSSPTPOEFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp snapshot for IPv6 frames enable */
    using PTPTSCR_TSSIPV6FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp snapshot for IPv4 frames enable */
    using PTPTSCR_TSSIPV4FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp snapshot for event message enable */
    using PTPTSCR_TSSEME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp snapshot for message relevant to master enable */
    using PTPTSCR_TSSMRME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp clock node type */
    using PTPTSCR_TSCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp PTP frame filtering MAC address enable */
    using PTPTSCR_TSPFFMAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP subsecond increment register */
    using PTPSSIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time subsecond increment */
    using PTPSSIR_STSSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp high register */
    using PTPTSHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time second */
    using PTPTSHR_STS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp low register */
    using PTPTSLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time subseconds */
    using PTPTSLR_STSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time positive or negative sign */
    using PTPTSLR_STPNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp high update register */
    using PTPTSHUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp update second */
    using PTPTSHUR_TSUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp low update register */
    using PTPTSLUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp update subseconds */
    using PTPTSLUR_TSUSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp update positive or negative sign */
    using PTPTSLUR_TSUPNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp addend register */
    using PTPTSAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp addend */
    using PTPTSAR_TSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP target time high register */
    using PTPTTHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Target time stamp high */
    using PTPTTHR_TTSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP target time low register */
    using PTPTTLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Target time stamp low */
    using PTPTTLR_TTSL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP time stamp status register */
    using PTPTSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp second overflow */
    using PTPTSSR_TSSO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time stamp target time reached */
    using PTPTSSR_TSTTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ethernet PTP PPS control register */
    using PTPPPSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS frequency selection */
    using PTPPPSCR_PPSFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
