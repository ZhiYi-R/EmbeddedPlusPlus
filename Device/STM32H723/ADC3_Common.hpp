/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H723_ADC3_COMMON_HPP
#define EMBEDDED_PP_STM32H723_ADC3_COMMON_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Analog-to-Digital Converter */
namespace STM32H723::ADC3_Common {

    /** @brief ADC common status register */
    using ADC_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief ADC common control register */
    using ADC_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC clock mode These bits are set and cleared by software to define the ADC clock scheme (which is common to both master and slave ADCs): In all synchronous clock modes, there is no jitter in the delay from a timer trigger to the start of a conversion. Note: The software is allowed to write these bits only when the ADCs are disabled (ADCAL = 0, JADSTART = 0, ADSTART = 0, ADSTP = 0, ADDIS = 0 and ADEN = 0). */
    using ADC_CCR_CKMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: adc_ker_ck (x = 3) (Asynchronous clock mode), generated at product level (refer to Section 6: Reset and clock control (RCC)) (value: 0)
     *          - B_0x1: adc_hclk/1 (Synchronous clock mode). This configuration must be enabled only if the AHB clock prescaler is set to 1 (HPRE[3:0] = 0XXX in RCC_CFGR register) and if the system clock has a 50% duty cycle. (value: 1)
     *          - B_0x2: adc_hclk/2 (Synchronous clock mode) (value: 2)
     *          - B_0x3: adc_hclk/4 (Synchronous clock mode) (value: 3)
     */
        /** @brief adc_ker_ck (x = 3) (Asynchronous clock mode), generated at product level (refer to Section 6: Reset and clock control (RCC)) */
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

    /** @brief VREFINT enable This bit is set and cleared by software to enable/disable the VREFINT channel. */
    using ADC_CCR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFINT channel disabled (value: 0)
     *          - B_0x1: VREFINT channel enabled (value: 1)
     */
        /** @brief VREFINT channel disabled */
    constexpr std::uint32_t ADC_CCR_VREFEN_B_0x0 = 0;
        /** @brief VREFINT channel enabled */
    constexpr std::uint32_t ADC_CCR_VREFEN_B_0x1 = 1;

    /** @brief VSENSE enable This bit is set and cleared by software to control VSENSE. */
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
     *          - B_0x0: VBAT channel disabled (value: 0)
     *          - B_0x1: VBAT channel enabled (value: 1)
     */
        /** @brief VBAT channel disabled */
    constexpr std::uint32_t ADC_CCR_VBATEN_B_0x0 = 0;
        /** @brief VBAT channel enabled */
    constexpr std::uint32_t ADC_CCR_VBATEN_B_0x1 = 1;

    /** @brief ADC common regular data register for dual 			 and triple modes */
    using ADC_CDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the slave 				 ADC */
    using ADC_CDR_RDATA_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the master 				 ADC */
    using ADC_CDR_RDATA_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC x common regular data register for 			 32-bit dual mode */
    using ADC_CDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the master/slave 				 alternated ADCs */
    using ADC_CDR2_RDATA_ALT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
