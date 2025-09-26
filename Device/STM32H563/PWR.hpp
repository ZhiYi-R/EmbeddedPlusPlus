/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H563_PWR_HPP
#define EMBEDDED_PP_STM32H563_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Power control */
namespace STM32H563::PWR {

    /** @brief PWR power mode control register */
    using PWR_PMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief low-power mode selection This bit defines the Deepsleep mode. */
    using PWR_PMCR_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Keeps Stop mode when entering DeepSleep. (value: 0)
     *          - B_0x1: Allows Standby mode when entering DeepSleep. (value: 1)
     */
        /** @brief Keeps Stop mode when entering DeepSleep. */
    constexpr std::uint32_t PWR_PMCR_LPMS_B_0x0 = 0;
        /** @brief Allows Standby mode when entering DeepSleep. */
    constexpr std::uint32_t PWR_PMCR_LPMS_B_0x1 = 1;

    /** @brief system Stop mode voltage scaling selection These bits control the Vsub CORE/sub voltage level in system Stop mode, to obtain the best trade-off between power consumption and performance. */
    using PWR_PMCR_SVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: SVOS5 scale 5 (value: 1)
     *          - B_0x2: SVOS4 scale 4 (value: 2)
     *          - B_0x3: SVOS3 scale 3 (default). (value: 3)
     */
        /** @brief SVOS5 scale 5 */
    constexpr std::uint32_t PWR_PMCR_SVOS_B_0x1 = 1;
        /** @brief SVOS4 scale 4 */
    constexpr std::uint32_t PWR_PMCR_SVOS_B_0x2 = 2;
        /** @brief SVOS3 scale 3 (default). */
    constexpr std::uint32_t PWR_PMCR_SVOS_B_0x3 = 3;

    /** @brief clear Standby and Stop flags (always read as 0) This bit is cleared to 0 by hardware. */
    using PWR_PMCR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: STOPF and SBF flags cleared. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_PMCR_CSSF_B_0x0 = 0;
        /** @brief STOPF and SBF flags cleared. */
    constexpr std::uint32_t PWR_PMCR_CSSF_B_0x1 = 1;

    /** @brief Flash memory low-power mode in Stop mode This bit is used to obtain the best trade-off between low-power consumption and restart time when exiting from Stop mode. When it is set, the Flash memory enters low-power mode when the CPU domain is in Stop mode. Note: When system enters stop mode with SVOS5 enabled, Flash memory is automatically forced in low-power mode. */
    using PWR_PMCR_FLPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory remains in normal mode when the CPU domain enters Stop mode (quick restart time). (value: 0)
     *          - B_0x1: Flash memory enters low-power mode when the CPU domain enters Stop mode (low-power consumption). (value: 1)
     */
        /** @brief Flash memory remains in normal mode when the CPU domain enters Stop mode (quick restart time). */
    constexpr std::uint32_t PWR_PMCR_FLPS_B_0x0 = 0;
        /** @brief Flash memory enters low-power mode when the CPU domain enters Stop mode (low-power consumption). */
    constexpr std::uint32_t PWR_PMCR_FLPS_B_0x1 = 1;

    /** @brief analog switch Vsub BOOST/sub control This bit enables the booster to guarantee the analog switch AC performance when the Vsub DD/sub supply voltage is below 2.7 V (reduction of the total harmonic distortion to have the same switch performance over the full supply voltage range) The Vsub DD/sub supply voltage can be monitored through the PVD and the PLS bits. */
    using PWR_PMCR_BOOSTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: booster disabled (default) (value: 0)
     *          - B_0x1: booster enabled if analog voltage ready (AVD_READY = 1). (value: 1)
     */
        /** @brief booster disabled (default) */
    constexpr std::uint32_t PWR_PMCR_BOOSTE_B_0x0 = 0;
        /** @brief booster enabled if analog voltage ready (AVD_READY = 1). */
    constexpr std::uint32_t PWR_PMCR_BOOSTE_B_0x1 = 1;

    /** @brief analog voltage ready This bit is only used when the analog switch boost needs to be enabled (see BOOSTE bit). It must be set by software when the expected Vsub DDA/sub analog supply level is available. The correct analog supply level is indicated by the AVDO bit (PWR_VMSR register) after setting the AVDEN bit (PWR_VMCR register) and selecting the supply level to be monitored 	(ALS bits). */
    using PWR_PMCR_AVD_READY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: peripheral analog voltage Vsub DDA/sub not ready (default) (value: 0)
     *          - B_0x1: peripheral analog voltage Vsub DDA/sub ready. (value: 1)
     */
        /** @brief peripheral analog voltage Vsub DDA/sub not ready (default) */
    constexpr std::uint32_t PWR_PMCR_AVD_READY_B_0x0 = 0;
        /** @brief peripheral analog voltage Vsub DDA/sub ready. */
    constexpr std::uint32_t PWR_PMCR_AVD_READY_B_0x1 = 1;

