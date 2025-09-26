/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7R_SBS_HPP
#define EMBEDDED_PP_STM32H7R_SBS_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System configuration, boot and security */
namespace STM32H7R::SBS {

    /** @brief SBS boot status register */
    using SBS_BOOTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief initial vector for Cortex-M7 This register includes the physical boot address used by the Cortex-M7 after reset */
    using SBS_BOOTSR_INITVTOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS hide protection control register */
    using SBS_HDPLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief increment HDPL Write 0x6A to increment device HDPL by one. After a write, the register value reverts to its default value (0xB4). */
    using SBS_HDPLCR_INCR_HDPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS hide protection status register */
    using SBS_HDPLSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief hide protection level This bitfield returns the current HDPL of the device. 0x6F and other codes: HDPL3, corresponding to non-boot application. Note: The device state (open/close) is defined in FLASH_NVSTATER register of the embedded Flash memory. */
    using SBS_HDPLSR_HDPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: HDPL0, corresponding to ST-RSS (default when device is close) (value: 180)
     *          - B_0x51: HDPL1 (value: 81)
     *          - B_0x8A: HDPL2 (value: 138)
     */
        /** @brief HDPL0, corresponding to ST-RSS (default when device is close) */
    constexpr std::uint32_t SBS_HDPLSR_HDPL_B_0xB4 = 180;
        /** @brief HDPL1 */
    constexpr std::uint32_t SBS_HDPLSR_HDPL_B_0x51 = 81;
        /** @brief HDPL2 */
    constexpr std::uint32_t SBS_HDPLSR_HDPL_B_0x8A = 138;

    /** @brief SBS debug control register */
    using SBS_DBGCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief access port unlock Write 0xB4 to this bitfield to open the device access port. */
    using SBS_DBGCR_AP_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief debug unlock Write 0xB4 to this bitfield to open the debug when HDPL in SBS_HDPLSR equals to DBG_AUTH_HDPL in this register. */
    using SBS_DBGCR_DBG_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief authenticated debug hide protection level Writing to this bitfield defines at which HDPL the authenticated debug opens. Note: Writing any other values is ignored. Reading any other value means the authenticated debug always fails. */
    using SBS_DBGCR_DBG_AUTH_HDPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x51: HDPL1 (value: 81)
     *          - B_0x8A: HDPL2 (value: 138)
     *          - B_0x6F: HDPL3 (value: 111)
     */
        /** @brief HDPL1 */
    constexpr std::uint32_t SBS_DBGCR_DBG_AUTH_HDPL_B_0x51 = 81;
        /** @brief HDPL2 */
    constexpr std::uint32_t SBS_DBGCR_DBG_AUTH_HDPL_B_0x8A = 138;
        /** @brief HDPL3 */
    constexpr std::uint32_t SBS_DBGCR_DBG_AUTH_HDPL_B_0x6F = 111;

    /** @brief SBS debug lock register */
    using SBS_DBGLOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief debug configuration lock Reading this bitfield returns 0x6A if the bitfield value is different from 0xB4. Other: Writes to SBS_DBGCR ignored Note: 0xC3 is the recommended value to lock the debug configuration using this bitfield. */
    using SBS_DBGLOCKR_DBGCFG_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: Writes to SBS_DBGCR allowed (default) (value: 180)
     */
        /** @brief Writes to SBS_DBGCR allowed (default) */
    constexpr std::uint32_t SBS_DBGLOCKR_DBGCFG_LOCK_B_0xB4 = 180;

    /** @brief SBS RSS command register */
    using SBS_RSSCMDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSS command The application can use this bitfield to pass on a command to the RSS, executed at the next reset. */
    using SBS_RSSCMDR_RSSCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS product mode and configuration register */
    using SBS_PMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast-mode Plus on PB(6) */
    using SBS_PMCR_FMPLUS_PB6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast-mode Plus mode disabled on PB(6) (value: 0)
     *          - B_0x1: Fast-mode Plus mode enabled on PB(6) (value: 1)
     */
        /** @brief Fast-mode Plus mode disabled on PB(6) */
    constexpr std::uint32_t SBS_PMCR_FMPLUS_PB6_B_0x0 = 0;
        /** @brief Fast-mode Plus mode enabled on PB(6) */
    constexpr std::uint32_t SBS_PMCR_FMPLUS_PB6_B_0x1 = 1;

    /** @brief Fast-mode Plus on PB(7) */
    using SBS_PMCR_FMPLUS_PB7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast-mode Plus mode disabled on PB(7) (value: 0)
     *          - B_0x1: Fast mode plus mode enabled on PB(7) (value: 1)
     */
        /** @brief Fast-mode Plus mode disabled on PB(7) */
    constexpr std::uint32_t SBS_PMCR_FMPLUS_PB7_B_0x0 = 0;
        /** @brief Fast mode plus mode enabled on PB(7) */
    constexpr std::uint32_t SBS_PMCR_FMPLUS_PB7_B_0x1 = 1;

