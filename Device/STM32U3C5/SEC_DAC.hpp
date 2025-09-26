/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3C5_SEC_DAC_HPP
#define EMBEDDED_PP_STM32U3C5_SEC_DAC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DAC Address block */
namespace STM32U3C5::SEC_DAC {

    /** @brief DAC control register */
    using DAC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is set and cleared by software to enable/disable DAC channel1. 0: DAC channel1 disabled 1: DAC channel1 enabled */
    using DAC_CR_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 disabled (value: 0)
     *          - B_0x1: DAC channel1 enabled (value: 1)
     */
        /** @brief DAC channel1 disabled */
    constexpr std::uint32_t DAC_CR_EN1_B_0x0 = 0;
        /** @brief DAC channel1 enabled */
    constexpr std::uint32_t DAC_CR_EN1_B_0x1 = 1;

    /** @brief This bit is set and cleared by software to enable/disable DAC channel1 trigger. 0: DAC channel1 trigger disabled and data written into the DAC_DHR1 register are transferred one dac_pclk clock cycle later to the DAC_DOR1 register 1: DAC channel1 trigger enabled and data from the DAC_DHR1 register are transferred three dac_pclk clock cycles later to the DAC_DOR1 register Note: When software trigger is selected, the transfer from the DAC_DHR1 register to the DAC_DOR1 register takes only one dac_pclk clock cycle. */
    using DAC_CR_TEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 trigger disabled and data written into the DAC_DHR1 register are transferred one dac_pclk clock cycle later to the DAC_DOR1 register (value: 0)
     *          - B_0x1: DAC channel1 trigger enabled and data from the DAC_DHR1 register are transferred three dac_pclk clock cycles later to the DAC_DOR1 register (value: 1)
     */
        /** @brief DAC channel1 trigger disabled and data written into the DAC_DHR1 register are transferred one dac_pclk clock cycle later to the DAC_DOR1 register */
    constexpr std::uint32_t DAC_CR_TEN1_B_0x0 = 0;
        /** @brief DAC channel1 trigger enabled and data from the DAC_DHR1 register are transferred three dac_pclk clock cycles later to the DAC_DOR1 register */
    constexpr std::uint32_t DAC_CR_TEN1_B_0x1 = 1;

    /** @brief These bits select the external event used to trigger DAC channel2 Refer to the trigger selection tables in less than xe2 [dacif2_TrigSel]/> for details on trigger configuration and mapping. 0000: SWTRIG1 0001-1111: dac_ch1_trg{val} Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled). Note: These bits are available only on dual-channel DACs. Refer to less than xe1 [Implementation]/> */
    using DAC_CR_TSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SWTRIG1 (value: 0)
     *          - B_0x1: dac_ch1_trg1 (value: 1)
     *          - B_0x2: dac_ch1_trg2 (value: 2)
     *          - B_0x3: dac_ch1_trg3 (value: 3)
     *          - B_0x4: dac_ch1_trg4 (value: 4)
     *          - B_0x5: dac_ch1_trg5 (value: 5)
     *          - B_0x6: dac_ch1_trg6 (value: 6)
     *          - B_0x7: dac_ch1_trg7 (value: 7)
     *          - B_0x8: dac_ch1_trg8 (value: 8)
     *          - B_0x9: dac_ch1_trg9 (value: 9)
     *          - B_0xA: dac_ch1_trg10 (value: 10)
     *          - B_0xB: dac_ch1_trg11 (value: 11)
     *          - B_0xC: dac_ch1_trg12 (value: 12)
     *          - B_0xD: dac_ch1_trg13 (value: 13)
     *          - B_0xE: dac_ch1_trg14 (value: 14)
     *          - B_0xF: dac_ch1_trg15 (value: 15)
     */
        /** @brief SWTRIG1 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x0 = 0;
        /** @brief dac_ch1_trg1 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x1 = 1;
        /** @brief dac_ch1_trg2 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x2 = 2;
        /** @brief dac_ch1_trg3 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x3 = 3;
        /** @brief dac_ch1_trg4 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x4 = 4;
        /** @brief dac_ch1_trg5 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x5 = 5;
        /** @brief dac_ch1_trg6 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x6 = 6;
        /** @brief dac_ch1_trg7 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x7 = 7;
        /** @brief dac_ch1_trg8 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x8 = 8;
        /** @brief dac_ch1_trg9 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0x9 = 9;
        /** @brief dac_ch1_trg10 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0xA = 10;
        /** @brief dac_ch1_trg11 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0xB = 11;
        /** @brief dac_ch1_trg12 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0xC = 12;
        /** @brief dac_ch1_trg13 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0xD = 13;
        /** @brief dac_ch1_trg14 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0xE = 14;
        /** @brief dac_ch1_trg15 */
    constexpr std::uint32_t DAC_CR_TSEL1_B_0xF = 15;

