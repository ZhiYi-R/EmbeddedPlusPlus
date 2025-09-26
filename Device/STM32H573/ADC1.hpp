/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H573_ADC1_HPP
#define EMBEDDED_PP_STM32H573_ADC1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Analog to digital converter */
namespace STM32H573::ADC1 {

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

    /** @brief Injected context queue overflow */
    using ADC_ISR_JQOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No injected context queue overflow occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Injected context queue overflow has occurred (value: 1)
     */
        /** @brief No injected context queue overflow occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_JQOVF_B_0x0 = 0;
        /** @brief Injected context queue overflow has occurred */
    constexpr std::uint32_t ADC_ISR_JQOVF_B_0x1 = 1;

    /** @brief ADC interrupt enable register */
    using ADC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC ready interrupt enable */
    using ADC_IER_ADRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADRDY interrupt disabled (value: 0)
     *          - B_0x1: ADRDY interrupt enabled. (value: 1)
     */
        /** @brief ADRDY interrupt disabled */
    constexpr std::uint32_t ADC_IER_ADRDYIE_B_0x0 = 0;
        /** @brief ADRDY interrupt enabled. */
    constexpr std::uint32_t ADC_IER_ADRDYIE_B_0x1 = 1;

    /** @brief End of sampling flag interrupt enable for regular conversions */
    using ADC_IER_EOSMPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOSMP interrupt disabled. (value: 0)
     *          - B_0x1: EOSMP interrupt enabled. (value: 1)
     */
        /** @brief EOSMP interrupt disabled. */
    constexpr std::uint32_t ADC_IER_EOSMPIE_B_0x0 = 0;
        /** @brief EOSMP interrupt enabled. */
    constexpr std::uint32_t ADC_IER_EOSMPIE_B_0x1 = 1;

    /** @brief End of regular conversion interrupt enable */
    using ADC_IER_EOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOC interrupt disabled. (value: 0)
     *          - B_0x1: EOC interrupt enabled. (value: 1)
     */
        /** @brief EOC interrupt disabled. */
    constexpr std::uint32_t ADC_IER_EOCIE_B_0x0 = 0;
        /** @brief EOC interrupt enabled. */
    constexpr std::uint32_t ADC_IER_EOCIE_B_0x1 = 1;

    /** @brief End of regular sequence of conversions interrupt enable */
    using ADC_IER_EOSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOS interrupt disabled (value: 0)
     *          - B_0x1: EOS interrupt enabled. (value: 1)
     */
        /** @brief EOS interrupt disabled */
    constexpr std::uint32_t ADC_IER_EOSIE_B_0x0 = 0;
        /** @brief EOS interrupt enabled. */
    constexpr std::uint32_t ADC_IER_EOSIE_B_0x1 = 1;

    /** @brief Overrun interrupt enable */
    using ADC_IER_OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Overrun interrupt disabled (value: 0)
     *          - B_0x1: Overrun interrupt enabled. (value: 1)
     */
        /** @brief Overrun interrupt disabled */
    constexpr std::uint32_t ADC_IER_OVRIE_B_0x0 = 0;
        /** @brief Overrun interrupt enabled. */
    constexpr std::uint32_t ADC_IER_OVRIE_B_0x1 = 1;

    /** @brief End of injected conversion interrupt enable */
    using ADC_IER_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JEOC interrupt disabled. (value: 0)
     *          - B_0x1: JEOC interrupt enabled. (value: 1)
     */
        /** @brief JEOC interrupt disabled. */
    constexpr std::uint32_t ADC_IER_JEOCIE_B_0x0 = 0;
        /** @brief JEOC interrupt enabled. */
    constexpr std::uint32_t ADC_IER_JEOCIE_B_0x1 = 1;

    /** @brief End of injected sequence of conversions interrupt enable */
    using ADC_IER_JEOSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JEOS interrupt disabled (value: 0)
     *          - B_0x1: JEOS interrupt enabled. (value: 1)
     */
        /** @brief JEOS interrupt disabled */
    constexpr std::uint32_t ADC_IER_JEOSIE_B_0x0 = 0;
        /** @brief JEOS interrupt enabled. */
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

    /** @brief Injected context queue overflow interrupt enable */
    using ADC_IER_JQOVFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected Context Queue Overflow interrupt disabled (value: 0)
     *          - B_0x1: Injected Context Queue Overflow interrupt enabled. (value: 1)
     */
        /** @brief Injected Context Queue Overflow interrupt disabled */
    constexpr std::uint32_t ADC_IER_JQOVFIE_B_0x0 = 0;
        /** @brief Injected Context Queue Overflow interrupt enabled. */
    constexpr std::uint32_t ADC_IER_JQOVFIE_B_0x1 = 1;

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
     *          - B_0x1: Write 1 to disable the ADC. (value: 1)
     */
        /** @brief no ADDIS command ongoing */
    constexpr std::uint32_t ADC_CR_ADDIS_B_0x0 = 0;
        /** @brief Write 1 to disable the ADC. */
    constexpr std::uint32_t ADC_CR_ADDIS_B_0x1 = 1;

    /** @brief ADC start of regular conversion */
    using ADC_CR_ADSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC regular conversion is ongoing. (value: 0)
     *          - B_0x1: Write 1 to start regular conversions. (value: 1)
     */
        /** @brief No ADC regular conversion is ongoing. */
    constexpr std::uint32_t ADC_CR_ADSTART_B_0x0 = 0;
        /** @brief Write 1 to start regular conversions. */
    constexpr std::uint32_t ADC_CR_ADSTART_B_0x1 = 1;