    /** @brief ETHERNET RAM shut-off in Stop mode. */
    using PWR_PMCR_ETHERNETSO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETHERNET RAM content is kept in Stop mode. (value: 0)
     *          - B_0x1: ETHERNET RAM content is lost in Stop mode. (value: 1)
     */
        /** @brief ETHERNET RAM content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ETHERNETSO_B_0x0 = 0;
        /** @brief ETHERNET RAM content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_ETHERNETSO_B_0x1 = 1;

    /** @brief AHB SRAM3 shut-off in Stop mode. */
    using PWR_PMCR_SRAM3SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RAM3 content is kept in Stop mode. (value: 0)
     *          - B_0x1: AHB RAM3 content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RAM3 content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM3SO_B_0x0 = 0;
        /** @brief AHB RAM3 content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM3SO_B_0x1 = 1;

    /** @brief AHB SRAM2 16-Kbyte shut-off in Stop mode. */
    using PWR_PMCR_SRAM2_16SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RAM2 16-Kbyte content is kept in Stop mode. (value: 0)
     *          - B_0x1: AHB RAM2 16-Kbyte content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RAM2 16-Kbyte content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM2_16SO_B_0x0 = 0;
        /** @brief AHB RAM2 16-Kbyte content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM2_16SO_B_0x1 = 1;

    /** @brief AHB SRAM2 48-Kbyte shut-off in Stop mode. */
    using PWR_PMCR_SRAM2_48SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RAM2 48-Kbyte content is kept in Stop mode. (value: 0)
     *          - B_0x1: AHB RAM2 48-Kbyte content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RAM2 48-Kbyte content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM2_48SO_B_0x0 = 0;
        /** @brief AHB RAM2 48-Kbyte content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM2_48SO_B_0x1 = 1;

    /** @brief AHB SRAM1 shut-off in Stop mode */
    using PWR_PMCR_SRAM1SO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AHB RAM1 content is kept in Stop mode. (value: 0)
     *          - B_0x1: AHB RAM1 content is lost in Stop mode. (value: 1)
     */
        /** @brief AHB RAM1 content is kept in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM1SO_B_0x0 = 0;
        /** @brief AHB RAM1 content is lost in Stop mode. */
    constexpr std::uint32_t PWR_PMCR_SRAM1SO_B_0x1 = 1;

    /** @brief PWR status register */
    using PWR_PMSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop flag This bit is set by hardware and cleared only by any reset or by setting the CSSF bit. */
    using PWR_PMSR_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: system has not been in Stop mode. (value: 0)
     *          - B_0x1: system has been in Stop mode. (value: 1)
     */
        /** @brief system has not been in Stop mode. */
    constexpr std::uint32_t PWR_PMSR_STOPF_B_0x0 = 0;
        /** @brief system has been in Stop mode. */
    constexpr std::uint32_t PWR_PMSR_STOPF_B_0x1 = 1;

    /** @brief System standby flag This bit is set by hardware and cleared only by a POR or by setting the CSSF bit. */
    using PWR_PMSR_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: system has not been in Standby mode. (value: 0)
     *          - B_0x1: system has been in Standby mode. (value: 1)
     */
        /** @brief system has not been in Standby mode. */
    constexpr std::uint32_t PWR_PMSR_SBF_B_0x0 = 0;
        /** @brief system has been in Standby mode. */
    constexpr std::uint32_t PWR_PMSR_SBF_B_0x1 = 1;

    /** @brief PWR voltage scaling control register */
    using PWR_VOSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief voltage scaling selection according to performance These bits control the Vsub CORE/sub voltage level and allow to obtain the best trade-off between power consumption and performance: - In bypass mode, these bits must also be set according to the external provided core voltage level and related performance. - When increasing the performance, the voltage scaling must be changed before increasing the system frequency. - When decreasing performance, the system frequency must first be decreased before changing the voltage scaling. */
    using PWR_VOSCR_VOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: scale 3 (default) (value: 0)
     *          - B_0x1: scale 2 (value: 1)
     *          - B_0x2: scale 1 (value: 2)
     *          - B_0x3: scale 0 (value: 3)
     */
        /** @brief scale 3 (default) */
    constexpr std::uint32_t PWR_VOSCR_VOS_B_0x0 = 0;
        /** @brief scale 2 */
    constexpr std::uint32_t PWR_VOSCR_VOS_B_0x1 = 1;
        /** @brief scale 1 */
    constexpr std::uint32_t PWR_VOSCR_VOS_B_0x2 = 2;
        /** @brief scale 0 */
    constexpr std::uint32_t PWR_VOSCR_VOS_B_0x3 = 3;

    /** @brief PWR voltage scaling status register */
    using PWR_VOSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ready bit for Vsub CORE/sub voltage scaling output selection. */
    using PWR_VOSSR_VOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready, voltage level below VOS selected level. (value: 0)
     *          - B_0x1: Ready, voltage level at or above VOS selected level. (value: 1)
     */
        /** @brief Not ready, voltage level below VOS selected level. */
    constexpr std::uint32_t PWR_VOSSR_VOSRDY_B_0x0 = 0;
        /** @brief Ready, voltage level at or above VOS selected level. */
    constexpr std::uint32_t PWR_VOSSR_VOSRDY_B_0x1 = 1;

    /** @brief Voltage level ready for currently used VOS */
    using PWR_VOSSR_ACTVOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vsub CORE/sub is above or below the current voltage scaling provided by ACTVOS[1:0]. (value: 0)
     *          - B_0x1: Vsub CORE/sub is equal to the current voltage scaling provided by ACTVOS[1:0] (value: 1)
     */
        /** @brief Vsub CORE/sub is above or below the current voltage scaling provided by ACTVOS[1:0]. */
    constexpr std::uint32_t PWR_VOSSR_ACTVOSRDY_B_0x0 = 0;
        /** @brief Vsub CORE/sub is equal to the current voltage scaling provided by ACTVOS[1:0] */
    constexpr std::uint32_t PWR_VOSSR_ACTVOSRDY_B_0x1 = 1;

    /** @brief voltage output scaling currently applied to Vsub CORE/sub This field provides the last VOS value. */
    using PWR_VOSSR_ACTVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VOS3 (lowest power) (value: 0)
     *          - B_0x1: VOS2 (value: 1)
     *          - B_0x2: VOS1 (value: 2)
     *          - B_0x3: VOS0 (highest frequency) (value: 3)
     */
        /** @brief VOS3 (lowest power) */
    constexpr std::uint32_t PWR_VOSSR_ACTVOS_B_0x0 = 0;
        /** @brief VOS2 */
    constexpr std::uint32_t PWR_VOSSR_ACTVOS_B_0x1 = 1;
        /** @brief VOS1 */
    constexpr std::uint32_t PWR_VOSSR_ACTVOS_B_0x2 = 2;
        /** @brief VOS0 (highest frequency) */
    constexpr std::uint32_t PWR_VOSSR_ACTVOS_B_0x3 = 3;

