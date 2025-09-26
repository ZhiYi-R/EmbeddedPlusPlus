/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H573_SBS_HPP
#define EMBEDDED_PP_STM32H573_SBS_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SBS register block */
namespace STM32H573::SBS {

    /** @brief SBS temporal isolation control register */
    using SBS_HDPLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief increment HDPL value Other: all other values allow a HDPL level increment. */
    using SBS_HDPLCR_INCR_HDPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: no increment (value: 180)
     *          - B_0x6A: recommended value to increment HDPL level by one (value: 106)
     */
        /** @brief no increment */
    constexpr std::uint32_t SBS_HDPLCR_INCR_HDPL_B_0xB4 = 180;
        /** @brief recommended value to increment HDPL level by one */
    constexpr std::uint32_t SBS_HDPLCR_INCR_HDPL_B_0x6A = 106;

    /** @brief SBS temporal isolation status register */
    using SBS_HDPLSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief temporal isolation level This bitfield returns the current temporal isolation level. */
    using SBS_HDPLSR_HDPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: HDPL0, RSS (value: 180)
     *          - B_0x51: HDPL1, iRoT (value: 81)
     *          - B_0x8A: HDPL2, uRoT (value: 138)
     *          - B_0x6F: HDPL3, application (secure/non-secure) (value: 111)
     */
        /** @brief HDPL0, RSS */
    constexpr std::uint32_t SBS_HDPLSR_HDPL_B_0xB4 = 180;
        /** @brief HDPL1, iRoT */
    constexpr std::uint32_t SBS_HDPLSR_HDPL_B_0x51 = 81;
        /** @brief HDPL2, uRoT */
    constexpr std::uint32_t SBS_HDPLSR_HDPL_B_0x8A = 138;
        /** @brief HDPL3, application (secure/non-secure) */
    constexpr std::uint32_t SBS_HDPLSR_HDPL_B_0x6F = 111;

    /** @brief SBS next HDPL control register */
    using SBS_NEXTHDPLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief index to point to a higher HDPL than the current one Index to add to the current HDPL to point (through OBK-HDPL) to the next secure storage areas (OBK-HDPL = HDPL + NEXTHDPL). See for more details. */
    using SBS_NEXTHDPLCR_NEXTHDPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS debug control register */
    using SBS_DBGCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief access port unlock Write 0xB4 to this bitfield to open the device access port. */
    using SBS_DBGCR_AP_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief debug unlock when DBG_AUTH_HDPL is reached Write 0xB4 to this bitfield to open the debug when HDPL in SBS_HDPLSR equals to DBG_AUTH_HDPL in this register. */
    using SBS_DBGCR_DBG_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief authenticated debug temporal isolation level Writing to this bitfield defines at which HDPL the authenticated debug opens. Note: Writing any other values is ignored. Reading any other value means the debug never opens. */
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

    /** @brief control debug opening secure/non-secure Write 0xB4 to this bitfield to open debug for secure and non-secure. Writing any other values only open non-secure. */
    using SBS_DBGCR_DBG_AUTH_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS debug lock register */
    using SBS_DBGLOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief debug configuration lock Reading this bitfield returns 0x6A if the bitfield value is different from 0xB4. 0xC3 is the recommended value to lock the debug configuration using this bitfield. Other: Writes to SBS_DBGCR ignored */
    using SBS_DBGLOCKR_DBGCFG_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB4: Writes to SBS_DBGCR allowed (default) (value: 180)
     */
        /** @brief Writes to SBS_DBGCR allowed (default) */
    constexpr std::uint32_t SBS_DBGLOCKR_DBGCFG_LOCK_B_0xB4 = 180;