    /** @brief ADC start of injected conversion */
    using ADC_CR_JADSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC injected conversion is ongoing. (value: 0)
     *          - B_0x1: Write 1 to start injected conversions. (value: 1)
     */
        /** @brief No ADC injected conversion is ongoing. */
    constexpr std::uint32_t ADC_CR_JADSTART_B_0x0 = 0;
        /** @brief Write 1 to start injected conversions. */
    constexpr std::uint32_t ADC_CR_JADSTART_B_0x1 = 1;

    /** @brief ADC stop of regular conversion command */
    using ADC_CR_ADSTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC stop regular conversion command ongoing (value: 0)
     *          - B_0x1: Write 1 to stop regular conversions ongoing. (value: 1)
     */
        /** @brief No ADC stop regular conversion command ongoing */
    constexpr std::uint32_t ADC_CR_ADSTP_B_0x0 = 0;
        /** @brief Write 1 to stop regular conversions ongoing. */
    constexpr std::uint32_t ADC_CR_ADSTP_B_0x1 = 1;

    /** @brief ADC stop of injected conversion command */
    using ADC_CR_JADSTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC stop injected conversion command ongoing (value: 0)
     *          - B_0x1: Write 1 to stop injected conversions ongoing. (value: 1)
     */
        /** @brief No ADC stop injected conversion command ongoing */
    constexpr std::uint32_t ADC_CR_JADSTP_B_0x0 = 0;
        /** @brief Write 1 to stop injected conversions ongoing. */
    constexpr std::uint32_t ADC_CR_JADSTP_B_0x1 = 1;

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
     *          - B_0x0: ADC not in Deep-power down (value: 0)
     *          - B_0x1: ADC in Deep-power-down (default reset state) (value: 1)
     */
        /** @brief ADC not in Deep-power down */
    constexpr std::uint32_t ADC_CR_DEEPPWD_B_0x0 = 0;
        /** @brief ADC in Deep-power-down (default reset state) */
    constexpr std::uint32_t ADC_CR_DEEPPWD_B_0x1 = 1;

    /** @brief Differential mode for calibration */
    using ADC_CR_ADCALDIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writing ADCAL launches a calibration in single-ended inputs mode. (value: 0)
     *          - B_0x1: Writing ADCAL launches a calibration in Differential inputs mode. (value: 1)
     */
        /** @brief Writing ADCAL launches a calibration in single-ended inputs mode. */
    constexpr std::uint32_t ADC_CR_ADCALDIF_B_0x0 = 0;
        /** @brief Writing ADCAL launches a calibration in Differential inputs mode. */
    constexpr std::uint32_t ADC_CR_ADCALDIF_B_0x1 = 1;

    /** @brief ADC calibration */
    using ADC_CR_ADCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration complete (value: 0)
     *          - B_0x1: Write 1 to calibrate the ADC. (value: 1)
     */
        /** @brief Calibration complete */
    constexpr std::uint32_t ADC_CR_ADCAL_B_0x0 = 0;
        /** @brief Write 1 to calibrate the ADC. */
    constexpr std::uint32_t ADC_CR_ADCAL_B_0x1 = 1;

    /** @brief ADC configuration register */
    using ADC_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direct memory access enable */
    using ADC_CFGR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA disabled (value: 0)
     *          - B_0x1: DMA enabled (value: 1)
     */
        /** @brief DMA disabled */
    constexpr std::uint32_t ADC_CFGR_DMAEN_B_0x0 = 0;
        /** @brief DMA enabled */
    constexpr std::uint32_t ADC_CFGR_DMAEN_B_0x1 = 1;

    /** @brief Direct memory access configuration */
    using ADC_CFGR_DMACFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA One Shot mode selected (value: 0)
     *          - B_0x1: DMA Circular mode selected (value: 1)
     */
        /** @brief DMA One Shot mode selected */
    constexpr std::uint32_t ADC_CFGR_DMACFG_B_0x0 = 0;
        /** @brief DMA Circular mode selected */
    constexpr std::uint32_t ADC_CFGR_DMACFG_B_0x1 = 1;

    /** @brief Data resolution */
    using ADC_CFGR_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 12-bit (value: 0)
     *          - B_0x1: 10-bit (value: 1)
     *          - B_0x2: 8-bit (value: 2)
     *          - B_0x3: 6-bit (value: 3)
     */
        /** @brief 12-bit */
    constexpr std::uint32_t ADC_CFGR_RES_B_0x0 = 0;
        /** @brief 10-bit */
    constexpr std::uint32_t ADC_CFGR_RES_B_0x1 = 1;
        /** @brief 8-bit */
    constexpr std::uint32_t ADC_CFGR_RES_B_0x2 = 2;
        /** @brief 6-bit */
    constexpr std::uint32_t ADC_CFGR_RES_B_0x3 = 3;