    /** @brief PWR Backup domain control register */
    using PWR_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup RAM retention in Standby and Vsub BAT/sub modes When this bit set, the backup regulator (used to maintain the backup RAM content in Standby and Vsub BAT/sub modes) is enabled. If BREN is cleared, the backup regulator is switched off. The backup RAM can still be used in 	Run and Stop modes. However its content is lost in Standby and Vsub BAT/sub modes. If BREN is set, the application must wait till the backup regulator ready flag (BRRDY) is set to indicate that the data written into the SRAM is maintained in Standby and Vsub BAT/sub modes. */
    using PWR_BDCR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup RAM content lost in Standby and Vsub BAT/sub modes. (value: 0)
     *          - B_0x1: Backup RAM content preserved in Standby and Vsub BAT/sub modes (value: 1)
     */
        /** @brief Backup RAM content lost in Standby and Vsub BAT/sub modes. */
    constexpr std::uint32_t PWR_BDCR_BREN_B_0x0 = 0;
        /** @brief Backup RAM content preserved in Standby and Vsub BAT/sub modes */
    constexpr std::uint32_t PWR_BDCR_BREN_B_0x1 = 1;

    /** @brief Backup domain voltage and temperature monitoring enable */
    using PWR_BDCR_MONEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup domain voltage and temperature monitoring disabled (value: 0)
     *          - B_0x1: Backup domain voltage and temperature monitoring enabled (value: 1)
     */
        /** @brief Backup domain voltage and temperature monitoring disabled */
    constexpr std::uint32_t PWR_BDCR_MONEN_B_0x0 = 0;
        /** @brief Backup domain voltage and temperature monitoring enabled */
    constexpr std::uint32_t PWR_BDCR_MONEN_B_0x1 = 1;

    /** @brief Vsub BAT/sub charging enable Note: Reset only by POR,. */
    using PWR_BDCR_VBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vsub BAT/sub battery charging disabled. (value: 0)
     *          - B_0x1: Vsub BAT/sub battery charging enabled. (value: 1)
     */
        /** @brief Vsub BAT/sub battery charging disabled. */
    constexpr std::uint32_t PWR_BDCR_VBE_B_0x0 = 0;
        /** @brief Vsub BAT/sub battery charging enabled. */
    constexpr std::uint32_t PWR_BDCR_VBE_B_0x1 = 1;

    /** @brief Vsub BAT/sub charging resistor selection */
    using PWR_BDCR_VBRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Charge Vsub BAT/sub through a 5 kohm resistor. (value: 0)
     *          - B_0x1: Charge Vsub BAT/sub through a 1.5 kohm resistor. (value: 1)
     */
        /** @brief Charge Vsub BAT/sub through a 5 kohm resistor. */
    constexpr std::uint32_t PWR_BDCR_VBRS_B_0x0 = 0;
        /** @brief Charge Vsub BAT/sub through a 1.5 kohm resistor. */
    constexpr std::uint32_t PWR_BDCR_VBRS_B_0x1 = 1;

    /** @brief PWR Backup domain control register */
    using PWR_DBPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Backup domain write protection In reset state, all registers and SRAM in Backup domain are protected against parasitic write 	access. This bit must be set to enable write access to these registers. */
    using PWR_DBPCR_DBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write access to Backup domain disabled (value: 0)
     *          - B_0x1: Write access to Backup domain enabled (value: 1)
     */
        /** @brief Write access to Backup domain disabled */
    constexpr std::uint32_t PWR_DBPCR_DBP_B_0x0 = 0;
        /** @brief Write access to Backup domain enabled */
    constexpr std::uint32_t PWR_DBPCR_DBP_B_0x1 = 1;

    /** @brief PWR Backup domain status register */
    using PWR_BDSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief backup regulator ready This bit is set by hardware to indicate that the backup regulator is ready. */
    using PWR_BDSR_BRRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: backup regulator not ready (value: 0)
     *          - B_0x1: backup regulator ready (value: 1)
     */
        /** @brief backup regulator not ready */
    constexpr std::uint32_t PWR_BDSR_BRRDY_B_0x0 = 0;
        /** @brief backup regulator ready */
    constexpr std::uint32_t PWR_BDSR_BRRDY_B_0x1 = 1;

    /** @brief Vsub BAT/sub level monitoring versus low threshold */
    using PWR_BDSR_VBATL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vsub BAT/sub level above low threshold level (value: 0)
     *          - B_0x1: Vsub BAT/sub level equal or below low threshold level (value: 1)
     */
        /** @brief Vsub BAT/sub level above low threshold level */
    constexpr std::uint32_t PWR_BDSR_VBATL_B_0x0 = 0;
        /** @brief Vsub BAT/sub level equal or below low threshold level */
    constexpr std::uint32_t PWR_BDSR_VBATL_B_0x1 = 1;

    /** @brief Vsub BAT/sub level monitoring versus high threshold */
    using PWR_BDSR_VBATH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vsub BAT/sub level below high threshold level (value: 0)
     *          - B_0x1: Vsub BAT/sub level equal or above high threshold level (value: 1)
     */
        /** @brief Vsub BAT/sub level below high threshold level */
    constexpr std::uint32_t PWR_BDSR_VBATH_B_0x0 = 0;
        /** @brief Vsub BAT/sub level equal or above high threshold level */
    constexpr std::uint32_t PWR_BDSR_VBATH_B_0x1 = 1;

