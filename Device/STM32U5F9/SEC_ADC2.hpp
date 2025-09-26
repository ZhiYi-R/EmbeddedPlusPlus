/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U5F9_SEC_ADC2_HPP
#define EMBEDDED_PP_STM32U5F9_SEC_ADC2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief ADC1 */
namespace STM32U5F9::SEC_ADC2 {

    /** @brief ADC interrupt and status register */
    using ADC_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC ready */
    using ADC_ISR_ADRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC not yet ready to start conversion (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: ADC is ready to start conversion (value: 1)
     */
        /** @brief ADC not yet ready to start conversion (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_ADRDY_B_0x0 = 0;
        /** @brief ADC is ready to start conversion */
    constexpr std::uint32_t ADC_ISR_ADRDY_B_0x1 = 1;

    /** @brief End of sampling flag */
    using ADC_ISR_EOSMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: not at the end of the sampling phase (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: End of sampling phase reached (value: 1)
     */
        /** @brief not at the end of the sampling phase (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_EOSMP_B_0x0 = 0;
        /** @brief End of sampling phase reached */
    constexpr std::uint32_t ADC_ISR_EOSMP_B_0x1 = 1;

    /** @brief End of conversion flag */
    using ADC_ISR_EOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular channel conversion not complete (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Regular channel conversion complete (value: 1)
     */
        /** @brief Regular channel conversion not complete (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_EOC_B_0x0 = 0;
        /** @brief Regular channel conversion complete */
    constexpr std::uint32_t ADC_ISR_EOC_B_0x1 = 1;

    /** @brief End of regular sequence flag */
    using ADC_ISR_EOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular Conversions sequence not complete (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Regular Conversions sequence complete (value: 1)
     */
        /** @brief Regular Conversions sequence not complete (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_EOS_B_0x0 = 0;
        /** @brief Regular Conversions sequence complete */
    constexpr std::uint32_t ADC_ISR_EOS_B_0x1 = 1;

    /** @brief ADC overrun */
    using ADC_ISR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Overrun has occurred (value: 1)
     */
        /** @brief No overrun occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_OVR_B_0x0 = 0;
        /** @brief Overrun has occurred */
    constexpr std::uint32_t ADC_ISR_OVR_B_0x1 = 1;

    /** @brief Injected channel end of conversion flag */
    using ADC_ISR_JEOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected channel conversion not complete (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Injected channel conversion complete (value: 1)
     */
        /** @brief Injected channel conversion not complete (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_JEOC_B_0x0 = 0;
        /** @brief Injected channel conversion complete */
    constexpr std::uint32_t ADC_ISR_JEOC_B_0x1 = 1;

    /** @brief Injected channel end of sequence flag */
    using ADC_ISR_JEOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected conversion sequence not complete (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Injected conversions complete (value: 1)
     */
        /** @brief Injected conversion sequence not complete (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_JEOS_B_0x0 = 0;
        /** @brief Injected conversions complete */
    constexpr std::uint32_t ADC_ISR_JEOS_B_0x1 = 1;

    /** @brief Analog watchdog 1 flag */
    using ADC_ISR_AWD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No analog watchdog 1 event occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Analog watchdog 1 event occurred (value: 1)
     */
        /** @brief No analog watchdog 1 event occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_AWD1_B_0x0 = 0;
        /** @brief Analog watchdog 1 event occurred */
    constexpr std::uint32_t ADC_ISR_AWD1_B_0x1 = 1;

    /** @brief Analog watchdog 2 flag */
    using ADC_ISR_AWD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No analog watchdog 2 event occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Analog watchdog 2 event occurred (value: 1)
     */
        /** @brief No analog watchdog 2 event occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_AWD2_B_0x0 = 0;
        /** @brief Analog watchdog 2 event occurred */
    constexpr std::uint32_t ADC_ISR_AWD2_B_0x1 = 1;

    /** @brief Analog watchdog 3 flag */
    using ADC_ISR_AWD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No analog watchdog 3 event occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Analog watchdog 3 event occurred (value: 1)
     */
        /** @brief No analog watchdog 3 event occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_AWD3_B_0x0 = 0;
        /** @brief Analog watchdog 3 event occurred */
    constexpr std::uint32_t ADC_ISR_AWD3_B_0x1 = 1;

    /** @brief ADC voltage regulator ready */
    using ADC_ISR_LDORDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC voltage regulator disabled (value: 0)
     *          - B_0x1: ADC voltage regulator enabled (value: 1)
     */
        /** @brief ADC voltage regulator disabled */
    constexpr std::uint32_t ADC_ISR_LDORDY_B_0x0 = 0;
        /** @brief ADC voltage regulator enabled */
    constexpr std::uint32_t ADC_ISR_LDORDY_B_0x1 = 1;

    /** @brief ADC interrupt enable register */
    using ADC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC ready interrupt enable */
    using ADC_IER_ADRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADRDY interrupt disabled (value: 0)
     *          - B_0x1: ADRDY interrupt enabled. An interrupt is generated when the ADRDY bit is set. (value: 1)
     */
        /** @brief ADRDY interrupt disabled */
    constexpr std::uint32_t ADC_IER_ADRDYIE_B_0x0 = 0;
        /** @brief ADRDY interrupt enabled. An interrupt is generated when the ADRDY bit is set. */
    constexpr std::uint32_t ADC_IER_ADRDYIE_B_0x1 = 1;

    /** @brief End of sampling flag interrupt enable for regular conversions */
    using ADC_IER_EOSMPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOSMP interrupt disabled. (value: 0)
     *          - B_0x1: EOSMP interrupt enabled. An interrupt is generated when the EOSMP bit is set. (value: 1)
     */
        /** @brief EOSMP interrupt disabled. */
    constexpr std::uint32_t ADC_IER_EOSMPIE_B_0x0 = 0;
        /** @brief EOSMP interrupt enabled. An interrupt is generated when the EOSMP bit is set. */
    constexpr std::uint32_t ADC_IER_EOSMPIE_B_0x1 = 1;

    /** @brief End of regular conversion interrupt enable */
    using ADC_IER_EOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOC interrupt disabled. (value: 0)
     *          - B_0x1: EOC interrupt enabled. An interrupt is generated when the EOC bit is set. (value: 1)
     */
        /** @brief EOC interrupt disabled. */
    constexpr std::uint32_t ADC_IER_EOCIE_B_0x0 = 0;
        /** @brief EOC interrupt enabled. An interrupt is generated when the EOC bit is set. */
    constexpr std::uint32_t ADC_IER_EOCIE_B_0x1 = 1;

    /** @brief End of regular sequence of conversions interrupt enable */
    using ADC_IER_EOSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOS interrupt disabled (value: 0)
     *          - B_0x1: EOS interrupt enabled. An interrupt is generated when the EOS bit is set. (value: 1)
     */
        /** @brief EOS interrupt disabled */
    constexpr std::uint32_t ADC_IER_EOSIE_B_0x0 = 0;
        /** @brief EOS interrupt enabled. An interrupt is generated when the EOS bit is set. */
    constexpr std::uint32_t ADC_IER_EOSIE_B_0x1 = 1;

    /** @brief Overrun interrupt enable */
    using ADC_IER_OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Overrun interrupt disabled (value: 0)
     *          - B_0x1: Overrun interrupt enabled. An interrupt is generated when the OVR bit is set. (value: 1)
     */
        /** @brief Overrun interrupt disabled */
    constexpr std::uint32_t ADC_IER_OVRIE_B_0x0 = 0;
        /** @brief Overrun interrupt enabled. An interrupt is generated when the OVR bit is set. */
    constexpr std::uint32_t ADC_IER_OVRIE_B_0x1 = 1;

    /** @brief End of injected conversion interrupt enable */
    using ADC_IER_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JEOC interrupt disabled. (value: 0)
     *          - B_0x1: JEOC interrupt enabled. An interrupt is generated when the JEOC bit is set. (value: 1)
     */
        /** @brief JEOC interrupt disabled. */
    constexpr std::uint32_t ADC_IER_JEOCIE_B_0x0 = 0;
        /** @brief JEOC interrupt enabled. An interrupt is generated when the JEOC bit is set. */
    constexpr std::uint32_t ADC_IER_JEOCIE_B_0x1 = 1;

    /** @brief End of injected sequence of conversions interrupt enable */
    using ADC_IER_JEOSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JEOS interrupt disabled (value: 0)
     *          - B_0x1: JEOS interrupt enabled. An interrupt is generated when the JEOS bit is set. (value: 1)
     */
        /** @brief JEOS interrupt disabled */
    constexpr std::uint32_t ADC_IER_JEOSIE_B_0x0 = 0;
        /** @brief JEOS interrupt enabled. An interrupt is generated when the JEOS bit is set. */
    constexpr std::uint32_t ADC_IER_JEOSIE_B_0x1 = 1;

    /** @brief Analog watchdog 1 interrupt enable */
    using ADC_IER_AWD1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 1 interrupt disabled (value: 0)
     *          - B_0x1: Analog watchdog 1 interrupt enabled (value: 1)
     */
        /** @brief Analog watchdog 1 interrupt disabled */
    constexpr std::uint32_t ADC_IER_AWD1IE_B_0x0 = 0;
        /** @brief Analog watchdog 1 interrupt enabled */
    constexpr std::uint32_t ADC_IER_AWD1IE_B_0x1 = 1;

    /** @brief Analog watchdog 2 interrupt enable */
    using ADC_IER_AWD2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 2 interrupt disabled (value: 0)
     *          - B_0x1: Analog watchdog 2 interrupt enabled (value: 1)
     */
        /** @brief Analog watchdog 2 interrupt disabled */
    constexpr std::uint32_t ADC_IER_AWD2IE_B_0x0 = 0;
        /** @brief Analog watchdog 2 interrupt enabled */
    constexpr std::uint32_t ADC_IER_AWD2IE_B_0x1 = 1;

    /** @brief Analog watchdog 3 interrupt enable */
    using ADC_IER_AWD3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 3 interrupt disabled (value: 0)
     *          - B_0x1: Analog watchdog 3 interrupt enabled (value: 1)
     */
        /** @brief Analog watchdog 3 interrupt disabled */
    constexpr std::uint32_t ADC_IER_AWD3IE_B_0x0 = 0;
        /** @brief Analog watchdog 3 interrupt enabled */
    constexpr std::uint32_t ADC_IER_AWD3IE_B_0x1 = 1;

    /** @brief ADC control register */
    using ADC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC enable control */
    using ADC_CR_ADEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC is disabled (OFF state) (value: 0)
     *          - B_0x1: Write 1 to enable the ADC. (value: 1)
     */
        /** @brief ADC is disabled (OFF state) */
    constexpr std::uint32_t ADC_CR_ADEN_B_0x0 = 0;
        /** @brief Write 1 to enable the ADC. */
    constexpr std::uint32_t ADC_CR_ADEN_B_0x1 = 1;

    /** @brief ADC disable command */
    using ADC_CR_ADDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no ADDIS command ongoing (value: 0)
     *          - B_0x1: Write 1 to disable the ADC. Read 1 means that an ADDIS command is in progress. (value: 1)
     */
        /** @brief no ADDIS command ongoing */
    constexpr std::uint32_t ADC_CR_ADDIS_B_0x0 = 0;
        /** @brief Write 1 to disable the ADC. Read 1 means that an ADDIS command is in progress. */
    constexpr std::uint32_t ADC_CR_ADDIS_B_0x1 = 1;

    /** @brief ADC start of regular conversion */
    using ADC_CR_ADSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC regular conversion is ongoing. (value: 0)
     *          - B_0x1: Write 1 to start regular conversions. Read 1 means that the ADC is operating and eventually converting a regular channel. (value: 1)
     */
        /** @brief No ADC regular conversion is ongoing. */
    constexpr std::uint32_t ADC_CR_ADSTART_B_0x0 = 0;
        /** @brief Write 1 to start regular conversions. Read 1 means that the ADC is operating and eventually converting a regular channel. */
    constexpr std::uint32_t ADC_CR_ADSTART_B_0x1 = 1;

    /** @brief ADC start of injected conversion */
    using ADC_CR_JADSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC injected conversion is ongoing. (value: 0)
     *          - B_0x1: Write 1 to start injected conversions. Read 1 means that the ADC is operating and eventually converting an injected channel. (value: 1)
     */
        /** @brief No ADC injected conversion is ongoing. */
    constexpr std::uint32_t ADC_CR_JADSTART_B_0x0 = 0;
        /** @brief Write 1 to start injected conversions. Read 1 means that the ADC is operating and eventually converting an injected channel. */
    constexpr std::uint32_t ADC_CR_JADSTART_B_0x1 = 1;

    /** @brief ADC stop of regular conversion command */
    using ADC_CR_ADSTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC stop regular conversion command ongoing (value: 0)
     *          - B_0x1: Write 1 to stop regular conversions ongoing. Read 1 means that an ADSTP command is in progress. (value: 1)
     */
        /** @brief No ADC stop regular conversion command ongoing */
    constexpr std::uint32_t ADC_CR_ADSTP_B_0x0 = 0;
        /** @brief Write 1 to stop regular conversions ongoing. Read 1 means that an ADSTP command is in progress. */
    constexpr std::uint32_t ADC_CR_ADSTP_B_0x1 = 1;

    /** @brief ADC stop of injected conversion command */
    using ADC_CR_JADSTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC stop injected conversion command ongoing (value: 0)
     *          - B_0x1: Write 1 to stop injected conversions ongoing. Read 1 means that an ADSTP command is in progress. (value: 1)
     */
        /** @brief No ADC stop injected conversion command ongoing */
    constexpr std::uint32_t ADC_CR_JADSTP_B_0x0 = 0;
        /** @brief Write 1 to stop injected conversions ongoing. Read 1 means that an ADSTP command is in progress. */
    constexpr std::uint32_t ADC_CR_JADSTP_B_0x1 = 1;

    /** @brief Linearity calibration */
    using ADC_CR_ADCALLIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing ADCAL launches a calibration without the linearity calibration. (value: 0)
     *          - B_0x1: Writing ADCAL launches a calibration with he linearity calibration. (value: 1)
     */
        /** @brief Writing ADCAL launches a calibration without the linearity calibration. */
    constexpr std::uint32_t ADC_CR_ADCALLIN_B_0x0 = 0;
        /** @brief Writing ADCAL launches a calibration with he linearity calibration. */
    constexpr std::uint32_t ADC_CR_ADCALLIN_B_0x1 = 1;

    /** @brief Calibration factor */
    using ADC_CR_CALINDEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Offset calibration factor (value: 0)
     *          - B_0x1: linearity calibration factor 1 (value: 1)
     *          - B_0x2: linearity calibration factor 2 (value: 2)
     *          - B_0x3: linearity calibration factor 3 (value: 3)
     *          - B_0x4: linearity calibration factor 4 (value: 4)
     *          - B_0x5: linearity calibration factor 5 (value: 5)
     *          - B_0x6: linearity calibration factor 6 (value: 6)
     *          - B_0x7: linearity calibration factor 7 and internal offset (write access only) (value: 7)
     *          - B_0x8: internal offset (read access only) (value: 8)
     */
        /** @brief Offset calibration factor */
    constexpr std::uint32_t ADC_CR_CALINDEX_B_0x0 = 0;
        /** @brief linearity calibration factor 1 */
    constexpr std::uint32_t ADC_CR_CALINDEX_B_0x1 = 1;
        /** @brief linearity calibration factor 2 */
    constexpr std::uint32_t ADC_CR_CALINDEX_B_0x2 = 2;
        /** @brief linearity calibration factor 3 */
    constexpr std::uint32_t ADC_CR_CALINDEX_B_0x3 = 3;
        /** @brief linearity calibration factor 4 */
    constexpr std::uint32_t ADC_CR_CALINDEX_B_0x4 = 4;
        /** @brief linearity calibration factor 5 */
    constexpr std::uint32_t ADC_CR_CALINDEX_B_0x5 = 5;
        /** @brief linearity calibration factor 6 */
    constexpr std::uint32_t ADC_CR_CALINDEX_B_0x6 = 6;
        /** @brief linearity calibration factor 7 and internal offset (write access only) */
    constexpr std::uint32_t ADC_CR_CALINDEX_B_0x7 = 7;
        /** @brief internal offset (read access only) */
    constexpr std::uint32_t ADC_CR_CALINDEX_B_0x8 = 8;

    /** @brief ADC voltage regulator enable */
    using ADC_CR_ADVREGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC Voltage regulator disabled (value: 0)
     *          - B_0x1: ADC Voltage regulator enabled. (value: 1)
     */
        /** @brief ADC Voltage regulator disabled */
    constexpr std::uint32_t ADC_CR_ADVREGEN_B_0x0 = 0;
        /** @brief ADC Voltage regulator enabled. */
    constexpr std::uint32_t ADC_CR_ADVREGEN_B_0x1 = 1;

    /** @brief Deep-power-down enable */
    using ADC_CR_DEEPPWD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC not in deep-power down (value: 0)
     *          - B_0x1: ADC in Deep-power-down (default reset state) (value: 1)
     */
        /** @brief ADC not in deep-power down */
    constexpr std::uint32_t ADC_CR_DEEPPWD_B_0x0 = 0;
        /** @brief ADC in Deep-power-down (default reset state) */
    constexpr std::uint32_t ADC_CR_DEEPPWD_B_0x1 = 1;

    /** @brief ADC calibration */
    using ADC_CR_ADCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration complete (value: 0)
     *          - B_0x1: Write 1 to calibrate the ADC. Read at 1 means that a calibration in progress. (value: 1)
     */
        /** @brief Calibration complete */
    constexpr std::uint32_t ADC_CR_ADCAL_B_0x0 = 0;
        /** @brief Write 1 to calibrate the ADC. Read at 1 means that a calibration in progress. */
    constexpr std::uint32_t ADC_CR_ADCAL_B_0x1 = 1;

    /** @brief ADC configuration register */
    using ADC_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data management configuration */
    using ADC_CFGR1_DMNGT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular conversion data stored in DR only (value: 0)
     *          - B_0x1: DMA One -shot mode selected (value: 1)
     *          - B_0x2: MDF mode selected (value: 2)
     *          - B_0x3: DMA Circular mode selected (value: 3)
     */
        /** @brief Regular conversion data stored in DR only */
    constexpr std::uint32_t ADC_CFGR1_DMNGT_B_0x0 = 0;
        /** @brief DMA One -shot mode selected */
    constexpr std::uint32_t ADC_CFGR1_DMNGT_B_0x1 = 1;
        /** @brief MDF mode selected */
    constexpr std::uint32_t ADC_CFGR1_DMNGT_B_0x2 = 2;
        /** @brief DMA Circular mode selected */
    constexpr std::uint32_t ADC_CFGR1_DMNGT_B_0x3 = 3;

    /** @brief Data resolution */
    using ADC_CFGR1_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 14 bits (value: 0)
     *          - B_0x1: 12 bits (value: 1)
     *          - B_0x2: 10 bits (value: 2)
     *          - B_0x3: 8bits (value: 3)
     */
        /** @brief 14 bits */
    constexpr std::uint32_t ADC_CFGR1_RES_B_0x0 = 0;
        /** @brief 12 bits */
    constexpr std::uint32_t ADC_CFGR1_RES_B_0x1 = 1;
        /** @brief 10 bits */
    constexpr std::uint32_t ADC_CFGR1_RES_B_0x2 = 2;
        /** @brief 8bits */
    constexpr std::uint32_t ADC_CFGR1_RES_B_0x3 = 3;

    /** @brief External trigger selection for regular group */
    using ADC_CFGR1_EXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: adc_ext_trg0 (value: 0)
     *          - B_0x1: adc_ext_trg1 (value: 1)
     */
        /** @brief adc_ext_trg0 */
    constexpr std::uint32_t ADC_CFGR1_EXTSEL_B_0x0 = 0;
        /** @brief adc_ext_trg1 */
    constexpr std::uint32_t ADC_CFGR1_EXTSEL_B_0x1 = 1;

    /** @brief External trigger enable and polarity selection for regular channels */
    using ADC_CFGR1_EXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware trigger detection disabled (conversions can be launched by software) (value: 0)
     *          - B_0x1: Hardware trigger detection on the rising edge (value: 1)
     *          - B_0x2: Hardware trigger detection on the falling edge (value: 2)
     *          - B_0x3: Hardware trigger detection on both the rising and falling edges (value: 3)
     */
        /** @brief Hardware trigger detection disabled (conversions can be launched by software) */
    constexpr std::uint32_t ADC_CFGR1_EXTEN_B_0x0 = 0;
        /** @brief Hardware trigger detection on the rising edge */
    constexpr std::uint32_t ADC_CFGR1_EXTEN_B_0x1 = 1;
        /** @brief Hardware trigger detection on the falling edge */
    constexpr std::uint32_t ADC_CFGR1_EXTEN_B_0x2 = 2;
        /** @brief Hardware trigger detection on both the rising and falling edges */
    constexpr std::uint32_t ADC_CFGR1_EXTEN_B_0x3 = 3;

    /** @brief Overrun Mode */
    using ADC_CFGR1_OVRMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC_DR register is preserved with the old data when an overrun is detected. (value: 0)
     *          - B_0x1: ADC_DR register is overwritten with the last conversion result when an overrun is detected. (value: 1)
     */
        /** @brief ADC_DR register is preserved with the old data when an overrun is detected. */
    constexpr std::uint32_t ADC_CFGR1_OVRMOD_B_0x0 = 0;
        /** @brief ADC_DR register is overwritten with the last conversion result when an overrun is detected. */
    constexpr std::uint32_t ADC_CFGR1_OVRMOD_B_0x1 = 1;

    /** @brief Single / continuous conversion mode for regular conversions */
    using ADC_CFGR1_CONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single conversion mode (value: 0)
     *          - B_0x1: Continuous conversion mode (value: 1)
     */
        /** @brief Single conversion mode */
    constexpr std::uint32_t ADC_CFGR1_CONT_B_0x0 = 0;
        /** @brief Continuous conversion mode */
    constexpr std::uint32_t ADC_CFGR1_CONT_B_0x1 = 1;

    /** @brief Delayed conversion mode */
    using ADC_CFGR1_AUTDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Auto-delayed conversion mode off (value: 0)
     *          - B_0x1: Auto-delayed conversion mode on (value: 1)
     */
        /** @brief Auto-delayed conversion mode off */
    constexpr std::uint32_t ADC_CFGR1_AUTDLY_B_0x0 = 0;
        /** @brief Auto-delayed conversion mode on */
    constexpr std::uint32_t ADC_CFGR1_AUTDLY_B_0x1 = 1;

    /** @brief Discontinuous mode for regular channels */
    using ADC_CFGR1_DISCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Discontinuous mode for regular channels disabled (value: 0)
     *          - B_0x1: Discontinuous mode for regular channels enabled (value: 1)
     */
        /** @brief Discontinuous mode for regular channels disabled */
    constexpr std::uint32_t ADC_CFGR1_DISCEN_B_0x0 = 0;
        /** @brief Discontinuous mode for regular channels enabled */
    constexpr std::uint32_t ADC_CFGR1_DISCEN_B_0x1 = 1;

    /** @brief Discontinuous mode channel count */
    using ADC_CFGR1_DISCNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 channel (value: 0)
     *          - B_0x1: 2 channels (value: 1)
     *          - B_0x7: 8 channels (value: 7)
     */
        /** @brief 1 channel */
    constexpr std::uint32_t ADC_CFGR1_DISCNUM_B_0x0 = 0;
        /** @brief 2 channels */
    constexpr std::uint32_t ADC_CFGR1_DISCNUM_B_0x1 = 1;
        /** @brief 8 channels */
    constexpr std::uint32_t ADC_CFGR1_DISCNUM_B_0x7 = 7;

    /** @brief Discontinuous mode on injected channels */
    using ADC_CFGR1_JDISCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Discontinuous mode on injected channels disabled (value: 0)
     *          - B_0x1: Discontinuous mode on injected channels enabled (value: 1)
     */
        /** @brief Discontinuous mode on injected channels disabled */
    constexpr std::uint32_t ADC_CFGR1_JDISCEN_B_0x0 = 0;
        /** @brief Discontinuous mode on injected channels enabled */
    constexpr std::uint32_t ADC_CFGR1_JDISCEN_B_0x1 = 1;

    /** @brief Enable the watchdog 1 on a single channel or on all channels */
    using ADC_CFGR1_AWD1SGL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 1 enabled on all channels (value: 0)
     *          - B_0x1: Analog watchdog 1 enabled on a single channel (value: 1)
     */
        /** @brief Analog watchdog 1 enabled on all channels */
    constexpr std::uint32_t ADC_CFGR1_AWD1SGL_B_0x0 = 0;
        /** @brief Analog watchdog 1 enabled on a single channel */
    constexpr std::uint32_t ADC_CFGR1_AWD1SGL_B_0x1 = 1;

    /** @brief Analog watchdog 1 enable on regular channels */
    using ADC_CFGR1_AWD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 1 disabled on regular channels (value: 0)
     *          - B_0x1: Analog watchdog 1 enabled on regular channels (value: 1)
     */
        /** @brief Analog watchdog 1 disabled on regular channels */
    constexpr std::uint32_t ADC_CFGR1_AWD1EN_B_0x0 = 0;
        /** @brief Analog watchdog 1 enabled on regular channels */
    constexpr std::uint32_t ADC_CFGR1_AWD1EN_B_0x1 = 1;

    /** @brief Analog watchdog 1 enable on injected channels */
    using ADC_CFGR1_JAWD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 1 disabled on injected channels (value: 0)
     *          - B_0x1: Analog watchdog 1 enabled on injected channels (value: 1)
     */
        /** @brief Analog watchdog 1 disabled on injected channels */
    constexpr std::uint32_t ADC_CFGR1_JAWD1EN_B_0x0 = 0;
        /** @brief Analog watchdog 1 enabled on injected channels */
    constexpr std::uint32_t ADC_CFGR1_JAWD1EN_B_0x1 = 1;

    /** @brief Automatic injected group conversion */
    using ADC_CFGR1_JAUTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Automatic injected group conversion disabled (value: 0)
     *          - B_0x1: Automatic injected group conversion enabled (value: 1)
     */
        /** @brief Automatic injected group conversion disabled */
    constexpr std::uint32_t ADC_CFGR1_JAUTO_B_0x0 = 0;
        /** @brief Automatic injected group conversion enabled */
    constexpr std::uint32_t ADC_CFGR1_JAUTO_B_0x1 = 1;

    /** @brief Analog watchdog 1 channel selection */
    using ADC_CFGR1_AWD1CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog input channel-0 monitored by AWD1 (value: 0)
     *          - B_0x1: ADC analog input channel-1 monitored by AWD1 (value: 1)
     *          - B_0x13: ADC analog input channel-19 monitored by AWD1 (value: 19)
     */
        /** @brief ADC analog input channel-0 monitored by AWD1 */
    constexpr std::uint32_t ADC_CFGR1_AWD1CH_B_0x0 = 0;
        /** @brief ADC analog input channel-1 monitored by AWD1 */
    constexpr std::uint32_t ADC_CFGR1_AWD1CH_B_0x1 = 1;
        /** @brief ADC analog input channel-19 monitored by AWD1 */
    constexpr std::uint32_t ADC_CFGR1_AWD1CH_B_0x13 = 19;

    /** @brief ADC configuration register 2 */
    using ADC_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular Oversampling Enable */
    using ADC_CFGR2_ROVSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular Oversampling disabled (value: 0)
     *          - B_0x1: Regular Oversampling enabled (value: 1)
     */
        /** @brief Regular Oversampling disabled */
    constexpr std::uint32_t ADC_CFGR2_ROVSE_B_0x0 = 0;
        /** @brief Regular Oversampling enabled */
    constexpr std::uint32_t ADC_CFGR2_ROVSE_B_0x1 = 1;

    /** @brief Injected Oversampling Enable */
    using ADC_CFGR2_JOVSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected oversampling disabled (value: 0)
     *          - B_0x1: Injected oversampling enabled (value: 1)
     */
        /** @brief Injected oversampling disabled */
    constexpr std::uint32_t ADC_CFGR2_JOVSE_B_0x0 = 0;
        /** @brief Injected oversampling enabled */
    constexpr std::uint32_t ADC_CFGR2_JOVSE_B_0x1 = 1;

    /** @brief Oversampling right shift */
    using ADC_CFGR2_OVSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No right shift (value: 0)
     *          - B_0x1: 1-bit right shift (value: 1)
     *          - B_0x2: 2-bit right shift (value: 2)
     *          - B_0x3: 3-bit right shift (value: 3)
     *          - B_0x4: 4-bit right shift (value: 4)
     *          - B_0x5: 5-bit right shift (value: 5)
     *          - B_0x6: 6-bit right shift (value: 6)
     *          - B_0x7: 7-bit right shift (value: 7)
     *          - B_0x8: 8-bit right shift (value: 8)
     *          - B_0x9: 9-bit right shift (value: 9)
     *          - B_0xA: 10-bit right shift (value: 10)
     *          - B_0xB: 11-bit right shift (value: 11)
     */
        /** @brief No right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x0 = 0;
        /** @brief 1-bit right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x1 = 1;
        /** @brief 2-bit right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x2 = 2;
        /** @brief 3-bit right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x3 = 3;
        /** @brief 4-bit right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x4 = 4;
        /** @brief 5-bit right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x5 = 5;
        /** @brief 6-bit right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x6 = 6;
        /** @brief 7-bit right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x7 = 7;
        /** @brief 8-bit right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x8 = 8;
        /** @brief 9-bit right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x9 = 9;
        /** @brief 10-bit right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0xA = 10;
        /** @brief 11-bit right shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0xB = 11;

    /** @brief Triggered Regular Oversampling */
    using ADC_CFGR2_TROVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All oversampled conversions for a channel are done consecutively following a trigger (value: 0)
     *          - B_0x1: Each oversampled conversion for a channel needs a new trigger (value: 1)
     */
        /** @brief All oversampled conversions for a channel are done consecutively following a trigger */
    constexpr std::uint32_t ADC_CFGR2_TROVS_B_0x0 = 0;
        /** @brief Each oversampled conversion for a channel needs a new trigger */
    constexpr std::uint32_t ADC_CFGR2_TROVS_B_0x1 = 1;

    /** @brief Regular Oversampling mode */
    using ADC_CFGR2_ROVSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Continued mode: When injected conversions are triggered, the oversampling is temporary stopped and continued after the injection sequence (oversampling buffer is maintained during injected sequence) (value: 0)
     *          - B_0x1: Resumed mode: When injected conversions are triggered, the current oversampling is aborted and resumed from start after the injection sequence (oversampling buffer is zeroed by injected sequence start) (value: 1)
     */
        /** @brief Continued mode: When injected conversions are triggered, the oversampling is temporary stopped and continued after the injection sequence (oversampling buffer is maintained during injected sequence) */
    constexpr std::uint32_t ADC_CFGR2_ROVSM_B_0x0 = 0;
        /** @brief Resumed mode: When injected conversions are triggered, the current oversampling is aborted and resumed from start after the injection sequence (oversampling buffer is zeroed by injected sequence start) */
    constexpr std::uint32_t ADC_CFGR2_ROVSM_B_0x1 = 1;

    /** @brief Bulb sampling mode */
    using ADC_CFGR2_BULB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bulb sampling mode disabled (value: 0)
     *          - B_0x1: Bulb sampling mode enabled. The sampling period starts just after the previous end of the conversion. (value: 1)
     */
        /** @brief Bulb sampling mode disabled */
    constexpr std::uint32_t ADC_CFGR2_BULB_B_0x0 = 0;
        /** @brief Bulb sampling mode enabled. The sampling period starts just after the previous end of the conversion. */
    constexpr std::uint32_t ADC_CFGR2_BULB_B_0x1 = 1;

    /** @brief Software trigger bit for sampling time control trigger mode */
    using ADC_CFGR2_SWTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Software trigger starts the conversion for sampling time control trigger mode (value: 0)
     *          - B_0x1: Software trigger starts the sampling for sampling time control trigger mode. (value: 1)
     */
        /** @brief Software trigger starts the conversion for sampling time control trigger mode */
    constexpr std::uint32_t ADC_CFGR2_SWTRIG_B_0x0 = 0;
        /** @brief Software trigger starts the sampling for sampling time control trigger mode. */
    constexpr std::uint32_t ADC_CFGR2_SWTRIG_B_0x1 = 1;

    /** @brief Sampling time control trigger mode */
    using ADC_CFGR2_SMPTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time control trigger mode disabled (value: 0)
     *          - B_0x1: Sampling time control trigger mode enabled (value: 1)
     */
        /** @brief Sampling time control trigger mode disabled */
    constexpr std::uint32_t ADC_CFGR2_SMPTRIG_B_0x0 = 0;
        /** @brief Sampling time control trigger mode enabled */
    constexpr std::uint32_t ADC_CFGR2_SMPTRIG_B_0x1 = 1;

    /** @brief Oversampling ratio */
    using ADC_CFGR2_OSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1x (no oversampling) (value: 0)
     *          - B_0x1: 2x (value: 1)
     */
        /** @brief 1x (no oversampling) */
    constexpr std::uint32_t ADC_CFGR2_OSR_B_0x0 = 0;
        /** @brief 2x */
    constexpr std::uint32_t ADC_CFGR2_OSR_B_0x1 = 1;

    /** @brief Low-frequency trigger */
    using ADC_CFGR2_LFTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low-frequency trigger mode disabled (value: 0)
     *          - B_0x1: Low-frequency trigger mode enabled (value: 1)
     */
        /** @brief Low-frequency trigger mode disabled */
    constexpr std::uint32_t ADC_CFGR2_LFTRIG_B_0x0 = 0;
        /** @brief Low-frequency trigger mode enabled */
    constexpr std::uint32_t ADC_CFGR2_LFTRIG_B_0x1 = 1;

    /** @brief Left shift factor */
    using ADC_CFGR2_LSHIFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No left shift (value: 0)
     *          - B_0x1: 1-bit left shift (value: 1)
     *          - B_0x2: 2-bit left shift (value: 2)
     *          - B_0x3: 3-bit left shift (value: 3)
     *          - B_0x4: 4-bit left shift (value: 4)
     *          - B_0x5: 5-bit left shift (value: 5)
     *          - B_0x6: 6-bit left shift (value: 6)
     *          - B_0x7: 7-bit left shift (value: 7)
     *          - B_0x8: 8-bit left shift (value: 8)
     *          - B_0x9: 9-bit left shift (value: 9)
     *          - B_0xA: 10-bit left shift (value: 10)
     *          - B_0xB: 11-bit left shift (value: 11)
     *          - B_0xC: 12-bit left shift (value: 12)
     *          - B_0xD: 13-bit left shift (value: 13)
     *          - B_0xE: 14-bit left shift (value: 14)
     *          - B_0xF: 15-bit left shift (value: 15)
     */
        /** @brief No left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0x0 = 0;
        /** @brief 1-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0x1 = 1;
        /** @brief 2-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0x2 = 2;
        /** @brief 3-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0x3 = 3;
        /** @brief 4-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0x4 = 4;
        /** @brief 5-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0x5 = 5;
        /** @brief 6-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0x6 = 6;
        /** @brief 7-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0x7 = 7;
        /** @brief 8-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0x8 = 8;
        /** @brief 9-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0x9 = 9;
        /** @brief 10-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0xA = 10;
        /** @brief 11-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0xB = 11;
        /** @brief 12-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0xC = 12;
        /** @brief 13-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0xD = 13;
        /** @brief 14-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0xE = 14;
        /** @brief 15-bit left shift */
    constexpr std::uint32_t ADC_CFGR2_LSHIFT_B_0xF = 15;

    /** @brief ADC sample time register 1 */
    using ADC_SMPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR1_SMP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR1_SMP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR1_SMP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR1_SMP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR1_SMP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR1_SMP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR1_SMP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR1_SMP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR1_SMP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR1_SMP9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x7 = 7;

    /** @brief ADC sample time register 2 */
    using ADC_SMPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR2_SMP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR2_SMP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR2_SMP12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR2_SMP13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR2_SMP14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR2_SMP15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR2_SMP16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR2_SMP17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR2_SMP18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x = 0 to 9) */
    using ADC_SMPR2_SMP19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 5 ADC clock cycles (value: 0)
     *          - B_0x1: 6 ADC clock cycles (value: 1)
     *          - B_0x2: 12 ADC clock cycles (value: 2)
     *          - B_0x3: 20 ADC clock cycles (value: 3)
     *          - B_0x4: 36 ADC clock cycles (value: 4)
     *          - B_0x5: 68 ADC clock cycles (value: 5)
     *          - B_0x6: 391 ADC clock cycles (value: 6)
     *          - B_0x7: 814 ADC clock cycles (value: 7)
     */
        /** @brief 5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x0 = 0;
        /** @brief 6 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x1 = 1;
        /** @brief 12 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x2 = 2;
        /** @brief 20 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x3 = 3;
        /** @brief 36 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x4 = 4;
        /** @brief 68 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x5 = 5;
        /** @brief 391 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x6 = 6;
        /** @brief 814 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x7 = 7;

    /** @brief ADC channel preselection register */
    using ADC_PCSEL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL0_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL0_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL1_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL1_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL2_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL2_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL3_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL3_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL4_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL4_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL5_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL5_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL6_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL6_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL7_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL7_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL8_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL8_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL9_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL9_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL10_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL10_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL11_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL11_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL12_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL12_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL13_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL13_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL14_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL14_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL15_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL15_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL16_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL16_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL17_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL17_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL18_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL18_B_0x1 = 1;

    /** @brief Channel i (VINP[i]) preselection */
    using ADC_PCSEL_PCSEL19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. (value: 0)
     *          - B_0x1: Input channel i (VINP[i]) is preselected for conversion (value: 1)
     */
        /** @brief Input channel i (VINP[i]) is not preselected for conversion, the ADC conversion of this channel shows a wrong result. */
    constexpr std::uint32_t ADC_PCSEL_PCSEL19_B_0x0 = 0;
        /** @brief Input channel i (VINP[i]) is preselected for conversion */
    constexpr std::uint32_t ADC_PCSEL_PCSEL19_B_0x1 = 1;

    /** @brief ADC regular sequence register 1 */
    using ADC_SQR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel sequence length */
    using ADC_SQR1_L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 conversion (value: 0)
     *          - B_0x1: 2 conversions (value: 1)
     *          - B_0xF: 16 conversions (value: 15)
     */
        /** @brief 1 conversion */
    constexpr std::uint32_t ADC_SQR1_L_B_0x0 = 0;
        /** @brief 2 conversions */
    constexpr std::uint32_t ADC_SQR1_L_B_0x1 = 1;
        /** @brief 16 conversions */
    constexpr std::uint32_t ADC_SQR1_L_B_0xF = 15;

    /** @brief 1st conversion in regular sequence */
    using ADC_SQR1_SQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2nd conversion in regular sequence */
    using ADC_SQR1_SQ2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 3rd conversion in regular sequence */
    using ADC_SQR1_SQ3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 4th conversion in regular sequence */
    using ADC_SQR1_SQ4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC regular sequence register 2 */
    using ADC_SQR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 5th conversion in regular sequence */
    using ADC_SQR2_SQ5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 6th conversion in regular sequence */
    using ADC_SQR2_SQ6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 7th conversion in regular sequence */
    using ADC_SQR2_SQ7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8th conversion in regular sequence */
    using ADC_SQR2_SQ8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 9th conversion in regular sequence */
    using ADC_SQR2_SQ9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC regular sequence register 3 */
    using ADC_SQR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 10th conversion in regular sequence */
    using ADC_SQR3_SQ10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 11th conversion in regular sequence */
    using ADC_SQR3_SQ11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 12th conversion in regular sequence */
    using ADC_SQR3_SQ12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 13th conversion in regular sequence */
    using ADC_SQR3_SQ13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 14th conversion in regular sequence */
    using ADC_SQR3_SQ14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC regular sequence register 4 */
    using ADC_SQR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 15th conversion in regular sequence */
    using ADC_SQR4_SQ15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 16th conversion in regular sequence */
    using ADC_SQR4_SQ16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC regular Data Register */
    using ADC_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data converted */
    using ADC_DR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC injected sequence register */
    using ADC_JSQR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel sequence length */
    using ADC_JSQR_JL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 conversion (value: 0)
     *          - B_0x1: 2 conversions (value: 1)
     *          - B_0x2: 3 conversions (value: 2)
     *          - B_0x3: 4 conversions (value: 3)
     */
        /** @brief 1 conversion */
    constexpr std::uint32_t ADC_JSQR_JL_B_0x0 = 0;
        /** @brief 2 conversions */
    constexpr std::uint32_t ADC_JSQR_JL_B_0x1 = 1;
        /** @brief 3 conversions */
    constexpr std::uint32_t ADC_JSQR_JL_B_0x2 = 2;
        /** @brief 4 conversions */
    constexpr std::uint32_t ADC_JSQR_JL_B_0x3 = 3;

    /** @brief External trigger selection for injected group */
    using ADC_JSQR_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: adc_jext_trg0 (value: 0)
     *          - B_0x1: adc_jext_trg1 (value: 1)
     */
        /** @brief adc_jext_trg0 */
    constexpr std::uint32_t ADC_JSQR_JEXTSEL_B_0x0 = 0;
        /** @brief adc_jext_trg1 */
    constexpr std::uint32_t ADC_JSQR_JEXTSEL_B_0x1 = 1;

    /** @brief External trigger enable and polarity selection for injected channels */
    using ADC_JSQR_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware trigger detection disabled (conversions can be launched by software) (value: 0)
     *          - B_0x1: Hardware trigger detection on the rising edge (value: 1)
     *          - B_0x2: Hardware trigger detection on the falling edge (value: 2)
     *          - B_0x3: Hardware trigger detection on both the rising and falling edges (value: 3)
     */
        /** @brief Hardware trigger detection disabled (conversions can be launched by software) */
    constexpr std::uint32_t ADC_JSQR_JEXTEN_B_0x0 = 0;
        /** @brief Hardware trigger detection on the rising edge */
    constexpr std::uint32_t ADC_JSQR_JEXTEN_B_0x1 = 1;
        /** @brief Hardware trigger detection on the falling edge */
    constexpr std::uint32_t ADC_JSQR_JEXTEN_B_0x2 = 2;
        /** @brief Hardware trigger detection on both the rising and falling edges */
    constexpr std::uint32_t ADC_JSQR_JEXTEN_B_0x3 = 3;

    /** @brief 1st conversion in the injected sequence */
    using ADC_JSQR_JSQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2nd conversion in the injected sequence */
    using ADC_JSQR_JSQ2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 3rd conversion in the injected sequence */
    using ADC_JSQR_JSQ3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 4th conversion in the injected sequence */
    using ADC_JSQR_JSQ4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register */
    using ADC_OFR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset y for the channel programmed into OFFSETy_CH[4:0] bits */
    using ADC_OFR1_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief offset sign */
    using ADC_OFR1_POSOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Negative offset (value: 0)
     *          - B_0x1: Positive offset (value: 1)
     */
        /** @brief Negative offset */
    constexpr std::uint32_t ADC_OFR1_POSOFF_B_0x0 = 0;
        /** @brief Positive offset */
    constexpr std::uint32_t ADC_OFR1_POSOFF_B_0x1 = 1;

    /** @brief Unsigned saturation enable */
    using ADC_OFR1_USAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Offset is subtracted maintaining data integrity and keeping converted data size (value: 0)
     *          - B_0x1: Offset is subtracted and result is saturated to maintain converted data size. (value: 1)
     */
        /** @brief Offset is subtracted maintaining data integrity and keeping converted data size */
    constexpr std::uint32_t ADC_OFR1_USAT_B_0x0 = 0;
        /** @brief Offset is subtracted and result is saturated to maintain converted data size. */
    constexpr std::uint32_t ADC_OFR1_USAT_B_0x1 = 1;

    /** @brief Signed saturation enable */
    using ADC_OFR1_SSAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Offset is subtracted maintaining data integrity and extending converted data size (9-bit and 15-bit signed format). (value: 0)
     *          - B_0x1: Offset is subtracted and result is saturated to maintain converted data size. (value: 1)
     */
        /** @brief Offset is subtracted maintaining data integrity and extending converted data size (9-bit and 15-bit signed format). */
    constexpr std::uint32_t ADC_OFR1_SSAT_B_0x0 = 0;
        /** @brief Offset is subtracted and result is saturated to maintain converted data size. */
    constexpr std::uint32_t ADC_OFR1_SSAT_B_0x1 = 1;

    /** @brief Channel selection for the data offset y */
    using ADC_OFR1_OFFSET_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register */
    using ADC_OFR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset y for the channel programmed into OFFSETy_CH[4:0] bits */
    using ADC_OFR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief offset sign */
    using ADC_OFR2_POSOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Negative offset (value: 0)
     *          - B_0x1: Positive offset (value: 1)
     */
        /** @brief Negative offset */
    constexpr std::uint32_t ADC_OFR2_POSOFF_B_0x0 = 0;
        /** @brief Positive offset */
    constexpr std::uint32_t ADC_OFR2_POSOFF_B_0x1 = 1;

    /** @brief Unsigned saturation enable */
    using ADC_OFR2_USAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Offset is subtracted maintaining data integrity and keeping converted data size (value: 0)
     *          - B_0x1: Offset is subtracted and result is saturated to maintain converted data size. (value: 1)
     */
        /** @brief Offset is subtracted maintaining data integrity and keeping converted data size */
    constexpr std::uint32_t ADC_OFR2_USAT_B_0x0 = 0;
        /** @brief Offset is subtracted and result is saturated to maintain converted data size. */
    constexpr std::uint32_t ADC_OFR2_USAT_B_0x1 = 1;

    /** @brief Signed saturation enable */
    using ADC_OFR2_SSAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Offset is subtracted maintaining data integrity and extending converted data size (9-bit and 15-bit signed format). (value: 0)
     *          - B_0x1: Offset is subtracted and result is saturated to maintain converted data size. (value: 1)
     */
        /** @brief Offset is subtracted maintaining data integrity and extending converted data size (9-bit and 15-bit signed format). */
    constexpr std::uint32_t ADC_OFR2_SSAT_B_0x0 = 0;
        /** @brief Offset is subtracted and result is saturated to maintain converted data size. */
    constexpr std::uint32_t ADC_OFR2_SSAT_B_0x1 = 1;

    /** @brief Channel selection for the data offset y */
    using ADC_OFR2_OFFSET_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register */
    using ADC_OFR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset y for the channel programmed into OFFSETy_CH[4:0] bits */
    using ADC_OFR3_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief offset sign */
    using ADC_OFR3_POSOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Negative offset (value: 0)
     *          - B_0x1: Positive offset (value: 1)
     */
        /** @brief Negative offset */
    constexpr std::uint32_t ADC_OFR3_POSOFF_B_0x0 = 0;
        /** @brief Positive offset */
    constexpr std::uint32_t ADC_OFR3_POSOFF_B_0x1 = 1;

    /** @brief Unsigned saturation enable */
    using ADC_OFR3_USAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Offset is subtracted maintaining data integrity and keeping converted data size (value: 0)
     *          - B_0x1: Offset is subtracted and result is saturated to maintain converted data size. (value: 1)
     */
        /** @brief Offset is subtracted maintaining data integrity and keeping converted data size */
    constexpr std::uint32_t ADC_OFR3_USAT_B_0x0 = 0;
        /** @brief Offset is subtracted and result is saturated to maintain converted data size. */
    constexpr std::uint32_t ADC_OFR3_USAT_B_0x1 = 1;

    /** @brief Signed saturation enable */
    using ADC_OFR3_SSAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Offset is subtracted maintaining data integrity and extending converted data size (9-bit and 15-bit signed format). (value: 0)
     *          - B_0x1: Offset is subtracted and result is saturated to maintain converted data size. (value: 1)
     */
        /** @brief Offset is subtracted maintaining data integrity and extending converted data size (9-bit and 15-bit signed format). */
    constexpr std::uint32_t ADC_OFR3_SSAT_B_0x0 = 0;
        /** @brief Offset is subtracted and result is saturated to maintain converted data size. */
    constexpr std::uint32_t ADC_OFR3_SSAT_B_0x1 = 1;

    /** @brief Channel selection for the data offset y */
    using ADC_OFR3_OFFSET_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register */
    using ADC_OFR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset y for the channel programmed into OFFSETy_CH[4:0] bits */
    using ADC_OFR4_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief offset sign */
    using ADC_OFR4_POSOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Negative offset (value: 0)
     *          - B_0x1: Positive offset (value: 1)
     */
        /** @brief Negative offset */
    constexpr std::uint32_t ADC_OFR4_POSOFF_B_0x0 = 0;
        /** @brief Positive offset */
    constexpr std::uint32_t ADC_OFR4_POSOFF_B_0x1 = 1;

    /** @brief Unsigned saturation enable */
    using ADC_OFR4_USAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Offset is subtracted maintaining data integrity and keeping converted data size (value: 0)
     *          - B_0x1: Offset is subtracted and result is saturated to maintain converted data size. (value: 1)
     */
        /** @brief Offset is subtracted maintaining data integrity and keeping converted data size */
    constexpr std::uint32_t ADC_OFR4_USAT_B_0x0 = 0;
        /** @brief Offset is subtracted and result is saturated to maintain converted data size. */
    constexpr std::uint32_t ADC_OFR4_USAT_B_0x1 = 1;

    /** @brief Signed saturation enable */
    using ADC_OFR4_SSAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Offset is subtracted maintaining data integrity and extending converted data size (9-bit and 15-bit signed format). (value: 0)
     *          - B_0x1: Offset is subtracted and result is saturated to maintain converted data size. (value: 1)
     */
        /** @brief Offset is subtracted maintaining data integrity and extending converted data size (9-bit and 15-bit signed format). */
    constexpr std::uint32_t ADC_OFR4_SSAT_B_0x0 = 0;
        /** @brief Offset is subtracted and result is saturated to maintain converted data size. */
    constexpr std::uint32_t ADC_OFR4_SSAT_B_0x1 = 1;

    /** @brief Channel selection for the data offset y */
    using ADC_OFR4_OFFSET_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC gain compensation register */
    using ADC_GCOMP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gain compensation coefficient */
    using ADC_GCOMP_GCOMPCOEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x800: gain factor of 0.5 (value: 2048)
     *          - B_0x1000: gain factor of 1 (value: 4096)
     *          - B_0x2000: gain factor of 2 (value: 8192)
     *          - B_0x3000: gain factor of 3 (value: 12288)
     */
        /** @brief gain factor of 0.5 */
    constexpr std::uint32_t ADC_GCOMP_GCOMPCOEFF_B_0x800 = 2048;
        /** @brief gain factor of 1 */
    constexpr std::uint32_t ADC_GCOMP_GCOMPCOEFF_B_0x1000 = 4096;
        /** @brief gain factor of 2 */
    constexpr std::uint32_t ADC_GCOMP_GCOMPCOEFF_B_0x2000 = 8192;
        /** @brief gain factor of 3 */
    constexpr std::uint32_t ADC_GCOMP_GCOMPCOEFF_B_0x3000 = 12288;

    /** @brief Gain compensation mode */
    using ADC_GCOMP_GCOMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular ADC operating mode (value: 0)
     *          - B_0x1: Gain compensation enabled and applied on all channels (value: 1)
     */
        /** @brief Regular ADC operating mode */
    constexpr std::uint32_t ADC_GCOMP_GCOMP_B_0x0 = 0;
        /** @brief Gain compensation enabled and applied on all channels */
    constexpr std::uint32_t ADC_GCOMP_GCOMP_B_0x1 = 1;

    /** @brief ADC injected data register */
    using ADC_JDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using ADC_JDR1_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC injected data register */
    using ADC_JDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using ADC_JDR2_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC injected data register */
    using ADC_JDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using ADC_JDR3_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC injected data register */
    using ADC_JDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using ADC_JDR4_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC analog watchdog 2 configuration register */
    using ADC_AWD2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 channel selection */
    using ADC_AWD2CR_AWD2CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC analog watchdog 3 configuration register */
    using ADC_AWD3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 channel selection */
    using ADC_AWD3CR_AWD3CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC watchdog threshold register 1 */
    using ADC_LTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 lower threshold */
    using ADC_LTR1_LTR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC watchdog threshold register 1 */
    using ADC_HTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 higher threshold */
    using ADC_HTR1_HTR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filtering parameter */
    using ADC_HTR1_AWDFILT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No filtering (value: 0)
     *          - B_0x1: two consecutive detection generates an AWDx flag or an interrupt (value: 1)
     *          - B_0x7: Eight consecutive detection generates an AWDx flag or an interrupt (value: 7)
     */
        /** @brief No filtering */
    constexpr std::uint32_t ADC_HTR1_AWDFILT1_B_0x0 = 0;
        /** @brief two consecutive detection generates an AWDx flag or an interrupt */
    constexpr std::uint32_t ADC_HTR1_AWDFILT1_B_0x1 = 1;
        /** @brief Eight consecutive detection generates an AWDx flag or an interrupt */
    constexpr std::uint32_t ADC_HTR1_AWDFILT1_B_0x7 = 7;

    /** @brief ADC watchdog lower threshold register 2 */
    using ADC_LTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 lower threshold */
    using ADC_LTR2_LTR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC watchdog higher threshold register 2 */
    using ADC_HTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 higher threshold */
    using ADC_HTR2_HTR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC watchdog lower threshold register 3 */
    using ADC_LTR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 lower threshold */
    using ADC_LTR3_LTR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC watchdog higher threshold register 3 */
    using ADC_HTR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 higher threshold */
    using ADC_HTR3_HTR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC differential mode selection register */
    using ADC_DIFSEL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Differential mode for channels 19 to 0 */
    using ADC_DIFSEL_DIFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC user control register */
    using ADC_CALFACT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delayed write access address */
    using ADC_CALFACT_I_APB_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delayed write access data */
    using ADC_CALFACT_I_APB_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delayed write access status bit */
    using ADC_CALFACT_VALIDITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Operation still in progress (value: 0)
     *          - B_0x1: Operation complete (value: 1)
     */
        /** @brief Operation still in progress */
    constexpr std::uint32_t ADC_CALFACT_VALIDITY_B_0x0 = 0;
        /** @brief Operation complete */
    constexpr std::uint32_t ADC_CALFACT_VALIDITY_B_0x1 = 1;

    /** @brief Calibration factor latch enable bit */
    using ADC_CALFACT_LATCH_COEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Calibration factor latched in the analog block on LATCH_COEF bit transition from 0 to 1. Prior to latching the calibration factor, CALFACT[31:0] bits must be programmed with the content of CALINDEX[3:0] bits. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t ADC_CALFACT_LATCH_COEF_B_0x0 = 0;
        /** @brief Calibration factor latched in the analog block on LATCH_COEF bit transition from 0 to 1. Prior to latching the calibration factor, CALFACT[31:0] bits must be programmed with the content of CALINDEX[3:0] bits. */
    constexpr std::uint32_t ADC_CALFACT_LATCH_COEF_B_0x1 = 1;

    /** @brief Calibration factor capture enable bit */
    using ADC_CALFACT_CAPTURE_COEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration factor not captured (value: 0)
     *          - B_0x1: Calibration factor available in CALFACT[31:0] bits, the calibration factor index being defined by CALINDEX[3:0] bits (value: 1)
     */
        /** @brief Calibration factor not captured */
    constexpr std::uint32_t ADC_CALFACT_CAPTURE_COEF_B_0x0 = 0;
        /** @brief Calibration factor available in CALFACT[31:0] bits, the calibration factor index being defined by CALINDEX[3:0] bits */
    constexpr std::uint32_t ADC_CALFACT_CAPTURE_COEF_B_0x1 = 1;

    /** @brief ADC calibration factor register */
    using ADC_CALFACT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Linearity or offset calibration factor */
    using ADC_CALFACT2_CALFACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