    /** @brief External trigger selection for regular group These bits select the external event used to trigger the start of conversion of a regular group: ... Note: The software is allowed to write these bits only when ADSTART = 0 (which ensures that no regular conversion is ongoing). */
    using ADC_CFGR_EXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: adc_ext_trg0 (value: 0)
     *          - B_0x1: adc_ext_trg1 (value: 1)
     *          - B_0x2: adc_ext_trg2 (value: 2)
     *          - B_0x3: adc_ext_trg3 (value: 3)
     *          - B_0x4: adc_ext_trg4 (value: 4)
     *          - B_0x5: adc_ext_trg5 (value: 5)
     *          - B_0x6: adc_ext_trg6 (value: 6)
     *          - B_0x7: adc_ext_trg7 (value: 7)
     *          - B_0x8: adc_ext_trg8 (value: 8)
     *          - B_0x9: adc_ext_trg9 (value: 9)
     *          - B_0xA: adc_ext_trg10 (value: 10)
     *          - B_0xB: adc_ext_trg11 (value: 11)
     *          - B_0xC: adc_ext_trg12 (value: 12)
     *          - B_0xD: adc_ext_trg13 (value: 13)
     *          - B_0xE: adc_ext_trg14 (value: 14)
     *          - B_0xF: adc_ext_trg15 (value: 15)
     *          - B_0x10: adc_ext_trg16 (value: 16)
     *          - B_0x11: adc_ext_trg17 (value: 17)
     *          - B_0x12: adc_ext_trg18 (value: 18)
     *          - B_0x13: adc_ext_trg19 (value: 19)
     *          - B_0x14: adc_ext_trg20 (value: 20)
     *          - B_0x15: adc_ext_trg21 (value: 21)
     *          - B_0x16: adc_ext_trg22 (value: 22)
     *          - B_0x17: adc_ext_trg23 (value: 23)
     *          - B_0x18: adc_ext_trg24 (value: 24)
     *          - B_0x19: adc_ext_trg25 (value: 25)
     *          - B_0x1A: adc_ext_trg26 (value: 26)
     *          - B_0x1B: adc_ext_trg27 (value: 27)
     *          - B_0x1C: adc_ext_trg28 (value: 28)
     *          - B_0x1D: adc_ext_trg29 (value: 29)
     *          - B_0x1E: adc_ext_trg30 (value: 30)
     *          - B_0x1F: adc_ext_trg31 (value: 31)
     */
        /** @brief adc_ext_trg0 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x0 = 0;
        /** @brief adc_ext_trg1 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x1 = 1;
        /** @brief adc_ext_trg2 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x2 = 2;
        /** @brief adc_ext_trg3 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x3 = 3;
        /** @brief adc_ext_trg4 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x4 = 4;
        /** @brief adc_ext_trg5 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x5 = 5;
        /** @brief adc_ext_trg6 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x6 = 6;
        /** @brief adc_ext_trg7 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x7 = 7;
        /** @brief adc_ext_trg8 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x8 = 8;
        /** @brief adc_ext_trg9 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x9 = 9;
        /** @brief adc_ext_trg10 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0xA = 10;
        /** @brief adc_ext_trg11 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0xB = 11;
        /** @brief adc_ext_trg12 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0xC = 12;
        /** @brief adc_ext_trg13 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0xD = 13;
        /** @brief adc_ext_trg14 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0xE = 14;
        /** @brief adc_ext_trg15 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0xF = 15;
        /** @brief adc_ext_trg16 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x10 = 16;
        /** @brief adc_ext_trg17 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x11 = 17;
        /** @brief adc_ext_trg18 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x12 = 18;
        /** @brief adc_ext_trg19 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x13 = 19;
        /** @brief adc_ext_trg20 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x14 = 20;
        /** @brief adc_ext_trg21 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x15 = 21;
        /** @brief adc_ext_trg22 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x16 = 22;
        /** @brief adc_ext_trg23 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x17 = 23;
        /** @brief adc_ext_trg24 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x18 = 24;
        /** @brief adc_ext_trg25 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x19 = 25;
        /** @brief adc_ext_trg26 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x1A = 26;
        /** @brief adc_ext_trg27 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x1B = 27;
        /** @brief adc_ext_trg28 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x1C = 28;
        /** @brief adc_ext_trg29 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x1D = 29;
        /** @brief adc_ext_trg30 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x1E = 30;
        /** @brief adc_ext_trg31 */
    constexpr std::uint32_t ADC_CFGR_EXTSEL_B_0x1F = 31;

    /** @brief External trigger enable and polarity selection for regular channels */
    using ADC_CFGR_EXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware trigger detection disabled (conversions can be launched by software) (value: 0)
     *          - B_0x1: Hardware trigger detection on the rising edge (value: 1)
     *          - B_0x2: Hardware trigger detection on the falling edge (value: 2)
     *          - B_0x3: Hardware trigger detection on both the rising and falling edges (value: 3)
     */
        /** @brief Hardware trigger detection disabled (conversions can be launched by software) */
    constexpr std::uint32_t ADC_CFGR_EXTEN_B_0x0 = 0;
        /** @brief Hardware trigger detection on the rising edge */
    constexpr std::uint32_t ADC_CFGR_EXTEN_B_0x1 = 1;
        /** @brief Hardware trigger detection on the falling edge */
    constexpr std::uint32_t ADC_CFGR_EXTEN_B_0x2 = 2;
        /** @brief Hardware trigger detection on both the rising and falling edges */
    constexpr std::uint32_t ADC_CFGR_EXTEN_B_0x3 = 3;

    /** @brief Overrun mode */
    using ADC_CFGR_OVRMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC_DR register is preserved with the old data when an overrun is detected. (value: 0)
     *          - B_0x1: ADC_DR register is overwritten with the last conversion result when an overrun is detected. (value: 1)
     */
        /** @brief ADC_DR register is preserved with the old data when an overrun is detected. */
    constexpr std::uint32_t ADC_CFGR_OVRMOD_B_0x0 = 0;
        /** @brief ADC_DR register is overwritten with the last conversion result when an overrun is detected. */
    constexpr std::uint32_t ADC_CFGR_OVRMOD_B_0x1 = 1;

    /** @brief Single / continuous conversion mode for regular conversions */
    using ADC_CFGR_CONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single conversion mode (value: 0)
     *          - B_0x1: Continuous conversion mode (value: 1)
     */
        /** @brief Single conversion mode */
    constexpr std::uint32_t ADC_CFGR_CONT_B_0x0 = 0;
        /** @brief Continuous conversion mode */
    constexpr std::uint32_t ADC_CFGR_CONT_B_0x1 = 1;

