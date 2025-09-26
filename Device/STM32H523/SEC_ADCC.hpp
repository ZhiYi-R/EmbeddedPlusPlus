/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H523_SEC_ADCC_HPP
#define EMBEDDED_PP_STM32H523_SEC_ADCC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief ADC common registers block */
namespace STM32H523::SEC_ADCC {

    /** @brief ADC common status register */
    using ADC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master ADC ready */
    using ADC_CSR_ADRDY_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Sampling phase flag of the master ADC */
    using ADC_CSR_EOSMP_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion of the master ADC */
    using ADC_CSR_EOC_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular sequence flag of the master ADC */
    using ADC_CSR_EOS_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun flag of the master ADC */
    using ADC_CSR_OVR_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag of the master ADC */
    using ADC_CSR_JEOC_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected sequence flag of the master ADC */
    using ADC_CSR_JEOS_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 flag of the master ADC */
    using ADC_CSR_AWD1_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 flag of the master ADC */
    using ADC_CSR_AWD2_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 flag of the master ADC */
    using ADC_CSR_AWD3_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected Context Queue Overflow flag of the master ADC */
    using ADC_CSR_JQOVF_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave ADC ready */
    using ADC_CSR_ADRDY_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Sampling phase flag of the slave ADC */
    using ADC_CSR_EOSMP_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion of the slave ADC */
    using ADC_CSR_EOC_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular sequence flag of the slave ADC. */
    using ADC_CSR_EOS_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun flag of the slave ADC */
    using ADC_CSR_OVR_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag of the slave ADC */
    using ADC_CSR_JEOC_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected sequence flag of the slave ADC */
    using ADC_CSR_JEOS_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 flag of the slave ADC */
    using ADC_CSR_AWD1_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 flag of the slave ADC */
    using ADC_CSR_AWD2_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 flag of the slave ADC */
    using ADC_CSR_AWD3_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected Context Queue Overflow flag of the slave ADC */
    using ADC_CSR_JQOVF_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC common control register */
    using ADC_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual ADC mode selection */
    using ADC_CCR_DUAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent mode (value: 0)
     *          - B_0x1: Combined regular simultaneous + injected simultaneous mode (value: 1)
     *          - B_0x2: Combined regular simultaneous + alternate trigger mode (value: 2)
     *          - B_0x3: Combined interleaved mode + injected simultaneous mode (value: 3)
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
        /** @brief Combined interleaved mode + injected simultaneous mode */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x3 = 3;
        /** @brief Injected simultaneous mode only */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x5 = 5;
        /** @brief Regular simultaneous mode only */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x6 = 6;
        /** @brief Interleaved mode only */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x7 = 7;
        /** @brief Alternate trigger mode only */
    constexpr std::uint32_t ADC_CCR_DUAL_B_0x9 = 9;

    /** @brief Delay between 2 sampling phases */
    using ADC_CCR_DELAY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA configuration (for dual ADC mode) */
    using ADC_CCR_DMACFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA One Shot mode selected (value: 0)
     *          - B_0x1: DMA Circular mode selected (value: 1)
     */
        /** @brief DMA One Shot mode selected */
    constexpr std::uint32_t ADC_CCR_DMACFG_B_0x0 = 0;
        /** @brief DMA Circular mode selected */
    constexpr std::uint32_t ADC_CCR_DMACFG_B_0x1 = 1;

    /** @brief Direct memory access mode for dual ADC mode */
    using ADC_CCR_MDMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDMA mode disabled (value: 0)
     *          - B_0x2: MDMA mode enabled for 12 and 10-bit resolution (value: 2)
     *          - B_0x3: MDMA mode enabled for 8 and 6-bit resolution (value: 3)
     */
        /** @brief MDMA mode disabled */
    constexpr std::uint32_t ADC_CCR_MDMA_B_0x0 = 0;
        /** @brief MDMA mode enabled for 12 and 10-bit resolution */
    constexpr std::uint32_t ADC_CCR_MDMA_B_0x2 = 2;
        /** @brief MDMA mode enabled for 8 and 6-bit resolution */
    constexpr std::uint32_t ADC_CCR_MDMA_B_0x3 = 3;