    /** @brief Fast-mode Plus on PB(8) */
    using SBS_PMCR_FMPLUS_PB8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast-mode Plus mode disabled on PB(8) (value: 0)
     *          - B_0x1: Fast-mode Plus mode enabled on PB(8) (value: 1)
     */
        /** @brief Fast-mode Plus mode disabled on PB(8) */
    constexpr std::uint32_t SBS_PMCR_FMPLUS_PB8_B_0x0 = 0;
        /** @brief Fast-mode Plus mode enabled on PB(8) */
    constexpr std::uint32_t SBS_PMCR_FMPLUS_PB8_B_0x1 = 1;

    /** @brief Fast-mode Plus on PB(9) */
    using SBS_PMCR_FMPLUS_PB9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2C Fast-mode Plus mode disabled on PB(9) (value: 0)
     *          - B_0x1: Fast-mode Plus mode enabled on PB(9) (value: 1)
     */
        /** @brief I2C Fast-mode Plus mode disabled on PB(9) */
    constexpr std::uint32_t SBS_PMCR_FMPLUS_PB9_B_0x0 = 0;
        /** @brief Fast-mode Plus mode enabled on PB(9) */
    constexpr std::uint32_t SBS_PMCR_FMPLUS_PB9_B_0x1 = 1;

    /** @brief booster enable Set this bit to reduce the THD of the analog switches when the supply voltage is below 2.7 V. guaranteeing the same performance as with the full voltage range. To avoid current consumption due to booster activation when V<sub>DDA</sub> < 2.7 V and V<sub>DD</sub> > 2.7 V, V<sub>DD</sub> can be selected as supply voltage for analog switches by setting BOOSTVDDSEL bit in SBS_PMCR. In this case, the BOOSTEN bit must be cleared to avoid unwanted power consumption. */
    using SBS_PMCR_BOOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Booster disabled (value: 0)
     *          - B_0x1: Booster enabled (value: 1)
     */
        /** @brief Booster disabled */
    constexpr std::uint32_t SBS_PMCR_BOOSTEN_B_0x0 = 0;
        /** @brief Booster enabled */
    constexpr std::uint32_t SBS_PMCR_BOOSTEN_B_0x1 = 1;

    /** @brief booster V<sub>DD</sub> selection This bit selects the analog switch supply voltage, between V<sub>DD</sub>, V<sub>DDA</sub> and booster. To avoid current consumption due to booster activation when V<sub>DDA</sub> < 2.7 V and V<sub>DD</sub> > 2.7 V, V<sub>DD</sub> can be selected as supply voltage for analog switches. In this case, the BOOSTEN bit must be cleared to avoid unwanted power consumption. When both V<sub>DD and </sub>V<sub>DDA</sub> are below 2.7 V, the booster is still needed to obtain full AC performances from the I/O analog switches. */
    using SBS_PMCR_BOOSTVDDSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDA</sub> selected as analog switch booster voltage supply (when BOOSTEN bit is cleared) (value: 0)
     *          - B_0x1: V<sub>DD</sub> selected as analog switch booster voltage supply (value: 1)
     */
        /** @brief V<sub>DDA</sub> selected as analog switch booster voltage supply (when BOOSTEN bit is cleared) */
    constexpr std::uint32_t SBS_PMCR_BOOSTVDDSEL_B_0x0 = 0;
        /** @brief V<sub>DD</sub> selected as analog switch booster voltage supply */
    constexpr std::uint32_t SBS_PMCR_BOOSTVDDSEL_B_0x1 = 1;

    /** @brief Ethernet PHY interface selection Other: reserved */
    using SBS_PMCR_ETH_PHYSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GMII or MII (value: 0)
     *          - B_0x4: RMII (value: 4)
     */
        /** @brief GMII or MII */
    constexpr std::uint32_t SBS_PMCR_ETH_PHYSEL_B_0x0 = 0;
        /** @brief RMII */
    constexpr std::uint32_t SBS_PMCR_ETH_PHYSEL_B_0x4 = 4;

    /** @brief AXIRAM wait state Set this bit to add one wait state to all AXIRAMs when ECC = 0. When ECC = 1 there is one wait state by default. */
    using SBS_PMCR_AXIRAM_WS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No wait state added when accessing any AXIRAM with ECC = 0 (value: 0)
     *          - B_0x1: One wait state added when accessing any AXIRAM with ECC = 0. In this case, Fmax = 500 MHz is not guaranteed. (TBC) (value: 1)
     */
        /** @brief No wait state added when accessing any AXIRAM with ECC = 0 */
    constexpr std::uint32_t SBS_PMCR_AXIRAM_WS_B_0x0 = 0;
        /** @brief One wait state added when accessing any AXIRAM with ECC = 0. In this case, Fmax = 500 MHz is not guaranteed. (TBC) */
    constexpr std::uint32_t SBS_PMCR_AXIRAM_WS_B_0x1 = 1;

