/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U083_DAC_HPP
#define EMBEDDED_PP_STM32U083_DAC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DAC address block description */
namespace STM32U083::DAC {

    /** @brief DAC control register */
    using DAC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 enable This bit is set and cleared by software to enable/disable DAC channel1. */
    using DAC_CR_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 disabled (value: 0)
     *          - B_0x1: DAC channel1 enabled (value: 1)
     */
        /** @brief DAC channel1 disabled */
    constexpr std::uint32_t DAC_CR_EN1_B_0x0 = 0;
        /** @brief DAC channel1 enabled */
    constexpr std::uint32_t DAC_CR_EN1_B_0x1 = 1;

    /** @brief DAC channel1 trigger enable This bit is set and cleared by software to enable/disable DAC channel1 trigger. Note: When software trigger is selected, the transfer from the DAC_DHR1 register to the DAC_DOR1 register takes only one dac_pclk clock cycle. */
    using DAC_CR_TEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 trigger disabled and data written into the DAC_DHR1 register are transferred one dac_pclk clock cycle later to the DAC_DOR1 register (value: 0)
     *          - B_0x1: DAC channel1 trigger enabled and data from the DAC_DHR1 register are transferred three dac_pclk clock cycles later to the DAC_DOR1 register (value: 1)
     */
        /** @brief DAC channel1 trigger disabled and data written into the DAC_DHR1 register are transferred one dac_pclk clock cycle later to the DAC_DOR1 register */
    constexpr std::uint32_t DAC_CR_TEN1_B_0x0 = 0;
        /** @brief DAC channel1 trigger enabled and data from the DAC_DHR1 register are transferred three dac_pclk clock cycles later to the DAC_DOR1 register */
    constexpr std::uint32_t DAC_CR_TEN1_B_0x1 = 1;

    /** @brief DAC channel1 trigger selection These bits select the external event used to trigger DAC channel1 ... Refer to the trigger selection tables in Section114.4.2: DAC pins and internal signals for details on trigger configuration and mapping. Note: Only used if bit TEN11=11 (DAC channel1 trigger enabled). */
    using DAC_CR_TSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SWTRIG1 (value: 0)
     *          - B_0x1: dac_ch1_trg1 (value: 1)
     *          - B_0x2: dac_ch1_trg2 (value: 2)
     *          - B_0xF: dac_ch1_trg15 (value: 15)
     */
        /** @brief SWTRIG1 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x0 = 0;
        /** @brief dac_ch1_trg1 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x1 = 1;
        /** @brief dac_ch1_trg2 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x2 = 2;
        /** @brief dac_ch1_trg15 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0xF = 15;

    /** @brief DAC channel1 noise/triangle wave generation enable These bits are set and cleared by software. 1x: Triangle wave generation enabled Only used if bit TEN11=11 (DAC channel1 trigger enabled). */
    using DAC_CR_WAVE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wave generation disabled (value: 0)
     *          - B_0x1: Noise wave generation enabled (value: 1)
     */
        /** @brief wave generation disabled */
    constexpr std::uint32_t DAC_CR_WAVE1_B_0x0 = 0;
        /** @brief Noise wave generation enabled */
    constexpr std::uint32_t DAC_CR_WAVE1_B_0x1 = 1;