    /** @brief temperature level monitoring versus low threshold */
    using PWR_BDSR_TEMPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: temperature above low threshold level (value: 0)
     *          - B_0x1: temperature equal or below low threshold level (value: 1)
     */
        /** @brief temperature above low threshold level */
    constexpr std::uint32_t PWR_BDSR_TEMPL_B_0x0 = 0;
        /** @brief temperature equal or below low threshold level */
    constexpr std::uint32_t PWR_BDSR_TEMPL_B_0x1 = 1;

    /** @brief temperature level monitoring versus high threshold */
    using PWR_BDSR_TEMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: temperature below high threshold level (value: 0)
     *          - B_0x1: temperature equal or above high threshold level (value: 1)
     */
        /** @brief temperature below high threshold level */
    constexpr std::uint32_t PWR_BDSR_TEMPH_B_0x0 = 0;
        /** @brief temperature equal or above high threshold level */
    constexpr std::uint32_t PWR_BDSR_TEMPH_B_0x1 = 1;

    /** @brief PWR USB Type-C power delivery register */
    using PWR_UCPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB Type-C and power delivery dead battery disable After exiting reset, the USB Type-C 'dead battery' behavior is enabled, which may have a pull-down effect on CC1 and CC2 pins. It is recommended to disable it in all case, either to stop this pull-down or to hand over control to the UCPD (which should therefore be initialized before doing the disable). */
    using PWR_UCPDR_UCPD_DBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable USB Type-C dead battery pull-down behavior on UCPDx_CC1 and UCPDx_CC2 pins. (value: 0)
     *          - B_0x1: Disable USB Type-C dead battery pull-down behavior on UCPDx_CC1 and UCPDx_CC2 pins. (value: 1)
     */
        /** @brief Enable USB Type-C dead battery pull-down behavior on UCPDx_CC1 and UCPDx_CC2 pins. */
    constexpr std::uint32_t PWR_UCPDR_UCPD_DBDIS_B_0x0 = 0;
        /** @brief Disable USB Type-C dead battery pull-down behavior on UCPDx_CC1 and UCPDx_CC2 pins. */
    constexpr std::uint32_t PWR_UCPDR_UCPD_DBDIS_B_0x1 = 1;

    /** @brief USB Type-c and Power delivery Standby mode When set, this bit is used to memorize the UCPD configuration in Standby mode. This bit must be written to 1 just before entering Standby mode when using UCPD, and it must be written to 0 after exiting the standby mode and before writing any UCPD register. */
    using PWR_UCPDR_UCPD_STBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR supply configuration control register */
    using PWR_SCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief power management unit bypass */
    using PWR_SCCR_BYPASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power management unit normal operation. Use the internal regulator. (value: 0)
     *          - B_0x1: Power management unit bypassed. Use the external power (voltage monitoring still active) (value: 1)
     */
        /** @brief Power management unit normal operation. Use the internal regulator. */
    constexpr std::uint32_t PWR_SCCR_BYPASS_B_0x0 = 0;
        /** @brief Power management unit bypassed. Use the external power (voltage monitoring still active) */
    constexpr std::uint32_t PWR_SCCR_BYPASS_B_0x1 = 1;

    /** @brief LDO enable The value is set by hardware when the package uses the LDO regulator. */
    using PWR_SCCR_LDOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS enable The value is set by hardware when the package uses the SMPS regulator. */
    using PWR_SCCR_SMPSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR voltage monitor control register */
    using PWR_VMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVD enable */
    using PWR_VMCR_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD disabled (value: 0)
     *          - B_0x1: PVD enabled (value: 1)
     */
        /** @brief PVD disabled */
    constexpr std::uint32_t PWR_VMCR_PVDE_B_0x0 = 0;
        /** @brief PVD enabled */
    constexpr std::uint32_t PWR_VMCR_PVDE_B_0x1 = 1;

    /** @brief programmable voltage detector (PVD) level selection These bits select the voltage threshold detected by the PVD. */
    using PWR_VMCR_PLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1.95 V (value: 0)
     *          - B_0x1: 2.1 V (value: 1)
     *          - B_0x2: 2.25 V (value: 2)
     *          - B_0x3: 2.4 V (value: 3)
     *          - B_0x4: 2.55 V (value: 4)
     *          - B_0x5: 2.7 V (value: 5)
     *          - B_0x6: 2.85 V (value: 6)
     *          - B_0x7: PVD_IN pin (value: 7)
     */
        /** @brief 1.95 V */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x0 = 0;
        /** @brief 2.1 V */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x1 = 1;
        /** @brief 2.25 V */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x2 = 2;
        /** @brief 2.4 V */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x3 = 3;
        /** @brief 2.55 V */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x4 = 4;
        /** @brief 2.7 V */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x5 = 5;
        /** @brief 2.85 V */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x6 = 6;
        /** @brief PVD_IN pin */
    constexpr std::uint32_t PWR_VMCR_PLS_B_0x7 = 7;

    /** @brief peripheral voltage monitor on Vsub DDA/sub enable */
    using PWR_VMCR_AVDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: peripheral voltage monitor on Vsub DDA/sub disabled (value: 0)
     *          - B_0x1: peripheral voltage monitor on Vsub DDA/sub enabled (value: 1)
     */
        /** @brief peripheral voltage monitor on Vsub DDA/sub disabled */
    constexpr std::uint32_t PWR_VMCR_AVDEN_B_0x0 = 0;
        /** @brief peripheral voltage monitor on Vsub DDA/sub enabled */
    constexpr std::uint32_t PWR_VMCR_AVDEN_B_0x1 = 1;

    /** @brief analog voltage detector (AVD) level selection These bits select the voltage threshold detected by the AVD. */
    using PWR_VMCR_ALS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1.7 V (value: 0)
     *          - B_0x1: 2.1 V (value: 1)
     *          - B_0x2: 2.5 V (value: 2)
     *          - B_0x3: 2.8 V (value: 3)
     */
        /** @brief 1.7 V */
    constexpr std::uint32_t PWR_VMCR_ALS_B_0x0 = 0;
        /** @brief 2.1 V */
    constexpr std::uint32_t PWR_VMCR_ALS_B_0x1 = 1;
        /** @brief 2.5 V */
    constexpr std::uint32_t PWR_VMCR_ALS_B_0x2 = 2;
        /** @brief 2.8 V */
    constexpr std::uint32_t PWR_VMCR_ALS_B_0x3 = 3;