    /** @brief SBS FPU interrupt mask register */
    using SBS_FPUIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FPU interrupt enable Set and cleared by software to enable the Cortex-M7 FPU interrupts xxxxx1: Invalid operation interrupt enabled (xxxxx0 to disable) xxxx1x: Divide-by-zero interrupt enabled (xxxx0x to disable) xxx1xx: Underflow interrupt enabled (xxx0xx to disable) xx1xxx: Overflow interrupt enabled (xx0xxx to disable) x1xxxx: Input denormal interrupt enabled (x0xxxx to disable) 1xxxxx: Inexact interrupt enabled (0xxxxx to disable), disabled by default */
    using SBS_FPUIMR_FPU_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS memory erase status register */
    using SBS_MESR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief memory erase flag This bit is set by hardware when BKPRAM and PKA SRAM erase is ongoing after a POWER ON reset or one tamper event (see Section 50: Tamper and backup registers (TAMP) for details). This bit is cleared when the erase is done. */
    using SBS_MESR_MEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Automatic erase of BKPRAM and PKA RAM memories ongoing (value: 0)
     *          - B_0x1: Automatic erase of BKPRAM and PKA RAM memories done (value: 1)
     */
        /** @brief Automatic erase of BKPRAM and PKA RAM memories ongoing */
    constexpr std::uint32_t SBS_MESR_MEF_B_0x0 = 0;
        /** @brief Automatic erase of BKPRAM and PKA RAM memories done */
    constexpr std::uint32_t SBS_MESR_MEF_B_0x1 = 1;

    /** @brief SBS I/O compensation cell control and status register */
    using SBS_CCCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compensation cell enable Set this bit to enable the compensation cell. */
    using SBS_CCCSR_COMP_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Compensation cell disabled (value: 0)
     *          - B_0x1: Compensation cell enabled (value: 1)
     */
        /** @brief Compensation cell disabled */
    constexpr std::uint32_t SBS_CCCSR_COMP_EN_B_0x0 = 0;
        /** @brief Compensation cell enabled */
    constexpr std::uint32_t SBS_CCCSR_COMP_EN_B_0x1 = 1;

    /** @brief Compensation cell code selection This bit selects the code to be applied for the I/O compensation cell. */
    using SBS_CCCSR_COMP_CODESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Code from the cell (available in the SBS_CCVALR) (value: 0)
     *          - B_0x1: Code from the SBS software value register (SBS_CCSWVALR) (value: 1)
     */
        /** @brief Code from the cell (available in the SBS_CCVALR) */
    constexpr std::uint32_t SBS_CCCSR_COMP_CODESEL_B_0x0 = 0;
        /** @brief Code from the SBS software value register (SBS_CCSWVALR) */
    constexpr std::uint32_t SBS_CCCSR_COMP_CODESEL_B_0x1 = 1;

    /** @brief XSPIM_P1 compensation cell enable Set this bit to enable the XSPIM_P1 compensation cell. */
    using SBS_CCCSR_OCTO1_COMP_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIM_P1 compensation cell disabled (value: 0)
     *          - B_0x1: XSPIM_P1 compensation cell enabled (value: 1)
     */
        /** @brief XSPIM_P1 compensation cell disabled */
    constexpr std::uint32_t SBS_CCCSR_OCTO1_COMP_EN_B_0x0 = 0;
        /** @brief XSPIM_P1 compensation cell enabled */
    constexpr std::uint32_t SBS_CCCSR_OCTO1_COMP_EN_B_0x1 = 1;

    /** @brief XSPIM_P1 compensation cell code selection This bit selects the code to be applied for the XSPIM_P1 I/O compensation cell. */
    using SBS_CCCSR_OCTO1_COMP_CODESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Code from the cell (available in the SBS_CCVALR) (value: 0)
     *          - B_0x1: Code from the SBS software value register (SBS_CCSWVALR) (value: 1)
     */
        /** @brief Code from the cell (available in the SBS_CCVALR) */
    constexpr std::uint32_t SBS_CCCSR_OCTO1_COMP_CODESEL_B_0x0 = 0;
        /** @brief Code from the SBS software value register (SBS_CCSWVALR) */
    constexpr std::uint32_t SBS_CCCSR_OCTO1_COMP_CODESEL_B_0x1 = 1;

