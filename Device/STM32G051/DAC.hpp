/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G051_DAC_HPP
#define EMBEDDED_PP_STM32G051_DAC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DAC */
namespace STM32G051::DAC {

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

    /** @brief DAC channel1 trigger selection These bits select the external event used to trigger DAC channel1 ... Refer to the trigger selection tables in for details on trigger configuration and mapping. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled). */
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

    /** @brief DAC channel1 noise/triangle wave generation enable These bits are set and cleared by software. 1x: Triangle wave generation enabled Only used if bit TEN1 = 1 (DAC channel1 trigger enabled). */
    using DAC_CR_WAVE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wave generation disabled (value: 0)
     *          - B_0x1: Noise wave generation enabled (value: 1)
     */
        /** @brief wave generation disabled */
    constexpr std::uint32_t DAC_CR_WAVE1_B_0x0 = 0;
        /** @brief Noise wave generation enabled */
    constexpr std::uint32_t DAC_CR_WAVE1_B_0x1 = 1;

    /** @brief DAC channel1 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. bigger or equal to 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095 */
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

    /** @brief DAC channel1 calibration enable This bit is set and cleared by software to enable/disable DAC channel1 calibration, it can be written only if bit EN1=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored. */
    using DAC_CR_CEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 in Normal operating mode (value: 0)
     *          - B_0x1: DAC channel1 in calibration mode (value: 1)
     */
        /** @brief DAC channel1 in Normal operating mode */
    constexpr std::uint32_t DAC_CR_CEN1_B_0x0 = 0;
        /** @brief DAC channel1 in calibration mode */
    constexpr std::uint32_t DAC_CR_CEN1_B_0x1 = 1;

    /** @brief DAC channel2 enable This bit is set and cleared by software to enable/disable DAC channel2. Note: These bits are available only on dual-channel DACs. Refer to implementation. */
    using DAC_CR_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 disabled (value: 0)
     *          - B_0x1: DAC channel2 enabled (value: 1)
     */
        /** @brief DAC channel2 disabled */
    constexpr std::uint32_t DAC_CR_EN2_B_0x0 = 0;
        /** @brief DAC channel2 enabled */
    constexpr std::uint32_t DAC_CR_EN2_B_0x1 = 1;

    /** @brief DAC channel2 trigger enable This bit is set and cleared by software to enable/disable DAC channel2 trigger Note: When software trigger is selected, the transfer from the DAC_DHR2 register to the DAC_DOR2 register takes only one dac_pclk clock cycle. These bits are available only on dual-channel DACs. Refer to implementation. */
    using DAC_CR_TEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 trigger disabled and data written into the DAC_DHR2 register are transferred one dac_pclk clock cycle later to the DAC_DOR2 register (value: 0)
     *          - B_0x1: DAC channel2 trigger enabled and data from the DAC_DHR2 register are transferred three dac_pclk clock cycles later to the DAC_DOR2 register (value: 1)
     */
        /** @brief DAC channel2 trigger disabled and data written into the DAC_DHR2 register are transferred one dac_pclk clock cycle later to the DAC_DOR2 register */
    constexpr std::uint32_t DAC_CR_TEN2_B_0x0 = 0;
        /** @brief DAC channel2 trigger enabled and data from the DAC_DHR2 register are transferred three dac_pclk clock cycles later to the DAC_DOR2 register */
    constexpr std::uint32_t DAC_CR_TEN2_B_0x1 = 1;

    /** @brief DAC channel2 trigger selection These bits select the external event used to trigger DAC channel2 ... Refer to the trigger selection tables in for details on trigger configuration and mapping. Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled). These bits are available only on dual-channel DACs. Refer to implementation. */
    using DAC_CR_TSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SWTRIG2 (value: 0)
     *          - B_0x1: dac_ch2_trg1 (value: 1)
     *          - B_0x2: dac_ch2_trg2 (value: 2)
     *          - B_0xF: dac_ch2_trg15 (value: 15)
     */
        /** @brief SWTRIG2 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x0 = 0;
        /** @brief dac_ch2_trg1 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x1 = 1;
        /** @brief dac_ch2_trg2 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x2 = 2;
        /** @brief dac_ch2_trg15 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0xF = 15;

    /** @brief DAC channel2 noise/triangle wave generation enable These bits are set/reset by software. 1x: Triangle wave generation enabled Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled) These bits are available only on dual-channel DACs. Refer to implementation. */
    using DAC_CR_WAVE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wave generation disabled (value: 0)
     *          - B_0x1: Noise wave generation enabled (value: 1)
     */
        /** @brief wave generation disabled */
    constexpr std::uint32_t DAC_CR_WAVE2_B_0x0 = 0;
        /** @brief Noise wave generation enabled */
    constexpr std::uint32_t DAC_CR_WAVE2_B_0x1 = 1;

