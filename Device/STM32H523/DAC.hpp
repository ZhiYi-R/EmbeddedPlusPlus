/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H523_DAC_HPP
#define EMBEDDED_PP_STM32H523_DAC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DAC address block description */
namespace STM32H523::DAC {

    /** @brief DAC control register */
    using DAC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 enable */
    using DAC_CR_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 disabled (value: 0)
     *          - B_0x1: DAC channel1 enabled (value: 1)
     */
        /** @brief DAC channel1 disabled */
    constexpr std::uint32_t DAC_CR_EN1_B_0x0 = 0;
        /** @brief DAC channel1 enabled */
    constexpr std::uint32_t DAC_CR_EN1_B_0x1 = 1;

    /** @brief DAC channel1 trigger enable */
    using DAC_CR_TEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 trigger disabled and data written into the DAC_DHR1 register are transferred one dac_hclk clock cycle later to the DAC_DOR1 register (value: 0)
     *          - B_0x1: DAC channel1 trigger enabled and data from the DAC_DHR1 register are transferred three dac_hclk clock cycles later to the DAC_DOR1 register (value: 1)
     */
        /** @brief DAC channel1 trigger disabled and data written into the DAC_DHR1 register are transferred one dac_hclk clock cycle later to the DAC_DOR1 register */
    constexpr std::uint32_t DAC_CR_TEN1_B_0x0 = 0;
        /** @brief DAC channel1 trigger enabled and data from the DAC_DHR1 register are transferred three dac_hclk clock cycles later to the DAC_DOR1 register */
    constexpr std::uint32_t DAC_CR_TEN1_B_0x1 = 1;

    /** @brief DAC channel1 trigger selection */
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

    /** @brief DAC channel1 noise/triangle wave generation enable */
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

    /** @brief DAC channel1 DMA enable */
    using DAC_CR_DMAEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 DMA mode disabled (value: 0)
     *          - B_0x1: DAC channel1 DMA mode enabled (value: 1)
     */
        /** @brief DAC channel1 DMA mode disabled */
    constexpr std::uint32_t DAC_CR_DMAEN1_B_0x0 = 0;
        /** @brief DAC channel1 DMA mode enabled */
    constexpr std::uint32_t DAC_CR_DMAEN1_B_0x1 = 1;

    /** @brief DAC channel1 DMA Underrun Interrupt enable */
    using DAC_CR_DMAUDRIE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 DMA Underrun Interrupt disabled (value: 0)
     *          - B_0x1: DAC channel1 DMA Underrun Interrupt enabled (value: 1)
     */
        /** @brief DAC channel1 DMA Underrun Interrupt disabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE1_B_0x0 = 0;
        /** @brief DAC channel1 DMA Underrun Interrupt enabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE1_B_0x1 = 1;

    /** @brief DAC channel1 calibration enable */
    using DAC_CR_CEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 in Normal operating mode (value: 0)
     *          - B_0x1: DAC channel1 in calibration mode (value: 1)
     */
        /** @brief DAC channel1 in Normal operating mode */
    constexpr std::uint32_t DAC_CR_CEN1_B_0x0 = 0;
        /** @brief DAC channel1 in calibration mode */
    constexpr std::uint32_t DAC_CR_CEN1_B_0x1 = 1;

    /** @brief DAC channel2 enable */
    using DAC_CR_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 disabled (value: 0)
     *          - B_0x1: DAC channel2 enabled (value: 1)
     */
        /** @brief DAC channel2 disabled */
    constexpr std::uint32_t DAC_CR_EN2_B_0x0 = 0;
        /** @brief DAC channel2 enabled */
    constexpr std::uint32_t DAC_CR_EN2_B_0x1 = 1;

