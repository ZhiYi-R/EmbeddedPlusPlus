/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N647_PWR_HPP
#define EMBEDDED_PP_STM32N647_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Power control */
namespace STM32N647::PWR {

    /** @brief PWR control register 1 */
    using PWR_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS step-down converter enable */
    using PWR_CR1_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SMPS step-down converter disabled (value: 0)
     *          - B_0x1: SMPS step-down converter enabled (default) (value: 1)
     */
        /** @brief SMPS step-down converter disabled */
    constexpr std::uint32_t PWR_CR1_SDEN_B_0x0 = 0;
        /** @brief SMPS step-down converter enabled (default) */
    constexpr std::uint32_t PWR_CR1_SDEN_B_0x1 = 1;

    /** @brief Enables the pull down on output voltage during power-down mode */
    using PWR_CR1_MODE_PDN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pull-down disabled. The output is in high impedance during the shutdown (default). (value: 0)
     *          - B_0x1: Pull-down enabled (value: 1)
     */
        /** @brief Pull-down disabled. The output is in high impedance during the shutdown (default). */
    constexpr std::uint32_t PWR_CR1_MODE_PDN_B_0x0 = 0;
        /** @brief Pull-down enabled */
    constexpr std::uint32_t PWR_CR1_MODE_PDN_B_0x1 = 1;

    /** @brief SMPS low-power mode enable (SVOS high only) */
    using PWR_CR1_LPDS08V = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SMPS low-power mode disabled (value: 0)
     *          - B_0x1: SMPS low-power mode enabled (high-efficiency mode) (default) (value: 1)
     */
        /** @brief SMPS low-power mode disabled */
    constexpr std::uint32_t PWR_CR1_LPDS08V_B_0x0 = 0;
        /** @brief SMPS low-power mode enabled (high-efficiency mode) (default) */
    constexpr std::uint32_t PWR_CR1_LPDS08V_B_0x1 = 1;

    /** @brief pwr_on pulse low configuration. */
    using PWR_CR1_POPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No guaranteed minimum low time (value: 0)
     *          - B_0x1: ~ 1 ms guaranteed minimum low time (1 x 32 LSI cycles) (value: 1)
     *          - B_0x2: ~ 2 ms guaranteed minimum low time (2 x 32 LSI cycles) (value: 2)
     *          - B_0x1F: ~ 31 ms guaranteed minimum low time (31 x 32 LSI cycles) (value: 31)
     */
        /** @brief No guaranteed minimum low time */
    constexpr std::uint32_t PWR_CR1_POPL_B_0x0 = 0;
        /** @brief ~ 1 ms guaranteed minimum low time (1 x 32 LSI cycles) */
    constexpr std::uint32_t PWR_CR1_POPL_B_0x1 = 1;
        /** @brief ~ 2 ms guaranteed minimum low time (2 x 32 LSI cycles) */
    constexpr std::uint32_t PWR_CR1_POPL_B_0x2 = 2;
        /** @brief ~ 31 ms guaranteed minimum low time (31 x 32 LSI cycles) */
    constexpr std::uint32_t PWR_CR1_POPL_B_0x1F = 31;

    /** @brief PWR control register 2 */
    using PWR_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programmable voltage detector enable */
    using PWR_CR2_PVDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD disabled (value: 0)
     *          - B_0x1: PVD enabled (value: 1)
     */
        /** @brief PVD disabled */
    constexpr std::uint32_t PWR_CR2_PVDEN_B_0x0 = 0;
        /** @brief PVD enabled */
    constexpr std::uint32_t PWR_CR2_PVDEN_B_0x1 = 1;

    /** @brief Programmable voltage detect output */
    using PWR_CR2_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Voltage level on PVD_IN is equal or higher than the internal VREFINT. (value: 0)
     *          - B_0x1: Voltage level on PVD_IN is lower than the internal VREFINT. (value: 1)
     */
        /** @brief Voltage level on PVD_IN is equal or higher than the internal VREFINT. */
    constexpr std::uint32_t PWR_CR2_PVDO_B_0x0 = 0;
        /** @brief Voltage level on PVD_IN is lower than the internal VREFINT. */
    constexpr std::uint32_t PWR_CR2_PVDO_B_0x1 = 1;

    /** @brief PWR control register 3 */
    using PWR_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vless thansub>DDCOREless than/sub> monitoring enable */
    using PWR_CR3_VCOREMONEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDCOREless than/sub> monitoring disabled (value: 0)
     *          - B_0x1: Vless thansub>DDCOREless than/sub> monitoring enabled (value: 1)
     */
        /** @brief Vless thansub>DDCOREless than/sub> monitoring disabled */
    constexpr std::uint32_t PWR_CR3_VCOREMONEN_B_0x0 = 0;
        /** @brief Vless thansub>DDCOREless than/sub> monitoring enabled */
    constexpr std::uint32_t PWR_CR3_VCOREMONEN_B_0x1 = 1;

    /** @brief Vless thansub>DDCOREless than/sub> voltage detector low-level selection */
    using PWR_CR3_VCORELLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDCOREless than/sub> low-voltage threshold 1 selected (VOS low) (value: 0)
     *          - B_0x1: Vless thansub>DDCOREless than/sub> low-voltage threshold 2 selected (VOS high) (value: 1)
     */
        /** @brief Vless thansub>DDCOREless than/sub> low-voltage threshold 1 selected (VOS low) */
    constexpr std::uint32_t PWR_CR3_VCORELLS_B_0x0 = 0;
        /** @brief Vless thansub>DDCOREless than/sub> low-voltage threshold 2 selected (VOS high) */
    constexpr std::uint32_t PWR_CR3_VCORELLS_B_0x1 = 1;

    /** @brief Monitored Vless thansub>DDCOREless than/sub> level above low threshold */
    using PWR_CR3_VCOREL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDCOREless than/sub> level above low threshold level, or monitor disabled (value: 0)
     *          - B_0x1: Vless thansub>DDCOREless than/sub> level equal or below low threshold level (value: 1)
     */
        /** @brief Vless thansub>DDCOREless than/sub> level above low threshold level, or monitor disabled */
    constexpr std::uint32_t PWR_CR3_VCOREL_B_0x0 = 0;
        /** @brief Vless thansub>DDCOREless than/sub> level equal or below low threshold level */
    constexpr std::uint32_t PWR_CR3_VCOREL_B_0x1 = 1;