    /** @brief SBS RSS command register */
    using SBS_RSSCMDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSS command The application can use this bitfield to pass on a command to the RSS, executed at the next reset. When RSSCMD different 0 and PRODUCT_STATE is in Open, then the system always boots on RSS whatever is the boot pin value. */
    using SBS_RSSCMDR_RSSCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS EPOCH selection control register */
    using SBS_EPOCHSELCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief select EPOCH value to be sent to the SAES 1x: EPOCH forced to zero (value used to retrieve PUF reference value at boot time) */
    using SBS_EPOCHSELCR_EPOCH_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEC_EPOCH counter input selected (value: 0)
     *          - B_0x1: NS_EPOCH (non-secure) input selected (value: 1)
     */
        /** @brief SEC_EPOCH counter input selected */
    constexpr std::uint32_t SBS_EPOCHSELCR_EPOCH_SEL_B_0x0 = 0;
        /** @brief NS_EPOCH (non-secure) input selected */
    constexpr std::uint32_t SBS_EPOCHSELCR_EPOCH_SEL_B_0x1 = 1;

    /** @brief SBS security mode configuration control register */
    using SBS_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS clock control, memory-erase status register and compensation cell register security enable */
    using SBS_SECCFGR_SBSSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SBS_MESR, SBS_CCCSR, SBS_CCVALR, SBS_CCSWCR registers accessible through secure or non-secure transaction (value: 0)
     *          - B_0x1: SBS_MESR, SBS_CCCSR, SBS_CCVALR, SBS_CCSWCR registers only accessible through secure transaction (value: 1)
     */
        /** @brief SBS_MESR, SBS_CCCSR, SBS_CCVALR, SBS_CCSWCR registers accessible through secure or non-secure transaction */
    constexpr std::uint32_t SBS_SECCFGR_SBSSEC_B_0x0 = 0;
        /** @brief SBS_MESR, SBS_CCCSR, SBS_CCVALR, SBS_CCSWCR registers only accessible through secure transaction */
    constexpr std::uint32_t SBS_SECCFGR_SBSSEC_B_0x1 = 1;

    /** @brief ClassB security enable */
    using SBS_SECCFGR_CLASSBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SBS_CFGR2 register accessible through secure or non-secure transaction (value: 0)
     *          - B_0x1: SBS_CFGR2 register only accessible through secure transaction (value: 1)
     */
        /** @brief SBS_CFGR2 register accessible through secure or non-secure transaction */
    constexpr std::uint32_t SBS_SECCFGR_CLASSBSEC_B_0x0 = 0;
        /** @brief SBS_CFGR2 register only accessible through secure transaction */
    constexpr std::uint32_t SBS_SECCFGR_CLASSBSEC_B_0x1 = 1;

    /** @brief FPU security enable Note: This bit can only be written through privilege transaction. */
    using SBS_SECCFGR_FPUSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SBS_FPUIMP register accessible through secure or non-secure transaction (value: 0)
     *          - B_0x1: SBS_FPUIMP register only accessible through secure transaction (value: 1)
     */
        /** @brief SBS_FPUIMP register accessible through secure or non-secure transaction */
    constexpr std::uint32_t SBS_SECCFGR_FPUSEC_B_0x0 = 0;
        /** @brief SBS_FPUIMP register only accessible through secure transaction */
    constexpr std::uint32_t SBS_SECCFGR_FPUSEC_B_0x1 = 1;

    /** @brief control accessibility of SMPS_DIV_CLOCK _EN in SBS_PMCR */
    using SBS_SECCFGR_SDCE_SEC_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SMPS_DIV_CLOCK _EN accessible through a secure or non-secure transaction (value: 0)
     *          - B_0x1: SMPS_DIV_CLOCK _EN only accessible through a secure transaction (value: 1)
     */
        /** @brief SMPS_DIV_CLOCK _EN accessible through a secure or non-secure transaction */
    constexpr std::uint32_t SBS_SECCFGR_SDCE_SEC_EN_B_0x0 = 0;
        /** @brief SMPS_DIV_CLOCK _EN only accessible through a secure transaction */
    constexpr std::uint32_t SBS_SECCFGR_SDCE_SEC_EN_B_0x1 = 1;