    /** @brief PWR USB supply control register */
    using PWR_USBSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vsub DDUSB/sub voltage level detector enable */
    using PWR_USBSCR_USB33DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vsub DDUSB/sub voltage level detector disabled (value: 0)
     *          - B_0x1: Vsub DDUSB/sub voltage level detector enabled (value: 1)
     */
        /** @brief Vsub DDUSB/sub voltage level detector disabled */
    constexpr std::uint32_t PWR_USBSCR_USB33DEN_B_0x0 = 0;
        /** @brief Vsub DDUSB/sub voltage level detector enabled */
    constexpr std::uint32_t PWR_USBSCR_USB33DEN_B_0x1 = 1;

    /** @brief independent USB supply valid This bit is used to validate the Vsub DDUSB/sub supply for electrical and logical isolation purpose. Setting this bit is mandatory to use the USBFS peripheral. If Vsub DDUSB/sub is not always present in the application, the Vsub DDUSB/sub voltage monitor can be used to determine whether this supply is ready or not. */
    using PWR_USBSCR_USB33SV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vsub DDUSB/sub is not present. Logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: Vsub DDUSB/sub is valid. (value: 1)
     */
        /** @brief Vsub DDUSB/sub is not present. Logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_USBSCR_USB33SV_B_0x0 = 0;
        /** @brief Vsub DDUSB/sub is valid. */
    constexpr std::uint32_t PWR_USBSCR_USB33SV_B_0x1 = 1;

    /** @brief PWR voltage monitor status register */
    using PWR_VMSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief analog voltage detector output on Vsub DDA/sub This bit is set and cleared by hardware. It is valid only if AVD on VDDA is enabled by the AVDEN bit. Note: Since the AVD is disabled in Standby mode, this bit is equal to 0 after standby or reset until the AVDEN bit is set. */
    using PWR_VMSR_AVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vsub DDA/sub is equal or higher than the AVD threshold selected with the ALS[2:0] bits. (value: 0)
     *          - B_0x1: Vsub DDA/sub is lower than the AVD threshold selected with the ALS[2:0] bits. (value: 1)
     */
        /** @brief Vsub DDA/sub is equal or higher than the AVD threshold selected with the ALS[2:0] bits. */
    constexpr std::uint32_t PWR_VMSR_AVDO_B_0x0 = 0;
        /** @brief Vsub DDA/sub is lower than the AVD threshold selected with the ALS[2:0] bits. */
    constexpr std::uint32_t PWR_VMSR_AVDO_B_0x1 = 1;

    /** @brief voltage detector output on Vsub DDIO2/sub This bit is set and cleared by hardware. */
    using PWR_VMSR_VDDIO2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vsub DDIO2/sub is below 1.2 V. (value: 0)
     *          - B_0x1: Vsub DDIO2/sub is above or equal to 1.2 V. (value: 1)
     */
        /** @brief Vsub DDIO2/sub is below 1.2 V. */
    constexpr std::uint32_t PWR_VMSR_VDDIO2RDY_B_0x0 = 0;
        /** @brief Vsub DDIO2/sub is above or equal to 1.2 V. */
    constexpr std::uint32_t PWR_VMSR_VDDIO2RDY_B_0x1 = 1;

    /** @brief programmable voltage detect output This bit is set and cleared by hardware. It is valid only if the PVD has been enabled by the PVDE bit. Note: Since the PVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the PVDE bit is set. */
    using PWR_VMSR_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vsub DD/sub is equal or higher than the PVD threshold selected through the PLS[2:0] bits. (value: 0)
     *          - B_0x1: Vsub DD/sub is lower than the PVD threshold selected through the PLS[2:0] bits. (value: 1)
     */
        /** @brief Vsub DD/sub is equal or higher than the PVD threshold selected through the PLS[2:0] bits. */
    constexpr std::uint32_t PWR_VMSR_PVDO_B_0x0 = 0;
        /** @brief Vsub DD/sub is lower than the PVD threshold selected through the PLS[2:0] bits. */
    constexpr std::uint32_t PWR_VMSR_PVDO_B_0x1 = 1;

    /** @brief Vsub DDUSB/sub ready */
    using PWR_VMSR_USB33RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vsub DDUSB/sub is below the threshold of the Vsub DDUSB/sub voltage monitor. (value: 0)
     *          - B_0x1: Vsub DDUSB/sub is equal or above the threshold of the Vsub DDUSB/sub voltage monitor. (value: 1)
     */
        /** @brief Vsub DDUSB/sub is below the threshold of the Vsub DDUSB/sub voltage monitor. */
    constexpr std::uint32_t PWR_VMSR_USB33RDY_B_0x0 = 0;
        /** @brief Vsub DDUSB/sub is equal or above the threshold of the Vsub DDUSB/sub voltage monitor. */
    constexpr std::uint32_t PWR_VMSR_USB33RDY_B_0x1 = 1;

    /** @brief PWR wakeup status clear register */
    using PWR_WUSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clear wakeup pin flag for WUFx These bits are always read as 0. */
    using PWR_WUSCR_CWUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF1_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF1_B_0x1 = 1;

    /** @brief clear wakeup pin flag for WUFx These bits are always read as 0. */
    using PWR_WUSCR_CWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF2_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF2_B_0x1 = 1;

    /** @brief clear wakeup pin flag for WUFx These bits are always read as 0. */
    using PWR_WUSCR_CWUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF3_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF3_B_0x1 = 1;

