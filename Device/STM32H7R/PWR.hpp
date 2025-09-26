/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7R_PWR_HPP
#define EMBEDDED_PP_STM32H7R_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Power control */
namespace STM32H7R::PWR {

    /** @brief PWR control register 1 */
    using PWR_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System Stop mode voltage scaling selection. */
    using PWR_CR1_SVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SVOS Low (value: 0)
     *          - B_0x1: SVOS High (default) (value: 1)
     */
        /** @brief SVOS Low */
    constexpr std::uint32_t PWR_CR1_SVOS_B_0x0 = 0;
        /** @brief SVOS High (default) */
    constexpr std::uint32_t PWR_CR1_SVOS_B_0x1 = 1;

    /** @brief Programmable voltage detector enable */
    using PWR_CR1_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Programmable voltage detector disabled. (value: 0)
     *          - B_0x1: Programmable voltage detector enabled (value: 1)
     */
        /** @brief Programmable voltage detector disabled. */
    constexpr std::uint32_t PWR_CR1_PVDE_B_0x0 = 0;
        /** @brief Programmable voltage detector enabled */
    constexpr std::uint32_t PWR_CR1_PVDE_B_0x1 = 1;

    /** @brief Programmable voltage detector level selection These bits select the voltage threshold detected by the PVD. Note: Refer to Section Electrical characteristics of the product datasheet for more details. */
    using PWR_CR1_PLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD level 1 (value: 0)
     *          - B_0x1: PVD level 2 (value: 1)
     *          - B_0x2: PVD level 3 (value: 2)
     *          - B_0x3: PVD level 4 (value: 3)
     *          - B_0x4: PVD level 5 (value: 4)
     *          - B_0x5: PVD level 6 (value: 5)
     *          - B_0x6: PVD level 7 (value: 6)
     *          - B_0x7: External voltage level on PVD_IN pin, compared to internal VREFINT level. (value: 7)
     */
        /** @brief PVD level 1 */
    constexpr std::uint32_t PWR_CR1_PLS_B_0x0 = 0;
        /** @brief PVD level 2 */
    constexpr std::uint32_t PWR_CR1_PLS_B_0x1 = 1;
        /** @brief PVD level 3 */
    constexpr std::uint32_t PWR_CR1_PLS_B_0x2 = 2;
        /** @brief PVD level 4 */
    constexpr std::uint32_t PWR_CR1_PLS_B_0x3 = 3;
        /** @brief PVD level 5 */
    constexpr std::uint32_t PWR_CR1_PLS_B_0x4 = 4;
        /** @brief PVD level 6 */
    constexpr std::uint32_t PWR_CR1_PLS_B_0x5 = 5;
        /** @brief PVD level 7 */
    constexpr std::uint32_t PWR_CR1_PLS_B_0x6 = 6;
        /** @brief External voltage level on PVD_IN pin, compared to internal VREFINT level. */
    constexpr std::uint32_t PWR_CR1_PLS_B_0x7 = 7;

    /** @brief Disable backup domain write protection In reset state, the RCC_BDCR register, the RTC registers (including the backup registers), BREN and MOEN bits in the PWR_CSR1 register, are protected against parasitic write access. This bit must be set to enable write access to these registers. */
    using PWR_CR1_DBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Access to RTC, RTC backup registers and backup SRAM disabled (value: 0)
     *          - B_0x1: Access to RTC, RTC backup registers and backup SRAM enabled (value: 1)
     */
        /** @brief Access to RTC, RTC backup registers and backup SRAM disabled */
    constexpr std::uint32_t PWR_CR1_DBP_B_0x0 = 0;
        /** @brief Access to RTC, RTC backup registers and backup SRAM enabled */
    constexpr std::uint32_t PWR_CR1_DBP_B_0x1 = 1;