    /** @brief SBS product mode and configuration register */
    using SBS_PMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief booster enable Set this bit to reduce the total harmonic distortion of the analog switch when the processor supply is below 2.7 V. The booster can be activated to guaranty AC performance on analog switch when the supply is below 2.7 V. When the booster is activated, the analog switch performances are the same as with the full voltage range. */
    using SBS_PMCR_BOOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Booster disabled (value: 0)
     *          - B_0x1: Booster enabled (value: 1)
     */
        /** @brief Booster disabled */
    constexpr std::uint32_t SBS_PMCR_BOOSTEN_B_0x0 = 0;
        /** @brief Booster enabled */
    constexpr std::uint32_t SBS_PMCR_BOOSTEN_B_0x1 = 1;

    /** @brief booster VDD selection Note: Booster must not be used when VDDA 2.7 V, but VDD 2.7 V (add current consumption). When both VDD 2.7 V and VDDA 2.7 V, booster is needed to get full AC performances from I/O analog switches. */
    using SBS_PMCR_BOOSTVDDSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDA is selected as VBOOSTER supply (BOOSTE = 0) (value: 0)
     *          - B_0x1: VDD is selected as VBOOSTER supply (regardless BOOSTEN that must be cleared to avoid unwanted power consumption) (value: 1)
     */
        /** @brief VDDA is selected as VBOOSTER supply (BOOSTE = 0) */
    constexpr std::uint32_t SBS_PMCR_BOOSTVDDSEL_B_0x0 = 0;
        /** @brief VDD is selected as VBOOSTER supply (regardless BOOSTEN that must be cleared to avoid unwanted power consumption) */
    constexpr std::uint32_t SBS_PMCR_BOOSTVDDSEL_B_0x1 = 1;

    /** @brief Fast-mode Plus command on PB(6) */
    using SBS_PMCR_PB6_FMPLUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast-mode Plus mode on PB(6) is disabled (value: 0)
     *          - B_0x1: Fast-mode Plus mode on PB(6) is enabled (value: 1)
     */
        /** @brief Fast-mode Plus mode on PB(6) is disabled */
    constexpr std::uint32_t SBS_PMCR_PB6_FMPLUS_B_0x0 = 0;
        /** @brief Fast-mode Plus mode on PB(6) is enabled */
    constexpr std::uint32_t SBS_PMCR_PB6_FMPLUS_B_0x1 = 1;

    /** @brief Fast-mode Plus command on PB(7) */
    using SBS_PMCR_PB7_FMPLUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast-mode Plus mode on PB(7) is disabled (value: 0)
     *          - B_0x1: Fast mode plus mode on PB(7) is enabled (value: 1)
     */
        /** @brief Fast-mode Plus mode on PB(7) is disabled */
    constexpr std::uint32_t SBS_PMCR_PB7_FMPLUS_B_0x0 = 0;
        /** @brief Fast mode plus mode on PB(7) is enabled */
    constexpr std::uint32_t SBS_PMCR_PB7_FMPLUS_B_0x1 = 1;

    /** @brief Fast-mode Plus command on PB(8) */
    using SBS_PMCR_PB8_FMPLUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast-mode Plus mode on PB(8) is disabled (value: 0)
     *          - B_0x1: Fast-mode Plus mode on PB(8) is enabled (value: 1)
     */
        /** @brief Fast-mode Plus mode on PB(8) is disabled */
    constexpr std::uint32_t SBS_PMCR_PB8_FMPLUS_B_0x0 = 0;
        /** @brief Fast-mode Plus mode on PB(8) is enabled */
    constexpr std::uint32_t SBS_PMCR_PB8_FMPLUS_B_0x1 = 1;

    /** @brief Fast-mode Plus command on PB(9) */
    using SBS_PMCR_PB9_FMPLUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fast-mode Plus mode on PB(9) disabled (value: 0)
     *          - B_0x1: Fast-mode Plus mode on PB(9) enabled (value: 1)
     */
        /** @brief Fast-mode Plus mode on PB(9) disabled */
    constexpr std::uint32_t SBS_PMCR_PB9_FMPLUS_B_0x0 = 0;
        /** @brief Fast-mode Plus mode on PB(9) enabled */
    constexpr std::uint32_t SBS_PMCR_PB9_FMPLUS_B_0x1 = 1;