    /** @brief ADC clock mode */
    using ADC_CCR_CKMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: adc_ker_ck (x = 1/2) (Asynchronous clock mode), generated at product level (refer to Section6: Reset and clock control (RCC)) (value: 0)
     *          - B_0x1: adc_hclk/1 (Synchronous clock mode). (value: 1)
     *          - B_0x2: adc_hclk/2 (Synchronous clock mode) (value: 2)
     *          - B_0x3: adc_hclk/4 (Synchronous clock mode) (value: 3)
     */
        /** @brief adc_ker_ck (x = 1/2) (Asynchronous clock mode), generated at product level (refer to Section6: Reset and clock control (RCC)) */
    constexpr std::uint32_t ADC_CCR_CKMODE_B_0x0 = 0;
        /** @brief adc_hclk/1 (Synchronous clock mode). */
    constexpr std::uint32_t ADC_CCR_CKMODE_B_0x1 = 1;
        /** @brief adc_hclk/2 (Synchronous clock mode) */
    constexpr std::uint32_t ADC_CCR_CKMODE_B_0x2 = 2;
        /** @brief adc_hclk/4 (Synchronous clock mode) */
    constexpr std::uint32_t ADC_CCR_CKMODE_B_0x3 = 3;

    /** @brief ADC prescaler */
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

    /** @brief Vless thansub>REFINTless than/sub> enable */
    using ADC_CCR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>REFINTless than/sub> channel disabled (value: 0)
     *          - B_0x1: Vless thansub>REFINTless than/sub> channel enabled (value: 1)
     */
        /** @brief Vless thansub>REFINTless than/sub> channel disabled */
    constexpr std::uint32_t ADC_CCR_VREFEN_B_0x0 = 0;
        /** @brief Vless thansub>REFINTless than/sub> channel enabled */
    constexpr std::uint32_t ADC_CCR_VREFEN_B_0x1 = 1;

    /** @brief Vless thansub>SENSEless than/sub> enable */
    using ADC_CCR_TSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature sensor channel disabled (value: 0)
     *          - B_0x1: Temperature sensor channel enabled (value: 1)
     */
        /** @brief Temperature sensor channel disabled */
    constexpr std::uint32_t ADC_CCR_TSEN_B_0x0 = 0;
        /** @brief Temperature sensor channel enabled */
    constexpr std::uint32_t ADC_CCR_TSEN_B_0x1 = 1;

    /** @brief VBAT enable */
    using ADC_CCR_VBATEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>BATless than/sub> channel disabled (value: 0)
     *          - B_0x1: Vless thansub>BATless than/sub> channel enabled (value: 1)
     */
        /** @brief Vless thansub>BATless than/sub> channel disabled */
    constexpr std::uint32_t ADC_CCR_VBATEN_B_0x0 = 0;
        /** @brief Vless thansub>BATless than/sub> channel enabled */
    constexpr std::uint32_t ADC_CCR_VBATEN_B_0x1 = 1;

    /** @brief ADC common regular data register for dual mode */
    using ADC_CDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the master ADC. */
    using ADC_CDR_RDATA_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the slave ADC */
    using ADC_CDR_RDATA_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC hardware configuration register */
    using ADC_HWCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    using ADC_VERR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minor revision */
    using ADC_VERR_MINREV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Minor revision = X. (value: 1)
     */
        /** @brief Minor revision = X. */
    constexpr std::uint32_t ADC_VERR_MINREV_B_0x1 = 1;

    /** @brief Major revision */
    using ADC_VERR_MAJREV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Major revision = 1. (value: 1)
     */
        /** @brief Major revision = 1. */
    constexpr std::uint32_t ADC_VERR_MAJREV_B_0x1 = 1;

    /** @brief ADC identification register */
    using ADC_IPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral identifier */
    using ADC_IPDR_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC size identification register */
    using ADC_SIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Size Identification */
    using ADC_SIDR_SID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x01: 1Kbytes address offset (value: 1)
     *          - B_0x02: 2Kbytes address offset (value: 2)
     *          - B_0x04: 4Kbytes address offset (value: 4)
     *          - B_0x08: 8 Kbytes address offset (value: 8)
     */
        /** @brief 1Kbytes address offset */
    constexpr std::uint32_t ADC_SIDR_SID_B_0x01 = 1;
        /** @brief 2Kbytes address offset */
    constexpr std::uint32_t ADC_SIDR_SID_B_0x02 = 2;
        /** @brief 4Kbytes address offset */
    constexpr std::uint32_t ADC_SIDR_SID_B_0x04 = 4;
        /** @brief 8 Kbytes address offset */
    constexpr std::uint32_t ADC_SIDR_SID_B_0x08 = 8;

}

#endif