    /** @brief XSPIM_P2 compensation cell enable Set this bit to enable the XSPIM_P2 compensation cell. */
    using SBS_CCCSR_OCTO2_COMP_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIM_P2 compensation cell disabled (value: 0)
     *          - B_0x1: XSPIM_P2 compensation cell enabled (value: 1)
     */
        /** @brief XSPIM_P2 compensation cell disabled */
    constexpr std::uint32_t SBS_CCCSR_OCTO2_COMP_EN_B_0x0 = 0;
        /** @brief XSPIM_P2 compensation cell enabled */
    constexpr std::uint32_t SBS_CCCSR_OCTO2_COMP_EN_B_0x1 = 1;

    /** @brief XSPIM_P2 compensation cell code selection This bit selects the code to be applied for the XSPIM_P2 I/O compensation cell. */
    using SBS_CCCSR_OCTO2_COMP_CODESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Code from the cell (available in the SBS_CCVALR) (value: 0)
     *          - B_0x1: Code from the SBS software value register (SBS_CCSWVALR) (value: 1)
     */
        /** @brief Code from the cell (available in the SBS_CCVALR) */
    constexpr std::uint32_t SBS_CCCSR_OCTO2_COMP_CODESEL_B_0x0 = 0;
        /** @brief Code from the SBS software value register (SBS_CCSWVALR) */
    constexpr std::uint32_t SBS_CCCSR_OCTO2_COMP_CODESEL_B_0x1 = 1;

    /** @brief Compensation cell ready This bit provides the status of the compensation cell. */
    using SBS_CCCSR_COMP_RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O compensation cell not ready (value: 0)
     *          - B_0x1: I/O compensation cell ready. The code value provided by the cell can be used. (value: 1)
     */
        /** @brief I/O compensation cell not ready */
    constexpr std::uint32_t SBS_CCCSR_COMP_RDY_B_0x0 = 0;
        /** @brief I/O compensation cell ready. The code value provided by the cell can be used. */
    constexpr std::uint32_t SBS_CCCSR_COMP_RDY_B_0x1 = 1;

    /** @brief XSPIM_P1 compensation cell ready This bit provides the status of the XSPIM_P1 compensation cell. */
    using SBS_CCCSR_OCTO1_COMP_RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIM_P1 I/O compensation cell not ready (value: 0)
     *          - B_0x1: XSPIM_P1 I/O compensation cell ready. The code value provided by the cell can be used. (value: 1)
     */
        /** @brief XSPIM_P1 I/O compensation cell not ready */
    constexpr std::uint32_t SBS_CCCSR_OCTO1_COMP_RDY_B_0x0 = 0;
        /** @brief XSPIM_P1 I/O compensation cell ready. The code value provided by the cell can be used. */
    constexpr std::uint32_t SBS_CCCSR_OCTO1_COMP_RDY_B_0x1 = 1;

    /** @brief XSPIM_P2 compensation cell ready This bit provides the status of the XSPIM_P2 compensation cell. */
    using SBS_CCCSR_OCTO2_COMP_RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPIM_P2 I/O compensation cell not ready (value: 0)
     *          - B_0x1: XSPIM_P2 I/O compensation cell ready. The code value provided by the cell can be used. (value: 1)
     */
        /** @brief XSPIM_P2 I/O compensation cell not ready */
    constexpr std::uint32_t SBS_CCCSR_OCTO2_COMP_RDY_B_0x0 = 0;
        /** @brief XSPIM_P2 I/O compensation cell ready. The code value provided by the cell can be used. */
    constexpr std::uint32_t SBS_CCCSR_OCTO2_COMP_RDY_B_0x1 = 1;

    /** @brief I/O high speed at low voltage When this bit is set, the speed of the I/Os is optimized when the device voltage is low. This bit is active only if VDDIO_HSLV user option bit is set in FLASH. It must be used only if the device supply voltage is below 2.7 V. Setting this bit when V<sub>DD</sub> is higher than 2.7 V may be destructive. */
    using SBS_CCCSR_IOHSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No I/O speed optimization when device voltage is low (value: 0)
     *          - B_0x1: I/O speed optimized when device voltage is low, if VDDIO_HSLV user option is set (no effect otherwise) (value: 1)
     */
        /** @brief No I/O speed optimization when device voltage is low */
    constexpr std::uint32_t SBS_CCCSR_IOHSLV_B_0x0 = 0;
        /** @brief I/O speed optimized when device voltage is low, if VDDIO_HSLV user option is set (no effect otherwise) */
    constexpr std::uint32_t SBS_CCCSR_IOHSLV_B_0x1 = 1;