    /** @brief clear wakeup pin flag for WUFx These bits are always read as 0. */
    using PWR_WUSCR_CWUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF4_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF4_B_0x1 = 1;

    /** @brief clear wakeup pin flag for WUFx These bits are always read as 0. */
    using PWR_WUSCR_CWUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF5_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF5_B_0x1 = 1;

    /** @brief clear wakeup pin flag for WUFx These bits are always read as 0. */
    using PWR_WUSCR_CWUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF6_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF6_B_0x1 = 1;

    /** @brief clear wakeup pin flag for WUFx These bits are always read as 0. */
    using PWR_WUSCR_CWUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF7_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF7_B_0x1 = 1;

    /** @brief clear wakeup pin flag for WUFx These bits are always read as 0. */
    using PWR_WUSCR_CWUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t PWR_WUSCR_CWUF8_B_0x0 = 0;
        /** @brief writing 1 clears the WUFx wakeup pin flag (bit is cleared to 0 by hardware). */
    constexpr std::uint32_t PWR_WUSCR_CWUF8_B_0x1 = 1;

    /** @brief PWR wakeup status register */
    using PWR_WUSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief wakeup pin WUFx flag This bit is set by hardware and cleared only by a RESET pin or by setting the CWUFx bit in PWR_WUSCR register. */
    using PWR_WUSR_WUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wakeup event occurred. (value: 0)
     *          - B_0x1: a wakeup event received from WUFx pin. (value: 1)
     */
        /** @brief no wakeup event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF1_B_0x0 = 0;
        /** @brief a wakeup event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF1_B_0x1 = 1;

    /** @brief wakeup pin WUFx flag This bit is set by hardware and cleared only by a RESET pin or by setting the CWUFx bit in PWR_WUSCR register. */
    using PWR_WUSR_WUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wakeup event occurred. (value: 0)
     *          - B_0x1: a wakeup event received from WUFx pin. (value: 1)
     */
        /** @brief no wakeup event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF2_B_0x0 = 0;
        /** @brief a wakeup event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF2_B_0x1 = 1;

    /** @brief wakeup pin WUFx flag This bit is set by hardware and cleared only by a RESET pin or by setting the CWUFx bit in PWR_WUSCR register. */
    using PWR_WUSR_WUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wakeup event occurred. (value: 0)
     *          - B_0x1: a wakeup event received from WUFx pin. (value: 1)
     */
        /** @brief no wakeup event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF3_B_0x0 = 0;
        /** @brief a wakeup event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF3_B_0x1 = 1;

    /** @brief wakeup pin WUFx flag This bit is set by hardware and cleared only by a RESET pin or by setting the CWUFx bit in PWR_WUSCR register. */
    using PWR_WUSR_WUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wakeup event occurred. (value: 0)
     *          - B_0x1: a wakeup event received from WUFx pin. (value: 1)
     */
        /** @brief no wakeup event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF4_B_0x0 = 0;
        /** @brief a wakeup event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF4_B_0x1 = 1;

    /** @brief wakeup pin WUFx flag This bit is set by hardware and cleared only by a RESET pin or by setting the CWUFx bit in PWR_WUSCR register. */
    using PWR_WUSR_WUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wakeup event occurred. (value: 0)
     *          - B_0x1: a wakeup event received from WUFx pin. (value: 1)
     */
        /** @brief no wakeup event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF5_B_0x0 = 0;
        /** @brief a wakeup event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF5_B_0x1 = 1;

    /** @brief wakeup pin WUFx flag This bit is set by hardware and cleared only by a RESET pin or by setting the CWUFx bit in PWR_WUSCR register. */
    using PWR_WUSR_WUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wakeup event occurred. (value: 0)
     *          - B_0x1: a wakeup event received from WUFx pin. (value: 1)
     */
        /** @brief no wakeup event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF6_B_0x0 = 0;
        /** @brief a wakeup event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF6_B_0x1 = 1;

    /** @brief wakeup pin WUFx flag This bit is set by hardware and cleared only by a RESET pin or by setting the CWUFx bit in PWR_WUSCR register. */
    using PWR_WUSR_WUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wakeup event occurred. (value: 0)
     *          - B_0x1: a wakeup event received from WUFx pin. (value: 1)
     */
        /** @brief no wakeup event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF7_B_0x0 = 0;
        /** @brief a wakeup event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF7_B_0x1 = 1;

    /** @brief wakeup pin WUFx flag This bit is set by hardware and cleared only by a RESET pin or by setting the CWUFx bit in PWR_WUSCR register. */
    using PWR_WUSR_WUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no wakeup event occurred. (value: 0)
     *          - B_0x1: a wakeup event received from WUFx pin. (value: 1)
     */
        /** @brief no wakeup event occurred. */
    constexpr std::uint32_t PWR_WUSR_WUF8_B_0x0 = 0;
        /** @brief a wakeup event received from WUFx pin. */
    constexpr std::uint32_t PWR_WUSR_WUF8_B_0x1 = 1;

    /** @brief PWR wakeup configuration register */
    using PWR_WUCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable wakeup pin WUPx These bits are set and cleared by software. Note: an additional wakeup event is detected if WUPx pin is enabled (by setting the WUPENx bit) when WUPx pin level is already high when WUPPx selects rising edge, or low when WUPPx selects falling edge. */
    using PWR_WUCR_WUPEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN1_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN1_B_0x1 = 1;

    /** @brief enable wakeup pin WUPx These bits are set and cleared by software. Note: an additional wakeup event is detected if WUPx pin is enabled (by setting the WUPENx bit) when WUPx pin level is already high when WUPPx selects rising edge, or low when WUPPx selects falling edge. */
    using PWR_WUCR_WUPEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN2_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN2_B_0x1 = 1;