    /** @brief Ethernet PHY interface selection Other: reserved */
    using SBS_PMCR_ETH_SEL_PHY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GMII or MII (value: 0)
     *          - B_0x1: reserved (RGMII) (value: 1)
     *          - B_0x4: RMII (value: 4)
     */
        /** @brief GMII or MII */
    constexpr std::uint32_t SBS_PMCR_ETH_SEL_PHY_B_0x0 = 0;
        /** @brief reserved (RGMII) */
    constexpr std::uint32_t SBS_PMCR_ETH_SEL_PHY_B_0x1 = 1;
        /** @brief RMII */
    constexpr std::uint32_t SBS_PMCR_ETH_SEL_PHY_B_0x4 = 4;

    /** @brief SBS FPU interrupt mask register */
    using SBS_FPUIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FPU interrupt enable Set and cleared by software to enable the Cortex-M33 FPU interrupts FPU_IE[5]: inexact interrupt enable (interrupt disabled at reset) FPU_IE[4]: input abnormal interrupt enable FPU_IE[3]: overflow interrupt enable FPU_IE[2]: underflow interrupt enable FPU_IE[1]: divide-by-zero interrupt enable FPU_IE[0]: invalid operation interrupt enable */
    using SBS_FPUIMR_FPU_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS memory erase status register */
    using SBS_MESR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief erase after reset status This bit shows the status of the protection for SRAM2, BKPRAM, ICACHE, DCACHE, ICACHE and PKA. It is set by hardware and reset by software */
    using SBS_MESR_MCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Memory erase on going (if not yet cleared by software) (value: 0)
     *          - B_0x1: Memory erase done (value: 1)
     */
        /** @brief Memory erase on going (if not yet cleared by software) */
    constexpr std::uint32_t SBS_MESR_MCLR_B_0x0 = 0;
        /** @brief Memory erase done */
    constexpr std::uint32_t SBS_MESR_MCLR_B_0x1 = 1;

    /** @brief end-of-erase status for ICACHE and PKA RAM This bit shows the status of the protection for ICACHE and PKA. It is set by hardware and reset by software. */
    using SBS_MESR_IPMEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE and PKA ram erase on going (value: 0)
     *          - B_0x1: ICACHE and PKA ram erase ended (value: 1)
     */
        /** @brief ICACHE and PKA ram erase on going */
    constexpr std::uint32_t SBS_MESR_IPMEE_B_0x0 = 0;
        /** @brief ICACHE and PKA ram erase ended */
    constexpr std::uint32_t SBS_MESR_IPMEE_B_0x1 = 1;

    /** @brief SBS compensation cell for I/Os control and status register */
    using SBS_CCCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable compensation cell for VDDIO power rail This bit enables the I/O compensation cell. */
    using SBS_CCCSR_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O compensation cell disabled (value: 0)
     *          - B_0x1: I/O compensation cell enabled (value: 1)
     */
        /** @brief I/O compensation cell disabled */
    constexpr std::uint32_t SBS_CCCSR_EN1_B_0x0 = 0;
        /** @brief I/O compensation cell enabled */
    constexpr std::uint32_t SBS_CCCSR_EN1_B_0x1 = 1;

    /** @brief code selection for VDDIO power rail (reset value set to 1) This bit selects the code to be applied for the I/O compensation cell. */
    using SBS_CCCSR_CS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Code from the cell (available in the SBS_CCVR) (value: 0)
     *          - B_0x1: Code from SBS_CCCR (value: 1)
     */
        /** @brief Code from the cell (available in the SBS_CCVR) */
    constexpr std::uint32_t SBS_CCCSR_CS1_B_0x0 = 0;
        /** @brief Code from SBS_CCCR */
    constexpr std::uint32_t SBS_CCCSR_CS1_B_0x1 = 1;

