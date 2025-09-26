/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H573_FMC_HPP
#define EMBEDDED_PP_STM32H573_FMC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Flexible memory controller */
namespace STM32H573::FMC {

    /** @brief SRAM/NOR-Flash chip-select control register for bank 1 */
    using FMC_BCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory bank enable bit Enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AHB bus. */
    using FMC_BCR1_MBKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding memory bank is disabled. (value: 0)
     *          - B_0x1: Corresponding memory bank is enabled. (value: 1)
     */
        /** @brief Corresponding memory bank is disabled. */
    constexpr std::uint32_t FMC_BCR1_MBKEN_B_0x0 = 0;
        /** @brief Corresponding memory bank is enabled. */
    constexpr std::uint32_t FMC_BCR1_MBKEN_B_0x1 = 1;

    /** @brief Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories: */
    using FMC_BCR1_MUXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Address/data non multiplexed (value: 0)
     *          - B_0x1: Address/data multiplexed on databus (default after reset) (value: 1)
     */
        /** @brief Address/data non multiplexed */
    constexpr std::uint32_t FMC_BCR1_MUXEN_B_0x0 = 0;
        /** @brief Address/data multiplexed on databus (default after reset) */
    constexpr std::uint32_t FMC_BCR1_MUXEN_B_0x1 = 1;

    /** @brief Memory type Defines the type of external memory attached to the corresponding memory bank. */
    using FMC_BCR1_MTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM/FRAM (default after reset for Bank 2...4) (value: 0)
     *          - B_0x1: PSRAM (CRAM) / FRAM (value: 1)
     *          - B_0x2: NOR Flash/OneNAND Flash (default after reset for Bank 1) (value: 2)
     */
        /** @brief SRAM/FRAM (default after reset for Bank 2...4) */
    constexpr std::uint32_t FMC_BCR1_MTYP_B_0x0 = 0;
        /** @brief PSRAM (CRAM) / FRAM */
    constexpr std::uint32_t FMC_BCR1_MTYP_B_0x1 = 1;
        /** @brief NOR Flash/OneNAND Flash (default after reset for Bank 1) */
    constexpr std::uint32_t FMC_BCR1_MTYP_B_0x2 = 2;

    /** @brief Memory data bus width Defines the external memory device width, valid for all type of memories. */
    using FMC_BCR1_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (default after reset) (value: 1)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_BCR1_MWID_B_0x0 = 0;
        /** @brief 16 bits (default after reset) */
    constexpr std::uint32_t FMC_BCR1_MWID_B_0x1 = 1;

    /** @brief Flash access enable Enables NOR Flash memory access operations. */
    using FMC_BCR1_FACCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding NOR Flash memory access is disabled. (value: 0)
     *          - B_0x1: Corresponding NOR Flash memory access is enabled (default after reset). (value: 1)
     */
        /** @brief Corresponding NOR Flash memory access is disabled. */
    constexpr std::uint32_t FMC_BCR1_FACCEN_B_0x0 = 0;
        /** @brief Corresponding NOR Flash memory access is enabled (default after reset). */
    constexpr std::uint32_t FMC_BCR1_FACCEN_B_0x1 = 1;

    /** @brief Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode. */
    using FMC_BCR1_BURSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Burst mode disabled (default after reset). Read accesses are performed in Asynchronous mode. (value: 0)
     *          - B_0x1: Burst mode enable. Read accesses are performed in Synchronous mode. (value: 1)
     */
        /** @brief Burst mode disabled (default after reset). Read accesses are performed in Asynchronous mode. */
    constexpr std::uint32_t FMC_BCR1_BURSTEN_B_0x0 = 0;
        /** @brief Burst mode enable. Read accesses are performed in Synchronous mode. */
    constexpr std::uint32_t FMC_BCR1_BURSTEN_B_0x1 = 1;

    /** @brief Wait signal polarity bit Defines the polarity of the wait signal from memory used for either in Synchronous or Asynchronous mode. */
    using FMC_BCR1_WAITPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT active low (default after reset) (value: 0)
     *          - B_0x1: NWAIT active high (value: 1)
     */
        /** @brief NWAIT active low (default after reset) */
    constexpr std::uint32_t FMC_BCR1_WAITPOL_B_0x0 = 0;
        /** @brief NWAIT active high */
    constexpr std::uint32_t FMC_BCR1_WAITPOL_B_0x1 = 1;

    /** @brief Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in Synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state: */
    using FMC_BCR1_WAITCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is active one data cycle before wait state (default after reset). (value: 0)
     *          - B_0x1: NWAIT signal is active during wait state (not used for PSRAM). (value: 1)
     */
        /** @brief NWAIT signal is active one data cycle before wait state (default after reset). */
    constexpr std::uint32_t FMC_BCR1_WAITCFG_B_0x0 = 0;
        /** @brief NWAIT signal is active during wait state (not used for PSRAM). */
    constexpr std::uint32_t FMC_BCR1_WAITCFG_B_0x1 = 1;

    /** @brief Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC. */
    using FMC_BCR1_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are disabled in the bank by the FMC, an AHB error is reported. (value: 0)
     *          - B_0x1: Write operations are enabled for the bank by the FMC (default after reset). (value: 1)
     */
        /** @brief Write operations are disabled in the bank by the FMC, an AHB error is reported. */
    constexpr std::uint32_t FMC_BCR1_WREN_B_0x0 = 0;
        /** @brief Write operations are enabled for the bank by the FMC (default after reset). */
    constexpr std::uint32_t FMC_BCR1_WREN_B_0x1 = 1;

