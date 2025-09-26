/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N657_FMC1_HPP
#define EMBEDDED_PP_STM32N657_FMC1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Flexible memory controller */
namespace STM32N657::FMC1 {

    /** @brief SRAM/NOR Flash chip-select control register for memory region 1 */
    using FMC_BCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory region enable bit */
    using FMC_BCR1_MBKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding memory region is disabled (value: 0)
     *          - B_0x1: Corresponding memory region is enabled (value: 1)
     */
        /** @brief Corresponding memory region is disabled */
    constexpr std::uint32_t FMC_BCR1_MBKEN_B_0x0 = 0;
        /** @brief Corresponding memory region is enabled */
    constexpr std::uint32_t FMC_BCR1_MBKEN_B_0x1 = 1;

    /** @brief Address/data multiplexing enable bit */
    using FMC_BCR1_MUXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Address/Data non-multiplexed (value: 0)
     *          - B_0x1: Address/Data multiplexed on databus (default after reset) (value: 1)
     */
        /** @brief Address/Data non-multiplexed */
    constexpr std::uint32_t FMC_BCR1_MUXEN_B_0x0 = 0;
        /** @brief Address/Data multiplexed on databus (default after reset) */
    constexpr std::uint32_t FMC_BCR1_MUXEN_B_0x1 = 1;

    /** @brief Memory type */
    using FMC_BCR1_MTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM/ FRAM (default after reset for memory region 2...4) (value: 0)
     *          - B_0x1: PSRAM (CRAM)/FRAM (value: 1)
     *          - B_0x2: NOR Flash/OneNAND Flash (default after reset for memory region 1) (value: 2)
     */
        /** @brief SRAM/ FRAM (default after reset for memory region 2...4) */
    constexpr std::uint32_t FMC_BCR1_MTYP_B_0x0 = 0;
        /** @brief PSRAM (CRAM)/FRAM */
    constexpr std::uint32_t FMC_BCR1_MTYP_B_0x1 = 1;
        /** @brief NOR Flash/OneNAND Flash (default after reset for memory region 1) */
    constexpr std::uint32_t FMC_BCR1_MTYP_B_0x2 = 2;