    /** @brief XSPIM_P1 I/O high speed at low voltage When this bit is set, the speed of the XSPIM_P1 I/Os is optimized when the device voltage is low. This bit is active only if OCTO1_HSLV user option bit is set in FLASH. This bit must be used only if the device supply voltage is below 2.7 V. Setting this bit when V<sub>DD</sub> is higher than 2.7 V may be destructive. */
    using SBS_CCCSR_OCTO1_IOHSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No XSPIM_P1 I/O speed optimization when device voltage is low (value: 0)
     *          - B_0x1: XSPIM_P1 I/O speed optimized when device voltage is low, if OCTO1_HSLV user option is set (no effect otherwise) (value: 1)
     */
        /** @brief No XSPIM_P1 I/O speed optimization when device voltage is low */
    constexpr std::uint32_t SBS_CCCSR_OCTO1_IOHSLV_B_0x0 = 0;
        /** @brief XSPIM_P1 I/O speed optimized when device voltage is low, if OCTO1_HSLV user option is set (no effect otherwise) */
    constexpr std::uint32_t SBS_CCCSR_OCTO1_IOHSLV_B_0x1 = 1;

    /** @brief XSPIM_P2 I/O high speed at low voltage When this bit is set, the speed of the XSPIM_P2 I/Os is optimized when the device voltage is low. This bit is active only if OCTO2_HSLV user option bit is set in FLASH. This bit must be used only if the device supply voltage is below 2.7 V. Setting this bit when V<sub>DD</sub> is higher than 2.7 V may be destructive. */
    using SBS_CCCSR_OCTO2_IOHSLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No XSPIM_P2 I/O speed optimization when device voltage is low (value: 0)
     *          - B_0x1: XSPIM_P2 I/O speed optimized when device voltage is low, if OCTO2_HSLV user option is set (no effect otherwise) (value: 1)
     */
        /** @brief No XSPIM_P2 I/O speed optimization when device voltage is low */
    constexpr std::uint32_t SBS_CCCSR_OCTO2_IOHSLV_B_0x0 = 0;
        /** @brief XSPIM_P2 I/O speed optimized when device voltage is low, if OCTO2_HSLV user option is set (no effect otherwise) */
    constexpr std::uint32_t SBS_CCCSR_OCTO2_IOHSLV_B_0x1 = 1;

    /** @brief SBS compensation cell for I/Os value register */
    using SBS_CCVALR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMOS transistors slew-rate compensation This bitfield returns the NMOS transistors slew-rate compensation value computed by the cell. It is interpreted to compensate the NMOS transistors slew rate in the functional range if COMP_CODESEL = 0 in SBS_CCCSR register. */
    using SBS_CCVALR_NSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMOS transistors slew-rate compensation This bitfield returns the PMOS transistors slew-rate compensation value computed by the cell. It is interpreted to compensate the PMOS transistors slew rate in the functional range if COMP_CODESEL = 0 in SBS_CCCSR register. */
    using SBS_CCVALR_PSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM_P1 NMOS transistors slew-rate compensation This bitfield returns the NMOS transistors slew-rate compensation value computed by the cell. It is interpreted by XSPIM_P1 to compensate the NMOS transistors slew rate in the functional range if OCTO1_COMP_CODESEL = 0 in SBS_CCCSR register. */
    using SBS_CCVALR_OCTO1_NSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM_P1 PMOS transistors slew-rate compensation This bitfield returns the PMOS transistors slew-rate compensation value computed by the cell. It is interpreted by XSPIM_P1 to compensate the PMOS transistors slew rate in the functional range if OCTO1_COMP_CODESEL = 0 in SBS_CCCSR register. */
    using SBS_CCVALR_OCTO1_PSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM_P2 NMOS transistors slew-rate compensation This bitfield returns the NMOS transistors slew-rate compensation value computed by the cell. It is interpreted by XSPIM_P2 to compensate the NMOS transistors slew rate in the functional range if OCTO2_COMP_CODESEL = 0 in SBS_CCCSR register. */
    using SBS_CCVALR_OCTO2_NSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM_P2 PMOS transistors slew-rate compensation This bitfield returns the PMOS transistors slew-rate compensation value computed by the cell. It is interpreted by XSPIM_P2 to compensate the PMOS transistors slew rate in the functional range if OCTO2_COMP_CODESEL = 0 in SBS_CCCSR register. */
    using SBS_CCVALR_OCTO2_PSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS compensation cell for I/Os software value register */
    using SBS_CCSWVALR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software NMOS transistors slew-rate compensation This bitfield returns the NMOS transistors slew-rate compensation value computed by the cell. It is interpreted to compensate the NMOS transistors slew rate in the functional range if COMP_CODESEL = 1 in SBS_CCCSR register. */
    using SBS_CCSWVALR_SW_NSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software PMOS transistors slew-rate compensation This bitfield returns the PMOS transistors slew-rate compensation value computed by the cell. It is interpreted to compensate the PMOS transistors slew rate in the functional range if COMP_CODESEL = 1 in SBS_CCCSR register. */
    using SBS_CCSWVALR_SW_PSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM_P1 software NMOS transistors slew-rate compensation This bitfield returns the NMOS transistors slew -ate compensation value computed by the cell. It is interpreted by XSPIM_P1 to compensate the NMOS transistors slew rate in the functional range if OCTO1_COMP_CODESEL = 1 in SBS_CCCSR register. */
    using SBS_CCSWVALR_OCTO1_SW_NSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM_P1 software PMOS transistors slew-rate compensation This bitfield returns the PMOS transistors slew-rate compensation value computed by the cell. It is interpreted by XSPIM_P1 to compensate the PMOS transistors slew rate in the functional range if OCTO1_COMP_CODESEL = 1 in SBS_CCCSR register. */
    using SBS_CCSWVALR_OCTO1_SW_PSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM_P2 software NMOS transistors slew-rate compensation This bitfield returns the NMOS transistors slew-rate compensation value computed by the cell. It is interpreted by XSPIM_P2 to compensate the NMOS transistors slew rate in the functional range if OCTO2_COMP_CODESEL = 1 in SBS_CCCSR register. */
    using SBS_CCSWVALR_OCTO2_SW_NSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIM_P2 software PMOS transistors slew-rate compensation This bitfield returns the PMOS transistors slew-rate compensation value computed by the cell. It is interpreted by XSPIM_P2 to compensate the PMOS transistors slew rate in the functional range if OCTO2_COMP_CODESEL = 1 in SBS_CCCSR register. */
    using SBS_CCSWVALR_OCTO2_SW_PSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS break lockup register */
    using SBS_BKLOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVD break lock This bit is set by SW and cleared only by a system reset. it can be used to enable and lock the connection to TIM1/8/15/16/17Break input as well as the PVDE and PLS[2:0] bitfields in the PWR_CR1 register. Once set, this bit is cleared only by a system reset. */
    using SBS_BKLOCKR_PVD_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD interrupt disconnected from TIM1/8/15/16/17 break inputs. PVDE and PLS[2:0] bitfields can be programmed by the application. (value: 0)
     *          - B_0x1: PVD output connected to TIM1/8/15/16/17 break input. PVDE and PLS[2:0] bits are read only. (value: 1)
     */
        /** @brief PVD interrupt disconnected from TIM1/8/15/16/17 break inputs. PVDE and PLS[2:0] bitfields can be programmed by the application. */
    constexpr std::uint32_t SBS_BKLOCKR_PVD_BL_B_0x0 = 0;
        /** @brief PVD output connected to TIM1/8/15/16/17 break input. PVDE and PLS[2:0] bits are read only. */
    constexpr std::uint32_t SBS_BKLOCKR_PVD_BL_B_0x1 = 1;