    /** @brief None 00: wave generation disabled 01: Noise wave generation enabled 10: Triangle wave generation enabled 11: Triangle wave generation enabled Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled). Refer to less than xe1 [Implementation]/>. */
    using DAC_CR_WAVE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wave generation disabled (value: 0)
     *          - B_0x1: Noise wave generation enabled (value: 1)
     *          - B_0x2: Triangle wave generation enabled (value: 2)
     *          - B_0x3: Triangle wave generation enabled (value: 3)
     */
        /** @brief wave generation disabled */
    constexpr std::uint32_t DAC_CR_WAVE1_B_0x0 = 0;
        /** @brief Noise wave generation enabled */
    constexpr std::uint32_t DAC_CR_WAVE1_B_0x1 = 1;
        /** @brief Triangle wave generation enabled */
    constexpr std::uint32_t DAC_CR_WAVE1_B_0x2 = 2;
        /** @brief Triangle wave generation enabled */
    constexpr std::uint32_t DAC_CR_WAVE1_B_0x3 = 3;

    /** @brief These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. 0000: Unmask bit0 of LFSR/ triangle amplitude equal to 1 0001: Unmask bits[1:0] of LFSR/ triangle amplitude equal to 3 0010: Unmask bits[2:0] of LFSR/ triangle amplitude equal to 7 0011: Unmask bits[3:0] of LFSR/ triangle amplitude equal to 15 0100: Unmask bits[4:0] of LFSR/ triangle amplitude equal to 31 0101: Unmask bits[5:0] of LFSR/ triangle amplitude equal to 63 0110: Unmask bits[6:0] of LFSR/ triangle amplitude equal to 127 0111: Unmask bits[7:0] of LFSR/ triangle amplitude equal to 255 1000: Unmask bits[8:0] of LFSR/ triangle amplitude equal to 511 1001: Unmask bits[9:0] of LFSR/ triangle amplitude equal to 1023 1010: Unmask bits[10:0] of LFSR/ triangle amplitude equal to 2047 Others: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095 */
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

    /** @brief This bit is set and cleared by software. 0: DAC channel1 DMA mode disabled 1: DAC channel1 DMA mode enabled */
    using DAC_CR_DMAEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 DMA mode disabled (value: 0)
     *          - B_0x1: DAC channel1 DMA mode enabled (value: 1)
     */
        /** @brief DAC channel1 DMA mode disabled */
    constexpr std::uint32_t DAC_CR_DMAEN1_B_0x0 = 0;
        /** @brief DAC channel1 DMA mode enabled */
    constexpr std::uint32_t DAC_CR_DMAEN1_B_0x1 = 1;

    /** @brief This bit is set and cleared by software. 0: DAC channel1 DMA Underrun Interrupt disabled 1: DAC channel1 DMA Underrun Interrupt enabled */
    using DAC_CR_DMAUDRIE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 DMA Underrun Interrupt disabled (value: 0)
     *          - B_0x1: DAC channel1 DMA Underrun Interrupt enabled (value: 1)
     */
        /** @brief DAC channel1 DMA Underrun Interrupt disabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE1_B_0x0 = 0;
        /** @brief DAC channel1 DMA Underrun Interrupt enabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE1_B_0x1 = 1;

    /** @brief This bit is set and cleared by software to enable/disable DAC channel1 calibration, it can be written only if bit EN1 = 0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored. 0: DAC channel1 in Normal operating mode 1: DAC channel1 in calibration mode */
    using DAC_CR_CEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 in Normal operating mode (value: 0)
     *          - B_0x1: DAC channel1 in calibration mode (value: 1)
     */
        /** @brief DAC channel1 in Normal operating mode */
    constexpr std::uint32_t DAC_CR_CEN1_B_0x0 = 0;
        /** @brief DAC channel1 in calibration mode */
    constexpr std::uint32_t DAC_CR_CEN1_B_0x1 = 1;

    /** @brief This bit is set and cleared by software to enable/disable DAC channel2. 0: DAC channel2 disabled 1: DAC channel2 enabledSection 19.3: DAC implementation Note: These bits are available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_CR_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 disabled (value: 0)
     *          - B_0x1: DAC channel2 enabledSection 19.3: DAC implementation (value: 1)
     */
        /** @brief DAC channel2 disabled */
    constexpr std::uint32_t DAC_CR_EN2_B_0x0 = 0;
        /** @brief DAC channel2 enabledSection 19.3: DAC implementation */
    constexpr std::uint32_t DAC_CR_EN2_B_0x1 = 1;