    /** @brief enable compensation cell for VDDIO2 power rail This bit enables the I/O compensation cell. */
    using SBS_CCCSR_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/O compensation cell disabled (value: 0)
     *          - B_0x1: I/O compensation cell enabled (value: 1)
     */
        /** @brief I/O compensation cell disabled */
    constexpr std::uint32_t SBS_CCCSR_EN2_B_0x0 = 0;
        /** @brief I/O compensation cell enabled */
    constexpr std::uint32_t SBS_CCCSR_EN2_B_0x1 = 1;

    /** @brief code selection for VDDIO2 power rail (reset value set to 1) This bit selects the code to be applied for the I/O compensation cell. */
    using SBS_CCCSR_CS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Code from the cell (available in SBS_CCVR) (value: 0)
     *          - B_0x1: Code from SBS_CCCR (value: 1)
     */
        /** @brief Code from the cell (available in SBS_CCVR) */
    constexpr std::uint32_t SBS_CCCSR_CS2_B_0x0 = 0;
        /** @brief Code from SBS_CCCR */
    constexpr std::uint32_t SBS_CCCSR_CS2_B_0x1 = 1;

    /** @brief VDDIO compensation cell ready flag This bit provides the status of the compensation cell. */
    using SBS_CCCSR_RDY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO compensation cell not ready (value: 0)
     *          - B_0x1: VDDIO compensation cell ready (code value provided by the cell can be used) (value: 1)
     */
        /** @brief VDDIO compensation cell not ready */
    constexpr std::uint32_t SBS_CCCSR_RDY1_B_0x0 = 0;
        /** @brief VDDIO compensation cell ready (code value provided by the cell can be used) */
    constexpr std::uint32_t SBS_CCCSR_RDY1_B_0x1 = 1;

    /** @brief VDDIO2 compensation cell ready flag This bit provides the status of the VDDIO2 compensation cell. */
    using SBS_CCCSR_RDY2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO2 compensation cell not ready (value: 0)
     *          - B_0x1: VDDIO2 compensation cell ready (code value provided by the cell can be used) (value: 1)
     */
        /** @brief VDDIO2 compensation cell not ready */
    constexpr std::uint32_t SBS_CCCSR_RDY2_B_0x0 = 0;
        /** @brief VDDIO2 compensation cell ready (code value provided by the cell can be used) */
    constexpr std::uint32_t SBS_CCCSR_RDY2_B_0x1 = 1;

    /** @brief SBS compensation cell for I/Os value register */
    using SBS_CCVALR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief compensation value for the NMOS transistor This value is provided by the cell and must be interpreted by the processor to compensate the slew rate in the functional range. */
    using SBS_CCVALR_ANSRC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief compensation value for the PMOS transistor This value is provided by the cell and must be interpreted by the processor to compensate the slew rate in the functional range. */
    using SBS_CCVALR_APSRC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compensation value for the NMOS transistor This value is provided by the cell and must be interpreted by the processor to compensate the slew rate in the functional range. */
    using SBS_CCVALR_ANSRC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief compensation value for the PMOS transistor This value is provided by the cell and must be interpreted by the processor to compensate the slew rate in the functional range. */
    using SBS_CCVALR_APSRC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS compensation cell for I/Os software code register */
    using SBS_CCSWCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMOS compensation code for VDD power rails This bitfield is written by software to define an I/O compensation cell code for NMOS transistors of the VDD power rail. This code is applied to the I/O when CS1 is set in SBS_CCSR. */
    using SBS_CCSWCR_SW_ANSRC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMOS compensation code for the VDD power rails This bitfield is written by software to define an I/O compensation cell code for PMOS transistors of the VDDIO power rail. This code is applied to the I/O when CS1 is set in SBS_CCSR. */
    using SBS_CCSWCR_SW_APSRC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMOS compensation code for VDDIO power rails This bitfield is written by software to define an I/O compensation cell code for NMOS transistors of the VDD power rail. This code is applied to the I/O when CS2 is set in SBS_CCSR. */
    using SBS_CCSWCR_SW_ANSRC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMOS compensation code for the VDDIO power rails This bitfield is written by software to define an I/O compensation cell code for PMOS transistors of the VDDIO power rail. This code is applied to the I/O when CS2 is set in SBS_CCSR. */
    using SBS_CCSWCR_SW_APSRC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SBS Class B register */
    using SBS_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief core lockup lock This bit is set by software and cleared only by a system reset. It can be used to enable and lock the lockup (HardFault) output of Cortex-M33 with TIM1/8/15/16/17 break inputs. */
    using SBS_CFGR2_CLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lockup output disconnected from timer break inputs (value: 0)
     *          - B_0x1: lockup output connected to timer break inputs (value: 1)
     */
        /** @brief lockup output disconnected from timer break inputs */
    constexpr std::uint32_t SBS_CFGR2_CLL_B_0x0 = 0;
        /** @brief lockup output connected to timer break inputs */
    constexpr std::uint32_t SBS_CFGR2_CLL_B_0x1 = 1;