    /** @brief DAC channel1 mask/amplitude selector */
    using DAC_CR_MAMP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unmask bit0 of LFSR/ triangle amplitude equal to 1 (value: 0)
     *          - B_0x1: Unmask bits[1:0] of LFSR/ triangle amplitude equal to 3 (value: 1)
     *          - B_0x2: Unmask bits[2:0] of LFSR/ triangle amplitude equal to 7 (value: 2)
     *          - B_0x3: Unmask bits[3:0] of LFSR/ triangle amplitude equal to 15 (value: 3)
     *          - B_0x4: Unmask bits[4:0] of LFSR/ triangle amplitude equal to 31 (value: 4)
     *          - B_0x5: Unmask bits[5:0] of LFSR/ triangle amplitude equal to 63 (value: 5)
     *          - B_0x6: Unmask bits[6:0] of LFSR/ triangle amplitude equal to 127 (value: 6)
     *          - B_0x7: Unmask bits[7:0] of LFSR/ triangle amplitude equal to 255 (value: 7)
     *          - B_0x8: Unmask bits[8:0] of LFSR/ triangle amplitude equal to 511 (value: 8)
     *          - B_0x9: Unmask bits[9:0] of LFSR/ triangle amplitude equal to 1023 (value: 9)
     *          - B_0xA: Unmask bits[10:0] of LFSR/ triangle amplitude equal to 2047 (value: 10)
     */
        /** @brief Unmask bit0 of LFSR/ triangle amplitude equal to 1 */
    constexpr std::uint32_t DAC_CR_MAMP1_B_0x0 = 0;
        /** @brief Unmask bits[1:0] of LFSR/ triangle amplitude equal to 3 */
    constexpr std::uint32_t DAC_CR_MAMP1_B_0x1 = 1;
        /** @brief Unmask bits[2:0] of LFSR/ triangle amplitude equal to 7 */
    constexpr std::uint32_t DAC_CR_MAMP1_B_0x2 = 2;
        /** @brief Unmask bits[3:0] of LFSR/ triangle amplitude equal to 15 */
    constexpr std::uint32_t DAC_CR_MAMP1_B_0x3 = 3;
        /** @brief Unmask bits[4:0] of LFSR/ triangle amplitude equal to 31 */
    constexpr std::uint32_t DAC_CR_MAMP1_B_0x4 = 4;
        /** @brief Unmask bits[5:0] of LFSR/ triangle amplitude equal to 63 */
    constexpr std::uint32_t DAC_CR_MAMP1_B_0x5 = 5;
        /** @brief Unmask bits[6:0] of LFSR/ triangle amplitude equal to 127 */
    constexpr std::uint32_t DAC_CR_MAMP1_B_0x6 = 6;
        /** @brief Unmask bits[7:0] of LFSR/ triangle amplitude equal to 255 */
    constexpr std::uint32_t DAC_CR_MAMP1_B_0x7 = 7;
        /** @brief Unmask bits[8:0] of LFSR/ triangle amplitude equal to 511 */
    constexpr std::uint32_t DAC_CR_MAMP1_B_0x8 = 8;
        /** @brief Unmask bits[9:0] of LFSR/ triangle amplitude equal to 1023 */
    constexpr std::uint32_t DAC_CR_MAMP1_B_0x9 = 9;
        /** @brief Unmask bits[10:0] of LFSR/ triangle amplitude equal to 2047 */
    constexpr std::uint32_t DAC_CR_MAMP1_B_0xA = 10;

    /** @brief DAC channel1 DMA enable This bit is set and cleared by software. */
    using DAC_CR_DMAEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 DMA mode disabled (value: 0)
     *          - B_0x1: DAC channel1 DMA mode enabled (value: 1)
     */
        /** @brief DAC channel1 DMA mode disabled */
    constexpr std::uint32_t DAC_CR_DMAEN1_B_0x0 = 0;
        /** @brief DAC channel1 DMA mode enabled */
    constexpr std::uint32_t DAC_CR_DMAEN1_B_0x1 = 1;

    /** @brief DAC channel1 DMA Underrun Interrupt enable This bit is set and cleared by software. */
    using DAC_CR_DMAUDRIE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 DMA Underrun Interrupt disabled (value: 0)
     *          - B_0x1: DAC channel1 DMA Underrun Interrupt enabled (value: 1)
     */
        /** @brief DAC channel1 DMA Underrun Interrupt disabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE1_B_0x0 = 0;
        /** @brief DAC channel1 DMA Underrun Interrupt enabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE1_B_0x1 = 1;

    /** @brief DAC channel1 calibration enable This bit is set and cleared by software to enable/disable DAC channel1 calibration, it can be written only if bit EN11=10 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored. */
    using DAC_CR_CEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 in Normal operating mode (value: 0)
     *          - B_0x1: DAC channel1 in calibration mode (value: 1)
     */
        /** @brief DAC channel1 in Normal operating mode */
    constexpr std::uint32_t DAC_CR_CEN1_B_0x0 = 0;
        /** @brief DAC channel1 in calibration mode */
    constexpr std::uint32_t DAC_CR_CEN1_B_0x1 = 1;