    /** @brief DAC channel2 trigger enable */
    using DAC_CR_TEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 trigger disabled and data written into the DAC_DHR2 register are transferred one dac_hclk clock cycle later to the DAC_DOR2 register (value: 0)
     *          - B_0x1: DAC channel2 trigger enabled and data from the DAC_DHR2 register are transferred three dac_hclk clock cycles later to the DAC_DOR2 register (value: 1)
     */
        /** @brief DAC channel2 trigger disabled and data written into the DAC_DHR2 register are transferred one dac_hclk clock cycle later to the DAC_DOR2 register */
    constexpr std::uint32_t DAC_CR_TEN2_B_0x0 = 0;
        /** @brief DAC channel2 trigger enabled and data from the DAC_DHR2 register are transferred three dac_hclk clock cycles later to the DAC_DOR2 register */
    constexpr std::uint32_t DAC_CR_TEN2_B_0x1 = 1;

    /** @brief DAC channel2 trigger selection */
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

    /** @brief DAC channel2 noise/triangle wave generation enable */
    using DAC_CR_WAVE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wave generation disabled (value: 0)
     *          - B_0x1: Noise wave generation enabled (value: 1)
     */
        /** @brief wave generation disabled */
    constexpr std::uint32_t DAC_CR_WAVE2_B_0x0 = 0;
        /** @brief Noise wave generation enabled */
    constexpr std::uint32_t DAC_CR_WAVE2_B_0x1 = 1;

    /** @brief DAC channel2 mask/amplitude selector */
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

    /** @brief DAC channel2 DMA enable */
    using DAC_CR_DMAEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 DMA mode disabled (value: 0)
     *          - B_0x1: DAC channel2 DMA mode enabled (value: 1)
     */
        /** @brief DAC channel2 DMA mode disabled */
    constexpr std::uint32_t DAC_CR_DMAEN2_B_0x0 = 0;
        /** @brief DAC channel2 DMA mode enabled */
    constexpr std::uint32_t DAC_CR_DMAEN2_B_0x1 = 1;

    /** @brief DAC channel2 DMA underrun interrupt enable */
    using DAC_CR_DMAUDRIE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 DMA underrun interrupt disabled (value: 0)
     *          - B_0x1: DAC channel2 DMA underrun interrupt enabled (value: 1)
     */
        /** @brief DAC channel2 DMA underrun interrupt disabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE2_B_0x0 = 0;
        /** @brief DAC channel2 DMA underrun interrupt enabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE2_B_0x1 = 1;

    /** @brief DAC channel2 calibration enable */
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
    /** @brief DAC channel1 software trigger */
    using DAC_SWTRGR_SWTRIG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger (value: 0)
     *          - B_0x1: Trigger (value: 1)
     */
        /** @brief No trigger */
    constexpr std::uint32_t DAC_SWTRGR_SWTRIG1_B_0x0 = 0;
        /** @brief Trigger */
    constexpr std::uint32_t DAC_SWTRGR_SWTRIG1_B_0x1 = 1;