    /** @brief Flash low-power mode in Stop mode This bit allows to obtain the best trade-off between low-power consumption and restart time when exiting from Stop mode. When it is set, the Flash memory enters low-power mode when device is in Stop mode. consumption). */
    using PWR_CR1_FLPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory remains in normal mode when device enters Stop (quick restart time). (value: 0)
     *          - B_0x1: Flash memory enters low-power mode when device enters Stop mode (low-power (value: 1)
     */
        /** @brief Flash memory remains in normal mode when device enters Stop (quick restart time). */
    constexpr std::uint32_t PWR_CR1_FLPS_B_0x0 = 0;
        /** @brief Flash memory enters low-power mode when device enters Stop mode (low-power */
    constexpr std::uint32_t PWR_CR1_FLPS_B_0x1 = 1;

    /** @brief RAM low power mode disable in STOP. When set the RAMs will not enter to low power mode when the system enters to STOP. */
    using PWR_CR1_RLPSN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RAM enters to low power mode when system enters to STOP. (value: 0)
     *          - B_0x1: RAM remains in normal mode when system enters to STOP. (value: 1)
     */
        /** @brief RAM enters to low power mode when system enters to STOP. */
    constexpr std::uint32_t PWR_CR1_RLPSN_B_0x0 = 0;
        /** @brief RAM remains in normal mode when system enters to STOP. */
    constexpr std::uint32_t PWR_CR1_RLPSN_B_0x1 = 1;

    /** @brief analog switch VBoost control This bit enables the booster to guarantee the analog switch AC performance when the VDD supply voltage is below 2.7 V (reduction of the total harmonic distortion to have the same switch performance over the full supply voltage range) The VDD supply voltage can be monitored through the PVD and the PLS bits. */
    using PWR_CR1_BOOSTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: booster disabled (default) (value: 0)
     *          - B_0x1: booster enabled if analog voltage ready (AVD_READY = 1) (value: 1)
     */
        /** @brief booster disabled (default) */
    constexpr std::uint32_t PWR_CR1_BOOSTE_B_0x0 = 0;
        /** @brief booster enabled if analog voltage ready (AVD_READY = 1) */
    constexpr std::uint32_t PWR_CR1_BOOSTE_B_0x1 = 1;

    /** @brief analog voltage ready This bit is only used when the analog switch boost needs to be enabled (see BOOSTE bit). It must be set by software when the expected VDDA analog supply level is available. The correct analog supply level is indicated by the AVDO bit (PWR_CSR1 register) after setting the AVDEN bit and selecting the supply level to be monitored (ALS bits). */
    using PWR_CR1_AVDREADY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: peripheral analog voltage VDDA not ready (default) (value: 0)
     *          - B_0x1: peripheral analog voltage VDDA ready (value: 1)
     */
        /** @brief peripheral analog voltage VDDA not ready (default) */
    constexpr std::uint32_t PWR_CR1_AVDREADY_B_0x0 = 0;
        /** @brief peripheral analog voltage VDDA ready */
    constexpr std::uint32_t PWR_CR1_AVDREADY_B_0x1 = 1;

    /** @brief Peripheral voltage monitor on VDDA enable */
    using PWR_CR1_AVDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Peripheral voltage monitor on VDDA disabled (value: 0)
     *          - B_0x1: Peripheral voltage monitor on VDDA enabled (value: 1)
     */
        /** @brief Peripheral voltage monitor on VDDA disabled */
    constexpr std::uint32_t PWR_CR1_AVDEN_B_0x0 = 0;
        /** @brief Peripheral voltage monitor on VDDA enabled */
    constexpr std::uint32_t PWR_CR1_AVDEN_B_0x1 = 1;

    /** @brief Analog voltage detector level selection These bits select the voltage threshold detected by the AVD. Note: Refer to Section Electrical characteristics of the product datasheet for more details. */
    using PWR_CR1_ALS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AVD level 1 (value: 0)
     *          - B_0x1: AVD level 2 (value: 1)
     *          - B_0x2: AVD level 3 (value: 2)
     *          - B_0x3: AVD level 4 (value: 3)
     */
        /** @brief AVD level 1 */
    constexpr std::uint32_t PWR_CR1_ALS_B_0x0 = 0;
        /** @brief AVD level 2 */
    constexpr std::uint32_t PWR_CR1_ALS_B_0x1 = 1;
        /** @brief AVD level 3 */
    constexpr std::uint32_t PWR_CR1_ALS_B_0x2 = 2;
        /** @brief AVD level 4 */
    constexpr std::uint32_t PWR_CR1_ALS_B_0x3 = 3;

    /** @brief PWR control status register 1 */
    using PWR_SR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VOS currently applied for V<sub>CORE</sub> voltage scaling selection. These bit reflect the last VOS value applied to the PMU. */
    using PWR_SR1_ACTVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage levels ready bit for currently used ACTVOS and SDHILEVEL This bit is set to 1 by hardware when the voltage regulator and the SMPS step-down converter are both disabled and Bypass mode is selected in PWR control register 2 (PWR_CSR2). */
    using PWR_SR1_ACTVOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Voltage level invalid, above or below current ACTVOS and SDHILEVEL selected levels. (value: 0)
     *          - B_0x1: Voltage level valid, at current ACTVOS and SDHILEVEL selected levels. (value: 1)
     */
        /** @brief Voltage level invalid, above or below current ACTVOS and SDHILEVEL selected levels. */
    constexpr std::uint32_t PWR_SR1_ACTVOSRDY_B_0x0 = 0;
        /** @brief Voltage level valid, at current ACTVOS and SDHILEVEL selected levels. */
    constexpr std::uint32_t PWR_SR1_ACTVOSRDY_B_0x1 = 1;

    /** @brief Programmable voltage detect output This bit is set and cleared by hardware. It is valid only if the PVD has been enabled by the PVDE bit. PLS[2:0] bits. bits. Note: Since the PVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the PVDE bit is set. */
    using PWR_SR1_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDD or PVD_IN voltage is equal or higher than the PVD threshold selected through the (value: 0)
     *          - B_0x1: VDD or PVD_IN voltage is lower than the PVD threshold selected through the PLS[2:0] (value: 1)
     */
        /** @brief VDD or PVD_IN voltage is equal or higher than the PVD threshold selected through the */
    constexpr std::uint32_t PWR_SR1_PVDO_B_0x0 = 0;
        /** @brief VDD or PVD_IN voltage is lower than the PVD threshold selected through the PLS[2:0] */
    constexpr std::uint32_t PWR_SR1_PVDO_B_0x1 = 1;

    /** @brief Analog voltage detector output on VDDA This bit is set and cleared by hardware. It is valid only if AVD on VDDA is enabled by the AVDEN bit. Note: Since the AVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the AVDEN bit is set */
    using PWR_SR1_AVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDA is equal or higher than the AVD threshold selected with the ALS[1:0] bits. (value: 0)
     *          - B_0x1: VDDA is lower than the AVD threshold selected with the ALS[1:0] bits (value: 1)
     */
        /** @brief VDDA is equal or higher than the AVD threshold selected with the ALS[1:0] bits. */
    constexpr std::uint32_t PWR_SR1_AVDO_B_0x0 = 0;
        /** @brief VDDA is lower than the AVD threshold selected with the ALS[1:0] bits */
    constexpr std::uint32_t PWR_SR1_AVDO_B_0x1 = 1;

    /** @brief PWR control status register 1 */
    using PWR_CSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup regulator enable When set, the backup regulator (used to maintain the backup RAM content in Standby and V<sub>BAT</sub> modes) is enabled. If BREN is reset, the backup regulator is switched off. The backup RAM can still be used in Run and Stop modes. However, its content will be lost in Standby and V<sub>BAT</sub> modes. If BREN is set, the application must wait till the backup regulator ready flag (BRRDY) is set to indicate that the data written into the SRAM will be maintained in Standby and V<sub>BAT</sub> modes. */
    using PWR_CSR1_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup regulator disabled. (value: 0)
     *          - B_0x1: Backup regulator enabled. (value: 1)
     */
        /** @brief Backup regulator disabled. */
    constexpr std::uint32_t PWR_CSR1_BREN_B_0x0 = 0;
        /** @brief Backup regulator enabled. */
    constexpr std::uint32_t PWR_CSR1_BREN_B_0x1 = 1;

    /** @brief V<sub>BAT</sub> and temperature monitoring enable When set, the V<sub>BAT</sub> supply and temperature monitoring is enabled. Note: V<sub>BAT</sub> and temperature monitoring are only available when the backup regulator is enabled (BREN bit set to 1). */
    using PWR_CSR1_MONEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>BAT</sub> and temperature monitoring disabled. (value: 0)
     *          - B_0x1: V<sub>BAT</sub> and temperature monitoring enabled. (value: 1)
     */
        /** @brief V<sub>BAT</sub> and temperature monitoring disabled. */
    constexpr std::uint32_t PWR_CSR1_MONEN_B_0x0 = 0;
        /** @brief V<sub>BAT</sub> and temperature monitoring enabled. */
    constexpr std::uint32_t PWR_CSR1_MONEN_B_0x1 = 1;

    /** @brief Backup regulator ready This bit is set by hardware to indicate that the backup regulator is ready. */
    using PWR_CSR1_BRRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup regulator not ready. (value: 0)
     *          - B_0x1: Backup regulator ready. (value: 1)
     */
        /** @brief Backup regulator not ready. */
    constexpr std::uint32_t PWR_CSR1_BRRDY_B_0x0 = 0;
        /** @brief Backup regulator ready. */
    constexpr std::uint32_t PWR_CSR1_BRRDY_B_0x1 = 1;

    /** @brief V<sub>BAT</sub> level monitoring versus low threshold */
    using PWR_CSR1_VBATL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>BAT</sub> level above low threshold level. (value: 0)
     *          - B_0x1: V<sub>BAT</sub> level equal or below low threshold level. (value: 1)
     */
        /** @brief V<sub>BAT</sub> level above low threshold level. */
    constexpr std::uint32_t PWR_CSR1_VBATL_B_0x0 = 0;
        /** @brief V<sub>BAT</sub> level equal or below low threshold level. */
    constexpr std::uint32_t PWR_CSR1_VBATL_B_0x1 = 1;

    /** @brief V<sub>BAT</sub> level monitoring versus high threshold */
    using PWR_CSR1_VBATH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>BAT</sub> level below high threshold level. (value: 0)
     *          - B_0x1: V<sub>BAT</sub> level equal or above high threshold level. (value: 1)
     */
        /** @brief V<sub>BAT</sub> level below high threshold level. */
    constexpr std::uint32_t PWR_CSR1_VBATH_B_0x0 = 0;
        /** @brief V<sub>BAT</sub> level equal or above high threshold level. */
    constexpr std::uint32_t PWR_CSR1_VBATH_B_0x1 = 1;

    /** @brief Temperature level monitoring versus low threshold */
    using PWR_CSR1_TEMPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature above low threshold level. (value: 0)
     *          - B_0x1: Temperature equal or below low threshold level. (value: 1)
     */
        /** @brief Temperature above low threshold level. */
    constexpr std::uint32_t PWR_CSR1_TEMPL_B_0x0 = 0;
        /** @brief Temperature equal or below low threshold level. */
    constexpr std::uint32_t PWR_CSR1_TEMPL_B_0x1 = 1;

    /** @brief Temperature level monitoring versus high threshold */
    using PWR_CSR1_TEMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature below high threshold level. (value: 0)
     *          - B_0x1: Temperature equal or above high threshold level. (value: 1)
     */
        /** @brief Temperature below high threshold level. */
    constexpr std::uint32_t PWR_CSR1_TEMPH_B_0x0 = 0;
        /** @brief Temperature equal or above high threshold level. */
    constexpr std::uint32_t PWR_CSR1_TEMPH_B_0x1 = 1;

    /** @brief PWR control register 2 */
    using PWR_CSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power management unit bypass Note: Illegal combinations of SDHILEVEL, SMPSEXTHP, SDEN, LDOEN and BYPASS are described in Table 41. */
    using PWR_CSR2_BYPASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power management unit normal operation. (value: 0)
     *          - B_0x1: Power management unit bypassed, voltage monitoring still active. (value: 1)
     */
        /** @brief Power management unit normal operation. */
    constexpr std::uint32_t PWR_CSR2_BYPASS_B_0x0 = 0;
        /** @brief Power management unit bypassed, voltage monitoring still active. */
    constexpr std::uint32_t PWR_CSR2_BYPASS_B_0x1 = 1;

    /** @brief Low drop-out regulator enable Note: Illegal combinations of SDHILEVEL, SMPSEXTHP, SDEN, LDOEN and BYPASS are described in Table 41. */
    using PWR_CSR2_LDOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low drop-out regulator disabled. (value: 0)
     *          - B_0x1: Low drop-out regulator enabled (default) (value: 1)
     */
        /** @brief Low drop-out regulator disabled. */
    constexpr std::uint32_t PWR_CSR2_LDOEN_B_0x0 = 0;
        /** @brief Low drop-out regulator enabled (default) */
    constexpr std::uint32_t PWR_CSR2_LDOEN_B_0x1 = 1;

    /** @brief SMPS step-down converter enable Note: Illegal combinations of SDHILEVEL, SMPSEXTHP, SDEN, LDOEN and BYPASS are described in Table 41. */
    using PWR_CSR2_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SMPS step-down converter disabled (value: 0)
     */
        /** @brief SMPS step-down converter disabled */
    constexpr std::uint32_t PWR_CSR2_SDEN_B_0x0 = 0;

    /** @brief SMPS external power delivery selection Note: Illegal combinations of SDHILEVEL, SMPSEXTHP, SDEN, LDOEN and BYPASS are described in Table 41. */
    using PWR_CSR2_SMPSEXTHP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SMPS normal operating mode, no power delivery to external circuits (value: 0)
     *          - B_0x1: SMPS external operating mode, power delivery to external circuits (value: 1)
     */
        /** @brief SMPS normal operating mode, no power delivery to external circuits */
    constexpr std::uint32_t PWR_CSR2_SMPSEXTHP_B_0x0 = 0;
        /** @brief SMPS external operating mode, power delivery to external circuits */
    constexpr std::uint32_t PWR_CSR2_SMPSEXTHP_B_0x1 = 1;

    /** @brief SMPS step-down converter voltage output for LDO or external supply This bit is used when both the LDO and SMPS step-down converter are enabled with SDEN and LDOEN enabled or when SMPSEXTHP is enabled. In this case SDHILEVEL has to be set to 1 to confirm the regulator settings */
    using PWR_CSR2_SDHILEVEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset value (value: 0)
     *          - B_0x1: 1.8V (value: 1)
     */
        /** @brief Reset value */
    constexpr std::uint32_t PWR_CSR2_SDHILEVEL_B_0x0 = 0;
        /** @brief 1.8V */
    constexpr std::uint32_t PWR_CSR2_SDHILEVEL_B_0x1 = 1;

    /** @brief VBAT charging enable */
    using PWR_CSR2_VBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VBAT battery charging disabled. (value: 0)
     *          - B_0x1: VBAT battery charging enabled. (value: 1)
     */
        /** @brief VBAT battery charging disabled. */
    constexpr std::uint32_t PWR_CSR2_VBE_B_0x0 = 0;
        /** @brief VBAT battery charging enabled. */
    constexpr std::uint32_t PWR_CSR2_VBE_B_0x1 = 1;

    /** @brief VBAT charging resistor selection */
    using PWR_CSR2_VBRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Charge VBAT through a 5 k resistor. (value: 0)
     *          - B_0x1: Charge VBAT through a 1.5 k resistor. (value: 1)
     */
        /** @brief Charge VBAT through a 5 k resistor. */
    constexpr std::uint32_t PWR_CSR2_VBRS_B_0x0 = 0;
        /** @brief Charge VBAT through a 1.5 k resistor. */
    constexpr std::uint32_t PWR_CSR2_VBRS_B_0x1 = 1;

    /** @brief XSPI port 1 capacitor control bits see the product datasheet for more details */
    using PWR_CSR2_XSPICAP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI Capacitor OFF (default) note: to confirm with analog design (value: 0)
     *          - B_0x1: XSPI Capacitor set to 1/3 (value: 1)
     *          - B_0x2: XSPI Capacitor set to 2/3 (value: 2)
     *          - B_0x3: XSPI Capacitor set to full capacitance (value: 3)
     */
        /** @brief XSPI Capacitor OFF (default) note: to confirm with analog design */
    constexpr std::uint32_t PWR_CSR2_XSPICAP1_B_0x0 = 0;
        /** @brief XSPI Capacitor set to 1/3 */
    constexpr std::uint32_t PWR_CSR2_XSPICAP1_B_0x1 = 1;
        /** @brief XSPI Capacitor set to 2/3 */
    constexpr std::uint32_t PWR_CSR2_XSPICAP1_B_0x2 = 2;
        /** @brief XSPI Capacitor set to full capacitance */
    constexpr std::uint32_t PWR_CSR2_XSPICAP1_B_0x3 = 3;

    /** @brief XSPI port 2 capacitor control bits see the product datasheet for more details */
    using PWR_CSR2_XSPICAP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI Capacitor OFF (default) note: to confirm with analog design (value: 0)
     *          - B_0x1: XSPI Capacitor set to 1/3 (value: 1)
     *          - B_0x2: XSPI Capacitor set to 2/3 (value: 2)
     *          - B_0x3: XSPI Capacitor set to full capacitance (value: 3)
     */
        /** @brief XSPI Capacitor OFF (default) note: to confirm with analog design */
    constexpr std::uint32_t PWR_CSR2_XSPICAP2_B_0x0 = 0;
        /** @brief XSPI Capacitor set to 1/3 */
    constexpr std::uint32_t PWR_CSR2_XSPICAP2_B_0x1 = 1;
        /** @brief XSPI Capacitor set to 2/3 */
    constexpr std::uint32_t PWR_CSR2_XSPICAP2_B_0x2 = 2;
        /** @brief XSPI Capacitor set to full capacitance */
    constexpr std::uint32_t PWR_CSR2_XSPICAP2_B_0x3 = 3;

    /** @brief EN_XSPIM1: this bit allow the SW to enable the XSPI interface. The XSPIM_P1 supply must be stable prior to setting this bit. */
    using PWR_CSR2_EN_XSPIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EN_XSPIM2: this bit allows the SW to enable the XSPI interface, when available. The XSPIM_P2 supply must be stable prior to setting this bit. It should also be set when FMC is used. */
    using PWR_CSR2_EN_XSPIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS step-down converter external supply ready This bit is set by hardware to indicate that the external supply from the SMPS step-down converter is ready. */
    using PWR_CSR2_SDEXTRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External supply not ready. (value: 0)
     *          - B_0x1: External supply ready. (value: 1)
     */
        /** @brief External supply not ready. */
    constexpr std::uint32_t PWR_CSR2_SDEXTRDY_B_0x0 = 0;
        /** @brief External supply ready. */
    constexpr std::uint32_t PWR_CSR2_SDEXTRDY_B_0x1 = 1;

    /** @brief VDD33_USB voltage level detector enable */
    using PWR_CSR2_USB33DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDD33_USB voltage level detector disabled (value: 0)
     *          - B_0x1: VDD33_USB voltage level detector enabled. (value: 1)
     */
        /** @brief VDD33_USB voltage level detector disabled */
    constexpr std::uint32_t PWR_CSR2_USB33DEN_B_0x0 = 0;
        /** @brief VDD33_USB voltage level detector enabled. */
    constexpr std::uint32_t PWR_CSR2_USB33DEN_B_0x1 = 1;

    /** @brief USB regulator enable. */
    using PWR_CSR2_USBREGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB regulator disabled (value: 0)
     *          - B_0x1: USB regulator enabled. (value: 1)
     */
        /** @brief USB regulator disabled */
    constexpr std::uint32_t PWR_CSR2_USBREGEN_B_0x0 = 0;
        /** @brief USB regulator enabled. */
    constexpr std::uint32_t PWR_CSR2_USBREGEN_B_0x1 = 1;

    /** @brief USB supply ready. */
    using PWR_CSR2_USB33RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB33 supply not ready (value: 0)
     *          - B_0x1: USB33 supply ready. (value: 1)
     */
        /** @brief USB33 supply not ready */
    constexpr std::uint32_t PWR_CSR2_USB33RDY_B_0x0 = 0;
        /** @brief USB33 supply ready. */
    constexpr std::uint32_t PWR_CSR2_USB33RDY_B_0x1 = 1;

    /** @brief USB HS regulator enable. */
    using PWR_CSR2_USBHSREGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB HS PHY regulator disabled (default) (value: 0)
     *          - B_0x1: USB HS PHY regulator enabled (value: 1)
     */
        /** @brief USB HS PHY regulator disabled (default) */
    constexpr std::uint32_t PWR_CSR2_USBHSREGEN_B_0x0 = 0;
        /** @brief USB HS PHY regulator enabled */
    constexpr std::uint32_t PWR_CSR2_USBHSREGEN_B_0x1 = 1;

    /** @brief PWR CPU control register 3 */
    using PWR_CSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Down Deepsleep. This bit allows CPU to define the Deepsleep mode */
    using PWR_CSR3_PDDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop mode when device enters Deepsleep. (value: 0)
     *          - B_0x1: Standby mode when device enters Deepsleep. (value: 1)
     */
        /** @brief Stop mode when device enters Deepsleep. */
    constexpr std::uint32_t PWR_CSR3_PDDS_B_0x0 = 0;
        /** @brief Standby mode when device enters Deepsleep. */
    constexpr std::uint32_t PWR_CSR3_PDDS_B_0x1 = 1;

    /** @brief Clear Standby and Stop flags (always read as 0) This bit is cleared to 0 by hardware. */
    using PWR_CSR3_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect. (value: 0)
     *          - B_0x1: flags (STOPF, SBF) are cleared. (value: 1)
     */
        /** @brief No effect. */
    constexpr std::uint32_t PWR_CSR3_CSSF_B_0x0 = 0;
        /** @brief flags (STOPF, SBF) are cleared. */
    constexpr std::uint32_t PWR_CSR3_CSSF_B_0x1 = 1;

    /** @brief STOP flag This bit is set by hardware and cleared only by any reset or by setting the CPU CSSF bit. */
    using PWR_CSR3_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: System has not been in Stop mode (value: 0)
     *          - B_0x1: System has been in Stop mode (value: 1)
     */
        /** @brief System has not been in Stop mode */
    constexpr std::uint32_t PWR_CSR3_STOPF_B_0x0 = 0;
        /** @brief System has been in Stop mode */
    constexpr std::uint32_t PWR_CSR3_STOPF_B_0x1 = 1;

    /** @brief System Standby flag This bit is set by hardware and cleared only by a POR (Power-on Reset) or by setting the CPU CSSF bit */
    using PWR_CSR3_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: System has not been in Standby mode (value: 0)
     *          - B_0x1: System has been in Standby mode (value: 1)
     */
        /** @brief System has not been in Standby mode */
    constexpr std::uint32_t PWR_CSR3_SBF_B_0x0 = 0;
        /** @brief System has been in Standby mode */
    constexpr std::uint32_t PWR_CSR3_SBF_B_0x1 = 1;

    /** @brief PWR control status register 4 */
    using PWR_CSR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage scaling selection according to performance These bits control the V<sub>CORE</sub> voltage level and allow to obtains the best trade-off between power consumption and performance: When increasing the performance, the voltage scaling must be changed before increasing the system frequency. When decreasing performance, the system frequency must first be decreased before changing the voltage scaling. Note: Refer to Section Electrical characteristics of the product datasheet for more details. */
    using PWR_CSR4_VOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VOS Low level (default) (value: 0)
     *          - B_0x1: VOS High level (value: 1)
     */
        /** @brief VOS Low level (default) */
    constexpr std::uint32_t PWR_CSR4_VOS_B_0x0 = 0;
        /** @brief VOS High level */
    constexpr std::uint32_t PWR_CSR4_VOS_B_0x1 = 1;

    /** @brief VOS Ready bit */
    using PWR_CSR4_VOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready, voltage level below VOS selected level. (value: 0)
     *          - B_0x1: Ready, voltage level at or above VOS selected level. (value: 1)
     */
        /** @brief Not ready, voltage level below VOS selected level. */
    constexpr std::uint32_t PWR_CSR4_VOSRDY_B_0x0 = 0;
        /** @brief Ready, voltage level at or above VOS selected level. */
    constexpr std::uint32_t PWR_CSR4_VOSRDY_B_0x1 = 1;

    /** @brief PWR wakeup clear register */
    using PWR_WKUPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Wakeup pin flag for WKUP1 These bits are always read as 0. */
    using PWR_WKUPCR_WKUPC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Writing 1 clears the WKUPF1 Wakeup pin flag (bit is cleared to 0 by hardware) (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC1_B_0x0 = 0;
        /** @brief Writing 1 clears the WKUPF1 Wakeup pin flag (bit is cleared to 0 by hardware) */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC1_B_0x1 = 1;

    /** @brief Clear Wakeup pin flag for WKUP2 These bits are always read as 0. */
    using PWR_WKUPCR_WKUPC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Writing 1 clears the WKUPF2 Wakeup pin flag (bit is cleared to 0 by hardware) (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC2_B_0x0 = 0;
        /** @brief Writing 1 clears the WKUPF2 Wakeup pin flag (bit is cleared to 0 by hardware) */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC2_B_0x1 = 1;

    /** @brief Clear Wakeup pin flag for WKUP3 These bits are always read as 0. */
    using PWR_WKUPCR_WKUPC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Writing 1 clears the WKUPF3 Wakeup pin flag (bit is cleared to 0 by hardware) (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC3_B_0x0 = 0;
        /** @brief Writing 1 clears the WKUPF3 Wakeup pin flag (bit is cleared to 0 by hardware) */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC3_B_0x1 = 1;

    /** @brief Clear Wakeup pin flag for WKUP4 These bits are always read as 0. */
    using PWR_WKUPCR_WKUPC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Writing 1 clears the WKUPF4 Wakeup pin flag (bit is cleared to 0 by hardware) (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC4_B_0x0 = 0;
        /** @brief Writing 1 clears the WKUPF4 Wakeup pin flag (bit is cleared to 0 by hardware) */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC4_B_0x1 = 1;

    /** @brief PWR wakeup flag register */
    using PWR_WKUPFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUP1 flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPC1 bit in the PWR wakeup clear register (PWR_WKUPCR). */
    using PWR_WKUPFR_WKUPF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No wakeup event occurred (value: 0)
     *          - B_0x1: A wakeup event was received from WKUP1 pin (value: 1)
     */
        /** @brief No wakeup event occurred */
    constexpr std::uint32_t PWR_WKUPFR_WKUPF1_B_0x0 = 0;
        /** @brief A wakeup event was received from WKUP1 pin */
    constexpr std::uint32_t PWR_WKUPFR_WKUPF1_B_0x1 = 1;

    /** @brief Wakeup pin WKUP2 flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPC2 bit in the PWR wakeup clear register (PWR_WKUPCR). */
    using PWR_WKUPFR_WKUPF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No wakeup event occurred (value: 0)
     *          - B_0x1: A wakeup event was received from WKUP2 pin (value: 1)
     */
        /** @brief No wakeup event occurred */
    constexpr std::uint32_t PWR_WKUPFR_WKUPF2_B_0x0 = 0;
        /** @brief A wakeup event was received from WKUP2 pin */
    constexpr std::uint32_t PWR_WKUPFR_WKUPF2_B_0x1 = 1;

    /** @brief Wakeup pin WKUP3 flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPC3 bit in the PWR wakeup clear register (PWR_WKUPCR). */
    using PWR_WKUPFR_WKUPF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No wakeup event occurred (value: 0)
     *          - B_0x1: A wakeup event was received from WKUP3 pin (value: 1)
     */
        /** @brief No wakeup event occurred */
    constexpr std::uint32_t PWR_WKUPFR_WKUPF3_B_0x0 = 0;
        /** @brief A wakeup event was received from WKUP3 pin */
    constexpr std::uint32_t PWR_WKUPFR_WKUPF3_B_0x1 = 1;

    /** @brief Wakeup pin WKUP4 flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPC4 bit in the PWR wakeup clear register (PWR_WKUPCR). */
    using PWR_WKUPFR_WKUPF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No wakeup event occurred (value: 0)
     *          - B_0x1: A wakeup event was received from WKUP4 pin (value: 1)
     */
        /** @brief No wakeup event occurred */
    constexpr std::uint32_t PWR_WKUPFR_WKUPF4_B_0x0 = 0;
        /** @brief A wakeup event was received from WKUP4 pin */
    constexpr std::uint32_t PWR_WKUPFR_WKUPF4_B_0x1 = 1;

    /** @brief PWR wakeup enable and polarity register */
    using PWR_WKUPEPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup Pin WKUPn, (n = 4, 3, 2, 1) Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn bit) when WKUPn pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn selects falling edge. */
    using PWR_WKUPEPR_WKUPEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: An event on WKUPn pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: A rising or falling edge on WKUPn pin wakes-up the system from Standby mode. (value: 1)
     */
        /** @brief An event on WKUPn pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN1_B_0x0 = 0;
        /** @brief A rising or falling edge on WKUPn pin wakes-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN1_B_0x1 = 1;

    /** @brief Enable Wakeup Pin WKUPn, (n = 4, 3, 2, 1) Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn bit) when WKUPn pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn selects falling edge. */
    using PWR_WKUPEPR_WKUPEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: An event on WKUPn pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: A rising or falling edge on WKUPn pin wakes-up the system from Standby mode. (value: 1)
     */
        /** @brief An event on WKUPn pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN2_B_0x0 = 0;
        /** @brief A rising or falling edge on WKUPn pin wakes-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN2_B_0x1 = 1;

    /** @brief Enable Wakeup Pin WKUPn, (n = 4, 3, 2, 1) Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn bit) when WKUPn pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn selects falling edge. */
    using PWR_WKUPEPR_WKUPEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: An event on WKUPn pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: A rising or falling edge on WKUPn pin wakes-up the system from Standby mode. (value: 1)
     */
        /** @brief An event on WKUPn pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN3_B_0x0 = 0;
        /** @brief A rising or falling edge on WKUPn pin wakes-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN3_B_0x1 = 1;

    /** @brief Enable Wakeup Pin WKUPn, (n = 4, 3, 2, 1) Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn bit) when WKUPn pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn selects falling edge. */
    using PWR_WKUPEPR_WKUPEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: An event on WKUPn pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: A rising or falling edge on WKUPn pin wakes-up the system from Standby mode. (value: 1)
     */
        /** @brief An event on WKUPn pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN4_B_0x0 = 0;
        /** @brief A rising or falling edge on WKUPn pin wakes-up the system from Standby mode. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN4_B_0x1 = 1;

    /** @brief Wakeup pin polarity bit for WKUPn, (n = 4, 3, 2, 1) These bits define the polarity used for event detection on WKUPn external wakeup pin. */
    using PWR_WKUPEPR_WKUPP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP1_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP1_B_0x1 = 1;

    /** @brief Wakeup pin polarity bit for WKUPn, (n = 4, 3, 2, 1) These bits define the polarity used for event detection on WKUPn external wakeup pin. */
    using PWR_WKUPEPR_WKUPP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP2_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP2_B_0x1 = 1;

    /** @brief Wakeup pin polarity bit for WKUPn, (n = 4, 3, 2, 1) These bits define the polarity used for event detection on WKUPn external wakeup pin. */
    using PWR_WKUPEPR_WKUPP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP3_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP3_B_0x1 = 1;

    /** @brief Wakeup pin polarity bit for WKUPn, (n = 4, 3, 2, 1) These bits define the polarity used for event detection on WKUPn external wakeup pin. */
    using PWR_WKUPEPR_WKUPP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP4_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP4_B_0x1 = 1;

    /** @brief Wakeup pin pull configuration for WKUPn, These bits define the I/O pad pull configuration used when WKUPENn = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The Wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WKUPEPR_WKUPPUPD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief No pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD1_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD1_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD1_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD1_B_0x3 = 3;

    /** @brief Wakeup pin pull configuration for WKUPn, These bits define the I/O pad pull configuration used when WKUPENn = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The Wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WKUPEPR_WKUPPUPD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief No pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD2_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD2_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD2_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD2_B_0x3 = 3;

    /** @brief Wakeup pin pull configuration for WKUPn, These bits define the I/O pad pull configuration used when WKUPENn = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The Wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WKUPEPR_WKUPPUPD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief No pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD3_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD3_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD3_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD3_B_0x3 = 3;

    /** @brief Wakeup pin pull configuration for WKUPn, These bits define the I/O pad pull configuration used when WKUPENn = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The Wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WKUPEPR_WKUPPUPD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief No pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD4_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD4_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD4_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD4_B_0x3 = 3;

    /** @brief PWR USB Type-C and Power Delivery register */
    using PWR_UCPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD dead battery disable */
    using PWR_UCPDR_UCPD_DBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD dead battery pull-down behavior enabled on UCPDx_CC1 and UCPDx_CC2 pins (value: 0)
     *          - B_0x1: UCPD dead battery pull-down behavior disabled on UCPDx_CC1 and UCPDx_CC2 pins (value: 1)
     */
        /** @brief UCPD dead battery pull-down behavior enabled on UCPDx_CC1 and UCPDx_CC2 pins */
    constexpr std::uint32_t PWR_UCPDR_UCPD_DBDIS_B_0x0 = 0;
        /** @brief UCPD dead battery pull-down behavior disabled on UCPDx_CC1 and UCPDx_CC2 pins */
    constexpr std::uint32_t PWR_UCPDR_UCPD_DBDIS_B_0x1 = 1;

    /** @brief UCPD Standby mode When set, this bit is used to memorize the UCPD configuration in Standby mode. This bit must be written to 1 just before entering Standby mode when using UCPD. It must be written to 0 after exiting the Standby mode and before writing any UCPD registers. */
    using PWR_UCPDR_UCPD_STBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR apply pull configuration register */
    using PWR_APCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Apply pull-up and pull-down configuration When this bit is set, the I/O pull-up and pull-down configurations defined in PO5_PUPD, PN7_PUPD bits and PUCRx, PDCRx registers are applied in Standby mode even after wakeup until APC bit is reset to 0. When this bit is cleared, the I/O pull-up or pull-down configurations defined in PO5_PUPD, PN7_PUPD bits and PUCRx and PDCRx registers are not applied in Standby mode and IO becomes Hi-Z. */
    using PWR_APCR_APC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port N bit 7 pull-up/down configuration When this bit is set, a weak pull-up or pull-down resistor is applied on PN7 following inverse logic applied on PN6. If the PUN6 bit in PWR_PUCRN register is set and APC bit is set the week pull-down is applied on PN7. If the PDN6 bit in PWR_PDCRN register is set and APC bit is set the week pull-up is applied on PN7. */
    using PWR_APCR_PN7_PUPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port O bit 5 pull-up/down configuration When this bit is set, a weak pull-up or pull down resistor is applied on PO5 following inverse logic applied on PO4. If the PUO4 bit in PWR_PUCRO register is set and APC bit is set the week pull-down is applied on PO5. If the PDO4 bit in PWR_PDCRO register is set and APC bit is set the week pull-up is applied on PO5.. */
    using PWR_APCR_PO5_PUPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port PB6 I3C pull-up bit When I3C is used on PB6, when set, this bit activates the pull-up on I3C1_SCL (PB6) in standby mode. */
    using PWR_APCR_I3CPB6_PU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port PB7 I3C pull-up bit When I3C is used on PB7, when set, this bit activates the pull-up on I3C1_SDA (PB7) in standby mode. */
    using PWR_APCR_I3CPB7_PU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port PB8 I3C pull-up bit When I3C is used on PB8, when set, this bit activates the pull-up on I3C1_SCL (PB8) in standby mode. */
    using PWR_APCR_I3CPB8_PU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port PB9 I3C pull-up bit When I3C is used on PB9, when set, this bit activates the pull-up on I3C1_SDA (PB9) in standby mode. */
    using PWR_APCR_I3CPB9_PU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port N pull-up control register */
    using PWR_PUCRN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port N pull-up bit 1 When set, each bit activates the pull-up on PN1 when the APC bit is set in PWR_APCR. The pull-up is not activated if the corresponding PD1 bit is also set. */
    using PWR_PUCRN_PUN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port N pull-up bit 6 When set activates the pull-up on PN6 when the APC bit is set in PWR_APCR. The pull-up is not activated if the corresponding PDN6 bit is also set. */
    using PWR_PUCRN_PUN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port N pull-up bit 12 When set, each bit activates the pull-up on PN12 when the APC bit is set in PWR_APCR. The pull-up is not activated if the corresponding PD12 bit is also set. */
    using PWR_PUCRN_PUN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port N pull-down control register */
    using PWR_PDCRN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port N pull-down bit 0 When set activates the pull-down on PN0 when the APC bit is set in PWR_APCR. */
    using PWR_PDCRN_PDN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port N pull-down bit 1 When set activates the pull-down on PN1 when the APC bit is set in PWR_APCR. */
    using PWR_PDCRN_PDN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port N PN2 to PN5 pull-down activation When set, four pull-down resistors are activated on PN2 to PN5 when the APC bit is set in PWR_APCR. */
    using PWR_PDCRN_PDN2N5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port N pull-down bit 6 When set activates the pull-down on PN6 when the APC bit is set in PWR_APCR. */
    using PWR_PDCRN_PDN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port N - PN8 to PN11 pull-down activation When set, four pull-down resistors are activated on PN8 to PN11 when the APC bit is set in PWR_APCR. */
    using PWR_PDCRN_PDN8N11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port N pull-down bit 12 When set activates the pull-down on PN12 when the APC bit is set in PWR_APCR. */
    using PWR_PDCRN_PDN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port O pull-up control register */
    using PWR_PUCRO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (n = 1 to 0) Port O pull-up bits When set, each bit activates the pull-up on POy when the APC bit is set in PWR_APCR. The pull-up is not activated if the corresponding bits in PWR_PDCRO is also set. */
    using PWR_PUCRO_PUO0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (n = 1 to 0) Port O pull-up bits When set, each bit activates the pull-up on POy when the APC bit is set in PWR_APCR. The pull-up is not activated if the corresponding bits in PWR_PDCRO is also set. */
    using PWR_PUCRO_PUO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port O pull-up bit 4 When set activates the pull-up on PO4 when the APC bit is set in PWR_APCR. The pull-up is not activated if the corresponding bits PDO4 in PWR_PDCRO is also set. */
    using PWR_PUCRO_PUO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port O pull-down control register */
    using PWR_PDCRO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port O pull-down bit y When set, each bit activates the pull-down on POy when the APC bit is set in PWR_APCR. */
    using PWR_PDCRO_PDO0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port O pull-down bit y When set, each bit activates the pull-down on POy when the APC bit is set in PWR_APCR. */
    using PWR_PDCRO_PDO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port O pull-down bit y When set, each bit activates the pull-down on POy when the APC bit is set in PWR_APCR. */
    using PWR_PDCRO_PDO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port O pull-down bit y When set, each bit activates the pull-down on POy when the APC bit is set in PWR_APCR. */
    using PWR_PDCRO_PDO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port O pull-down bit y When set, each bit activates the pull-down on POy when the APC bit is set in PWR_APCR. */
    using PWR_PDCRO_PDO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port P pull-down control register */
    using PWR_PDCRP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port P0-P3 pull-down activation When set, four pull-down resistors are activated on P0 to P3 when the APC bit is set in PWR_APCR. */
    using PWR_PDCRP_PDP0P3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port P4-P7 pull-down activation When set, four pull-down resitors are activated on P4 to P7 when the APC bit is set in PWR_APCR. */
    using PWR_PDCRP_PDP4P7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port P8-P11 pull-down activation When set, four pull-down resistors are activated on P8 to P11 when the APC bit is set in PWR_APCR. */
    using PWR_PDCRP_PDP8P11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port P12-P15 pull-down activation When set, four pull-down resistors are activated on P8 to P11 when the APC bit is set in PWR_APCR. */
    using PWR_PDCRP_PDP12P15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR debug register 1 */
    using PWR_PDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Register Unlocked. */
    using PWR_PDR1_UNLOCKED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: accessed locked: key was not written and after each register write access. (value: 0)
     *          - B_0x1: after key 0xCAFECAFE was written in this register (value: 1)
     */
        /** @brief accessed locked: key was not written and after each register write access. */
    constexpr std::uint32_t PWR_PDR1_UNLOCKED_B_0x0 = 0;
        /** @brief after key 0xCAFECAFE was written in this register */
    constexpr std::uint32_t PWR_PDR1_UNLOCKED_B_0x1 = 1;

    /** @brief Step down converter force PWM mode */
    using PWR_PDR1_SDFPWMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SD_Converter Normal mode (value: 0)
     *          - B_0x1: SD_Converter forced PWM mode (value: 1)
     */
        /** @brief SD_Converter Normal mode */
    constexpr std::uint32_t PWR_PDR1_SDFPWMEN_B_0x0 = 0;
        /** @brief SD_Converter forced PWM mode */
    constexpr std::uint32_t PWR_PDR1_SDFPWMEN_B_0x1 = 1;

    /** @brief (Non-User bit) */
    using PWR_PDR1_SYNC_ADC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SD_Converter clock free running (value: 0)
     *          - B_0x1: SD_Converter clock synchronised to ADC. (value: 1)
     */
        /** @brief SD_Converter clock free running */
    constexpr std::uint32_t PWR_PDR1_SYNC_ADC_B_0x0 = 0;
        /** @brief SD_Converter clock synchronised to ADC. */
    constexpr std::uint32_t PWR_PDR1_SYNC_ADC_B_0x1 = 1;

}

#endif