    /** @brief Monitored Vless thansub>DDCOREless than/sub> level above high threshold */
    using PWR_CR3_VCOREH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDCOREless than/sub> level below high threshold level, or monitor disabled (value: 0)
     *          - B_0x1: Vless thansub>DDCOREless than/sub> level equal or above high threshold level (value: 1)
     */
        /** @brief Vless thansub>DDCOREless than/sub> level below high threshold level, or monitor disabled */
    constexpr std::uint32_t PWR_CR3_VCOREH_B_0x0 = 0;
        /** @brief Vless thansub>DDCOREless than/sub> level equal or above high threshold level */
    constexpr std::uint32_t PWR_CR3_VCOREH_B_0x1 = 1;

    /** @brief PWR control register 4 */
    using PWR_CR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I-TCM and D-TCM RAMs backup supply enable (used to maintain TCM RAMs content in Standby mode) */
    using PWR_CR4_TCMRBSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I-TCM and D-TCM RAMs backup supply disabled (value: 0)
     *          - B_0x1: I-TCM and D-TCM RAMs backup supply enabled in Standby mode (value: 1)
     */
        /** @brief I-TCM and D-TCM RAMs backup supply disabled */
    constexpr std::uint32_t PWR_CR4_TCMRBSEN_B_0x0 = 0;
        /** @brief I-TCM and D-TCM RAMs backup supply enabled in Standby mode */
    constexpr std::uint32_t PWR_CR4_TCMRBSEN_B_0x1 = 1;

    /** @brief I-TCM FLEXMEM backup supply enable (used to maintain I-TCM FLEX MEM content in Standby mode) */
    using PWR_CR4_TCMFLXRBSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I-TCM FLEXMEM backup supply disabled (value: 0)
     *          - B_0x1: I-TCM FLEXMEM backup supply enabled in Standby mode (value: 1)
     */
        /** @brief I-TCM FLEXMEM backup supply disabled */
    constexpr std::uint32_t PWR_CR4_TCMFLXRBSEN_B_0x0 = 0;
        /** @brief I-TCM FLEXMEM backup supply enabled in Standby mode */
    constexpr std::uint32_t PWR_CR4_TCMFLXRBSEN_B_0x1 = 1;

    /** @brief PWR voltage scaling control register */
    using PWR_VOSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage scaling selection according to performance */
    using PWR_VOSCR_VOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VOS low level (default) (value: 0)
     *          - B_0x1: VOS high level (value: 1)
     */
        /** @brief VOS low level (default) */
    constexpr std::uint32_t PWR_VOSCR_VOS_B_0x0 = 0;
        /** @brief VOS high level */
    constexpr std::uint32_t PWR_VOSCR_VOS_B_0x1 = 1;

    /** @brief VOS ready bit for Vless thansub>COREless than/sub> voltage scaling output selection */
    using PWR_VOSCR_VOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready, voltage level below VOS selected level (value: 0)
     *          - B_0x1: Ready, voltage level at or above VOS selected level (value: 1)
     */
        /** @brief Not ready, voltage level below VOS selected level */
    constexpr std::uint32_t PWR_VOSCR_VOSRDY_B_0x0 = 0;
        /** @brief Ready, voltage level at or above VOS selected level */
    constexpr std::uint32_t PWR_VOSCR_VOSRDY_B_0x1 = 1;

    /** @brief VOS currently applied for Vless thansub>COREless than/sub> voltage scaling selection */
    using PWR_VOSCR_ACTVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage level ready bit for currently used ACTVOS */
    using PWR_VOSCR_ACTVOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Voltage level invalid, above or below current ACTVOS (value: 0)
     *          - B_0x1: Voltage level valid, at current ACTVOS (value: 1)
     */
        /** @brief Voltage level invalid, above or below current ACTVOS */
    constexpr std::uint32_t PWR_VOSCR_ACTVOSRDY_B_0x0 = 0;
        /** @brief Voltage level valid, at current ACTVOS */
    constexpr std::uint32_t PWR_VOSCR_ACTVOSRDY_B_0x1 = 1;

    /** @brief PWR backup domain control register 1 */
    using PWR_BDCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vless thansub>BATless than/sub> and temperature monitoring enable */
    using PWR_BDCR1_MONEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>BATless than/sub> and temperature monitoring disabled (value: 0)
     *          - B_0x1: Vless thansub>BATless than/sub> and temperature monitoring enabled (value: 1)
     */
        /** @brief Vless thansub>BATless than/sub> and temperature monitoring disabled */
    constexpr std::uint32_t PWR_BDCR1_MONEN_B_0x0 = 0;
        /** @brief Vless thansub>BATless than/sub> and temperature monitoring enabled */
    constexpr std::uint32_t PWR_BDCR1_MONEN_B_0x1 = 1;

    /** @brief Vless thansub>BATless than/sub> level monitoring versus low threshold */
    using PWR_BDCR1_VBATL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>BATless than/sub> level above low threshold level (value: 0)
     *          - B_0x1: Vless thansub>BATless than/sub> level equal or below low threshold level (value: 1)
     */
        /** @brief Vless thansub>BATless than/sub> level above low threshold level */
    constexpr std::uint32_t PWR_BDCR1_VBATL_B_0x0 = 0;
        /** @brief Vless thansub>BATless than/sub> level equal or below low threshold level */
    constexpr std::uint32_t PWR_BDCR1_VBATL_B_0x1 = 1;

    /** @brief Vless thansub>BATless than/sub> level monitoring versus high threshold */
    using PWR_BDCR1_VBATH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>BATless than/sub> level below high threshold level. (value: 0)
     *          - B_0x1: Vless thansub>BATless than/sub> level equal or above high threshold level (value: 1)
     */
        /** @brief Vless thansub>BATless than/sub> level below high threshold level. */
    constexpr std::uint32_t PWR_BDCR1_VBATH_B_0x0 = 0;
        /** @brief Vless thansub>BATless than/sub> level equal or above high threshold level */
    constexpr std::uint32_t PWR_BDCR1_VBATH_B_0x1 = 1;

    /** @brief Temperature level monitoring versus low threshold */
    using PWR_BDCR1_TEMPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature above low threshold level (value: 0)
     *          - B_0x1: Temperature equal or below low threshold level (value: 1)
     */
        /** @brief Temperature above low threshold level */
    constexpr std::uint32_t PWR_BDCR1_TEMPL_B_0x0 = 0;
        /** @brief Temperature equal or below low threshold level */
    constexpr std::uint32_t PWR_BDCR1_TEMPL_B_0x1 = 1;