    /** @brief SRAM ECC error lock This bit is set by software and cleared only by a system reset. It can be used to enable and lock the SRAM double ECC error signal with break input of TIM1/8/15/16/17. */
    using SBS_CFGR2_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM double ECC error flag disconnected from timer break inputs (value: 0)
     *          - B_0x1: SRAM double ECC error flag connected to timer break inputs (value: 1)
     */
        /** @brief SRAM double ECC error flag disconnected from timer break inputs */
    constexpr std::uint32_t SBS_CFGR2_SEL_B_0x0 = 0;
        /** @brief SRAM double ECC error flag connected to timer break inputs */
    constexpr std::uint32_t SBS_CFGR2_SEL_B_0x1 = 1;

    /** @brief PVD lock This bit is set by software and cleared only by a system reset. It can be used to enable and lock the PVD connection with TIM1/8/15/16/17 break inputs. */
    using SBS_CFGR2_PVDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD interrupt disconnected from timer break inputs. PVD_EN and PVD_SEL[2:0] in the PWR registers are read/write. (value: 0)
     *          - B_0x1: PVD interrupt is connected to timer break inputs. PVD_EN and PVD_SEL[2:0] in the PWR registers are read only (value: 1)
     */
        /** @brief PVD interrupt disconnected from timer break inputs. PVD_EN and PVD_SEL[2:0] in the PWR registers are read/write. */
    constexpr std::uint32_t SBS_CFGR2_PVDL_B_0x0 = 0;
        /** @brief PVD interrupt is connected to timer break inputs. PVD_EN and PVD_SEL[2:0] in the PWR registers are read only */
    constexpr std::uint32_t SBS_CFGR2_PVDL_B_0x1 = 1;

    /** @brief ECC lock This bit is set and cleared by software. It can be used to enable and lock the Flash memory double ECC error with break input of TIM1/8/15/6/17. */
    using SBS_CFGR2_ECCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: double ECC error flag disconnected to timer break inputs (value: 0)
     *          - B_0x1: double ECC error flag connected to timer break inputs (value: 1)
     */
        /** @brief double ECC error flag disconnected to timer break inputs */
    constexpr std::uint32_t SBS_CFGR2_ECCL_B_0x0 = 0;
        /** @brief double ECC error flag connected to timer break inputs */
    constexpr std::uint32_t SBS_CFGR2_ECCL_B_0x1 = 1;

    /** @brief SBS CPU non-secure lock register */
    using SBS_CNSLCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTOR_NS register lock This bit is set by software and cleared only by a system reset. */
    using SBS_CNSLCKR_LOCKNSVTOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VTOR_NS register write enabled (value: 0)
     *          - B_0x1: VTOR_NS register write disabled (value: 1)
     */
        /** @brief VTOR_NS register write enabled */
    constexpr std::uint32_t SBS_CNSLCKR_LOCKNSVTOR_B_0x0 = 0;
        /** @brief VTOR_NS register write disabled */
    constexpr std::uint32_t SBS_CNSLCKR_LOCKNSVTOR_B_0x1 = 1;