    /** @brief Delayed conversion mode */
    using ADC_CFGR_AUTDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Auto-delayed conversion mode off (value: 0)
     *          - B_0x1: Auto-delayed conversion mode on (value: 1)
     */
        /** @brief Auto-delayed conversion mode off */
    constexpr std::uint32_t ADC_CFGR_AUTDLY_B_0x0 = 0;
        /** @brief Auto-delayed conversion mode on */
    constexpr std::uint32_t ADC_CFGR_AUTDLY_B_0x1 = 1;

    /** @brief Data alignment */
    using ADC_CFGR_ALIGN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Right alignment (value: 0)
     *          - B_0x1: Left alignment (value: 1)
     */
        /** @brief Right alignment */
    constexpr std::uint32_t ADC_CFGR_ALIGN_B_0x0 = 0;
        /** @brief Left alignment */
    constexpr std::uint32_t ADC_CFGR_ALIGN_B_0x1 = 1;

    /** @brief Discontinuous mode for regular channels */
    using ADC_CFGR_DISCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Discontinuous mode for regular channels disabled (value: 0)
     *          - B_0x1: Discontinuous mode for regular channels enabled (value: 1)
     */
        /** @brief Discontinuous mode for regular channels disabled */
    constexpr std::uint32_t ADC_CFGR_DISCEN_B_0x0 = 0;
        /** @brief Discontinuous mode for regular channels enabled */
    constexpr std::uint32_t ADC_CFGR_DISCEN_B_0x1 = 1;

    /** @brief Discontinuous mode channel count */
    using ADC_CFGR_DISCNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 channel (value: 0)
     *          - B_0x1: 2 channels (value: 1)
     *          - B_0x7: 8 channels (value: 7)
     */
        /** @brief 1 channel */
    constexpr std::uint32_t ADC_CFGR_DISCNUM_B_0x0 = 0;
        /** @brief 2 channels */
    constexpr std::uint32_t ADC_CFGR_DISCNUM_B_0x1 = 1;
        /** @brief 8 channels */
    constexpr std::uint32_t ADC_CFGR_DISCNUM_B_0x7 = 7;

    /** @brief Discontinuous mode on injected channels */
    using ADC_CFGR_JDISCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Discontinuous mode on injected channels disabled (value: 0)
     *          - B_0x1: Discontinuous mode on injected channels enabled (value: 1)
     */
        /** @brief Discontinuous mode on injected channels disabled */
    constexpr std::uint32_t ADC_CFGR_JDISCEN_B_0x0 = 0;
        /** @brief Discontinuous mode on injected channels enabled */
    constexpr std::uint32_t ADC_CFGR_JDISCEN_B_0x1 = 1;

    /** @brief JSQR queue mode */
    using ADC_CFGR_JQM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: JSQR mode 0: The Queue is never empty and maintains the last written configuration into JSQR. (value: 0)
     *          - B_0x1: JSQR mode 1: The Queue can be empty and when this occurs, the software and hardware triggers of the injected sequence are both internally disabled just after the completion of the last valid injected sequence. (value: 1)
     */
        /** @brief JSQR mode 0: The Queue is never empty and maintains the last written configuration into JSQR. */
    constexpr std::uint32_t ADC_CFGR_JQM_B_0x0 = 0;
        /** @brief JSQR mode 1: The Queue can be empty and when this occurs, the software and hardware triggers of the injected sequence are both internally disabled just after the completion of the last valid injected sequence. */
    constexpr std::uint32_t ADC_CFGR_JQM_B_0x1 = 1;

    /** @brief Enable the watchdog 1 on a single channel or on all channels */
    using ADC_CFGR_AWD1SGL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 1 enabled on all channels (value: 0)
     *          - B_0x1: Analog watchdog 1 enabled on a single channel (value: 1)
     */
        /** @brief Analog watchdog 1 enabled on all channels */
    constexpr std::uint32_t ADC_CFGR_AWD1SGL_B_0x0 = 0;
        /** @brief Analog watchdog 1 enabled on a single channel */
    constexpr std::uint32_t ADC_CFGR_AWD1SGL_B_0x1 = 1;

    /** @brief Analog watchdog 1 enable on regular channels */
    using ADC_CFGR_AWD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 1 disabled on regular channels (value: 0)
     *          - B_0x1: Analog watchdog 1 enabled on regular channels (value: 1)
     */
        /** @brief Analog watchdog 1 disabled on regular channels */
    constexpr std::uint32_t ADC_CFGR_AWD1EN_B_0x0 = 0;
        /** @brief Analog watchdog 1 enabled on regular channels */
    constexpr std::uint32_t ADC_CFGR_AWD1EN_B_0x1 = 1;

    /** @brief Analog watchdog 1 enable on injected channels */
    using ADC_CFGR_JAWD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 1 disabled on injected channels (value: 0)
     *          - B_0x1: Analog watchdog 1 enabled on injected channels (value: 1)
     */
        /** @brief Analog watchdog 1 disabled on injected channels */
    constexpr std::uint32_t ADC_CFGR_JAWD1EN_B_0x0 = 0;
        /** @brief Analog watchdog 1 enabled on injected channels */
    constexpr std::uint32_t ADC_CFGR_JAWD1EN_B_0x1 = 1;