    /** @brief This bit is set and cleared by software to enable/disable DAC channel2 trigger. 0: DAC channel2 trigger disabled and data written into the DAC_DHR2 register are transferred one dac_pclk clock cycle later to the DAC_DOR2 register 1: DAC channel2 trigger enabled and data from the DAC_DHR2 register are transferred three dac_pclk clock cycles later to the DAC_DOR2 register Note: When software trigger is selected, the transfer from the DAC_DHR2 register to the DAC_DOR2 register takes only one dac_pclk clock cycle. These bits are available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_CR_TEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 trigger disabled and data written into the DAC_DHR2 register are transferred one dac_pclk clock cycle later to the DAC_DOR2 register (value: 0)
     *          - B_0x1: DAC channel2 trigger enabled and data from the DAC_DHR2 register are transferred three dac_pclk clock cycles later to the DAC_DOR2 register (value: 1)
     */
        /** @brief DAC channel2 trigger disabled and data written into the DAC_DHR2 register are transferred one dac_pclk clock cycle later to the DAC_DOR2 register */
    constexpr std::uint32_t DAC_CR_TEN2_B_0x0 = 0;
        /** @brief DAC channel2 trigger enabled and data from the DAC_DHR2 register are transferred three dac_pclk clock cycles later to the DAC_DOR2 register */
    constexpr std::uint32_t DAC_CR_TEN2_B_0x1 = 1;

    /** @brief These bits select the external event used to trigger DAC channel2 Refer to the trigger selection tables in less than xe2 [dacif2_TrigSel]/> for details on trigger configuration and mapping. 0000: SWTRIG2 0001-1111: dac_ch2_trg{val} Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled). These bits are available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_CR_TSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SWTRIG2 (value: 0)
     *          - B_0x1: dac_ch2_trg1 (value: 1)
     *          - B_0x2: dac_ch2_trg2 (value: 2)
     *          - B_0x3: dac_ch2_trg3 (value: 3)
     *          - B_0x4: dac_ch2_trg4 (value: 4)
     *          - B_0x5: dac_ch2_trg5 (value: 5)
     *          - B_0x6: dac_ch2_trg6 (value: 6)
     *          - B_0x7: dac_ch2_trg7 (value: 7)
     *          - B_0x8: dac_ch2_trg8 (value: 8)
     *          - B_0x9: dac_ch2_trg9 (value: 9)
     *          - B_0xA: dac_ch2_trg10 (value: 10)
     *          - B_0xB: dac_ch2_trg11 (value: 11)
     *          - B_0xC: dac_ch2_trg12 (value: 12)
     *          - B_0xD: dac_ch2_trg13 (value: 13)
     *          - B_0xE: dac_ch2_trg14 (value: 14)
     *          - B_0xF: dac_ch2_trg15 (value: 15)
     */
        /** @brief SWTRIG2 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x0 = 0;
        /** @brief dac_ch2_trg1 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x1 = 1;
        /** @brief dac_ch2_trg2 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x2 = 2;
        /** @brief dac_ch2_trg3 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x3 = 3;
        /** @brief dac_ch2_trg4 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x4 = 4;
        /** @brief dac_ch2_trg5 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x5 = 5;
        /** @brief dac_ch2_trg6 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x6 = 6;
        /** @brief dac_ch2_trg7 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x7 = 7;
        /** @brief dac_ch2_trg8 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x8 = 8;
        /** @brief dac_ch2_trg9 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0x9 = 9;
        /** @brief dac_ch2_trg10 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0xA = 10;
        /** @brief dac_ch2_trg11 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0xB = 11;
        /** @brief dac_ch2_trg12 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0xC = 12;
        /** @brief dac_ch2_trg13 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0xD = 13;
        /** @brief dac_ch2_trg14 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0xE = 14;
        /** @brief dac_ch2_trg15 */
    constexpr std::uint32_t DAC_CR_TSEL2_B_0xF = 15;

    /** @brief These bits are set/reset by software. 00: wave generation disabled 01: Noise wave generation enabled 10: Triangle wave generation enabled 11: Triangle wave generation enabled Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled) Note: These bits are available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_CR_WAVE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wave generation disabled (value: 0)
     *          - B_0x1: Noise wave generation enabled (value: 1)
     *          - B_0x2: Triangle wave generation enabled (value: 2)
     *          - B_0x3: Triangle wave generation enabled (value: 3)
     */
        /** @brief wave generation disabled */
    constexpr std::uint32_t DAC_CR_WAVE2_B_0x0 = 0;
        /** @brief Noise wave generation enabled */
    constexpr std::uint32_t DAC_CR_WAVE2_B_0x1 = 1;
        /** @brief Triangle wave generation enabled */
    constexpr std::uint32_t DAC_CR_WAVE2_B_0x2 = 2;
        /** @brief Triangle wave generation enabled */
    constexpr std::uint32_t DAC_CR_WAVE2_B_0x3 = 3;