    /** @brief non-secure MPU register lock This bit is set by software and cleared only by a system reset. When set, this bit disables write access to non-secure MPU_CTRL_NS, MPU_RNR_NS and MPU_RBAR_NS registers. */
    using SBS_CNSLCKR_LOCKNSMPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure MPU registers write enabled (value: 0)
     *          - B_0x1: non-secure MPU registers write disabled (value: 1)
     */
        /** @brief non-secure MPU registers write enabled */
    constexpr std::uint32_t SBS_CNSLCKR_LOCKNSMPU_B_0x0 = 0;
        /** @brief non-secure MPU registers write disabled */
    constexpr std::uint32_t SBS_CNSLCKR_LOCKNSMPU_B_0x1 = 1;

    /** @brief SBS CPU secure lock register */
    using SBS_CSLCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTOR_S and AIRCR register lock This bit is set by software and cleared only by a system reset. When set, this bit disables write access to VTOR_S register, PRIS and BFHFNMINS bits in the AIRCR register. */
    using SBS_CSLCKR_LOCKSVTAIRCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VTOR_S register PRIS and BFHFNMINS bits in the AIRCR register write enabled (value: 0)
     *          - B_0x1: VTOR_S register PRIS and BFHFNMINS bits in the AIRCR register write disabled (value: 1)
     */
        /** @brief VTOR_S register PRIS and BFHFNMINS bits in the AIRCR register write enabled */
    constexpr std::uint32_t SBS_CSLCKR_LOCKSVTAIRCR_B_0x0 = 0;
        /** @brief VTOR_S register PRIS and BFHFNMINS bits in the AIRCR register write disabled */
    constexpr std::uint32_t SBS_CSLCKR_LOCKSVTAIRCR_B_0x1 = 1;

    /** @brief secure MPU registers lock This bit is set by software and cleared only by a system reset. When set, this bit disables write access to secure MPU_CTRL, MPU_RNR and MPU_RBAR registers. */
    using SBS_CSLCKR_LOCKSMPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secure MPU registers writes enabled (value: 0)
     *          - B_0x1: Secure MPU registers writes disabled (value: 1)
     */
        /** @brief Secure MPU registers writes enabled */
    constexpr std::uint32_t SBS_CSLCKR_LOCKSMPU_B_0x0 = 0;
        /** @brief Secure MPU registers writes disabled */
    constexpr std::uint32_t SBS_CSLCKR_LOCKSMPU_B_0x1 = 1;

    /** @brief SAU registers lock This bit is set by software and cleared only by a system reset. When set, this bit disables write access to SAU_CTRL, SAU_RNR, SAU_RBAR and SAU_RLAR registers. */
    using SBS_CSLCKR_LOCKSAU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAU registers write enabled (value: 0)
     *          - B_0x1: SAU registers write disabled (value: 1)
     */
        /** @brief SAU registers write enabled */
    constexpr std::uint32_t SBS_CSLCKR_LOCKSAU_B_0x0 = 0;
        /** @brief SAU registers write disabled */
    constexpr std::uint32_t SBS_CSLCKR_LOCKSAU_B_0x1 = 1;

    /** @brief SBS flift ECC NMI mask register */
    using SBS_ECCNMIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMI behavior setup when a double ECC error occurs on flitf data part */
    using SBS_ECCNMIR_ECCNMI_MASK_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NMI generated if a double ECC error in the flitf data part (value: 0)
     *          - B_0x1: NMI not generated if a double ECC error in the flitf data part (value: 1)
     */
        /** @brief NMI generated if a double ECC error in the flitf data part */
    constexpr std::uint32_t SBS_ECCNMIR_ECCNMI_MASK_EN_B_0x0 = 0;
        /** @brief NMI not generated if a double ECC error in the flitf data part */
    constexpr std::uint32_t SBS_ECCNMIR_ECCNMI_MASK_EN_B_0x1 = 1;

}

#endif