    /** @brief Automatic injected group conversion */
    using ADC_CFGR_JAUTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Automatic injected group conversion disabled (value: 0)
     *          - B_0x1: Automatic injected group conversion enabled (value: 1)
     */
        /** @brief Automatic injected group conversion disabled */
    constexpr std::uint32_t ADC_CFGR_JAUTO_B_0x0 = 0;
        /** @brief Automatic injected group conversion enabled */
    constexpr std::uint32_t ADC_CFGR_JAUTO_B_0x1 = 1;

    /** @brief Analog watchdog 1 channel selection */
    using ADC_CFGR_AWD1CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog input channel 0 monitored by AWD1 (available on ADC1 only) (value: 0)
     *          - B_0x1: ADC analog input channel 1 monitored by AWD1 (value: 1)
     *          - B_0x13: ADC analog input channel 19 monitored by AWD1 (value: 19)
     */
        /** @brief ADC analog input channel 0 monitored by AWD1 (available on ADC1 only) */
    constexpr std::uint32_t ADC_CFGR_AWD1CH_B_0x0 = 0;
        /** @brief ADC analog input channel 1 monitored by AWD1 */
    constexpr std::uint32_t ADC_CFGR_AWD1CH_B_0x1 = 1;
        /** @brief ADC analog input channel 19 monitored by AWD1 */
    constexpr std::uint32_t ADC_CFGR_AWD1CH_B_0x13 = 19;

    /** @brief Injected queue disable */
    using ADC_CFGR_JQDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected queue enabled (value: 0)
     *          - B_0x1: Injected queue disabled (value: 1)
     */
        /** @brief Injected queue enabled */
    constexpr std::uint32_t ADC_CFGR_JQDIS_B_0x0 = 0;
        /** @brief Injected queue disabled */
    constexpr std::uint32_t ADC_CFGR_JQDIS_B_0x1 = 1;

    /** @brief ADC configuration register 2 */
    using ADC_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular oversampling Enable */
    using ADC_CFGR2_ROVSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular oversampling disabled (value: 0)
     *          - B_0x1: Regular oversampling enabled (value: 1)
     */
        /** @brief Regular oversampling disabled */
    constexpr std::uint32_t ADC_CFGR2_ROVSE_B_0x0 = 0;
        /** @brief Regular oversampling enabled */
    constexpr std::uint32_t ADC_CFGR2_ROVSE_B_0x1 = 1;

    /** @brief Injected oversampling Enable */
    using ADC_CFGR2_JOVSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Injected oversampling disabled (value: 0)
     *          - B_0x1: Injected oversampling enabled (value: 1)
     */
        /** @brief Injected oversampling disabled */
    constexpr std::uint32_t ADC_CFGR2_JOVSE_B_0x0 = 0;
        /** @brief Injected oversampling enabled */
    constexpr std::uint32_t ADC_CFGR2_JOVSE_B_0x1 = 1;

    /** @brief Oversampling ratio */
    using ADC_CFGR2_OVSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2x (value: 0)
     *          - B_0x1: 4x (value: 1)
     *          - B_0x2: 8x (value: 2)
     *          - B_0x3: 16x (value: 3)
     *          - B_0x4: 32x (value: 4)
     *          - B_0x5: 64x (value: 5)
     *          - B_0x6: 128x (value: 6)
     *          - B_0x7: 256x (value: 7)
     */
        /** @brief 2x */
    constexpr std::uint32_t ADC_CFGR2_OVSR_B_0x0 = 0;
        /** @brief 4x */
    constexpr std::uint32_t ADC_CFGR2_OVSR_B_0x1 = 1;
        /** @brief 8x */
    constexpr std::uint32_t ADC_CFGR2_OVSR_B_0x2 = 2;
        /** @brief 16x */
    constexpr std::uint32_t ADC_CFGR2_OVSR_B_0x3 = 3;
        /** @brief 32x */
    constexpr std::uint32_t ADC_CFGR2_OVSR_B_0x4 = 4;
        /** @brief 64x */
    constexpr std::uint32_t ADC_CFGR2_OVSR_B_0x5 = 5;
        /** @brief 128x */
    constexpr std::uint32_t ADC_CFGR2_OVSR_B_0x6 = 6;
        /** @brief 256x */
    constexpr std::uint32_t ADC_CFGR2_OVSR_B_0x7 = 7;

    /** @brief Oversampling shift */
    using ADC_CFGR2_OVSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No shift (value: 0)
     *          - B_0x1: Shift 1-bit (value: 1)
     *          - B_0x2: Shift 2-bits (value: 2)
     *          - B_0x3: Shift 3-bits (value: 3)
     *          - B_0x4: Shift 4-bits (value: 4)
     *          - B_0x5: Shift 5-bits (value: 5)
     *          - B_0x6: Shift 6-bits (value: 6)
     *          - B_0x7: Shift 7-bits (value: 7)
     *          - B_0x8: Shift 8-bits (value: 8)
     */
        /** @brief No shift */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x0 = 0;
        /** @brief Shift 1-bit */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x1 = 1;
        /** @brief Shift 2-bits */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x2 = 2;
        /** @brief Shift 3-bits */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x3 = 3;
        /** @brief Shift 4-bits */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x4 = 4;
        /** @brief Shift 5-bits */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x5 = 5;
        /** @brief Shift 6-bits */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x6 = 6;
        /** @brief Shift 7-bits */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x7 = 7;
        /** @brief Shift 8-bits */
    constexpr std::uint32_t ADC_CFGR2_OVSS_B_0x8 = 8;

    /** @brief Triggered Regular oversampling */
    using ADC_CFGR2_TROVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All oversampled conversions for a channel are done consecutively following a trigger (value: 0)
     *          - B_0x1: Each oversampled conversion for a channel needs a new trigger (value: 1)
     */
        /** @brief All oversampled conversions for a channel are done consecutively following a trigger */
    constexpr std::uint32_t ADC_CFGR2_TROVS_B_0x0 = 0;
        /** @brief Each oversampled conversion for a channel needs a new trigger */
    constexpr std::uint32_t ADC_CFGR2_TROVS_B_0x1 = 1;