    /** @brief DAC channel2 software trigger */
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
    /** @brief DAC channel1 12-bit right-aligned data */
    using DAC_DHR12R1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit right-aligned data B */
    using DAC_DHR12R1_DACC1DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left aligned data holding register */
    using DAC_DHR12L1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left-aligned data */
    using DAC_DHR12L1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left-aligned data B */
    using DAC_DHR12L1_DACC1DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right aligned data holding register */
    using DAC_DHR8R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right-aligned data */
    using DAC_DHR8R1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right-aligned data */
    using DAC_DHR8R1_DACC1DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right aligned data holding register */
    using DAC_DHR12R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right-aligned data */
    using DAC_DHR12R2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right-aligned data */
    using DAC_DHR12R2_DACC2DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left aligned data holding register */
    using DAC_DHR12L2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left-aligned data */
    using DAC_DHR12L2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left-aligned data B */
    using DAC_DHR12L2_DACC2DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data holding register */
    using DAC_DHR8R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data */
    using DAC_DHR8R2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data */
    using DAC_DHR8R2_DACC2DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual DAC 12-bit right-aligned data holding register */
    using DAC_DHR12RD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit right-aligned data */
    using DAC_DHR12RD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right-aligned data */
    using DAC_DHR12RD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual DAC 12-bit left aligned data holding register */
    using DAC_DHR12LD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left-aligned data */
    using DAC_DHR12LD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left-aligned data */
    using DAC_DHR12LD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual DAC 8-bit right aligned data holding register */
    using DAC_DHR8RD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right-aligned data */
    using DAC_DHR8RD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data */
    using DAC_DHR8RD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output register */
    using DAC_DOR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output */
    using DAC_DOR1_DACC1DOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output */
    using DAC_DOR1_DACC1DORB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 data output register */
    using DAC_DOR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 data output */
    using DAC_DOR2_DACC2DOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 data output */
    using DAC_DOR2_DACC2DORB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC status register */
    using DAC_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 ready status bit */
    using DAC_SR_DAC1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 is not yet ready to accept the trigger nor output data (value: 0)
     *          - B_0x1: DAC channel1 is ready to accept the trigger or output data (value: 1)
     */
        /** @brief DAC channel1 is not yet ready to accept the trigger nor output data */
    constexpr std::uint32_t DAC_SR_DAC1RDY_B_0x0 = 0;
        /** @brief DAC channel1 is ready to accept the trigger or output data */
    constexpr std::uint32_t DAC_SR_DAC1RDY_B_0x1 = 1;

    /** @brief DAC channel1 output register status bit */
    using DAC_SR_DORSTAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOR[11:0] is used actual DAC output (value: 0)
     *          - B_0x1: DORB[11:0] is used actual DAC output (value: 1)
     */
        /** @brief DOR[11:0] is used actual DAC output */
    constexpr std::uint32_t DAC_SR_DORSTAT1_B_0x0 = 0;
        /** @brief DORB[11:0] is used actual DAC output */
    constexpr std::uint32_t DAC_SR_DORSTAT1_B_0x1 = 1;

    /** @brief DAC channel1 DMA underrun flag */
    using DAC_SR_DMAUDR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No DMA underrun error condition occurred for DAC channel1 (value: 0)
     *          - B_0x1: DMA underrun error condition occurred for DAC channel1 (the currently selected trigger is driving DAC channel1 conversion at a frequency higher than the DMA service capability rate) (value: 1)
     */
        /** @brief No DMA underrun error condition occurred for DAC channel1 */
    constexpr std::uint32_t DAC_SR_DMAUDR1_B_0x0 = 0;
        /** @brief DMA underrun error condition occurred for DAC channel1 (the currently selected trigger is driving DAC channel1 conversion at a frequency higher than the DMA service capability rate) */
    constexpr std::uint32_t DAC_SR_DMAUDR1_B_0x1 = 1;

    /** @brief DAC channel1 calibration offset status */
    using DAC_SR_CAL_FLAG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: calibration trimming value is lower than the offset correction value (value: 0)
     *          - B_0x1: calibration trimming value is equal or greater than the offset correction value (value: 1)
     */
        /** @brief calibration trimming value is lower than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG1_B_0x0 = 0;
        /** @brief calibration trimming value is equal or greater than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG1_B_0x1 = 1;

    /** @brief DAC channel1 busy writing sample time flag */
    using DAC_SR_BWST1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: There is no write operation of DAC_SHSR1 ongoing: DAC_SHSR1 can be written (value: 0)
     *          - B_0x1: There is a write operation of DAC_SHSR1 ongoing: DAC_SHSR1 cannot be written (value: 1)
     */
        /** @brief There is no write operation of DAC_SHSR1 ongoing: DAC_SHSR1 can be written */
    constexpr std::uint32_t DAC_SR_BWST1_B_0x0 = 0;
        /** @brief There is a write operation of DAC_SHSR1 ongoing: DAC_SHSR1 cannot be written */
    constexpr std::uint32_t DAC_SR_BWST1_B_0x1 = 1;