    /** @brief These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. 0000: Unmask bit0 of LFSR/ triangle amplitude equal to 1 0001: Unmask bits[1:0] of LFSR/ triangle amplitude equal to 3 0010: Unmask bits[2:0] of LFSR/ triangle amplitude equal to 7 0011: Unmask bits[3:0] of LFSR/ triangle amplitude equal to 15 0100: Unmask bits[4:0] of LFSR/ triangle amplitude equal to 31 0101: Unmask bits[5:0] of LFSR/ triangle amplitude equal to 63 0110: Unmask bits[6:0] of LFSR/ triangle amplitude equal to 127 0111: Unmask bits[7:0] of LFSR/ triangle amplitude equal to 255 1000: Unmask bits[8:0] of LFSR/ triangle amplitude equal to 511 1001: Unmask bits[9:0] of LFSR/ triangle amplitude equal to 1023 1010: Unmask bits[10:0] of LFSR/ triangle amplitude equal to 2047 Others: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095 Note: These bits are available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
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

    /** @brief This bit is set and cleared by software. 0: DAC channel2 DMA mode disabled 1: DAC channel2 DMA mode enabled Note: This bit is available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_CR_DMAEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 DMA mode disabled (value: 0)
     *          - B_0x1: DAC channel2 DMA mode enabled (value: 1)
     */
        /** @brief DAC channel2 DMA mode disabled */
    constexpr std::uint32_t DAC_CR_DMAEN2_B_0x0 = 0;
        /** @brief DAC channel2 DMA mode enabled */
    constexpr std::uint32_t DAC_CR_DMAEN2_B_0x1 = 1;

    /** @brief This bit is set and cleared by software. 0: DAC channel2 DMA underrun interrupt disabled 1: DAC channel2 DMA underrun interrupt enabled Note: This bit is available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_CR_DMAUDRIE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 DMA underrun interrupt disabled (value: 0)
     *          - B_0x1: DAC channel2 DMA underrun interrupt enabled (value: 1)
     */
        /** @brief DAC channel2 DMA underrun interrupt disabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE2_B_0x0 = 0;
        /** @brief DAC channel2 DMA underrun interrupt enabled */
    constexpr std::uint32_t DAC_CR_DMAUDRIE2_B_0x1 = 1;

    /** @brief This bit is set and cleared by software to enable/disable DAC channel2 calibration, it can be written only if EN2 bit is set to 0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored. 0: DAC channel2 in Normal operating mode 1: DAC channel2 in calibration mode Note: This bit is available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
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
    /** @brief This bit is set by software to trigger the DAC in software trigger mode. 0: No trigger 1: Trigger Note: This bit is cleared by hardware (one dac_pclk clock cycle later) once the DAC_DHR1 register value has been loaded into the DAC_DOR1 register. */
    using DAC_SWTRGR_SWTRIG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger (value: 0)
     *          - B_0x1: Trigger (value: 1)
     */
        /** @brief No trigger */
    constexpr std::uint32_t DAC_SWTRGR_SWTRIG1_B_0x0 = 0;
        /** @brief Trigger */
    constexpr std::uint32_t DAC_SWTRGR_SWTRIG1_B_0x1 = 1;