    /** @brief Regular oversampling mode */
    using ADC_CFGR2_ROVSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Continued mode: When injected conversions are triggered, the oversampling is temporary stopped and continued after the injection sequence (oversampling buffer is maintained during injected sequence) (value: 0)
     *          - B_0x1: Resumed mode: When injected conversions are triggered, the current oversampling is aborted and resumed from start after the injection sequence (oversampling buffer is zeroed by injected sequence start) (value: 1)
     */
        /** @brief Continued mode: When injected conversions are triggered, the oversampling is temporary stopped and continued after the injection sequence (oversampling buffer is maintained during injected sequence) */
    constexpr std::uint32_t ADC_CFGR2_ROVSM_B_0x0 = 0;
        /** @brief Resumed mode: When injected conversions are triggered, the current oversampling is aborted and resumed from start after the injection sequence (oversampling buffer is zeroed by injected sequence start) */
    constexpr std::uint32_t ADC_CFGR2_ROVSM_B_0x1 = 1;

    /** @brief Software trigger bit for sampling time control trigger mode */
    using ADC_CFGR2_SWTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Software trigger starts the conversion for sampling time control trigger mode (value: 0)
     *          - B_0x1: Software trigger starts the sampling for sampling time control trigger mode (value: 1)
     */
        /** @brief Software trigger starts the conversion for sampling time control trigger mode */
    constexpr std::uint32_t ADC_CFGR2_SWTRIG_B_0x0 = 0;
        /** @brief Software trigger starts the sampling for sampling time control trigger mode */
    constexpr std::uint32_t ADC_CFGR2_SWTRIG_B_0x1 = 1;

    /** @brief Bulb sampling mode */
    using ADC_CFGR2_BULB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bulb sampling mode disabled (value: 0)
     *          - B_0x1: Bulb sampling mode enabled. (value: 1)
     */
        /** @brief Bulb sampling mode disabled */
    constexpr std::uint32_t ADC_CFGR2_BULB_B_0x0 = 0;
        /** @brief Bulb sampling mode enabled. */
    constexpr std::uint32_t ADC_CFGR2_BULB_B_0x1 = 1;

    /** @brief Sampling time control trigger mode */
    using ADC_CFGR2_SMPTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time control trigger mode disabled (value: 0)
     *          - B_0x1: Sampling time control trigger mode enabled (value: 1)
     */
        /** @brief Sampling time control trigger mode disabled */
    constexpr std::uint32_t ADC_CFGR2_SMPTRIG_B_0x0 = 0;
        /** @brief Sampling time control trigger mode enabled */
    constexpr std::uint32_t ADC_CFGR2_SMPTRIG_B_0x1 = 1;