    /** @brief DAC channel2 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. bigger or equal to 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095 Note: These bits are available only on dual-channel DACs. Refer to implementation. */
    using DAC_CR_MAMP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t DAC_CR_MAMP2_B_0x0 = 0;
        /** @brief Unmask bits[1:0] of LFSR/ triangle amplitude equal to 3 */
    constexpr std::uint32_t DAC_CR_MAMP2_B_0x1 = 1;
        /** @brief Unmask bits[2:0] of LFSR/ triangle amplitude equal to 7 */
    constexpr std::uint32_t DAC_CR_MAMP2_B_0x2 = 2;
        /** @brief Unmask bits[3:0] of LFSR/ triangle amplitude equal to 15 */
    constexpr std::uint32_t DAC_CR_MAMP2_B_0x3 = 3;
        /** @brief Unmask bits[4:0] of LFSR/ triangle amplitude equal to 31 */
    constexpr std::uint32_t DAC_CR_MAMP2_B_0x4 = 4;
        /** @brief Unmask bits[5:0] of LFSR/ triangle amplitude equal to 63 */
    constexpr std::uint32_t DAC_CR_MAMP2_B_0x5 = 5;
        /** @brief Unmask bits[6:0] of LFSR/ triangle amplitude equal to 127 */
    constexpr std::uint32_t DAC_CR_MAMP2_B_0x6 = 6;
        /** @brief Unmask bits[7:0] of LFSR/ triangle amplitude equal to 255 */
    constexpr std::uint32_t DAC_CR_MAMP2_B_0x7 = 7;
        /** @brief Unmask bits[8:0] of LFSR/ triangle amplitude equal to 511 */
    constexpr std::uint32_t DAC_CR_MAMP2_B_0x8 = 8;
        /** @brief Unmask bits[9:0] of LFSR/ triangle amplitude equal to 1023 */
    constexpr std::uint32_t DAC_CR_MAMP2_B_0x9 = 9;
        /** @brief Unmask bits[10:0] of LFSR/ triangle amplitude equal to 2047 */
    constexpr std::uint32_t DAC_CR_MAMP2_B_0xA = 10;

    /** @brief DAC channel2 DMA enable This bit is set and cleared by software. Note: This bit is available only on dual-channel DACs. Refer to implementation. */
    using DAC_CR_DMAEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 DMA mode disabled (value: 0)
     *          - B_0x1: DAC channel2 DMA mode enabled (value: 1)
     */
        /** @brief DAC channel2 DMA mode disabled */
    constexpr std::uint32_t DAC_CR_DMAEN2_B_0x0 = 0;
        /** @brief DAC channel2 DMA mode enabled */
    constexpr std::uint32_t DAC_CR_DMAEN2_B_0x1 = 1;

    /** @brief DAC channel2 DMA underrun interrupt enable This bit is set and cleared by software. Note: This bit is available only on dual-channel DACs. Refer to implementation. */
    using DAC_CR_DMAUDRIE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 DMA underrun interrupt disabled (value: 0)
     *          - B_0x1: DAC channel2 DMA underrun interrupt enabled (value: 1)
     */
        /** @brief DAC channel2 DMA underrun interrupt disabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE2_B_0x0 = 0;
        /** @brief DAC channel2 DMA underrun interrupt enabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE2_B_0x1 = 1;

    /** @brief DAC channel2 calibration enable This bit is set and cleared by software to enable/disable DAC channel2 calibration, it can be written only if EN2 bit is set to 0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored. Note: This bit is available only on dual-channel DACs. Refer to implementation. */
    using DAC_CR_CEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 in Normal operating mode (value: 0)
     *          - B_0x1: DAC channel2 in calibration mode (value: 1)
     */
        /** @brief DAC channel2 in Normal operating mode */
    constexpr std::uint32_t DAC_CR_CEN2_B_0x0 = 0;
        /** @brief DAC channel2 in calibration mode */
    constexpr std::uint32_t DAC_CR_CEN2_B_0x1 = 1;

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

