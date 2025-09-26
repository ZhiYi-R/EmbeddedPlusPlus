/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7B3_PWR_HPP
#define EMBEDDED_PP_STM32H7B3_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PWR */
namespace STM32H7B3::PWR {

    /** @brief PWR control register 1 */
    using PWR_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power Deepsleep with SVOS3 (SVOS4 and SVOS5 always use low-power, regardless of the setting of this bit) */
    using PWR_CR1_LPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programmable voltage detector enable */
    using PWR_CR1_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programmable voltage detector level selection These bits select the voltage threshold detected by the PVD. Note: Refer to Section Electrical characteristics of the product datasheet for more details. */
    using PWR_CR1_PLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable backup domain write protection In reset state, the RCC_BDCR register, the RTC registers (including the backup registers), BREN and MOEN bits in PWR_CR2 register, are protected against parasitic write access. This bit must be set to enable write access to these registers. */
    using PWR_CR1_DBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash low-power mode in DStop mode This bit allows to obtain the best trade-off between low-power consumption and restart time when exiting from DStop mode. When it is set, the Flash memory enters low-power mode when D1 domain is in DStop mode. */
    using PWR_CR1_FLPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BOOSTE */
    using PWR_CR1_BOOSTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AVD_READY */
    using PWR_CR1_AVD_READY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System Stop mode voltage scaling selection These bits control the VCORE voltage level in system Stop mode, to obtain the best trade-off between power consumption and performance. */
    using PWR_CR1_SVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral voltage monitor on VDDA enable */
    using PWR_CR1_AVDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog voltage detector level selection These bits select the voltage threshold detected by the AVD. */
    using PWR_CR1_ALS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXIRAM1SO */
    using PWR_CR1_AXIRAM1SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXIRAM2SO */
    using PWR_CR1_AXIRAM2SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXIRAM3SO */
    using PWR_CR1_AXIRAM3SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBRAM1SO */
    using PWR_CR1_AHBRAM1SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHBRAM2SO */
    using PWR_CR1_AHBRAM2SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITCMSO */
    using PWR_CR1_ITCMSO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GFXSO */
    using PWR_CR1_GFXSO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSITFSO */
    using PWR_CR1_HSITFSO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRDRAMSO */
    using PWR_CR1_SRDRAMSO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR control status register 1 */
    using PWR_CSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programmable voltage detect output This bit is set and cleared by hardware. It is valid only if the PVD has been enabled by the PVDE bit. Note: since the PVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the PVDE bit is set. */
    using PWR_CSR1_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage levels ready bit for currently used VOS and SDLEVEL This bit is set to 1 by hardware when the voltage regulator and the SD converter are both disabled and Bypass mode is selected in PWR control register 3 (PWR_CR3). */
    using PWR_CSR1_ACTVOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VOS currently applied for VCORE voltage scaling selection. These bits reflect the last VOS value applied to the PMU. */
    using PWR_CSR1_ACTVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog voltage detector output on VDDA This bit is set and cleared by hardware. It is valid only if AVD on VDDA is enabled by the AVDEN bit. Note: Since the AVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the AVDEN bit is set. */
    using PWR_CSR1_AVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMCVDO */
    using PWR_CSR1_MMCVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This register is not reset by wakeup from Standby mode, RESET signal and VDD POR. It is only reset by VSW POR and VSWRST reset. This register shall not be accessed when VSWRST bit in RCC_BDCR register resets the VSW domain.After reset, PWR_CR2 register is write-protected. Prior to modifying its content, the DBP bit in PWR_CR1 register must be set to disable the write protection. */
    using PWR_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup regulator enable When set, the Backup regulator (used to maintain the backup RAM content in Standby and VBAT modes) is enabled. If BREN is reset, the backup regulator is switched off. The backup RAM can still be used in Run and Stop modes. However, its content will be lost in Standby and VBAT modes. If BREN is set, the application must wait till the Backup Regulator Ready flag (BRRDY) is set to indicate that the data written into the SRAM will be maintained in Standby and VBAT modes. */
    using PWR_CR2_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VBAT and temperature monitoring enable When set, the VBAT supply and temperature monitoring is enabled. */
    using PWR_CR2_MONEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup regulator ready This bit is set by hardware to indicate that the Backup regulator is ready. */
    using PWR_CR2_BRRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Temperature level monitoring versus low threshold */
    using PWR_CR2_TEMPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Temperature level monitoring versus high threshold */
    using PWR_CR2_TEMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset only by POR only, not reset by wakeup from Standby mode and RESET pad. The lower byte of this register is written once after POR and shall be written before changing VOS level or ck_sys clock frequency. No limitation applies to the upper bytes.Programming data corresponding to an invalid combination of SDLEVEL, SDEXTHP, SDEN, LDOEN and BYPASS bits (see Table9) will be ignored: data will not be written, the written-once mechanism will lock the register and any further write access will be ignored. The default supply configuration will be kept and the ACTVOSRDY bit in PWR control status register 1 (PWR_CSR1) will go on indicating invalid voltage levels. The system shall be power cycled before writing a new value. */
    using PWR_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power management unit bypass */
    using PWR_CR3_BYPASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low drop-out regulator enable */
    using PWR_CR3_LDOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSEN */
    using PWR_CR3_SMPSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSEXTHP */
    using PWR_CR3_SMPSEXTHP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSLEVEL */
    using PWR_CR3_SMPSLEVEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VBAT charging enable */
    using PWR_CR3_VBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VBAT charging resistor selection */
    using PWR_CR3_VBRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSEXTRDY */
    using PWR_CR3_SMPSEXTRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VDD33USB voltage level detector enable. */
    using PWR_CR3_USB33DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB regulator enable. */
    using PWR_CR3_USBREGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB supply ready. */
    using PWR_CR3_USB33RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This register allows controlling CPU1 power. */
    using PWR_CPUCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RETDS_CD */
    using PWR_CPUCR_RETDS_CD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PDDS_SRD */
    using PWR_CPUCR_PDDS_SRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STOP flag This bit is set by hardware and cleared only by any reset or by setting the CPU1 CSSF bit. */
    using PWR_CPUCR_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System Standby flag This bit is set by hardware and cleared only by a POR (Power-on Reset) or by setting the CPU1 CSSF bit */
    using PWR_CPUCR_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear D1 domain CPU1 Standby, Stop and HOLD flags (always read as 0) This bit is cleared to 0 by hardware. */
    using PWR_CPUCR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RUN_SRD */
    using PWR_CPUCR_RUN_SRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This register allows controlling D3 domain power.Following reset VOSRDY will be read 1 by software */
    using PWR_SRDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VOS Ready bit for VCORE voltage scaling output selection. This bit is set to 1 by hardware when Bypass mode is selected in PWR control register 3 (PWR_CR3). */
    using PWR_SRDCR_VOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage scaling selection according to performance These bits control the VCORE voltage level and allow to obtains the best trade-off between power consumption and performance: When increasing the performance, the voltage scaling shall be changed before increasing the system frequency. When decreasing performance, the system frequency shall first be decreased before changing the voltage scaling. */
    using PWR_SRDCR_VOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset only by system reset, not reset by wakeup from Standby mode5 wait states are required when writing this register (when clearing a WKUPF bit in PWR_WKUPFR, the AHB write access will complete after the WKUPF has been cleared). */
    using PWR_WKUPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Wakeup pin flag for WKUP. These bits are always read as 0. */
    using PWR_WKUPCR_WKUPC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Wakeup pin flag for WKUP. These bits are always read as 0. */
    using PWR_WKUPCR_WKUPC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Wakeup pin flag for WKUP. These bits are always read as 0. */
    using PWR_WKUPCR_WKUPC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Wakeup pin flag for WKUP. These bits are always read as 0. */
    using PWR_WKUPCR_WKUPC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Wakeup pin flag for WKUP. These bits are always read as 0. */
    using PWR_WKUPCR_WKUPC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Wakeup pin flag for WKUP. These bits are always read as 0. */
    using PWR_WKUPCR_WKUPC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset only by system reset, not reset by wakeup from Standby mode */
    using PWR_WKUPFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). */
    using PWR_WKUPFR_WKUPF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). */
    using PWR_WKUPFR_WKUPF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). */
    using PWR_WKUPFR_WKUPF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). */
    using PWR_WKUPFR_WKUPF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). */
    using PWR_WKUPFR_WKUPF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). */
    using PWR_WKUPFR_WKUPF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset only by system reset, not reset by wakeup from Standby mode */
    using PWR_WKUPEPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. */
    using PWR_WKUPEPR_WKUPEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. */
    using PWR_WKUPEPR_WKUPEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. */
    using PWR_WKUPEPR_WKUPEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. */
    using PWR_WKUPEPR_WKUPEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. */
    using PWR_WKUPEPR_WKUPEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. */
    using PWR_WKUPEPR_WKUPEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. */
    using PWR_WKUPEPR_WKUPP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. */
    using PWR_WKUPEPR_WKUPP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. */
    using PWR_WKUPEPR_WKUPP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. */
    using PWR_WKUPEPR_WKUPP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. */
    using PWR_WKUPEPR_WKUPP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. */
    using PWR_WKUPEPR_WKUPP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin pull configuration */
    using PWR_WKUPEPR_WKUPPUPD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin pull configuration */
    using PWR_WKUPEPR_WKUPPUPD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin pull configuration */
    using PWR_WKUPEPR_WKUPPUPD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin pull configuration */
    using PWR_WKUPEPR_WKUPPUPD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin pull configuration */
    using PWR_WKUPEPR_WKUPPUPD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin pull configuration for WKUP(truncate(n/2)-7) These bits define the I/O pad pull configuration used when WKUPEN(truncate(n/2)-7) = 1. The associated GPIO port pull configuration shall be set to the same value or to 00. The Wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WKUPEPR_WKUPPUPD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