    /** @brief DAC channel2 ready status bit */
    using DAC_SR_DAC2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 is not yet ready to accept the trigger nor output data (value: 0)
     *          - B_0x1: DAC channel2 is ready to accept the trigger or output data (value: 1)
     */
        /** @brief DAC channel2 is not yet ready to accept the trigger nor output data */
    constexpr std::uint32_t DAC_SR_DAC2RDY_B_0x0 = 0;
        /** @brief DAC channel2 is ready to accept the trigger or output data */
    constexpr std::uint32_t DAC_SR_DAC2RDY_B_0x1 = 1;

    /** @brief DAC channel2 output register status bit */
    using DAC_SR_DORSTAT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOR[11:0] is used actual DAC output (value: 0)
     *          - B_0x1: DORB[11:0] is used actual DAC output (value: 1)
     */
        /** @brief DOR[11:0] is used actual DAC output */
    constexpr std::uint32_t DAC_SR_DORSTAT2_B_0x0 = 0;
        /** @brief DORB[11:0] is used actual DAC output */
    constexpr std::uint32_t DAC_SR_DORSTAT2_B_0x1 = 1;

    /** @brief DAC channel2 DMA underrun flag */
    using DAC_SR_DMAUDR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No DMA underrun error condition occurred for DAC channel2 (value: 0)
     *          - B_0x1: DMA underrun error condition occurred for DAC channel2 (the currently selected trigger is driving DAC channel2 conversion at a frequency higher than the DMA service capability rate). (value: 1)
     */
        /** @brief No DMA underrun error condition occurred for DAC channel2 */
    constexpr std::uint32_t DAC_SR_DMAUDR2_B_0x0 = 0;
        /** @brief DMA underrun error condition occurred for DAC channel2 (the currently selected trigger is driving DAC channel2 conversion at a frequency higher than the DMA service capability rate). */
    constexpr std::uint32_t DAC_SR_DMAUDR2_B_0x1 = 1;

    /** @brief DAC channel2 calibration offset status */
    using DAC_SR_CAL_FLAG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: calibration trimming value is lower than the offset correction value (value: 0)
     *          - B_0x1: calibration trimming value is equal or greater than the offset correction value (value: 1)
     */
        /** @brief calibration trimming value is lower than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG2_B_0x0 = 0;
        /** @brief calibration trimming value is equal or greater than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG2_B_0x1 = 1;

    /** @brief DAC channel2 busy writing sample time flag */
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
    /** @brief DAC channel2 offset trimming value */
    using DAC_CCR_OTRIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC mode control register */
    using DAC_MCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 mode */
    using DAC_MCR_MODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 is connected to external pin with Buffer enabled (value: 0)
     *          - B_0x2: DAC channel1 is connected to external pin with Buffer disabled (value: 2)
     *          - B_0x4: DAC channel1 is connected to external pin with Buffer enabled (value: 4)
     *          - B_0x6: DAC channel1 is connected to external pin with Buffer disabled (value: 6)
     */
        /** @brief DAC channel1 is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x0 = 0;
        /** @brief DAC channel1 is connected to external pin with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x2 = 2;
        /** @brief DAC channel1 is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x4 = 4;
        /** @brief DAC channel1 is connected to external pin with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x6 = 6;

    /** @brief DAC channel1 DMA double data mode */
    using DAC_MCR_DMADOUBLE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA Normal mode selected (value: 0)
     *          - B_0x1: DMA Double data mode selected (value: 1)
     */
        /** @brief DMA Normal mode selected */
    constexpr std::uint32_t DAC_MCR_DMADOUBLE1_B_0x0 = 0;
        /** @brief DMA Double data mode selected */
    constexpr std::uint32_t DAC_MCR_DMADOUBLE1_B_0x1 = 1;