    /** @brief DAC channel2 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one dac_pclk clock cycle later) once the DAC_DHR2 register value has been loaded into the DAC_DOR2 register. This bit is available only on dual-channel DACs. Refer to implementation. */
    using DAC_SWTRGR_SWTRIG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger (value: 0)
     *          - B_0x1: Trigger (value: 1)
     */
        /** @brief No trigger */
    constexpr std::uint32_t DAC_SWTRGR_SWTRIG2_B_0x0 = 0;
        /** @brief Trigger */
    constexpr std::uint32_t DAC_SWTRGR_SWTRIG2_B_0x1 = 1;

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
    /** @brief DAC channel2 12-bit right aligned data holding register */
    using DAC_DHR12R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right-aligned data These bits are written by software. They specify 12-bit data for DAC channel2. */
    using DAC_DHR12R2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left aligned data holding register */
    using DAC_DHR12L2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left-aligned data These bits are written by software which specify 12-bit data for DAC channel2. */
    using DAC_DHR12L2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data holding register */
    using DAC_DHR8R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2. */
    using DAC_DHR8R2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual DAC 12-bit right-aligned data holding register */
    using DAC_DHR12RD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1. */
    using DAC_DHR12RD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2. */
    using DAC_DHR12RD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DUAL DAC 12-bit left aligned data holding register */
    using DAC_DHR12LD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1. */
    using DAC_DHR12LD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel2. */
    using DAC_DHR12LD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DUAL DAC 8-bit right aligned data holding register */
    using DAC_DHR8RD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1. */
    using DAC_DHR8RD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2. */
    using DAC_DHR8RD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output register */
    using DAC_DOR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output These bits are read-only, they contain data output for DAC channel1. */
    using DAC_DOR1_DACC1DOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 data output register */
    using DAC_DOR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 data output These bits are read-only, they contain data output for DAC channel2. */
    using DAC_DOR2_DACC2DOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief DAC channel2 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1). Note: This bit is available only on dual-channel DACs. Refer to implementation. */
    using DAC_SR_DMAUDR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No DMA underrun error condition occurred for DAC channel2 (value: 0)
     *          - B_0x1: DMA underrun error condition occurred for DAC channel2 (the currently selected trigger is driving DAC channel2 conversion at a frequency higher than the DMA service capability rate). (value: 1)
     */
        /** @brief No DMA underrun error condition occurred for DAC channel2 */
    constexpr std::uint32_t DAC_SR_DMAUDR2_B_0x0 = 0;
        /** @brief DMA underrun error condition occurred for DAC channel2 (the currently selected trigger is driving DAC channel2 conversion at a frequency higher than the DMA service capability rate). */
    constexpr std::uint32_t DAC_SR_DMAUDR2_B_0x1 = 1;

    /** @brief DAC channel2 calibration offset status This bit is set and cleared by hardware Note: This bit is available only on dual-channel DACs. Refer to implementation. */
    using DAC_SR_CAL_FLAG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: calibration trimming value is lower than the offset correction value (value: 0)
     *          - B_0x1: calibration trimming value is equal or greater than the offset correction value (value: 1)
     */
        /** @brief calibration trimming value is lower than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG2_B_0x0 = 0;
        /** @brief calibration trimming value is equal or greater than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG2_B_0x1 = 1;

    /** @brief DAC channel2 busy writing sample time flag This bit is systematically set just after Sample and hold mode enable. It is set each time the software writes the register DAC_SHSR2, It is cleared by hardware when the write operation of DAC_SHSR2 is complete. (It takes about 3 LSI periods of synchronization). Note: This bit is available only on dual-channel DACs. Refer to implementation. */
    using DAC_SR_BWST2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: There is no write operation of DAC_SHSR2 ongoing: DAC_SHSR2 can be written (value: 0)
     *          - B_0x1: There is a write operation of DAC_SHSR2 ongoing: DAC_SHSR2 cannot be written (value: 1)
     */
        /** @brief There is no write operation of DAC_SHSR2 ongoing: DAC_SHSR2 can be written */
    constexpr std::uint32_t DAC_SR_BWST2_B_0x0 = 0;
        /** @brief There is a write operation of DAC_SHSR2 ongoing: DAC_SHSR2 cannot be written */
    constexpr std::uint32_t DAC_SR_BWST2_B_0x1 = 1;

    /** @brief DAC calibration control register */
    using DAC_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 offset trimming value */
    using DAC_CCR_OTRIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 offset trimming value These bits are available only on dual-channel DACs. Refer to implementation. */
    using DAC_CCR_OTRIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC mode control register */
    using DAC_MCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN1=0 and bit CEN1 =0 in the DAC_CR register). If EN1=1 or CEN1 =1 the write operation is ignored. They can be set and cleared by software to select the DAC channel1 mode: DAC channel1 in Normal mode DAC channel1 in sample & hold mode Note: This register can be modified only when EN1=0. */
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

    /** @brief DAC channel2 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN2=0 and bit CEN2 =0 in the DAC_CR register). If EN2=1 or CEN2 =1 the write operation is ignored. They can be set and cleared by software to select the DAC channel2 mode: DAC channel2 in Normal mode DAC channel2 in Sample and hold mode Note: This register can be modified only when EN2=0. Refer to for the availability of DAC channel2. */
    using DAC_MCR_MODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 is connected to external pin with Buffer enabled (value: 0)
     *          - B_0x1: DAC channel2 is connected to external pin and to on chip peripherals with buffer enabled (value: 1)
     *          - B_0x2: DAC channel2 is connected to external pin with buffer disabled (value: 2)
     *          - B_0x3: DAC channel2 is connected to on chip peripherals with Buffer disabled (value: 3)
     *          - B_0x4: DAC channel2 is connected to external pin with Buffer enabled (value: 4)
     *          - B_0x5: DAC channel2 is connected to external pin and to on chip peripherals with Buffer enabled (value: 5)
     *          - B_0x6: DAC channel2 is connected to external pin and to on chip peripherals with Buffer disabled (value: 6)
     *          - B_0x7: DAC channel2 is connected to on chip peripherals with Buffer disabled (value: 7)
     */
        /** @brief DAC channel2 is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x0 = 0;
        /** @brief DAC channel2 is connected to external pin and to on chip peripherals with buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x1 = 1;
        /** @brief DAC channel2 is connected to external pin with buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x2 = 2;
        /** @brief DAC channel2 is connected to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x3 = 3;
        /** @brief DAC channel2 is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x4 = 4;
        /** @brief DAC channel2 is connected to external pin and to on chip peripherals with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x5 = 5;
        /** @brief DAC channel2 is connected to external pin and to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x6 = 6;
        /** @brief DAC channel2 is connected to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x7 = 7;

    /** @brief DAC Sample and Hold sample time register 1 */
    using DAC_SHSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 sample time (only valid in Sample and hold mode) These bits can be written when the DAC channel1 is disabled or also during normal operation. in the latter case, the write can be done only when BWST1 of DAC_SR register is low, If BWST1=1, the write operation is ignored. */
    using DAC_SHSR1_TSAMPLE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Sample and Hold sample time register 2 */
    using DAC_SHSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 sample time (only valid in Sample and hold mode) These bits can be written when the DAC channel2 is disabled or also during normal operation. in the latter case, the write can be done only when BWST2 of DAC_SR register is low, if BWST2=1, the write operation is ignored. */
    using DAC_SHSR2_TSAMPLE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Sample and Hold hold time register */
    using DAC_SHHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 hold time (only valid in Sample and hold mode) Hold time= (THOLD[9:0]) x LSI clock period Note: This register can be modified only when EN1=0. */
    using DAC_SHHR_THOLD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 hold time (only valid in Sample and hold mode). Hold time= (THOLD[9:0]) x LSI clock period Note: This register can be modified only when EN2=0. These bits are available only on dual-channel DACs. Refer to implementation. */
    using DAC_SHHR_THOLD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Sample and Hold refresh time register */
    using DAC_SHRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 refresh time (only valid in Sample and hold mode) Refresh time= (TREFRESH[7:0]) x LSI clock period Note: This register can be modified only when EN1=0. */
    using DAC_SHRR_TREFRESH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 refresh time (only valid in Sample and hold mode) Refresh time= (TREFRESH[7:0]) x LSI clock period Note: This register can be modified only when EN2=0. These bits are available only on dual-channel DACs. Refer to implementation. */
    using DAC_SHRR_TREFRESH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