    /** @brief This bit is set by software to trigger the DAC in software trigger mode. 0: No trigger 1: Trigger Note: This bit is cleared by hardware (one dac_pclk clock cycle later) once the DAC_DHR2 register value has been loaded into the DAC_DOR2 register. Note: This bit is available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
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
    /** @brief These bits are written by software. They specify 12-bit data for DAC channel1. */
    using DAC_DHR12R1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software. They specify 12-bit data for DAC channel1 when the DAC operates in Double data mode. */
    using DAC_DHR12R1_DACC1DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left aligned data holding register */
    using DAC_DHR12L1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software. They specify 12-bit data for DAC channel1. */
    using DAC_DHR12L1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software. They specify 12-bit data for DAC channel1 when the DAC operates in Double data mode. */
    using DAC_DHR12L1_DACC1DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right aligned data holding register */
    using DAC_DHR8R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software. They specify 8-bit data for DAC channel1. */
    using DAC_DHR8R1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software. They specify 8-bit data for DAC channel1 when the DAC operates in Double data mode. */
    using DAC_DHR8R1_DACC1DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right aligned data holding register */
    using DAC_DHR12R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software. They specify 12-bit data for DAC channel2. */
    using DAC_DHR12R2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software. They specify 12-bit data for DAC channel2 when the DAC operates in DMA Double data mode. */
    using DAC_DHR12R2_DACC2DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left aligned data holding register */
    using DAC_DHR12L2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software which specify 12-bit data for DAC channel2. */
    using DAC_DHR12L2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software. They specify 12-bit data for DAC channel2 when the DAC operates in Double data mode. */
    using DAC_DHR12L2_DACC2DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data holding register */
    using DAC_DHR8R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software which specifies 8-bit data for DAC channel2. */
    using DAC_DHR8R2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software. They specify 8-bit data for DAC channel2 when the DAC operates in Double data mode. */
    using DAC_DHR8R2_DACC2DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual DAC 12-bit right-aligned data holding register */
    using DAC_DHR12RD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software which specifies 12-bit data for DAC channel1. */
    using DAC_DHR12RD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software which specifies 12-bit data for DAC channel2. */
    using DAC_DHR12RD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual DAC 12-bit left aligned data holding register */
    using DAC_DHR12LD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software which specifies 12-bit data for DAC channel1. */
    using DAC_DHR12LD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software which specifies 12-bit data for DAC channel2. */
    using DAC_DHR12LD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual DAC 8-bit right aligned data holding register */
    using DAC_DHR8RD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software which specifies 8-bit data for DAC channel1. */
    using DAC_DHR8RD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are written by software which specifies 8-bit data for DAC channel2. */
    using DAC_DHR8RD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output register */
    using DAC_DOR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are read-only, they contain data output for DAC channel1. */
    using DAC_DOR1_DACC1DOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are read-only. They contain data output for DAC channel1. */
    using DAC_DOR1_DACC1DORB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 data output register */
    using DAC_DOR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are read-only, they contain data output for DAC channel2. */
    using DAC_DOR2_DACC2DOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are read-only. They contain data output for DAC channel2. */
    using DAC_DOR2_DACC2DORB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC status register */
    using DAC_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is set and cleared by hardware. 0: DAC channel1 is not yet ready to accept the trigger nor output data 1: DAC channel1 is ready to accept the trigger or output data */
    using DAC_SR_DAC1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 is not yet ready to accept the trigger nor output data (value: 0)
     *          - B_0x1: DAC channel1 is ready to accept the trigger or output data (value: 1)
     */
        /** @brief DAC channel1 is not yet ready to accept the trigger nor output data */
    constexpr std::uint32_t DAC_SR_DAC1RDY_B_0x0 = 0;
        /** @brief DAC channel1 is ready to accept the trigger or output data */
    constexpr std::uint32_t DAC_SR_DAC1RDY_B_0x1 = 1;

    /** @brief This bit is set and cleared by hardware. It is applicable only when the DAC operates in Double data mode. 0: DOR[11:0] is used actual DAC output 1: DORB[11:0] is used actual DAC output */
    using DAC_SR_DORSTAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOR[11:0] is used actual DAC output (value: 0)
     *          - B_0x1: DORB[11:0] is used actual DAC output (value: 1)
     */
        /** @brief DOR[11:0] is used actual DAC output */
    constexpr std::uint32_t DAC_SR_DORSTAT1_B_0x0 = 0;
        /** @brief DORB[11:0] is used actual DAC output */
    constexpr std::uint32_t DAC_SR_DORSTAT1_B_0x1 = 1;

    /** @brief This bit is set by hardware and cleared by software (by writing it to 1). 0: No DMA underrun error condition occurred for DAC channel1 1: DMA underrun error condition occurred for DAC channel1 (the currently selected trigger is driving DAC channel1 conversion at a frequency higher than the DMA service capability rate) */
    using DAC_SR_DMAUDR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No DMA underrun error condition occurred for DAC channel1 (value: 0)
     *          - B_0x1: DMA underrun error condition occurred for DAC channel1 (the currently selected trigger is driving DAC channel1 conversion at a frequency higher than the DMA service capability rate) (value: 1)
     */
        /** @brief No DMA underrun error condition occurred for DAC channel1 */
    constexpr std::uint32_t DAC_SR_DMAUDR1_B_0x0 = 0;
        /** @brief DMA underrun error condition occurred for DAC channel1 (the currently selected trigger is driving DAC channel1 conversion at a frequency higher than the DMA service capability rate) */
    constexpr std::uint32_t DAC_SR_DMAUDR1_B_0x1 = 1;

    /** @brief None 0: calibration trimming value is lower than the offset correction value 1: calibration trimming value is equal or greater than the offset correction value */
    using DAC_SR_CAL_FLAG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: calibration trimming value is lower than the offset correction value (value: 0)
     *          - B_0x1: calibration trimming value is equal or greater than the offset correction value (value: 1)
     */
        /** @brief calibration trimming value is lower than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG1_B_0x0 = 0;
        /** @brief calibration trimming value is equal or greater than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG1_B_0x1 = 1;

    /** @brief None 0: There is no write operation of DAC_SHSR1 ongoing: DAC_SHSR1 can be written 1: There is a write operation of DAC_SHSR1 ongoing: DAC_SHSR1 cannot be written */
    using DAC_SR_BWST1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: There is no write operation of DAC_SHSR1 ongoing: DAC_SHSR1 can be written (value: 0)
     *          - B_0x1: There is a write operation of DAC_SHSR1 ongoing: DAC_SHSR1 cannot be written (value: 1)
     */
        /** @brief There is no write operation of DAC_SHSR1 ongoing: DAC_SHSR1 can be written */
    constexpr std::uint32_t DAC_SR_BWST1_B_0x0 = 0;
        /** @brief There is a write operation of DAC_SHSR1 ongoing: DAC_SHSR1 cannot be written */
    constexpr std::uint32_t DAC_SR_BWST1_B_0x1 = 1;