    /** @brief ADC sample time register 1 */
    using ADC_SMPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel x sampling time selection (x=9 to 0) */
    using ADC_SMPR1_SMP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR1_SMP0_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=9 to 0) */
    using ADC_SMPR1_SMP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR1_SMP1_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=9 to 0) */
    using ADC_SMPR1_SMP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR1_SMP2_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=9 to 0) */
    using ADC_SMPR1_SMP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR1_SMP3_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=9 to 0) */
    using ADC_SMPR1_SMP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR1_SMP4_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=9 to 0) */
    using ADC_SMPR1_SMP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR1_SMP5_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=9 to 0) */
    using ADC_SMPR1_SMP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR1_SMP6_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=9 to 0) */
    using ADC_SMPR1_SMP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR1_SMP7_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=9 to 0) */
    using ADC_SMPR1_SMP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR1_SMP8_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=9 to 0) */
    using ADC_SMPR1_SMP9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR1_SMP9_B_0x7 = 7;

    /** @brief Addition of one clock cycle to the sampling time. */
    using ADC_SMPR1_SMPPLUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 2. (value: 1)
     *          - B_0x0: The sampling time remains set to 2. (value: 0)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR1_SMPPLUS_B_0x1 = 1;
        /** @brief The sampling time remains set to 2. */
    constexpr std::uint32_t ADC_SMPR1_SMPPLUS_B_0x0 = 0;

    /** @brief ADC sample time register 2 */
    using ADC_SMPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel x sampling time selection (x=19 to 10) */
    using ADC_SMPR2_SMP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR2_SMP10_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=19 to 10) */
    using ADC_SMPR2_SMP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR2_SMP11_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=19 to 10) */
    using ADC_SMPR2_SMP12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR2_SMP12_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=19 to 10) */
    using ADC_SMPR2_SMP13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR2_SMP13_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=19 to 10) */
    using ADC_SMPR2_SMP14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR2_SMP14_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=19 to 10) */
    using ADC_SMPR2_SMP15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR2_SMP15_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=19 to 10) */
    using ADC_SMPR2_SMP16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR2_SMP16_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=19 to 10) */
    using ADC_SMPR2_SMP17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR2_SMP17_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=19 to 10) */
    using ADC_SMPR2_SMP18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR2_SMP18_B_0x7 = 7;

    /** @brief Channel x sampling time selection (x=19 to 10) */
    using ADC_SMPR2_SMP19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2. (value: 0)
     *          - B_0x1: 6. (value: 1)
     *          - B_0x2: 12. (value: 2)
     *          - B_0x3: 24. (value: 3)
     *          - B_0x4: 47. (value: 4)
     *          - B_0x5: 92. (value: 5)
     *          - B_0x6: 247. (value: 6)
     *          - B_0x7: 640. (value: 7)
     */
        /** @brief 2. */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x0 = 0;
        /** @brief 6. */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x1 = 1;
        /** @brief 12. */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x2 = 2;
        /** @brief 24. */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x3 = 3;
        /** @brief 47. */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x4 = 4;
        /** @brief 92. */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x5 = 5;
        /** @brief 247. */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x6 = 6;
        /** @brief 640. */
    constexpr std::uint32_t ADC_SMPR2_SMP19_B_0x7 = 7;

    /** @brief ADC watchdog threshold register 1 */
    using ADC_TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 lower threshold */
    using ADC_TR1_LT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog filtering parameter */
    using ADC_TR1_AWDFILT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No filtering (value: 0)
     *          - B_0x1: two consecutive detection generates an AWDx flag or an interrupt (value: 1)
     *          - B_0x7: Eight consecutive detection generates an AWDx flag or an interrupt (value: 7)
     */
        /** @brief No filtering */
    constexpr std::uint32_t ADC_TR1_AWDFILT_B_0x0 = 0;
        /** @brief two consecutive detection generates an AWDx flag or an interrupt */
    constexpr std::uint32_t ADC_TR1_AWDFILT_B_0x1 = 1;
        /** @brief Eight consecutive detection generates an AWDx flag or an interrupt */
    constexpr std::uint32_t ADC_TR1_AWDFILT_B_0x7 = 7;

    /** @brief Analog watchdog 1 higher threshold */
    using ADC_TR1_HT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC watchdog threshold register 2 */
    using ADC_TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 lower threshold */
    using ADC_TR2_LT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 higher threshold */
    using ADC_TR2_HT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC watchdog threshold register 3 */
    using ADC_TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 lower threshold */
    using ADC_TR3_LT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 higher threshold */
    using ADC_TR3_HT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief ADC regular data register */
    using ADC_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data converted */
    using ADC_DR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief External Trigger Selection for injected group */
    using ADC_JSQR_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: adc_jext_trg0 (value: 0)
     *          - B_0x1: adc_jext_trg1 (value: 1)
     *          - B_0x2: adc_jext_trg2 (value: 2)
     *          - B_0x3: adc_jext_trg3 (value: 3)
     *          - B_0x4: adc_jext_trg4 (value: 4)
     *          - B_0x5: adc_jext_trg5 (value: 5)
     *          - B_0x6: adc_jext_trg6 (value: 6)
     *          - B_0x7: adc_jext_trg7 (value: 7)
     *          - B_0x1F: adc_jext_trg31 (value: 31)
     */
        /** @brief adc_jext_trg0 */
    constexpr std::uint32_t ADC_JSQR_JEXTSEL_B_0x0 = 0;
        /** @brief adc_jext_trg1 */
    constexpr std::uint32_t ADC_JSQR_JEXTSEL_B_0x1 = 1;
        /** @brief adc_jext_trg2 */
    constexpr std::uint32_t ADC_JSQR_JEXTSEL_B_0x2 = 2;
        /** @brief adc_jext_trg3 */
    constexpr std::uint32_t ADC_JSQR_JEXTSEL_B_0x3 = 3;
        /** @brief adc_jext_trg4 */
    constexpr std::uint32_t ADC_JSQR_JEXTSEL_B_0x4 = 4;
        /** @brief adc_jext_trg5 */
    constexpr std::uint32_t ADC_JSQR_JEXTSEL_B_0x5 = 5;
        /** @brief adc_jext_trg6 */
    constexpr std::uint32_t ADC_JSQR_JEXTSEL_B_0x6 = 6;
        /** @brief adc_jext_trg7 */
    constexpr std::uint32_t ADC_JSQR_JEXTSEL_B_0x7 = 7;
        /** @brief adc_jext_trg31 */
    constexpr std::uint32_t ADC_JSQR_JEXTSEL_B_0x1F = 31;

    /** @brief External trigger enable and polarity selection for injected channels */
    using ADC_JSQR_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If JQDIS=0 (queue enabled), hardware and software trigger detection disabled. (value: 0)
     *          - B_0x1: Hardware trigger detection on the rising edge (value: 1)
     *          - B_0x2: Hardware trigger detection on the falling edge (value: 2)
     *          - B_0x3: Hardware trigger detection on both the rising and falling edges (value: 3)
     */
        /** @brief If JQDIS=0 (queue enabled), hardware and software trigger detection disabled. */
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
    /** @brief ADC offset 1 register */
    using ADC_OFR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset y for the channel programmed into bits OFFSET_CH[4:0] */
    using ADC_OFR1_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Positive offset */
    using ADC_OFR1_OFFSETPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Negative offset (value: 0)
     *          - B_0x1: Positive offset (value: 1)
     */
        /** @brief Negative offset */
    constexpr std::uint32_t ADC_OFR1_OFFSETPOS_B_0x0 = 0;
        /** @brief Positive offset */
    constexpr std::uint32_t ADC_OFR1_OFFSETPOS_B_0x1 = 1;

    /** @brief Saturation enable */
    using ADC_OFR1_SATEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No saturation control, offset result can be signed (value: 0)
     *          - B_0x1: Saturation enabled, offset result unsigned and saturated at 0x000 and 0xFFF (value: 1)
     */
        /** @brief No saturation control, offset result can be signed */
    constexpr std::uint32_t ADC_OFR1_SATEN_B_0x0 = 0;
        /** @brief Saturation enabled, offset result unsigned and saturated at 0x000 and 0xFFF */
    constexpr std::uint32_t ADC_OFR1_SATEN_B_0x1 = 1;

    /** @brief Channel selection for the data offset y */
    using ADC_OFR1_OFFSET_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset y enable */
    using ADC_OFR1_OFFSET_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset 2 register */
    using ADC_OFR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset y for the channel programmed into bits OFFSET_CH[4:0] */
    using ADC_OFR2_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Positive offset */
    using ADC_OFR2_OFFSETPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Negative offset (value: 0)
     *          - B_0x1: Positive offset (value: 1)
     */
        /** @brief Negative offset */
    constexpr std::uint32_t ADC_OFR2_OFFSETPOS_B_0x0 = 0;
        /** @brief Positive offset */
    constexpr std::uint32_t ADC_OFR2_OFFSETPOS_B_0x1 = 1;

    /** @brief Saturation enable */
    using ADC_OFR2_SATEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No saturation control, offset result can be signed (value: 0)
     *          - B_0x1: Saturation enabled, offset result unsigned and saturated at 0x000 and 0xFFF (value: 1)
     */
        /** @brief No saturation control, offset result can be signed */
    constexpr std::uint32_t ADC_OFR2_SATEN_B_0x0 = 0;
        /** @brief Saturation enabled, offset result unsigned and saturated at 0x000 and 0xFFF */
    constexpr std::uint32_t ADC_OFR2_SATEN_B_0x1 = 1;

    /** @brief Channel selection for the data offset y */
    using ADC_OFR2_OFFSET_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset y enable */
    using ADC_OFR2_OFFSET_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset 3 register */
    using ADC_OFR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset y for the channel programmed into bits OFFSET_CH[4:0] */
    using ADC_OFR3_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Positive offset */
    using ADC_OFR3_OFFSETPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Negative offset (value: 0)
     *          - B_0x1: Positive offset (value: 1)
     */
        /** @brief Negative offset */
    constexpr std::uint32_t ADC_OFR3_OFFSETPOS_B_0x0 = 0;
        /** @brief Positive offset */
    constexpr std::uint32_t ADC_OFR3_OFFSETPOS_B_0x1 = 1;

    /** @brief Saturation enable */
    using ADC_OFR3_SATEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No saturation control, offset result can be signed (value: 0)
     *          - B_0x1: Saturation enabled, offset result unsigned and saturated at 0x000 and 0xFFF (value: 1)
     */
        /** @brief No saturation control, offset result can be signed */
    constexpr std::uint32_t ADC_OFR3_SATEN_B_0x0 = 0;
        /** @brief Saturation enabled, offset result unsigned and saturated at 0x000 and 0xFFF */
    constexpr std::uint32_t ADC_OFR3_SATEN_B_0x1 = 1;

    /** @brief Channel selection for the data offset y */
    using ADC_OFR3_OFFSET_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset y enable */
    using ADC_OFR3_OFFSET_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset 4 register */
    using ADC_OFR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset y for the channel programmed into bits OFFSET_CH[4:0] */
    using ADC_OFR4_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Positive offset */
    using ADC_OFR4_OFFSETPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Negative offset (value: 0)
     *          - B_0x1: Positive offset (value: 1)
     */
        /** @brief Negative offset */
    constexpr std::uint32_t ADC_OFR4_OFFSETPOS_B_0x0 = 0;
        /** @brief Positive offset */
    constexpr std::uint32_t ADC_OFR4_OFFSETPOS_B_0x1 = 1;

    /** @brief Saturation enable */
    using ADC_OFR4_SATEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No saturation control, offset result can be signed (value: 0)
     *          - B_0x1: Saturation enabled, offset result unsigned and saturated at 0x000 and 0xFFF (value: 1)
     */
        /** @brief No saturation control, offset result can be signed */
    constexpr std::uint32_t ADC_OFR4_SATEN_B_0x0 = 0;
        /** @brief Saturation enabled, offset result unsigned and saturated at 0x000 and 0xFFF */
    constexpr std::uint32_t ADC_OFR4_SATEN_B_0x1 = 1;

    /** @brief Channel selection for the data offset y */
    using ADC_OFR4_OFFSET_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset y enable */
    using ADC_OFR4_OFFSET_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC injected channel 1 data register */
    using ADC_JDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using ADC_JDR1_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC injected channel 2 data register */
    using ADC_JDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using ADC_JDR2_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC injected channel 3 data register */
    using ADC_JDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using ADC_JDR3_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC injected channel 4 data register */
    using ADC_JDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using ADC_JDR4_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC analog watchdog 2 configuration register */
    using ADC_AWD2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 channel selection */
    using ADC_AWD2CR_AWD2CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC analog watchdog 3 configuration register */
    using ADC_AWD3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 channel selection */
    using ADC_AWD3CR_AWD3CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC Differential mode selection register */
    using ADC_DIFSEL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Differential mode for channels 19 to 0. */
    using ADC_DIFSEL_DIFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC calibration factors */
    using ADC_CALFACT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration Factors In single-ended mode */
    using ADC_CALFACT_CALFACT_S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration Factors in differential mode */
    using ADC_CALFACT_CALFACT_D = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC option register */
    using ADC_OR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option bit 0 */
    using ADC_OR_OP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDCORE less than/sub>channel disabled (value: 0)
     *          - B_0x1: Vless thansub>DDCORE less than/sub>channel enabled (value: 1)
     */
        /** @brief Vless thansub>DDCORE less than/sub>channel disabled */
    constexpr std::uint32_t ADC_OR_OP0_B_0x0 = 0;
        /** @brief Vless thansub>DDCORE less than/sub>channel enabled */
    constexpr std::uint32_t ADC_OR_OP0_B_0x1 = 1;

}

#endif
