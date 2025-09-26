/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA6M_ADC4_HPP
#define EMBEDDED_PP_STM32WBA6M_ADC4_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief ADC4 address block description */
namespace STM32WBA6M::ADC4 {

    /** @brief ADC interrupt and status register */
    using ADC4_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC ready */
    using ADC4_ISR_ADRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC not yet ready to start conversion (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: ADC is ready to start conversion (value: 1)
     */
        /** @brief ADC not yet ready to start conversion (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC4_ISR_ADRDY_B_0x0 = 0;
        /** @brief ADC is ready to start conversion */
    constexpr std::uint32_t ADC4_ISR_ADRDY_B_0x1 = 1;

    /** @brief End of sampling flag */
    using ADC4_ISR_EOSMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not at the end of the sampling phase (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: End of sampling phase reached (value: 1)
     */
        /** @brief Not at the end of the sampling phase (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC4_ISR_EOSMP_B_0x0 = 0;
        /** @brief End of sampling phase reached */
    constexpr std::uint32_t ADC4_ISR_EOSMP_B_0x1 = 1;

    /** @brief End of conversion flag */
    using ADC4_ISR_EOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel conversion not complete (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Channel conversion complete (value: 1)
     */
        /** @brief Channel conversion not complete (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC4_ISR_EOC_B_0x0 = 0;
        /** @brief Channel conversion complete */
    constexpr std::uint32_t ADC4_ISR_EOC_B_0x1 = 1;

    /** @brief End of sequence flag */
    using ADC4_ISR_EOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Conversion sequence not complete (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Conversion sequence complete (value: 1)
     */
        /** @brief Conversion sequence not complete (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC4_ISR_EOS_B_0x0 = 0;
        /** @brief Conversion sequence complete */
    constexpr std::uint32_t ADC4_ISR_EOS_B_0x1 = 1;

    /** @brief ADC overrun */
    using ADC4_ISR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Overrun has occurred (value: 1)
     */
        /** @brief No overrun occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC4_ISR_OVR_B_0x0 = 0;
        /** @brief Overrun has occurred */
    constexpr std::uint32_t ADC4_ISR_OVR_B_0x1 = 1;

    /** @brief Analog watchdog 1 flag */
    using ADC4_ISR_AWD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Analog watchdog event occurred (value: 1)
     */
        /** @brief No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC4_ISR_AWD1_B_0x0 = 0;
        /** @brief Analog watchdog event occurred */
    constexpr std::uint32_t ADC4_ISR_AWD1_B_0x1 = 1;

    /** @brief Analog watchdog 2 flag */
    using ADC4_ISR_AWD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Analog watchdog event occurred (value: 1)
     */
        /** @brief No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC4_ISR_AWD2_B_0x0 = 0;
        /** @brief Analog watchdog event occurred */
    constexpr std::uint32_t ADC4_ISR_AWD2_B_0x1 = 1;

    /** @brief Analog watchdog 3 flag */
    using ADC4_ISR_AWD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Analog watchdog event occurred (value: 1)
     */
        /** @brief No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC4_ISR_AWD3_B_0x0 = 0;
        /** @brief Analog watchdog event occurred */
    constexpr std::uint32_t ADC4_ISR_AWD3_B_0x1 = 1;

    /** @brief End of calibration flag */
    using ADC4_ISR_EOCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration is not complete (value: 0)
     *          - B_0x1: Calibration is complete (value: 1)
     */
        /** @brief Calibration is not complete */
    constexpr std::uint32_t ADC4_ISR_EOCAL_B_0x0 = 0;
        /** @brief Calibration is complete */
    constexpr std::uint32_t ADC4_ISR_EOCAL_B_0x1 = 1;

    /** @brief LDO ready */
    using ADC4_ISR_LDORDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC voltage regulator disabled (value: 0)
     *          - B_0x1: ADC voltage regulator enabled and stabilized (value: 1)
     */
        /** @brief ADC voltage regulator disabled */
    constexpr std::uint32_t ADC4_ISR_LDORDY_B_0x0 = 0;
        /** @brief ADC voltage regulator enabled and stabilized */
    constexpr std::uint32_t ADC4_ISR_LDORDY_B_0x1 = 1;

    /** @brief ADC interrupt enable register */
    using ADC4_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC ready interrupt enable */
    using ADC4_IER_ADRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADRDY interrupt disabled. (value: 0)
     *          - B_0x1: ADRDY interrupt enabled. (value: 1)
     */
        /** @brief ADRDY interrupt disabled. */
    constexpr std::uint32_t ADC4_IER_ADRDYIE_B_0x0 = 0;
        /** @brief ADRDY interrupt enabled. */
    constexpr std::uint32_t ADC4_IER_ADRDYIE_B_0x1 = 1;

    /** @brief End of sampling flag interrupt enable */
    using ADC4_IER_EOSMPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOSMP interrupt disabled. (value: 0)
     *          - B_0x1: EOSMP interrupt enabled. (value: 1)
     */
        /** @brief EOSMP interrupt disabled. */
    constexpr std::uint32_t ADC4_IER_EOSMPIE_B_0x0 = 0;
        /** @brief EOSMP interrupt enabled. */
    constexpr std::uint32_t ADC4_IER_EOSMPIE_B_0x1 = 1;

    /** @brief End of conversion interrupt enable */
    using ADC4_IER_EOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOC interrupt disabled (value: 0)
     *          - B_0x1: EOC interrupt enabled. (value: 1)
     */
        /** @brief EOC interrupt disabled */
    constexpr std::uint32_t ADC4_IER_EOCIE_B_0x0 = 0;
        /** @brief EOC interrupt enabled. */
    constexpr std::uint32_t ADC4_IER_EOCIE_B_0x1 = 1;

    /** @brief End of conversion sequence interrupt enable */
    using ADC4_IER_EOSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOS interrupt disabled (value: 0)
     *          - B_0x1: EOS interrupt enabled. (value: 1)
     */
        /** @brief EOS interrupt disabled */
    constexpr std::uint32_t ADC4_IER_EOSIE_B_0x0 = 0;
        /** @brief EOS interrupt enabled. */
    constexpr std::uint32_t ADC4_IER_EOSIE_B_0x1 = 1;

    /** @brief Overrun interrupt enable */
    using ADC4_IER_OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Overrun interrupt disabled (value: 0)
     *          - B_0x1: Overrun interrupt enabled. (value: 1)
     */
        /** @brief Overrun interrupt disabled */
    constexpr std::uint32_t ADC4_IER_OVRIE_B_0x0 = 0;
        /** @brief Overrun interrupt enabled. */
    constexpr std::uint32_t ADC4_IER_OVRIE_B_0x1 = 1;

    /** @brief Analog watchdog 1 interrupt enable */
    using ADC4_IER_AWD1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt disabled */
    constexpr std::uint32_t ADC4_IER_AWD1IE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt enabled */
    constexpr std::uint32_t ADC4_IER_AWD1IE_B_0x1 = 1;

    /** @brief Analog watchdog 2 interrupt enable */
    using ADC4_IER_AWD2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt disabled */
    constexpr std::uint32_t ADC4_IER_AWD2IE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt enabled */
    constexpr std::uint32_t ADC4_IER_AWD2IE_B_0x1 = 1;

    /** @brief Analog watchdog 3 interrupt enable */
    using ADC4_IER_AWD3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt disabled */
    constexpr std::uint32_t ADC4_IER_AWD3IE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt enabled */
    constexpr std::uint32_t ADC4_IER_AWD3IE_B_0x1 = 1;

    /** @brief End of calibration interrupt enable */
    using ADC4_IER_EOCALIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of calibration interrupt disabled (value: 0)
     *          - B_0x1: End of calibration interrupt enabled (value: 1)
     */
        /** @brief End of calibration interrupt disabled */
    constexpr std::uint32_t ADC4_IER_EOCALIE_B_0x0 = 0;
        /** @brief End of calibration interrupt enabled */
    constexpr std::uint32_t ADC4_IER_EOCALIE_B_0x1 = 1;

    /** @brief LDO ready interrupt enable */
    using ADC4_IER_LDORDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LDO ready interrupt disabled (value: 0)
     *          - B_0x1: LDO ready interrupt enabled. (value: 1)
     */
        /** @brief LDO ready interrupt disabled */
    constexpr std::uint32_t ADC4_IER_LDORDYIE_B_0x0 = 0;
        /** @brief LDO ready interrupt enabled. */
    constexpr std::uint32_t ADC4_IER_LDORDYIE_B_0x1 = 1;

    /** @brief ADC control register */
    using ADC4_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC enable command */
    using ADC4_CR_ADEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC is disabled (OFF state) (value: 0)
     *          - B_0x1: Write 1 to enable the ADC. (value: 1)
     */
        /** @brief ADC is disabled (OFF state) */
    constexpr std::uint32_t ADC4_CR_ADEN_B_0x0 = 0;
        /** @brief Write 1 to enable the ADC. */
    constexpr std::uint32_t ADC4_CR_ADEN_B_0x1 = 1;

    /** @brief ADC disable command */
    using ADC4_CR_ADDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADDIS command ongoing (value: 0)
     *          - B_0x1: Write 1 to disable the ADC. (value: 1)
     */
        /** @brief No ADDIS command ongoing */
    constexpr std::uint32_t ADC4_CR_ADDIS_B_0x0 = 0;
        /** @brief Write 1 to disable the ADC. */
    constexpr std::uint32_t ADC4_CR_ADDIS_B_0x1 = 1;

    /** @brief ADC start conversion command */
    using ADC4_CR_ADSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC conversion is ongoing. (value: 0)
     *          - B_0x1: Write 1 to start the ADC. (value: 1)
     */
        /** @brief No ADC conversion is ongoing. */
    constexpr std::uint32_t ADC4_CR_ADSTART_B_0x0 = 0;
        /** @brief Write 1 to start the ADC. */
    constexpr std::uint32_t ADC4_CR_ADSTART_B_0x1 = 1;

    /** @brief ADC stop conversion command */
    using ADC4_CR_ADSTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC stop conversion command ongoing (value: 0)
     *          - B_0x1: Write 1 to stop the ADC. (value: 1)
     */
        /** @brief No ADC stop conversion command ongoing */
    constexpr std::uint32_t ADC4_CR_ADSTP_B_0x0 = 0;
        /** @brief Write 1 to stop the ADC. */
    constexpr std::uint32_t ADC4_CR_ADSTP_B_0x1 = 1;

    /** @brief ADC voltage regulator enable */
    using ADC4_CR_ADVREGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC voltage regulator disabled (value: 0)
     *          - B_0x1: ADC voltage regulator enabled (value: 1)
     */
        /** @brief ADC voltage regulator disabled */
    constexpr std::uint32_t ADC4_CR_ADVREGEN_B_0x0 = 0;
        /** @brief ADC voltage regulator enabled */
    constexpr std::uint32_t ADC4_CR_ADVREGEN_B_0x1 = 1;

    /** @brief ADC calibration */
    using ADC4_CR_ADCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration complete (value: 0)
     *          - B_0x1: Write 1 to calibrate the ADC. (value: 1)
     */
        /** @brief Calibration complete */
    constexpr std::uint32_t ADC4_CR_ADCAL_B_0x0 = 0;
        /** @brief Write 1 to calibrate the ADC. */
    constexpr std::uint32_t ADC4_CR_ADCAL_B_0x1 = 1;

    /** @brief ADC configuration register 1 */
    using ADC4_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direct memory access enable */
    using ADC4_CFGR1_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA disabled (value: 0)
     *          - B_0x1: DMA enabled (value: 1)
     */
        /** @brief DMA disabled */
    constexpr std::uint32_t ADC4_CFGR1_DMAEN_B_0x0 = 0;
        /** @brief DMA enabled */
    constexpr std::uint32_t ADC4_CFGR1_DMAEN_B_0x1 = 1;

    /** @brief Direct memory access configuration */
    using ADC4_CFGR1_DMACFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA one-shot mode selected (value: 0)
     *          - B_0x1: DMA circular mode selected (value: 1)
     */
        /** @brief DMA one-shot mode selected */
    constexpr std::uint32_t ADC4_CFGR1_DMACFG_B_0x0 = 0;
        /** @brief DMA circular mode selected */
    constexpr std::uint32_t ADC4_CFGR1_DMACFG_B_0x1 = 1;

    /** @brief Data resolution */
    using ADC4_CFGR1_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 12 bits (value: 0)
     *          - B_0x1: 10 bits (value: 1)
     *          - B_0x2: 8 bits (value: 2)
     *          - B_0x3: 6 bits (value: 3)
     */
        /** @brief 12 bits */
    constexpr std::uint32_t ADC4_CFGR1_RES_B_0x0 = 0;
        /** @brief 10 bits */
    constexpr std::uint32_t ADC4_CFGR1_RES_B_0x1 = 1;
        /** @brief 8 bits */
    constexpr std::uint32_t ADC4_CFGR1_RES_B_0x2 = 2;
        /** @brief 6 bits */
    constexpr std::uint32_t ADC4_CFGR1_RES_B_0x3 = 3;

    /** @brief Scan sequence direction */
    using ADC4_CFGR1_SCANDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Upward scan (from CHSEL0 to CHSEL13) (value: 0)
     *          - B_0x1: Backward scan (from CHSEL13 to CHSEL0) (value: 1)
     */
        /** @brief Upward scan (from CHSEL0 to CHSEL13) */
    constexpr std::uint32_t ADC4_CFGR1_SCANDIR_B_0x0 = 0;
        /** @brief Backward scan (from CHSEL13 to CHSEL0) */
    constexpr std::uint32_t ADC4_CFGR1_SCANDIR_B_0x1 = 1;

    /** @brief Data alignment */
    using ADC4_CFGR1_ALIGN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Right alignment (value: 0)
     *          - B_0x1: Left alignment (value: 1)
     */
        /** @brief Right alignment */
    constexpr std::uint32_t ADC4_CFGR1_ALIGN_B_0x0 = 0;
        /** @brief Left alignment */
    constexpr std::uint32_t ADC4_CFGR1_ALIGN_B_0x1 = 1;

    /** @brief External trigger selection */
    using ADC4_CFGR1_EXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: adc_trg0 (value: 0)
     *          - B_0x1: adc_trg1 (value: 1)
     *          - B_0x2: adc_trg2 (value: 2)
     *          - B_0x3: adc_trg3 (value: 3)
     *          - B_0x4: adc_trg4 (value: 4)
     *          - B_0x5: adc_trg5 (value: 5)
     *          - B_0x6: adc_trg6 (value: 6)
     *          - B_0x7: adc_trg7 (value: 7)
     */
        /** @brief adc_trg0 */
    constexpr std::uint32_t ADC4_CFGR1_EXTSEL_B_0x0 = 0;
        /** @brief adc_trg1 */
    constexpr std::uint32_t ADC4_CFGR1_EXTSEL_B_0x1 = 1;
        /** @brief adc_trg2 */
    constexpr std::uint32_t ADC4_CFGR1_EXTSEL_B_0x2 = 2;
        /** @brief adc_trg3 */
    constexpr std::uint32_t ADC4_CFGR1_EXTSEL_B_0x3 = 3;
        /** @brief adc_trg4 */
    constexpr std::uint32_t ADC4_CFGR1_EXTSEL_B_0x4 = 4;
        /** @brief adc_trg5 */
    constexpr std::uint32_t ADC4_CFGR1_EXTSEL_B_0x5 = 5;
        /** @brief adc_trg6 */
    constexpr std::uint32_t ADC4_CFGR1_EXTSEL_B_0x6 = 6;
        /** @brief adc_trg7 */
    constexpr std::uint32_t ADC4_CFGR1_EXTSEL_B_0x7 = 7;

    /** @brief External trigger enable and polarity selection */
    using ADC4_CFGR1_EXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware trigger detection disabled (conversions can be started by software) (value: 0)
     *          - B_0x1: Hardware trigger detection on the rising edge (value: 1)
     *          - B_0x2: Hardware trigger detection on the falling edge (value: 2)
     *          - B_0x3: Hardware trigger detection on both the rising and falling edges (value: 3)
     */
        /** @brief Hardware trigger detection disabled (conversions can be started by software) */
    constexpr std::uint32_t ADC4_CFGR1_EXTEN_B_0x0 = 0;
        /** @brief Hardware trigger detection on the rising edge */
    constexpr std::uint32_t ADC4_CFGR1_EXTEN_B_0x1 = 1;
        /** @brief Hardware trigger detection on the falling edge */
    constexpr std::uint32_t ADC4_CFGR1_EXTEN_B_0x2 = 2;
        /** @brief Hardware trigger detection on both the rising and falling edges */
    constexpr std::uint32_t ADC4_CFGR1_EXTEN_B_0x3 = 3;

    /** @brief Overrun management mode */
    using ADC4_CFGR1_OVRMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC_DR register is preserved with the old data when an overrun is detected. (value: 0)
     *          - B_0x1: ADC_DR register is overwritten with the last conversion result when an overrun is detected. (value: 1)
     */
        /** @brief ADC_DR register is preserved with the old data when an overrun is detected. */
    constexpr std::uint32_t ADC4_CFGR1_OVRMOD_B_0x0 = 0;
        /** @brief ADC_DR register is overwritten with the last conversion result when an overrun is detected. */
    constexpr std::uint32_t ADC4_CFGR1_OVRMOD_B_0x1 = 1;

    /** @brief Single / continuous conversion mode */
    using ADC4_CFGR1_CONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single conversion mode (value: 0)
     *          - B_0x1: Continuous conversion mode (value: 1)
     */
        /** @brief Single conversion mode */
    constexpr std::uint32_t ADC4_CFGR1_CONT_B_0x0 = 0;
        /** @brief Continuous conversion mode */
    constexpr std::uint32_t ADC4_CFGR1_CONT_B_0x1 = 1;

    /** @brief Wait conversion mode */
    using ADC4_CFGR1_WAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wait conversion mode off (value: 0)
     *          - B_0x1: Wait conversion mode on (value: 1)
     */
        /** @brief Wait conversion mode off */
    constexpr std::uint32_t ADC4_CFGR1_WAIT_B_0x0 = 0;
        /** @brief Wait conversion mode on */
    constexpr std::uint32_t ADC4_CFGR1_WAIT_B_0x1 = 1;

    /** @brief Discontinuous mode */
    using ADC4_CFGR1_DISCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Discontinuous mode disabled (value: 0)
     *          - B_0x1: Discontinuous mode enabled (value: 1)
     */
        /** @brief Discontinuous mode disabled */
    constexpr std::uint32_t ADC4_CFGR1_DISCEN_B_0x0 = 0;
        /** @brief Discontinuous mode enabled */
    constexpr std::uint32_t ADC4_CFGR1_DISCEN_B_0x1 = 1;

    /** @brief Mode selection of the ADC_CHSELR register */
    using ADC4_CFGR1_CHSELRMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Each bit of the ADC_CHSELR register enables an input (value: 0)
     *          - B_0x1: ADC_CHSELR register is able to sequence up to 8 channels (value: 1)
     */
        /** @brief Each bit of the ADC_CHSELR register enables an input */
    constexpr std::uint32_t ADC4_CFGR1_CHSELRMOD_B_0x0 = 0;
        /** @brief ADC_CHSELR register is able to sequence up to 8 channels */
    constexpr std::uint32_t ADC4_CFGR1_CHSELRMOD_B_0x1 = 1;

    /** @brief Enable the watchdog on a single channel or on all channels */
    using ADC4_CFGR1_AWD1SGL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 1 enabled on all channels (value: 0)
     *          - B_0x1: Analog watchdog 1 enabled on a single channel (value: 1)
     */
        /** @brief Analog watchdog 1 enabled on all channels */
    constexpr std::uint32_t ADC4_CFGR1_AWD1SGL_B_0x0 = 0;
        /** @brief Analog watchdog 1 enabled on a single channel */
    constexpr std::uint32_t ADC4_CFGR1_AWD1SGL_B_0x1 = 1;

    /** @brief Analog watchdog enable */
    using ADC4_CFGR1_AWD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 1 disabled (value: 0)
     *          - B_0x1: Analog watchdog 1 enabled (value: 1)
     */
        /** @brief Analog watchdog 1 disabled */
    constexpr std::uint32_t ADC4_CFGR1_AWD1EN_B_0x0 = 0;
        /** @brief Analog watchdog 1 enabled */
    constexpr std::uint32_t ADC4_CFGR1_AWD1EN_B_0x1 = 1;

    /** @brief Analog watchdog channel selection */
    using ADC4_CFGR1_AWD1CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog input Channel 0 monitored by AWD (value: 0)
     *          - B_0x1: ADC analog input Channel 1 monitored by AWD (value: 1)
     *          - B_0xD: ADC analog input Channel 13 monitored by AWD (value: 13)
     */
        /** @brief ADC analog input Channel 0 monitored by AWD */
    constexpr std::uint32_t ADC4_CFGR1_AWD1CH_B_0x0 = 0;
        /** @brief ADC analog input Channel 1 monitored by AWD */
    constexpr std::uint32_t ADC4_CFGR1_AWD1CH_B_0x1 = 1;
        /** @brief ADC analog input Channel 13 monitored by AWD */
    constexpr std::uint32_t ADC4_CFGR1_AWD1CH_B_0xD = 13;

    /** @brief ADC configuration register 2 */
    using ADC4_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Oversampler Enable */
    using ADC4_CFGR2_OVSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Oversampler disabled (value: 0)
     *          - B_0x1: Oversampler enabled (value: 1)
     */
        /** @brief Oversampler disabled */
    constexpr std::uint32_t ADC4_CFGR2_OVSE_B_0x0 = 0;
        /** @brief Oversampler enabled */
    constexpr std::uint32_t ADC4_CFGR2_OVSE_B_0x1 = 1;

    /** @brief Oversampling ratio */
    using ADC4_CFGR2_OVSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t ADC4_CFGR2_OVSR_B_0x0 = 0;
        /** @brief 4x */
    constexpr std::uint32_t ADC4_CFGR2_OVSR_B_0x1 = 1;
        /** @brief 8x */
    constexpr std::uint32_t ADC4_CFGR2_OVSR_B_0x2 = 2;
        /** @brief 16x */
    constexpr std::uint32_t ADC4_CFGR2_OVSR_B_0x3 = 3;
        /** @brief 32x */
    constexpr std::uint32_t ADC4_CFGR2_OVSR_B_0x4 = 4;
        /** @brief 64x */
    constexpr std::uint32_t ADC4_CFGR2_OVSR_B_0x5 = 5;
        /** @brief 128x */
    constexpr std::uint32_t ADC4_CFGR2_OVSR_B_0x6 = 6;
        /** @brief 256x */
    constexpr std::uint32_t ADC4_CFGR2_OVSR_B_0x7 = 7;

    /** @brief Oversampling shift */
    using ADC4_CFGR2_OVSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t ADC4_CFGR2_OVSS_B_0x0 = 0;
        /** @brief Shift 1-bit */
    constexpr std::uint32_t ADC4_CFGR2_OVSS_B_0x1 = 1;
        /** @brief Shift 2-bits */
    constexpr std::uint32_t ADC4_CFGR2_OVSS_B_0x2 = 2;
        /** @brief Shift 3-bits */
    constexpr std::uint32_t ADC4_CFGR2_OVSS_B_0x3 = 3;
        /** @brief Shift 4-bits */
    constexpr std::uint32_t ADC4_CFGR2_OVSS_B_0x4 = 4;
        /** @brief Shift 5-bits */
    constexpr std::uint32_t ADC4_CFGR2_OVSS_B_0x5 = 5;
        /** @brief Shift 6-bits */
    constexpr std::uint32_t ADC4_CFGR2_OVSS_B_0x6 = 6;
        /** @brief Shift 7-bits */
    constexpr std::uint32_t ADC4_CFGR2_OVSS_B_0x7 = 7;
        /** @brief Shift 8-bits */
    constexpr std::uint32_t ADC4_CFGR2_OVSS_B_0x8 = 8;

    /** @brief Triggered Oversampling */
    using ADC4_CFGR2_TOVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All oversampled conversions for a channel are done consecutively after a trigger (value: 0)
     *          - B_0x1: Each oversampled conversion for a channel needs a trigger (value: 1)
     */
        /** @brief All oversampled conversions for a channel are done consecutively after a trigger */
    constexpr std::uint32_t ADC4_CFGR2_TOVS_B_0x0 = 0;
        /** @brief Each oversampled conversion for a channel needs a trigger */
    constexpr std::uint32_t ADC4_CFGR2_TOVS_B_0x1 = 1;

    /** @brief Low-frequency trigger mode enable */
    using ADC4_CFGR2_LFTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Low-frequency trigger mode enabled. (value: 1)
     */
        /** @brief Low-frequency trigger mode enabled. */
    constexpr std::uint32_t ADC4_CFGR2_LFTRIG_B_0x1 = 1;

    /** @brief ADC sampling time register */
    using ADC4_SMPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sampling time selection 1 */
    using ADC4_SMPR_SMP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1. (value: 0)
     *          - B_0x1: 3. (value: 1)
     *          - B_0x2: 7. (value: 2)
     *          - B_0x3: 12. (value: 3)
     *          - B_0x4: 19. (value: 4)
     *          - B_0x5: 39. (value: 5)
     *          - B_0x6: 79. (value: 6)
     *          - B_0x7: 814. (value: 7)
     */
        /** @brief 1. */
    constexpr std::uint32_t ADC4_SMPR_SMP1_B_0x0 = 0;
        /** @brief 3. */
    constexpr std::uint32_t ADC4_SMPR_SMP1_B_0x1 = 1;
        /** @brief 7. */
    constexpr std::uint32_t ADC4_SMPR_SMP1_B_0x2 = 2;
        /** @brief 12. */
    constexpr std::uint32_t ADC4_SMPR_SMP1_B_0x3 = 3;
        /** @brief 19. */
    constexpr std::uint32_t ADC4_SMPR_SMP1_B_0x4 = 4;
        /** @brief 39. */
    constexpr std::uint32_t ADC4_SMPR_SMP1_B_0x5 = 5;
        /** @brief 79. */
    constexpr std::uint32_t ADC4_SMPR_SMP1_B_0x6 = 6;
        /** @brief 814. */
    constexpr std::uint32_t ADC4_SMPR_SMP1_B_0x7 = 7;

    /** @brief Sampling time selection 2 */
    using ADC4_SMPR_SMP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1. (value: 0)
     *          - B_0x1: 3. (value: 1)
     *          - B_0x2: 7. (value: 2)
     *          - B_0x3: 12. (value: 3)
     *          - B_0x4: 19. (value: 4)
     *          - B_0x5: 39. (value: 5)
     *          - B_0x6: 79. (value: 6)
     *          - B_0x7: 814. (value: 7)
     */
        /** @brief 1. */
    constexpr std::uint32_t ADC4_SMPR_SMP2_B_0x0 = 0;
        /** @brief 3. */
    constexpr std::uint32_t ADC4_SMPR_SMP2_B_0x1 = 1;
        /** @brief 7. */
    constexpr std::uint32_t ADC4_SMPR_SMP2_B_0x2 = 2;
        /** @brief 12. */
    constexpr std::uint32_t ADC4_SMPR_SMP2_B_0x3 = 3;
        /** @brief 19. */
    constexpr std::uint32_t ADC4_SMPR_SMP2_B_0x4 = 4;
        /** @brief 39. */
    constexpr std::uint32_t ADC4_SMPR_SMP2_B_0x5 = 5;
        /** @brief 79. */
    constexpr std::uint32_t ADC4_SMPR_SMP2_B_0x6 = 6;
        /** @brief 814. */
    constexpr std::uint32_t ADC4_SMPR_SMP2_B_0x7 = 7;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL0_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL0_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL1_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL1_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL2_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL2_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL3_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL3_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL4_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL4_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL5_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL5_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL6_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL6_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL7_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL7_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL8_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL8_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL9_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL9_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL10_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL10_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL11_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL11_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL12_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL12_B_0x1 = 1;

    /** @brief Channel-x sampling time selection (x=13 to 0) */
    using ADC4_SMPR_SMPSEL13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL13_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC4_SMPR_SMPSEL13_B_0x1 = 1;

    /** @brief ADC watchdog threshold register */
    using ADC4_AWD1TR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 lower threshold */
    using ADC4_AWD1TR_LT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 higher threshold */
    using ADC4_AWD1TR_HT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC watchdog threshold register */
    using ADC4_AWD2TR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 lower threshold */
    using ADC4_AWD2TR_LT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 higher threshold */
    using ADC4_AWD2TR_HT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC channel selection register [alternate] */
    using ADC4_CHSELR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL0_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL0_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL1_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL1_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL2_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL2_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL3_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL3_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL4_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL4_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL5_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL5_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL6_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL6_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL7_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL7_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL8_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL8_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL9_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL9_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL10_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL10_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL11_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL11_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL12_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL12_B_0x1 = 1;

    /** @brief Channel x selection (x=13 to 0) */
    using ADC4_CHSELR_CHSEL13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL13_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC4_CHSELR_CHSEL13_B_0x1 = 1;

    /** @brief ADC channel selection register */
    using ADC4_CHSELR_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1st conversion of the sequence */
    using ADC4_CHSELR_ALTERNATE1_SQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2nd conversion of the sequence */
    using ADC4_CHSELR_ALTERNATE1_SQ2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 3rd conversion of the sequence */
    using ADC4_CHSELR_ALTERNATE1_SQ3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 4th conversion of the sequence */
    using ADC4_CHSELR_ALTERNATE1_SQ4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 5th conversion of the sequence */
    using ADC4_CHSELR_ALTERNATE1_SQ5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 6th conversion of the sequence */
    using ADC4_CHSELR_ALTERNATE1_SQ6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 7th conversion of the sequence */
    using ADC4_CHSELR_ALTERNATE1_SQ7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8th conversion of the sequence */
    using ADC4_CHSELR_ALTERNATE1_SQ8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CH0 (value: 0)
     *          - B_0x1: CH1 (value: 1)
     *          - B_0xA: CH10 (value: 10)
     *          - B_0xB: CH11 (value: 11)
     *          - B_0xC: CH12 (value: 12)
     *          - B_0xD: CH13 (value: 13)
     *          - B_0xF: No channel selected (End of sequence) (value: 15)
     */
        /** @brief CH0 */
    constexpr std::uint32_t ADC4_CHSELR_ALTERNATE1_SQ8_B_0x0 = 0;
        /** @brief CH1 */
    constexpr std::uint32_t ADC4_CHSELR_ALTERNATE1_SQ8_B_0x1 = 1;
        /** @brief CH10 */
    constexpr std::uint32_t ADC4_CHSELR_ALTERNATE1_SQ8_B_0xA = 10;
        /** @brief CH11 */
    constexpr std::uint32_t ADC4_CHSELR_ALTERNATE1_SQ8_B_0xB = 11;
        /** @brief CH12 */
    constexpr std::uint32_t ADC4_CHSELR_ALTERNATE1_SQ8_B_0xC = 12;
        /** @brief CH13 */
    constexpr std::uint32_t ADC4_CHSELR_ALTERNATE1_SQ8_B_0xD = 13;
        /** @brief No channel selected (End of sequence) */
    constexpr std::uint32_t ADC4_CHSELR_ALTERNATE1_SQ8_B_0xF = 15;

    /** @brief ADC watchdog threshold register */
    using ADC4_AWD3TR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3lower threshold */
    using ADC4_AWD3TR_LT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 higher threshold */
    using ADC4_AWD3TR_HT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC data register */
    using ADC4_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Converted data */
    using ADC4_DR_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC power register */
    using ADC4_PWRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto-off mode bit */
    using ADC4_PWRR_AUTOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Auto-off mode disabled (value: 0)
     *          - B_0x1: Auto-off mode enabled (value: 1)
     */
        /** @brief Auto-off mode disabled */
    constexpr std::uint32_t ADC4_PWRR_AUTOFF_B_0x0 = 0;
        /** @brief Auto-off mode enabled */
    constexpr std::uint32_t ADC4_PWRR_AUTOFF_B_0x1 = 1;

    /** @brief Deep-power-down mode bit */
    using ADC4_PWRR_DPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Deep-power-down mode disabled (value: 0)
     *          - B_0x1: Deep-power-down mode enabled (value: 1)
     */
        /** @brief Deep-power-down mode disabled */
    constexpr std::uint32_t ADC4_PWRR_DPD_B_0x0 = 0;
        /** @brief Deep-power-down mode enabled */
    constexpr std::uint32_t ADC4_PWRR_DPD_B_0x1 = 1;

    /** @brief ADC Analog Watchdog 2 Configuration register */
    using ADC4_AWD2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH0_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH0_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH1_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH1_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH2_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH2_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH3_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH3_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH4_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH4_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH5_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH5_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH6_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH6_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH7_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH7_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH8_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH8_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH9_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH9_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH10_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH10_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH11_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH11_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH12_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH12_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD2CR_AWD2CH13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH13_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC4_AWD2CR_AWD2CH13_B_0x1 = 1;

    /** @brief ADC Analog Watchdog 3 Configuration register */
    using ADC4_AWD3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH0_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH0_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH1_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH1_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH2_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH2_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH3_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH3_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH4_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH4_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH5_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH5_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH6_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH6_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH7_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH7_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH8_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH8_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH9_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH9_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH10_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH10_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH11_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH11_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH12_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH12_B_0x1 = 1;

    /** @brief Analog watchdog channel selection (x=13 to 0) */
    using ADC4_AWD3CR_AWD3CH13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH13_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC4_AWD3CR_AWD3CH13_B_0x1 = 1;

    /** @brief ADC Calibration factor */
    using ADC4_CALFACT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration factor */
    using ADC4_CALFACT_CALFACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC common configuration register */
    using ADC4_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC prescaler */
    using ADC4_CCR_PRESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0x0 = 0;
        /** @brief input ADC clock divided by 2 */
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0x1 = 1;
        /** @brief input ADC clock divided by 4 */
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0x2 = 2;
        /** @brief input ADC clock divided by 6 */
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0x3 = 3;
        /** @brief input ADC clock divided by 8 */
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0x4 = 4;
        /** @brief input ADC clock divided by 10 */
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0x5 = 5;
        /** @brief input ADC clock divided by 12 */
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0x6 = 6;
        /** @brief input ADC clock divided by 16 */
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0x7 = 7;
        /** @brief input ADC clock divided by 32 */
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0x8 = 8;
        /** @brief input ADC clock divided by 64 */
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0x9 = 9;
        /** @brief input ADC clock divided by 128 */
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0xA = 10;
        /** @brief input ADC clock divided by 256 */
    constexpr std::uint32_t ADC4_CCR_PRESC_B_0xB = 11;

    /** @brief Vless thansub REFINTless than/sub enable */
    using ADC4_CCR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub REFINTless than/sub disabled (value: 0)
     *          - B_0x1: Vless thansub REFINTless than/sub enabled (value: 1)
     */
        /** @brief Vless thansub REFINTless than/sub disabled */
    constexpr std::uint32_t ADC4_CCR_VREFEN_B_0x0 = 0;
        /** @brief Vless thansub REFINTless than/sub enabled */
    constexpr std::uint32_t ADC4_CCR_VREFEN_B_0x1 = 1;

    /** @brief Temperature sensor selection */
    using ADC4_CCR_VSENSESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature sensor disabled (value: 0)
     *          - B_0x1: Temperature sensor enabled (value: 1)
     */
        /** @brief Temperature sensor disabled */
    constexpr std::uint32_t ADC4_CCR_VSENSESEL_B_0x0 = 0;
        /** @brief Temperature sensor enabled */
    constexpr std::uint32_t ADC4_CCR_VSENSESEL_B_0x1 = 1;

}

#endif