    /** @brief Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in Synchronous mode. */
    using FMC_BCR1_WAITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period). (value: 0)
     *          - B_0x1: NWAIT signal is enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset). (value: 1)
     */
        /** @brief NWAIT signal is disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period). */
    constexpr std::uint32_t FMC_BCR1_WAITEN_B_0x0 = 0;
        /** @brief NWAIT signal is enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset). */
    constexpr std::uint32_t FMC_BCR1_WAITEN_B_0x1 = 1;

    /** @brief Extended mode enable This bit enables the FMC to program the write timings for non multiplexed asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the Extended mode is disabled, the FMC can operate in mode 1 or mode 2 as follows: Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP = 0x0 or 0x01) Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10). */
    using FMC_BCR1_EXTMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: values inside FMC_BWTR register are not taken into account (default after reset) (value: 0)
     *          - B_0x1: values inside FMC_BWTR register are taken into account (value: 1)
     */
        /** @brief values inside FMC_BWTR register are not taken into account (default after reset) */
    constexpr std::uint32_t FMC_BCR1_EXTMOD_B_0x0 = 0;
        /** @brief values inside FMC_BWTR register are taken into account */
    constexpr std::uint32_t FMC_BCR1_EXTMOD_B_0x1 = 1;

    /** @brief Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol. */
    using FMC_BCR1_ASYNCWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is not taken in to account when running an asynchronous protocol (default after reset). (value: 0)
     *          - B_0x1: NWAIT signal is taken in to account when running an asynchronous protocol. (value: 1)
     */
        /** @brief NWAIT signal is not taken in to account when running an asynchronous protocol (default after reset). */
    constexpr std::uint32_t FMC_BCR1_ASYNCWAIT_B_0x0 = 0;
        /** @brief NWAIT signal is taken in to account when running an asynchronous protocol. */
    constexpr std::uint32_t FMC_BCR1_ASYNCWAIT_B_0x1 = 1;

    /** @brief CRAM page size These are used for CellularRAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Others: reserved */
    using FMC_BCR1_CPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No burst split when crossing page boundary (default after reset) (value: 0)
     *          - B_0x1: 128 bytes (value: 1)
     *          - B_0x2: 256 bytes (value: 2)
     *          - B_0x3: 512 bytes (value: 3)
     *          - B_0x4: 1024 bytes (value: 4)
     */
        /** @brief No burst split when crossing page boundary (default after reset) */
    constexpr std::uint32_t FMC_BCR1_CPSIZE_B_0x0 = 0;
        /** @brief 128 bytes */
    constexpr std::uint32_t FMC_BCR1_CPSIZE_B_0x1 = 1;
        /** @brief 256 bytes */
    constexpr std::uint32_t FMC_BCR1_CPSIZE_B_0x2 = 2;
        /** @brief 512 bytes */
    constexpr std::uint32_t FMC_BCR1_CPSIZE_B_0x3 = 3;
        /** @brief 1024 bytes */
    constexpr std::uint32_t FMC_BCR1_CPSIZE_B_0x4 = 4;

    /** @brief Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register. */
    using FMC_BCR1_CBURSTRW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are always performed in Asynchronous mode. (value: 0)
     *          - B_0x1: Write operations are performed in Synchronous mode. (value: 1)
     */
        /** @brief Write operations are always performed in Asynchronous mode. */
    constexpr std::uint32_t FMC_BCR1_CBURSTRW_B_0x0 = 0;
        /** @brief Write operations are performed in Synchronous mode. */
    constexpr std::uint32_t FMC_BCR1_CBURSTRW_B_0x1 = 1;

    /** @brief Continuous clock enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in Synchronous mode to generate the FMC_CLK continuous clock. Note: If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is don't care. Note: If the Synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.) */
    using FMC_BCR1_CCLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The FMC_CLK is only generated during the synchronous memory access (read/write transaction). The FMC_CLK clock ratio is specified by the programmed CLKDIV value in the FMC_BCRx register (default after reset). (value: 0)
     *          - B_0x1: The FMC_CLK is generated continuously during asynchronous and synchronous access. The FMC_CLK clock is activated when the CCLKEN is set. (value: 1)
     */
        /** @brief The FMC_CLK is only generated during the synchronous memory access (read/write transaction). The FMC_CLK clock ratio is specified by the programmed CLKDIV value in the FMC_BCRx register (default after reset). */
    constexpr std::uint32_t FMC_BCR1_CCLKEN_B_0x0 = 0;
        /** @brief The FMC_CLK is generated continuously during asynchronous and synchronous access. The FMC_CLK clock is activated when the CCLKEN is set. */
    constexpr std::uint32_t FMC_BCR1_CCLKEN_B_0x1 = 1;

    /** @brief Write FIFO disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. */
    using FMC_BCR1_WFDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write FIFO enabled (Default after reset) (value: 0)
     *          - B_0x1: Write FIFO disabled (value: 1)
     */
        /** @brief Write FIFO enabled (Default after reset) */
    constexpr std::uint32_t FMC_BCR1_WFDIS_B_0x0 = 0;
        /** @brief Write FIFO disabled */
    constexpr std::uint32_t FMC_BCR1_WFDIS_B_0x1 = 1;

    /** @brief Byte lane (NBL) setup These bits configure the NBL setup timing from NBLx low to chip select NEx low. */
    using FMC_BCR1_NBLSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NBL setup time is 0 AHB clock cycle (value: 0)
     *          - B_0x1: NBL setup time is 1 AHB clock cycle (value: 1)
     *          - B_0x2: NBL setup time is 2 AHB clock cycles (value: 2)
     *          - B_0x3: NBL setup time is 3 AHB clock cycles (value: 3)
     */
        /** @brief NBL setup time is 0 AHB clock cycle */
    constexpr std::uint32_t FMC_BCR1_NBLSET_B_0x0 = 0;
        /** @brief NBL setup time is 1 AHB clock cycle */
    constexpr std::uint32_t FMC_BCR1_NBLSET_B_0x1 = 1;
        /** @brief NBL setup time is 2 AHB clock cycles */
    constexpr std::uint32_t FMC_BCR1_NBLSET_B_0x2 = 2;
        /** @brief NBL setup time is 3 AHB clock cycles */
    constexpr std::uint32_t FMC_BCR1_NBLSET_B_0x3 = 3;

    /** @brief FMC controller enable This bit enables or disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. */
    using FMC_BCR1_FMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable the FMC controller (value: 0)
     *          - B_0x1: Enable the FMC controller (value: 1)
     */
        /** @brief Disable the FMC controller */
    constexpr std::uint32_t FMC_BCR1_FMCEN_B_0x0 = 0;
        /** @brief Enable the FMC controller */
    constexpr std::uint32_t FMC_BCR1_FMCEN_B_0x1 = 1;

    /** @brief SRAM/NOR-Flash chip-select timing register for bank 1 */
    using FMC_BTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure 21 to Figure 33), used in SRAMs, ROMs, asynchronous NOR Flash and PSRAM: ... For each access mode address setup phase duration, refer to the respective figure (Figure 21 to Figure 33). Note: In synchronous accesses, this value is don't care. Note: In Muxed mode or mode D, the minimum value for ADDSET is 1. Note: In mode 1 and PSRAM memory, the minimum value for ADDSET is 1. */
    using FMC_BTR1_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 HCLK clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR1_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure 21 to Figure 33), used in mode D or multiplexed accesses: ... For each access mode address-hold phase duration, refer to the respective figure (Figure 21 to Figure 33). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration. */
    using FMC_BTR1_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration =1 HCLK clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 HCLK clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration =1 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR1_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR1_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure 21 to Figure 33), used in asynchronous accesses: ... For each memory type and access mode data-phase duration, refer to the respective figure (Figure 21 to Figure 33). Example: Mode 1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 HCLK clock cycles. Note: In synchronous accesses, this value is don't care. */
    using FMC_BTR1_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 HCLK clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 HCLK clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 HCLK clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 HCLK clock cycles */
    constexpr std::uint32_t FMC_BTR1_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 HCLK clock cycles */
    constexpr std::uint32_t FMC_BTR1_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration These bits are written by software to add a delay at the end of current read or write transaction to next transaction on the same bank. This delay allows to match the minimum time between consecutive transactions (t sub EHEL /sub from NEx high to NEx low) and the maximum time needed by the memory to free the data bus after a read access (t sub EHQZ /sub , chip enable high to output Hi-Z). This delay is recommended for mode D and muxed mode. For non-muxed memory, the bus turnaround delay can be set to minimum value. (BUSTURN + 1)HCLK period greater than or equal max(t sub EHEL /sub min, t sub EHQZ /sub max) For FRAM memories, the bus turnaround delay should be configured to match the minimum tPC (precharge time) timings. The bus turnaround delay is inserted between any consecutive transactions on the same bank (read/read, write/write, read/write and write/read) to match the tPC memory timing. The chip select is toggling between any consecutive accesses. (BUSTURN + 1)HCLK period greater than or equal t sub PC /sub min ... */
    using FMC_BTR1_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 HCLK clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 HCLK clock cycle added */
    constexpr std::uint32_t FMC_BTR1_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_BUSTURN_B_0xF = 15;

    /** @brief Clock divide ratio (for FMC_CLK signal) Defines the period of FMC_CLK clock output signal, expressed in number of HCLK cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is don't care. Note: Refer to Section 5.6.5: Synchronous transactions for FMC_CLK divider ratio formula) */
    using FMC_BTR1_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC_CLK period= 1x HCLK period (value: 0)
     *          - B_0x1: FMC_CLK period = 2 HCLK periods (value: 1)
     *          - B_0x2: FMC_CLK period = 3 HCLK periods (value: 2)
     *          - B_0xF: FMC_CLK period = 16 HCLK periods (default value after reset) (value: 15)
     */
        /** @brief FMC_CLK period= 1x HCLK period */
    constexpr std::uint32_t FMC_BTR1_CLKDIV_B_0x0 = 0;
        /** @brief FMC_CLK period = 2 HCLK periods */
    constexpr std::uint32_t FMC_BTR1_CLKDIV_B_0x1 = 1;
        /** @brief FMC_CLK period = 3 HCLK periods */
    constexpr std::uint32_t FMC_BTR1_CLKDIV_B_0x2 = 2;
        /** @brief FMC_CLK period = 16 HCLK periods (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_CLKDIV_B_0xF = 15;

    /** @brief (see note below bit descriptions): Data latency for synchronous memory For synchronous access with read/write Burst mode enabled (BURSTEN / CBURSTRW bits set), defines the number of memory clock cycles (+2) to issue to the memory before reading/writing the first data: This timing parameter is not expressed in HCLK periods, but in FMC_CLK periods. For asynchronous access, this value is don't care. */
    using FMC_BTR1_DATLAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data latency of 2 CLK clock cycles for first burst access (value: 0)
     *          - B_0xF: Data latency of 17 CLK clock cycles for first burst access (default value after reset) (value: 15)
     */
        /** @brief Data latency of 2 CLK clock cycles for first burst access */
    constexpr std::uint32_t FMC_BTR1_DATLAT_B_0x0 = 0;
        /** @brief Data latency of 17 CLK clock cycles for first burst access (default value after reset) */
    constexpr std::uint32_t FMC_BTR1_DATLAT_B_0xF = 15;

    /** @brief Access mode Specifies the asynchronous access modes as shown in the timing diagrams. These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1. */
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

    /** @brief Data hold phase duration These bits are written by software to define the duration of the data hold phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous accesses: For read accesses For write accesses */
    using FMC_BTR1_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 HCLK clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 HCLK clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 HCLK clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 HCLK clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 HCLK clock cycle (default) */
    constexpr std::uint32_t FMC_BTR1_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR1_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR1_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR1_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR-Flash chip-select control register for bank 2 */
    using FMC_BCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory bank enable bit Enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AHB bus. */
    using FMC_BCR2_MBKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding memory bank is disabled. (value: 0)
     *          - B_0x1: Corresponding memory bank is enabled. (value: 1)
     */
        /** @brief Corresponding memory bank is disabled. */
    constexpr std::uint32_t FMC_BCR2_MBKEN_B_0x0 = 0;
        /** @brief Corresponding memory bank is enabled. */
    constexpr std::uint32_t FMC_BCR2_MBKEN_B_0x1 = 1;

    /** @brief Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories: */
    using FMC_BCR2_MUXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Address/data non multiplexed (value: 0)
     *          - B_0x1: Address/data multiplexed on databus (default after reset) (value: 1)
     */
        /** @brief Address/data non multiplexed */
    constexpr std::uint32_t FMC_BCR2_MUXEN_B_0x0 = 0;
        /** @brief Address/data multiplexed on databus (default after reset) */
    constexpr std::uint32_t FMC_BCR2_MUXEN_B_0x1 = 1;

    /** @brief Memory type Defines the type of external memory attached to the corresponding memory bank. */
    using FMC_BCR2_MTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM/FRAM (default after reset for Bank 2...4) (value: 0)
     *          - B_0x1: PSRAM (CRAM) / FRAM (value: 1)
     *          - B_0x2: NOR Flash/OneNAND Flash (default after reset for Bank 1) (value: 2)
     */
        /** @brief SRAM/FRAM (default after reset for Bank 2...4) */
    constexpr std::uint32_t FMC_BCR2_MTYP_B_0x0 = 0;
        /** @brief PSRAM (CRAM) / FRAM */
    constexpr std::uint32_t FMC_BCR2_MTYP_B_0x1 = 1;
        /** @brief NOR Flash/OneNAND Flash (default after reset for Bank 1) */
    constexpr std::uint32_t FMC_BCR2_MTYP_B_0x2 = 2;

    /** @brief Memory data bus width Defines the external memory device width, valid for all type of memories. */
    using FMC_BCR2_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (default after reset) (value: 1)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_BCR2_MWID_B_0x0 = 0;
        /** @brief 16 bits (default after reset) */
    constexpr std::uint32_t FMC_BCR2_MWID_B_0x1 = 1;

    /** @brief Flash access enable Enables NOR Flash memory access operations. */
    using FMC_BCR2_FACCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding NOR Flash memory access is disabled. (value: 0)
     *          - B_0x1: Corresponding NOR Flash memory access is enabled (default after reset). (value: 1)
     */
        /** @brief Corresponding NOR Flash memory access is disabled. */
    constexpr std::uint32_t FMC_BCR2_FACCEN_B_0x0 = 0;
        /** @brief Corresponding NOR Flash memory access is enabled (default after reset). */
    constexpr std::uint32_t FMC_BCR2_FACCEN_B_0x1 = 1;

    /** @brief Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode. */
    using FMC_BCR2_BURSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Burst mode disabled (default after reset). Read accesses are performed in Asynchronous mode. (value: 0)
     *          - B_0x1: Burst mode enable. Read accesses are performed in Synchronous mode. (value: 1)
     */
        /** @brief Burst mode disabled (default after reset). Read accesses are performed in Asynchronous mode. */
    constexpr std::uint32_t FMC_BCR2_BURSTEN_B_0x0 = 0;
        /** @brief Burst mode enable. Read accesses are performed in Synchronous mode. */
    constexpr std::uint32_t FMC_BCR2_BURSTEN_B_0x1 = 1;

    /** @brief Wait signal polarity bit Defines the polarity of the wait signal from memory used for either in Synchronous or Asynchronous mode. */
    using FMC_BCR2_WAITPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT active low (default after reset) (value: 0)
     *          - B_0x1: NWAIT active high (value: 1)
     */
        /** @brief NWAIT active low (default after reset) */
    constexpr std::uint32_t FMC_BCR2_WAITPOL_B_0x0 = 0;
        /** @brief NWAIT active high */
    constexpr std::uint32_t FMC_BCR2_WAITPOL_B_0x1 = 1;

    /** @brief Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in Synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state: */
    using FMC_BCR2_WAITCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is active one data cycle before wait state (default after reset). (value: 0)
     *          - B_0x1: NWAIT signal is active during wait state (not used for PSRAM). (value: 1)
     */
        /** @brief NWAIT signal is active one data cycle before wait state (default after reset). */
    constexpr std::uint32_t FMC_BCR2_WAITCFG_B_0x0 = 0;
        /** @brief NWAIT signal is active during wait state (not used for PSRAM). */
    constexpr std::uint32_t FMC_BCR2_WAITCFG_B_0x1 = 1;

    /** @brief Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC. */
    using FMC_BCR2_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are disabled in the bank by the FMC, an AHB error is reported. (value: 0)
     *          - B_0x1: Write operations are enabled for the bank by the FMC (default after reset). (value: 1)
     */
        /** @brief Write operations are disabled in the bank by the FMC, an AHB error is reported. */
    constexpr std::uint32_t FMC_BCR2_WREN_B_0x0 = 0;
        /** @brief Write operations are enabled for the bank by the FMC (default after reset). */
    constexpr std::uint32_t FMC_BCR2_WREN_B_0x1 = 1;

    /** @brief Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in Synchronous mode. */
    using FMC_BCR2_WAITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period). (value: 0)
     *          - B_0x1: NWAIT signal is enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset). (value: 1)
     */
        /** @brief NWAIT signal is disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period). */
    constexpr std::uint32_t FMC_BCR2_WAITEN_B_0x0 = 0;
        /** @brief NWAIT signal is enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset). */
    constexpr std::uint32_t FMC_BCR2_WAITEN_B_0x1 = 1;

    /** @brief Extended mode enable This bit enables the FMC to program the write timings for non multiplexed asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the Extended mode is disabled, the FMC can operate in mode 1 or mode 2 as follows: Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP = 0x0 or 0x01) Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10). */
    using FMC_BCR2_EXTMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: values inside FMC_BWTR register are not taken into account (default after reset) (value: 0)
     *          - B_0x1: values inside FMC_BWTR register are taken into account (value: 1)
     */
        /** @brief values inside FMC_BWTR register are not taken into account (default after reset) */
    constexpr std::uint32_t FMC_BCR2_EXTMOD_B_0x0 = 0;
        /** @brief values inside FMC_BWTR register are taken into account */
    constexpr std::uint32_t FMC_BCR2_EXTMOD_B_0x1 = 1;

    /** @brief Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol. */
    using FMC_BCR2_ASYNCWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is not taken in to account when running an asynchronous protocol (default after reset). (value: 0)
     *          - B_0x1: NWAIT signal is taken in to account when running an asynchronous protocol. (value: 1)
     */
        /** @brief NWAIT signal is not taken in to account when running an asynchronous protocol (default after reset). */
    constexpr std::uint32_t FMC_BCR2_ASYNCWAIT_B_0x0 = 0;
        /** @brief NWAIT signal is taken in to account when running an asynchronous protocol. */
    constexpr std::uint32_t FMC_BCR2_ASYNCWAIT_B_0x1 = 1;

    /** @brief CRAM page size These are used for CellularRAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Others: reserved */
    using FMC_BCR2_CPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No burst split when crossing page boundary (default after reset) (value: 0)
     *          - B_0x1: 128 bytes (value: 1)
     *          - B_0x2: 256 bytes (value: 2)
     *          - B_0x3: 512 bytes (value: 3)
     *          - B_0x4: 1024 bytes (value: 4)
     */
        /** @brief No burst split when crossing page boundary (default after reset) */
    constexpr std::uint32_t FMC_BCR2_CPSIZE_B_0x0 = 0;
        /** @brief 128 bytes */
    constexpr std::uint32_t FMC_BCR2_CPSIZE_B_0x1 = 1;
        /** @brief 256 bytes */
    constexpr std::uint32_t FMC_BCR2_CPSIZE_B_0x2 = 2;
        /** @brief 512 bytes */
    constexpr std::uint32_t FMC_BCR2_CPSIZE_B_0x3 = 3;
        /** @brief 1024 bytes */
    constexpr std::uint32_t FMC_BCR2_CPSIZE_B_0x4 = 4;

    /** @brief Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register. */
    using FMC_BCR2_CBURSTRW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are always performed in Asynchronous mode. (value: 0)
     *          - B_0x1: Write operations are performed in Synchronous mode. (value: 1)
     */
        /** @brief Write operations are always performed in Asynchronous mode. */
    constexpr std::uint32_t FMC_BCR2_CBURSTRW_B_0x0 = 0;
        /** @brief Write operations are performed in Synchronous mode. */
    constexpr std::uint32_t FMC_BCR2_CBURSTRW_B_0x1 = 1;

    /** @brief Continuous clock enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in Synchronous mode to generate the FMC_CLK continuous clock. Note: If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is don't care. Note: If the Synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.) */
    using FMC_BCR2_CCLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The FMC_CLK is only generated during the synchronous memory access (read/write transaction). The FMC_CLK clock ratio is specified by the programmed CLKDIV value in the FMC_BCRx register (default after reset). (value: 0)
     *          - B_0x1: The FMC_CLK is generated continuously during asynchronous and synchronous access. The FMC_CLK clock is activated when the CCLKEN is set. (value: 1)
     */
        /** @brief The FMC_CLK is only generated during the synchronous memory access (read/write transaction). The FMC_CLK clock ratio is specified by the programmed CLKDIV value in the FMC_BCRx register (default after reset). */
    constexpr std::uint32_t FMC_BCR2_CCLKEN_B_0x0 = 0;
        /** @brief The FMC_CLK is generated continuously during asynchronous and synchronous access. The FMC_CLK clock is activated when the CCLKEN is set. */
    constexpr std::uint32_t FMC_BCR2_CCLKEN_B_0x1 = 1;

    /** @brief Write FIFO disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. */
    using FMC_BCR2_WFDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write FIFO enabled (Default after reset) (value: 0)
     *          - B_0x1: Write FIFO disabled (value: 1)
     */
        /** @brief Write FIFO enabled (Default after reset) */
    constexpr std::uint32_t FMC_BCR2_WFDIS_B_0x0 = 0;
        /** @brief Write FIFO disabled */
    constexpr std::uint32_t FMC_BCR2_WFDIS_B_0x1 = 1;

    /** @brief Byte lane (NBL) setup These bits configure the NBL setup timing from NBLx low to chip select NEx low. */
    using FMC_BCR2_NBLSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NBL setup time is 0 AHB clock cycle (value: 0)
     *          - B_0x1: NBL setup time is 1 AHB clock cycle (value: 1)
     *          - B_0x2: NBL setup time is 2 AHB clock cycles (value: 2)
     *          - B_0x3: NBL setup time is 3 AHB clock cycles (value: 3)
     */
        /** @brief NBL setup time is 0 AHB clock cycle */
    constexpr std::uint32_t FMC_BCR2_NBLSET_B_0x0 = 0;
        /** @brief NBL setup time is 1 AHB clock cycle */
    constexpr std::uint32_t FMC_BCR2_NBLSET_B_0x1 = 1;
        /** @brief NBL setup time is 2 AHB clock cycles */
    constexpr std::uint32_t FMC_BCR2_NBLSET_B_0x2 = 2;
        /** @brief NBL setup time is 3 AHB clock cycles */
    constexpr std::uint32_t FMC_BCR2_NBLSET_B_0x3 = 3;

    /** @brief FMC controller enable This bit enables or disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. */
    using FMC_BCR2_FMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable the FMC controller (value: 0)
     *          - B_0x1: Enable the FMC controller (value: 1)
     */
        /** @brief Disable the FMC controller */
    constexpr std::uint32_t FMC_BCR2_FMCEN_B_0x0 = 0;
        /** @brief Enable the FMC controller */
    constexpr std::uint32_t FMC_BCR2_FMCEN_B_0x1 = 1;

    /** @brief SRAM/NOR-Flash chip-select timing register for bank 2 */
    using FMC_BTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure 21 to Figure 33), used in SRAMs, ROMs, asynchronous NOR Flash and PSRAM: ... For each access mode address setup phase duration, refer to the respective figure (Figure 21 to Figure 33). Note: In synchronous accesses, this value is don't care. Note: In Muxed mode or mode D, the minimum value for ADDSET is 1. Note: In mode 1 and PSRAM memory, the minimum value for ADDSET is 1. */
    using FMC_BTR2_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 HCLK clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR2_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure 21 to Figure 33), used in mode D or multiplexed accesses: ... For each access mode address-hold phase duration, refer to the respective figure (Figure 21 to Figure 33). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration. */
    using FMC_BTR2_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration =1 HCLK clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 HCLK clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration =1 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR2_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR2_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure 21 to Figure 33), used in asynchronous accesses: ... For each memory type and access mode data-phase duration, refer to the respective figure (Figure 21 to Figure 33). Example: Mode 1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 HCLK clock cycles. Note: In synchronous accesses, this value is don't care. */
    using FMC_BTR2_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 HCLK clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 HCLK clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 HCLK clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 HCLK clock cycles */
    constexpr std::uint32_t FMC_BTR2_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 HCLK clock cycles */
    constexpr std::uint32_t FMC_BTR2_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration These bits are written by software to add a delay at the end of current read or write transaction to next transaction on the same bank. This delay allows to match the minimum time between consecutive transactions (t sub EHEL /sub from NEx high to NEx low) and the maximum time needed by the memory to free the data bus after a read access (t sub EHQZ /sub , chip enable high to output Hi-Z). This delay is recommended for mode D and muxed mode. For non-muxed memory, the bus turnaround delay can be set to minimum value. (BUSTURN + 1)HCLK period greater than or equal max(t sub EHEL /sub min, t sub EHQZ /sub max) For FRAM memories, the bus turnaround delay should be configured to match the minimum tPC (precharge time) timings. The bus turnaround delay is inserted between any consecutive transactions on the same bank (read/read, write/write, read/write and write/read) to match the tPC memory timing. The chip select is toggling between any consecutive accesses. (BUSTURN + 1)HCLK period greater than or equal t sub PC /sub min ... */
    using FMC_BTR2_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 HCLK clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 HCLK clock cycle added */
    constexpr std::uint32_t FMC_BTR2_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_BUSTURN_B_0xF = 15;

    /** @brief Clock divide ratio (for FMC_CLK signal) Defines the period of FMC_CLK clock output signal, expressed in number of HCLK cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is don't care. Note: Refer to Section 5.6.5: Synchronous transactions for FMC_CLK divider ratio formula) */
    using FMC_BTR2_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC_CLK period= 1x HCLK period (value: 0)
     *          - B_0x1: FMC_CLK period = 2 HCLK periods (value: 1)
     *          - B_0x2: FMC_CLK period = 3 HCLK periods (value: 2)
     *          - B_0xF: FMC_CLK period = 16 HCLK periods (default value after reset) (value: 15)
     */
        /** @brief FMC_CLK period= 1x HCLK period */
    constexpr std::uint32_t FMC_BTR2_CLKDIV_B_0x0 = 0;
        /** @brief FMC_CLK period = 2 HCLK periods */
    constexpr std::uint32_t FMC_BTR2_CLKDIV_B_0x1 = 1;
        /** @brief FMC_CLK period = 3 HCLK periods */
    constexpr std::uint32_t FMC_BTR2_CLKDIV_B_0x2 = 2;
        /** @brief FMC_CLK period = 16 HCLK periods (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_CLKDIV_B_0xF = 15;

    /** @brief (see note below bit descriptions): Data latency for synchronous memory For synchronous access with read/write Burst mode enabled (BURSTEN / CBURSTRW bits set), defines the number of memory clock cycles (+2) to issue to the memory before reading/writing the first data: This timing parameter is not expressed in HCLK periods, but in FMC_CLK periods. For asynchronous access, this value is don't care. */
    using FMC_BTR2_DATLAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data latency of 2 CLK clock cycles for first burst access (value: 0)
     *          - B_0xF: Data latency of 17 CLK clock cycles for first burst access (default value after reset) (value: 15)
     */
        /** @brief Data latency of 2 CLK clock cycles for first burst access */
    constexpr std::uint32_t FMC_BTR2_DATLAT_B_0x0 = 0;
        /** @brief Data latency of 17 CLK clock cycles for first burst access (default value after reset) */
    constexpr std::uint32_t FMC_BTR2_DATLAT_B_0xF = 15;

    /** @brief Access mode Specifies the asynchronous access modes as shown in the timing diagrams. These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1. */
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

    /** @brief Data hold phase duration These bits are written by software to define the duration of the data hold phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous accesses: For read accesses For write accesses */
    using FMC_BTR2_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 HCLK clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 HCLK clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 HCLK clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 HCLK clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 HCLK clock cycle (default) */
    constexpr std::uint32_t FMC_BTR2_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR2_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR2_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR2_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR-Flash chip-select control register for bank 3 */
    using FMC_BCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory bank enable bit Enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AHB bus. */
    using FMC_BCR3_MBKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding memory bank is disabled. (value: 0)
     *          - B_0x1: Corresponding memory bank is enabled. (value: 1)
     */
        /** @brief Corresponding memory bank is disabled. */
    constexpr std::uint32_t FMC_BCR3_MBKEN_B_0x0 = 0;
        /** @brief Corresponding memory bank is enabled. */
    constexpr std::uint32_t FMC_BCR3_MBKEN_B_0x1 = 1;

    /** @brief Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories: */
    using FMC_BCR3_MUXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Address/data non multiplexed (value: 0)
     *          - B_0x1: Address/data multiplexed on databus (default after reset) (value: 1)
     */
        /** @brief Address/data non multiplexed */
    constexpr std::uint32_t FMC_BCR3_MUXEN_B_0x0 = 0;
        /** @brief Address/data multiplexed on databus (default after reset) */
    constexpr std::uint32_t FMC_BCR3_MUXEN_B_0x1 = 1;

    /** @brief Memory type Defines the type of external memory attached to the corresponding memory bank. */
    using FMC_BCR3_MTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM/FRAM (default after reset for Bank 2...4) (value: 0)
     *          - B_0x1: PSRAM (CRAM) / FRAM (value: 1)
     *          - B_0x2: NOR Flash/OneNAND Flash (default after reset for Bank 1) (value: 2)
     */
        /** @brief SRAM/FRAM (default after reset for Bank 2...4) */
    constexpr std::uint32_t FMC_BCR3_MTYP_B_0x0 = 0;
        /** @brief PSRAM (CRAM) / FRAM */
    constexpr std::uint32_t FMC_BCR3_MTYP_B_0x1 = 1;
        /** @brief NOR Flash/OneNAND Flash (default after reset for Bank 1) */
    constexpr std::uint32_t FMC_BCR3_MTYP_B_0x2 = 2;

    /** @brief Memory data bus width Defines the external memory device width, valid for all type of memories. */
    using FMC_BCR3_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (default after reset) (value: 1)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_BCR3_MWID_B_0x0 = 0;
        /** @brief 16 bits (default after reset) */
    constexpr std::uint32_t FMC_BCR3_MWID_B_0x1 = 1;

    /** @brief Flash access enable Enables NOR Flash memory access operations. */
    using FMC_BCR3_FACCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding NOR Flash memory access is disabled. (value: 0)
     *          - B_0x1: Corresponding NOR Flash memory access is enabled (default after reset). (value: 1)
     */
        /** @brief Corresponding NOR Flash memory access is disabled. */
    constexpr std::uint32_t FMC_BCR3_FACCEN_B_0x0 = 0;
        /** @brief Corresponding NOR Flash memory access is enabled (default after reset). */
    constexpr std::uint32_t FMC_BCR3_FACCEN_B_0x1 = 1;

    /** @brief Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode. */
    using FMC_BCR3_BURSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Burst mode disabled (default after reset). Read accesses are performed in Asynchronous mode. (value: 0)
     *          - B_0x1: Burst mode enable. Read accesses are performed in Synchronous mode. (value: 1)
     */
        /** @brief Burst mode disabled (default after reset). Read accesses are performed in Asynchronous mode. */
    constexpr std::uint32_t FMC_BCR3_BURSTEN_B_0x0 = 0;
        /** @brief Burst mode enable. Read accesses are performed in Synchronous mode. */
    constexpr std::uint32_t FMC_BCR3_BURSTEN_B_0x1 = 1;

    /** @brief Wait signal polarity bit Defines the polarity of the wait signal from memory used for either in Synchronous or Asynchronous mode. */
    using FMC_BCR3_WAITPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT active low (default after reset) (value: 0)
     *          - B_0x1: NWAIT active high (value: 1)
     */
        /** @brief NWAIT active low (default after reset) */
    constexpr std::uint32_t FMC_BCR3_WAITPOL_B_0x0 = 0;
        /** @brief NWAIT active high */
    constexpr std::uint32_t FMC_BCR3_WAITPOL_B_0x1 = 1;

    /** @brief Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in Synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state: */
    using FMC_BCR3_WAITCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is active one data cycle before wait state (default after reset). (value: 0)
     *          - B_0x1: NWAIT signal is active during wait state (not used for PSRAM). (value: 1)
     */
        /** @brief NWAIT signal is active one data cycle before wait state (default after reset). */
    constexpr std::uint32_t FMC_BCR3_WAITCFG_B_0x0 = 0;
        /** @brief NWAIT signal is active during wait state (not used for PSRAM). */
    constexpr std::uint32_t FMC_BCR3_WAITCFG_B_0x1 = 1;

    /** @brief Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC. */
    using FMC_BCR3_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are disabled in the bank by the FMC, an AHB error is reported. (value: 0)
     *          - B_0x1: Write operations are enabled for the bank by the FMC (default after reset). (value: 1)
     */
        /** @brief Write operations are disabled in the bank by the FMC, an AHB error is reported. */
    constexpr std::uint32_t FMC_BCR3_WREN_B_0x0 = 0;
        /** @brief Write operations are enabled for the bank by the FMC (default after reset). */
    constexpr std::uint32_t FMC_BCR3_WREN_B_0x1 = 1;

    /** @brief Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in Synchronous mode. */
    using FMC_BCR3_WAITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period). (value: 0)
     *          - B_0x1: NWAIT signal is enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset). (value: 1)
     */
        /** @brief NWAIT signal is disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period). */
    constexpr std::uint32_t FMC_BCR3_WAITEN_B_0x0 = 0;
        /** @brief NWAIT signal is enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset). */
    constexpr std::uint32_t FMC_BCR3_WAITEN_B_0x1 = 1;

    /** @brief Extended mode enable This bit enables the FMC to program the write timings for non multiplexed asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the Extended mode is disabled, the FMC can operate in mode 1 or mode 2 as follows: Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP = 0x0 or 0x01) Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10). */
    using FMC_BCR3_EXTMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: values inside FMC_BWTR register are not taken into account (default after reset) (value: 0)
     *          - B_0x1: values inside FMC_BWTR register are taken into account (value: 1)
     */
        /** @brief values inside FMC_BWTR register are not taken into account (default after reset) */
    constexpr std::uint32_t FMC_BCR3_EXTMOD_B_0x0 = 0;
        /** @brief values inside FMC_BWTR register are taken into account */
    constexpr std::uint32_t FMC_BCR3_EXTMOD_B_0x1 = 1;

    /** @brief Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol. */
    using FMC_BCR3_ASYNCWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is not taken in to account when running an asynchronous protocol (default after reset). (value: 0)
     *          - B_0x1: NWAIT signal is taken in to account when running an asynchronous protocol. (value: 1)
     */
        /** @brief NWAIT signal is not taken in to account when running an asynchronous protocol (default after reset). */
    constexpr std::uint32_t FMC_BCR3_ASYNCWAIT_B_0x0 = 0;
        /** @brief NWAIT signal is taken in to account when running an asynchronous protocol. */
    constexpr std::uint32_t FMC_BCR3_ASYNCWAIT_B_0x1 = 1;

    /** @brief CRAM page size These are used for CellularRAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Others: reserved */
    using FMC_BCR3_CPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No burst split when crossing page boundary (default after reset) (value: 0)
     *          - B_0x1: 128 bytes (value: 1)
     *          - B_0x2: 256 bytes (value: 2)
     *          - B_0x3: 512 bytes (value: 3)
     *          - B_0x4: 1024 bytes (value: 4)
     */
        /** @brief No burst split when crossing page boundary (default after reset) */
    constexpr std::uint32_t FMC_BCR3_CPSIZE_B_0x0 = 0;
        /** @brief 128 bytes */
    constexpr std::uint32_t FMC_BCR3_CPSIZE_B_0x1 = 1;
        /** @brief 256 bytes */
    constexpr std::uint32_t FMC_BCR3_CPSIZE_B_0x2 = 2;
        /** @brief 512 bytes */
    constexpr std::uint32_t FMC_BCR3_CPSIZE_B_0x3 = 3;
        /** @brief 1024 bytes */
    constexpr std::uint32_t FMC_BCR3_CPSIZE_B_0x4 = 4;

    /** @brief Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register. */
    using FMC_BCR3_CBURSTRW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are always performed in Asynchronous mode. (value: 0)
     *          - B_0x1: Write operations are performed in Synchronous mode. (value: 1)
     */
        /** @brief Write operations are always performed in Asynchronous mode. */
    constexpr std::uint32_t FMC_BCR3_CBURSTRW_B_0x0 = 0;
        /** @brief Write operations are performed in Synchronous mode. */
    constexpr std::uint32_t FMC_BCR3_CBURSTRW_B_0x1 = 1;

    /** @brief Continuous clock enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in Synchronous mode to generate the FMC_CLK continuous clock. Note: If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is don't care. Note: If the Synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.) */
    using FMC_BCR3_CCLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The FMC_CLK is only generated during the synchronous memory access (read/write transaction). The FMC_CLK clock ratio is specified by the programmed CLKDIV value in the FMC_BCRx register (default after reset). (value: 0)
     *          - B_0x1: The FMC_CLK is generated continuously during asynchronous and synchronous access. The FMC_CLK clock is activated when the CCLKEN is set. (value: 1)
     */
        /** @brief The FMC_CLK is only generated during the synchronous memory access (read/write transaction). The FMC_CLK clock ratio is specified by the programmed CLKDIV value in the FMC_BCRx register (default after reset). */
    constexpr std::uint32_t FMC_BCR3_CCLKEN_B_0x0 = 0;
        /** @brief The FMC_CLK is generated continuously during asynchronous and synchronous access. The FMC_CLK clock is activated when the CCLKEN is set. */
    constexpr std::uint32_t FMC_BCR3_CCLKEN_B_0x1 = 1;

    /** @brief Write FIFO disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. */
    using FMC_BCR3_WFDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write FIFO enabled (Default after reset) (value: 0)
     *          - B_0x1: Write FIFO disabled (value: 1)
     */
        /** @brief Write FIFO enabled (Default after reset) */
    constexpr std::uint32_t FMC_BCR3_WFDIS_B_0x0 = 0;
        /** @brief Write FIFO disabled */
    constexpr std::uint32_t FMC_BCR3_WFDIS_B_0x1 = 1;

    /** @brief Byte lane (NBL) setup These bits configure the NBL setup timing from NBLx low to chip select NEx low. */
    using FMC_BCR3_NBLSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NBL setup time is 0 AHB clock cycle (value: 0)
     *          - B_0x1: NBL setup time is 1 AHB clock cycle (value: 1)
     *          - B_0x2: NBL setup time is 2 AHB clock cycles (value: 2)
     *          - B_0x3: NBL setup time is 3 AHB clock cycles (value: 3)
     */
        /** @brief NBL setup time is 0 AHB clock cycle */
    constexpr std::uint32_t FMC_BCR3_NBLSET_B_0x0 = 0;
        /** @brief NBL setup time is 1 AHB clock cycle */
    constexpr std::uint32_t FMC_BCR3_NBLSET_B_0x1 = 1;
        /** @brief NBL setup time is 2 AHB clock cycles */
    constexpr std::uint32_t FMC_BCR3_NBLSET_B_0x2 = 2;
        /** @brief NBL setup time is 3 AHB clock cycles */
    constexpr std::uint32_t FMC_BCR3_NBLSET_B_0x3 = 3;

    /** @brief FMC controller enable This bit enables or disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. */
    using FMC_BCR3_FMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable the FMC controller (value: 0)
     *          - B_0x1: Enable the FMC controller (value: 1)
     */
        /** @brief Disable the FMC controller */
    constexpr std::uint32_t FMC_BCR3_FMCEN_B_0x0 = 0;
        /** @brief Enable the FMC controller */
    constexpr std::uint32_t FMC_BCR3_FMCEN_B_0x1 = 1;

    /** @brief SRAM/NOR-Flash chip-select timing register for bank 3 */
    using FMC_BTR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure 21 to Figure 33), used in SRAMs, ROMs, asynchronous NOR Flash and PSRAM: ... For each access mode address setup phase duration, refer to the respective figure (Figure 21 to Figure 33). Note: In synchronous accesses, this value is don't care. Note: In Muxed mode or mode D, the minimum value for ADDSET is 1. Note: In mode 1 and PSRAM memory, the minimum value for ADDSET is 1. */
    using FMC_BTR3_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 HCLK clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR3_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure 21 to Figure 33), used in mode D or multiplexed accesses: ... For each access mode address-hold phase duration, refer to the respective figure (Figure 21 to Figure 33). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration. */
    using FMC_BTR3_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration =1 HCLK clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 HCLK clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration =1 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR3_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR3_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure 21 to Figure 33), used in asynchronous accesses: ... For each memory type and access mode data-phase duration, refer to the respective figure (Figure 21 to Figure 33). Example: Mode 1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 HCLK clock cycles. Note: In synchronous accesses, this value is don't care. */
    using FMC_BTR3_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 HCLK clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 HCLK clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 HCLK clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 HCLK clock cycles */
    constexpr std::uint32_t FMC_BTR3_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 HCLK clock cycles */
    constexpr std::uint32_t FMC_BTR3_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration These bits are written by software to add a delay at the end of current read or write transaction to next transaction on the same bank. This delay allows to match the minimum time between consecutive transactions (t sub EHEL /sub from NEx high to NEx low) and the maximum time needed by the memory to free the data bus after a read access (t sub EHQZ /sub , chip enable high to output Hi-Z). This delay is recommended for mode D and muxed mode. For non-muxed memory, the bus turnaround delay can be set to minimum value. (BUSTURN + 1)HCLK period greater than or equal max(t sub EHEL /sub min, t sub EHQZ /sub max) For FRAM memories, the bus turnaround delay should be configured to match the minimum tPC (precharge time) timings. The bus turnaround delay is inserted between any consecutive transactions on the same bank (read/read, write/write, read/write and write/read) to match the tPC memory timing. The chip select is toggling between any consecutive accesses. (BUSTURN + 1)HCLK period greater than or equal t sub PC /sub min ... */
    using FMC_BTR3_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 HCLK clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 HCLK clock cycle added */
    constexpr std::uint32_t FMC_BTR3_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_BUSTURN_B_0xF = 15;

    /** @brief Clock divide ratio (for FMC_CLK signal) Defines the period of FMC_CLK clock output signal, expressed in number of HCLK cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is don't care. Note: Refer to Section 5.6.5: Synchronous transactions for FMC_CLK divider ratio formula) */
    using FMC_BTR3_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC_CLK period= 1x HCLK period (value: 0)
     *          - B_0x1: FMC_CLK period = 2 HCLK periods (value: 1)
     *          - B_0x2: FMC_CLK period = 3 HCLK periods (value: 2)
     *          - B_0xF: FMC_CLK period = 16 HCLK periods (default value after reset) (value: 15)
     */
        /** @brief FMC_CLK period= 1x HCLK period */
    constexpr std::uint32_t FMC_BTR3_CLKDIV_B_0x0 = 0;
        /** @brief FMC_CLK period = 2 HCLK periods */
    constexpr std::uint32_t FMC_BTR3_CLKDIV_B_0x1 = 1;
        /** @brief FMC_CLK period = 3 HCLK periods */
    constexpr std::uint32_t FMC_BTR3_CLKDIV_B_0x2 = 2;
        /** @brief FMC_CLK period = 16 HCLK periods (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_CLKDIV_B_0xF = 15;

    /** @brief (see note below bit descriptions): Data latency for synchronous memory For synchronous access with read/write Burst mode enabled (BURSTEN / CBURSTRW bits set), defines the number of memory clock cycles (+2) to issue to the memory before reading/writing the first data: This timing parameter is not expressed in HCLK periods, but in FMC_CLK periods. For asynchronous access, this value is don't care. */
    using FMC_BTR3_DATLAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data latency of 2 CLK clock cycles for first burst access (value: 0)
     *          - B_0xF: Data latency of 17 CLK clock cycles for first burst access (default value after reset) (value: 15)
     */
        /** @brief Data latency of 2 CLK clock cycles for first burst access */
    constexpr std::uint32_t FMC_BTR3_DATLAT_B_0x0 = 0;
        /** @brief Data latency of 17 CLK clock cycles for first burst access (default value after reset) */
    constexpr std::uint32_t FMC_BTR3_DATLAT_B_0xF = 15;

    /** @brief Access mode Specifies the asynchronous access modes as shown in the timing diagrams. These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1. */
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

    /** @brief Data hold phase duration These bits are written by software to define the duration of the data hold phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous accesses: For read accesses For write accesses */
    using FMC_BTR3_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 HCLK clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 HCLK clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 HCLK clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 HCLK clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 HCLK clock cycle (default) */
    constexpr std::uint32_t FMC_BTR3_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR3_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR3_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR3_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR-Flash chip-select control register for bank 4 */
    using FMC_BCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory bank enable bit Enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AHB bus. */
    using FMC_BCR4_MBKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding memory bank is disabled. (value: 0)
     *          - B_0x1: Corresponding memory bank is enabled. (value: 1)
     */
        /** @brief Corresponding memory bank is disabled. */
    constexpr std::uint32_t FMC_BCR4_MBKEN_B_0x0 = 0;
        /** @brief Corresponding memory bank is enabled. */
    constexpr std::uint32_t FMC_BCR4_MBKEN_B_0x1 = 1;

    /** @brief Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories: */
    using FMC_BCR4_MUXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Address/data non multiplexed (value: 0)
     *          - B_0x1: Address/data multiplexed on databus (default after reset) (value: 1)
     */
        /** @brief Address/data non multiplexed */
    constexpr std::uint32_t FMC_BCR4_MUXEN_B_0x0 = 0;
        /** @brief Address/data multiplexed on databus (default after reset) */
    constexpr std::uint32_t FMC_BCR4_MUXEN_B_0x1 = 1;

    /** @brief Memory type Defines the type of external memory attached to the corresponding memory bank. */
    using FMC_BCR4_MTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM/FRAM (default after reset for Bank 2...4) (value: 0)
     *          - B_0x1: PSRAM (CRAM) / FRAM (value: 1)
     *          - B_0x2: NOR Flash/OneNAND Flash (default after reset for Bank 1) (value: 2)
     */
        /** @brief SRAM/FRAM (default after reset for Bank 2...4) */
    constexpr std::uint32_t FMC_BCR4_MTYP_B_0x0 = 0;
        /** @brief PSRAM (CRAM) / FRAM */
    constexpr std::uint32_t FMC_BCR4_MTYP_B_0x1 = 1;
        /** @brief NOR Flash/OneNAND Flash (default after reset for Bank 1) */
    constexpr std::uint32_t FMC_BCR4_MTYP_B_0x2 = 2;

    /** @brief Memory data bus width Defines the external memory device width, valid for all type of memories. */
    using FMC_BCR4_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (default after reset) (value: 1)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_BCR4_MWID_B_0x0 = 0;
        /** @brief 16 bits (default after reset) */
    constexpr std::uint32_t FMC_BCR4_MWID_B_0x1 = 1;

    /** @brief Flash access enable Enables NOR Flash memory access operations. */
    using FMC_BCR4_FACCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding NOR Flash memory access is disabled. (value: 0)
     *          - B_0x1: Corresponding NOR Flash memory access is enabled (default after reset). (value: 1)
     */
        /** @brief Corresponding NOR Flash memory access is disabled. */
    constexpr std::uint32_t FMC_BCR4_FACCEN_B_0x0 = 0;
        /** @brief Corresponding NOR Flash memory access is enabled (default after reset). */
    constexpr std::uint32_t FMC_BCR4_FACCEN_B_0x1 = 1;

    /** @brief Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode. */
    using FMC_BCR4_BURSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Burst mode disabled (default after reset). Read accesses are performed in Asynchronous mode. (value: 0)
     *          - B_0x1: Burst mode enable. Read accesses are performed in Synchronous mode. (value: 1)
     */
        /** @brief Burst mode disabled (default after reset). Read accesses are performed in Asynchronous mode. */
    constexpr std::uint32_t FMC_BCR4_BURSTEN_B_0x0 = 0;
        /** @brief Burst mode enable. Read accesses are performed in Synchronous mode. */
    constexpr std::uint32_t FMC_BCR4_BURSTEN_B_0x1 = 1;

    /** @brief Wait signal polarity bit Defines the polarity of the wait signal from memory used for either in Synchronous or Asynchronous mode. */
    using FMC_BCR4_WAITPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT active low (default after reset) (value: 0)
     *          - B_0x1: NWAIT active high (value: 1)
     */
        /** @brief NWAIT active low (default after reset) */
    constexpr std::uint32_t FMC_BCR4_WAITPOL_B_0x0 = 0;
        /** @brief NWAIT active high */
    constexpr std::uint32_t FMC_BCR4_WAITPOL_B_0x1 = 1;

    /** @brief Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in Synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state: */
    using FMC_BCR4_WAITCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is active one data cycle before wait state (default after reset). (value: 0)
     *          - B_0x1: NWAIT signal is active during wait state (not used for PSRAM). (value: 1)
     */
        /** @brief NWAIT signal is active one data cycle before wait state (default after reset). */
    constexpr std::uint32_t FMC_BCR4_WAITCFG_B_0x0 = 0;
        /** @brief NWAIT signal is active during wait state (not used for PSRAM). */
    constexpr std::uint32_t FMC_BCR4_WAITCFG_B_0x1 = 1;

    /** @brief Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC. */
    using FMC_BCR4_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are disabled in the bank by the FMC, an AHB error is reported. (value: 0)
     *          - B_0x1: Write operations are enabled for the bank by the FMC (default after reset). (value: 1)
     */
        /** @brief Write operations are disabled in the bank by the FMC, an AHB error is reported. */
    constexpr std::uint32_t FMC_BCR4_WREN_B_0x0 = 0;
        /** @brief Write operations are enabled for the bank by the FMC (default after reset). */
    constexpr std::uint32_t FMC_BCR4_WREN_B_0x1 = 1;

    /** @brief Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in Synchronous mode. */
    using FMC_BCR4_WAITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period). (value: 0)
     *          - B_0x1: NWAIT signal is enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset). (value: 1)
     */
        /** @brief NWAIT signal is disabled (its level not taken into account, no wait state inserted after the programmed Flash latency period). */
    constexpr std::uint32_t FMC_BCR4_WAITEN_B_0x0 = 0;
        /** @brief NWAIT signal is enabled (its level is taken into account after the programmed latency period to insert wait states if asserted) (default after reset). */
    constexpr std::uint32_t FMC_BCR4_WAITEN_B_0x1 = 1;

    /** @brief Extended mode enable This bit enables the FMC to program the write timings for non multiplexed asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the Extended mode is disabled, the FMC can operate in mode 1 or mode 2 as follows: Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP = 0x0 or 0x01) Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10). */
    using FMC_BCR4_EXTMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: values inside FMC_BWTR register are not taken into account (default after reset) (value: 0)
     *          - B_0x1: values inside FMC_BWTR register are taken into account (value: 1)
     */
        /** @brief values inside FMC_BWTR register are not taken into account (default after reset) */
    constexpr std::uint32_t FMC_BCR4_EXTMOD_B_0x0 = 0;
        /** @brief values inside FMC_BWTR register are taken into account */
    constexpr std::uint32_t FMC_BCR4_EXTMOD_B_0x1 = 1;

    /** @brief Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol. */
    using FMC_BCR4_ASYNCWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NWAIT signal is not taken in to account when running an asynchronous protocol (default after reset). (value: 0)
     *          - B_0x1: NWAIT signal is taken in to account when running an asynchronous protocol. (value: 1)
     */
        /** @brief NWAIT signal is not taken in to account when running an asynchronous protocol (default after reset). */
    constexpr std::uint32_t FMC_BCR4_ASYNCWAIT_B_0x0 = 0;
        /** @brief NWAIT signal is taken in to account when running an asynchronous protocol. */
    constexpr std::uint32_t FMC_BCR4_ASYNCWAIT_B_0x1 = 1;

    /** @brief CRAM page size These are used for CellularRAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Others: reserved */
    using FMC_BCR4_CPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No burst split when crossing page boundary (default after reset) (value: 0)
     *          - B_0x1: 128 bytes (value: 1)
     *          - B_0x2: 256 bytes (value: 2)
     *          - B_0x3: 512 bytes (value: 3)
     *          - B_0x4: 1024 bytes (value: 4)
     */
        /** @brief No burst split when crossing page boundary (default after reset) */
    constexpr std::uint32_t FMC_BCR4_CPSIZE_B_0x0 = 0;
        /** @brief 128 bytes */
    constexpr std::uint32_t FMC_BCR4_CPSIZE_B_0x1 = 1;
        /** @brief 256 bytes */
    constexpr std::uint32_t FMC_BCR4_CPSIZE_B_0x2 = 2;
        /** @brief 512 bytes */
    constexpr std::uint32_t FMC_BCR4_CPSIZE_B_0x3 = 3;
        /** @brief 1024 bytes */
    constexpr std::uint32_t FMC_BCR4_CPSIZE_B_0x4 = 4;

    /** @brief Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register. */
    using FMC_BCR4_CBURSTRW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write operations are always performed in Asynchronous mode. (value: 0)
     *          - B_0x1: Write operations are performed in Synchronous mode. (value: 1)
     */
        /** @brief Write operations are always performed in Asynchronous mode. */
    constexpr std::uint32_t FMC_BCR4_CBURSTRW_B_0x0 = 0;
        /** @brief Write operations are performed in Synchronous mode. */
    constexpr std::uint32_t FMC_BCR4_CBURSTRW_B_0x1 = 1;

    /** @brief Continuous clock enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in Synchronous mode to generate the FMC_CLK continuous clock. Note: If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is don't care. Note: If the Synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.) */
    using FMC_BCR4_CCLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The FMC_CLK is only generated during the synchronous memory access (read/write transaction). The FMC_CLK clock ratio is specified by the programmed CLKDIV value in the FMC_BCRx register (default after reset). (value: 0)
     *          - B_0x1: The FMC_CLK is generated continuously during asynchronous and synchronous access. The FMC_CLK clock is activated when the CCLKEN is set. (value: 1)
     */
        /** @brief The FMC_CLK is only generated during the synchronous memory access (read/write transaction). The FMC_CLK clock ratio is specified by the programmed CLKDIV value in the FMC_BCRx register (default after reset). */
    constexpr std::uint32_t FMC_BCR4_CCLKEN_B_0x0 = 0;
        /** @brief The FMC_CLK is generated continuously during asynchronous and synchronous access. The FMC_CLK clock is activated when the CCLKEN is set. */
    constexpr std::uint32_t FMC_BCR4_CCLKEN_B_0x1 = 1;

    /** @brief Write FIFO disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. */
    using FMC_BCR4_WFDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write FIFO enabled (Default after reset) (value: 0)
     *          - B_0x1: Write FIFO disabled (value: 1)
     */
        /** @brief Write FIFO enabled (Default after reset) */
    constexpr std::uint32_t FMC_BCR4_WFDIS_B_0x0 = 0;
        /** @brief Write FIFO disabled */
    constexpr std::uint32_t FMC_BCR4_WFDIS_B_0x1 = 1;

    /** @brief Byte lane (NBL) setup These bits configure the NBL setup timing from NBLx low to chip select NEx low. */
    using FMC_BCR4_NBLSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NBL setup time is 0 AHB clock cycle (value: 0)
     *          - B_0x1: NBL setup time is 1 AHB clock cycle (value: 1)
     *          - B_0x2: NBL setup time is 2 AHB clock cycles (value: 2)
     *          - B_0x3: NBL setup time is 3 AHB clock cycles (value: 3)
     */
        /** @brief NBL setup time is 0 AHB clock cycle */
    constexpr std::uint32_t FMC_BCR4_NBLSET_B_0x0 = 0;
        /** @brief NBL setup time is 1 AHB clock cycle */
    constexpr std::uint32_t FMC_BCR4_NBLSET_B_0x1 = 1;
        /** @brief NBL setup time is 2 AHB clock cycles */
    constexpr std::uint32_t FMC_BCR4_NBLSET_B_0x2 = 2;
        /** @brief NBL setup time is 3 AHB clock cycles */
    constexpr std::uint32_t FMC_BCR4_NBLSET_B_0x3 = 3;

    /** @brief FMC controller enable This bit enables or disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is don't care. It is only enabled through the FMC_BCR1 register. */
    using FMC_BCR4_FMCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable the FMC controller (value: 0)
     *          - B_0x1: Enable the FMC controller (value: 1)
     */
        /** @brief Disable the FMC controller */
    constexpr std::uint32_t FMC_BCR4_FMCEN_B_0x0 = 0;
        /** @brief Enable the FMC controller */
    constexpr std::uint32_t FMC_BCR4_FMCEN_B_0x1 = 1;

    /** @brief SRAM/NOR-Flash chip-select timing register for bank 4 */
    using FMC_BTR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure 21 to Figure 33), used in SRAMs, ROMs, asynchronous NOR Flash and PSRAM: ... For each access mode address setup phase duration, refer to the respective figure (Figure 21 to Figure 33). Note: In synchronous accesses, this value is don't care. Note: In Muxed mode or mode D, the minimum value for ADDSET is 1. Note: In mode 1 and PSRAM memory, the minimum value for ADDSET is 1. */
    using FMC_BTR4_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 HCLK clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR4_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure 21 to Figure 33), used in mode D or multiplexed accesses: ... For each access mode address-hold phase duration, refer to the respective figure (Figure 21 to Figure 33). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration. */
    using FMC_BTR4_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration =1 HCLK clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 HCLK clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration =1 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR4_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR4_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure 21 to Figure 33), used in asynchronous accesses: ... For each memory type and access mode data-phase duration, refer to the respective figure (Figure 21 to Figure 33). Example: Mode 1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 HCLK clock cycles. Note: In synchronous accesses, this value is don't care. */
    using FMC_BTR4_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 HCLK clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 HCLK clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 HCLK clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 HCLK clock cycles */
    constexpr std::uint32_t FMC_BTR4_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 HCLK clock cycles */
    constexpr std::uint32_t FMC_BTR4_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration These bits are written by software to add a delay at the end of current read or write transaction to next transaction on the same bank. This delay allows to match the minimum time between consecutive transactions (t sub EHEL /sub from NEx high to NEx low) and the maximum time needed by the memory to free the data bus after a read access (t sub EHQZ /sub , chip enable high to output Hi-Z). This delay is recommended for mode D and muxed mode. For non-muxed memory, the bus turnaround delay can be set to minimum value. (BUSTURN + 1)HCLK period greater than or equal max(t sub EHEL /sub min, t sub EHQZ /sub max) For FRAM memories, the bus turnaround delay should be configured to match the minimum tPC (precharge time) timings. The bus turnaround delay is inserted between any consecutive transactions on the same bank (read/read, write/write, read/write and write/read) to match the tPC memory timing. The chip select is toggling between any consecutive accesses. (BUSTURN + 1)HCLK period greater than or equal t sub PC /sub min ... */
    using FMC_BTR4_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 HCLK clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 HCLK clock cycle added */
    constexpr std::uint32_t FMC_BTR4_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_BUSTURN_B_0xF = 15;

    /** @brief Clock divide ratio (for FMC_CLK signal) Defines the period of FMC_CLK clock output signal, expressed in number of HCLK cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is don't care. Note: Refer to Section 5.6.5: Synchronous transactions for FMC_CLK divider ratio formula) */
    using FMC_BTR4_CLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMC_CLK period= 1x HCLK period (value: 0)
     *          - B_0x1: FMC_CLK period = 2 HCLK periods (value: 1)
     *          - B_0x2: FMC_CLK period = 3 HCLK periods (value: 2)
     *          - B_0xF: FMC_CLK period = 16 HCLK periods (default value after reset) (value: 15)
     */
        /** @brief FMC_CLK period= 1x HCLK period */
    constexpr std::uint32_t FMC_BTR4_CLKDIV_B_0x0 = 0;
        /** @brief FMC_CLK period = 2 HCLK periods */
    constexpr std::uint32_t FMC_BTR4_CLKDIV_B_0x1 = 1;
        /** @brief FMC_CLK period = 3 HCLK periods */
    constexpr std::uint32_t FMC_BTR4_CLKDIV_B_0x2 = 2;
        /** @brief FMC_CLK period = 16 HCLK periods (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_CLKDIV_B_0xF = 15;

    /** @brief (see note below bit descriptions): Data latency for synchronous memory For synchronous access with read/write Burst mode enabled (BURSTEN / CBURSTRW bits set), defines the number of memory clock cycles (+2) to issue to the memory before reading/writing the first data: This timing parameter is not expressed in HCLK periods, but in FMC_CLK periods. For asynchronous access, this value is don't care. */
    using FMC_BTR4_DATLAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data latency of 2 CLK clock cycles for first burst access (value: 0)
     *          - B_0xF: Data latency of 17 CLK clock cycles for first burst access (default value after reset) (value: 15)
     */
        /** @brief Data latency of 2 CLK clock cycles for first burst access */
    constexpr std::uint32_t FMC_BTR4_DATLAT_B_0x0 = 0;
        /** @brief Data latency of 17 CLK clock cycles for first burst access (default value after reset) */
    constexpr std::uint32_t FMC_BTR4_DATLAT_B_0xF = 15;

    /** @brief Access mode Specifies the asynchronous access modes as shown in the timing diagrams. These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1. */
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

    /** @brief Data hold phase duration These bits are written by software to define the duration of the data hold phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous accesses: For read accesses For write accesses */
    using FMC_BTR4_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 HCLK clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 HCLK clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 HCLK clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 HCLK clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 HCLK clock cycle (default) */
    constexpr std::uint32_t FMC_BTR4_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR4_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR4_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 HCLK clock cycle */
    constexpr std::uint32_t FMC_BTR4_DATAHLD_B_0x3 = 3;

    /** @brief PSRAM chip select counter register */
    using FMC_PCSCNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Chip select counter. These bits are written by software to define the maximum chip select low pulse duration. It is expressed in FMC_CLK cycles for synchronous accesses and in HCLK cycles for asynchronous accesses. The counter is disabled if the programmed value is 0. */
    using FMC_PCSCNTR_CSCOUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter Bank 1 enable This bit enables the chip select counter for PSRAM/NOR Bank 1. */
    using FMC_PCSCNTR_CNTB1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled for Bank 1 (value: 0)
     *          - B_0x1: Counter enabled for Bank 1 (value: 1)
     */
        /** @brief Counter disabled for Bank 1 */
    constexpr std::uint32_t FMC_PCSCNTR_CNTB1EN_B_0x0 = 0;
        /** @brief Counter enabled for Bank 1 */
    constexpr std::uint32_t FMC_PCSCNTR_CNTB1EN_B_0x1 = 1;

    /** @brief Counter Bank 2 enable This bit enables the chip select counter for PSRAM/NOR Bank 2. */
    using FMC_PCSCNTR_CNTB2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled for Bank 2 (value: 0)
     *          - B_0x1: Counter enabled for Bank 2 (value: 1)
     */
        /** @brief Counter disabled for Bank 2 */
    constexpr std::uint32_t FMC_PCSCNTR_CNTB2EN_B_0x0 = 0;
        /** @brief Counter enabled for Bank 2 */
    constexpr std::uint32_t FMC_PCSCNTR_CNTB2EN_B_0x1 = 1;

    /** @brief Counter Bank 3 enable This bit enables the chip select counter for PSRAM/NOR Bank 3. */
    using FMC_PCSCNTR_CNTB3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled for Bank 3. (value: 0)
     *          - B_0x1: Counter enabled for Bank 3 (value: 1)
     */
        /** @brief Counter disabled for Bank 3. */
    constexpr std::uint32_t FMC_PCSCNTR_CNTB3EN_B_0x0 = 0;
        /** @brief Counter enabled for Bank 3 */
    constexpr std::uint32_t FMC_PCSCNTR_CNTB3EN_B_0x1 = 1;

    /** @brief Counter Bank 4 enable This bit enables the chip select counter for PSRAM/NOR Bank 4. */
    using FMC_PCSCNTR_CNTB4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled for Bank 4 (value: 0)
     *          - B_0x1: Counter enabled for Bank 4 (value: 1)
     */
        /** @brief Counter disabled for Bank 4 */
    constexpr std::uint32_t FMC_PCSCNTR_CNTB4EN_B_0x0 = 0;
        /** @brief Counter enabled for Bank 4 */
    constexpr std::uint32_t FMC_PCSCNTR_CNTB4EN_B_0x1 = 1;

    /** @brief NAND Flash control registers */
    using FMC_PCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wait feature enable bit Enables the Wait feature for the NAND Flash memory bank: */
    using FMC_PCR_PWAITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t FMC_PCR_PWAITEN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t FMC_PCR_PWAITEN_B_0x1 = 1;

    /** @brief NAND Flash memory bank enable bit Enables the memory bank. Accessing a disabled memory bank causes an ERROR on AHB bus */
    using FMC_PCR_PBKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Corresponding memory bank is disabled (default after reset) (value: 0)
     *          - B_0x1: Corresponding memory bank is enabled (value: 1)
     */
        /** @brief Corresponding memory bank is disabled (default after reset) */
    constexpr std::uint32_t FMC_PCR_PBKEN_B_0x0 = 0;
        /** @brief Corresponding memory bank is enabled */
    constexpr std::uint32_t FMC_PCR_PBKEN_B_0x1 = 1;

    /** @brief Memory type Defines the type of device attached to the corresponding memory bank: */
    using FMC_PCR_PTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved, must be kept at reset value (value: 0)
     *          - B_0x1: NAND Flash (default after reset) (value: 1)
     */
        /** @brief Reserved, must be kept at reset value */
    constexpr std::uint32_t FMC_PCR_PTYP_B_0x0 = 0;
        /** @brief NAND Flash (default after reset) */
    constexpr std::uint32_t FMC_PCR_PTYP_B_0x1 = 1;

    /** @brief Data bus width Defines the external memory device width. */
    using FMC_PCR_PWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (default after reset). (value: 1)
     *          - B_0x2: reserved. (value: 2)
     *          - B_0x3: reserved. (value: 3)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_PCR_PWID_B_0x0 = 0;
        /** @brief 16 bits (default after reset). */
    constexpr std::uint32_t FMC_PCR_PWID_B_0x1 = 1;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_PCR_PWID_B_0x2 = 2;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_PCR_PWID_B_0x3 = 3;

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

    /** @brief CLE to RE delay Sets time from CLE low to RE low in number of AHB clock cycles (HCLK). Time is t_clr = (TCLR + SET + 2) THCLK where THCLK is the HCLK clock period Note: SET is MEMSET or ATTSET according to the addressed space. */
    using FMC_PCR_TCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 HCLK cycle (default) (value: 0)
     *          - B_0xF: 16 HCLK cycles (value: 15)
     */
        /** @brief 1 HCLK cycle (default) */
    constexpr std::uint32_t FMC_PCR_TCLR_B_0x0 = 0;
        /** @brief 16 HCLK cycles */
    constexpr std::uint32_t FMC_PCR_TCLR_B_0xF = 15;

    /** @brief ALE to RE delay Sets time from ALE low to RE low in number of AHB clock cycles (HCLK). Time is: t_ar = (TAR + SET + 2) THCLK where THCLK is the HCLK clock period Note: SET is MEMSET or ATTSET according to the addressed space. */
    using FMC_PCR_TAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 HCLK cycle (default) (value: 0)
     */
        /** @brief 1 HCLK cycle (default) */
    constexpr std::uint32_t FMC_PCR_TAR_B_0x0 = 0;

    /** @brief ALE to RE delay Sets time from ALE low to RE low in number of AHB clock cycles (HCLK). Time is: t_ar = (TAR + SET + 2) THCLK where THCLK is the HCLK clock period Note: SET is MEMSET or ATTSET according to the addressed space. */
    using FMC_PCR_TAR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 HCLK cycle (default) (value: 0)
     */
        /** @brief 1 HCLK cycle (default) */
    constexpr std::uint32_t FMC_PCR_TAR3_B_0x0 = 0;

    /** @brief ECC page size Defines the page size for the extended ECC: */
    using FMC_PCR_ECCPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 256 bytes (value: 0)
     *          - B_0x1: 512 bytes (value: 1)
     *          - B_0x2: 1024 bytes (value: 2)
     *          - B_0x3: 2048 bytes (value: 3)
     *          - B_0x4: 4096 bytes (value: 4)
     *          - B_0x5: 8192 bytes (value: 5)
     */
        /** @brief 256 bytes */
    constexpr std::uint32_t FMC_PCR_ECCPS_B_0x0 = 0;
        /** @brief 512 bytes */
    constexpr std::uint32_t FMC_PCR_ECCPS_B_0x1 = 1;
        /** @brief 1024 bytes */
    constexpr std::uint32_t FMC_PCR_ECCPS_B_0x2 = 2;
        /** @brief 2048 bytes */
    constexpr std::uint32_t FMC_PCR_ECCPS_B_0x3 = 3;
        /** @brief 4096 bytes */
    constexpr std::uint32_t FMC_PCR_ECCPS_B_0x4 = 4;
        /** @brief 8192 bytes */
    constexpr std::uint32_t FMC_PCR_ECCPS_B_0x5 = 5;

    /** @brief FIFO status and interrupt register */
    using FMC_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt rising edge status The flag is set by hardware and reset by software. Note: If this bit is written by software to 1 it is set. */
    using FMC_SR_IRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt rising edge occurred (value: 0)
     *          - B_0x1: Interrupt rising edge occurred (value: 1)
     */
        /** @brief No interrupt rising edge occurred */
    constexpr std::uint32_t FMC_SR_IRS_B_0x0 = 0;
        /** @brief Interrupt rising edge occurred */
    constexpr std::uint32_t FMC_SR_IRS_B_0x1 = 1;

    /** @brief Interrupt high-level status The flag is set by hardware and reset by software. */
    using FMC_SR_ILS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Interrupt high-level occurred (value: 0)
     *          - B_0x1: Interrupt high-level occurred (value: 1)
     */
        /** @brief No Interrupt high-level occurred */
    constexpr std::uint32_t FMC_SR_ILS_B_0x0 = 0;
        /** @brief Interrupt high-level occurred */
    constexpr std::uint32_t FMC_SR_ILS_B_0x1 = 1;

    /** @brief Interrupt falling edge status The flag is set by hardware and reset by software. Note: If this bit is written by software to 1 it is set. */
    using FMC_SR_IFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt falling edge occurred (value: 0)
     *          - B_0x1: Interrupt falling edge occurred (value: 1)
     */
        /** @brief No interrupt falling edge occurred */
    constexpr std::uint32_t FMC_SR_IFS_B_0x0 = 0;
        /** @brief Interrupt falling edge occurred */
    constexpr std::uint32_t FMC_SR_IFS_B_0x1 = 1;

    /** @brief Interrupt rising edge detection enable bit */
    using FMC_SR_IREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt rising edge detection request disabled (value: 0)
     *          - B_0x1: Interrupt rising edge detection request enabled (value: 1)
     */
        /** @brief Interrupt rising edge detection request disabled */
    constexpr std::uint32_t FMC_SR_IREN_B_0x0 = 0;
        /** @brief Interrupt rising edge detection request enabled */
    constexpr std::uint32_t FMC_SR_IREN_B_0x1 = 1;

    /** @brief Interrupt high-level detection enable bit */
    using FMC_SR_ILEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt high-level detection request disabled (value: 0)
     *          - B_0x1: Interrupt high-level detection request enabled (value: 1)
     */
        /** @brief Interrupt high-level detection request disabled */
    constexpr std::uint32_t FMC_SR_ILEN_B_0x0 = 0;
        /** @brief Interrupt high-level detection request enabled */
    constexpr std::uint32_t FMC_SR_ILEN_B_0x1 = 1;

    /** @brief Interrupt falling edge detection enable bit */
    using FMC_SR_IFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt falling edge detection request disabled (value: 0)
     *          - B_0x1: Interrupt falling edge detection request enabled (value: 1)
     */
        /** @brief Interrupt falling edge detection request disabled */
    constexpr std::uint32_t FMC_SR_IFEN_B_0x0 = 0;
        /** @brief Interrupt falling edge detection request enabled */
    constexpr std::uint32_t FMC_SR_IFEN_B_0x1 = 1;

    /** @brief FIFO empty Read-only bit that provides the status of the FIFO */
    using FMC_SR_FEMPT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO not empty (value: 0)
     *          - B_0x1: FIFO empty (value: 1)
     */
        /** @brief FIFO not empty */
    constexpr std::uint32_t FMC_SR_FEMPT_B_0x0 = 0;
        /** @brief FIFO empty */
    constexpr std::uint32_t FMC_SR_FEMPT_B_0x1 = 1;

    /** @brief Common memory space timing register */
    using FMC_PMEM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Common memory x setup time Defines the number of HCLK (+1) clock cycles to set up the address before the command assertion (NWE, NOE), for NAND Flash read or write access to common memory space on socket x: */
    using FMC_PMEM_MEMSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 HCLK cycle (value: 0)
     *          - B_0xFE: 255 HCLK cycles (value: 254)
     */
        /** @brief 1 HCLK cycle */
    constexpr std::uint32_t FMC_PMEM_MEMSET_B_0x0 = 0;
        /** @brief 255 HCLK cycles */
    constexpr std::uint32_t FMC_PMEM_MEMSET_B_0xFE = 254;

    /** @brief Common memory wait time Defines the minimum number of HCLK (+1) clock cycles to assert the command (NWE, NOE), for NAND Flash read or write access to common memory space on socket. The duration of command assertion is extended if the wait signal (NWAIT) is active (low) at the end of the programmed value of HCLK: */
    using FMC_PMEM_MEMWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 2HCLK cycles (+ wait cycle introduced by deasserting NWAIT) (value: 1)
     *          - B_0xFE: 255 HCLK cycles (+ wait cycle introduced by deasserting NWAIT) (value: 254)
     *          - B_0xFF: reserved. (value: 255)
     */
        /** @brief 2HCLK cycles (+ wait cycle introduced by deasserting NWAIT) */
    constexpr std::uint32_t FMC_PMEM_MEMWAIT_B_0x1 = 1;
        /** @brief 255 HCLK cycles (+ wait cycle introduced by deasserting NWAIT) */
    constexpr std::uint32_t FMC_PMEM_MEMWAIT_B_0xFE = 254;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_PMEM_MEMWAIT_B_0xFF = 255;

    /** @brief Common memory hold time Defines the number of HCLK clock cycles for write access and HCLK (+2) clock cycles for read access during which the address is held (and data for write accesses) after the command is deasserted (NWE, NOE), for NAND Flash read or write access to common memory space on socket x: */
    using FMC_PMEM_MEMHOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reserved. (value: 0)
     *          - B_0x1: 1 HCLK cycle for write access / 3 HCLK cycles for read access (value: 1)
     *          - B_0xFE: 254 HCLK cycles for write access / 256 HCLK cycles for read access (value: 254)
     *          - B_0xFF: reserved. (value: 255)
     */
        /** @brief reserved. */
    constexpr std::uint32_t FMC_PMEM_MEMHOLD_B_0x0 = 0;
        /** @brief 1 HCLK cycle for write access / 3 HCLK cycles for read access */
    constexpr std::uint32_t FMC_PMEM_MEMHOLD_B_0x1 = 1;
        /** @brief 254 HCLK cycles for write access / 256 HCLK cycles for read access */
    constexpr std::uint32_t FMC_PMEM_MEMHOLD_B_0xFE = 254;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_PMEM_MEMHOLD_B_0xFF = 255;

    /** @brief Common memory x data bus Hi-Z time Defines the number of HCLK clock cycles during which the data bus is kept Hi-Z after the start of a NAND Flash write access to common memory space on socket. This is only valid for write transactions: */
    using FMC_PMEM_MEMHIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 HCLK cycle (value: 0)
     *          - B_0xFE: 255 HCLK cycles (value: 254)
     *          - B_0xFF: reserved. (value: 255)
     */
        /** @brief 1 HCLK cycle */
    constexpr std::uint32_t FMC_PMEM_MEMHIZ_B_0x0 = 0;
        /** @brief 255 HCLK cycles */
    constexpr std::uint32_t FMC_PMEM_MEMHIZ_B_0xFE = 254;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_PMEM_MEMHIZ_B_0xFF = 255;

    /** @brief Attribute memory space timing register */
    using FMC_PATT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attribute memory setup time Defines the number of HCLK (+1) clock cycles to set up address before the command assertion (NWE, NOE), for NAND Flash read or write access to attribute memory space on socket: */
    using FMC_PATT_ATTSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 HCLK cycle (value: 0)
     *          - B_0xFE: 255 HCLK cycles (value: 254)
     *          - B_0xFF: reserved. (value: 255)
     */
        /** @brief 1 HCLK cycle */
    constexpr std::uint32_t FMC_PATT_ATTSET_B_0x0 = 0;
        /** @brief 255 HCLK cycles */
    constexpr std::uint32_t FMC_PATT_ATTSET_B_0xFE = 254;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_PATT_ATTSET_B_0xFF = 255;

    /** @brief Attribute memory wait time Defines the minimum number of HCLK (+1) clock cycles to assert the command (NWE, NOE), for NAND Flash read or write access to attribute memory space on socket x. The duration for command assertion is extended if the wait signal (NWAIT) is active (low) at the end of the programmed value of HCLK: */
    using FMC_PATT_ATTWAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 2 HCLK cycles (+ wait cycle introduced by deassertion of NWAIT) (value: 1)
     *          - B_0xFE: 255 HCLK cycles (+ wait cycle introduced by deasserting NWAIT) (value: 254)
     *          - B_0xFF: reserved. (value: 255)
     */
        /** @brief 2 HCLK cycles (+ wait cycle introduced by deassertion of NWAIT) */
    constexpr std::uint32_t FMC_PATT_ATTWAIT_B_0x1 = 1;
        /** @brief 255 HCLK cycles (+ wait cycle introduced by deasserting NWAIT) */
    constexpr std::uint32_t FMC_PATT_ATTWAIT_B_0xFE = 254;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_PATT_ATTWAIT_B_0xFF = 255;

    /** @brief Attribute memory hold time Defines the number of HCLK clock cycles for write access and HCLK (+2) clock cycles for read access during which the address is held (and data for write access) after the command deassertion (NWE, NOE), for NAND Flash read or write access to attribute memory space on socket: */
    using FMC_PATT_ATTHOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 HCLK cycle for write access / 3 HCLK cycles for read access (value: 1)
     *          - B_0xFE: 254 HCLK cycles for write access / 256 HCLK cycles for read access (value: 254)
     *          - B_0xFF: reserved. (value: 255)
     */
        /** @brief 1 HCLK cycle for write access / 3 HCLK cycles for read access */
    constexpr std::uint32_t FMC_PATT_ATTHOLD_B_0x1 = 1;
        /** @brief 254 HCLK cycles for write access / 256 HCLK cycles for read access */
    constexpr std::uint32_t FMC_PATT_ATTHOLD_B_0xFE = 254;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_PATT_ATTHOLD_B_0xFF = 255;

    /** @brief Attribute memory data bus Hi-Z time Defines the number of HCLK clock cycles during which the data bus is kept in Hi-Z after the start of a NAND Flash write access to attribute memory space on socket. Only valid for writ transaction: */
    using FMC_PATT_ATTHIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0 HCLK cycle (value: 0)
     *          - B_0xFE: 255 HCLK cycles (value: 254)
     *          - B_0xFF: reserved. (value: 255)
     */
        /** @brief 0 HCLK cycle */
    constexpr std::uint32_t FMC_PATT_ATTHIZ_B_0x0 = 0;
        /** @brief 255 HCLK cycles */
    constexpr std::uint32_t FMC_PATT_ATTHIZ_B_0xFE = 254;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_PATT_ATTHIZ_B_0xFF = 255;

    /** @brief ECC result registers */
    using FMC_ECCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC result This field contains the value computed by the ECC computation logic. Table 99 describes the contents of these bitfields. */
    using FMC_ECCR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM/NOR-Flash write timing registers 1 */
    using FMC_BWTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration. These bits are written by software to define the duration of the address setup phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1. */
    using FMC_BWTR1_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 HCLK clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR1_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR1_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure 30 to Figure 33), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration. */
    using FMC_BWTR1_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration = 1 HCLK clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 HCLK clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration = 1 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR1_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR1_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR1_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure 21 to Figure 33), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses: ... */
    using FMC_BWTR1_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 HCLK clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 HCLK clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 HCLK clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 HCLK clock cycles */
    constexpr std::uint32_t FMC_BWTR1_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 HCLK clock cycles */
    constexpr std::uint32_t FMC_BWTR1_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR1_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration These bits are written by software to add a delay at the end of current write transaction to next transaction on the same bank. For FRAM memories, the bus turnaround delay should be configured to match the minimum t sub PC /sub (precharge time) timings. The bus turnaround delay is inserted between any consecutive transactions on the same bank (read/read, write/write, read/write and write/read). The chip select is toggling between any consecutive accesses. (BUSTURN + 1)HCLK period greater than or equal tPC min ... */
    using FMC_BWTR1_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 HCLK clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 HCLK clock cycle added */
    constexpr std::uint32_t FMC_BWTR1_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BWTR1_BUSTURN_B_0xF = 15;

    /** @brief Access mode. Specifies the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1. */
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

    /** @brief Data hold phase duration These bits are written by software to define the duration of the data hold phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous write accesses: */
    using FMC_BWTR1_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 HCLK clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 HCLK clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 HCLK clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 HCLK clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 HCLK clock cycle (default) */
    constexpr std::uint32_t FMC_BWTR1_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR1_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR1_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR1_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR-Flash write timing registers 2 */
    using FMC_BWTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration. These bits are written by software to define the duration of the address setup phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1. */
    using FMC_BWTR2_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 HCLK clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR2_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR2_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure 30 to Figure 33), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration. */
    using FMC_BWTR2_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration = 1 HCLK clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 HCLK clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration = 1 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR2_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR2_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR2_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure 21 to Figure 33), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses: ... */
    using FMC_BWTR2_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 HCLK clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 HCLK clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 HCLK clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 HCLK clock cycles */
    constexpr std::uint32_t FMC_BWTR2_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 HCLK clock cycles */
    constexpr std::uint32_t FMC_BWTR2_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR2_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration These bits are written by software to add a delay at the end of current write transaction to next transaction on the same bank. For FRAM memories, the bus turnaround delay should be configured to match the minimum t sub PC /sub (precharge time) timings. The bus turnaround delay is inserted between any consecutive transactions on the same bank (read/read, write/write, read/write and write/read). The chip select is toggling between any consecutive accesses. (BUSTURN + 1)HCLK period greater than or equal tPC min ... */
    using FMC_BWTR2_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 HCLK clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 HCLK clock cycle added */
    constexpr std::uint32_t FMC_BWTR2_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BWTR2_BUSTURN_B_0xF = 15;

    /** @brief Access mode. Specifies the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1. */
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

    /** @brief Data hold phase duration These bits are written by software to define the duration of the data hold phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous write accesses: */
    using FMC_BWTR2_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 HCLK clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 HCLK clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 HCLK clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 HCLK clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 HCLK clock cycle (default) */
    constexpr std::uint32_t FMC_BWTR2_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR2_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR2_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR2_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR-Flash write timing registers 3 */
    using FMC_BWTR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration. These bits are written by software to define the duration of the address setup phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1. */
    using FMC_BWTR3_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 HCLK clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR3_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR3_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure 30 to Figure 33), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration. */
    using FMC_BWTR3_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration = 1 HCLK clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 HCLK clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration = 1 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR3_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR3_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR3_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure 21 to Figure 33), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses: ... */
    using FMC_BWTR3_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 HCLK clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 HCLK clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 HCLK clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 HCLK clock cycles */
    constexpr std::uint32_t FMC_BWTR3_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 HCLK clock cycles */
    constexpr std::uint32_t FMC_BWTR3_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR3_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration These bits are written by software to add a delay at the end of current write transaction to next transaction on the same bank. For FRAM memories, the bus turnaround delay should be configured to match the minimum t sub PC /sub (precharge time) timings. The bus turnaround delay is inserted between any consecutive transactions on the same bank (read/read, write/write, read/write and write/read). The chip select is toggling between any consecutive accesses. (BUSTURN + 1)HCLK period greater than or equal tPC min ... */
    using FMC_BWTR3_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 HCLK clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 HCLK clock cycle added */
    constexpr std::uint32_t FMC_BWTR3_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BWTR3_BUSTURN_B_0xF = 15;

    /** @brief Access mode. Specifies the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1. */
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

    /** @brief Data hold phase duration These bits are written by software to define the duration of the data hold phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous write accesses: */
    using FMC_BWTR3_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 HCLK clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 HCLK clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 HCLK clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 HCLK clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 HCLK clock cycle (default) */
    constexpr std::uint32_t FMC_BWTR3_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR3_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR3_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR3_DATAHLD_B_0x3 = 3;

    /** @brief SRAM/NOR-Flash write timing registers 4 */
    using FMC_BWTR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address setup phase duration. These bits are written by software to define the duration of the address setup phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1. */
    using FMC_BWTR4_ADDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDSET phase duration = 0 HCLK clock cycle (value: 0)
     *          - B_0xF: ADDSET phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDSET phase duration = 0 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR4_ADDSET_B_0x0 = 0;
        /** @brief ADDSET phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR4_ADDSET_B_0xF = 15;

    /** @brief Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure 30 to Figure 33), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration. */
    using FMC_BWTR4_ADDHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ADDHLD phase duration = 1 HCLK clock cycle (value: 1)
     *          - B_0x2: ADDHLD phase duration = 2 HCLK clock cycle (value: 2)
     *          - B_0xF: ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) (value: 15)
     */
        /** @brief ADDHLD phase duration = 1 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR4_ADDHLD_B_0x1 = 1;
        /** @brief ADDHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR4_ADDHLD_B_0x2 = 2;
        /** @brief ADDHLD phase duration = 15 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR4_ADDHLD_B_0xF = 15;

    /** @brief Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure 21 to Figure 33), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses: ... */
    using FMC_BWTR4_DATAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DATAST phase duration = 1 HCLK clock cycles (value: 1)
     *          - B_0x2: DATAST phase duration = 2 HCLK clock cycles (value: 2)
     *          - B_0xFF: DATAST phase duration = 255 HCLK clock cycles (default value after reset) (value: 255)
     */
        /** @brief DATAST phase duration = 1 HCLK clock cycles */
    constexpr std::uint32_t FMC_BWTR4_DATAST_B_0x1 = 1;
        /** @brief DATAST phase duration = 2 HCLK clock cycles */
    constexpr std::uint32_t FMC_BWTR4_DATAST_B_0x2 = 2;
        /** @brief DATAST phase duration = 255 HCLK clock cycles (default value after reset) */
    constexpr std::uint32_t FMC_BWTR4_DATAST_B_0xFF = 255;

    /** @brief Bus turnaround phase duration These bits are written by software to add a delay at the end of current write transaction to next transaction on the same bank. For FRAM memories, the bus turnaround delay should be configured to match the minimum t sub PC /sub (precharge time) timings. The bus turnaround delay is inserted between any consecutive transactions on the same bank (read/read, write/write, read/write and write/read). The chip select is toggling between any consecutive accesses. (BUSTURN + 1)HCLK period greater than or equal tPC min ... */
    using FMC_BWTR4_BUSTURN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BUSTURN phase duration = 1 HCLK clock cycle added (value: 0)
     *          - B_0xF: BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) (value: 15)
     */
        /** @brief BUSTURN phase duration = 1 HCLK clock cycle added */
    constexpr std::uint32_t FMC_BWTR4_BUSTURN_B_0x0 = 0;
        /** @brief BUSTURN phase duration = 16 x HCLK clock cycles added (default value after reset) */
    constexpr std::uint32_t FMC_BWTR4_BUSTURN_B_0xF = 15;

    /** @brief Access mode. Specifies the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1. */
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

    /** @brief Data hold phase duration These bits are written by software to define the duration of the data hold phase in HCLK cycles (refer to Figure 21 to Figure 33), used in asynchronous write accesses: */
    using FMC_BWTR4_DATAHLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATAHLD phase duration = 1 HCLK clock cycle (default) (value: 0)
     *          - B_0x1: DATAHLD phase duration = 2 HCLK clock cycle (value: 1)
     *          - B_0x2: DATAHLD phase duration = 3 HCLK clock cycle (value: 2)
     *          - B_0x3: DATAHLD phase duration = 4 HCLK clock cycle (value: 3)
     */
        /** @brief DATAHLD phase duration = 1 HCLK clock cycle (default) */
    constexpr std::uint32_t FMC_BWTR4_DATAHLD_B_0x0 = 0;
        /** @brief DATAHLD phase duration = 2 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR4_DATAHLD_B_0x1 = 1;
        /** @brief DATAHLD phase duration = 3 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR4_DATAHLD_B_0x2 = 2;
        /** @brief DATAHLD phase duration = 4 HCLK clock cycle */
    constexpr std::uint32_t FMC_BWTR4_DATAHLD_B_0x3 = 3;

    /** @brief SDRAM control registers 1 */
    using FMC_SDCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of column address bits These bits define the number of bits of a column address. */
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

    /** @brief Number of row address bits These bits define the number of bits of a row address. */
    using FMC_SDCR1_NR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 11 bit (value: 0)
     *          - B_0x1: 12 bits (value: 1)
     *          - B_0x2: 13 bits (value: 2)
     *          - B_0x3: reserved. (value: 3)
     */
        /** @brief 11 bit */
    constexpr std::uint32_t FMC_SDCR1_NR_B_0x0 = 0;
        /** @brief 12 bits */
    constexpr std::uint32_t FMC_SDCR1_NR_B_0x1 = 1;
        /** @brief 13 bits */
    constexpr std::uint32_t FMC_SDCR1_NR_B_0x2 = 2;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_SDCR1_NR_B_0x3 = 3;

    /** @brief Memory data bus width. These bits define the memory device width. */
    using FMC_SDCR1_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x3: reserved. (value: 3)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_SDCR1_MWID_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t FMC_SDCR1_MWID_B_0x1 = 1;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_SDCR1_MWID_B_0x3 = 3;

    /** @brief Number of internal banks This bit sets the number of internal banks. */
    using FMC_SDCR1_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Two internal Banks (value: 0)
     *          - B_0x1: Four internal Banks (value: 1)
     */
        /** @brief Two internal Banks */
    constexpr std::uint32_t FMC_SDCR1_NB_B_0x0 = 0;
        /** @brief Four internal Banks */
    constexpr std::uint32_t FMC_SDCR1_NB_B_0x1 = 1;

    /** @brief CAS Latency This bits sets the SDRAM CAS latency in number of memory clock cycles */
    using FMC_SDCR1_CAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reserved. (value: 0)
     *          - B_0x1: 1 cycle (value: 1)
     *          - B_0x2: 2 cycles (value: 2)
     *          - B_0x3: 3 cycles (value: 3)
     */
        /** @brief reserved. */
    constexpr std::uint32_t FMC_SDCR1_CAS_B_0x0 = 0;
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDCR1_CAS_B_0x1 = 1;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDCR1_CAS_B_0x2 = 2;
        /** @brief 3 cycles */
    constexpr std::uint32_t FMC_SDCR1_CAS_B_0x3 = 3;

    /** @brief Write protection This bit enables write mode access to the SDRAM bank. */
    using FMC_SDCR1_WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write accesses allowed (value: 0)
     *          - B_0x1: Write accesses ignored (value: 1)
     */
        /** @brief Write accesses allowed */
    constexpr std::uint32_t FMC_SDCR1_WP_B_0x0 = 0;
        /** @brief Write accesses ignored */
    constexpr std::uint32_t FMC_SDCR1_WP_B_0x1 = 1;

    /** @brief SDRAM clock configuration These bits define the SDRAM clock period for both SDRAM banks and allow disabling the clock before changing the frequency. In this case the SDRAM must be re-initialized. Note: The corresponding bits in the FMC_SDCR2 register are don't care. */
    using FMC_SDCR1_SDCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDCLK clock disabled (value: 0)
     *          - B_0x2: SDCLK period = 2 x HCLK periods (value: 2)
     *          - B_0x3: SDCLK period = 3 x HCLK periods (value: 3)
     */
        /** @brief SDCLK clock disabled */
    constexpr std::uint32_t FMC_SDCR1_SDCLK_B_0x0 = 0;
        /** @brief SDCLK period = 2 x HCLK periods */
    constexpr std::uint32_t FMC_SDCR1_SDCLK_B_0x2 = 2;
        /** @brief SDCLK period = 3 x HCLK periods */
    constexpr std::uint32_t FMC_SDCR1_SDCLK_B_0x3 = 3;

    /** @brief Burst read This bit enables Burst read mode. The SDRAM controller anticipates the next read commands during the CAS latency and stores data in the Read FIFO. Note: The corresponding bit in the FMC_SDCR2 register is don't care. */
    using FMC_SDCR1_RBURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: single read requests are not managed as bursts (value: 0)
     *          - B_0x1: single read requests are always managed as bursts (value: 1)
     */
        /** @brief single read requests are not managed as bursts */
    constexpr std::uint32_t FMC_SDCR1_RBURST_B_0x0 = 0;
        /** @brief single read requests are always managed as bursts */
    constexpr std::uint32_t FMC_SDCR1_RBURST_B_0x1 = 1;

    /** @brief Read pipe These bits define the delay, in clock cycles, for reading data after CAS latency. Note: The corresponding bits in the FMC_SDCR2 register is read only. */
    using FMC_SDCR1_RPIPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock cycle delay (value: 0)
     *          - B_0x1: One clock cycle delay (value: 1)
     *          - B_0x2: Two clock cycle delay (value: 2)
     *          - B_0x3: reserved. (value: 3)
     */
        /** @brief No clock cycle delay */
    constexpr std::uint32_t FMC_SDCR1_RPIPE_B_0x0 = 0;
        /** @brief One clock cycle delay */
    constexpr std::uint32_t FMC_SDCR1_RPIPE_B_0x1 = 1;
        /** @brief Two clock cycle delay */
    constexpr std::uint32_t FMC_SDCR1_RPIPE_B_0x2 = 2;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_SDCR1_RPIPE_B_0x3 = 3;

    /** @brief SDRAM control registers 2 */
    using FMC_SDCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of column address bits These bits define the number of bits of a column address. */
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

    /** @brief Number of row address bits These bits define the number of bits of a row address. */
    using FMC_SDCR2_NR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 11 bit (value: 0)
     *          - B_0x1: 12 bits (value: 1)
     *          - B_0x2: 13 bits (value: 2)
     *          - B_0x3: reserved. (value: 3)
     */
        /** @brief 11 bit */
    constexpr std::uint32_t FMC_SDCR2_NR_B_0x0 = 0;
        /** @brief 12 bits */
    constexpr std::uint32_t FMC_SDCR2_NR_B_0x1 = 1;
        /** @brief 13 bits */
    constexpr std::uint32_t FMC_SDCR2_NR_B_0x2 = 2;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_SDCR2_NR_B_0x3 = 3;

    /** @brief Memory data bus width. These bits define the memory device width. */
    using FMC_SDCR2_MWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x3: reserved. (value: 3)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t FMC_SDCR2_MWID_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t FMC_SDCR2_MWID_B_0x1 = 1;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_SDCR2_MWID_B_0x3 = 3;

    /** @brief Number of internal banks This bit sets the number of internal banks. */
    using FMC_SDCR2_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Two internal Banks (value: 0)
     *          - B_0x1: Four internal Banks (value: 1)
     */
        /** @brief Two internal Banks */
    constexpr std::uint32_t FMC_SDCR2_NB_B_0x0 = 0;
        /** @brief Four internal Banks */
    constexpr std::uint32_t FMC_SDCR2_NB_B_0x1 = 1;

    /** @brief CAS Latency This bits sets the SDRAM CAS latency in number of memory clock cycles */
    using FMC_SDCR2_CAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: reserved. (value: 0)
     *          - B_0x1: 1 cycle (value: 1)
     *          - B_0x2: 2 cycles (value: 2)
     *          - B_0x3: 3 cycles (value: 3)
     */
        /** @brief reserved. */
    constexpr std::uint32_t FMC_SDCR2_CAS_B_0x0 = 0;
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDCR2_CAS_B_0x1 = 1;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDCR2_CAS_B_0x2 = 2;
        /** @brief 3 cycles */
    constexpr std::uint32_t FMC_SDCR2_CAS_B_0x3 = 3;

    /** @brief Write protection This bit enables write mode access to the SDRAM bank. */
    using FMC_SDCR2_WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write accesses allowed (value: 0)
     *          - B_0x1: Write accesses ignored (value: 1)
     */
        /** @brief Write accesses allowed */
    constexpr std::uint32_t FMC_SDCR2_WP_B_0x0 = 0;
        /** @brief Write accesses ignored */
    constexpr std::uint32_t FMC_SDCR2_WP_B_0x1 = 1;

    /** @brief SDRAM clock configuration These bits define the SDRAM clock period for both SDRAM banks and allow disabling the clock before changing the frequency. In this case the SDRAM must be re-initialized. Note: The corresponding bits in the FMC_SDCR2 register are don't care. */
    using FMC_SDCR2_SDCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDCLK clock disabled (value: 0)
     *          - B_0x2: SDCLK period = 2 x HCLK periods (value: 2)
     *          - B_0x3: SDCLK period = 3 x HCLK periods (value: 3)
     */
        /** @brief SDCLK clock disabled */
    constexpr std::uint32_t FMC_SDCR2_SDCLK_B_0x0 = 0;
        /** @brief SDCLK period = 2 x HCLK periods */
    constexpr std::uint32_t FMC_SDCR2_SDCLK_B_0x2 = 2;
        /** @brief SDCLK period = 3 x HCLK periods */
    constexpr std::uint32_t FMC_SDCR2_SDCLK_B_0x3 = 3;

    /** @brief Burst read This bit enables Burst read mode. The SDRAM controller anticipates the next read commands during the CAS latency and stores data in the Read FIFO. Note: The corresponding bit in the FMC_SDCR2 register is don't care. */
    using FMC_SDCR2_RBURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: single read requests are not managed as bursts (value: 0)
     *          - B_0x1: single read requests are always managed as bursts (value: 1)
     */
        /** @brief single read requests are not managed as bursts */
    constexpr std::uint32_t FMC_SDCR2_RBURST_B_0x0 = 0;
        /** @brief single read requests are always managed as bursts */
    constexpr std::uint32_t FMC_SDCR2_RBURST_B_0x1 = 1;

    /** @brief Read pipe These bits define the delay, in clock cycles, for reading data after CAS latency. Note: The corresponding bits in the FMC_SDCR2 register is read only. */
    using FMC_SDCR2_RPIPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock cycle delay (value: 0)
     *          - B_0x1: One clock cycle delay (value: 1)
     *          - B_0x2: Two clock cycle delay (value: 2)
     *          - B_0x3: reserved. (value: 3)
     */
        /** @brief No clock cycle delay */
    constexpr std::uint32_t FMC_SDCR2_RPIPE_B_0x0 = 0;
        /** @brief One clock cycle delay */
    constexpr std::uint32_t FMC_SDCR2_RPIPE_B_0x1 = 1;
        /** @brief Two clock cycle delay */
    constexpr std::uint32_t FMC_SDCR2_RPIPE_B_0x2 = 2;
        /** @brief reserved. */
    constexpr std::uint32_t FMC_SDCR2_RPIPE_B_0x3 = 3;

    /** @brief SDRAM timing registers 1 */
    using FMC_SDTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Load Mode Register to Active These bits define the delay between a Load Mode Register command and an Active or Refresh command in number of memory clock cycles. .... */
    using FMC_SDTR1_TMRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR1_TMRD_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR1_TMRD_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR1_TMRD_B_0xF = 15;

    /** @brief Exit Self-refresh delay These bits define the delay from releasing the Self-refresh command to issuing the Activate command in number of memory clock cycles. .... Note: If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TXSR timing corresponding to the slowest SDRAM device. */
    using FMC_SDTR1_TXSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR1_TXSR_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR1_TXSR_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR1_TXSR_B_0xF = 15;

    /** @brief Self refresh time These bits define the minimum Self-refresh period in number of memory clock cycles. .... */
    using FMC_SDTR1_TRAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR1_TRAS_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR1_TRAS_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR1_TRAS_B_0xF = 15;

    /** @brief Row cycle delay These bits define the delay between the Refresh command and the Activate command, as well as the delay between two consecutive Refresh commands. It is expressed in number of memory clock cycles. The TRC timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRC must be programmed with the timings of the slowest device. .... Note: TRC must match the TRC and TRFC (Auto Refresh period) timings defined in the SDRAM device datasheet. Note: The corresponding bits in the FMC_SDTR2 register are don't care. */
    using FMC_SDTR1_TRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR1_TRC_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR1_TRC_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR1_TRC_B_0xF = 15;

    /** @brief Recovery delay These bits define the delay between a Write and a Precharge command in number of memory clock cycles. .... Note: TWR must be programmed to match the write recovery time (t sub WR /sub ) defined in the SDRAM datasheet, and to guarantee that: Note: TWR greater than or equal TRAS TRCD and TWR greater than or equalTRC TRCD TRP Note: Example: TRAS= 4 cycles, TRCD= 2 cycles. So, TWR = 2 cycles. TWR must be programmed to 0x1. Note: If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TWR timing corresponding to the slowest SDRAM device. Note: If only one SDRAM device is used, the TWR timing must be kept at reset value (0xF) for the not used bank. */
    using FMC_SDTR1_TWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR1_TWR_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR1_TWR_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR1_TWR_B_0xF = 15;

    /** @brief Row precharge delay These bits define the delay between a Precharge command and another command in number of memory clock cycles. The TRP timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRP must be programmed with the timing of the slowest device. .... Note: The corresponding bits in the FMC_SDTR2 register are don't care. */
    using FMC_SDTR1_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR1_TRP_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR1_TRP_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR1_TRP_B_0xF = 15;

    /** @brief Row to column delay These bits define the delay between the Activate command and a Read/Write command in number of memory clock cycles. .... */
    using FMC_SDTR1_TRCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle. (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle. */
    constexpr std::uint32_t FMC_SDTR1_TRCD_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR1_TRCD_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR1_TRCD_B_0xF = 15;

    /** @brief SDRAM timing registers 2 */
    using FMC_SDTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Load Mode Register to Active These bits define the delay between a Load Mode Register command and an Active or Refresh command in number of memory clock cycles. .... */
    using FMC_SDTR2_TMRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR2_TMRD_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR2_TMRD_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR2_TMRD_B_0xF = 15;

    /** @brief Exit Self-refresh delay These bits define the delay from releasing the Self-refresh command to issuing the Activate command in number of memory clock cycles. .... Note: If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TXSR timing corresponding to the slowest SDRAM device. */
    using FMC_SDTR2_TXSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR2_TXSR_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR2_TXSR_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR2_TXSR_B_0xF = 15;

    /** @brief Self refresh time These bits define the minimum Self-refresh period in number of memory clock cycles. .... */
    using FMC_SDTR2_TRAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR2_TRAS_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR2_TRAS_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR2_TRAS_B_0xF = 15;

    /** @brief Row cycle delay These bits define the delay between the Refresh command and the Activate command, as well as the delay between two consecutive Refresh commands. It is expressed in number of memory clock cycles. The TRC timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRC must be programmed with the timings of the slowest device. .... Note: TRC must match the TRC and TRFC (Auto Refresh period) timings defined in the SDRAM device datasheet. Note: The corresponding bits in the FMC_SDTR2 register are don't care. */
    using FMC_SDTR2_TRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR2_TRC_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR2_TRC_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR2_TRC_B_0xF = 15;

    /** @brief Recovery delay These bits define the delay between a Write and a Precharge command in number of memory clock cycles. .... Note: TWR must be programmed to match the write recovery time (t sub WR /sub ) defined in the SDRAM datasheet, and to guarantee that: Note: TWR greater than or equal TRAS TRCD and TWR greater than or equalTRC TRCD TRP Note: Example: TRAS= 4 cycles, TRCD= 2 cycles. So, TWR = 2 cycles. TWR must be programmed to 0x1. Note: If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TWR timing corresponding to the slowest SDRAM device. Note: If only one SDRAM device is used, the TWR timing must be kept at reset value (0xF) for the not used bank. */
    using FMC_SDTR2_TWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR2_TWR_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR2_TWR_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR2_TWR_B_0xF = 15;

    /** @brief Row precharge delay These bits define the delay between a Precharge command and another command in number of memory clock cycles. The TRP timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRP must be programmed with the timing of the slowest device. .... Note: The corresponding bits in the FMC_SDTR2 register are don't care. */
    using FMC_SDTR2_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle */
    constexpr std::uint32_t FMC_SDTR2_TRP_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR2_TRP_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR2_TRP_B_0xF = 15;

    /** @brief Row to column delay These bits define the delay between the Activate command and a Read/Write command in number of memory clock cycles. .... */
    using FMC_SDTR2_TRCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 cycle. (value: 0)
     *          - B_0x1: 2 cycles (value: 1)
     *          - B_0xF: 16 cycles (value: 15)
     */
        /** @brief 1 cycle. */
    constexpr std::uint32_t FMC_SDTR2_TRCD_B_0x0 = 0;
        /** @brief 2 cycles */
    constexpr std::uint32_t FMC_SDTR2_TRCD_B_0x1 = 1;
        /** @brief 16 cycles */
    constexpr std::uint32_t FMC_SDTR2_TRCD_B_0xF = 15;

    /** @brief SDRAM Command Mode register */
    using FMC_SDCMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command mode These bits define the command issued to the SDRAM device. Note: When a command is issued, at least one Command Target Bank bit ( CTB1 or CTB2) must be set otherwise the command will be ignored. Note: If two SDRAM banks are used, the Auto-refresh and PALL command must be issued simultaneously to the two devices with CTB1 and CTB2 bits set otherwise the command will be ignored. Note: If only one SDRAM bank is used and a command is issued with it's associated CTB bit set, the other CTB bit of the the unused bank must be kept to 0. */
    using FMC_SDCMR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal Mode (value: 0)
     *          - B_0x1: Clock Configuration Enable (value: 1)
     *          - B_0x2: PALL ('All Bank Precharge') command (value: 2)
     *          - B_0x3: Auto-refresh command (value: 3)
     *          - B_0x4: Load Mode Register (value: 4)
     *          - B_0x5: Self-refresh command (value: 5)
     *          - B_0x6: Power-down command (value: 6)
     */
        /** @brief Normal Mode */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x0 = 0;
        /** @brief Clock Configuration Enable */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x1 = 1;
        /** @brief PALL ('All Bank Precharge') command */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x2 = 2;
        /** @brief Auto-refresh command */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x3 = 3;
        /** @brief Load Mode Register */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x4 = 4;
        /** @brief Self-refresh command */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x5 = 5;
        /** @brief Power-down command */
    constexpr std::uint32_t FMC_SDCMR_MODE_B_0x6 = 6;

    /** @brief Command Target Bank 2 This bit indicates whether the command will be issued to SDRAM Bank 2 or not. */
    using FMC_SDCMR_CTB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command not issued to SDRAM Bank 2 (value: 0)
     *          - B_0x1: Command issued to SDRAM Bank 2 (value: 1)
     */
        /** @brief Command not issued to SDRAM Bank 2 */
    constexpr std::uint32_t FMC_SDCMR_CTB2_B_0x0 = 0;
        /** @brief Command issued to SDRAM Bank 2 */
    constexpr std::uint32_t FMC_SDCMR_CTB2_B_0x1 = 1;

    /** @brief Command Target Bank 1 This bit indicates whether the command will be issued to SDRAM Bank 1 or not. */
    using FMC_SDCMR_CTB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Command not issued to SDRAM Bank 1 (value: 0)
     *          - B_0x1: Command issued to SDRAM Bank 1 (value: 1)
     */
        /** @brief Command not issued to SDRAM Bank 1 */
    constexpr std::uint32_t FMC_SDCMR_CTB1_B_0x0 = 0;
        /** @brief Command issued to SDRAM Bank 1 */
    constexpr std::uint32_t FMC_SDCMR_CTB1_B_0x1 = 1;

    /** @brief Number of Auto-refresh These bits define the number of consecutive Auto-refresh commands issued when MODE = '011'. .... */
    using FMC_SDCMR_NRFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 Auto-refresh cycle (value: 0)
     *          - B_0x1: 2 Auto-refresh cycles (value: 1)
     *          - B_0xE: 15 Auto-refresh cycles (value: 14)
     *          - B_0xF: 16 Auto-refresh cycles (value: 15)
     */
        /** @brief 1 Auto-refresh cycle */
    constexpr std::uint32_t FMC_SDCMR_NRFS_B_0x0 = 0;
        /** @brief 2 Auto-refresh cycles */
    constexpr std::uint32_t FMC_SDCMR_NRFS_B_0x1 = 1;
        /** @brief 15 Auto-refresh cycles */
    constexpr std::uint32_t FMC_SDCMR_NRFS_B_0xE = 14;
        /** @brief 16 Auto-refresh cycles */
    constexpr std::uint32_t FMC_SDCMR_NRFS_B_0xF = 15;

    /** @brief Mode Register definition This 13-bit field defines the SDRAM Mode Register content. The Mode Register is programmed using the Load Mode Register command. */
    using FMC_SDCMR_MRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDRAM refresh timer register */
    using FMC_SDRTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Refresh error flag This bit is used to clear the Refresh Error Flag (RE) in the Status Register. */
    using FMC_SDRTR_CRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: Refresh Error flag is cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t FMC_SDRTR_CRE_B_0x0 = 0;
        /** @brief Refresh Error flag is cleared */
    constexpr std::uint32_t FMC_SDRTR_CRE_B_0x1 = 1;

    /** @brief Refresh Timer Count This 13-bit field defines the refresh rate of the SDRAM device. It is expressed in number of memory clock cycles. It must be set at least to 41 SDRAM clock cycles (0x29). Refresh rate = (COUNT + 1) x SDRAM frequency clock COUNT = (SDRAM refresh period / Number of rows) 20 */
    using FMC_SDRTR_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief Refresh error flag An interrupt is generated if REIE = 1 and RE = 1 */
    using FMC_SDSR_RE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No refresh error has been detected (value: 0)
     *          - B_0x1: A refresh error has been detected (value: 1)
     */
        /** @brief No refresh error has been detected */
    constexpr std::uint32_t FMC_SDSR_RE_B_0x0 = 0;
        /** @brief A refresh error has been detected */
    constexpr std::uint32_t FMC_SDSR_RE_B_0x1 = 1;

    /** @brief Status Mode for Bank 1 This bit defines the Status Mode of SDRAM Bank 1. */
    using FMC_SDSR_MODES1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal Mode (value: 0)
     *          - B_0x1: Self-refresh mode (value: 1)
     *          - B_0x2: Power-down mode (value: 2)
     */
        /** @brief Normal Mode */
    constexpr std::uint32_t FMC_SDSR_MODES1_B_0x0 = 0;
        /** @brief Self-refresh mode */
    constexpr std::uint32_t FMC_SDSR_MODES1_B_0x1 = 1;
        /** @brief Power-down mode */
    constexpr std::uint32_t FMC_SDSR_MODES1_B_0x2 = 2;

    /** @brief Status Mode for Bank 2 This bit defines the Status Mode of SDRAM Bank 2. */
    using FMC_SDSR_MODES2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal Mode (value: 0)
     *          - B_0x1: Self-refresh mode (value: 1)
     *          - B_0x2: Power-down mode (value: 2)
     */
        /** @brief Normal Mode */
    constexpr std::uint32_t FMC_SDSR_MODES2_B_0x0 = 0;
        /** @brief Self-refresh mode */
    constexpr std::uint32_t FMC_SDSR_MODES2_B_0x1 = 1;
        /** @brief Power-down mode */
    constexpr std::uint32_t FMC_SDSR_MODES2_B_0x2 = 2;

    /** @brief Busy status This bit defines the status of the SDRAM controller after a Command Mode request 1; SDRAM Controller is not ready to accept a new request */
    using FMC_SDSR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDRAM Controller is ready to accept a new request (value: 0)
     */
        /** @brief SDRAM Controller is ready to accept a new request */
    constexpr std::uint32_t FMC_SDSR_BUSY_B_0x0 = 0;

}

#endif