    /** @brief Flash ECC error break lock Set this bit to enable and lock the connection between embedded flash memory ECC double error detection flag and break inputs of TIM1/15/16/17 peripherals. Once set, this bit is cleared only by a system reset. */
    using SBS_BKLOCKR_FLASHECC_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH ECC double error detection flag disconnected from TIM1/15/16/17 break inputs (value: 0)
     *          - B_0x1: FLASH ECC double error detection flag connected to TIM1/15/16/17 break inputs (value: 1)
     */
        /** @brief FLASH ECC double error detection flag disconnected from TIM1/15/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_FLASHECC_BL_B_0x0 = 0;
        /** @brief FLASH ECC double error detection flag connected to TIM1/15/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_FLASHECC_BL_B_0x1 = 1;

    /** @brief Cortex-M7 lockup break lock Set this bit to enable and lock the connection between the Cortex-M7 lockup (HardFault) output and break inputs of TIM1/15/16/17 peripherals. Once set, this bit is cleared only by a system reset. */
    using SBS_BKLOCKR_CM7LCKUP_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cortex-M7 lockup output disconnected from TIM1/15/16/17 break inputs (value: 0)
     *          - B_0x1: Cortex-M7 lockup output connected to TIM1/15/16/17 break inputs (value: 1)
     */
        /** @brief Cortex-M7 lockup output disconnected from TIM1/15/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_CM7LCKUP_BL_B_0x0 = 0;
        /** @brief Cortex-M7 lockup output connected to TIM1/15/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_CM7LCKUP_BL_B_0x1 = 1;

    /** @brief Backup RAM ECC error break lock Set this bit to enable and lock the connection between backup RAM ECC double error detection flag and break inputs of TIM1/15/16/17 peripherals. Once set, this bit is cleared only by a system reset. */
    using SBS_BKLOCKR_BKRAMECC_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup RAM ECC double error detection flag disconnected from TIM1/15/16/17 break inputs. (value: 0)
     *          - B_0x1: Backup RAM ECC double error detection flag connected to TIM1/15/16/17 break inputs. (value: 1)
     */
        /** @brief Backup RAM ECC double error detection flag disconnected from TIM1/15/16/17 break inputs. */
    constexpr std::uint32_t SBS_BKLOCKR_BKRAMECC_BL_B_0x0 = 0;
        /** @brief Backup RAM ECC double error detection flag connected to TIM1/15/16/17 break inputs. */
    constexpr std::uint32_t SBS_BKLOCKR_BKRAMECC_BL_B_0x1 = 1;