    /** @brief enable wakeup pin WUPx These bits are set and cleared by software. Note: an additional wakeup event is detected if WUPx pin is enabled (by setting the WUPENx bit) when WUPx pin level is already high when WUPPx selects rising edge, or low when WUPPx selects falling edge. */
    using PWR_WUCR_WUPEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN3_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN3_B_0x1 = 1;

    /** @brief enable wakeup pin WUPx These bits are set and cleared by software. Note: an additional wakeup event is detected if WUPx pin is enabled (by setting the WUPENx bit) when WUPx pin level is already high when WUPPx selects rising edge, or low when WUPPx selects falling edge. */
    using PWR_WUCR_WUPEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN4_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN4_B_0x1 = 1;

    /** @brief enable wakeup pin WUPx These bits are set and cleared by software. Note: an additional wakeup event is detected if WUPx pin is enabled (by setting the WUPENx bit) when WUPx pin level is already high when WUPPx selects rising edge, or low when WUPPx selects falling edge. */
    using PWR_WUCR_WUPEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN5_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN5_B_0x1 = 1;

    /** @brief enable wakeup pin WUPx These bits are set and cleared by software. Note: an additional wakeup event is detected if WUPx pin is enabled (by setting the WUPENx bit) when WUPx pin level is already high when WUPPx selects rising edge, or low when WUPPx selects falling edge. */
    using PWR_WUCR_WUPEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN6_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN6_B_0x1 = 1;

    /** @brief enable wakeup pin WUPx These bits are set and cleared by software. Note: an additional wakeup event is detected if WUPx pin is enabled (by setting the WUPENx bit) when WUPx pin level is already high when WUPPx selects rising edge, or low when WUPPx selects falling edge. */
    using PWR_WUCR_WUPEN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN7_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN7_B_0x1 = 1;

    /** @brief enable wakeup pin WUPx These bits are set and cleared by software. Note: an additional wakeup event is detected if WUPx pin is enabled (by setting the WUPENx bit) when WUPx pin level is already high when WUPPx selects rising edge, or low when WUPPx selects falling edge. */
    using PWR_WUCR_WUPEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an event on WUPx pin does not wakeup the system from Standby mode. (value: 0)
     *          - B_0x1: a rising or falling edge on WUPx pin wakes up the system from Standby mode. (value: 1)
     */
        /** @brief an event on WUPx pin does not wakeup the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN8_B_0x0 = 0;
        /** @brief a rising or falling edge on WUPx pin wakes up the system from Standby mode. */
    constexpr std::uint32_t PWR_WUCR_WUPEN8_B_0x1 = 1;

    /** @brief wakeup pin polarity bit for WUPx These bits define the polarity used for event detection on WUPx external wakeup pin. */
    using PWR_WUCR_WUPP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP1_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP1_B_0x1 = 1;

    /** @brief wakeup pin polarity bit for WUPx These bits define the polarity used for event detection on WUPx external wakeup pin. */
    using PWR_WUCR_WUPP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP2_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP2_B_0x1 = 1;

    /** @brief wakeup pin polarity bit for WUPx These bits define the polarity used for event detection on WUPx external wakeup pin. */
    using PWR_WUCR_WUPP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP3_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP3_B_0x1 = 1;

    /** @brief wakeup pin polarity bit for WUPx These bits define the polarity used for event detection on WUPx external wakeup pin. */
    using PWR_WUCR_WUPP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP4_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP4_B_0x1 = 1;

    /** @brief wakeup pin polarity bit for WUPx These bits define the polarity used for event detection on WUPx external wakeup pin. */
    using PWR_WUCR_WUPP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP5_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP5_B_0x1 = 1;

    /** @brief wakeup pin polarity bit for WUPx These bits define the polarity used for event detection on WUPx external wakeup pin. */
    using PWR_WUCR_WUPP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP6_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP6_B_0x1 = 1;

    /** @brief wakeup pin polarity bit for WUPx These bits define the polarity used for event detection on WUPx external wakeup pin. */
    using PWR_WUCR_WUPP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP7_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP7_B_0x1 = 1;

    /** @brief wakeup pin polarity bit for WUPx These bits define the polarity used for event detection on WUPx external wakeup pin. */
    using PWR_WUCR_WUPP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: detection on high level (rising edge) (value: 0)
     *          - B_0x1: detection on low level (falling edge) (value: 1)
     */
        /** @brief detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP8_B_0x0 = 0;
        /** @brief detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR_WUPP8_B_0x1 = 1;

    /** @brief wakeup pin pull configuration for WKUPx These bits define the I/O pad pull configuration used when WUPENx = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WUCR_WUPPUPD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD1_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD1_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD1_B_0x2 = 2;

    /** @brief wakeup pin pull configuration for WKUPx These bits define the I/O pad pull configuration used when WUPENx = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WUCR_WUPPUPD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD2_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD2_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD2_B_0x2 = 2;

    /** @brief wakeup pin pull configuration for WKUPx These bits define the I/O pad pull configuration used when WUPENx = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WUCR_WUPPUPD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD3_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD3_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD3_B_0x2 = 2;

    /** @brief wakeup pin pull configuration for WKUPx These bits define the I/O pad pull configuration used when WUPENx = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WUCR_WUPPUPD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD4_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD4_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD4_B_0x2 = 2;

    /** @brief wakeup pin pull configuration for WKUPx These bits define the I/O pad pull configuration used when WUPENx = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WUCR_WUPPUPD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD5_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD5_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD5_B_0x2 = 2;

    /** @brief wakeup pin pull configuration for WKUPx These bits define the I/O pad pull configuration used when WUPENx = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WUCR_WUPPUPD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD6_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD6_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD6_B_0x2 = 2;

    /** @brief wakeup pin pull configuration for WKUPx These bits define the I/O pad pull configuration used when WUPENx = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WUCR_WUPPUPD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD7_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD7_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD7_B_0x2 = 2;

    /** @brief wakeup pin pull configuration for WKUPx These bits define the I/O pad pull configuration used when WUPENx = 1. The associated GPIO port pull configuration must be set to the same value or to 00. The wakeup pin pull configuration is kept in Standby mode. */
    using PWR_WUCR_WUPPUPD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no pull-up (value: 0)
     *          - B_0x1: pull-up (value: 1)
     *          - B_0x2: pull-down (value: 2)
     */
        /** @brief no pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD8_B_0x0 = 0;
        /** @brief pull-up */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD8_B_0x1 = 1;
        /** @brief pull-down */
    constexpr std::uint32_t PWR_WUCR_WUPPUPD8_B_0x2 = 2;