    /** @brief Enable signed format for DAC channel1 */
    using DAC_MCR_SINFORMAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input data is in unsigned format (value: 0)
     *          - B_0x1: Input data is in signed format (2's complement). (value: 1)
     */
        /** @brief Input data is in unsigned format */
    constexpr std::uint32_t DAC_MCR_SINFORMAT1_B_0x0 = 0;
        /** @brief Input data is in signed format (2's complement). */
    constexpr std::uint32_t DAC_MCR_SINFORMAT1_B_0x1 = 1;

    /** @brief High frequency interface mode selection */
    using DAC_MCR_HFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High frequency interface mode disabled (value: 0)
     *          - B_0x1: High frequency interface mode enabled for AHB clock frequency > 80 MHz (value: 1)
     *          - B_0x2: High frequency interface mode enabled for AHB clock frequency >160 MHz (value: 2)
     */
        /** @brief High frequency interface mode disabled */
    constexpr std::uint32_t DAC_MCR_HFSEL_B_0x0 = 0;
        /** @brief High frequency interface mode enabled for AHB clock frequency > 80 MHz */
    constexpr std::uint32_t DAC_MCR_HFSEL_B_0x1 = 1;
        /** @brief High frequency interface mode enabled for AHB clock frequency >160 MHz */
    constexpr std::uint32_t DAC_MCR_HFSEL_B_0x2 = 2;

    /** @brief DAC channel2 mode */
    using DAC_MCR_MODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 is connected to external pin with Buffer enabled (value: 0)
     *          - B_0x2: DAC channel2 is connected to external pin with buffer disabled (value: 2)
     *          - B_0x4: DAC channel2 is connected to external pin with Buffer enabled (value: 4)
     *          - B_0x6: DAC channel2 is connected to external pin with Buffer disabled (value: 6)
     */
        /** @brief DAC channel2 is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x0 = 0;
        /** @brief DAC channel2 is connected to external pin with buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x2 = 2;
        /** @brief DAC channel2 is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x4 = 4;
        /** @brief DAC channel2 is connected to external pin with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x6 = 6;

    /** @brief DAC channel2 DMA double data mode */
    using DAC_MCR_DMADOUBLE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA Normal mode selected (value: 0)
     *          - B_0x1: DMA Double data mode selected (value: 1)
     */
        /** @brief DMA Normal mode selected */
    constexpr std::uint32_t DAC_MCR_DMADOUBLE2_B_0x0 = 0;
        /** @brief DMA Double data mode selected */
    constexpr std::uint32_t DAC_MCR_DMADOUBLE2_B_0x1 = 1;

    /** @brief Enable signed format for DAC channel2 */
    using DAC_MCR_SINFORMAT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input data is in unsigned format (value: 0)
     *          - B_0x1: Input data is in signed format (2's complement). (value: 1)
     */
        /** @brief Input data is in unsigned format */
    constexpr std::uint32_t DAC_MCR_SINFORMAT2_B_0x0 = 0;
        /** @brief Input data is in signed format (2's complement). */
    constexpr std::uint32_t DAC_MCR_SINFORMAT2_B_0x1 = 1;

    /** @brief DAC channel1 sample and hold sample time register */
    using DAC_SHSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 sample time (only valid in Sample and hold mode) */
    using DAC_SHSR1_TSAMPLE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 sample and hold sample time register */
    using DAC_SHSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 sample time (only valid in Sample and hold mode) */
    using DAC_SHSR2_TSAMPLE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC sample and hold time register */
    using DAC_SHHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 hold time (only valid in Sample and hold mode) */
    using DAC_SHHR_THOLD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 hold time (only valid in Sample and hold mode). */
    using DAC_SHHR_THOLD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC sample and hold refresh time register */
    using DAC_SHRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 refresh time (only valid in Sample and hold mode) */
    using DAC_SHRR_TREFRESH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 refresh time (only valid in Sample and hold mode) */
    using DAC_SHRR_TREFRESH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