    /** @brief DTCM ECC error break lock Set this bit to enable and lock the connection between DTCM ECC double error detection flag and break inputs of TIM1/15/16/17 peripherals. Once set, this bit is cleared only by a system reset. Note: The DTCM0 and DTCM1 are Ored to give DTCMECC */
    using SBS_BKLOCKR_DTCMECC_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTCM ECC double error detection flag disconnected from TIM1/15/16/17 break inputs (value: 0)
     *          - B_0x1: DTCM ECC double error detection flag connected to TIM1/15/16/17 break inputs (value: 1)
     */
        /** @brief DTCM ECC double error detection flag disconnected from TIM1/15/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_DTCMECC_BL_B_0x0 = 0;
        /** @brief DTCM ECC double error detection flag connected to TIM1/15/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_DTCMECC_BL_B_0x1 = 1;

    /** @brief ITCM ECC error break lock Set this bit to enable and lock the connection between ITCM ECC double error detection flag and break inputs of TIM1/15/16/17 peripherals. Once set, this bit is cleared only by a system reset. */
    using SBS_BKLOCKR_ITCMECC_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ITCM ECC double error detection flag disconnected from TIM1/15/16/17 break inputs (value: 0)
     *          - B_0x1: ITCM ECC double error detection flag connected to TIM1/15/16/17 break inputs (value: 1)
     */
        /** @brief ITCM ECC double error detection flag disconnected from TIM1/15/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_ITCMECC_BL_B_0x0 = 0;
        /** @brief ITCM ECC double error detection flag connected to TIM1/15/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_ITCMECC_BL_B_0x1 = 1;

    /** @brief AXIRAM3 ECC error break lock Set this bit to enable and lock the connection between AXIRAM3 ECC double error detection flag and break inputs of TIM1/15/16/17 peripherals. Once set this bit is cleared only by a system reset. */
    using SBS_BKLOCKR_ARAM3ECC_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXIRAM3 ECC double error detection flag disconnected from TIM1/15/16/17 break inputs (value: 0)
     *          - B_0x1: AXIRAM3 ECC double error detection flag connected to TIM1/15/16/17 break inputs (value: 1)
     */
        /** @brief AXIRAM3 ECC double error detection flag disconnected from TIM1/15/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_ARAM3ECC_BL_B_0x0 = 0;
        /** @brief AXIRAM3 ECC double error detection flag connected to TIM1/15/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_ARAM3ECC_BL_B_0x1 = 1;

    /** @brief AXIRAM1 ECC error break lock Set this bit to enable and lock the connection between AXIRAM1 ECC double error detection flag and break inputs of TIM1/15/16/17 peripherals. Once set, this bit is cleared only by a system reset. */
    using SBS_BKLOCKR_ARAM1ECC_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXIRAM1 ECC double error detection flag disconnected from TIM1/5/16/17 break inputs (value: 0)
     *          - B_0x1: AXIRAM1 ECC double error detection flag connected to TIM1/15/16/17 break inputs (value: 1)
     */
        /** @brief AXIRAM1 ECC double error detection flag disconnected from TIM1/5/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_ARAM1ECC_BL_B_0x0 = 0;
        /** @brief AXIRAM1 ECC double error detection flag connected to TIM1/15/16/17 break inputs */
    constexpr std::uint32_t SBS_BKLOCKR_ARAM1ECC_BL_B_0x1 = 1;