    /** @brief PWR I/O retention register */
    using PWR_IORETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO retention enable: When entering into standby mode, the output is sampled, and apply to the output IO during the standby power mode. Note: the IO state is not retained if the DBG_STANDBY bit is set in DBGMCU_CR register. */
    using PWR_IORETR_IORETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO Retention mode is disable. (value: 0)
     *          - B_0x1: IO Retention mode is enabling for all IO except the IO support the standby functionality and PA13, PA14, PA15 and PB4. (value: 1)
     */
        /** @brief IO Retention mode is disable. */
    constexpr std::uint32_t PWR_IORETR_IORETEN_B_0x0 = 0;
        /** @brief IO Retention mode is enabling for all IO except the IO support the standby functionality and PA13, PA14, PA15 and PB4. */
    constexpr std::uint32_t PWR_IORETR_IORETEN_B_0x1 = 1;

    /** @brief IO retention enable for JTAG IOs when entering into standby mode, the output is sampled, and apply to the output IO during the standby power mode */
    using PWR_IORETR_JTAGIORETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IO Retention mode is disable. (value: 0)
     *          - B_0x1: IO Retention mode is enabling for PA13, PA14, PA15 and PB4. (value: 1)
     */
        /** @brief IO Retention mode is disable. */
    constexpr std::uint32_t PWR_IORETR_JTAGIORETEN_B_0x0 = 0;
        /** @brief IO Retention mode is enabling for PA13, PA14, PA15 and PB4. */
    constexpr std::uint32_t PWR_IORETR_JTAGIORETEN_B_0x1 = 1;

    /** @brief PWR security configuration register */
    using PWR_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUPx secure protection */
    using PWR_SECCFGR_WUP1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP1SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP1SEC_B_0x1 = 1;

    /** @brief WUPx secure protection */
    using PWR_SECCFGR_WUP2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP2SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP2SEC_B_0x1 = 1;

    /** @brief WUPx secure protection */
    using PWR_SECCFGR_WUP3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP3SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP3SEC_B_0x1 = 1;

    /** @brief WUPx secure protection */
    using PWR_SECCFGR_WUP4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP4SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP4SEC_B_0x1 = 1;

    /** @brief WUPx secure protection */
    using PWR_SECCFGR_WUP5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP5SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP5SEC_B_0x1 = 1;

    /** @brief WUPx secure protection */
    using PWR_SECCFGR_WUP6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP6SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP6SEC_B_0x1 = 1;

    /** @brief WUPx secure protection */
    using PWR_SECCFGR_WUP7SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP7SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP7SEC_B_0x1 = 1;

    /** @brief WUPx secure protection */
    using PWR_SECCFGR_WUP8SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP8SEC_B_0x0 = 0;
        /** @brief The bits related to the WKUPx wakeup pin in PWR_WUSCR and PWR_WUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP8SEC_B_0x1 = 1;

    /** @brief retention secure protection */
    using PWR_SECCFGR_RETSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_IORETR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_IORETR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_IORETR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_RETSEC_B_0x0 = 0;
        /** @brief PWR_IORETR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_RETSEC_B_0x1 = 1;

    /** @brief low-power modes secure protection */
    using PWR_SECCFGR_LPMSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_PMCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_PMCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_PMCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_LPMSEC_B_0x0 = 0;
        /** @brief PWR_PMCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_LPMSEC_B_0x1 = 1;

    /** @brief supply configuration and monitoring secure protection. */
    using PWR_SECCFGR_SCMSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_SCCR and PWR_VMCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_SCCR and PWR_VMCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_SCCR and PWR_VMCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SCMSEC_B_0x0 = 0;
        /** @brief PWR_SCCR and PWR_VMCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SCMSEC_B_0x1 = 1;

    /** @brief backup domain secure protection */
    using PWR_SECCFGR_VBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_BDCR, PWR_DBPCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_BDCR, PWR_DBPCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_BDCR, PWR_DBPCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VBSEC_B_0x0 = 0;
        /** @brief PWR_BDCR, PWR_DBPCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VBSEC_B_0x1 = 1;

    /** @brief voltage USB secure protection */
    using PWR_SECCFGR_VUSBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_USBSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_USBSCR can be read and written only with secure access.. (value: 1)
     */
        /** @brief PWR_USBSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VUSBSEC_B_0x0 = 0;
        /** @brief PWR_USBSCR can be read and written only with secure access.. */
    constexpr std::uint32_t PWR_SECCFGR_VUSBSEC_B_0x1 = 1;

    /** @brief PWR privilege configuration register */
    using PWR_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR secure functions privilege configuration Set and reset by software. This bit can be written only by a secure privileged access. */
    using PWR_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to PWR secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to PWR secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to PWR secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Read and write to PWR secure functions can be done by privileged access only. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief PWR non-secure functions privilege configuration Set and reset by software. This bit can be written only by privileged access, secure or non-secure. */
    using PWR_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to PWR non-secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to PWR non-secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to PWR non-secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Read and write to PWR non-secure functions can be done by privileged access only. */
    constexpr std::uint32_t PWR_PRIVCFGR_NSPRIV_B_0x1 = 1;

}

#endif