    /** @brief Temperature level monitoring versus high threshold */
    using PWR_BDCR1_TEMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature below high threshold level (value: 0)
     *          - B_0x1: Temperature equal or above high threshold level (value: 1)
     */
        /** @brief Temperature below high threshold level */
    constexpr std::uint32_t PWR_BDCR1_TEMPH_B_0x0 = 0;
        /** @brief Temperature equal or above high threshold level */
    constexpr std::uint32_t PWR_BDCR1_TEMPH_B_0x1 = 1;

    /** @brief PWR backup domain control register 2 */
    using PWR_BDCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup RAM backup supply enable (used to maintain BKPRAM content in Standby and Vless thansub>BATless than/sub> modes). */
    using PWR_BDCR2_BKPRBSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKPSRAM backup supply disabled (value: 0)
     *          - B_0x1: BKPSRAM backup supply enabled (value: 1)
     */
        /** @brief BKPSRAM backup supply disabled */
    constexpr std::uint32_t PWR_BDCR2_BKPRBSEN_B_0x0 = 0;
        /** @brief BKPSRAM backup supply enabled */
    constexpr std::uint32_t PWR_BDCR2_BKPRBSEN_B_0x1 = 1;

    /** @brief PWR disable backup protection control register */
    using PWR_DBPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable backup domain write protection */
    using PWR_DBPCR_DBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write access to backup domain disabled (value: 0)
     *          - B_0x1: Write access to backup domain enabled (value: 1)
     */
        /** @brief Write access to backup domain disabled */
    constexpr std::uint32_t PWR_DBPCR_DBP_B_0x0 = 0;
        /** @brief Write access to backup domain enabled */
    constexpr std::uint32_t PWR_DBPCR_DBP_B_0x1 = 1;

    /** @brief PWR CPU control register */
    using PWR_CPUCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power-down deepsleep selection */
    using PWR_CPUCR_PDDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop mode when device enters deepsleep (value: 0)
     *          - B_0x1: Standby mode when device enters deepsleep (value: 1)
     */
        /** @brief Stop mode when device enters deepsleep */
    constexpr std::uint32_t PWR_CPUCR_PDDS_B_0x0 = 0;
        /** @brief Standby mode when device enters deepsleep */
    constexpr std::uint32_t PWR_CPUCR_PDDS_B_0x1 = 1;