    /** @brief SBS external interrupt configuration register 0 */
    using SBS_EXTICR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port configuration EXTI {0 * 4 + i} This bitfield selects the source input to the EXTI input {0 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR0_PC_EXTI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI0_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI0_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI0_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI0_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI0_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI0_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI0_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI0_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI0_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI0_B_0x09 = 9;

    /** @brief Port configuration EXTI {0 * 4 + i} This bitfield selects the source input to the EXTI input {0 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR0_PC_EXTI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI1_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI1_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI1_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI1_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI1_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI1_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI1_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI1_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI1_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI1_B_0x09 = 9;

    /** @brief Port configuration EXTI {0 * 4 + i} This bitfield selects the source input to the EXTI input {0 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR0_PC_EXTI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI2_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI2_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI2_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI2_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI2_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI2_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI2_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI2_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI2_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI2_B_0x09 = 9;

    /** @brief Port configuration EXTI {0 * 4 + i} This bitfield selects the source input to the EXTI input {0 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR0_PC_EXTI3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI3_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI3_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI3_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI3_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI3_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI3_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI3_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI3_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI3_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR0_PC_EXTI3_B_0x09 = 9;

    /** @brief SBS external interrupt configuration register 1 */
    using SBS_EXTICR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port configuration EXTI {1 * 4 + i} This bitfield selects the source input to the EXTI input {1 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR1_PC_EXTI4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI4_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI4_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI4_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI4_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI4_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI4_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI4_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI4_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI4_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI4_B_0x09 = 9;

    /** @brief Port configuration EXTI {1 * 4 + i} This bitfield selects the source input to the EXTI input {1 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR1_PC_EXTI5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI5_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI5_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI5_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI5_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI5_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI5_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI5_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI5_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI5_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI5_B_0x09 = 9;

    /** @brief Port configuration EXTI {1 * 4 + i} This bitfield selects the source input to the EXTI input {1 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR1_PC_EXTI6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI6_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI6_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI6_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI6_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI6_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI6_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI6_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI6_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI6_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI6_B_0x09 = 9;

    /** @brief Port configuration EXTI {1 * 4 + i} This bitfield selects the source input to the EXTI input {1 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR1_PC_EXTI7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI7_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI7_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI7_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI7_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI7_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI7_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI7_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI7_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI7_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR1_PC_EXTI7_B_0x09 = 9;

    /** @brief SBS external interrupt configuration register 2 */
    using SBS_EXTICR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port configuration EXTI {2 * 4 + i} This bitfield selects the source input to the EXTI input {2 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR2_PC_EXTI8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI8_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI8_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI8_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI8_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI8_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI8_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI8_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI8_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI8_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI8_B_0x09 = 9;

    /** @brief Port configuration EXTI {2 * 4 + i} This bitfield selects the source input to the EXTI input {2 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR2_PC_EXTI9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI9_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI9_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI9_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI9_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI9_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI9_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI9_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI9_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI9_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI9_B_0x09 = 9;

    /** @brief Port configuration EXTI {2 * 4 + i} This bitfield selects the source input to the EXTI input {2 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR2_PC_EXTI10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI10_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI10_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI10_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI10_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI10_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI10_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI10_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI10_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI10_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI10_B_0x09 = 9;

    /** @brief Port configuration EXTI {2 * 4 + i} This bitfield selects the source input to the EXTI input {2 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR2_PC_EXTI11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI11_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI11_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI11_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI11_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI11_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI11_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI11_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI11_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI11_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR2_PC_EXTI11_B_0x09 = 9;

    /** @brief SBS external interrupt configuration register 3 */
    using SBS_EXTICR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port configuration EXTI {3 * 4 + i} This bitfield selects the source input to the EXTI input {3 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR3_PC_EXTI12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI12_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI12_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI12_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI12_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI12_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI12_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI12_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI12_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI12_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI12_B_0x09 = 9;

    /** @brief Port configuration EXTI {3 * 4 + i} This bitfield selects the source input to the EXTI input {3 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR3_PC_EXTI13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI13_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI13_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI13_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI13_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI13_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI13_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI13_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI13_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI13_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI13_B_0x09 = 9;

    /** @brief Port configuration EXTI {3 * 4 + i} This bitfield selects the source input to the EXTI input {3 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR3_PC_EXTI14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI14_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI14_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI14_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI14_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI14_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI14_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI14_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI14_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI14_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI14_B_0x09 = 9;

    /** @brief Port configuration EXTI {3 * 4 + i} This bitfield selects the source input to the EXTI input {3 * 4 + i} used for external interrupt/ event detection. Others: reserved */
    using SBS_EXTICR3_PC_EXTI15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: PA[x*4+i] pin (value: 0)
     *          - B_0x01: PB[x*4+i] pin (value: 1)
     *          - B_0x02: PC[x*4+i] pin (value: 2)
     *          - B_0x03: PD[x*4+i] pin (value: 3)
     *          - B_0x04: PE[x*4+i] pin (value: 4)
     *          - B_0x05: PF[x*4+i] pin (value: 5)
     *          - B_0x06: PG[x*4+i] pin (value: 6)
     *          - B_0x07: PH[x*4+i] pin (value: 7)
     *          - B_0x08: PM[x*4+i] pin (value: 8)
     *          - B_0x09: PN[x*4+i] pin (value: 9)
     */
        /** @brief PA[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI15_B_0x00 = 0;
        /** @brief PB[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI15_B_0x01 = 1;
        /** @brief PC[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI15_B_0x02 = 2;
        /** @brief PD[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI15_B_0x03 = 3;
        /** @brief PE[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI15_B_0x04 = 4;
        /** @brief PF[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI15_B_0x05 = 5;
        /** @brief PG[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI15_B_0x06 = 6;
        /** @brief PH[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI15_B_0x07 = 7;
        /** @brief PM[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI15_B_0x08 = 8;
        /** @brief PN[x*4+i] pin */
    constexpr std::uint32_t SBS_EXTICR3_PC_EXTI15_B_0x09 = 9;

}

#endif