    /** @brief This bit is set and cleared by hardware. 0: DAC channel2 is not yet ready to accept the trigger nor output data 1: DAC channel2 is ready to accept the trigger or output data Note: This bit is available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_SR_DAC2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 is not yet ready to accept the trigger nor output data (value: 0)
     *          - B_0x1: DAC channel2 is ready to accept the trigger or output data (value: 1)
     */
        /** @brief DAC channel2 is not yet ready to accept the trigger nor output data */
    constexpr std::uint32_t DAC_SR_DAC2RDY_B_0x0 = 0;
        /** @brief DAC channel2 is ready to accept the trigger or output data */
    constexpr std::uint32_t DAC_SR_DAC2RDY_B_0x1 = 1;

    /** @brief This bit is set and cleared by hardware. It is applicable only when the DAC operates in Double data mode. 0: DOR[11:0] is used actual DAC output 1: DORB[11:0] is used actual DAC outputSection Note: This bit is available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_SR_DORSTAT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOR[11:0] is used actual DAC output (value: 0)
     *          - B_0x1: DORB[11:0] is used actual DAC outputSection (value: 1)
     */
        /** @brief DOR[11:0] is used actual DAC output */
    constexpr std::uint32_t DAC_SR_DORSTAT2_B_0x0 = 0;
        /** @brief DORB[11:0] is used actual DAC outputSection */
    constexpr std::uint32_t DAC_SR_DORSTAT2_B_0x1 = 1;

    /** @brief This bit is set by hardware and cleared by software (by writing it to 1). 0: No DMA underrun error condition occurred for DAC channel21: DMA underrun error condition occurred for DAC channel2 (the currently selected trigger is driving DAC channel2 conversion at a frequency higher than the DMA service capability rate). Note: This bit is available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_SR_DMAUDR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No DMA underrun error condition occurred for DAC channel21: DMA underrun error condition occurred for DAC channel2 (the currently selected trigger is driving DAC channel2 conversion at a frequency higher than the DMA service capability rate). (value: 0)
     */
        /** @brief No DMA underrun error condition occurred for DAC channel21: DMA underrun error condition occurred for DAC channel2 (the currently selected trigger is driving DAC channel2 conversion at a frequency higher than the DMA service capability rate). */
    constexpr std::uint32_t DAC_SR_DMAUDR2_B_0x0 = 0;

    /** @brief This bit is set and cleared by hardware 0: calibration trimming value is lower than the offset correction value 1: calibration trimming value is equal or greater than the offset correction value Note: This bit is available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_SR_CAL_FLAG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: calibration trimming value is lower than the offset correction value (value: 0)
     *          - B_0x1: calibration trimming value is equal or greater than the offset correction value (value: 1)
     */
        /** @brief calibration trimming value is lower than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG2_B_0x0 = 0;
        /** @brief calibration trimming value is equal or greater than the offset correction value */
    constexpr std::uint32_t DAC_SR_CAL_FLAG2_B_0x1 = 1;