    /** @brief DAC software trigger register */
    using DAC_SWTRGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one dac_pclk clock cycle later) once the DAC_DHR1 register value has been loaded into the DAC_DOR1 register. */
    using DAC_SWTRGR_SWTRIG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger (value: 0)
     *          - B_0x1: Trigger (value: 1)
     */
        /** @brief No trigger */
    constexpr std::uint32_t DAC_SWTRGR_SWTRIG1_B_0x0 = 0;
        /** @brief Trigger */
    constexpr std::uint32_t DAC_SWTRGR_SWTRIG1_B_0x1 = 1;

    /** @brief DAC channel1 12-bit right-aligned data holding register */
    using DAC_DHR12R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit right-aligned data These bits are written by software. They specify 12-bit data for DAC channel1. */
    using DAC_DHR12R1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left aligned data holding register */
    using DAC_DHR12L1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left-aligned data These bits are written by software. They specify 12-bit data for DAC channel1. */
    using DAC_DHR12L1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right aligned data holding register */
    using DAC_DHR8R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right-aligned data These bits are written by software. They specify 8-bit data for DAC channel1. */
    using DAC_DHR8R1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output register */
    using DAC_DOR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output These bits are read-only, they contain data output for DAC channel1. */
    using DAC_DOR1_DACC1DOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC status register */
    using DAC_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1). */
    using DAC_SR_DMAUDR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No DMA underrun error condition occurred for DAC channel1 (value: 0)
     *          - B_0x1: DMA underrun error condition occurred for DAC channel1 (the currently selected trigger is driving DAC channel1 conversion at a frequency higher than the DMA service capability rate) (value: 1)
     */
        /** @brief No DMA underrun error condition occurred for DAC channel1 */
    constexpr std::uint32_t DAC_SR_DMAUDR1_B_0x0 = 0;
        /** @brief DMA underrun error condition occurred for DAC channel1 (the currently selected trigger is driving DAC channel1 conversion at a frequency higher than the DMA service capability rate) */
    constexpr std::uint32_t DAC_SR_DMAUDR1_B_0x1 = 1;

    /** @brief DAC channel1 calibration offset status This bit is set and cleared by hardware */
    using DAC_SR_CAL_FLAG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: calibration trimming value is lower than the offset correction value (value: 0)
     *          - B_0x1: calibration trimming value is equal or greater than the offset correction value (value: 1)
     */
        /** @brief calibration trimming value is lower than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG1_B_0x0 = 0;
        /** @brief calibration trimming value is equal or greater than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG1_B_0x1 = 1;

    /** @brief DAC channel1 busy writing sample time flag This bit is systematically set just after Sample and hold mode enable and is set each time the software writes the register DAC_SHSR1, It is cleared by hardware when the write operation of DAC_SHSR1 is complete. (It takes about 3 LSI periods of synchronization). */
    using DAC_SR_BWST1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: There is no write operation of DAC_SHSR1 ongoing: DAC_SHSR1 can be written (value: 0)
     *          - B_0x1: There is a write operation of DAC_SHSR1 ongoing: DAC_SHSR1 cannot be written (value: 1)
     */
        /** @brief There is no write operation of DAC_SHSR1 ongoing: DAC_SHSR1 can be written */
    constexpr std::uint32_t DAC_SR_BWST1_B_0x0 = 0;
        /** @brief There is a write operation of DAC_SHSR1 ongoing: DAC_SHSR1 cannot be written */
    constexpr std::uint32_t DAC_SR_BWST1_B_0x1 = 1;

    /** @brief DAC calibration control register */
    using DAC_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 offset trimming value */
    using DAC_CCR_OTRIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC mode control register */
    using DAC_MCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN11=10 and bit CEN11=10 in the DAC_CR register). If EN11=11 or CEN11=11 the write operation is ignored. They can be set and cleared by software to select the DAC channel1 mode: DAC channel1 in Normal mode DAC channel1 in sample & hold mode Note: This register can be modified only when EN11=10. */
    using DAC_MCR_MODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 is connected to external pin with Buffer enabled (value: 0)
     *          - B_0x1: DAC channel1 is connected to external pin and to on chip peripherals with Buffer enabled (value: 1)
     *          - B_0x2: DAC channel1 is connected to external pin with Buffer disabled (value: 2)
     *          - B_0x3: DAC channel1 is connected to on chip peripherals with Buffer disabled (value: 3)
     *          - B_0x4: DAC channel1 is connected to external pin with Buffer enabled (value: 4)
     *          - B_0x5: DAC channel1 is connected to external pin and to on chip peripherals with Buffer enabled (value: 5)
     *          - B_0x6: DAC channel1 is connected to external pin and to on chip peripherals with Buffer disabled (value: 6)
     *          - B_0x7: DAC channel1 is connected to on chip peripherals with Buffer disabled (value: 7)
     */
        /** @brief DAC channel1 is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x0 = 0;
        /** @brief DAC channel1 is connected to external pin and to on chip peripherals with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x1 = 1;
        /** @brief DAC channel1 is connected to external pin with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x2 = 2;
        /** @brief DAC channel1 is connected to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x3 = 3;
        /** @brief DAC channel1 is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x4 = 4;
        /** @brief DAC channel1 is connected to external pin and to on chip peripherals with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x5 = 5;
        /** @brief DAC channel1 is connected to external pin and to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x6 = 6;
        /** @brief DAC channel1 is connected to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x7 = 7;

    /** @brief DAC channel1 sample and hold sample time register */
    using DAC_SHSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 sample time (only valid in Sample and hold mode) These bits can be written when the DAC channel1 is disabled or also during normal operation. in the latter case, the write can be done only when BWST1 of DAC_SR register is low, If BWST11=11, the write operation is ignored. */
    using DAC_SHSR1_TSAMPLE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC sample and hold time register */
    using DAC_SHHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 hold time (only valid in Sample and hold mode) Hold time1=1(THOLD[9:0]) x LSI clock period Note: This register can be modified only when EN11=10. */
    using DAC_SHHR_THOLD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC sample and hold refresh time register */
    using DAC_SHRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 refresh time (only valid in Sample and hold mode) Refresh time1=1(TREFRESH[7:0]) x LSI clock period Note: This register can be modified only when EN11=10. */
    using DAC_SHRR_TREFRESH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