    /** @brief Memory data bus width */
    using FMC_BCR1_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (default after reset) (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_BCR1_MWID_B_0x0 = 0;
        /** @brief 16 bits (default after reset) */
    constexpr std::uint32_t FMC_BCR1_MWID_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t FMC_BCR1_MWID_B_0x2 = 2;

    /** @brief Flash memory access enable */
    using FMC_BCR1_FACCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding NOR Flash memory access is disabled (value: 0)
     *          - B_0x1: Corresponding NOR Flash memory access is enabled (default after reset) (value: 1)
     */
        /** @brief Corresponding NOR Flash memory access is disabled */
    constexpr std::uint32_t FMC_BCR1_FACCEN_B_0x0 = 0;
        /** @brief Corresponding NOR Flash memory access is enabled (default after reset) */
    constexpr std::uint32_t FMC_BCR1_FACCEN_B_0x1 = 1;

    /** @brief Burst enable bit */
    using FMC_BCR1_BURSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Burst mode disabled (default after reset). Read accesses are performed in asynchronous mode. (value: 0)
     *          - B_0x1: Burst mode enable. Read accesses are performed in synchronous mode. (value: 1)
     */
        /** @brief Burst mode disabled (default after reset). Read accesses are performed in asynchronous mode. */
    constexpr std::uint32_t FMC_BCR1_BURSTEN_B_0x0 = 0;
        /** @brief Burst mode enable. Read accesses are performed in synchronous mode. */
    constexpr std::uint32_t FMC_BCR1_BURSTEN_B_0x1 = 1;

    /** @brief Wait signal polarity bit */
    using FMC_BCR1_WAITPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT active low (default after reset), (value: 0)
     *          - B_0x1: NWAIT active high. (value: 1)
     */
        /** @brief NWAIT active low (default after reset), */
    constexpr std::uint32_t FMC_BCR1_WAITPOL_B_0x0 = 0;
        /** @brief NWAIT active high. */
    constexpr std::uint32_t FMC_BCR1_WAITPOL_B_0x1 = 1;

    /** @brief Wait timing configuration */
    using FMC_BCR1_WAITCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal active one data cycle before wait state (default after reset), (value: 0)
     *          - B_0x1: NWAIT signal active during wait state (not used for PSRAM). (value: 1)
     */
        /** @brief NWAIT signal active one data cycle before wait state (default after reset), */
    constexpr std::uint32_t FMC_BCR1_WAITCFG_B_0x0 = 0;
        /** @brief NWAIT signal active during wait state (not used for PSRAM). */
    constexpr std::uint32_t FMC_BCR1_WAITCFG_B_0x1 = 1;

    /** @brief Write enable bit */
    using FMC_BCR1_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations to the memory region by the FMC disabled. An AXI slave error is reported, (value: 0)
     *          - B_0x1: Write operations to the memory region by the FMC enabled (default after reset). (value: 1)
     */
        /** @brief Write operations to the memory region by the FMC disabled. An AXI slave error is reported, */
    constexpr std::uint32_t FMC_BCR1_WREN_B_0x0 = 0;
        /** @brief Write operations to the memory region by the FMC enabled (default after reset). */
    constexpr std::uint32_t FMC_BCR1_WREN_B_0x1 = 1;

    /** @brief Wait enable bit */
    using FMC_BCR1_WAITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period) (value: 0)
     *          - B_0x1: NWAIT signal enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset) (value: 1)
     */
        /** @brief NWAIT signal disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period) */
    constexpr std::uint32_t FMC_BCR1_WAITEN_B_0x0 = 0;
        /** @brief NWAIT signal enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset) */
    constexpr std::uint32_t FMC_BCR1_WAITEN_B_0x1 = 1;

    /** @brief Extended mode enable */
    using FMC_BCR1_EXTMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Values inside FMC_BWTR register not taken into account (default after reset) (value: 0)
     *          - B_0x1: Values inside FMC_BWTR register taken into account (value: 1)
     */
        /** @brief Values inside FMC_BWTR register not taken into account (default after reset) */
    constexpr std::uint32_t FMC_BCR1_EXTMOD_B_0x0 = 0;
        /** @brief Values inside FMC_BWTR register taken into account */
    constexpr std::uint32_t FMC_BCR1_EXTMOD_B_0x1 = 1;

    /** @brief Wait signal during asynchronous transfers */
    using FMC_BCR1_ASYNCWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal not taken in to account during asynchronous transfers (default after reset) (value: 0)
     *          - B_0x1: NWAIT signal taken in to account during asynchronous transfers (value: 1)
     */
        /** @brief NWAIT signal not taken in to account during asynchronous transfers (default after reset) */
    constexpr std::uint32_t FMC_BCR1_ASYNCWAIT_B_0x0 = 0;
        /** @brief NWAIT signal taken in to account during asynchronous transfers */
    constexpr std::uint32_t FMC_BCR1_ASYNCWAIT_B_0x1 = 1;

    /** @brief CRAM page size */
    using FMC_BCR1_CPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No burst split when crossing page boundary. (default after reset). (value: 0)
     *          - B_0x1: 128 bytes (value: 1)
     *          - B_0x2: 256 bytes (value: 2)
     *          - B_0x3: 512 bytes (value: 3)
     *          - B_0x4: 1024 bytes (value: 4)
     */
        /** @brief No burst split when crossing page boundary. (default after reset). */
    constexpr std::uint32_t FMC_BCR1_CPSIZE_B_0x0 = 0;
        /** @brief 128 bytes */
    constexpr std::uint32_t FMC_BCR1_CPSIZE_B_0x1 = 1;
        /** @brief 256 bytes */
    constexpr std::uint32_t FMC_BCR1_CPSIZE_B_0x2 = 2;
        /** @brief 512 bytes */
    constexpr std::uint32_t FMC_BCR1_CPSIZE_B_0x3 = 3;
        /** @brief 1024 bytes */
    constexpr std::uint32_t FMC_BCR1_CPSIZE_B_0x4 = 4;

    /** @brief Write burst enable */
    using FMC_BCR1_CBURSTRW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are always performed in asynchronous mode (value: 0)
     *          - B_0x1: Write operations are performed in synchronous mode. (value: 1)
     */
        /** @brief Write operations are always performed in asynchronous mode */
    constexpr std::uint32_t FMC_BCR1_CBURSTRW_B_0x0 = 0;
        /** @brief Write operations are performed in synchronous mode. */
    constexpr std::uint32_t FMC_BCR1_CBURSTRW_B_0x1 = 1;

    /** @brief Chip Select (CS) counter */
    using FMC_BCR1_CSCOUNT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: NEx deasserted after fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: NEx deasserted after 64 fmc_ker_ck clock cycles (value: 2)
     *          - B_0x3: NEx deasserted after 256 fmc_ker_ck clock cycles (value: 3)
     */
        /** @brief Counter disabled */
    constexpr std::uint32_t FMC_BCR1_CSCOUNT0_B_0x0 = 0;
        /** @brief NEx deasserted after fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BCR1_CSCOUNT0_B_0x1 = 1;
        /** @brief NEx deasserted after 64 fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BCR1_CSCOUNT0_B_0x2 = 2;
        /** @brief NEx deasserted after 256 fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BCR1_CSCOUNT0_B_0x3 = 3;

    /** @brief Byte lane (NBL) setup */
    using FMC_BCR1_NBLSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NBL setup time is 0 fmc_ker_ck clock cycle. (value: 0)
     *          - B_0x1: NBL setup time is 1 fmc_ker_ck clock cycle. (value: 1)
     *          - B_0x2: NBL setup time is 2 fmc_ker_ck clock cycles. (value: 2)
     *          - B_0x3: NBL setup time is 3 fmc_ker_ck clock cycles. (value: 3)
     */
        /** @brief NBL setup time is 0 fmc_ker_ck clock cycle. */
    constexpr std::uint32_t FMC_BCR1_NBLSET_B_0x0 = 0;
        /** @brief NBL setup time is 1 fmc_ker_ck clock cycle. */
    constexpr std::uint32_t FMC_BCR1_NBLSET_B_0x1 = 1;
        /** @brief NBL setup time is 2 fmc_ker_ck clock cycles. */
    constexpr std::uint32_t FMC_BCR1_NBLSET_B_0x2 = 2;
        /** @brief NBL setup time is 3 fmc_ker_ck clock cycles. */
    constexpr std::uint32_t FMC_BCR1_NBLSET_B_0x3 = 3;

    /** @brief SRAM/NOR Flash chip-select timing registers for memory region 1 */
    using FMC_BTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration */
    using FMC_BTR1_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 * fmc_ker_ck clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR1_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration */
    using FMC_BTR1_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration =1 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration =1 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR1_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR1_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration */
    using FMC_BTR1_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 * fmc_ker_ck clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 * fmc_ker_ck clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BTR1_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BTR1_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration */
    using FMC_BTR1_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added */
    constexpr std::uint32_t FMC_BTR1_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_BUSTURN_B_0xF = 15;

    /** @brief Clock divide ratio (for FMC_CLK signal) */
    using FMC_BTR1_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC_CLK period= 1x fmc_ker_ck period (value: 0)
     *          - B_0x1: FMC_CLK period = 2 fmc_ker_ck periods (value: 1)
     *          - B_0x2: FMC_CLK period = 3 fmc_ker_ck periods (value: 2)
     *          - B_0xF: FMC_CLK period = 16 fmc_ker_ck periods (default value after reset) (value: 15)
     */
        /** @brief FMC_CLK period= 1x fmc_ker_ck period */
    constexpr std::uint32_t FMC_BTR1_CLKDIV_B_0x0 = 0;
        /** @brief FMC_CLK period = 2 fmc_ker_ck periods */
    constexpr std::uint32_t FMC_BTR1_CLKDIV_B_0x1 = 1;
        /** @brief FMC_CLK period = 3 fmc_ker_ck periods */
    constexpr std::uint32_t FMC_BTR1_CLKDIV_B_0x2 = 2;
        /** @brief FMC_CLK period = 16 fmc_ker_ck periods (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_CLKDIV_B_0xF = 15;

    /** @brief Data latency for synchronous memory (see note below bit descriptions) */
    using FMC_BTR1_DATLAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data latency of 2 FMC_CLK clock cycles for first burst access (value: 0)
     *          - B_0xF: Data latency of 17 FMC_CLK clock cycles for first burst access (default value after reset) (value: 15)
     */
        /** @brief Data latency of 2 FMC_CLK clock cycles for first burst access */
    constexpr std::uint32_t FMC_BTR1_DATLAT_B_0x0 = 0;
        /** @brief Data latency of 17 FMC_CLK clock cycles for first burst access (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_DATLAT_B_0xF = 15;

    /** @brief Access mode */
    using FMC_BTR1_ACCMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access mode A (value: 0)
     *          - B_0x1: Access mode B (value: 1)
     *          - B_0x2: Access mode C (value: 2)
     *          - B_0x3: Access mode D (value: 3)
     */
        /** @brief Access mode A */
    constexpr std::uint32_t FMC_BTR1_ACCMOD_B_0x0 = 0;
        /** @brief Access mode B */
    constexpr std::uint32_t FMC_BTR1_ACCMOD_B_0x1 = 1;
        /** @brief Access mode C */
    constexpr std::uint32_t FMC_BTR1_ACCMOD_B_0x2 = 2;
        /** @brief Access mode D */
    constexpr std::uint32_t FMC_BTR1_ACCMOD_B_0x3 = 3;

    /** @brief Data Hold phase duration */
    using FMC_BTR1_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = fmc_ker_ck clock cycle * 0 (default, read)/1 (default, write) (value: 0)
     *          - B_0x1: DATAHLD phase duration = fmc_ker_ck clock cycle * 1 (read)/2 (write) (value: 1)
     *          - B_0x2: DATAHLD phase duration = fmc_ker_ck clock cycle * 2 (read)/3 (write) (value: 2)
     *          - B_0x3: DATAHLD phase duration = fmc_ker_ck clock cycle * 3 (read)/4 (write) (value: 3)
     */
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 0 (default, read)/1 (default, write) */
    constexpr std::uint32_t FMC_BTR1_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 1 (read)/2 (write) */
    constexpr std::uint32_t FMC_BTR1_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 2 (read)/3 (write) */
    constexpr std::uint32_t FMC_BTR1_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 3 (read)/4 (write) */
    constexpr std::uint32_t FMC_BTR1_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR Flash chip-select control register for memory region 2 */
    using FMC_BCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory region enable bit */
    using FMC_BCR2_MBKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding memory region is disabled (value: 0)
     *          - B_0x1: Corresponding memory region is enabled (value: 1)
     */
        /** @brief Corresponding memory region is disabled */
    constexpr std::uint32_t FMC_BCR2_MBKEN_B_0x0 = 0;
        /** @brief Corresponding memory region is enabled */
    constexpr std::uint32_t FMC_BCR2_MBKEN_B_0x1 = 1;

    /** @brief Address/data multiplexing enable bit */
    using FMC_BCR2_MUXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Address/Data non-multiplexed (value: 0)
     *          - B_0x1: Address/Data multiplexed on databus (default after reset) (value: 1)
     */
        /** @brief Address/Data non-multiplexed */
    constexpr std::uint32_t FMC_BCR2_MUXEN_B_0x0 = 0;
        /** @brief Address/Data multiplexed on databus (default after reset) */
    constexpr std::uint32_t FMC_BCR2_MUXEN_B_0x1 = 1;

    /** @brief Memory type */
    using FMC_BCR2_MTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM/ FRAM (default after reset for memory region 2...4) (value: 0)
     *          - B_0x1: PSRAM (CRAM)/FRAM (value: 1)
     *          - B_0x2: NOR Flash/OneNAND Flash (default after reset for memory region 1) (value: 2)
     */
        /** @brief SRAM/ FRAM (default after reset for memory region 2...4) */
    constexpr std::uint32_t FMC_BCR2_MTYP_B_0x0 = 0;
        /** @brief PSRAM (CRAM)/FRAM */
    constexpr std::uint32_t FMC_BCR2_MTYP_B_0x1 = 1;
        /** @brief NOR Flash/OneNAND Flash (default after reset for memory region 1) */
    constexpr std::uint32_t FMC_BCR2_MTYP_B_0x2 = 2;

    /** @brief Memory data bus width */
    using FMC_BCR2_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (default after reset) (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_BCR2_MWID_B_0x0 = 0;
        /** @brief 16 bits (default after reset) */
    constexpr std::uint32_t FMC_BCR2_MWID_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t FMC_BCR2_MWID_B_0x2 = 2;

    /** @brief Flash memory access enable */
    using FMC_BCR2_FACCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding NOR Flash memory access is disabled (value: 0)
     *          - B_0x1: Corresponding NOR Flash memory access is enabled (default after reset) (value: 1)
     */
        /** @brief Corresponding NOR Flash memory access is disabled */
    constexpr std::uint32_t FMC_BCR2_FACCEN_B_0x0 = 0;
        /** @brief Corresponding NOR Flash memory access is enabled (default after reset) */
    constexpr std::uint32_t FMC_BCR2_FACCEN_B_0x1 = 1;

    /** @brief Burst enable bit */
    using FMC_BCR2_BURSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Burst mode disabled (default after reset). Read accesses are performed in asynchronous mode. (value: 0)
     *          - B_0x1: Burst mode enable. Read accesses are performed in synchronous mode. (value: 1)
     */
        /** @brief Burst mode disabled (default after reset). Read accesses are performed in asynchronous mode. */
    constexpr std::uint32_t FMC_BCR2_BURSTEN_B_0x0 = 0;
        /** @brief Burst mode enable. Read accesses are performed in synchronous mode. */
    constexpr std::uint32_t FMC_BCR2_BURSTEN_B_0x1 = 1;

    /** @brief Wait signal polarity bit */
    using FMC_BCR2_WAITPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT active low (default after reset), (value: 0)
     *          - B_0x1: NWAIT active high. (value: 1)
     */
        /** @brief NWAIT active low (default after reset), */
    constexpr std::uint32_t FMC_BCR2_WAITPOL_B_0x0 = 0;
        /** @brief NWAIT active high. */
    constexpr std::uint32_t FMC_BCR2_WAITPOL_B_0x1 = 1;

    /** @brief Wait timing configuration */
    using FMC_BCR2_WAITCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal active one data cycle before wait state (default after reset), (value: 0)
     *          - B_0x1: NWAIT signal active during wait state (not used for PSRAM). (value: 1)
     */
        /** @brief NWAIT signal active one data cycle before wait state (default after reset), */
    constexpr std::uint32_t FMC_BCR2_WAITCFG_B_0x0 = 0;
        /** @brief NWAIT signal active during wait state (not used for PSRAM). */
    constexpr std::uint32_t FMC_BCR2_WAITCFG_B_0x1 = 1;

    /** @brief Write enable bit */
    using FMC_BCR2_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations to the memory region by the FMC disabled. An AXI slave error is reported, (value: 0)
     *          - B_0x1: Write operations to the memory region by the FMC enabled (default after reset). (value: 1)
     */
        /** @brief Write operations to the memory region by the FMC disabled. An AXI slave error is reported, */
    constexpr std::uint32_t FMC_BCR2_WREN_B_0x0 = 0;
        /** @brief Write operations to the memory region by the FMC enabled (default after reset). */
    constexpr std::uint32_t FMC_BCR2_WREN_B_0x1 = 1;

    /** @brief Wait enable bit */
    using FMC_BCR2_WAITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period) (value: 0)
     *          - B_0x1: NWAIT signal enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset) (value: 1)
     */
        /** @brief NWAIT signal disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period) */
    constexpr std::uint32_t FMC_BCR2_WAITEN_B_0x0 = 0;
        /** @brief NWAIT signal enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset) */
    constexpr std::uint32_t FMC_BCR2_WAITEN_B_0x1 = 1;

    /** @brief Extended mode enable */
    using FMC_BCR2_EXTMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Values inside FMC_BWTR register not taken into account (default after reset) (value: 0)
     *          - B_0x1: Values inside FMC_BWTR register taken into account (value: 1)
     */
        /** @brief Values inside FMC_BWTR register not taken into account (default after reset) */
    constexpr std::uint32_t FMC_BCR2_EXTMOD_B_0x0 = 0;
        /** @brief Values inside FMC_BWTR register taken into account */
    constexpr std::uint32_t FMC_BCR2_EXTMOD_B_0x1 = 1;

    /** @brief Wait signal during asynchronous transfers */
    using FMC_BCR2_ASYNCWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal not taken in to account during asynchronous transfers (default after reset) (value: 0)
     *          - B_0x1: NWAIT signal taken in to account during asynchronous transfers (value: 1)
     */
        /** @brief NWAIT signal not taken in to account during asynchronous transfers (default after reset) */
    constexpr std::uint32_t FMC_BCR2_ASYNCWAIT_B_0x0 = 0;
        /** @brief NWAIT signal taken in to account during asynchronous transfers */
    constexpr std::uint32_t FMC_BCR2_ASYNCWAIT_B_0x1 = 1;

    /** @brief CRAM page size */
    using FMC_BCR2_CPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No burst split when crossing page boundary. (default after reset). (value: 0)
     *          - B_0x1: 128 bytes (value: 1)
     *          - B_0x2: 256 bytes (value: 2)
     *          - B_0x3: 512 bytes (value: 3)
     *          - B_0x4: 1024 bytes (value: 4)
     */
        /** @brief No burst split when crossing page boundary. (default after reset). */
    constexpr std::uint32_t FMC_BCR2_CPSIZE_B_0x0 = 0;
        /** @brief 128 bytes */
    constexpr std::uint32_t FMC_BCR2_CPSIZE_B_0x1 = 1;
        /** @brief 256 bytes */
    constexpr std::uint32_t FMC_BCR2_CPSIZE_B_0x2 = 2;
        /** @brief 512 bytes */
    constexpr std::uint32_t FMC_BCR2_CPSIZE_B_0x3 = 3;
        /** @brief 1024 bytes */
    constexpr std::uint32_t FMC_BCR2_CPSIZE_B_0x4 = 4;

    /** @brief Write burst enable */
    using FMC_BCR2_CBURSTRW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are always performed in asynchronous mode (value: 0)
     *          - B_0x1: Write operations are performed in synchronous mode. (value: 1)
     */
        /** @brief Write operations are always performed in asynchronous mode */
    constexpr std::uint32_t FMC_BCR2_CBURSTRW_B_0x0 = 0;
        /** @brief Write operations are performed in synchronous mode. */
    constexpr std::uint32_t FMC_BCR2_CBURSTRW_B_0x1 = 1;

    /** @brief Chip Select (CS) counter */
    using FMC_BCR2_CSCOUNT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: NEx deasserted after fmc_ker_ck clock cycle (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint32_t FMC_BCR2_CSCOUNT0_B_0x0 = 0;
        /** @brief NEx deasserted after fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BCR2_CSCOUNT0_B_0x1 = 1;

    /** @brief Chip Select (CS) counter */
    using FMC_BCR2_CSCOUNT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: NEx deasserted after fmc_ker_ck clock cycle (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint32_t FMC_BCR2_CSCOUNT1_B_0x0 = 0;
        /** @brief NEx deasserted after fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BCR2_CSCOUNT1_B_0x1 = 1;

    /** @brief Byte lane (NBL) setup */
    using FMC_BCR2_NBLSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NBL setup time is 0 fmc_ker_ck clock cycle. (value: 0)
     *          - B_0x1: NBL setup time is 1 fmc_ker_ck clock cycle. (value: 1)
     *          - B_0x2: NBL setup time is 2 fmc_ker_ck clock cycles. (value: 2)
     *          - B_0x3: NBL setup time is 3 fmc_ker_ck clock cycles. (value: 3)
     */
        /** @brief NBL setup time is 0 fmc_ker_ck clock cycle. */
    constexpr std::uint32_t FMC_BCR2_NBLSET_B_0x0 = 0;
        /** @brief NBL setup time is 1 fmc_ker_ck clock cycle. */
    constexpr std::uint32_t FMC_BCR2_NBLSET_B_0x1 = 1;
        /** @brief NBL setup time is 2 fmc_ker_ck clock cycles. */
    constexpr std::uint32_t FMC_BCR2_NBLSET_B_0x2 = 2;
        /** @brief NBL setup time is 3 fmc_ker_ck clock cycles. */
    constexpr std::uint32_t FMC_BCR2_NBLSET_B_0x3 = 3;

    /** @brief SRAM/NOR Flash chip-select timing registers for memory region 2 */
    using FMC_BTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration */
    using FMC_BTR2_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 * fmc_ker_ck clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR2_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration */
    using FMC_BTR2_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration =1 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration =1 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR2_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR2_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration */
    using FMC_BTR2_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 * fmc_ker_ck clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 * fmc_ker_ck clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BTR2_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BTR2_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration */
    using FMC_BTR2_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added */
    constexpr std::uint32_t FMC_BTR2_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_BUSTURN_B_0xF = 15;

    /** @brief Clock divide ratio (for FMC_CLK signal) */
    using FMC_BTR2_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC_CLK period= 1x fmc_ker_ck period (value: 0)
     *          - B_0x1: FMC_CLK period = 2 fmc_ker_ck periods (value: 1)
     *          - B_0x2: FMC_CLK period = 3 fmc_ker_ck periods (value: 2)
     *          - B_0xF: FMC_CLK period = 16 fmc_ker_ck periods (default value after reset) (value: 15)
     */
        /** @brief FMC_CLK period= 1x fmc_ker_ck period */
    constexpr std::uint32_t FMC_BTR2_CLKDIV_B_0x0 = 0;
        /** @brief FMC_CLK period = 2 fmc_ker_ck periods */
    constexpr std::uint32_t FMC_BTR2_CLKDIV_B_0x1 = 1;
        /** @brief FMC_CLK period = 3 fmc_ker_ck periods */
    constexpr std::uint32_t FMC_BTR2_CLKDIV_B_0x2 = 2;
        /** @brief FMC_CLK period = 16 fmc_ker_ck periods (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_CLKDIV_B_0xF = 15;

    /** @brief Data latency for synchronous memory (see note below bit descriptions) */
    using FMC_BTR2_DATLAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data latency of 2 FMC_CLK clock cycles for first burst access (value: 0)
     *          - B_0xF: Data latency of 17 FMC_CLK clock cycles for first burst access (default value after reset) (value: 15)
     */
        /** @brief Data latency of 2 FMC_CLK clock cycles for first burst access */
    constexpr std::uint32_t FMC_BTR2_DATLAT_B_0x0 = 0;
        /** @brief Data latency of 17 FMC_CLK clock cycles for first burst access (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_DATLAT_B_0xF = 15;

    /** @brief Access mode */
    using FMC_BTR2_ACCMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access mode A (value: 0)
     *          - B_0x1: Access mode B (value: 1)
     *          - B_0x2: Access mode C (value: 2)
     *          - B_0x3: Access mode D (value: 3)
     */
        /** @brief Access mode A */
    constexpr std::uint32_t FMC_BTR2_ACCMOD_B_0x0 = 0;
        /** @brief Access mode B */
    constexpr std::uint32_t FMC_BTR2_ACCMOD_B_0x1 = 1;
        /** @brief Access mode C */
    constexpr std::uint32_t FMC_BTR2_ACCMOD_B_0x2 = 2;
        /** @brief Access mode D */
    constexpr std::uint32_t FMC_BTR2_ACCMOD_B_0x3 = 3;

    /** @brief Data Hold phase duration */
    using FMC_BTR2_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = fmc_ker_ck clock cycle * 0 (default, read)/1 (default, write) (value: 0)
     *          - B_0x1: DATAHLD phase duration = fmc_ker_ck clock cycle * 1 (read)/2 (write) (value: 1)
     *          - B_0x2: DATAHLD phase duration = fmc_ker_ck clock cycle * 2 (read)/3 (write) (value: 2)
     *          - B_0x3: DATAHLD phase duration = fmc_ker_ck clock cycle * 3 (read)/4 (write) (value: 3)
     */
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 0 (default, read)/1 (default, write) */
    constexpr std::uint32_t FMC_BTR2_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 1 (read)/2 (write) */
    constexpr std::uint32_t FMC_BTR2_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 2 (read)/3 (write) */
    constexpr std::uint32_t FMC_BTR2_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 3 (read)/4 (write) */
    constexpr std::uint32_t FMC_BTR2_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR Flash chip-select control register for memory region 3 */
    using FMC_BCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory region enable bit */
    using FMC_BCR3_MBKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding memory region is disabled (value: 0)
     *          - B_0x1: Corresponding memory region is enabled (value: 1)
     */
        /** @brief Corresponding memory region is disabled */
    constexpr std::uint32_t FMC_BCR3_MBKEN_B_0x0 = 0;
        /** @brief Corresponding memory region is enabled */
    constexpr std::uint32_t FMC_BCR3_MBKEN_B_0x1 = 1;

    /** @brief Address/data multiplexing enable bit */
    using FMC_BCR3_MUXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Address/Data non-multiplexed (value: 0)
     *          - B_0x1: Address/Data multiplexed on databus (default after reset) (value: 1)
     */
        /** @brief Address/Data non-multiplexed */
    constexpr std::uint32_t FMC_BCR3_MUXEN_B_0x0 = 0;
        /** @brief Address/Data multiplexed on databus (default after reset) */
    constexpr std::uint32_t FMC_BCR3_MUXEN_B_0x1 = 1;

    /** @brief Memory type */
    using FMC_BCR3_MTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM/ FRAM (default after reset for memory region 2...4) (value: 0)
     *          - B_0x1: PSRAM (CRAM)/FRAM (value: 1)
     *          - B_0x2: NOR Flash/OneNAND Flash (default after reset for memory region 1) (value: 2)
     */
        /** @brief SRAM/ FRAM (default after reset for memory region 2...4) */
    constexpr std::uint32_t FMC_BCR3_MTYP_B_0x0 = 0;
        /** @brief PSRAM (CRAM)/FRAM */
    constexpr std::uint32_t FMC_BCR3_MTYP_B_0x1 = 1;
        /** @brief NOR Flash/OneNAND Flash (default after reset for memory region 1) */
    constexpr std::uint32_t FMC_BCR3_MTYP_B_0x2 = 2;

    /** @brief Memory data bus width */
    using FMC_BCR3_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (default after reset) (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_BCR3_MWID_B_0x0 = 0;
        /** @brief 16 bits (default after reset) */
    constexpr std::uint32_t FMC_BCR3_MWID_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t FMC_BCR3_MWID_B_0x2 = 2;

    /** @brief Flash memory access enable */
    using FMC_BCR3_FACCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding NOR Flash memory access is disabled (value: 0)
     *          - B_0x1: Corresponding NOR Flash memory access is enabled (default after reset) (value: 1)
     */
        /** @brief Corresponding NOR Flash memory access is disabled */
    constexpr std::uint32_t FMC_BCR3_FACCEN_B_0x0 = 0;
        /** @brief Corresponding NOR Flash memory access is enabled (default after reset) */
    constexpr std::uint32_t FMC_BCR3_FACCEN_B_0x1 = 1;

    /** @brief Burst enable bit */
    using FMC_BCR3_BURSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Burst mode disabled (default after reset). Read accesses are performed in asynchronous mode. (value: 0)
     *          - B_0x1: Burst mode enable. Read accesses are performed in synchronous mode. (value: 1)
     */
        /** @brief Burst mode disabled (default after reset). Read accesses are performed in asynchronous mode. */
    constexpr std::uint32_t FMC_BCR3_BURSTEN_B_0x0 = 0;
        /** @brief Burst mode enable. Read accesses are performed in synchronous mode. */
    constexpr std::uint32_t FMC_BCR3_BURSTEN_B_0x1 = 1;

    /** @brief Wait signal polarity bit */
    using FMC_BCR3_WAITPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT active low (default after reset), (value: 0)
     *          - B_0x1: NWAIT active high. (value: 1)
     */
        /** @brief NWAIT active low (default after reset), */
    constexpr std::uint32_t FMC_BCR3_WAITPOL_B_0x0 = 0;
        /** @brief NWAIT active high. */
    constexpr std::uint32_t FMC_BCR3_WAITPOL_B_0x1 = 1;

    /** @brief Wait timing configuration */
    using FMC_BCR3_WAITCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal active one data cycle before wait state (default after reset), (value: 0)
     *          - B_0x1: NWAIT signal active during wait state (not used for PSRAM). (value: 1)
     */
        /** @brief NWAIT signal active one data cycle before wait state (default after reset), */
    constexpr std::uint32_t FMC_BCR3_WAITCFG_B_0x0 = 0;
        /** @brief NWAIT signal active during wait state (not used for PSRAM). */
    constexpr std::uint32_t FMC_BCR3_WAITCFG_B_0x1 = 1;

    /** @brief Write enable bit */
    using FMC_BCR3_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations to the memory region by the FMC disabled. An AXI slave error is reported, (value: 0)
     *          - B_0x1: Write operations to the memory region by the FMC enabled (default after reset). (value: 1)
     */
        /** @brief Write operations to the memory region by the FMC disabled. An AXI slave error is reported, */
    constexpr std::uint32_t FMC_BCR3_WREN_B_0x0 = 0;
        /** @brief Write operations to the memory region by the FMC enabled (default after reset). */
    constexpr std::uint32_t FMC_BCR3_WREN_B_0x1 = 1;

    /** @brief Wait enable bit */
    using FMC_BCR3_WAITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period) (value: 0)
     *          - B_0x1: NWAIT signal enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset) (value: 1)
     */
        /** @brief NWAIT signal disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period) */
    constexpr std::uint32_t FMC_BCR3_WAITEN_B_0x0 = 0;
        /** @brief NWAIT signal enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset) */
    constexpr std::uint32_t FMC_BCR3_WAITEN_B_0x1 = 1;

    /** @brief Extended mode enable */
    using FMC_BCR3_EXTMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Values inside FMC_BWTR register not taken into account (default after reset) (value: 0)
     *          - B_0x1: Values inside FMC_BWTR register taken into account (value: 1)
     */
        /** @brief Values inside FMC_BWTR register not taken into account (default after reset) */
    constexpr std::uint32_t FMC_BCR3_EXTMOD_B_0x0 = 0;
        /** @brief Values inside FMC_BWTR register taken into account */
    constexpr std::uint32_t FMC_BCR3_EXTMOD_B_0x1 = 1;

    /** @brief Wait signal during asynchronous transfers */
    using FMC_BCR3_ASYNCWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal not taken in to account during asynchronous transfers (default after reset) (value: 0)
     *          - B_0x1: NWAIT signal taken in to account during asynchronous transfers (value: 1)
     */
        /** @brief NWAIT signal not taken in to account during asynchronous transfers (default after reset) */
    constexpr std::uint32_t FMC_BCR3_ASYNCWAIT_B_0x0 = 0;
        /** @brief NWAIT signal taken in to account during asynchronous transfers */
    constexpr std::uint32_t FMC_BCR3_ASYNCWAIT_B_0x1 = 1;

    /** @brief CRAM page size */
    using FMC_BCR3_CPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No burst split when crossing page boundary. (default after reset). (value: 0)
     *          - B_0x1: 128 bytes (value: 1)
     *          - B_0x2: 256 bytes (value: 2)
     *          - B_0x3: 512 bytes (value: 3)
     *          - B_0x4: 1024 bytes (value: 4)
     */
        /** @brief No burst split when crossing page boundary. (default after reset). */
    constexpr std::uint32_t FMC_BCR3_CPSIZE_B_0x0 = 0;
        /** @brief 128 bytes */
    constexpr std::uint32_t FMC_BCR3_CPSIZE_B_0x1 = 1;
        /** @brief 256 bytes */
    constexpr std::uint32_t FMC_BCR3_CPSIZE_B_0x2 = 2;
        /** @brief 512 bytes */
    constexpr std::uint32_t FMC_BCR3_CPSIZE_B_0x3 = 3;
        /** @brief 1024 bytes */
    constexpr std::uint32_t FMC_BCR3_CPSIZE_B_0x4 = 4;

    /** @brief Write burst enable */
    using FMC_BCR3_CBURSTRW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are always performed in asynchronous mode (value: 0)
     *          - B_0x1: Write operations are performed in synchronous mode. (value: 1)
     */
        /** @brief Write operations are always performed in asynchronous mode */
    constexpr std::uint32_t FMC_BCR3_CBURSTRW_B_0x0 = 0;
        /** @brief Write operations are performed in synchronous mode. */
    constexpr std::uint32_t FMC_BCR3_CBURSTRW_B_0x1 = 1;

    /** @brief Chip Select (CS) counter */
    using FMC_BCR3_CSCOUNT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: NEx deasserted after fmc_ker_ck clock cycle (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint32_t FMC_BCR3_CSCOUNT0_B_0x0 = 0;
        /** @brief NEx deasserted after fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BCR3_CSCOUNT0_B_0x1 = 1;

    /** @brief Chip Select (CS) counter */
    using FMC_BCR3_CSCOUNT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: NEx deasserted after fmc_ker_ck clock cycle (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint32_t FMC_BCR3_CSCOUNT1_B_0x0 = 0;
        /** @brief NEx deasserted after fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BCR3_CSCOUNT1_B_0x1 = 1;

    /** @brief Byte lane (NBL) setup */
    using FMC_BCR3_NBLSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NBL setup time is 0 fmc_ker_ck clock cycle. (value: 0)
     *          - B_0x1: NBL setup time is 1 fmc_ker_ck clock cycle. (value: 1)
     *          - B_0x2: NBL setup time is 2 fmc_ker_ck clock cycles. (value: 2)
     *          - B_0x3: NBL setup time is 3 fmc_ker_ck clock cycles. (value: 3)
     */
        /** @brief NBL setup time is 0 fmc_ker_ck clock cycle. */
    constexpr std::uint32_t FMC_BCR3_NBLSET_B_0x0 = 0;
        /** @brief NBL setup time is 1 fmc_ker_ck clock cycle. */
    constexpr std::uint32_t FMC_BCR3_NBLSET_B_0x1 = 1;
        /** @brief NBL setup time is 2 fmc_ker_ck clock cycles. */
    constexpr std::uint32_t FMC_BCR3_NBLSET_B_0x2 = 2;
        /** @brief NBL setup time is 3 fmc_ker_ck clock cycles. */
    constexpr std::uint32_t FMC_BCR3_NBLSET_B_0x3 = 3;

    /** @brief SRAM/NOR Flash chip-select timing registers for memory region 3 */
    using FMC_BTR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration */
    using FMC_BTR3_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 * fmc_ker_ck clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR3_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration */
    using FMC_BTR3_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration =1 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration =1 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR3_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR3_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration */
    using FMC_BTR3_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 * fmc_ker_ck clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 * fmc_ker_ck clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BTR3_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BTR3_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration */
    using FMC_BTR3_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added */
    constexpr std::uint32_t FMC_BTR3_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_BUSTURN_B_0xF = 15;

    /** @brief Clock divide ratio (for FMC_CLK signal) */
    using FMC_BTR3_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC_CLK period= 1x fmc_ker_ck period (value: 0)
     *          - B_0x1: FMC_CLK period = 2 fmc_ker_ck periods (value: 1)
     *          - B_0x2: FMC_CLK period = 3 fmc_ker_ck periods (value: 2)
     *          - B_0xF: FMC_CLK period = 16 fmc_ker_ck periods (default value after reset) (value: 15)
     */
        /** @brief FMC_CLK period= 1x fmc_ker_ck period */
    constexpr std::uint32_t FMC_BTR3_CLKDIV_B_0x0 = 0;
        /** @brief FMC_CLK period = 2 fmc_ker_ck periods */
    constexpr std::uint32_t FMC_BTR3_CLKDIV_B_0x1 = 1;
        /** @brief FMC_CLK period = 3 fmc_ker_ck periods */
    constexpr std::uint32_t FMC_BTR3_CLKDIV_B_0x2 = 2;
        /** @brief FMC_CLK period = 16 fmc_ker_ck periods (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_CLKDIV_B_0xF = 15;

    /** @brief Data latency for synchronous memory (see note below bit descriptions) */
    using FMC_BTR3_DATLAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data latency of 2 FMC_CLK clock cycles for first burst access (value: 0)
     *          - B_0xF: Data latency of 17 FMC_CLK clock cycles for first burst access (default value after reset) (value: 15)
     */
        /** @brief Data latency of 2 FMC_CLK clock cycles for first burst access */
    constexpr std::uint32_t FMC_BTR3_DATLAT_B_0x0 = 0;
        /** @brief Data latency of 17 FMC_CLK clock cycles for first burst access (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_DATLAT_B_0xF = 15;

    /** @brief Access mode */
    using FMC_BTR3_ACCMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access mode A (value: 0)
     *          - B_0x1: Access mode B (value: 1)
     *          - B_0x2: Access mode C (value: 2)
     *          - B_0x3: Access mode D (value: 3)
     */
        /** @brief Access mode A */
    constexpr std::uint32_t FMC_BTR3_ACCMOD_B_0x0 = 0;
        /** @brief Access mode B */
    constexpr std::uint32_t FMC_BTR3_ACCMOD_B_0x1 = 1;
        /** @brief Access mode C */
    constexpr std::uint32_t FMC_BTR3_ACCMOD_B_0x2 = 2;
        /** @brief Access mode D */
    constexpr std::uint32_t FMC_BTR3_ACCMOD_B_0x3 = 3;

    /** @brief Data Hold phase duration */
    using FMC_BTR3_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = fmc_ker_ck clock cycle * 0 (default, read)/1 (default, write) (value: 0)
     *          - B_0x1: DATAHLD phase duration = fmc_ker_ck clock cycle * 1 (read)/2 (write) (value: 1)
     *          - B_0x2: DATAHLD phase duration = fmc_ker_ck clock cycle * 2 (read)/3 (write) (value: 2)
     *          - B_0x3: DATAHLD phase duration = fmc_ker_ck clock cycle * 3 (read)/4 (write) (value: 3)
     */
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 0 (default, read)/1 (default, write) */
    constexpr std::uint32_t FMC_BTR3_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 1 (read)/2 (write) */
    constexpr std::uint32_t FMC_BTR3_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 2 (read)/3 (write) */
    constexpr std::uint32_t FMC_BTR3_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 3 (read)/4 (write) */
    constexpr std::uint32_t FMC_BTR3_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR Flash chip-select control register for memory region 4 */
    using FMC_BCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory region enable bit */
    using FMC_BCR4_MBKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding memory region is disabled (value: 0)
     *          - B_0x1: Corresponding memory region is enabled (value: 1)
     */
        /** @brief Corresponding memory region is disabled */
    constexpr std::uint32_t FMC_BCR4_MBKEN_B_0x0 = 0;
        /** @brief Corresponding memory region is enabled */
    constexpr std::uint32_t FMC_BCR4_MBKEN_B_0x1 = 1;

    /** @brief Address/data multiplexing enable bit */
    using FMC_BCR4_MUXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Address/Data non-multiplexed (value: 0)
     *          - B_0x1: Address/Data multiplexed on databus (default after reset) (value: 1)
     */
        /** @brief Address/Data non-multiplexed */
    constexpr std::uint32_t FMC_BCR4_MUXEN_B_0x0 = 0;
        /** @brief Address/Data multiplexed on databus (default after reset) */
    constexpr std::uint32_t FMC_BCR4_MUXEN_B_0x1 = 1;

    /** @brief Memory type */
    using FMC_BCR4_MTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM/ FRAM (default after reset for memory region 2...4) (value: 0)
     *          - B_0x1: PSRAM (CRAM)/FRAM (value: 1)
     *          - B_0x2: NOR Flash/OneNAND Flash (default after reset for memory region 1) (value: 2)
     */
        /** @brief SRAM/ FRAM (default after reset for memory region 2...4) */
    constexpr std::uint32_t FMC_BCR4_MTYP_B_0x0 = 0;
        /** @brief PSRAM (CRAM)/FRAM */
    constexpr std::uint32_t FMC_BCR4_MTYP_B_0x1 = 1;
        /** @brief NOR Flash/OneNAND Flash (default after reset for memory region 1) */
    constexpr std::uint32_t FMC_BCR4_MTYP_B_0x2 = 2;

    /** @brief Memory data bus width */
    using FMC_BCR4_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (default after reset) (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_BCR4_MWID_B_0x0 = 0;
        /** @brief 16 bits (default after reset) */
    constexpr std::uint32_t FMC_BCR4_MWID_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t FMC_BCR4_MWID_B_0x2 = 2;

    /** @brief Flash memory access enable */
    using FMC_BCR4_FACCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding NOR Flash memory access is disabled (value: 0)
     *          - B_0x1: Corresponding NOR Flash memory access is enabled (default after reset) (value: 1)
     */
        /** @brief Corresponding NOR Flash memory access is disabled */
    constexpr std::uint32_t FMC_BCR4_FACCEN_B_0x0 = 0;
        /** @brief Corresponding NOR Flash memory access is enabled (default after reset) */
    constexpr std::uint32_t FMC_BCR4_FACCEN_B_0x1 = 1;

    /** @brief Burst enable bit */
    using FMC_BCR4_BURSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Burst mode disabled (default after reset). Read accesses are performed in asynchronous mode. (value: 0)
     *          - B_0x1: Burst mode enable. Read accesses are performed in synchronous mode. (value: 1)
     */
        /** @brief Burst mode disabled (default after reset). Read accesses are performed in asynchronous mode. */
    constexpr std::uint32_t FMC_BCR4_BURSTEN_B_0x0 = 0;
        /** @brief Burst mode enable. Read accesses are performed in synchronous mode. */
    constexpr std::uint32_t FMC_BCR4_BURSTEN_B_0x1 = 1;

    /** @brief Wait signal polarity bit */
    using FMC_BCR4_WAITPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT active low (default after reset), (value: 0)
     *          - B_0x1: NWAIT active high. (value: 1)
     */
        /** @brief NWAIT active low (default after reset), */
    constexpr std::uint32_t FMC_BCR4_WAITPOL_B_0x0 = 0;
        /** @brief NWAIT active high. */
    constexpr std::uint32_t FMC_BCR4_WAITPOL_B_0x1 = 1;

    /** @brief Wait timing configuration */
    using FMC_BCR4_WAITCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal active one data cycle before wait state (default after reset), (value: 0)
     *          - B_0x1: NWAIT signal active during wait state (not used for PSRAM). (value: 1)
     */
        /** @brief NWAIT signal active one data cycle before wait state (default after reset), */
    constexpr std::uint32_t FMC_BCR4_WAITCFG_B_0x0 = 0;
        /** @brief NWAIT signal active during wait state (not used for PSRAM). */
    constexpr std::uint32_t FMC_BCR4_WAITCFG_B_0x1 = 1;

    /** @brief Write enable bit */
    using FMC_BCR4_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations to the memory region by the FMC disabled. An AXI slave error is reported, (value: 0)
     *          - B_0x1: Write operations to the memory region by the FMC enabled (default after reset). (value: 1)
     */
        /** @brief Write operations to the memory region by the FMC disabled. An AXI slave error is reported, */
    constexpr std::uint32_t FMC_BCR4_WREN_B_0x0 = 0;
        /** @brief Write operations to the memory region by the FMC enabled (default after reset). */
    constexpr std::uint32_t FMC_BCR4_WREN_B_0x1 = 1;

    /** @brief Wait enable bit */
    using FMC_BCR4_WAITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period) (value: 0)
     *          - B_0x1: NWAIT signal enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset) (value: 1)
     */
        /** @brief NWAIT signal disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period) */
    constexpr std::uint32_t FMC_BCR4_WAITEN_B_0x0 = 0;
        /** @brief NWAIT signal enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset) */
    constexpr std::uint32_t FMC_BCR4_WAITEN_B_0x1 = 1;

    /** @brief Extended mode enable */
    using FMC_BCR4_EXTMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Values inside FMC_BWTR register not taken into account (default after reset) (value: 0)
     *          - B_0x1: Values inside FMC_BWTR register taken into account (value: 1)
     */
        /** @brief Values inside FMC_BWTR register not taken into account (default after reset) */
    constexpr std::uint32_t FMC_BCR4_EXTMOD_B_0x0 = 0;
        /** @brief Values inside FMC_BWTR register taken into account */
    constexpr std::uint32_t FMC_BCR4_EXTMOD_B_0x1 = 1;

    /** @brief Wait signal during asynchronous transfers */
    using FMC_BCR4_ASYNCWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal not taken in to account during asynchronous transfers (default after reset) (value: 0)
     *          - B_0x1: NWAIT signal taken in to account during asynchronous transfers (value: 1)
     */
        /** @brief NWAIT signal not taken in to account during asynchronous transfers (default after reset) */
    constexpr std::uint32_t FMC_BCR4_ASYNCWAIT_B_0x0 = 0;
        /** @brief NWAIT signal taken in to account during asynchronous transfers */
    constexpr std::uint32_t FMC_BCR4_ASYNCWAIT_B_0x1 = 1;

    /** @brief CRAM page size */
    using FMC_BCR4_CPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No burst split when crossing page boundary. (default after reset). (value: 0)
     *          - B_0x1: 128 bytes (value: 1)
     *          - B_0x2: 256 bytes (value: 2)
     *          - B_0x3: 512 bytes (value: 3)
     *          - B_0x4: 1024 bytes (value: 4)
     */
        /** @brief No burst split when crossing page boundary. (default after reset). */
    constexpr std::uint32_t FMC_BCR4_CPSIZE_B_0x0 = 0;
        /** @brief 128 bytes */
    constexpr std::uint32_t FMC_BCR4_CPSIZE_B_0x1 = 1;
        /** @brief 256 bytes */
    constexpr std::uint32_t FMC_BCR4_CPSIZE_B_0x2 = 2;
        /** @brief 512 bytes */
    constexpr std::uint32_t FMC_BCR4_CPSIZE_B_0x3 = 3;
        /** @brief 1024 bytes */
    constexpr std::uint32_t FMC_BCR4_CPSIZE_B_0x4 = 4;

    /** @brief Write burst enable */
    using FMC_BCR4_CBURSTRW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are always performed in asynchronous mode (value: 0)
     *          - B_0x1: Write operations are performed in synchronous mode. (value: 1)
     */
        /** @brief Write operations are always performed in asynchronous mode */
    constexpr std::uint32_t FMC_BCR4_CBURSTRW_B_0x0 = 0;
        /** @brief Write operations are performed in synchronous mode. */
    constexpr std::uint32_t FMC_BCR4_CBURSTRW_B_0x1 = 1;

    /** @brief Chip Select (CS) counter */
    using FMC_BCR4_CSCOUNT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: NEx deasserted after fmc_ker_ck clock cycle (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint32_t FMC_BCR4_CSCOUNT0_B_0x0 = 0;
        /** @brief NEx deasserted after fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BCR4_CSCOUNT0_B_0x1 = 1;

    /** @brief Chip Select (CS) counter */
    using FMC_BCR4_CSCOUNT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: NEx deasserted after fmc_ker_ck clock cycle (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint32_t FMC_BCR4_CSCOUNT1_B_0x0 = 0;
        /** @brief NEx deasserted after fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BCR4_CSCOUNT1_B_0x1 = 1;

    /** @brief Byte lane (NBL) setup */
    using FMC_BCR4_NBLSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NBL setup time is 0 fmc_ker_ck clock cycle. (value: 0)
     *          - B_0x1: NBL setup time is 1 fmc_ker_ck clock cycle. (value: 1)
     *          - B_0x2: NBL setup time is 2 fmc_ker_ck clock cycles. (value: 2)
     *          - B_0x3: NBL setup time is 3 fmc_ker_ck clock cycles. (value: 3)
     */
        /** @brief NBL setup time is 0 fmc_ker_ck clock cycle. */
    constexpr std::uint32_t FMC_BCR4_NBLSET_B_0x0 = 0;
        /** @brief NBL setup time is 1 fmc_ker_ck clock cycle. */
    constexpr std::uint32_t FMC_BCR4_NBLSET_B_0x1 = 1;
        /** @brief NBL setup time is 2 fmc_ker_ck clock cycles. */
    constexpr std::uint32_t FMC_BCR4_NBLSET_B_0x2 = 2;
        /** @brief NBL setup time is 3 fmc_ker_ck clock cycles. */
    constexpr std::uint32_t FMC_BCR4_NBLSET_B_0x3 = 3;

    /** @brief SRAM/NOR Flash chip-select timing registers for memory region 4 */
    using FMC_BTR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration */
    using FMC_BTR4_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 * fmc_ker_ck clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR4_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration */
    using FMC_BTR4_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration =1 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration =1 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR4_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BTR4_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration */
    using FMC_BTR4_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 * fmc_ker_ck clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 * fmc_ker_ck clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BTR4_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BTR4_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration */
    using FMC_BTR4_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added */
    constexpr std::uint32_t FMC_BTR4_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_BUSTURN_B_0xF = 15;

    /** @brief Clock divide ratio (for FMC_CLK signal) */
    using FMC_BTR4_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC_CLK period= 1x fmc_ker_ck period (value: 0)
     *          - B_0x1: FMC_CLK period = 2 fmc_ker_ck periods (value: 1)
     *          - B_0x2: FMC_CLK period = 3 fmc_ker_ck periods (value: 2)
     *          - B_0xF: FMC_CLK period = 16 fmc_ker_ck periods (default value after reset) (value: 15)
     */
        /** @brief FMC_CLK period= 1x fmc_ker_ck period */
    constexpr std::uint32_t FMC_BTR4_CLKDIV_B_0x0 = 0;
        /** @brief FMC_CLK period = 2 fmc_ker_ck periods */
    constexpr std::uint32_t FMC_BTR4_CLKDIV_B_0x1 = 1;
        /** @brief FMC_CLK period = 3 fmc_ker_ck periods */
    constexpr std::uint32_t FMC_BTR4_CLKDIV_B_0x2 = 2;
        /** @brief FMC_CLK period = 16 fmc_ker_ck periods (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_CLKDIV_B_0xF = 15;

    /** @brief Data latency for synchronous memory (see note below bit descriptions) */
    using FMC_BTR4_DATLAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data latency of 2 FMC_CLK clock cycles for first burst access (value: 0)
     *          - B_0xF: Data latency of 17 FMC_CLK clock cycles for first burst access (default value after reset) (value: 15)
     */
        /** @brief Data latency of 2 FMC_CLK clock cycles for first burst access */
    constexpr std::uint32_t FMC_BTR4_DATLAT_B_0x0 = 0;
        /** @brief Data latency of 17 FMC_CLK clock cycles for first burst access (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_DATLAT_B_0xF = 15;

    /** @brief Access mode */
    using FMC_BTR4_ACCMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access mode A (value: 0)
     *          - B_0x1: Access mode B (value: 1)
     *          - B_0x2: Access mode C (value: 2)
     *          - B_0x3: Access mode D (value: 3)
     */
        /** @brief Access mode A */
    constexpr std::uint32_t FMC_BTR4_ACCMOD_B_0x0 = 0;
        /** @brief Access mode B */
    constexpr std::uint32_t FMC_BTR4_ACCMOD_B_0x1 = 1;
        /** @brief Access mode C */
    constexpr std::uint32_t FMC_BTR4_ACCMOD_B_0x2 = 2;
        /** @brief Access mode D */
    constexpr std::uint32_t FMC_BTR4_ACCMOD_B_0x3 = 3;

    /** @brief Data Hold phase duration */
    using FMC_BTR4_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = fmc_ker_ck clock cycle * 0 (default, read)/1 (default, write) (value: 0)
     *          - B_0x1: DATAHLD phase duration = fmc_ker_ck clock cycle * 1 (read)/2 (write) (value: 1)
     *          - B_0x2: DATAHLD phase duration = fmc_ker_ck clock cycle * 2 (read)/3 (write) (value: 2)
     *          - B_0x3: DATAHLD phase duration = fmc_ker_ck clock cycle * 3 (read)/4 (write) (value: 3)
     */
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 0 (default, read)/1 (default, write) */
    constexpr std::uint32_t FMC_BTR4_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 1 (read)/2 (write) */
    constexpr std::uint32_t FMC_BTR4_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 2 (read)/3 (write) */
    constexpr std::uint32_t FMC_BTR4_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = fmc_ker_ck clock cycle * 3 (read)/4 (write) */
    constexpr std::uint32_t FMC_BTR4_DATAHLD_B_0x3 = 3;

    /** @brief FMC common configuration register */
    using FMC_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock divide ratio (for FMC_CLK signal) */
    using FMC_CFGR_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC_CLK period= 1x fmc_ker_ck period (value: 0)
     *          - B_0x1: FMC_CLK period = 2 fmc_ker_ck periods (value: 1)
     *          - B_0x2: FMC_CLK period = 3 fmc_ker_ck periods (value: 2)
     *          - B_0xF: FMC_CLK period = 16 fmc_ker_ck periods (default value after reset) (value: 15)
     */
        /** @brief FMC_CLK period= 1x fmc_ker_ck period */
    constexpr std::uint32_t FMC_CFGR_CLKDIV_B_0x0 = 0;
        /** @brief FMC_CLK period = 2 fmc_ker_ck periods */
    constexpr std::uint32_t FMC_CFGR_CLKDIV_B_0x1 = 1;
        /** @brief FMC_CLK period = 3 fmc_ker_ck periods */
    constexpr std::uint32_t FMC_CFGR_CLKDIV_B_0x2 = 2;
        /** @brief FMC_CLK period = 16 fmc_ker_ck periods (default value after reset) */
    constexpr std::uint32_t FMC_CFGR_CLKDIV_B_0xF = 15;

    /** @brief Continuous clock enable */
    using FMC_CFGR_CCLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The FMC_CLK is only generated during the synchronous memory access (read/write transaction). The FMC_CLK clock ratio is defined by the programmed CLKDIV value in the FMC_BCRx register (default after reset). (value: 0)
     *          - B_0x1: The FMC_CLK is generated continuously during asynchronous and synchronous access. (value: 1)
     */
        /** @brief The FMC_CLK is only generated during the synchronous memory access (read/write transaction). The FMC_CLK clock ratio is defined by the programmed CLKDIV value in the FMC_BCRx register (default after reset). */
    constexpr std::uint32_t FMC_CFGR_CCLKEN_B_0x0 = 0;
        /** @brief The FMC_CLK is generated continuously during asynchronous and synchronous access. */
    constexpr std::uint32_t FMC_CFGR_CCLKEN_B_0x1 = 1;

    /** @brief FMC memory region mapping */
    using FMC_CFGR_BMAP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default mapping (refer to Table 132) (value: 0)
     *          - B_0x1: Devices are remapped (refer to Table 133) (value: 1)
     */
        /** @brief Default mapping (refer to Table 132) */
    constexpr std::uint32_t FMC_CFGR_BMAP0_B_0x0 = 0;
        /** @brief Devices are remapped (refer to Table 133) */
    constexpr std::uint32_t FMC_CFGR_BMAP0_B_0x1 = 1;

    /** @brief FMC memory region mapping */
    using FMC_CFGR_BMAP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default mapping (refer to Table 132) (value: 0)
     *          - B_0x1: Devices are remapped (refer to Table 133) (value: 1)
     */
        /** @brief Default mapping (refer to Table 132) */
    constexpr std::uint32_t FMC_CFGR_BMAP1_B_0x0 = 0;
        /** @brief Devices are remapped (refer to Table 133) */
    constexpr std::uint32_t FMC_CFGR_BMAP1_B_0x1 = 1;

    /** @brief FMC controller enable */
    using FMC_CFGR_FMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC controller disabled (value: 0)
     *          - B_0x1: FMC controller enabled (value: 1)
     */
        /** @brief FMC controller disabled */
    constexpr std::uint32_t FMC_CFGR_FMCEN_B_0x0 = 0;
        /** @brief FMC controller enabled */
    constexpr std::uint32_t FMC_CFGR_FMCEN_B_0x1 = 1;

    /** @brief NAND Flash programmable control register */
    using FMC_PCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wait feature enable bit */
    using FMC_PCR_PWAITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (default) (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled (default) */
    constexpr std::uint32_t FMC_PCR_PWAITEN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t FMC_PCR_PWAITEN_B_0x1 = 1;

    /** @brief NAND Flash memory region enable bit */
    using FMC_PCR_PBKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding memory region is disabled (default after reset) (value: 0)
     *          - B_0x1: Corresponding memory region is enabled. (value: 1)
     */
        /** @brief Corresponding memory region is disabled (default after reset) */
    constexpr std::uint32_t FMC_PCR_PBKEN_B_0x0 = 0;
        /** @brief Corresponding memory region is enabled. */
    constexpr std::uint32_t FMC_PCR_PBKEN_B_0x1 = 1;

    /** @brief Data bus width */
    using FMC_PCR_PWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (default after reset). (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     */
        /** @brief 8 bits (default after reset). */
    constexpr std::uint32_t FMC_PCR_PWID_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t FMC_PCR_PWID_B_0x1 = 1;

    /** @brief ECC computation logic enable bit */
    using FMC_PCR_ECCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECC logic is disabled and reset (default after reset), (value: 0)
     *          - B_0x1: ECC logic is enabled. (value: 1)
     */
        /** @brief ECC logic is disabled and reset (default after reset), */
    constexpr std::uint32_t FMC_PCR_ECCEN_B_0x0 = 0;
        /** @brief ECC logic is enabled. */
    constexpr std::uint32_t FMC_PCR_ECCEN_B_0x1 = 1;

    /** @brief ECC algorithm */
    using FMC_PCR_ECCALG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hamming code is selected (default). (value: 0)
     *          - B_0x1: BCH code is selected. (value: 1)
     */
        /** @brief Hamming code is selected (default). */
    constexpr std::uint32_t FMC_PCR_ECCALG_B_0x0 = 0;
        /** @brief BCH code is selected. */
    constexpr std::uint32_t FMC_PCR_ECCALG_B_0x1 = 1;

    /** @brief CLE to RE delay. */
    using FMC_PCR_TCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 * fmc_ker_ck cycle (value: 0)
     *          - B_0xF: 16 * fmc_ker_ck cycles (default) (value: 15)
     */
        /** @brief 1 * fmc_ker_ck cycle */
    constexpr std::uint32_t FMC_PCR_TCLR_B_0x0 = 0;
        /** @brief 16 * fmc_ker_ck cycles (default) */
    constexpr std::uint32_t FMC_PCR_TCLR_B_0xF = 15;

    /** @brief ALE to RE delay. */
    using FMC_PCR_TAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 * fmc_ker_ck cycle (value: 0)
     *          - B_0xF: 16 * fmc_ker_ck cycles (default) (value: 15)
     */
        /** @brief 1 * fmc_ker_ck cycle */
    constexpr std::uint32_t FMC_PCR_TAR_B_0x0 = 0;
        /** @brief 16 * fmc_ker_ck cycles (default) */
    constexpr std::uint32_t FMC_PCR_TAR_B_0xF = 15;

    /** @brief ECC sector size (used to access spare area) */
    using FMC_PCR_ECCSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 256 bytes (value: 0)
     *          - B_0x1: 512 bytes (value: 1)
     *          - B_0x2: 1024 bytes (value: 2)
     *          - B_0x3: 2048 bytes (default) (value: 3)
     *          - B_0x4: 4096 bytes (value: 4)
     */
        /** @brief 256 bytes */
    constexpr std::uint32_t FMC_PCR_ECCSS_B_0x0 = 0;
        /** @brief 512 bytes */
    constexpr std::uint32_t FMC_PCR_ECCSS_B_0x1 = 1;
        /** @brief 1024 bytes */
    constexpr std::uint32_t FMC_PCR_ECCSS_B_0x2 = 2;
        /** @brief 2048 bytes (default) */
    constexpr std::uint32_t FMC_PCR_ECCSS_B_0x3 = 3;
        /** @brief 4096 bytes */
    constexpr std::uint32_t FMC_PCR_ECCSS_B_0x4 = 4;

    /** @brief BCH error correction capability */
    using FMC_PCR_BCHECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 4-bit BCH (4-bit error correction and 8-bit error detection per 512 bytes) (value: 0)
     *          - B_0x1: 8-bit BCH (8-bit error correction and 16-bit error detection per 512 bytes) (value: 1)
     */
        /** @brief 4-bit BCH (4-bit error correction and 8-bit error detection per 512 bytes) */
    constexpr std::uint32_t FMC_PCR_BCHECC_B_0x0 = 0;
        /** @brief 8-bit BCH (8-bit error correction and 16-bit error detection per 512 bytes) */
    constexpr std::uint32_t FMC_PCR_BCHECC_B_0x1 = 1;

    /** @brief Write enable */
    using FMC_PCR_WEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read access enabled (value: 0)
     *          - B_0x1: Write access enabled (value: 1)
     */
        /** @brief Read access enabled */
    constexpr std::uint32_t FMC_PCR_WEN_B_0x0 = 0;
        /** @brief Write access enabled */
    constexpr std::uint32_t FMC_PCR_WEN_B_0x1 = 1;

    /** @brief FMC status register */
    using FMC_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC isolation state with respect to the AXI interface */
    using FMC_SR_ISOST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC is not isolated; AXI transactions are treated by the FMC and its controllers. (value: 0)
     *          - B_0x1: FMC has been enabled (FMCEN = 1) and waits for the end of pending AXI transactions (which leads to error responses) before going to non-isolated state. (value: 1)
     *          - B_0x2: FMC has been disabled (FMCEN = 0) and waits for the end of pending AXI transactions before going to isolation state. (value: 2)
     *          - B_0x3: FMC is isolated from its AXI interface. All AXI requests lead to error responses. (value: 3)
     */
        /** @brief FMC is not isolated; AXI transactions are treated by the FMC and its controllers. */
    constexpr std::uint32_t FMC_SR_ISOST_B_0x0 = 0;
        /** @brief FMC has been enabled (FMCEN = 1) and waits for the end of pending AXI transactions (which leads to error responses) before going to non-isolated state. */
    constexpr std::uint32_t FMC_SR_ISOST_B_0x1 = 1;
        /** @brief FMC has been disabled (FMCEN = 0) and waits for the end of pending AXI transactions before going to isolation state. */
    constexpr std::uint32_t FMC_SR_ISOST_B_0x2 = 2;
        /** @brief FMC is isolated from its AXI interface. All AXI requests lead to error responses. */
    constexpr std::uint32_t FMC_SR_ISOST_B_0x3 = 3;

    /** @brief Pipe Empty Flag */
    using FMC_SR_PEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAND write request flag */
    using FMC_SR_NWRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NAND Flash write requests are pending (value: 0)
     *          - B_0x1: No NAND Flash write requests pending (value: 1)
     */
        /** @brief NAND Flash write requests are pending */
    constexpr std::uint32_t FMC_SR_NWRF_B_0x0 = 0;
        /** @brief No NAND Flash write requests pending */
    constexpr std::uint32_t FMC_SR_NWRF_B_0x1 = 1;

    /** @brief FMC common memory space timing register */
    using FMC_PMEM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Common memory setup time */
    using FMC_PMEM_MEMSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 * fmc_ker_ck cycles (value: 0)
     *          - B_0x1: 2 * fmc_ker_ck cycles (value: 1)
     *          - B_0xFF: 256 * fmc_ker_ck cycles (value: 255)
     */
        /** @brief 1 * fmc_ker_ck cycles */
    constexpr std::uint32_t FMC_PMEM_MEMSET_B_0x0 = 0;
        /** @brief 2 * fmc_ker_ck cycles */
    constexpr std::uint32_t FMC_PMEM_MEMSET_B_0x1 = 1;
        /** @brief 256 * fmc_ker_ck cycles */
    constexpr std::uint32_t FMC_PMEM_MEMSET_B_0xFF = 255;

    /** @brief Common memory wait time */
    using FMC_PMEM_MEMWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 * fmc_ker_ck cycles (+ wait cycle introduced by deasserting NWAIT) (value: 0)
     *          - B_0x1: 2 * fmc_ker_ck cycles (+ wait cycle introduced by deasserting NWAIT) (value: 1)
     *          - B_0xFF: 256 * fmc_ker_ck cycles (+ wait cycle introduced by deasserting NWAIT) (value: 255)
     */
        /** @brief 1 * fmc_ker_ck cycles (+ wait cycle introduced by deasserting NWAIT) */
    constexpr std::uint32_t FMC_PMEM_MEMWAIT_B_0x0 = 0;
        /** @brief 2 * fmc_ker_ck cycles (+ wait cycle introduced by deasserting NWAIT) */
    constexpr std::uint32_t FMC_PMEM_MEMWAIT_B_0x1 = 1;
        /** @brief 256 * fmc_ker_ck cycles (+ wait cycle introduced by deasserting NWAIT) */
    constexpr std::uint32_t FMC_PMEM_MEMWAIT_B_0xFF = 255;

    /** @brief Common memory hold time */
    using FMC_PMEM_MEMHOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 * fmc_ker_ck cycle (value: 0)
     *          - B_0x1: 2 * fmc_ker_ck cycles (value: 1)
     *          - B_0xFF: 256 * fmc_ker_ck cycles (value: 255)
     */
        /** @brief 1 * fmc_ker_ck cycle */
    constexpr std::uint32_t FMC_PMEM_MEMHOLD_B_0x0 = 0;
        /** @brief 2 * fmc_ker_ck cycles */
    constexpr std::uint32_t FMC_PMEM_MEMHOLD_B_0x1 = 1;
        /** @brief 256 * fmc_ker_ck cycles */
    constexpr std::uint32_t FMC_PMEM_MEMHOLD_B_0xFF = 255;

    /** @brief Common memory data bus Hi-Z time */
    using FMC_PMEM_MEMHIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 * fmc_ker_ck cycle (value: 0)
     *          - B_0x1: 2 * fmc_ker_ck cycles (value: 1)
     *          - B_0xFF: 256 * fmc_ker_ck cycles (value: 255)
     */
        /** @brief 1 * fmc_ker_ck cycle */
    constexpr std::uint32_t FMC_PMEM_MEMHIZ_B_0x0 = 0;
        /** @brief 2 * fmc_ker_ck cycles */
    constexpr std::uint32_t FMC_PMEM_MEMHIZ_B_0x1 = 1;
        /** @brief 256 * fmc_ker_ck cycles */
    constexpr std::uint32_t FMC_PMEM_MEMHIZ_B_0xFF = 255;

    /** @brief FMC attribute memory space timing registers */
    using FMC_PATT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attribute memory setup time */
    using FMC_PATT_ATTSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 * fmc_ker_ck cycle (value: 0)
     *          - B_0x1: 2 * fmc_ker_ck cycle (value: 1)
     *          - B_0xFF: 256 * fmc_ker_ck cycles. (value: 255)
     */
        /** @brief 1 * fmc_ker_ck cycle */
    constexpr std::uint32_t FMC_PATT_ATTSET_B_0x0 = 0;
        /** @brief 2 * fmc_ker_ck cycle */
    constexpr std::uint32_t FMC_PATT_ATTSET_B_0x1 = 1;
        /** @brief 256 * fmc_ker_ck cycles. */
    constexpr std::uint32_t FMC_PATT_ATTSET_B_0xFF = 255;

    /** @brief Attribute memory wait time */
    using FMC_PATT_ATTWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 * fmc_ker_ck cycle (+ wait cycle introduced by deassertion of NWAIT) (value: 0)
     *          - B_0x1: 2 * fmc_ker_ck cycles (+ wait cycle introduced by deassertion of NWAIT) (value: 1)
     *          - B_0xFF: 256 * fmc_ker_ck cycles (+ wait cycle introduced by deasserting NWAIT) (value: 255)
     */
        /** @brief 1 * fmc_ker_ck cycle (+ wait cycle introduced by deassertion of NWAIT) */
    constexpr std::uint32_t FMC_PATT_ATTWAIT_B_0x0 = 0;
        /** @brief 2 * fmc_ker_ck cycles (+ wait cycle introduced by deassertion of NWAIT) */
    constexpr std::uint32_t FMC_PATT_ATTWAIT_B_0x1 = 1;
        /** @brief 256 * fmc_ker_ck cycles (+ wait cycle introduced by deasserting NWAIT) */
    constexpr std::uint32_t FMC_PATT_ATTWAIT_B_0xFF = 255;

    /** @brief Attribute memory hold time */
    using FMC_PATT_ATTHOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 * fmc_ker_ck cycle (value: 0)
     *          - B_0x1: 2 * fmc_ker_ck cycle (value: 1)
     *          - B_0xFF: 256 * fmc_ker_ck cycles. (value: 255)
     */
        /** @brief 1 * fmc_ker_ck cycle */
    constexpr std::uint32_t FMC_PATT_ATTHOLD_B_0x0 = 0;
        /** @brief 2 * fmc_ker_ck cycle */
    constexpr std::uint32_t FMC_PATT_ATTHOLD_B_0x1 = 1;
        /** @brief 256 * fmc_ker_ck cycles. */
    constexpr std::uint32_t FMC_PATT_ATTHOLD_B_0xFF = 255;

    /** @brief Attribute memory data bus Hi-Z time */
    using FMC_PATT_ATTHIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 * fmc_ker_ck cycle (value: 0)
     *          - B_0x1: 2 * fmc_ker_ck cycle (value: 1)
     *          - B_0xFF: 256 * fmc_ker_ck cycles (value: 255)
     */
        /** @brief 1 * fmc_ker_ck cycle */
    constexpr std::uint32_t FMC_PATT_ATTHIZ_B_0x0 = 0;
        /** @brief 2 * fmc_ker_ck cycle */
    constexpr std::uint32_t FMC_PATT_ATTHIZ_B_0x1 = 1;
        /** @brief 256 * fmc_ker_ck cycles */
    constexpr std::uint32_t FMC_PATT_ATTHIZ_B_0xFF = 255;

    /** @brief FMC Hamming parity result registers */
    using FMC_HPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hamming parity result */
    using FMC_HPR_HPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC Hamming code ECC result register */
    using FMC_HECCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC result */
    using FMC_HECCR_HECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM/NOR-Flash write timing registers for memory region 1 */
    using FMC_BWTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration. */
    using FMC_BWTR1_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 * fmc_ker_ck clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR1_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR1_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration. */
    using FMC_BWTR1_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration = 1 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration = 1 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR1_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR1_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR1_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration. */
    using FMC_BWTR1_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 * fmc_ker_ck clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 * fmc_ker_ck clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BWTR1_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BWTR1_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR1_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration */
    using FMC_BWTR1_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added */
    constexpr std::uint32_t FMC_BWTR1_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BWTR1_BUSTURN_B_0xF = 15;

    /** @brief Access mode. */
    using FMC_BWTR1_ACCMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access mode A (value: 0)
     *          - B_0x1: Access mode B (value: 1)
     *          - B_0x2: Access mode C (value: 2)
     *          - B_0x3: Access mode D (value: 3)
     */
        /** @brief Access mode A */
    constexpr std::uint32_t FMC_BWTR1_ACCMOD_B_0x0 = 0;
        /** @brief Access mode B */
    constexpr std::uint32_t FMC_BWTR1_ACCMOD_B_0x1 = 1;
        /** @brief Access mode C */
    constexpr std::uint32_t FMC_BWTR1_ACCMOD_B_0x2 = 2;
        /** @brief Access mode D */
    constexpr std::uint32_t FMC_BWTR1_ACCMOD_B_0x3 = 3;

    /** @brief Data Hold phase duration */
    using FMC_BWTR1_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 * fmc_ker_ck clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 * fmc_ker_ck clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 * fmc_ker_ck clock cycle (default) */
    constexpr std::uint32_t FMC_BWTR1_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR1_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR1_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR1_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR-Flash write timing registers for memory region 2 */
    using FMC_BWTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration. */
    using FMC_BWTR2_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 * fmc_ker_ck clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR2_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR2_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration. */
    using FMC_BWTR2_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration = 1 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration = 1 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR2_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR2_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR2_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration. */
    using FMC_BWTR2_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 * fmc_ker_ck clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 * fmc_ker_ck clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BWTR2_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BWTR2_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR2_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration */
    using FMC_BWTR2_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added */
    constexpr std::uint32_t FMC_BWTR2_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BWTR2_BUSTURN_B_0xF = 15;

    /** @brief Access mode. */
    using FMC_BWTR2_ACCMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access mode A (value: 0)
     *          - B_0x1: Access mode B (value: 1)
     *          - B_0x2: Access mode C (value: 2)
     *          - B_0x3: Access mode D (value: 3)
     */
        /** @brief Access mode A */
    constexpr std::uint32_t FMC_BWTR2_ACCMOD_B_0x0 = 0;
        /** @brief Access mode B */
    constexpr std::uint32_t FMC_BWTR2_ACCMOD_B_0x1 = 1;
        /** @brief Access mode C */
    constexpr std::uint32_t FMC_BWTR2_ACCMOD_B_0x2 = 2;
        /** @brief Access mode D */
    constexpr std::uint32_t FMC_BWTR2_ACCMOD_B_0x3 = 3;

    /** @brief Data Hold phase duration */
    using FMC_BWTR2_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 * fmc_ker_ck clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 * fmc_ker_ck clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 * fmc_ker_ck clock cycle (default) */
    constexpr std::uint32_t FMC_BWTR2_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR2_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR2_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR2_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR-Flash write timing registers for memory region 3 */
    using FMC_BWTR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration. */
    using FMC_BWTR3_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 * fmc_ker_ck clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR3_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR3_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration. */
    using FMC_BWTR3_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration = 1 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration = 1 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR3_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR3_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR3_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration. */
    using FMC_BWTR3_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 * fmc_ker_ck clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 * fmc_ker_ck clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BWTR3_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BWTR3_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR3_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration */
    using FMC_BWTR3_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added */
    constexpr std::uint32_t FMC_BWTR3_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BWTR3_BUSTURN_B_0xF = 15;

    /** @brief Access mode. */
    using FMC_BWTR3_ACCMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access mode A (value: 0)
     *          - B_0x1: Access mode B (value: 1)
     *          - B_0x2: Access mode C (value: 2)
     *          - B_0x3: Access mode D (value: 3)
     */
        /** @brief Access mode A */
    constexpr std::uint32_t FMC_BWTR3_ACCMOD_B_0x0 = 0;
        /** @brief Access mode B */
    constexpr std::uint32_t FMC_BWTR3_ACCMOD_B_0x1 = 1;
        /** @brief Access mode C */
    constexpr std::uint32_t FMC_BWTR3_ACCMOD_B_0x2 = 2;
        /** @brief Access mode D */
    constexpr std::uint32_t FMC_BWTR3_ACCMOD_B_0x3 = 3;

    /** @brief Data Hold phase duration */
    using FMC_BWTR3_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 * fmc_ker_ck clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 * fmc_ker_ck clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 * fmc_ker_ck clock cycle (default) */
    constexpr std::uint32_t FMC_BWTR3_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR3_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR3_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR3_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR-Flash write timing registers for memory region 4 */
    using FMC_BWTR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration. */
    using FMC_BWTR4_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 * fmc_ker_ck clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR4_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR4_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration. */
    using FMC_BWTR4_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration = 1 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration = 1 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR4_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR4_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR4_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration. */
    using FMC_BWTR4_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 * fmc_ker_ck clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 * fmc_ker_ck clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BWTR4_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 * fmc_ker_ck clock cycles */
    constexpr std::uint32_t FMC_BWTR4_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 * fmc_ker_ck clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR4_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration */
    using FMC_BWTR4_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 * fmc_ker_ck clock cycle added */
    constexpr std::uint32_t FMC_BWTR4_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 * fmc_ker_ck clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BWTR4_BUSTURN_B_0xF = 15;

    /** @brief Access mode. */
    using FMC_BWTR4_ACCMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access mode A (value: 0)
     *          - B_0x1: Access mode B (value: 1)
     *          - B_0x2: Access mode C (value: 2)
     *          - B_0x3: Access mode D (value: 3)
     */
        /** @brief Access mode A */
    constexpr std::uint32_t FMC_BWTR4_ACCMOD_B_0x0 = 0;
        /** @brief Access mode B */
    constexpr std::uint32_t FMC_BWTR4_ACCMOD_B_0x1 = 1;
        /** @brief Access mode C */
    constexpr std::uint32_t FMC_BWTR4_ACCMOD_B_0x2 = 2;
        /** @brief Access mode D */
    constexpr std::uint32_t FMC_BWTR4_ACCMOD_B_0x3 = 3;

    /** @brief Data Hold phase duration */
    using FMC_BWTR4_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 * fmc_ker_ck clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 * fmc_ker_ck clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 * fmc_ker_ck clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 * fmc_ker_ck clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 * fmc_ker_ck clock cycle (default) */
    constexpr std::uint32_t FMC_BWTR4_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR4_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR4_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 * fmc_ker_ck clock cycle */
    constexpr std::uint32_t FMC_BWTR4_DATAHLD_B_0x3 = 3;

    /** @brief SDRAM control registers for SDRAM device 1 */
    using FMC_SDCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of column address bits */
    using FMC_SDCR1_NC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 9 bits (value: 1)
     *          - B_0x2: 10 bits (value: 2)
     *          - B_0x3: 11 bits. (value: 3)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_SDCR1_NC_B_0x0 = 0;
        /** @brief 9 bits */
    constexpr std::uint32_t FMC_SDCR1_NC_B_0x1 = 1;
        /** @brief 10 bits */
    constexpr std::uint32_t FMC_SDCR1_NC_B_0x2 = 2;
        /** @brief 11 bits. */
    constexpr std::uint32_t FMC_SDCR1_NC_B_0x3 = 3;

    /** @brief Number of row address bits */
    using FMC_SDCR1_NR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 11 bit (value: 0)
     *          - B_0x1: 12 bits (value: 1)
     *          - B_0x2: 13 bits (value: 2)
     */
        /** @brief 11 bit */
    constexpr std::uint32_t FMC_SDCR1_NR_B_0x0 = 0;
        /** @brief 12 bits */
    constexpr std::uint32_t FMC_SDCR1_NR_B_0x1 = 1;
        /** @brief 13 bits */
    constexpr std::uint32_t FMC_SDCR1_NR_B_0x2 = 2;

    /** @brief Memory data bus width. */
    using FMC_SDCR1_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_SDCR1_MWID_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t FMC_SDCR1_MWID_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t FMC_SDCR1_MWID_B_0x2 = 2;

    /** @brief Number of banks */
    using FMC_SDCR1_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Two banks (value: 0)
     *          - B_0x1: Four banks (value: 1)
     */
        /** @brief Two banks */
    constexpr std::uint32_t FMC_SDCR1_NB_B_0x0 = 0;
        /** @brief Four banks */
    constexpr std::uint32_t FMC_SDCR1_NB_B_0x1 = 1;

    /** @brief CAS Latency */
    using FMC_SDCR1_CAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 cycle (value: 1)
     *          - B_0x2: 2 cycles (value: 2)
     *          - B_0x3: 3 cycles (value: 3)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDCR1_CAS_B_0x1 = 1;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDCR1_CAS_B_0x2 = 2;
        /** @brief 3 cycles */
    constexpr std::uint32_t FMC_SDCR1_CAS_B_0x3 = 3;

    /** @brief Write protection */
    using FMC_SDCR1_WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write accesses allowed (value: 0)
     *          - B_0x1: Write accesses ignored (value: 1)
     */
        /** @brief Write accesses allowed */
    constexpr std::uint32_t FMC_SDCR1_WP_B_0x0 = 0;
        /** @brief Write accesses ignored */
    constexpr std::uint32_t FMC_SDCR1_WP_B_0x1 = 1;

    /** @brief SDRAM clock configuration */
    using FMC_SDCR1_SDCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDCLK clock disabled (value: 0)
     *          - B_0x1: SDCLK period = 1 * fmc_ker_ck period (value: 1)
     *          - B_0x2: SDCLK period = 2 * fmc_ker_ck periods (value: 2)
     *          - B_0x3: SDCLK period = 3 * fmc_ker_ck periods (value: 3)
     */
        /** @brief SDCLK clock disabled */
    constexpr std::uint32_t FMC_SDCR1_SDCLK_B_0x0 = 0;
        /** @brief SDCLK period = 1 * fmc_ker_ck period */
    constexpr std::uint32_t FMC_SDCR1_SDCLK_B_0x1 = 1;
        /** @brief SDCLK period = 2 * fmc_ker_ck periods */
    constexpr std::uint32_t FMC_SDCR1_SDCLK_B_0x2 = 2;
        /** @brief SDCLK period = 3 * fmc_ker_ck periods */
    constexpr std::uint32_t FMC_SDCR1_SDCLK_B_0x3 = 3;

    /** @brief Read pipe */
    using FMC_SDCR1_RPIPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No fmc_ker_ck clock cycle delay (default value) (value: 0)
     *          - B_0x1: One fmc_ker_ck clock cycle delay (value: 1)
     *          - B_0x2: Two fmc_ker_ck clock cycle delay (value: 2)
     */
        /** @brief No fmc_ker_ck clock cycle delay (default value) */
    constexpr std::uint32_t FMC_SDCR1_RPIPE_B_0x0 = 0;
        /** @brief One fmc_ker_ck clock cycle delay */
    constexpr std::uint32_t FMC_SDCR1_RPIPE_B_0x1 = 1;
        /** @brief Two fmc_ker_ck clock cycle delay */
    constexpr std::uint32_t FMC_SDCR1_RPIPE_B_0x2 = 2;

    /** @brief SDRAM device enable */
    using FMC_SDCR1_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: SDRAM device enabled (value: 1)
     *          - B_0x0: SDRAM disabled (value: 0)
     */
        /** @brief SDRAM device enabled */
    constexpr std::uint32_t FMC_SDCR1_SDEN_B_0x1 = 1;
        /** @brief SDRAM disabled */
    constexpr std::uint32_t FMC_SDCR1_SDEN_B_0x0 = 0;

    /** @brief SDRAM device initialization */
    using FMC_SDCR1_SDINIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Initialization is complete and the device is ready to be accessed (value: 1)
     *          - B_0x0: Initialization is not complete, the AXI accesses are rejected and an AXI slave error is generated. (value: 0)
     */
        /** @brief Initialization is complete and the device is ready to be accessed */
    constexpr std::uint32_t FMC_SDCR1_SDINIT_B_0x1 = 1;
        /** @brief Initialization is not complete, the AXI accesses are rejected and an AXI slave error is generated. */
    constexpr std::uint32_t FMC_SDCR1_SDINIT_B_0x0 = 0;

    /** @brief SDRAM control registers for SDRAM device 2 */
    using FMC_SDCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of column address bits */
    using FMC_SDCR2_NC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 9 bits (value: 1)
     *          - B_0x2: 10 bits (value: 2)
     *          - B_0x3: 11 bits. (value: 3)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_SDCR2_NC_B_0x0 = 0;
        /** @brief 9 bits */
    constexpr std::uint32_t FMC_SDCR2_NC_B_0x1 = 1;
        /** @brief 10 bits */
    constexpr std::uint32_t FMC_SDCR2_NC_B_0x2 = 2;
        /** @brief 11 bits. */
    constexpr std::uint32_t FMC_SDCR2_NC_B_0x3 = 3;

    /** @brief Number of row address bits */
    using FMC_SDCR2_NR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 11 bit (value: 0)
     *          - B_0x1: 12 bits (value: 1)
     *          - B_0x2: 13 bits (value: 2)
     */
        /** @brief 11 bit */
    constexpr std::uint32_t FMC_SDCR2_NR_B_0x0 = 0;
        /** @brief 12 bits */
    constexpr std::uint32_t FMC_SDCR2_NR_B_0x1 = 1;
        /** @brief 13 bits */
    constexpr std::uint32_t FMC_SDCR2_NR_B_0x2 = 2;

    /** @brief Memory data bus width. */
    using FMC_SDCR2_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_SDCR2_MWID_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t FMC_SDCR2_MWID_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t FMC_SDCR2_MWID_B_0x2 = 2;

    /** @brief Number of banks */
    using FMC_SDCR2_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Two banks (value: 0)
     *          - B_0x1: Four banks (value: 1)
     */
        /** @brief Two banks */
    constexpr std::uint32_t FMC_SDCR2_NB_B_0x0 = 0;
        /** @brief Four banks */
    constexpr std::uint32_t FMC_SDCR2_NB_B_0x1 = 1;

    /** @brief CAS Latency */
    using FMC_SDCR2_CAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 cycle (value: 1)
     *          - B_0x2: 2 cycles (value: 2)
     *          - B_0x3: 3 cycles (value: 3)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDCR2_CAS_B_0x1 = 1;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDCR2_CAS_B_0x2 = 2;
        /** @brief 3 cycles */
    constexpr std::uint32_t FMC_SDCR2_CAS_B_0x3 = 3;

    /** @brief Write protection */
    using FMC_SDCR2_WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write accesses allowed (value: 0)
     *          - B_0x1: Write accesses ignored (value: 1)
     */
        /** @brief Write accesses allowed */
    constexpr std::uint32_t FMC_SDCR2_WP_B_0x0 = 0;
        /** @brief Write accesses ignored */
    constexpr std::uint32_t FMC_SDCR2_WP_B_0x1 = 1;

    /** @brief SDRAM device enable */
    using FMC_SDCR2_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: SDRAM device enabled (value: 1)
     *          - B_0x0: SDRAM disabled (value: 0)
     */
        /** @brief SDRAM device enabled */
    constexpr std::uint32_t FMC_SDCR2_SDEN_B_0x1 = 1;
        /** @brief SDRAM disabled */
    constexpr std::uint32_t FMC_SDCR2_SDEN_B_0x0 = 0;

    /** @brief SDRAM device initialization */
    using FMC_SDCR2_SDINIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Initialization is complete and the device is ready to be accessed (value: 1)
     *          - B_0x0: Initialization is not complete, the AXI accesses are rejected and an AXI slave error is generated. (value: 0)
     */
        /** @brief Initialization is complete and the device is ready to be accessed */
    constexpr std::uint32_t FMC_SDCR2_SDINIT_B_0x1 = 1;
        /** @brief Initialization is not complete, the AXI accesses are rejected and an AXI slave error is generated. */
    constexpr std::uint32_t FMC_SDCR2_SDINIT_B_0x0 = 0;

    /** @brief SDRAM timing register */
    using FMC_SDTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Load mode register to active */
    using FMC_SDTR_TMRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR_TMRD_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR_TMRD_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR_TMRD_B_0xF = 15;

    /** @brief Exit self-refresh delay */
    using FMC_SDTR_TXSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR_TXSR_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR_TXSR_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR_TXSR_B_0xF = 15;

    /** @brief Self-refresh time */
    using FMC_SDTR_TRAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR_TRAS_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR_TRAS_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR_TRAS_B_0xF = 15;

    /** @brief Row cycle delay */
    using FMC_SDTR_TRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR_TRC_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR_TRC_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR_TRC_B_0xF = 15;

    /** @brief Recovery delay */
    using FMC_SDTR_TWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR_TWR_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR_TWR_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR_TWR_B_0xF = 15;

    /** @brief Row precharge delay */
    using FMC_SDTR_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR_TRP_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR_TRP_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR_TRP_B_0xF = 15;

    /** @brief Row to column delay */
    using FMC_SDTR_TRCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle. (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle. */
    constexpr std::uint32_t FMC_SDTR_TRCD_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR_TRCD_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR_TRCD_B_0xF = 15;

    /** @brief SDRAM command mode register */
    using FMC_SDCMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command mode */
    using FMC_SDCMR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode command (NRM) (value: 0)
     *          - B_0x2: Precharge all banks command (PALL) (value: 2)
     *          - B_0x3: Refresh command (REF) (value: 3)
     *          - B_0x4: Load mode register command (LMR) (value: 4)
     *          - B_0x5: Self-refresh command (SR) (value: 5)
     *          - B_0x6: Power-down command (PD) (value: 6)
     */
        /** @brief Normal mode command (NRM) */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x0 = 0;
        /** @brief Precharge all banks command (PALL) */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x2 = 2;
        /** @brief Refresh command (REF) */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x3 = 3;
        /** @brief Load mode register command (LMR) */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x4 = 4;
        /** @brief Self-refresh command (SR) */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x5 = 5;
        /** @brief Power-down command (PD) */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x6 = 6;

    /** @brief Command targeting SDRAM device 2 */
    using FMC_SDCMR_DS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command not issued to SDRAM device 2 (value: 0)
     *          - B_0x1: Command issued to SDRAM device 2 (value: 1)
     */
        /** @brief Command not issued to SDRAM device 2 */
    constexpr std::uint32_t FMC_SDCMR_DS2_B_0x0 = 0;
        /** @brief Command issued to SDRAM device 2 */
    constexpr std::uint32_t FMC_SDCMR_DS2_B_0x1 = 1;

    /** @brief Command targeting SDRAM device 1 */
    using FMC_SDCMR_DS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command not issued to SDRAM device 1 (value: 0)
     *          - B_0x1: Command issued to SDRAM device 1 (value: 1)
     */
        /** @brief Command not issued to SDRAM device 1 */
    constexpr std::uint32_t FMC_SDCMR_DS1_B_0x0 = 0;
        /** @brief Command issued to SDRAM device 1 */
    constexpr std::uint32_t FMC_SDCMR_DS1_B_0x1 = 1;

    /** @brief Number of Refresh commands */
    using FMC_SDCMR_NRFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 Refresh cycle (value: 0)
     *          - B_0x1: 2 Refresh cycles (value: 1)
     *          - B_0xE: 15 Refresh cycles (value: 14)
     *          - B_0xF: 16 Refresh cycles (value: 15)
     */
        /** @brief 1 Refresh cycle */
    constexpr std::uint32_t FMC_SDCMR_NRFS_B_0x0 = 0;
        /** @brief 2 Refresh cycles */
    constexpr std::uint32_t FMC_SDCMR_NRFS_B_0x1 = 1;
        /** @brief 15 Refresh cycles */
    constexpr std::uint32_t FMC_SDCMR_NRFS_B_0xE = 14;
        /** @brief 16 Refresh cycles */
    constexpr std::uint32_t FMC_SDCMR_NRFS_B_0xF = 15;

    /** @brief Mode register definition */
    using FMC_SDCMR_MRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDRAM refresh timer register */
    using FMC_SDRTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Refresh error flag */
    using FMC_SDRTR_CRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Refresh Error flag is cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t FMC_SDRTR_CRE_B_0x0 = 0;
        /** @brief Refresh Error flag is cleared */
    constexpr std::uint32_t FMC_SDRTR_CRE_B_0x1 = 1;

    /** @brief Refresh Timer Count */
    using FMC_SDRTR_RFSCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RES Interrupt Enable */
    using FMC_SDRTR_REIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled (value: 0)
     *          - B_0x1: An Interrupt is generated if RE = 1 (value: 1)
     */
        /** @brief Interrupt is disabled */
    constexpr std::uint32_t FMC_SDRTR_REIE_B_0x0 = 0;
        /** @brief An Interrupt is generated if RE = 1 */
    constexpr std::uint32_t FMC_SDRTR_REIE_B_0x1 = 1;

    /** @brief SDRAM status register */
    using FMC_SDSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Refresh error flag */
    using FMC_SDSR_RE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No refresh error has been detected (value: 0)
     *          - B_0x1: A refresh error has been detected (value: 1)
     */
        /** @brief No refresh error has been detected */
    constexpr std::uint32_t FMC_SDSR_RE_B_0x0 = 0;
        /** @brief A refresh error has been detected */
    constexpr std::uint32_t FMC_SDSR_RE_B_0x1 = 1;

    /** @brief Status Mode for SDRAM device 1 */
    using FMC_SDSR_MODES1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode, devices are not in Self-refresh or power-down (value: 0)
     *          - B_0x1: Self-refresh (value: 1)
     *          - B_0x2: Power-down (value: 2)
     */
        /** @brief Normal mode, devices are not in Self-refresh or power-down */
    constexpr std::uint32_t FMC_SDSR_MODES1_B_0x0 = 0;
        /** @brief Self-refresh */
    constexpr std::uint32_t FMC_SDSR_MODES1_B_0x1 = 1;
        /** @brief Power-down */
    constexpr std::uint32_t FMC_SDSR_MODES1_B_0x2 = 2;

    /** @brief Status mode for SDRAM device 2 */
    using FMC_SDSR_MODES2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode, devices are not in Self-refresh or power-down (value: 0)
     *          - B_0x1: Self-refresh (value: 1)
     *          - B_0x2: Power-down (value: 2)
     */
        /** @brief Normal mode, devices are not in Self-refresh or power-down */
    constexpr std::uint32_t FMC_SDSR_MODES2_B_0x0 = 0;
        /** @brief Self-refresh */
    constexpr std::uint32_t FMC_SDSR_MODES2_B_0x1 = 1;
        /** @brief Power-down */
    constexpr std::uint32_t FMC_SDSR_MODES2_B_0x2 = 2;

    /** @brief Previous command status */
    using FMC_SDSR_CMDOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command not complete (value: 0)
     *          - B_0x1: Command complete in the SDRAM clock domain (value: 1)
     */
        /** @brief Command not complete */
    constexpr std::uint32_t FMC_SDSR_CMDOK_B_0x0 = 0;
        /** @brief Command complete in the SDRAM clock domain */
    constexpr std::uint32_t FMC_SDSR_CMDOK_B_0x1 = 1;

    /** @brief FMC NAND interrupt enable register */
    using FMC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt rising edge detection enable bit */
    using FMC_IER_IREE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt rising edge detection request disabled (value: 0)
     *          - B_0x1: Interrupt rising edge detection request enabled (value: 1)
     */
        /** @brief Interrupt rising edge detection request disabled */
    constexpr std::uint32_t FMC_IER_IREE_B_0x0 = 0;
        /** @brief Interrupt rising edge detection request enabled */
    constexpr std::uint32_t FMC_IER_IREE_B_0x1 = 1;

    /** @brief Interrupt high-level detection enable bit */
    using FMC_IER_IHLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt high-level detection request disabled (value: 0)
     *          - B_0x1: Interrupt high-level detection request enabled (value: 1)
     */
        /** @brief Interrupt high-level detection request disabled */
    constexpr std::uint32_t FMC_IER_IHLE_B_0x0 = 0;
        /** @brief Interrupt high-level detection request enabled */
    constexpr std::uint32_t FMC_IER_IHLE_B_0x1 = 1;

    /** @brief Interrupt falling edge detection enable bit */
    using FMC_IER_IFEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt falling edge detection request disabled (value: 0)
     *          - B_0x1: Interrupt falling edge detection request enabled (value: 1)
     */
        /** @brief Interrupt falling edge detection request disabled */
    constexpr std::uint32_t FMC_IER_IFEE_B_0x0 = 0;
        /** @brief Interrupt falling edge detection request enabled */
    constexpr std::uint32_t FMC_IER_IFEE_B_0x1 = 1;

    /** @brief FMC controller interrupt status register */
    using FMC_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt rising edge flag */
    using FMC_ISR_IREF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt rising edge occurred (value: 0)
     *          - B_0x1: Interrupt rising edge occurred (value: 1)
     */
        /** @brief No interrupt rising edge occurred */
    constexpr std::uint32_t FMC_ISR_IREF_B_0x0 = 0;
        /** @brief Interrupt rising edge occurred */
    constexpr std::uint32_t FMC_ISR_IREF_B_0x1 = 1;

    /** @brief Interrupt high-level flag */
    using FMC_ISR_IHLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Interrupt high-level occurred (value: 0)
     *          - B_0x1: Interrupt high-level occurred (value: 1)
     */
        /** @brief No Interrupt high-level occurred */
    constexpr std::uint32_t FMC_ISR_IHLF_B_0x0 = 0;
        /** @brief Interrupt high-level occurred */
    constexpr std::uint32_t FMC_ISR_IHLF_B_0x1 = 1;

    /** @brief Interrupt falling edge flag */
    using FMC_ISR_IFEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt falling edge occurred (value: 0)
     *          - B_0x1: Interrupt falling edge occurred (value: 1)
     */
        /** @brief No interrupt falling edge occurred */
    constexpr std::uint32_t FMC_ISR_IFEF_B_0x0 = 0;
        /** @brief Interrupt falling edge occurred */
    constexpr std::uint32_t FMC_ISR_IFEF_B_0x1 = 1;

    /** @brief FMC NAND controller interrupt clear register */
    using FMC_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Interrupt rising edge flag */
    using FMC_ICR_CIREF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear the IREF flag in the FMC_ISR register (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t FMC_ICR_CIREF_B_0x0 = 0;
        /** @brief Clear the IREF flag in the FMC_ISR register */
    constexpr std::uint32_t FMC_ICR_CIREF_B_0x1 = 1;

    /** @brief Clear Interrupt high-level flag */
    using FMC_ICR_CIHLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears the IHLF flag in the FMC_ISR register (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t FMC_ICR_CIHLF_B_0x0 = 0;
        /** @brief Clears the IHLF flag in the FMC_ISR register */
    constexpr std::uint32_t FMC_ICR_CIHLF_B_0x1 = 1;

    /** @brief Clear Interrupt falling edge flag */
    using FMC_ICR_CIFEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears the IFEF flag in the FMC_ISR register (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t FMC_ICR_CIFEF_B_0x0 = 0;
        /** @brief Clears the IFEF flag in the FMC_ISR register */
    constexpr std::uint32_t FMC_ICR_CIFEF_B_0x1 = 1;

    /** @brief FMC NAND command sequencer control register */
    using FMC_CSQCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command Sequencer Enable */
    using FMC_CSQCR_CSQSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC NAND command sequencer configuration register 1 */
    using FMC_CSQCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command cycle 2 Enable */
    using FMC_CSQCFGR1_CMD2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command cycle 2 not issued. (value: 0)
     *          - B_0x1: Command cycle 2 (programmed CMD2[7:0]) sent by the command sequencer to the NAND Flash memory after the address cycles. (value: 1)
     */
        /** @brief Command cycle 2 not issued. */
    constexpr std::uint32_t FMC_CSQCFGR1_CMD2EN_B_0x0 = 0;
        /** @brief Command cycle 2 (programmed CMD2[7:0]) sent by the command sequencer to the NAND Flash memory after the address cycles. */
    constexpr std::uint32_t FMC_CSQCFGR1_CMD2EN_B_0x1 = 1;

    /** @brief Command sequencer DMA request data enable */
    using FMC_CSQCFGR1_DMADEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No DMA request transfer (value: 0)
     *          - B_0x1: A DMA request transfer (value: 1)
     */
        /** @brief No DMA request transfer */
    constexpr std::uint32_t FMC_CSQCFGR1_DMADEN_B_0x0 = 0;
        /** @brief A DMA request transfer */
    constexpr std::uint32_t FMC_CSQCFGR1_DMADEN_B_0x1 = 1;

    /** @brief Address Cycle number */
    using FMC_CSQCFGR1_ACYNBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No address cycle. (value: 0)
     *          - B_0x1: 1 address cycle (value: 1)
     *          - B_0x2: 2 address cycles (value: 2)
     *          - B_0x3: 3 address cycles (value: 3)
     *          - B_0x4: 4 address cycles (value: 4)
     *          - B_0x5: 5 address cycles (value: 5)
     */
        /** @brief No address cycle. */
    constexpr std::uint32_t FMC_CSQCFGR1_ACYNBR_B_0x0 = 0;
        /** @brief 1 address cycle */
    constexpr std::uint32_t FMC_CSQCFGR1_ACYNBR_B_0x1 = 1;
        /** @brief 2 address cycles */
    constexpr std::uint32_t FMC_CSQCFGR1_ACYNBR_B_0x2 = 2;
        /** @brief 3 address cycles */
    constexpr std::uint32_t FMC_CSQCFGR1_ACYNBR_B_0x3 = 3;
        /** @brief 4 address cycles */
    constexpr std::uint32_t FMC_CSQCFGR1_ACYNBR_B_0x4 = 4;
        /** @brief 5 address cycles */
    constexpr std::uint32_t FMC_CSQCFGR1_ACYNBR_B_0x5 = 5;

    /** @brief Command 1 sequencer */
    using FMC_CSQCFGR1_CMD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command 2 sequencer */
    using FMC_CSQCFGR1_CMD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command 1 Sequencer timings */
    using FMC_CSQCFGR1_CMD1T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMD1 issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: CMD1 issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief CMD1 issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR1_CMD1T_B_0x0 = 0;
        /** @brief CMD1 issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR1_CMD1T_B_0x1 = 1;

    /** @brief Command 2 Sequencer timings */
    using FMC_CSQCFGR1_CMD2T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMD2 issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: CMD2 issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief CMD2 issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR1_CMD2T_B_0x0 = 0;
        /** @brief CMD2 issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR1_CMD2T_B_0x1 = 1;

    /** @brief FMC NAND command sequencer configuration register 2 */
    using FMC_CSQCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sequencer spare data transfer enable */
    using FMC_CSQCFGR2_SQSDTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECC disabled and spare data area not accessed by the sequencer (value: 0)
     *          - B_0x1: ECC enabled and spare data area read or programmed by the sequencer after each sector transfer (value: 1)
     */
        /** @brief ECC disabled and spare data area not accessed by the sequencer */
    constexpr std::uint32_t FMC_CSQCFGR2_SQSDTEN_B_0x0 = 0;
        /** @brief ECC enabled and spare data area read or programmed by the sequencer after each sector transfer */
    constexpr std::uint32_t FMC_CSQCFGR2_SQSDTEN_B_0x1 = 1;

    /** @brief Random Command 2 sequencer enable */
    using FMC_CSQCFGR2_RCMD2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command 2 not issued. (value: 0)
     *          - B_0x1: Command 2 (CMD2SQ[7:0]) issued by the command sequencer to NAND flash memory after the address cycle. (value: 1)
     */
        /** @brief Command 2 not issued. */
    constexpr std::uint32_t FMC_CSQCFGR2_RCMD2EN_B_0x0 = 0;
        /** @brief Command 2 (CMD2SQ[7:0]) issued by the command sequencer to NAND flash memory after the address cycle. */
    constexpr std::uint32_t FMC_CSQCFGR2_RCMD2EN_B_0x1 = 1;

    /** @brief Command sequencer DMA request decoding status enable */
    using FMC_CSQCFGR2_DMASEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No DMA request used for ECC status registers transfer (value: 0)
     *          - B_0x1: A DMA request used for ECC status registers transfer (value: 1)
     */
        /** @brief No DMA request used for ECC status registers transfer */
    constexpr std::uint32_t FMC_CSQCFGR2_DMASEN_B_0x0 = 0;
        /** @brief A DMA request used for ECC status registers transfer */
    constexpr std::uint32_t FMC_CSQCFGR2_DMASEN_B_0x1 = 1;

    /** @brief Random Command 1 sequencer */
    using FMC_CSQCFGR2_RCMD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Random Command 2 sequencer */
    using FMC_CSQCFGR2_RCMD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command 1 sequencer timings */
    using FMC_CSQCFGR2_RCMD1T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMD1 issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: CMD1 issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief CMD1 issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR2_RCMD1T_B_0x0 = 0;
        /** @brief CMD1 issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR2_RCMD1T_B_0x1 = 1;

    /** @brief Command 1 sequencer timings */
    using FMC_CSQCFGR2_RCMD2T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMD1 issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: CMD1 issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief CMD1 issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR2_RCMD2T_B_0x0 = 0;
        /** @brief CMD1 issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR2_RCMD2T_B_0x1 = 1;

    /** @brief FMC NAND sequencer configuration register 3 */
    using FMC_CSQCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of sectors to be read/written */
    using FMC_CSQCFGR3_SNBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 sector (value: 0)
     *          - B_0x1: 2 sectors (value: 1)
     *          - B_0x3F: 16 sectors (value: 63)
     */
        /** @brief 1 sector */
    constexpr std::uint32_t FMC_CSQCFGR3_SNBR_B_0x0 = 0;
        /** @brief 2 sectors */
    constexpr std::uint32_t FMC_CSQCFGR3_SNBR_B_0x1 = 1;
        /** @brief 16 sectors */
    constexpr std::uint32_t FMC_CSQCFGR3_SNBR_B_0x3F = 63;

    /** @brief Address cycle 1 sequencer timings */
    using FMC_CSQCFGR3_AC1T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDC1 issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: ADDC1 issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief ADDC1 issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR3_AC1T_B_0x0 = 0;
        /** @brief ADDC1 issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR3_AC1T_B_0x1 = 1;

    /** @brief Address cycle 2 sequencer timings */
    using FMC_CSQCFGR3_AC2T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDC2 issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: ADDC2 issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief ADDC2 issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR3_AC2T_B_0x0 = 0;
        /** @brief ADDC2 issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR3_AC2T_B_0x1 = 1;

    /** @brief Address cycle 3 sequencer timings */
    using FMC_CSQCFGR3_AC3T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDC3 issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: ADDC3 issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief ADDC3 issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR3_AC3T_B_0x0 = 0;
        /** @brief ADDC3 issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR3_AC3T_B_0x1 = 1;

    /** @brief Address cycle 4sequencer timings */
    using FMC_CSQCFGR3_AC4T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDC4 issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: ADDC4 issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief ADDC4 issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR3_AC4T_B_0x0 = 0;
        /** @brief ADDC4 issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR3_AC4T_B_0x1 = 1;

    /** @brief Address cycle 5 sequencer timings */
    using FMC_CSQCFGR3_AC5T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDC5 issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: ADDC5 issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief ADDC5 issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR3_AC5T_B_0x0 = 0;
        /** @brief ADDC5 issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR3_AC5T_B_0x1 = 1;

    /** @brief Spare data transfer sequencer timings */
    using FMC_CSQCFGR3_SDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Spare data transfer issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: Spare data transfer issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief Spare data transfer issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR3_SDT_B_0x0 = 0;
        /** @brief Spare data transfer issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR3_SDT_B_0x1 = 1;

    /** @brief Random Address cycle 1 sequencer timings */
    using FMC_CSQCFGR3_RAC1T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Random ADDC1 issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: Random ADDC1 issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief Random ADDC1 issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR3_RAC1T_B_0x0 = 0;
        /** @brief Random ADDC1 issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR3_RAC1T_B_0x1 = 1;

    /** @brief Random Address cycle 2 sequencer timings */
    using FMC_CSQCFGR3_RAC2T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Random ADDC2 issued with the timings programmed in FMC_PMEM (value: 0)
     *          - B_0x1: Random ADDC2 issued with the timings programmed in FMC_PATT (value: 1)
     */
        /** @brief Random ADDC2 issued with the timings programmed in FMC_PMEM */
    constexpr std::uint32_t FMC_CSQCFGR3_RAC2T_B_0x0 = 0;
        /** @brief Random ADDC2 issued with the timings programmed in FMC_PATT */
    constexpr std::uint32_t FMC_CSQCFGR3_RAC2T_B_0x1 = 1;

    /** @brief FMC NAND command sequencer address register 1 */
    using FMC_CSQAR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address Cycle 1 */
    using FMC_CSQAR1_ADDC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address Cycle 2 */
    using FMC_CSQAR1_ADDC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address Cycle 3 */
    using FMC_CSQAR1_ADDC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address Cycle 4 */
    using FMC_CSQAR1_ADDC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC NAND command sequencer address register 2 */
    using FMC_CSQAR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address Cycle 5 */
    using FMC_CSQAR2_ADDC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Spare Area Address Offset */
    using FMC_CSQAR2_SAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC NAND command sequencer interrupt enable register */
    using FMC_CSQIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer Complete Interrupt enable */
    using FMC_CSQIER_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transfer Complete Interrupt disable (value: 0)
     *          - B_0x1: Transfer Complete Interrupt enable (value: 1)
     */
        /** @brief Transfer Complete Interrupt disable */
    constexpr std::uint32_t FMC_CSQIER_TCIE_B_0x0 = 0;
        /** @brief Transfer Complete Interrupt enable */
    constexpr std::uint32_t FMC_CSQIER_TCIE_B_0x1 = 1;

    /** @brief Sector Complete interrupt enable */
    using FMC_CSQIER_SCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sector Complete Interrupt disable (value: 0)
     *          - B_0x1: Sector Complete Interrupt enable (value: 1)
     */
        /** @brief Sector Complete Interrupt disable */
    constexpr std::uint32_t FMC_CSQIER_SCIE_B_0x0 = 0;
        /** @brief Sector Complete Interrupt enable */
    constexpr std::uint32_t FMC_CSQIER_SCIE_B_0x1 = 1;

    /** @brief Sector Error interrupt enable */
    using FMC_CSQIER_SEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sector Error Interrupt disable (value: 0)
     *          - B_0x1: Sector Error Interrupt enable (value: 1)
     */
        /** @brief Sector Error Interrupt disable */
    constexpr std::uint32_t FMC_CSQIER_SEIE_B_0x0 = 0;
        /** @brief Sector Error Interrupt enable */
    constexpr std::uint32_t FMC_CSQIER_SEIE_B_0x1 = 1;

    /** @brief Sector Uncorrectable Error interrupt enable */
    using FMC_CSQIER_SUEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command Transfer Complete Interrupt disable (value: 0)
     *          - B_0x1: Command Transfer Complete Interrupt enable (value: 1)
     */
        /** @brief Command Transfer Complete Interrupt disable */
    constexpr std::uint32_t FMC_CSQIER_SUEIE_B_0x0 = 0;
        /** @brief Command Transfer Complete Interrupt enable */
    constexpr std::uint32_t FMC_CSQIER_SUEIE_B_0x1 = 1;

    /** @brief Command Transfer Complete interrupt enable */
    using FMC_CSQIER_CMDTCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command Transfer Complete Interrupt disable (value: 0)
     *          - B_0x1: Command Transfer Complete Interrupt enable (value: 1)
     */
        /** @brief Command Transfer Complete Interrupt disable */
    constexpr std::uint32_t FMC_CSQIER_CMDTCIE_B_0x0 = 0;
        /** @brief Command Transfer Complete Interrupt enable */
    constexpr std::uint32_t FMC_CSQIER_CMDTCIE_B_0x1 = 1;

    /** @brief FMC NAND command sequencer interrupt status register */
    using FMC_CSQISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer Complete flag */
    using FMC_CSQISR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sector Complete flag */
    using FMC_CSQISR_SCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sector Error flag */
    using FMC_CSQISR_SEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sector Uncorrectable Error flag */
    using FMC_CSQISR_SUEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command Transfer Complete flag */
    using FMC_CSQISR_CMDTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC NAND command sequencer interrupt clear register */
    using FMC_CSQICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Transfer Complete flag */
    using FMC_CSQICR_CTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Sector Complete flag */
    using FMC_CSQICR_CSCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Sector Error flag */
    using FMC_CSQICR_CSEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Sector uncorrectable Error flag */
    using FMC_CSQICR_CSUEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Command Transfer Complete flag */
    using FMC_CSQICR_CCMDTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC command sequencer error mapping status register */
    using FMC_CSQEMSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sector Error mapping */
    using FMC_CSQEMSR_SEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC BCH interrupt enable register */
    using FMC_BCHIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decoder Uncorrectable Errors Interrupt enable */
    using FMC_BCHIER_DUEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decoder Uncorrectable Errors Interrupt disable (value: 0)
     *          - B_0x1: Decoder Uncorrectable Errors Interrupt enable (value: 1)
     */
        /** @brief Decoder Uncorrectable Errors Interrupt disable */
    constexpr std::uint32_t FMC_BCHIER_DUEIE_B_0x0 = 0;
        /** @brief Decoder Uncorrectable Errors Interrupt enable */
    constexpr std::uint32_t FMC_BCHIER_DUEIE_B_0x1 = 1;

    /** @brief Decoder Error Ready Interrupt enable */
    using FMC_BCHIER_DERIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decoder Error Ready Interrupt disable (value: 0)
     *          - B_0x1: Decoder Error Ready Interrupt enable (value: 1)
     */
        /** @brief Decoder Error Ready Interrupt disable */
    constexpr std::uint32_t FMC_BCHIER_DERIE_B_0x0 = 0;
        /** @brief Decoder Error Ready Interrupt enable */
    constexpr std::uint32_t FMC_BCHIER_DERIE_B_0x1 = 1;

    /** @brief Decoder Error Found Interrupt enable */
    using FMC_BCHIER_DEFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decoder Error Found Interrupt disable (value: 0)
     *          - B_0x1: Decoder Error Found Interrupt enable (value: 1)
     */
        /** @brief Decoder Error Found Interrupt disable */
    constexpr std::uint32_t FMC_BCHIER_DEFIE_B_0x0 = 0;
        /** @brief Decoder Error Found Interrupt enable */
    constexpr std::uint32_t FMC_BCHIER_DEFIE_B_0x1 = 1;

    /** @brief Decoder Syndrome Ready Interrupt enable */
    using FMC_BCHIER_DSRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decoder Syndrome Ready Interrupt disable (value: 0)
     *          - B_0x1: Decoder Syndrome Ready Interrupt enable (value: 1)
     */
        /** @brief Decoder Syndrome Ready Interrupt disable */
    constexpr std::uint32_t FMC_BCHIER_DSRIE_B_0x0 = 0;
        /** @brief Decoder Syndrome Ready Interrupt enable */
    constexpr std::uint32_t FMC_BCHIER_DSRIE_B_0x1 = 1;

    /** @brief Decoder Parity Bits Ready Interrupt enable */
    using FMC_BCHIER_EPBRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decoder Parity Bits Ready Interrupt disable (value: 0)
     *          - B_0x1: Decoder Parity Bits Ready Interrupt enable (value: 1)
     */
        /** @brief Decoder Parity Bits Ready Interrupt disable */
    constexpr std::uint32_t FMC_BCHIER_EPBRIE_B_0x0 = 0;
        /** @brief Decoder Parity Bits Ready Interrupt enable */
    constexpr std::uint32_t FMC_BCHIER_EPBRIE_B_0x1 = 1;

    /** @brief FMC BCH interrupt and status register */
    using FMC_BCHISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decoder Uncorrectable Errors flag */
    using FMC_BCHISR_DUEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decoder Error Ready flag */
    using FMC_BCHISR_DERF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decoder Error Found flag */
    using FMC_BCHISR_DEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decoder Syndrome Ready flag */
    using FMC_BCHISR_DSRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Encoder Parity Bits Ready flag */
    using FMC_BCHISR_EPBRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC BCH interrupt clear register */
    using FMC_BCHICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x258, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Decoder Uncorrectable Error flag */
    using FMC_BCHICR_CDUEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Decoder Error ready flag */
    using FMC_BCHICR_CDERF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Decoder Error Found flag */
    using FMC_BCHICR_CDEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Decoder Syndrome Ready flag */
    using FMC_BCHICR_CDSRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Encoder Parity Bits Ready flag */
    using FMC_BCHICR_CEPBRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC BCH parity bits register 1 */
    using FMC_BCHPBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BCH parity bits */
    using FMC_BCHPBR1_BCHPB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC BCH parity bits register 2 */
    using FMC_BCHPBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BCH parity bits */
    using FMC_BCHPBR2_BCHPB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC BCH parity bits register 3 */
    using FMC_BCHPBR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x268, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BCH parity bits */
    using FMC_BCHPBR3_BCHPB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC BCH parity bits register 4 */
    using FMC_BCHPBR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BCH parity bits */
    using FMC_BCHPBR4_BCHPB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC BCH decoder status register 0 */
    using FMC_BCHDSR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x27C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decoder uncorrectable error */
    using FMC_BCHDSR0_DUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decoder error found */
    using FMC_BCHDSR0_DEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decoder error number */
    using FMC_BCHDSR0_DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC BCH decoder status register for memory region 1 */
    using FMC_BCHDSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error bit position for error number 1 */
    using FMC_BCHDSR1_EBP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error bit position for error number 2 */
    using FMC_BCHDSR1_EBP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC BCH decoder status register for memory region 2 */
    using FMC_BCHDSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error bit position for error number 3 */
    using FMC_BCHDSR2_EBP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error bit position for error number 4 */
    using FMC_BCHDSR2_EBP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC BCH decoder status register for memory region 3 */
    using FMC_BCHDSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error bit position for error number 5 */
    using FMC_BCHDSR3_EBP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error bit position for error number 6 */
    using FMC_BCHDSR3_EBP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMC BCH decoder status register for memory region 4 */
    using FMC_BCHDSR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error bit position for error number 7 */
    using FMC_BCHDSR4_EBP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error bit position for error number 8 */
    using FMC_BCHDSR4_EBP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