    /** @brief This bit is systematically set just after Sample and hold mode enable. It is set each time the software writes the register DAC_SHSR2, It is cleared by hardware when the write operation of DAC_SHSR2 is complete. (It takes about 3 LSI/LSE periods of synchronization). 0: There is no write operation of DAC_SHSR2 ongoing: DAC_SHSR2 can be written 1: There is a write operation of DAC_SHSR2 ongoing: DAC_SHSR2 cannot be written Note: This bit is available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
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
    /** @brief None */
    using DAC_CCR_OTRIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_CCR_OTRIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC mode control register */
    using DAC_MCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN1 = 0 and bit CEN1 = 0 in the DAC_CR register). If EN1 = 1 or CEN1 = 1 the write operation is ignored. They can be set and cleared by software to select the DAC channel1 mode. 000: DAC channel1 in Normal mode is connected to external pin with Buffer enabled 001: DAC channel1 in Normal mode is connected to external pin and to on chip peripherals with buffer enabled 010: DAC channel1 in Normal mode is connected to external pin with buffer disabled 011: DAC channel1 in Normal mode is connected to on chip peripherals with Buffer disabled 100: DAC channel1 in Sample and hold mode is connected to external pin with Buffer enabled 101: DAC channel1 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer enabled 110: DAC channel1 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer disabled 111: DAC channel1 in Sample and hold mode is connected to on chip peripherals with Buffer disabled Note: This register can be modified only when EN1 = 0. */
    using DAC_MCR_MODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel1 in Normal mode is connected to external pin with Buffer enabled (value: 0)
     *          - B_0x1: DAC channel1 in Normal mode is connected to external pin and to on chip peripherals with buffer enabled (value: 1)
     *          - B_0x2: DAC channel1 in Normal mode is connected to external pin with buffer disabled (value: 2)
     *          - B_0x3: DAC channel1 in Normal mode is connected to on chip peripherals with Buffer disabled (value: 3)
     *          - B_0x4: DAC channel1 in Sample and hold mode is connected to external pin with Buffer enabled (value: 4)
     *          - B_0x5: DAC channel1 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer enabled (value: 5)
     *          - B_0x6: DAC channel1 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer disabled (value: 6)
     *          - B_0x7: DAC channel1 in Sample and hold mode is connected to on chip peripherals with Buffer disabled (value: 7)
     */
        /** @brief DAC channel1 in Normal mode is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x0 = 0;
        /** @brief DAC channel1 in Normal mode is connected to external pin and to on chip peripherals with buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x1 = 1;
        /** @brief DAC channel1 in Normal mode is connected to external pin with buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x2 = 2;
        /** @brief DAC channel1 in Normal mode is connected to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x3 = 3;
        /** @brief DAC channel1 in Sample and hold mode is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x4 = 4;
        /** @brief DAC channel1 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x5 = 5;
        /** @brief DAC channel1 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x6 = 6;
        /** @brief DAC channel1 in Sample and hold mode is connected to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE1_B_0x7 = 7;

    /** @brief This bit is set and cleared by software. 0: DMA Normal mode selected 1: DMA Double data mode selected */
    using DAC_MCR_DMADOUBLE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA Normal mode selected (value: 0)
     *          - B_0x1: DMA Double data mode selected (value: 1)
     */
        /** @brief DMA Normal mode selected */
    constexpr std::uint32_t DAC_MCR_DMADOUBLE1_B_0x0 = 0;
        /** @brief DMA Double data mode selected */
    constexpr std::uint32_t DAC_MCR_DMADOUBLE1_B_0x1 = 1;

    /** @brief This bit is set and cleared by software. 0: Input data is in unsigned format 1: Input data is in signed format (2's complement). The MSB bit represents the sign. */
    using DAC_MCR_SINFORMAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input data is in unsigned format (value: 0)
     *          - B_0x1: Input data is in signed format (2's complement). The MSB bit represents the sign. (value: 1)
     */
        /** @brief Input data is in unsigned format */
    constexpr std::uint32_t DAC_MCR_SINFORMAT1_B_0x0 = 0;
        /** @brief Input data is in signed format (2's complement). The MSB bit represents the sign. */
    constexpr std::uint32_t DAC_MCR_SINFORMAT1_B_0x1 = 1;

    /** @brief None 00: High frequency interface mode disabled 01: High frequency interface mode compatible to AHB greater or equal 48 MHz enabled 10: Reserved 11: Reserved */
    using DAC_MCR_HFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High frequency interface mode disabled (value: 0)
     *          - B_0x1: High frequency interface mode compatible to AHB greater or equal 48 MHz enabled (value: 1)
     */
        /** @brief High frequency interface mode disabled */
    constexpr std::uint32_t DAC_MCR_HFSEL_B_0x0 = 0;
        /** @brief High frequency interface mode compatible to AHB greater or equal 48 MHz enabled */
    constexpr std::uint32_t DAC_MCR_HFSEL_B_0x1 = 1;

    /** @brief These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN2 = 0 and bit CEN2 = 0 in the DAC_CR register). If EN2 = 1 or CEN2 = 1 the write operation is ignored. They can be set and cleared by software to select the DAC channel2 mode. 000: DAC channel2 in Normal mode is connected to external pin with Buffer enabled 001: DAC channel2 in Normal mode is connected to external pin and to on chip peripherals with buffer enabled 010: DAC channel2 in Normal mode is connected to external pin with buffer disabled 011: DAC channel2 in Normal mode is connected to on chip peripherals with Buffer disabled 100: DAC channel2 in Sample and hold mode is connected to external pin with Buffer enabled 101: DAC channel2 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer enabled 110: DAC channel2 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer disabled 111: DAC channel2 in Sample and hold mode is connected to on chip peripherals with Buffer disabled Note: This register can be modified only when EN2 = 0. Note: Refer to less than xe1 [Implementation]/> for the availability of DAC channel2. */
    using DAC_MCR_MODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC channel2 in Normal mode is connected to external pin with Buffer enabled (value: 0)
     *          - B_0x1: DAC channel2 in Normal mode is connected to external pin and to on chip peripherals with buffer enabled (value: 1)
     *          - B_0x2: DAC channel2 in Normal mode is connected to external pin with buffer disabled (value: 2)
     *          - B_0x3: DAC channel2 in Normal mode is connected to on chip peripherals with Buffer disabled (value: 3)
     *          - B_0x4: DAC channel2 in Sample and hold mode is connected to external pin with Buffer enabled (value: 4)
     *          - B_0x5: DAC channel2 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer enabled (value: 5)
     *          - B_0x6: DAC channel2 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer disabled (value: 6)
     *          - B_0x7: DAC channel2 in Sample and hold mode is connected to on chip peripherals with Buffer disabled (value: 7)
     */
        /** @brief DAC channel2 in Normal mode is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x0 = 0;
        /** @brief DAC channel2 in Normal mode is connected to external pin and to on chip peripherals with buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x1 = 1;
        /** @brief DAC channel2 in Normal mode is connected to external pin with buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x2 = 2;
        /** @brief DAC channel2 in Normal mode is connected to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x3 = 3;
        /** @brief DAC channel2 in Sample and hold mode is connected to external pin with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x4 = 4;
        /** @brief DAC channel2 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer enabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x5 = 5;
        /** @brief DAC channel2 in Sample and hold mode is connected to external pin and to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x6 = 6;
        /** @brief DAC channel2 in Sample and hold mode is connected to on chip peripherals with Buffer disabled */
    constexpr std::uint32_t DAC_MCR_MODE2_B_0x7 = 7;

    /** @brief This bit is set and cleared by software. 0: DMA Normal mode selected 1: DMA Double data mode selected Note: This bit is available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_MCR_DMADOUBLE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA Normal mode selected (value: 0)
     *          - B_0x1: DMA Double data mode selected (value: 1)
     */
        /** @brief DMA Normal mode selected */
    constexpr std::uint32_t DAC_MCR_DMADOUBLE2_B_0x0 = 0;
        /** @brief DMA Double data mode selected */
    constexpr std::uint32_t DAC_MCR_DMADOUBLE2_B_0x1 = 1;

    /** @brief This bit is set and cleared by software. 0: Input data is in unsigned format 1: Input data is in signed format (2's complement). The MSB bit represents the sign. Note: This bit is available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_MCR_SINFORMAT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input data is in unsigned format (value: 0)
     *          - B_0x1: Input data is in signed format (2's complement). The MSB bit represents the sign. (value: 1)
     */
        /** @brief Input data is in unsigned format */
    constexpr std::uint32_t DAC_MCR_SINFORMAT2_B_0x0 = 0;
        /** @brief Input data is in signed format (2's complement). The MSB bit represents the sign. */
    constexpr std::uint32_t DAC_MCR_SINFORMAT2_B_0x1 = 1;

    /** @brief DAC channel1 sample and hold sample time register */
    using DAC_SHSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits can be written when the DAC channel1 is disabled or also during normal operation. in the latter case, the write can be done only when BWST1 of DAC_SR register is low, If BWST1 = 1, the write operation is ignored. */
    using DAC_SHSR1_TSAMPLE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 sample and hold sample time register */
    using DAC_SHSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits can be written when the DAC channel2 is disabled or also during normal operation. */
    using DAC_SHSR2_TSAMPLE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC sample and hold time register */
    using DAC_SHHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hold time = (THOLD[9:0]) x LSI/LSE clock period Note: This register can be modified only when EN1 = 0. */
    using DAC_SHHR_THOLD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hold time = (THOLD[9:0]) x LSI/LSE clock period Note: This register can be modified only when EN2 = 0. Note: These bits are available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_SHHR_THOLD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC sample and hold refresh time register */
    using DAC_SHRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Refresh time = (TREFRESH[7:0]) x LSI / LSE clock period Note: This register can be modified only when EN1 = 0. */
    using DAC_SHRR_TREFRESH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Refresh time = (TREFRESH[7:0]) x LSI / LSE clock period Note: This register can be modified only when EN2 = 0. Note: These bits are available only on dual-channel DACs. Refer to less than xe1 [Implementation]/>. */
    using DAC_SHRR_TREFRESH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Autonomous mode control register */
    using DAC_AUTOCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is set and cleared by software. 0: DAC Autonomous mode disabled 1: DAC Autonomous mode enabled */
    using DAC_AUTOCR_AUTOMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DAC Autonomous mode disabled (value: 0)
     *          - B_0x1: DAC Autonomous mode enabled (value: 1)
     */
        /** @brief DAC Autonomous mode disabled */
    constexpr std::uint32_t DAC_AUTOCR_AUTOMODE_B_0x0 = 0;
        /** @brief DAC Autonomous mode enabled */
    constexpr std::uint32_t DAC_AUTOCR_AUTOMODE_B_0x1 = 1;

}

#endif