    /** @brief Clear Standby and Stop flags (always read as 0) */
    using PWR_CPUCR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: When written, clear the CPU flags (STOPF, SBF). (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t PWR_CPUCR_CSSF_B_0x0 = 0;
        /** @brief When written, clear the CPU flags (STOPF, SBF). */
    constexpr std::uint32_t PWR_CPUCR_CSSF_B_0x1 = 1;

    /** @brief Stop flag */
    using PWR_CPUCR_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: System has not been in Stop mode. (value: 0)
     *          - B_0x1: System has been in Stop mode. (value: 1)
     */
        /** @brief System has not been in Stop mode. */
    constexpr std::uint32_t PWR_CPUCR_STOPF_B_0x0 = 0;
        /** @brief System has been in Stop mode. */
    constexpr std::uint32_t PWR_CPUCR_STOPF_B_0x1 = 1;

    /** @brief Standby flag */
    using PWR_CPUCR_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: System has not been in Standby mode. (value: 0)
     *          - B_0x1: System has been in Standby mode. (value: 1)
     */
        /** @brief System has not been in Standby mode. */
    constexpr std::uint32_t PWR_CPUCR_SBF_B_0x0 = 0;
        /** @brief System has been in Standby mode. */
    constexpr std::uint32_t PWR_CPUCR_SBF_B_0x1 = 1;

    /** @brief System Stop mode voltage scaling selection */
    using PWR_CPUCR_SVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SVOS low (value: 0)
     *          - B_0x1: SVOS high (default) (value: 1)
     */
        /** @brief SVOS low */
    constexpr std::uint32_t PWR_CPUCR_SVOS_B_0x0 = 0;
        /** @brief SVOS high (default) */
    constexpr std::uint32_t PWR_CPUCR_SVOS_B_0x1 = 1;

    /** @brief PWR supply voltage monitoring control register 1 */
    using PWR_SVMCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vless thansub>DDIO4 less than/sub>independent I/O voltage monitor enable */
    using PWR_SVMCR1_VDDIO4VMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO4less than/sub> voltage monitor disabled (value: 0)
     *          - B_0x1: Vless thansub>DDIO4less than/sub> voltage monitor enabled (value: 1)
     */
        /** @brief Vless thansub>DDIO4less than/sub> voltage monitor disabled */
    constexpr std::uint32_t PWR_SVMCR1_VDDIO4VMEN_B_0x0 = 0;
        /** @brief Vless thansub>DDIO4less than/sub> voltage monitor enabled */
    constexpr std::uint32_t PWR_SVMCR1_VDDIO4VMEN_B_0x1 = 1;

    /** @brief Vless thansub>DDIO4 less than/sub>independent I/O supply valid. */
    using PWR_SVMCR1_VDDIO4SV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO4less than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: Vless thansub>DDIO4less than/sub> is valid. (value: 1)
     */
        /** @brief Vless thansub>DDIO4less than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR1_VDDIO4SV_B_0x0 = 0;
        /** @brief Vless thansub>DDIO4less than/sub> is valid. */
    constexpr std::uint32_t PWR_SVMCR1_VDDIO4SV_B_0x1 = 1;

    /** @brief Vless thansub>DDIO4 less than/sub>ready */
    using PWR_SVMCR1_VDDIO4RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO4less than/sub> is below the threshold of the Vless thansub>DDIO4less than/sub> voltage monitor. (value: 0)
     *          - B_0x1: Vless thansub>DDIO4less than/sub> is equal or above the threshold of the Vless thansub>DDIO4less than/sub> voltage monitor. (value: 1)
     */
        /** @brief Vless thansub>DDIO4less than/sub> is below the threshold of the Vless thansub>DDIO4less than/sub> voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR1_VDDIO4RDY_B_0x0 = 0;
        /** @brief Vless thansub>DDIO4less than/sub> is equal or above the threshold of the Vless thansub>DDIO4less than/sub> voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR1_VDDIO4RDY_B_0x1 = 1;

    /** @brief Vless thansub>DDIO4less than/sub> I/O voltage range selection */
    using PWR_SVMCR1_VDDIO4VRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 3v3 voltage range selected. If Vless thansub>DDIO4less than/sub> is in 1v8 range with this setting, I/Os work in degraded mode. (value: 0)
     *          - B_0x1: 1v8 voltage range selected. HSLV_VDDIO4 option bit must be set to allow 1v8 voltage range operation. Setting this configuration while Vless thansub>DDIO4less than/sub> is in 3v3 range damages the device. (value: 1)
     */
        /** @brief 3v3 voltage range selected. If Vless thansub>DDIO4less than/sub> is in 1v8 range with this setting, I/Os work in degraded mode. */
    constexpr std::uint32_t PWR_SVMCR1_VDDIO4VRSEL_B_0x0 = 0;
        /** @brief 1v8 voltage range selected. HSLV_VDDIO4 option bit must be set to allow 1v8 voltage range operation. Setting this configuration while Vless thansub>DDIO4less than/sub> is in 3v3 range damages the device. */
    constexpr std::uint32_t PWR_SVMCR1_VDDIO4VRSEL_B_0x1 = 1;

    /** @brief Vless thansub>DDIO4less than/sub> I/O voltage range Standby mode */
    using PWR_SVMCR1_VDDIO4VRSTBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO4VRSEL not retained in Standby mode (value: 0)
     *          - B_0x1: VDDIO4VRSEL retained in Standby mode (value: 1)
     */
        /** @brief VDDIO4VRSEL not retained in Standby mode */
    constexpr std::uint32_t PWR_SVMCR1_VDDIO4VRSTBY_B_0x0 = 0;
        /** @brief VDDIO4VRSEL retained in Standby mode */
    constexpr std::uint32_t PWR_SVMCR1_VDDIO4VRSTBY_B_0x1 = 1;

    /** @brief PWR supply voltage monitoring control register 2 */
    using PWR_SVMCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vless thansub>DDIO5 less than/sub>independent voltage monitor enable */
    using PWR_SVMCR2_VDDIO5VMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO5 less than/sub>voltage monitor disabled (value: 0)
     *          - B_0x1: Vless thansub>DDIO5 less than/sub>voltage monitor enabled (value: 1)
     */
        /** @brief Vless thansub>DDIO5 less than/sub>voltage monitor disabled */
    constexpr std::uint32_t PWR_SVMCR2_VDDIO5VMEN_B_0x0 = 0;
        /** @brief Vless thansub>DDIO5 less than/sub>voltage monitor enabled */
    constexpr std::uint32_t PWR_SVMCR2_VDDIO5VMEN_B_0x1 = 1;

    /** @brief Vless thansub>DDIO5 less than/sub>independent supply valid */
    using PWR_SVMCR2_VDDIO5SV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO5less than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: Vless thansub>DDIO5less than/sub> is valid. (value: 1)
     */
        /** @brief Vless thansub>DDIO5less than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR2_VDDIO5SV_B_0x0 = 0;
        /** @brief Vless thansub>DDIO5less than/sub> is valid. */
    constexpr std::uint32_t PWR_SVMCR2_VDDIO5SV_B_0x1 = 1;

    /** @brief Vless thansub>DDIO5 less than/sub>ready */
    using PWR_SVMCR2_VDDIO5RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO5less than/sub> is below the threshold of the Vless thansub>DDIO5less than/sub> voltage monitor. (value: 0)
     *          - B_0x1: Vless thansub>DDIO5less than/sub> is equal or above the threshold of the Vless thansub>DDIO5less than/sub> voltage monitor. (value: 1)
     */
        /** @brief Vless thansub>DDIO5less than/sub> is below the threshold of the Vless thansub>DDIO5less than/sub> voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR2_VDDIO5RDY_B_0x0 = 0;
        /** @brief Vless thansub>DDIO5less than/sub> is equal or above the threshold of the Vless thansub>DDIO5less than/sub> voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR2_VDDIO5RDY_B_0x1 = 1;

    /** @brief Vless thansub>DDIO5less than/sub> I/O voltage range selection */
    using PWR_SVMCR2_VDDIO5VRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 3v3 voltage range selected. If Vless thansub>DDIO5less than/sub> is in 1v8 range with this setting, I/Os work in degraded mode. (value: 0)
     *          - B_0x1: 1v8 voltage range selected. HSLV_VDDIO5 option bit must be set to allow 1v8 voltage range operation. Setting this configuration while Vless thansub>DDIO5less than/sub> is in 3v3 range damages the device. (value: 1)
     */
        /** @brief 3v3 voltage range selected. If Vless thansub>DDIO5less than/sub> is in 1v8 range with this setting, I/Os work in degraded mode. */
    constexpr std::uint32_t PWR_SVMCR2_VDDIO5VRSEL_B_0x0 = 0;
        /** @brief 1v8 voltage range selected. HSLV_VDDIO5 option bit must be set to allow 1v8 voltage range operation. Setting this configuration while Vless thansub>DDIO5less than/sub> is in 3v3 range damages the device. */
    constexpr std::uint32_t PWR_SVMCR2_VDDIO5VRSEL_B_0x1 = 1;

    /** @brief Vless thansub>DDIO5less than/sub> I/O voltage range Standby mode */
    using PWR_SVMCR2_VDDIO5VRSTBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO5VRSEL not retained in Standby mode (value: 0)
     *          - B_0x1: VDDIO5VRSEL retained in Standby mod. (value: 1)
     */
        /** @brief VDDIO5VRSEL not retained in Standby mode */
    constexpr std::uint32_t PWR_SVMCR2_VDDIO5VRSTBY_B_0x0 = 0;
        /** @brief VDDIO5VRSEL retained in Standby mod. */
    constexpr std::uint32_t PWR_SVMCR2_VDDIO5VRSTBY_B_0x1 = 1;

    /** @brief PWR supply voltage monitoring control register 3 */
    using PWR_SVMCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vless thansub>DDIO2 less than/sub>independent voltage monitor enable */
    using PWR_SVMCR3_VDDIO2VMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO2less than/sub> voltage monitor disabled (value: 0)
     *          - B_0x1: Vless thansub>DDIO2less than/sub> voltage monitor enabled (value: 1)
     */
        /** @brief Vless thansub>DDIO2less than/sub> voltage monitor disabled */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO2VMEN_B_0x0 = 0;
        /** @brief Vless thansub>DDIO2less than/sub> voltage monitor enabled */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO2VMEN_B_0x1 = 1;

    /** @brief Vless thansub>DDIO3 less than/sub>independent voltage monitor enable */
    using PWR_SVMCR3_VDDIO3VMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO3less than/sub> voltage monitor disabled (value: 0)
     *          - B_0x1: Vless thansub>DDIO3less than/sub> voltage monitor enabled (value: 1)
     */
        /** @brief Vless thansub>DDIO3less than/sub> voltage monitor disabled */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO3VMEN_B_0x0 = 0;
        /** @brief Vless thansub>DDIO3less than/sub> voltage monitor enabled */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO3VMEN_B_0x1 = 1;

    /** @brief Vless thansub>DD33USB less than/sub>independent USB 33 voltage monitor enable. */
    using PWR_SVMCR3_USB33VMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DD33USBless than/sub> voltage monitor disabled (value: 0)
     *          - B_0x1: Vless thansub>DD33USBless than/sub> voltage monitor enabled (value: 1)
     */
        /** @brief Vless thansub>DD33USBless than/sub> voltage monitor disabled */
    constexpr std::uint32_t PWR_SVMCR3_USB33VMEN_B_0x0 = 0;
        /** @brief Vless thansub>DD33USBless than/sub> voltage monitor enabled */
    constexpr std::uint32_t PWR_SVMCR3_USB33VMEN_B_0x1 = 1;

    /** @brief Vless thansub>DDA18ADC less than/sub>independent ADC voltage monitor enable */
    using PWR_SVMCR3_AVMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDA18ADCless than/sub> voltage monitor disabled (value: 0)
     *          - B_0x1: Vless thansub>DDA18ADCless than/sub> voltage monitor enabled (value: 1)
     */
        /** @brief Vless thansub>DDA18ADCless than/sub> voltage monitor disabled */
    constexpr std::uint32_t PWR_SVMCR3_AVMEN_B_0x0 = 0;
        /** @brief Vless thansub>DDA18ADCless than/sub> voltage monitor enabled */
    constexpr std::uint32_t PWR_SVMCR3_AVMEN_B_0x1 = 1;

    /** @brief Vless thansub>DDIO2 less than/sub>independent supply valid. */
    using PWR_SVMCR3_VDDIO2SV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO2less than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: Vless thansub>DDIO2less than/sub> is valid. (value: 1)
     */
        /** @brief Vless thansub>DDIO2less than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO2SV_B_0x0 = 0;
        /** @brief Vless thansub>DDIO2less than/sub> is valid. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO2SV_B_0x1 = 1;

    /** @brief Vless thansub>DDIO3 less than/sub>independent supply valid */
    using PWR_SVMCR3_VDDIO3SV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO3less than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: Vless thansub>DDIO3less than/sub> is valid. (value: 1)
     */
        /** @brief Vless thansub>DDIO3less than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO3SV_B_0x0 = 0;
        /** @brief Vless thansub>DDIO3less than/sub> is valid. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO3SV_B_0x1 = 1;

    /** @brief Vless thansub>DD33USB less than/sub>independent supply valid */
    using PWR_SVMCR3_USB33SV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DD33USBless than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: Vless thansub>DD33USBless than/sub> is valid. (value: 1)
     */
        /** @brief Vless thansub>DD33USBless than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR3_USB33SV_B_0x0 = 0;
        /** @brief Vless thansub>DD33USBless than/sub> is valid. */
    constexpr std::uint32_t PWR_SVMCR3_USB33SV_B_0x1 = 1;

    /** @brief Vless thansub>DDA18ADC less than/sub>independent supply valid */
    using PWR_SVMCR3_ASV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDA18ADCless than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: Vless thansub>DDA18ADCless than/sub> is valid. (value: 1)
     */
        /** @brief Vless thansub>DDA18ADCless than/sub> is not present. Logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR3_ASV_B_0x0 = 0;
        /** @brief Vless thansub>DDA18ADCless than/sub> is valid. */
    constexpr std::uint32_t PWR_SVMCR3_ASV_B_0x1 = 1;

    /** @brief Vless thansub>DDIO2 less than/sub>ready */
    using PWR_SVMCR3_VDDIO2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO2less than/sub> is below the threshold of the VDDIO2 voltage monitor. (value: 0)
     *          - B_0x1: Vless thansub>DDIO2less than/sub> is equal or above the threshold of the VDDIO2 voltage monitor. (value: 1)
     */
        /** @brief Vless thansub>DDIO2less than/sub> is below the threshold of the VDDIO2 voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO2RDY_B_0x0 = 0;
        /** @brief Vless thansub>DDIO2less than/sub> is equal or above the threshold of the VDDIO2 voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO2RDY_B_0x1 = 1;

    /** @brief Vless thansub>DDIO3 less than/sub>ready */
    using PWR_SVMCR3_VDDIO3RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO3less than/sub> is below the threshold of the VDDIO3 voltage monitor. (value: 0)
     *          - B_0x1: Vless thansub>DDIO3less than/sub> is equal or above the threshold of the VDDIO3 voltage monitor. (value: 1)
     */
        /** @brief Vless thansub>DDIO3less than/sub> is below the threshold of the VDDIO3 voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO3RDY_B_0x0 = 0;
        /** @brief Vless thansub>DDIO3less than/sub> is equal or above the threshold of the VDDIO3 voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO3RDY_B_0x1 = 1;

    /** @brief Vless thansub>DD33USB less than/sub>ready */
    using PWR_SVMCR3_USB33RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DD33USBless than/sub> is below the threshold of the USB33 voltage monitor. (value: 0)
     *          - B_0x1: Vless thansub>DD33USBless than/sub> is equal or above the threshold of the USB33 voltage monitor. (value: 1)
     */
        /** @brief Vless thansub>DD33USBless than/sub> is below the threshold of the USB33 voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR3_USB33RDY_B_0x0 = 0;
        /** @brief Vless thansub>DD33USBless than/sub> is equal or above the threshold of the USB33 voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR3_USB33RDY_B_0x1 = 1;

    /** @brief Vless thansub>DDA18ADC less than/sub>ready */
    using PWR_SVMCR3_ARDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDA18ADCless than/sub> is below the threshold of the VDDA18ADC voltage monitor. (value: 0)
     *          - B_0x1: Vless thansub>DDA18ADCless than/sub> is equal or above the threshold of the VDDA18ADC voltage monitor. (value: 1)
     */
        /** @brief Vless thansub>DDA18ADCless than/sub> is below the threshold of the VDDA18ADC voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR3_ARDY_B_0x0 = 0;
        /** @brief Vless thansub>DDA18ADCless than/sub> is equal or above the threshold of the VDDA18ADC voltage monitor. */
    constexpr std::uint32_t PWR_SVMCR3_ARDY_B_0x1 = 1;

    /** @brief Vless thansub>DDless than/sub> I/O voltage range selection */
    using PWR_SVMCR3_VDDIOVRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 3v3 voltage range selected. If Vless thansub>DDless than/sub> is in 1v8 range with this setting, I/Os work in degraded mode. (value: 0)
     *          - B_0x1: 1v8 voltage range selected. HSLV_VDD option bit must be set to allow 1v8 voltage range operation. Setting this configuration while Vless thansub>DDless than/sub> is in 3v3 range damages the device. (value: 1)
     */
        /** @brief 3v3 voltage range selected. If Vless thansub>DDless than/sub> is in 1v8 range with this setting, I/Os work in degraded mode. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIOVRSEL_B_0x0 = 0;
        /** @brief 1v8 voltage range selected. HSLV_VDD option bit must be set to allow 1v8 voltage range operation. Setting this configuration while Vless thansub>DDless than/sub> is in 3v3 range damages the device. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIOVRSEL_B_0x1 = 1;

    /** @brief Vless thansub>DDIO2less than/sub> I/O voltage range selection */
    using PWR_SVMCR3_VDDIO2VRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 3v3 voltage range selected. If Vless thansub>DDIO2less than/sub> is in 1v8 range with this setting, I/Os work in degraded mode. (value: 0)
     *          - B_0x1: 1v8 voltage range selected. HSLV_VDDIO2 option bit must be set to allow 1v8 voltage range operation. Setting this configuration while Vless thansub>DDIO2less than/sub> is in 3v3 range damages the device. (value: 1)
     */
        /** @brief 3v3 voltage range selected. If Vless thansub>DDIO2less than/sub> is in 1v8 range with this setting, I/Os work in degraded mode. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO2VRSEL_B_0x0 = 0;
        /** @brief 1v8 voltage range selected. HSLV_VDDIO2 option bit must be set to allow 1v8 voltage range operation. Setting this configuration while Vless thansub>DDIO2less than/sub> is in 3v3 range damages the device. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO2VRSEL_B_0x1 = 1;

    /** @brief Vless thansub>DDIO3less than/sub> I/O voltage range selection */
    using PWR_SVMCR3_VDDIO3VRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 3v3 voltage range selected. If Vless thansub>DDIO3less than/sub> is in 1v8 range with this setting, I/Os work in degraded mode. (value: 0)
     *          - B_0x1: 1v8 voltage range selected. HSLV_VDDIO3 option bit must be set to allow 1v8 voltage range operation. Setting this configuration while Vless thansub>DDIO3less than/sub> is in 3v3 range damages the device. (value: 1)
     */
        /** @brief 3v3 voltage range selected. If Vless thansub>DDIO3less than/sub> is in 1v8 range with this setting, I/Os work in degraded mode. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO3VRSEL_B_0x0 = 0;
        /** @brief 1v8 voltage range selected. HSLV_VDDIO3 option bit must be set to allow 1v8 voltage range operation. Setting this configuration while Vless thansub>DDIO3less than/sub> is in 3v3 range damages the device. */
    constexpr std::uint32_t PWR_SVMCR3_VDDIO3VRSEL_B_0x1 = 1;

    /** @brief PWR wake-up clear register */
    using PWR_WKUPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up flag for WKUP1 pin */
    using PWR_WKUPCR_WKUPC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Writing 1 clears WKUPF1 in PWR_WKUPSR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC1_B_0x0 = 0;
        /** @brief Writing 1 clears WKUPF1 in PWR_WKUPSR. */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC1_B_0x1 = 1;

    /** @brief Clear wake-up flag for WKUP2 pin */
    using PWR_WKUPCR_WKUPC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Writing 1 clears WKUPF2 in PWR_WKUPSR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC2_B_0x0 = 0;
        /** @brief Writing 1 clears WKUPF2 in PWR_WKUPSR. */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC2_B_0x1 = 1;

    /** @brief Clear wake-up flag for WKUP3 pin */
    using PWR_WKUPCR_WKUPC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Writing 1 clears WKUPF3 in PWR_WKUPSR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC3_B_0x0 = 0;
        /** @brief Writing 1 clears WKUPF3 in PWR_WKUPSR. */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC3_B_0x1 = 1;

    /** @brief Clear wake-up flag for WKUP4 pin */
    using PWR_WKUPCR_WKUPC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Writing 1 clears WKUPF4 in PWR_WKUPSR. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC4_B_0x0 = 0;
        /** @brief Writing 1 clears WKUPF4 in PWR_WKUPSR. */
    constexpr std::uint32_t PWR_WKUPCR_WKUPC4_B_0x1 = 1;

    /** @brief PWR wake-up status register */
    using PWR_WKUPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag for WKUP1 pin before enable */
    using PWR_WKUPSR_WKUPF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No wake-up event occurred (value: 0)
     *          - B_0x1: A wake-up event was received from WKUP1 pin. (value: 1)
     */
        /** @brief No wake-up event occurred */
    constexpr std::uint32_t PWR_WKUPSR_WKUPF1_B_0x0 = 0;
        /** @brief A wake-up event was received from WKUP1 pin. */
    constexpr std::uint32_t PWR_WKUPSR_WKUPF1_B_0x1 = 1;

    /** @brief Wake-up flag for WKUP2 pin before enable */
    using PWR_WKUPSR_WKUPF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No wake-up event occurred (value: 0)
     *          - B_0x1: A wake-up event was received from WKUP2 pin. (value: 1)
     */
        /** @brief No wake-up event occurred */
    constexpr std::uint32_t PWR_WKUPSR_WKUPF2_B_0x0 = 0;
        /** @brief A wake-up event was received from WKUP2 pin. */
    constexpr std::uint32_t PWR_WKUPSR_WKUPF2_B_0x1 = 1;

    /** @brief Wake-up flag for WKUP3 pin before enable */
    using PWR_WKUPSR_WKUPF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No wake-up event occurred (value: 0)
     *          - B_0x1: A wake-up event was received from WKUP3 pin. (value: 1)
     */
        /** @brief No wake-up event occurred */
    constexpr std::uint32_t PWR_WKUPSR_WKUPF3_B_0x0 = 0;
        /** @brief A wake-up event was received from WKUP3 pin. */
    constexpr std::uint32_t PWR_WKUPSR_WKUPF3_B_0x1 = 1;

    /** @brief Wake-up flag for WKUP4 pin before enable */
    using PWR_WKUPSR_WKUPF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No wake-up event occurred (value: 0)
     *          - B_0x1: A wake-up event was received from WKUP4 pin. (value: 1)
     */
        /** @brief No wake-up event occurred */
    constexpr std::uint32_t PWR_WKUPSR_WKUPF4_B_0x0 = 0;
        /** @brief A wake-up event was received from WKUP4 pin. */
    constexpr std::uint32_t PWR_WKUPSR_WKUPF4_B_0x1 = 1;

    /** @brief PWR wake-up enable and polarity register */
    using PWR_WKUPEPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable WKUP1 pin */
    using PWR_WKUPEPR_WKUPEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: An event on WKUP1 pin does not wake up the system from Standby and Stop modes. (value: 0)
     *          - B_0x1: A rising or falling edge on WKUP1 pin wakes up the system from Standby and Stop modes. (value: 1)
     */
        /** @brief An event on WKUP1 pin does not wake up the system from Standby and Stop modes. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN1_B_0x0 = 0;
        /** @brief A rising or falling edge on WKUP1 pin wakes up the system from Standby and Stop modes. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN1_B_0x1 = 1;

    /** @brief Enable WKUP2 pin */
    using PWR_WKUPEPR_WKUPEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: An event on WKUP2 pin does not wake up the system from Standby and Stop modes. (value: 0)
     *          - B_0x1: A rising or falling edge on WKUP2 pin wakes up the system from Standby and Stop modes. (value: 1)
     */
        /** @brief An event on WKUP2 pin does not wake up the system from Standby and Stop modes. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN2_B_0x0 = 0;
        /** @brief A rising or falling edge on WKUP2 pin wakes up the system from Standby and Stop modes. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN2_B_0x1 = 1;

    /** @brief Enable WKUP3 pin */
    using PWR_WKUPEPR_WKUPEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: An event on WKUP3 pin does not wake up the system from Standby and Stop modes. (value: 0)
     *          - B_0x1: A rising or falling edge on WKUP3 pin wakes up the system from Standby and Stop modes. (value: 1)
     */
        /** @brief An event on WKUP3 pin does not wake up the system from Standby and Stop modes. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN3_B_0x0 = 0;
        /** @brief A rising or falling edge on WKUP3 pin wakes up the system from Standby and Stop modes. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN3_B_0x1 = 1;

    /** @brief Enable WKUP4 pin */
    using PWR_WKUPEPR_WKUPEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: An event on WKUP4 pin does not wake up the system from Standby and Stop modes. (value: 0)
     *          - B_0x1: A rising or falling edge on WKUP4 pin wakes up the system from Standby and Stop modes. (value: 1)
     */
        /** @brief An event on WKUP4 pin does not wake up the system from Standby and Stop modes. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN4_B_0x0 = 0;
        /** @brief A rising or falling edge on WKUP4 pin wakes up the system from Standby and Stop modes. */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPEN4_B_0x1 = 1;

    /** @brief Wake-up polarity bit for WKUP1 pin */
    using PWR_WKUPEPR_WKUPP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP1_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP1_B_0x1 = 1;

    /** @brief Wake-up polarity bit for WKUP2 pin */
    using PWR_WKUPEPR_WKUPP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP2_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP2_B_0x1 = 1;

    /** @brief Wake-up polarity bit for WKUP3 pin */
    using PWR_WKUPEPR_WKUPP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP3_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP3_B_0x1 = 1;

    /** @brief Wake-up polarity bit for WKUP4 pin */
    using PWR_WKUPEPR_WKUPP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP4_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPP4_B_0x1 = 1;

    /** @brief Wake-up pull configuration for WKUP1 pin */
    using PWR_WKUPEPR_WKUPPUPD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pulls (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pulls */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD1_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD1_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD1_B_0x2 = 2;

    /** @brief Wake-up pull configuration for WKUP2 pin */
    using PWR_WKUPEPR_WKUPPUPD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pulls (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pulls */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD2_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD2_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD2_B_0x2 = 2;

    /** @brief Wake-up pull configuration for WKUP3 pin */
    using PWR_WKUPEPR_WKUPPUPD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pulls (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pulls */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD3_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD3_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD3_B_0x2 = 2;

    /** @brief Wake-up pull configuration for WKUP4 pin */
    using PWR_WKUPEPR_WKUPPUPD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pulls (value: 0)
     *          - B_0x1: Pull-up (value: 1)
     *          - B_0x2: Pull-down (value: 2)
     */
        /** @brief No pulls */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD4_B_0x0 = 0;
        /** @brief Pull-up */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD4_B_0x1 = 1;
        /** @brief Pull-down */
    constexpr std::uint32_t PWR_WKUPEPR_WKUPPUPD4_B_0x2 = 2;

    /** @brief PWR security configuration register */
    using PWR_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System supply configuration secure protection */
    using PWR_SECCFGR_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CR1 can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_CR1 can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_CR1 can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC0_B_0x0 = 0;
        /** @brief PWR_CR1 can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC0_B_0x1 = 1;

    /** @brief Programmable voltage detector secure protection */
    using PWR_SECCFGR_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CR2 can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_CR2 can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_CR2 can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC1_B_0x0 = 0;
        /** @brief PWR_CR2 can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC1_B_0x1 = 1;

    /** @brief Vless thansub>DDCOREless than/sub> monitor secure protection */
    using PWR_SECCFGR_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CR3 can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_CR3 can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_CR3 can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC2_B_0x0 = 0;
        /** @brief PWR_CR3 can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC2_B_0x1 = 1;

    /** @brief I-TCM, D-TCM, and I-TCM FLEXMEM low power control secure protection */
    using PWR_SECCFGR_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CR4 can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_CR4 can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_CR4 can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC3_B_0x0 = 0;
        /** @brief PWR_CR4 can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC3_B_0x1 = 1;

    /** @brief Voltage scaling selection secure protection */
    using PWR_SECCFGR_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_VOSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_VOSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_VOSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC4_B_0x0 = 0;
        /** @brief PWR_VOSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC4_B_0x1 = 1;

    /** @brief Backup domain secure protection */
    using PWR_SECCFGR_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_BDCR1, PWR_BDCR2, and PWR_DBPCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_BDCR1, PWR_BDCR2, and PWR_DBPCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_BDCR1, PWR_BDCR2, and PWR_DBPCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC5_B_0x0 = 0;
        /** @brief PWR_BDCR1, PWR_BDCR2, and PWR_DBPCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC5_B_0x1 = 1;

    /** @brief CPU power control secure protection */
    using PWR_SECCFGR_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CPUCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_CPUCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_CPUCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC6_B_0x0 = 0;
        /** @brief PWR_CPUCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC6_B_0x1 = 1;

    /** @brief Peripheral voltage monitor secure protection */
    using PWR_SECCFGR_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_SVMCR1, PWR_SVMCR2, and PWR_SVMCR3 can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_SVMCR1, PWR_SVMCR2, and PWR_SVMCR3 can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_SVMCR1, PWR_SVMCR2, and PWR_SVMCR3 can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC7_B_0x0 = 0;
        /** @brief PWR_SVMCR1, PWR_SVMCR2, and PWR_SVMCR3 can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_SEC7_B_0x1 = 1;

    /** @brief WKUP1 pin secure protection */
    using PWR_SECCFGR_WKUPSEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to WKUP1 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to WKUP1 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to WKUP1 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WKUPSEC1_B_0x0 = 0;
        /** @brief Bits related to WKUP1 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WKUPSEC1_B_0x1 = 1;

    /** @brief WKUP2 pin secure protection */
    using PWR_SECCFGR_WKUPSEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to WKUP2 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to WKUP2 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to WKUP2 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WKUPSEC2_B_0x0 = 0;
        /** @brief Bits related to WKUP2 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WKUPSEC2_B_0x1 = 1;

    /** @brief WKUP3 pin secure protection */
    using PWR_SECCFGR_WKUPSEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to WKUP3 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to WKUP3 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to WKUP3 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WKUPSEC3_B_0x0 = 0;
        /** @brief Bits related to WKUP3 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WKUPSEC3_B_0x1 = 1;

    /** @brief WKUP4 pin secure protection */
    using PWR_SECCFGR_WKUPSEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to WKUP4 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to WKUP4 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to WKUP4 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WKUPSEC4_B_0x0 = 0;
        /** @brief Bits related to WKUP4 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WKUPSEC4_B_0x1 = 1;

    /** @brief PWR privilege configuration register */
    using PWR_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System supply configuration privileged protection */
    using PWR_PRIVCFGR_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CR1 can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: PWR_CR1 can be read and written only with privileged access. (value: 1)
     */
        /** @brief PWR_CR1 can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV0_B_0x0 = 0;
        /** @brief PWR_CR1 can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV0_B_0x1 = 1;

    /** @brief Programmable voltage detector privileged protection */
    using PWR_PRIVCFGR_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CR2 can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: PWR_CR2 can be read and written only with privileged access. (value: 1)
     */
        /** @brief PWR_CR2 can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV1_B_0x0 = 0;
        /** @brief PWR_CR2 can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV1_B_0x1 = 1;

    /** @brief Vless thansub>DDCOREless than/sub> monitor privileged protection */
    using PWR_PRIVCFGR_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CR3 can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: PWR_CR3 can be read and written only with privileged access. (value: 1)
     */
        /** @brief PWR_CR3 can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV2_B_0x0 = 0;
        /** @brief PWR_CR3 can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV2_B_0x1 = 1;

    /** @brief I-TCM, D-TCM, and I-TCM FLEX MEM low power control privileged protection */
    using PWR_PRIVCFGR_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CR4 can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: PWR_CR4 can be read and written only with privileged access. (value: 1)
     */
        /** @brief PWR_CR4 can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV3_B_0x0 = 0;
        /** @brief PWR_CR4 can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV3_B_0x1 = 1;

    /** @brief Voltage scaling selection privileged protection */
    using PWR_PRIVCFGR_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_VOSCR can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: PWR_VOSCR can be read and written only with privileged access. (value: 1)
     */
        /** @brief PWR_VOSCR can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV4_B_0x0 = 0;
        /** @brief PWR_VOSCR can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV4_B_0x1 = 1;

    /** @brief Backup domain privileged protection */
    using PWR_PRIVCFGR_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_BDCR1, PWR_BDCR2, and PWR_DBPCR can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: PWR_BDCR1, PWR_BDCR2, and PWR_DBPCR can be read and written only with privileged access. (value: 1)
     */
        /** @brief PWR_BDCR1, PWR_BDCR2, and PWR_DBPCR can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV5_B_0x0 = 0;
        /** @brief PWR_BDCR1, PWR_BDCR2, and PWR_DBPCR can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV5_B_0x1 = 1;

    /** @brief CPU power control privileged protection */
    using PWR_PRIVCFGR_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CPUCR can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: PWR_CPUCR can be read and written only with privileged access. (value: 1)
     */
        /** @brief PWR_CPUCR can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV6_B_0x0 = 0;
        /** @brief PWR_CPUCR can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV6_B_0x1 = 1;

    /** @brief Peripheral voltage monitor privileged protection */
    using PWR_PRIVCFGR_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_SVMCR1, PWR_SVMCR2, and PWR_SVMCR3 can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: PWR_SVMCR1, PWR_SVMCR2, and PWR_SVMCR3 can be read and written only with privileged access. (value: 1)
     */
        /** @brief PWR_SVMCR1, PWR_SVMCR2, and PWR_SVMCR3 can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV7_B_0x0 = 0;
        /** @brief PWR_SVMCR1, PWR_SVMCR2, and PWR_SVMCR3 can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_PRIV7_B_0x1 = 1;

    /** @brief WKUP1 pin privileged protection */
    using PWR_PRIVCFGR_WKUPPRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to WKUP1 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: Bits related to WKUP1 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with privileged access. (value: 1)
     */
        /** @brief Bits related to WKUP1 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_WKUPPRIV1_B_0x0 = 0;
        /** @brief Bits related to WKUP1 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_WKUPPRIV1_B_0x1 = 1;

    /** @brief WKUP2 pin privileged protection */
    using PWR_PRIVCFGR_WKUPPRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to WKUP2 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: Bits related to WKUP2 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with privileged access. (value: 1)
     */
        /** @brief Bits related to WKUP2 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_WKUPPRIV2_B_0x0 = 0;
        /** @brief Bits related to WKUP2 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_WKUPPRIV2_B_0x1 = 1;

    /** @brief WKUP3 pin privileged protection */
    using PWR_PRIVCFGR_WKUPPRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to WKUP3 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: Bits related to WKUP3 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with privileged access. (value: 1)
     */
        /** @brief Bits related to WKUP3 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_WKUPPRIV3_B_0x0 = 0;
        /** @brief Bits related to WKUP3 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_WKUPPRIV3_B_0x1 = 1;

    /** @brief WKUP4 pin privileged protection */
    using PWR_PRIVCFGR_WKUPPRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to WKUP4 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with privileged or unprivileged access. (value: 0)
     *          - B_0x1: Bits related to WKUP4 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with privileged access. (value: 1)
     */
        /** @brief Bits related to WKUP4 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written with privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_WKUPPRIV4_B_0x0 = 0;
        /** @brief Bits related to WKUP4 pin in PWR_WKUPCR, PWR_WKUPSR, and PWR_WKUPEPR can be read and written only with privileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_WKUPPRIV4_B_0x1 = 1;

}

#endif
