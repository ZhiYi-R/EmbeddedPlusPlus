/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_PWRC_HPP
#define EMBEDDED_PP_STM32WL33_PWRC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PWRC peripheral */
namespace STM32WL33::PWRC {

    /** @brief CR1 register */
    using CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPMS Low Power Mode Selection Selection of the low power mode entered when CPU enters DEEP SLEEP mode and BLE is rdy2sleep. - 0: Deep Stop mode (default) - 1: Shutdown mode */
    using CR1_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENSDNBOR: Enable BOR supply monitoring during shutdown mode. - 1: the PD_ALL_SHUTDOWN signal is not set during SHUTDOWN mode - 0: the PD_ALL_SHUTDOWN signal is set during SHUTDOWN mode. */
    using CR1_ENSDNBOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBIAS_RUN_AUTO: Enable automatic IBIAS control during RUN/DEEPSTOP mode. - 0: IBIAS control is manual (and controlled by IBIAS_RUN_STATE register) - 1: IBIAS control is automatic (default). */
    using CR1_IBIAS_RUN_AUTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBIAS_RUN_STATE: Enable/Disable IBIAS during RUN mode when automatic mode is disabled. - 0: IBIAS control is disabled (default). - 1: IBIAS control is enabled. */
    using CR1_IBIAS_RUN_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APC Apply Pull-up and pull-down configuration from CPU - 1: the I/O pull-up and pull-down configurations defined in the PUCRx and PDCRx registers is applied. - 0: the PUCRx and PDCRx are not used to control the I/O pull-up and pull-down configuration of the product I/Os. */
    using CR1_APC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENBORH: enable BORH configuration - 1: BORH is enabled, threshold level depends on SELBOR[1:0] - 0: BORH off (VBOR0): threshold level for above 1.60V voltage operation. */
    using CR1_ENBORH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SELBORH[1:0]: BORH selection of Vbor threshold - 11: BORH Level 4(VBOR4): threshold level for above 2.81 V voltage operation. - 10: BORH Level 3 (VBOR3): threshold level for above 2.52 V voltage operation - 01: BORH Level 2 (VBOR2): threshold level for above 2.21 V voltage operation - 00: BORH Level 1 (VBOR1): threshold level for above 2.0V voltage operation. */
    using CR1_SELBORH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENBORL: Enable BORL reset supervising during RUN mode. - 0: No BORL is monitored during RUN mode. - 1: BORL is monitored during RUN mode (a POR reset will happen if VDDIO goes below 1.6V during RUN mode) (default). Note: Enabling this feature prevents blocking the device if VDDIO goes below supported voltages during RUN. */
    using CR1_ENBORL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CR2 register */
    using CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVDE Programmable Voltage Detector Enable When this bit is set the Power Voltage Detector is enabled */
    using CR2_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVDLS[2:0] Programmable Voltage Detector Level selection - 000: 2.05 V - Lowest level - 001: 2.20 V - 010: 2.36 V - 011: 2.52 V - 100: 2.64 V - 101: 2.81 V - 110: 2.91 V - Highest level - 111: External input analog voltage (compare internally to VBGP; When external input VBGP then PVDO=1) */
    using CR2_PVDLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGRET: PA2 and PA3 retention enable after DEEPSTOP - 0: PA2, PA3 don't retain their status exiting from DEEPSTOP (default). - 1: PA2, PA3 retain their status exiting from DEEPSTOP. */
    using CR2_DBGRET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMRET1: RAM1 retention during low power mode - 1: RAM1 bank is powered during low power mode - 0: RAM1 bank is disabled during low power mode (by default) */
    using CR2_RAMRET1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief force LPREG=1.2V during DEEPSTOP - 1: Force LPREG=1.2V during DEEPSTOP - 0: No Force (Default) Note LPREG= 1.2v can still apply when LCDEN or COMP.SCALEREN request it */
    using CR2_LPREG_FORCE_VH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief status LPREG VH (1.2v) during DEEPSTOP - 1: LPREG=1.2V during DEEPSTOP - 0: LPREG=1V during DEEPSTOP */
    using CR2_LPREG_VH_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPIORET: GPIO retention enable. - 0: Release GPIO retention after deepstop (Should be reset after restore Context) - 1: Enable GPIO Retention during deepstop (Must be set before deepstop) */
    using CR2_GPIORET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENTS: Enable Temperature Sensor - 1: Temperature sensor is enabled - 0: Temperature sensor is disabled */
    using CR2_ENTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFREGEN: RF Regulator Enable - 1: Enable RF Regulator - 0: Disable RF Regulator (Note: RF Regulator can still be enabled by the RFSUGB or RCC_CR.HSEON) */
    using CR2_RFREGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFREGCEXT: RF Regulator External Supply Bypass - 1: External supply bypass capability - 0: Internal supply only */
    using CR2_RFREGCEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFREGBYP: RF Regulator Bypass Enable - 1: LDO output connected to VSMPS. - 0: internally generated 1.2V */
    using CR2_RFREGBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFDREGRDY: RF Regulator Ready flag - 1: RF Regulator is ready - 0: RF Regulator is not ready */
    using CR2_RFREGRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFREGON_STATUS: RF Regulator On Status - 1: RF Regulator is enabled - 0: RF Regulator is disabled */
    using CR2_RFREGON_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IEWU register */
    using IEWU = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWL0 Enable Internal WakeUp line LPUART When this bit is set the internal wakeup line is enabled and a rising edge will trigger a CPU wakeup event. - 0: wakeup disabled. - 1: wakeup enabled. */
    using IEWU_EIWL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EIWL1 Enable Internal WakeUp line RTC When this bit is set the internal wakeup line is enabled and a rising edge will trigger a CPU wakeup event. - 0: wakeup disabled. - 1: wakeup enabled. */
    using IEWU_EIWL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EIWL2 Enable Internal WakeUp line LCD When this bit is set the internal wakeup line is enabled and a rising edge will trigger a CPU wakeup event. - 0: wakeup disabled. - 1: wakeup enabled. */
    using IEWU_EIWL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EIWL3 Enable Internal Wakeup line COMP When this bit is set the COMP wakeup is enabled and an edge will trigger a COMP wakeup event - 0: wakeup disabled. - 1: wakeup enabled. */
    using IEWU_EIWL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EIWL4 Enable Internal Wakeup line LCSC When this bit is set the LCSC wakeup is enabled and an edge will trigger a LCSC wakeup event - 0: wakeup disabled. - 1: wakeup enabled. */
    using IEWU_EIWL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWMRSUB Wakeup MRSUBG Enable When this bit is set the MRSUBG wakeup is enabled and a rising edge will trigger a MRSUBG wakeup event - 0: MRSUBG wakeup disabled. - 1: MRSUBG wakeup enabled. */
    using IEWU_EWMRSUBG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWMRSUBGHCPU Wakeup MRSUBG Host CPU Enable When this bit is set the MRSUBG HOST CPU wakeup is enabled and a rising edge will trigger a MRSUBG Host CPU wakeup event - 0: MRSUBG Host CPU wakeup disabled. - 1: MRSUBG Host CPU wakeup enabled. */
    using IEWU_EWMRSUBGHCPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWLPAWUR: Wakeup Bubble Enable When this bit is set the Bubble wakeup is enabled and a rising edge will trigger a LPAWUR wakeup event - 0: LPAWUR wakeup disabled. - 1: LPAWUR wakeup enabled. */
    using IEWU_EWLPAWUR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUP register */
    using IWUP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUP0: Wakeup polarity for internal wakeup line 0 event (LPUART). - 0: Detection of wakeup event on rising edge (default). - 1: Detection of wakeup event on falling edge. */
    using IWUP_IWUP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUP1: Wakeup polarity for internal wakeup line 1 event (RTC). - 0: Detection of wakeup event on rising edge (default). - 1: Detection of wakeup event on falling edge. */
    using IWUP_IWUP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUP2: Wakeup polarity for internal wakeup line 2 event (LCD). - 0: Detection of wakeup event on rising edge (default). - 1: Detection of wakeup event on falling edge. */
    using IWUP_IWUP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUP3: Wakeup polarity for internal wakeup line 3 event (COMP). - 0: Detection of wakeup event on rising edge (default). - 1: Detection of wakeup event on falling edge. */
    using IWUP_IWUP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUP4: Wakeup polarity for internal wakeup line 4 event (LCSC). - 0: Detection of wakeup event on rising edge (default). - 1: Detection of wakeup event on falling edge. */
    using IWUP_IWUP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WMRSUBGHP: Wakeup polarity for internal wakeup MRSUBG event - 0: Detection of wakeup event on rising edge (default). - 1: Detection of wakeup event on falling edge. */
    using IWUP_WMRSUBGHP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WMRSUBGHCPUP: Wakeup polarity for internal wakeup MRSUBG Host CPU event - 0: Detection of wakeup event on rising edge (default). - 1: Detection of wakeup event on falling edge. */
    using IWUP_WMRSUBGHCPUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WLPAWURP: Wakeup polarity for wakeup LPAWUR event. - 0: Detection of wakeup event on rising edge (default). - 1: Detection of wakeup event on falling edge. */
    using IWUP_WLPAWURP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUF register */
    using IWUF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUF0: Internal wakeup flag (LPUART). - 0: no wakeup from LPUART occurred since last clear. - 1: a wakeup from LPUART occurred since last clear. Cleared by writing 1 in this bit. */
    using IWUF_IWUF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUF1: Internal wakeup flag (RTC). - 0: no wakeup from RTC occurred since last clear. - 1: a wakeup from RTC occurred */
    using IWUF_IWUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUF2: Internal wakeup flag (LCD). - 0: no wakeup from LCD occurred since last clear. - 1: a wakeup from LCD occurred since last clear. Cleared by writing 1 in this bit. */
    using IWUF_IWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUF3: Internal wakeup flag (COMP). - 0: no wakeup from COMP occurred since last clear. - 1: a wakeup from COMP occurred since last clear. Cleared by writing 1 in this bit. */
    using IWUF_IWUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUF4: Internal wakeup flag (LCSC). - 0: no wakeup from LCSC occurred since last clear. - 1: a wakeup from LCSC occurred since last clear. Cleared by writing 1 in this bit. */
    using IWUF_IWUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WMRSUBGF Wakeup MRSUBG Flag This bit is set by hardware when a MRSUBG wakeup is detected It is cleared by a reset pad or by software writing 1 in this bit field. - 0: No MRSUBG Wakeup detected - 1: MRSUBG Wakeup detected writting 1 in this bit, clears the interrupt */
    using IWUF_WMRSUBGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WMRSUBGHCPUF Wakeup MRSUBG HOST CPU Flag (cf. user manual) This bit is set by hardware when a MRSUBG HOST CPU wakeup is detected It is cleared by a reset pad or by software writing 1 in this bit field. - 0: No MRSUBG Host CPU wakeup detected - 1: MRSUBG Host CPU wakeup detected writting 1 in this bit, clears the interrupt */
    using IWUF_WMRSUBGHCPUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WLPAWURF Wakeup LPAWUR Flag (cf. user manual) This bit is set by hardware when a LPAWUR wakeup is detected It is cleared by a reset pad or by software writing 1 in this bit field. - 0: No LPAWUR wakeup detected - 1: LPAWUR wakeup detected writting 1 in this bit, clears the interrupt */
    using IWUF_WLPAWURF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SR2 register */
    using SR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSBYPR: SMPS Force Bypass Control Replica This bit mirrors the actual BYPASS_3V3 control signal driven to the SMPS regulator, dependant on the real working state. */
    using SR2_SMPSBYPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSENR: SMPS Enable Control Replica This bit mirrors the actual ENABLE_3V3 control signal driven to the SMPS regulator, dependant on the real working state. */
    using SR2_SMPSENR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSRDY: SMPS Ready Status This bit provides the information whether SMPS is ready. - 0: SMPS regulator is not ready - 1: SMPS regulator is ready. */
    using SR2_SMPSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit3: PB15 input value on VDD33 latched at POR Bit2: PB14 input value on VDD33 latched at POR Bit1: PB13 input value on VDD33 latched at POR Bit0: PB12 input value on VDD33 latched at POR */
    using SR2_IOBOOTVAL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGLPS: Regulator Low Power Started This bit provides the information whether low power regulator is ready. - 0: LP regulator is not ready. - 1: LP regulator is ready. */
    using SR2_REGLPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGMS: Main regulator ready status. - 0: The Main regulator is not ready. - 1: The Main regulator is ready. */
    using SR2_REGMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVDO: Power Voltage Detector Output When the Power Voltage Detector is enabled (CR2.PVDE) this bit is set when the system supply (VDDIO) is lower than the selected PVD threshold (CR2.PVDLS) */
    using SR2_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit3: PA11 input value on VDD33 latched at POR Bit2: PA10 input value on VDD33 latched at POR Bit1: PA9 input value on VDD33 latched at POR Bit0: PA8 input value on VDD33 latched at POR */
    using SR2_IOBOOTVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CR5 register */
    using CR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSLVL[3:0] SMPS Output Level Voltage Selection Select the SMPS output voltage with a granularity of 50mV. Default = '0100' (1.4V) Vout = 1.2 + 0.05*SMPSOUT (V) */
    using CR5_SMPSLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSBOMSEL: SMPS BOM Selection: - 00: BOM1 - 01: BOM2 (default) - 10: BOM3 - 11: n/a */
    using CR5_SMPSBOMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS_BOF_STATIC: SMPS Bypass on the Fly static - 0 : disabled (by default) - 1 : SMPS Bypass on the fly static is enabled (EN_SW=1) */
    using CR5_SMPS_BOF_STATIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NOSMPS_BOF: No SMPS Mode to be used in accordance to SMPS_BOF_STATIC =1 When this bit is set, the SMPS regulator will be disabled. Note that this configuration should be used only SMPS_BOF_STATIC=1. - 0 : No effect, SMPS is enabled. (default) - 1 : SMPS is disabled; */
    using CR5_NOSMPS_BOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSLPOPEN: In Low Power mode SMPS is in OPEN mode (instead of PRECHARGE mode). When this bit is set, when the chip is in Low power mode the SMPS regulator will be disabled (HZ) Documentation needed. - 0 : in Low Power mode, SMPS is in PRECHARGE, output is connected to VDDIO. (default) - 1 : in Low Power mode, SMPS is disabled, output is floating */
    using CR5_SMPSLPOPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSFB Force SMPS Regulator in bypass mode When this bit is set, the SMPS regulator will be forced to operate in precharge mode. the actual state of SMPS can be observed thanks to the replica SR2.SMPSBYPR. - 0 : no effect (by default) - 1 : SMPS is disabled and bypassed (ENABLE_3V3=0 and PRECHARGE_3V3=1) */
    using CR5_SMPSFBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NOSMPS: No SMPS Mode When this bit is set, the SMPS regulator will be disabled. Note that this configuration should be used only when SMPS_FB pad is directly connected to VBATT or Vext, without L/C BOM. - 0 : No effect, SMPS is enabled. (Default) - 1 : SMPS is disabled; */
    using CR5_NOSMPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS_ENA_DCM: enable discontinuous conduction mode - 0 : disable (Default) - 1 : enable */
    using CR5_SMPS_ENA_DCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLKDETR_DISABLE: disable SMPS clock detection The SMPS clock detection enables an automatic SMPS bypass switching in case of unwanted loss of SMPS clock. - 0 : SMPS clock detection enabled (default) - 1 : SMPS clock detection disabled */
    using CR5_CLKDETR_DISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS_PRECH_CUR_SEL[1:0] Selection for SMPS PRECHARGE limit current - 00: 2.5mA - 01: 5mA - 10: 10mA - 11: 20mA (default) */
    using CR5_SMPS_PRECH_CUR_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS_BOF_DYN: SMPS Bypass on the Fly dynamic - 0 : disabled (by default) - 1 : SMPS Bypass on the fly dynamic is enabled (EN_LDO=1) */
    using CR5_SMPS_BOF_DYN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUCRA register */
    using PUCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUA[x] : Pull Up Port A Pull up activation on port A[i] pad when APC bit of PWRC CR1 is set - 1: Pull-Up activated on port A[i] when APC bit of PWRC CR1 bit is set and PWR_PDCRA[x] is reset - 0: Pull-Up not activated on port A[i] */
    using PUCRA_PUA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PDCRA register */
    using PDCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PDA[x]: Pull Down Port A Pull Down activation on port A[i] pad when APC bit of PWRC CR1 is set - 1: Pull-Down activated on Port A[i] when APC bit of PWRC CR1 bit is set - 0: Pull-Down not activated on Port A[i] */
    using PDCRA_PDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUCRB register */
    using PUCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUB[x] : Pull Up Port B Pull up activation on port B[i] pad when APC bit of PWRC CR1 is set - 1: Pull-Up activated on port B[i] when APC bit of PWRC CR1 bit is set and PWR_PDCRB[x] is reset - 0: Pull-Up not activated on port B[i] */
    using PUCRB_PUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PDCRB register */
    using PDCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PDB[x]: Pull Down Port B Pull Down activation on port B[i] pad when APC bit of PWRC CR1 is set - 1: Pull-Down activated on Port B[i] when APC bit of PWRC CR1 bit is set - 0: Pull-Down not activated on Port B[i] */
    using PDCRB_PDB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWUA register */
    using EWUA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWUA[x] Enable WakeUp line PA[x] When this bit is set the PA[x] wakeup line is enabled and a rising or falling edge on wakeup line PA[x] will trigger a CPU wakeup event depending on CR7.WUPA[x] bit. */
    using EWUA_EWUA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUPA register */
    using WUPA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUPA[x] Wake-up Line PA[x] Polarity This bit defines the polarity used for event detection on external wake-up line PA[x] - 0: Detection on high level (rising edge) - 1: Detection on low level (falling edge) */
    using WUPA_WUPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUFA register */
    using WUFA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUFA[x] WakeUp Flag PA[x] This bit is set when a wakeup is detected on wakeup line PA[x]. It is cleared by a reset pad or by writing 1 in this bit field. Writing 1 this bit, clears the interrupt: */
    using WUFA_WUFA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWUB register */
    using EWUB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWUB[x] Enable WakeUp line PB[x] When this bit is set the PB[x] wakeup line is enabled and a rising or falling edge on wakeup line PB[x] will trigger a CPU wakeup event depending on CR9.WUPB[x] bit. */
    using EWUB_EWUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUPB register */
    using WUPB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUPB[x] Wake-up Line PB[x] Polarity This bit defines the polarity used for event detection on external wake-up line PB[x] - 0: Detection on high level (rising edge) - 1: Detection on low level (falling edge) */
    using WUPB_WUPB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUFB register */
    using WUFB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUFB[x] WakeUp Flag PB[x] This bit is set when a wakeup is detected on wakeup line PB[x]. It is cleared by a reset pad or by writing 1 in this bit field. Writing 1 this bit, clears the interrupt: */
    using WUFB_WUFB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDWN_WUEN register */
    using SDWN_WUEN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUEN PB0 I/O WakeUp from shutdown Enable When this bit is set the PB0 wakeup from shutdown is enabled so that a rising or falling edge on PB0 (depending on SDWN_WUPOL..WUPOL bit) will trigger a CPU wakeup. It is cleared by a PORESETn. - 0: PB0 wakeup from shutdown disabled - 1: PB0 wakeup from shutdown enabled */
    using SDWN_WUEN_WUEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDWN_WUPOL register */
    using SDWN_WUPOL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUPOL PB0 I/O WakeUp from shutdown Polarity This bit defines the polarity used for wakeup from shutdown detection on PB0 pin. It is cleared by a PORESETn. - 0: Detection on high level (rising edge) - 1: Detection on low level (falling edge) */
    using SDWN_WUPOL_WUPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDWN_WUF register */
    using SDWN_WUF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUF PB0 I/O WakeUp from shutdown Flag This bit is set when a wakeup from shutdown is detected on PB0 pin. It is cleared by a PORESETn or by writing 0 in this bit field. - 0: Shutdown wakeup from PB0 not occurred - 1: Shutdown wakeup from PB0 occurred */
    using SDWN_WUF_WUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOF_TUNE register */
    using BOF_TUNE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOF_TUNE: selection of the Bypass on the Fly LDO output voltage. - 0:	1.2V - 1:	1.2V - 2:	1.2V - 3:	1.3V - 4:	1.4V (Default) - 5:	1.5V - 6:	1.6V - 7:	1.7V - 8:	1.8V - 9:	1.9V - 10:	2V - 11:	2.1V - 12:	2.2V - 13:	2.3V - 14:	2.4V - 15:	2.4V */
    using BOF_TUNE_BOF_TUNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGR register */
    using DBGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEEPSTOP2 low power saving mode emulation enable this bit enable an emulated debug DEEPSTOP low power mode. If emulation is enabled, entering in DEEPSTOP mode, the v12i power domain still enters power saving mode, but its clock and power are maintained. */
    using DBGR_DEEPSTOP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSFB Force ready check When this bit is set, the SMPS regulator will be forced to operate in precharge mode. the actual state of SMPS can be observed thanks to the replica SR2.SMPSBYPR. - 0 : no effect (by default) - 1 : SMPS is disabled and bypassed (ENABLE_3V3=0 and PRECHARGE_3V3=1) */
    using DBGR_SMPSFRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief KELVIN_TEST[2:0]: Enable TEST mode Kelvin for LDO_RF (Write protected by IFR3 key) - 000: 0mA (open) (default 0x0) - 001 for 1mA - 010 for 3mA - 011 for 5mA - 100 for 8mA - 101 for 10mA else: 0mA (open) for other combinations. */
    using DBGR_KELVIN_TEST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIS_PRECH[2:0]: disable precharge during deepstop (debug) allowed combination are: - 111: precharge and SMPS monitoring are disabled (whatever CR5.SMPSLPOPEN) - 101: precharge are activated only at deepstop exit (to be used only with CR5.SMPSLPOPEN=1) else: No effect (default 0x0) */
    using DBGR_DIS_PRECH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTSRR register */
    using EXTSRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEEPSTOPF System DeepStop Flag This bit is set by hardware and cleared only by a POR reset or by writing '1' in this bit field - 0: System has not been in DEEPSTOP mode - 1: System has been in DEEPSTOP mode */
    using EXTSRR_DEEPSTOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFPHASEF RFPHASE Flag This bit is set by hardware after a S3LP wake-up event (S3LP activation); it is cleared either by software, writing '1' in this bit field, or by hardware when Ready2Sleep signal is asserted by the Radio IP. - 0: RF IP does not require attention - 1: RF IP awake and requesting system attention */
    using EXTSRR_RFPHASEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGSMPS register */
    using DBGSMPS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TESTDIG: SMPS TEST_DIG_3V3[3:0] SMPS control signal */
    using DBGSMPS_TESTDIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TESTKEL: SMPS TEST_KEL_3V3[1:0] SMPS control signal */
    using DBGSMPS_TESTKEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HOT_STUP_3V3 SMPS control signal */
    using DBGSMPS_HOT_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NO_STUP_3V3 SMPS control signal */
    using DBGSMPS_NO_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TESTILIM: SMPS TEST_ILIM_3V3 SMPS control signal */
    using DBGSMPS_TESTILIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CTLRES_RAM_3V3 SMPS control signal */
    using DBGSMPS_CTLRES_RAMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIS_BIG_MOS_3V3 SMPS control signal */
    using DBGSMPS_DIS_BIG_MOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TEST_OL_3V3 SMPS control signal */
    using DBGSMPS_TEST_OL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIS_ILIM_3V3 SMPS control signal */
    using DBGSMPS_DIS_ILIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ILIM_BOOST_3V3 SMPS current limitation Boost - 0: Max current = 110mA (Default) - 1: Max current = 130mA */
    using DBGSMPS_ILIM_BOOST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOF_CUR_SEL Bypass On the Fly current limitation - 00 : 20mA - 01 : 40mA - 10 : 60mA (default) - 11 : no limit */
    using DBGSMPS_BOF_CUR_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMR register */
    using TRIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFD_REG_TRIM[2:0]: RF LDO Trimming By default, this value is taken from the engi bytes; and saved on V12o domain when OBL done. if associated ENGTRIM is enabled the RF LDO trimming can be controlled by the dedicated ENGTRIM register. Default= '100'. */
    using TRIMR_RFD_REG_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPARE field */
    using TRIMR_SPARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIM_MR[3:0]: Main Regulator Voltage Trimming By default, this value is taken from the engi bytes; and saved on V12o domain when OBL done. if associated ENGTRIM.TRIMMREN is enabled the Main Regulator Voltage can be controlled by the dedicated ENGTRIM.TRIM_MR register. Default= '0000'. */
    using TRIMR_TRIM_MR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS_TRIM[2:0]: SMPS Output Voltage Trimming By default, this value is taken from the engi bytes; and saved on V12o domain when OBL done. if associated ENGTRIM is enabled the SMPS output voltage can be controlled by the dedicated ENGTRIM register. Default= '011'. */
    using TRIMR_SMPS_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOF_TRIM[2:0]: Bypass On the Fly Output Voltage Trimming By default, this value is taken from the engi bytes; and saved on V12o domain when OBL done. if associated ENGTRIM is enabled the SMPS output voltage can be controlled by the dedicated ENGTRIM register. Default= '100'. */
    using TRIMR_BOF_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENGTRIM register */
    using ENGTRIM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMRFDREGEN: trimming RFREG enabled - 1: trimming bit applied from ENGTRIM register - 0: trimming bit applied from OBL (can be read on TRIMR register) */
    using ENGTRIM_TRIMRFDREGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIM_RFDREG: RF Regulator Trimming By default, this value is not applied, but taken from the engi bytes; if ENGTRIM.TRIMRFDREGEN=1, the startup current can be controlled by this register. */
    using ENGTRIM_TRIM_RFDREG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPARE field */
    using ENGTRIM_SPARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMMREN: trimming MR enabled - 1: trimming bit applied from ENGTRIM register - 0: trimming bit applied from OBL (can be read on TRIMR register) */
    using ENGTRIM_TRIMMREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIM_MR: Main Regulator Output Voltage Trimming By default, this value is not applied, but taken from the engi bytes; if ENGTRIM.TRIMMREN=1, the startup current can be controlled by this register. */
    using ENGTRIM_TRIM_MR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSTRIMEN: trimming SMPS enabled - 1: trimming bit applied from ENGTRIM register - 0: trimming bit applied from OBL (can be read on TRIMR register) */
    using ENGTRIM_SMPSTRIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS_TRIM: SMPS Output Voltage Trimming By default, this value is not applied, but taken from the engi bytes; if ENGTRIM.SMPSTRIMEN=1, the SMPS output voltage can be controlled by this register. */
    using ENGTRIM_SMPS_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG_STATUS_REG1 register */
    using DBG_STATUS_REG1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS_FSM_STATE[2:0]: Indicates the current state of the SMPS FSM inside the PWRC.: - 000: STARTUP - 001: SMPS_REQ - 010: SMPS_RUN - 011: STOP - 100: NOSMPS - 101: PRECHARGE - 110: NOSMPS_BOF */
    using DBG_STATUS_REG1_SMPS_FSM_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FLASH_FSM_STATE[2:0]: Indicates the current state of the FLASH FSM inside the PWRC: - 000: STATE1: FLASH POR - 001: STATE2: FLASH PWRUP - 010: STATE3: FLASH READY - 101: STATE4: FLASH SWITCH OFF - 110: STATE5: FLASH PWR DOWN */
    using DBG_STATUS_REG1_FLASH_FSM_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG_STATUS_REG2 register */
    using DBG_STATUS_REG2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMU_FSM_STATE[3:0]: Indicates the current state of the PMU FSM inside the PWRC. - 0000: POR - 0001: RUN - 0010: DS ENTRY - 0011: WAIT1 - 0100: WAIT2 - 0101: WAIT - 0110: WAIT3 - 0111: WAIT4 - 1000: ISOLATION - 1001: DEEPSTOP - 1010: SHUTDOWN - 1011: DEEPSTOP EXIT */
    using DBG_STATUS_REG2_PMU_FSM_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAM_FSM_STATE[1:0]: Indicates the current state of the RAM FSM inside the PWRC: - 00: POR - 01: POWER UP - 10: READY - 11: OFF */
    using DBG_STATUS_REG2_RAM_FSM_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENGTRIM2 register */
    using ENGTRIM2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOFTRIMEN: trimming BOF enabled - 1: trimming bit applied from ENGTRIM2 register - 0: trimming bit applied from OBL (can be read on TRIMR register) */
    using ENGTRIM2_BOFTRIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS_TRIM: SMPS Output Voltage Trimming By default, this value is not applied, but taken from the engi bytes; if ENGTRIM.BOFTRIMEN=1, the SMPS output voltage can be controlled by this register. */
    using ENGTRIM2_BOF_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
