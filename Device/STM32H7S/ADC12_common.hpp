/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_ADC12_COMMON_HPP
#define EMBEDDED_PP_STM32H7S_ADC12_COMMON_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief master and slave ADC common */
namespace STM32H7S::ADC12_common {

    /** @brief ADC common status register */
    using ADC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master ADC ready This bit is a copy of the ADRDY bit in the corresponding ADC_ISR register. */
    using ADC_CSR_ADRDY_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Sampling phase flag of the master ADC This bit is a copy of the EOSMP bit in the corresponding ADC_ISR register. */
    using ADC_CSR_EOSMP_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion of the master ADC This bit is a copy of the EOC bit in the corresponding ADC_ISR register. */
    using ADC_CSR_EOC_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular sequence flag of the master ADC This bit is a copy of the EOS bit in the corresponding ADC_ISR register. */
    using ADC_CSR_EOS_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun flag of the master ADC This bit is a copy of the OVR bit in the corresponding ADC_ISR register. */
    using ADC_CSR_OVR_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag of the master ADC This bit is a copy of the JEOC bit in the corresponding ADC_ISR register. */
    using ADC_CSR_JEOC_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected sequence flag of the master ADC This bit is a copy of the JEOS bit in the corresponding ADC_ISR register. */
    using ADC_CSR_JEOS_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 flag of the master ADC This bit is a copy of the AWD1 bit in the corresponding ADC_ISR register. */
    using ADC_CSR_AWD1_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 flag of the master ADC This bit is a copy of the AWD2 bit in the corresponding ADC_ISR register. */
    using ADC_CSR_AWD2_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 flag of the master ADC This bit is a copy of the AWD3 bit in the corresponding ADC_ISR register. */
    using ADC_CSR_AWD3_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected Context Queue Overflow flag of the master ADC This bit is a copy of the JQOVF bit in the corresponding ADC_ISR register. */
    using ADC_CSR_JQOVF_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave ADC ready This bit is a copy of the ADRDY bit in the corresponding ADC_ISR register. */
    using ADC_CSR_ADRDY_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Sampling phase flag of the slave ADC This bit is a copy of the EOSMP2 bit in the corresponding ADC_ISR register. */
    using ADC_CSR_EOSMP_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion of the slave ADC This bit is a copy of the EOC bit in the corresponding ADC_ISR register. */
    using ADC_CSR_EOC_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular sequence flag of the slave ADC. This bit is a copy of the EOS bit in the corresponding ADC_ISR register. */
    using ADC_CSR_EOS_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun flag of the slave ADC This bit is a copy of the OVR bit in the corresponding ADC_ISR register. */
    using ADC_CSR_OVR_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag of the slave ADC This bit is a copy of the JEOC bit in the corresponding ADC_ISR register. */
    using ADC_CSR_JEOC_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected sequence flag of the slave ADC This bit is a copy of the JEOS bit in the corresponding ADC_ISR register. */
    using ADC_CSR_JEOS_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 flag of the slave ADC This bit is a copy of the AWD1 bit in the corresponding ADC_ISR register. */
    using ADC_CSR_AWD1_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 flag of the slave ADC This bit is a copy of the AWD2 bit in the corresponding ADC_ISR register. */
    using ADC_CSR_AWD2_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 flag of the slave ADC This bit is a copy of the AWD3 bit in the corresponding ADC_ISR register. */
    using ADC_CSR_AWD3_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected Context Queue Overflow flag of the slave ADC This bit is a copy of the JQOVF bit in the corresponding ADC_ISR register. */
    using ADC_CSR_JQOVF_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC common control register */
    using ADC_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual ADC mode selection These bits are written by software to select the operating mode. 00000 corresponds to Independent mode. Values 00001 to 01001 correspond to Dual mode, master and slave ADCs working together. Others: Reserved, must not be used Note: The software is allowed to write these bits only when the ADCs are disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0). */
    using ADC_CCR_DUAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent mode (value: 0)
     *          - B_0x1: Combined regular simultaneous + injected simultaneous mode (value: 1)
     *          - B_0x2: Combined regular simultaneous + alternate trigger mode (value: 2)
     *          - B_0x3: Combined Interleaved mode + injected simultaneous mode (value: 3)
     *          - B_0x4: FIELD Reserved (value: 4)
     *          - B_0x5: Injected simultaneous mode only (value: 5)
     *          - B_0x6: Regular simultaneous mode only (value: 6)
     *          - B_0x7: Interleaved mode only (value: 7)
     *          - B_0x9: Alternate trigger mode only (value: 9)
     */
        /** @brief Independent mode */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x0 = 0;
        /** @brief Combined regular simultaneous + injected simultaneous mode */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x1 = 1;
        /** @brief Combined regular simultaneous + alternate trigger mode */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x2 = 2;
        /** @brief Combined Interleaved mode + injected simultaneous mode */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x3 = 3;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x4 = 4;
        /** @brief Injected simultaneous mode only */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x5 = 5;
        /** @brief Regular simultaneous mode only */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x6 = 6;
        /** @brief Interleaved mode only */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x7 = 7;
        /** @brief Alternate trigger mode only */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x9 = 9;

    /** @brief Delay between 2 sampling phases These bits are set and cleared by software. These bits are used in dual interleaved modes. Refer to Table 198 for the value of ADC resolution versus DELAY bits values. Note: The software is allowed to write these bits only when the ADCs are disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0). */
    using ADC_CCR_DELAY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA configuration (for dual ADC mode) This bit is set and cleared by software to select between two DMA modes of operation and is effective only when DMAEN = 1. For more details, refer to Section : Managing conversions using the DMA Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing). */
    using ADC_CCR_DMACFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA One Shot mode selected (value: 0)
     *          - B_0x1: DMA Circular mode selected (value: 1)
     */
        /** @brief DMA One Shot mode selected */
    constexpr std::uint32_t ADC_CCR_DMACFG_B_0x0 = 0;
        /** @brief DMA Circular mode selected */
    constexpr std::uint32_t ADC_CCR_DMACFG_B_0x1 = 1;

    /** @brief Direct memory access mode for dual ADC mode This bitfield is set and cleared by software. Refer to the DMA controller section for more details. Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing). */
    using ADC_CCR_MDMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDMA mode disabled (value: 0)
     *          - B_0x1: FIELD Reserved (value: 1)
     *          - B_0x2: MDMA mode enabled for 12 and 10-bit resolution (value: 2)
     *          - B_0x3: MDMA mode enabled for 8 and 6-bit resolution (value: 3)
     */
        /** @brief MDMA mode disabled */
    constexpr std::uint32_t ADC_CCR_MDMA_B_0x0 = 0;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t ADC_CCR_MDMA_B_0x1 = 1;
        /** @brief MDMA mode enabled for 12 and 10-bit resolution */
    constexpr std::uint32_t ADC_CCR_MDMA_B_0x2 = 2;
        /** @brief MDMA mode enabled for 8 and 6-bit resolution */
    constexpr std::uint32_t ADC_CCR_MDMA_B_0x3 = 3;

    /** @brief ADC clock mode These bits are set and cleared by software to define the ADC clock scheme (which is common to both master and slave ADCs): In all synchronous clock modes, there is no jitter in the delay from a timer trigger to the start of a conversion. Note: The software is allowed to write these bits only when the ADCs are disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0). */
    using ADC_CCR_CKMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: adc_ker_ck (x = 1/2) (Asynchronous clock mode), generated at product level (refer to Section 6: Reset and clock control (RCC)) (value: 0)
     *          - B_0x1: adc_hclk/1 (Synchronous clock mode). This configuration must be enabled only if the AHB clock prescaler is set to 1 (HPRE[3:0] = 0XXX in RCC_CFGR register) and if the system clock has a 50% duty cycle. (value: 1)
     *          - B_0x2: adc_hclk/2 (Synchronous clock mode) (value: 2)
     *          - B_0x3: adc_hclk/4 (Synchronous clock mode) (value: 3)
     */
        /** @brief adc_ker_ck (x = 1/2) (Asynchronous clock mode), generated at product level (refer to Section 6: Reset and clock control (RCC)) */
    constexpr std::uint32_t ADC_CCR_CKMODE_B_0x0 = 0;
        /** @brief adc_hclk/1 (Synchronous clock mode). This configuration must be enabled only if the AHB clock prescaler is set to 1 (HPRE[3:0] = 0XXX in RCC_CFGR register) and if the system clock has a 50% duty cycle. */
    constexpr std::uint32_t ADC_CCR_CKMODE_B_0x1 = 1;
        /** @brief adc_hclk/2 (Synchronous clock mode) */
    constexpr std::uint32_t ADC_CCR_CKMODE_B_0x2 = 2;
        /** @brief adc_hclk/4 (Synchronous clock mode) */
    constexpr std::uint32_t ADC_CCR_CKMODE_B_0x3 = 3;

    /** @brief ADC prescaler These bits are set and cleared by software to select the frequency of the clock to the ADC. The clock is common for all the ADCs. other: reserved Note: The software is allowed to write these bits only when the ADC is disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0). The ADC prescaler value is applied only when CKMODE[1:0] = 0b00. */
    using ADC_CCR_PRESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: input ADC clock not divided (value: 0)
     *          - B_0x1: input ADC clock divided by 2 (value: 1)
     *          - B_0x2: input ADC clock divided by 4 (value: 2)
     *          - B_0x3: input ADC clock divided by 6 (value: 3)
     *          - B_0x4: input ADC clock divided by 8 (value: 4)
     *          - B_0x5: input ADC clock divided by 10 (value: 5)
     *          - B_0x6: input ADC clock divided by 12 (value: 6)
     *          - B_0x7: input ADC clock divided by 16 (value: 7)
     *          - B_0x8: input ADC clock divided by 32 (value: 8)
     *          - B_0x9: input ADC clock divided by 64 (value: 9)
     *          - B_0xA: input ADC clock divided by 128 (value: 10)
     *          - B_0xB: input ADC clock divided by 256 (value: 11)
     */
        /** @brief input ADC clock not divided */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0x0 = 0;
        /** @brief input ADC clock divided by 2 */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0x1 = 1;
        /** @brief input ADC clock divided by 4 */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0x2 = 2;
        /** @brief input ADC clock divided by 6 */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0x3 = 3;
        /** @brief input ADC clock divided by 8 */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0x4 = 4;
        /** @brief input ADC clock divided by 10 */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0x5 = 5;
        /** @brief input ADC clock divided by 12 */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0x6 = 6;
        /** @brief input ADC clock divided by 16 */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0x7 = 7;
        /** @brief input ADC clock divided by 32 */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0x8 = 8;
        /** @brief input ADC clock divided by 64 */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0x9 = 9;
        /** @brief input ADC clock divided by 128 */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0xA = 10;
        /** @brief input ADC clock divided by 256 */
    constexpr std::uint32_t ADC_CCR_PRESC_B_0xB = 11;

    /** @brief V<sub>REFINT</sub> enable This bit is set and cleared by software to enable/disable the V<sub>REFINT</sub> channel. */
    using ADC_CCR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>REFINT</sub> channel disabled (value: 0)
     *          - B_0x1: V<sub>REFINT</sub> channel enabled (value: 1)
     */
        /** @brief V<sub>REFINT</sub> channel disabled */
    constexpr std::uint32_t ADC_CCR_VREFEN_B_0x0 = 0;
        /** @brief V<sub>REFINT</sub> channel enabled */
    constexpr std::uint32_t ADC_CCR_VREFEN_B_0x1 = 1;

    /** @brief V<sub>SENSE</sub> enable This bit is set and cleared by software to control V<sub>SENSE</sub>. */
    using ADC_CCR_TSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature sensor channel disabled (value: 0)
     *          - B_0x1: Temperature sensor channel enabled (value: 1)
     */
        /** @brief Temperature sensor channel disabled */
    constexpr std::uint32_t ADC_CCR_TSEN_B_0x0 = 0;
        /** @brief Temperature sensor channel enabled */
    constexpr std::uint32_t ADC_CCR_TSEN_B_0x1 = 1;

    /** @brief VBAT enable This bit is set and cleared by software to control. */
    using ADC_CCR_VBATEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>BAT</sub> channel disabled (value: 0)
     *          - B_0x1: V<sub>BAT</sub> channel enabled (value: 1)
     */
        /** @brief V<sub>BAT</sub> channel disabled */
    constexpr std::uint32_t ADC_CCR_VBATEN_B_0x0 = 0;
        /** @brief V<sub>BAT</sub> channel enabled */
    constexpr std::uint32_t ADC_CCR_VBATEN_B_0x1 = 1;

    /** @brief ADC common regular data register for dual mode */
    using ADC_CDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the master ADC. In dual mode, these bits contain the regular data of the master ADC. Refer to Section 25.4.31: Dual ADC modes. The data alignment is applied as described in Section : Data register, data alignment and offset (ADC_DR, OFFSET, OFFSET_CH, ALIGN)) In MDMA = 0b11 mode, bits 15:8 contains SLV_ADC_DR[7:0], bits 7:0 contains MST_ADC_DR[7:0]. */
    using ADC_CDR_RDATA_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the slave ADC In dual mode, these bits contain the regular data of the slave ADC. Refer to Section 25.4.31: Dual ADC modes. The data alignment is applied as described in Section : Data register, data alignment and offset (ADC_DR, OFFSET, OFFSET_CH, ALIGN)) */
    using ADC_CDR_RDATA_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC hardware configuration register */
    using ADC_HWCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of ADCs implemented */
    using ADC_HWCFGR0_ADCNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: One ADC instance implemented (value: 1)
     *          - B_0x2: Two ADC instances implemented (value: 2)
     *          - B_0x3: Three ADCs instances implemented (value: 3)
     */
        /** @brief One ADC instance implemented */
    constexpr std::uint32_t ADC_HWCFGR0_ADCNUM_B_0x1 = 1;
        /** @brief Two ADC instances implemented */
    constexpr std::uint32_t ADC_HWCFGR0_ADCNUM_B_0x2 = 2;
        /** @brief Three ADCs instances implemented */
    constexpr std::uint32_t ADC_HWCFGR0_ADCNUM_B_0x3 = 3;

    /** @brief Number of pipeline stages */
    using ADC_HWCFGR0_MULPIPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: One-stage pipeline (value: 1)
     */
        /** @brief One-stage pipeline */
    constexpr std::uint32_t ADC_HWCFGR0_MULPIPE_B_0x1 = 1;

    /** @brief Number of option bits */
    using ADC_HWCFGR0_OPBITS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No option register implemented (value: 0)
     *          - B_0x1: 1 option bit implemented in the ADC option register (ADC_OR) at address offset 0xC8 (value: 1)
     */
        /** @brief No option register implemented */
    constexpr std::uint32_t ADC_HWCFGR0_OPBITS_B_0x0 = 0;
        /** @brief 1 option bit implemented in the ADC option register (ADC_OR) at address offset 0xC8 */
    constexpr std::uint32_t ADC_HWCFGR0_OPBITS_B_0x1 = 1;

    /** @brief Idle value for non-selected channels */
    using ADC_HWCFGR0_IDLEVALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dummy channel selection is 0x13 (value: 0)
     *          - B_0x1: Dummy channel selection is 0x1F (value: 1)
     */
        /** @brief Dummy channel selection is 0x13 */
    constexpr std::uint32_t ADC_HWCFGR0_IDLEVALUE_B_0x0 = 0;
        /** @brief Dummy channel selection is 0x1F */
    constexpr std::uint32_t ADC_HWCFGR0_IDLEVALUE_B_0x1 = 1;

    /** @brief ADC version register */
    using ADC_VERR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minor revision These bits returns the ADC IP minor revision */
    using ADC_VERR_MINREV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Major revision = X.1 (value: 1)
     */
        /** @brief Major revision = X.1 */
    constexpr std::uint32_t ADC_VERR_MINREV_B_0x1 = 1;

    /** @brief Major revision These bits returns the ADC IP major revision */
    using ADC_VERR_MAJREV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Major revision = 1.X (value: 1)
     */
        /** @brief Major revision = 1.X */
    constexpr std::uint32_t ADC_VERR_MAJREV_B_0x1 = 1;

    /** @brief ADC identification register */
    using ADC_IPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral identifier These bits returns the ADC identifier. ID[31:0] = 0x0011 0006: c7amba_aditf5_90_v1 */
    using ADC_IPDR_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC size identification register */
    using ADC_SIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Size Identification SID[31:8]: fixed code that characterizes the ADC_SIDR register. This field is always read at 0xA3C5DD. SID[7:0]: read-only numeric field that returns the address offset (in Kbytes) of the identification registers from the IP base address: */
    using ADC_SIDR_SID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x01: 1 Kbytes address offset (value: 1)
     *          - B_0x02: 2 Kbytes address offset (value: 2)
     *          - B_0x04: 4 Kbytes address offset (value: 4)
     *          - B_0x08: 8 Kbytes address offset (value: 8)
     */
        /** @brief 1 Kbytes address offset */
    constexpr std::uint32_t ADC_SIDR_SID_B_0x01 = 1;
        /** @brief 2 Kbytes address offset */
    constexpr std::uint32_t ADC_SIDR_SID_B_0x02 = 2;
        /** @brief 4 Kbytes address offset */
    constexpr std::uint32_t ADC_SIDR_SID_B_0x04 = 4;
        /** @brief 8 Kbytes address offset */
    constexpr std::uint32_t ADC_SIDR_SID_B_0x08 = 8;

}

#endif
