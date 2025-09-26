/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G0B0_ADC_HPP
#define EMBEDDED_PP_STM32G0B0_ADC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Analog to Digital ConverteR */
namespace STM32G0B0::ADC {

    /** @brief ADC interrupt and status register */
    using ADC_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC ready This bit is set by hardware after the ADC has been enabled (ADEN=1) and when the ADC reaches a state where it is ready to accept conversion requests. It is cleared by software writing 1 to it. */
    using ADC_ISR_ADRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC not yet ready to start conversion (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: ADC is ready to start conversion (value: 1)
     */
        /** @brief ADC not yet ready to start conversion (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_ADRDY_B_0x0 = 0;
        /** @brief ADC is ready to start conversion */
    constexpr std::uint32_t ADC_ISR_ADRDY_B_0x1 = 1;

    /** @brief End of sampling flag This bit is set by hardware during the conversion, at the end of the sampling phase.It is cleared by software by programming it to '1'. */
    using ADC_ISR_EOSMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not at the end of the sampling phase (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: End of sampling phase reached (value: 1)
     */
        /** @brief Not at the end of the sampling phase (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_EOSMP_B_0x0 = 0;
        /** @brief End of sampling phase reached */
    constexpr std::uint32_t ADC_ISR_EOSMP_B_0x1 = 1;

    /** @brief End of conversion flag This bit is set by hardware at the end of each conversion of a channel when a new data result is available in the ADC_DR register. It is cleared by software writing 1 to it or by reading the ADC_DR register. */
    using ADC_ISR_EOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel conversion not complete (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Channel conversion complete (value: 1)
     */
        /** @brief Channel conversion not complete (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_EOC_B_0x0 = 0;
        /** @brief Channel conversion complete */
    constexpr std::uint32_t ADC_ISR_EOC_B_0x1 = 1;

    /** @brief End of sequence flag This bit is set by hardware at the end of the conversion of a sequence of channels selected by the CHSEL bits. It is cleared by software writing 1 to it. */
    using ADC_ISR_EOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Conversion sequence not complete (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Conversion sequence complete (value: 1)
     */
        /** @brief Conversion sequence not complete (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_EOS_B_0x0 = 0;
        /** @brief Conversion sequence complete */
    constexpr std::uint32_t ADC_ISR_EOS_B_0x1 = 1;

    /** @brief ADC overrun This bit is set by hardware when an overrun occurs, meaning that a new conversion has complete while the EOC flag was already set. It is cleared by software writing 1 to it. */
    using ADC_ISR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Overrun has occurred (value: 1)
     */
        /** @brief No overrun occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_OVR_B_0x0 = 0;
        /** @brief Overrun has occurred */
    constexpr std::uint32_t ADC_ISR_OVR_B_0x1 = 1;

    /** @brief Analog watchdog 1 flag This bit is set by hardware when the converted voltage crosses the values programmed in ADC_TR1 and ADC_HR1 registers. It is cleared by software by programming it to 1. */
    using ADC_ISR_AWD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Analog watchdog event occurred (value: 1)
     */
        /** @brief No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_AWD1_B_0x0 = 0;
        /** @brief Analog watchdog event occurred */
    constexpr std::uint32_t ADC_ISR_AWD1_B_0x1 = 1;

    /** @brief Analog watchdog 2 flag This bit is set by hardware when the converted voltage crosses the values programmed in ADC_AWD2TR and ADC_AWD2TR registers. It is cleared by software programming it it. */
    using ADC_ISR_AWD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Analog watchdog event occurred (value: 1)
     */
        /** @brief No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_AWD2_B_0x0 = 0;
        /** @brief Analog watchdog event occurred */
    constexpr std::uint32_t ADC_ISR_AWD2_B_0x1 = 1;

    /** @brief Analog watchdog 3 flag This bit is set by hardware when the converted voltage crosses the values programmed in ADC_AWD3TR and ADC_AWD3TR registers. It is cleared by software by programming it to 1. */
    using ADC_ISR_AWD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) (value: 0)
     *          - B_0x1: Analog watchdog event occurred (value: 1)
     */
        /** @brief No analog watchdog event occurred (or the flag event was already acknowledged and cleared by software) */
    constexpr std::uint32_t ADC_ISR_AWD3_B_0x0 = 0;
        /** @brief Analog watchdog event occurred */
    constexpr std::uint32_t ADC_ISR_AWD3_B_0x1 = 1;

    /** @brief End Of Calibration flag This bit is set by hardware when calibration is complete. It is cleared by software writing 1 to it. */
    using ADC_ISR_EOCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration is not complete (value: 0)
     *          - B_0x1: Calibration is complete (value: 1)
     */
        /** @brief Calibration is not complete */
    constexpr std::uint32_t ADC_ISR_EOCAL_B_0x0 = 0;
        /** @brief Calibration is complete */
    constexpr std::uint32_t ADC_ISR_EOCAL_B_0x1 = 1;

    /** @brief Channel Configuration Ready flag This flag bit is set by hardware when the channel configuration is applied after programming to ADC_CHSELR register or changing CHSELRMOD or SCANDIR. It is cleared by software by programming it to it. Note: When the software configures the channels (by programming ADC_CHSELR or changing CHSELRMOD or SCANDIR), it must wait until the CCRDY flag rises before configuring again or starting conversions, otherwise the new configuration (or the START bit) is ignored. Once the flag is asserted, if the software needs to configure again the channels, it must clear the CCRDY flag before proceeding with a new configuration. */
    using ADC_ISR_CCRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel configuration update not applied. (value: 0)
     *          - B_0x1: Channel configuration update is applied. (value: 1)
     */
        /** @brief Channel configuration update not applied. */
    constexpr std::uint32_t ADC_ISR_CCRDY_B_0x0 = 0;
        /** @brief Channel configuration update is applied. */
    constexpr std::uint32_t ADC_ISR_CCRDY_B_0x1 = 1;

    /** @brief ADC interrupt enable register */
    using ADC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC ready interrupt enable This bit is set and cleared by software to enable/disable the ADC Ready interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_IER_ADRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADRDY interrupt disabled. (value: 0)
     *          - B_0x1: ADRDY interrupt enabled. An interrupt is generated when the ADRDY bit is set. (value: 1)
     */
        /** @brief ADRDY interrupt disabled. */
    constexpr std::uint32_t ADC_IER_ADRDYIE_B_0x0 = 0;
        /** @brief ADRDY interrupt enabled. An interrupt is generated when the ADRDY bit is set. */
    constexpr std::uint32_t ADC_IER_ADRDYIE_B_0x1 = 1;

    /** @brief End of sampling flag interrupt enable This bit is set and cleared by software to enable/disable the end of the sampling phase interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_IER_EOSMPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOSMP interrupt disabled. (value: 0)
     *          - B_0x1: EOSMP interrupt enabled. An interrupt is generated when the EOSMP bit is set. (value: 1)
     */
        /** @brief EOSMP interrupt disabled. */
    constexpr std::uint32_t ADC_IER_EOSMPIE_B_0x0 = 0;
        /** @brief EOSMP interrupt enabled. An interrupt is generated when the EOSMP bit is set. */
    constexpr std::uint32_t ADC_IER_EOSMPIE_B_0x1 = 1;

    /** @brief End of conversion interrupt enable This bit is set and cleared by software to enable/disable the end of conversion interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_IER_EOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOC interrupt disabled (value: 0)
     *          - B_0x1: EOC interrupt enabled. An interrupt is generated when the EOC bit is set. (value: 1)
     */
        /** @brief EOC interrupt disabled */
    constexpr std::uint32_t ADC_IER_EOCIE_B_0x0 = 0;
        /** @brief EOC interrupt enabled. An interrupt is generated when the EOC bit is set. */
    constexpr std::uint32_t ADC_IER_EOCIE_B_0x1 = 1;

    /** @brief End of conversion sequence interrupt enable This bit is set and cleared by software to enable/disable the end of sequence of conversions interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_IER_EOSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOS interrupt disabled (value: 0)
     *          - B_0x1: EOS interrupt enabled. An interrupt is generated when the EOS bit is set. (value: 1)
     */
        /** @brief EOS interrupt disabled */
    constexpr std::uint32_t ADC_IER_EOSIE_B_0x0 = 0;
        /** @brief EOS interrupt enabled. An interrupt is generated when the EOS bit is set. */
    constexpr std::uint32_t ADC_IER_EOSIE_B_0x1 = 1;

    /** @brief Overrun interrupt enable This bit is set and cleared by software to enable/disable the overrun interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_IER_OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Overrun interrupt disabled (value: 0)
     *          - B_0x1: Overrun interrupt enabled. An interrupt is generated when the OVR bit is set. (value: 1)
     */
        /** @brief Overrun interrupt disabled */
    constexpr std::uint32_t ADC_IER_OVRIE_B_0x0 = 0;
        /** @brief Overrun interrupt enabled. An interrupt is generated when the OVR bit is set. */
    constexpr std::uint32_t ADC_IER_OVRIE_B_0x1 = 1;

    /** @brief Analog watchdog 1 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog interrupt. Note: The Software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_IER_AWD1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt disabled */
    constexpr std::uint32_t ADC_IER_AWD1IE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt enabled */
    constexpr std::uint32_t ADC_IER_AWD1IE_B_0x1 = 1;

    /** @brief Analog watchdog 2 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog interrupt. Note: The Software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_IER_AWD2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt disabled */
    constexpr std::uint32_t ADC_IER_AWD2IE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt enabled */
    constexpr std::uint32_t ADC_IER_AWD2IE_B_0x1 = 1;

    /** @brief Analog watchdog 3 interrupt enable This bit is set and cleared by software to enable/disable the analog watchdog interrupt. Note: The Software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_IER_AWD3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog interrupt disabled (value: 0)
     *          - B_0x1: Analog watchdog interrupt enabled (value: 1)
     */
        /** @brief Analog watchdog interrupt disabled */
    constexpr std::uint32_t ADC_IER_AWD3IE_B_0x0 = 0;
        /** @brief Analog watchdog interrupt enabled */
    constexpr std::uint32_t ADC_IER_AWD3IE_B_0x1 = 1;

    /** @brief End of calibration interrupt enable This bit is set and cleared by software to enable/disable the end of calibration interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_IER_EOCALIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of calibration interrupt disabled (value: 0)
     *          - B_0x1: End of calibration interrupt enabled (value: 1)
     */
        /** @brief End of calibration interrupt disabled */
    constexpr std::uint32_t ADC_IER_EOCALIE_B_0x0 = 0;
        /** @brief End of calibration interrupt enabled */
    constexpr std::uint32_t ADC_IER_EOCALIE_B_0x1 = 1;

    /** @brief Channel Configuration Ready Interrupt enable This bit is set and cleared by software to enable/disable the channel configuration ready interrupt. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_IER_CCRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel configuration ready interrupt disabled (value: 0)
     *          - B_0x1: Channel configuration ready interrupt enabled (value: 1)
     */
        /** @brief Channel configuration ready interrupt disabled */
    constexpr std::uint32_t ADC_IER_CCRDYIE_B_0x0 = 0;
        /** @brief Channel configuration ready interrupt enabled */
    constexpr std::uint32_t ADC_IER_CCRDYIE_B_0x1 = 1;

    /** @brief ADC control register */
    using ADC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC enable command This bit is set by software to enable the ADC. The ADC is effectively ready to operate once the ADRDY flag has been set. It is cleared by hardware when the ADC is disabled, after the execution of the ADDIS command. Note: The software is allowed to set ADEN only when all bits of ADC_CR registers are 0 (ADCAL=0, ADSTP=0, ADSTART=0, ADDIS=0 and ADEN=0) */
    using ADC_CR_ADEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC is disabled (OFF state) (value: 0)
     *          - B_0x1: Write 1 to enable the ADC. (value: 1)
     */
        /** @brief ADC is disabled (OFF state) */
    constexpr std::uint32_t ADC_CR_ADEN_B_0x0 = 0;
        /** @brief Write 1 to enable the ADC. */
    constexpr std::uint32_t ADC_CR_ADEN_B_0x1 = 1;

    /** @brief ADC disable command This bit is set by software to disable the ADC (ADDIS command) and put it into power-down state (OFF state). It is cleared by hardware once the ADC is effectively disabled (ADEN is also cleared by hardware at this time). Note: Setting ADDIS to '1' is only effective when ADEN=1 and ADSTART=0 (which ensures that no conversion is ongoing) */
    using ADC_CR_ADDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADDIS command ongoing (value: 0)
     *          - B_0x1: Write 1 to disable the ADC. Read 1 means that an ADDIS command is in progress. (value: 1)
     */
        /** @brief No ADDIS command ongoing */
    constexpr std::uint32_t ADC_CR_ADDIS_B_0x0 = 0;
        /** @brief Write 1 to disable the ADC. Read 1 means that an ADDIS command is in progress. */
    constexpr std::uint32_t ADC_CR_ADDIS_B_0x1 = 1;

    /** @brief ADC start conversion command This bit is set by software to start ADC conversion. Depending on the EXTEN [1:0] configuration bits, a conversion either starts immediately (software trigger configuration) or once a hardware trigger event occurs (hardware trigger configuration). It is cleared by hardware: In single conversion mode (CONT=0, DISCEN=0), when software trigger is selected (EXTEN=00): at the assertion of the end of Conversion Sequence (EOS) flag. In discontinuous conversion mode(CONT=0, DISCEN=1), when the software trigger is selected (EXTEN=00): at the assertion of the end of Conversion (EOC) flag. In all other cases: after the execution of the ADSTP command, at the same time as the ADSTP bit is cleared by hardware. Note: The software is allowed to set ADSTART only when ADEN=1 and ADDIS=0 (ADC is enabled and there is no pending request to disable the ADC). After writing to ADC_CHSELR register or changing CHSELRMOD or SCANDIRW, it is mandatory to wait until CCRDY flag is asserted before setting ADSTART, otherwise, the value written to ADSTART is ignored. */
    using ADC_CR_ADSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC conversion is ongoing. (value: 0)
     *          - B_0x1: Write 1 to start the ADC. Read 1 means that the ADC is operating and may be converting. (value: 1)
     */
        /** @brief No ADC conversion is ongoing. */
    constexpr std::uint32_t ADC_CR_ADSTART_B_0x0 = 0;
        /** @brief Write 1 to start the ADC. Read 1 means that the ADC is operating and may be converting. */
    constexpr std::uint32_t ADC_CR_ADSTART_B_0x1 = 1;

    /** @brief ADC stop conversion command This bit is set by software to stop and discard an ongoing conversion (ADSTP Command). It is cleared by hardware when the conversion is effectively discarded and the ADC is ready to accept a new start conversion command. Note: Setting ADSTP to '1' is only effective when ADSTART=1 and ADDIS=0 (ADC is enabled and may be converting and there is no pending request to disable the ADC) */
    using ADC_CR_ADSTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ADC stop conversion command ongoing (value: 0)
     *          - B_0x1: Write 1 to stop the ADC. Read 1 means that an ADSTP command is in progress. (value: 1)
     */
        /** @brief No ADC stop conversion command ongoing */
    constexpr std::uint32_t ADC_CR_ADSTP_B_0x0 = 0;
        /** @brief Write 1 to stop the ADC. Read 1 means that an ADSTP command is in progress. */
    constexpr std::uint32_t ADC_CR_ADSTP_B_0x1 = 1;

    /** @brief ADC Voltage Regulator Enable This bit is set by software, to enable the ADC internal voltage regulator. The voltage regulator output is available after tADCVREG_SETUP. It is cleared by software to disable the voltage regulator. It can be cleared only if ADEN is et to 0. Note: The software is allowed to program this bit field only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0). */
    using ADC_CR_ADVREGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC voltage regulator disabled (value: 0)
     *          - B_0x1: ADC voltage regulator enabled (value: 1)
     */
        /** @brief ADC voltage regulator disabled */
    constexpr std::uint32_t ADC_CR_ADVREGEN_B_0x0 = 0;
        /** @brief ADC voltage regulator enabled */
    constexpr std::uint32_t ADC_CR_ADVREGEN_B_0x1 = 1;

    /** @brief ADC calibration This bit is set by software to start the calibration of the ADC. It is cleared by hardware after calibration is complete. Note: The software is allowed to set ADCAL only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0). The software is allowed to update the calibration factor by writing ADC_CALFACT only when ADEN=1 and ADSTART=0 (ADC enabled and no conversion is ongoing). */
    using ADC_CR_ADCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration complete (value: 0)
     *          - B_0x1: Write 1 to calibrate the ADC. Read at 1 means that a calibration is in progress. (value: 1)
     */
        /** @brief Calibration complete */
    constexpr std::uint32_t ADC_CR_ADCAL_B_0x0 = 0;
        /** @brief Write 1 to calibrate the ADC. Read at 1 means that a calibration is in progress. */
    constexpr std::uint32_t ADC_CR_ADCAL_B_0x1 = 1;

    /** @brief ADC configuration register 1 */
    using ADC_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direct memory access enable This bit is set and cleared by software to enable the generation of DMA requests. This allows the DMA controller to be used to manage automatically the converted data. For more details, refer to . Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA disabled (value: 0)
     *          - B_0x1: DMA enabled (value: 1)
     */
        /** @brief DMA disabled */
    constexpr std::uint32_t ADC_CFGR1_DMAEN_B_0x0 = 0;
        /** @brief DMA enabled */
    constexpr std::uint32_t ADC_CFGR1_DMAEN_B_0x1 = 1;

    /** @brief Direct memory access configuration This bit is set and cleared by software to select between two DMA modes of operation and is effective only when DMAEN=1. For more details, refer to page351 Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_DMACFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA one shot mode selected (value: 0)
     *          - B_0x1: DMA circular mode selected (value: 1)
     */
        /** @brief DMA one shot mode selected */
    constexpr std::uint32_t ADC_CFGR1_DMACFG_B_0x0 = 0;
        /** @brief DMA circular mode selected */
    constexpr std::uint32_t ADC_CFGR1_DMACFG_B_0x1 = 1;

    /** @brief Scan sequence direction This bit is set and cleared by software to select the direction in which the channels is scanned in the sequence. It is effective only if CHSELMOD bit is cleared to 0. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CFGR1_SCANDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Upward scan (from CHSEL0 to CHSEL18) (value: 0)
     *          - B_0x1: Backward scan (from CHSEL18 to CHSEL0) (value: 1)
     */
        /** @brief Upward scan (from CHSEL0 to CHSEL18) */
    constexpr std::uint32_t ADC_CFGR1_SCANDIR_B_0x0 = 0;
        /** @brief Backward scan (from CHSEL18 to CHSEL0) */
    constexpr std::uint32_t ADC_CFGR1_SCANDIR_B_0x1 = 1;

    /** @brief Data resolution These bits are written by software to select the resolution of the conversion. Note: The software is allowed to write these bits only when ADEN=0. */
    using ADC_CFGR1_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 12 bits (value: 0)
     *          - B_0x1: 10 bits (value: 1)
     *          - B_0x2: 8 bits (value: 2)
     *          - B_0x3: 6 bits (value: 3)
     */
        /** @brief 12 bits */
    constexpr std::uint32_t ADC_CFGR1_RES_B_0x0 = 0;
        /** @brief 10 bits */
    constexpr std::uint32_t ADC_CFGR1_RES_B_0x1 = 1;
        /** @brief 8 bits */
    constexpr std::uint32_t ADC_CFGR1_RES_B_0x2 = 2;
        /** @brief 6 bits */
    constexpr std::uint32_t ADC_CFGR1_RES_B_0x3 = 3;

    /** @brief Data alignment This bit is set and cleared by software to select right or left alignment. Refer to Data alignment and resolution (oversampling disabled: OVSE = 0) on page349 Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_ALIGN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Right alignment (value: 0)
     *          - B_0x1: Left alignment (value: 1)
     */
        /** @brief Right alignment */
    constexpr std::uint32_t ADC_CFGR1_ALIGN_B_0x0 = 0;
        /** @brief Left alignment */
    constexpr std::uint32_t ADC_CFGR1_ALIGN_B_0x1 = 1;

    /** @brief External trigger selection These bits select the external event used to trigger the start of conversion (refer to External triggers for details): Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_EXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRG0 (value: 0)
     *          - B_0x1: TRG1 (value: 1)
     *          - B_0x2: TRG2 (value: 2)
     *          - B_0x3: TRG3 (value: 3)
     *          - B_0x4: TRG4 (value: 4)
     *          - B_0x5: TRG5 (value: 5)
     *          - B_0x6: TRG6 (value: 6)
     *          - B_0x7: TRG7 (value: 7)
     */
        /** @brief TRG0 */
    constexpr std::uint32_t ADC_CFGR1_EXTSEL_B_0x0 = 0;
        /** @brief TRG1 */
    constexpr std::uint32_t ADC_CFGR1_EXTSEL_B_0x1 = 1;
        /** @brief TRG2 */
    constexpr std::uint32_t ADC_CFGR1_EXTSEL_B_0x2 = 2;
        /** @brief TRG3 */
    constexpr std::uint32_t ADC_CFGR1_EXTSEL_B_0x3 = 3;
        /** @brief TRG4 */
    constexpr std::uint32_t ADC_CFGR1_EXTSEL_B_0x4 = 4;
        /** @brief TRG5 */
    constexpr std::uint32_t ADC_CFGR1_EXTSEL_B_0x5 = 5;
        /** @brief TRG6 */
    constexpr std::uint32_t ADC_CFGR1_EXTSEL_B_0x6 = 6;
        /** @brief TRG7 */
    constexpr std::uint32_t ADC_CFGR1_EXTSEL_B_0x7 = 7;

    /** @brief External trigger enable and polarity selection These bits are set and cleared by software to select the external trigger polarity and enable the trigger. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_EXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware trigger detection disabled (conversions can be started by software) (value: 0)
     *          - B_0x1: Hardware trigger detection on the rising edge (value: 1)
     *          - B_0x2: Hardware trigger detection on the falling edge (value: 2)
     *          - B_0x3: Hardware trigger detection on both the rising and falling edges (value: 3)
     */
        /** @brief Hardware trigger detection disabled (conversions can be started by software) */
    constexpr std::uint32_t ADC_CFGR1_EXTEN_B_0x0 = 0;
        /** @brief Hardware trigger detection on the rising edge */
    constexpr std::uint32_t ADC_CFGR1_EXTEN_B_0x1 = 1;
        /** @brief Hardware trigger detection on the falling edge */
    constexpr std::uint32_t ADC_CFGR1_EXTEN_B_0x2 = 2;
        /** @brief Hardware trigger detection on both the rising and falling edges */
    constexpr std::uint32_t ADC_CFGR1_EXTEN_B_0x3 = 3;

    /** @brief Overrun management mode This bit is set and cleared by software and configure the way data overruns are managed. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_OVRMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC_DR register is preserved with the old data when an overrun is detected. (value: 0)
     *          - B_0x1: ADC_DR register is overwritten with the last conversion result when an overrun is detected. (value: 1)
     */
        /** @brief ADC_DR register is preserved with the old data when an overrun is detected. */
    constexpr std::uint32_t ADC_CFGR1_OVRMOD_B_0x0 = 0;
        /** @brief ADC_DR register is overwritten with the last conversion result when an overrun is detected. */
    constexpr std::uint32_t ADC_CFGR1_OVRMOD_B_0x1 = 1;

    /** @brief Single / continuous conversion mode This bit is set and cleared by software. If it is set, conversion takes place continuously until it is cleared. Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both bits DISCEN=1 and CONT=1. The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_CONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single conversion mode (value: 0)
     *          - B_0x1: Continuous conversion mode (value: 1)
     */
        /** @brief Single conversion mode */
    constexpr std::uint32_t ADC_CFGR1_CONT_B_0x0 = 0;
        /** @brief Continuous conversion mode */
    constexpr std::uint32_t ADC_CFGR1_CONT_B_0x1 = 1;

    /** @brief Wait conversion mode This bit is set and cleared by software to enable/disable wait conversion mode.. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_WAIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wait conversion mode off (value: 0)
     *          - B_0x1: Wait conversion mode on (value: 1)
     */
        /** @brief Wait conversion mode off */
    constexpr std::uint32_t ADC_CFGR1_WAIT_B_0x0 = 0;
        /** @brief Wait conversion mode on */
    constexpr std::uint32_t ADC_CFGR1_WAIT_B_0x1 = 1;

    /** @brief Auto-off mode This bit is set and cleared by software to enable/disable auto-off mode.. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_AUTOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Auto-off mode disabled (value: 0)
     *          - B_0x1: Auto-off mode enabled (value: 1)
     */
        /** @brief Auto-off mode disabled */
    constexpr std::uint32_t ADC_CFGR1_AUTOFF_B_0x0 = 0;
        /** @brief Auto-off mode enabled */
    constexpr std::uint32_t ADC_CFGR1_AUTOFF_B_0x1 = 1;

    /** @brief Discontinuous mode This bit is set and cleared by software to enable/disable discontinuous mode. Note: It is not possible to have both discontinuous mode and continuous mode enabled: it is forbidden to set both bits DISCEN=1 and CONT=1. The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_DISCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Discontinuous mode disabled (value: 0)
     *          - B_0x1: Discontinuous mode enabled (value: 1)
     */
        /** @brief Discontinuous mode disabled */
    constexpr std::uint32_t ADC_CFGR1_DISCEN_B_0x0 = 0;
        /** @brief Discontinuous mode enabled */
    constexpr std::uint32_t ADC_CFGR1_DISCEN_B_0x1 = 1;

    /** @brief Mode selection of the ADC_CHSELR register This bit is set and cleared by software to control the ADC_CHSELR feature: Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CFGR1_CHSELRMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Each bit of the ADC_CHSELR register enables an input (value: 0)
     *          - B_0x1: ADC_CHSELR register is able to sequence up to 8 channels (value: 1)
     */
        /** @brief Each bit of the ADC_CHSELR register enables an input */
    constexpr std::uint32_t ADC_CFGR1_CHSELRMOD_B_0x0 = 0;
        /** @brief ADC_CHSELR register is able to sequence up to 8 channels */
    constexpr std::uint32_t ADC_CFGR1_CHSELRMOD_B_0x1 = 1;

    /** @brief Enable the watchdog on a single channel or on all channels This bit is set and cleared by software to enable the analog watchdog on the channel identified by the AWDCH[4:0] bits or on all the channels Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_AWD1SGL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 1 enabled on all channels (value: 0)
     *          - B_0x1: Analog watchdog 1 enabled on a single channel (value: 1)
     */
        /** @brief Analog watchdog 1 enabled on all channels */
    constexpr std::uint32_t ADC_CFGR1_AWD1SGL_B_0x0 = 0;
        /** @brief Analog watchdog 1 enabled on a single channel */
    constexpr std::uint32_t ADC_CFGR1_AWD1SGL_B_0x1 = 1;

    /** @brief Analog watchdog enable This bit is set and cleared by software. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_AWD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog watchdog 1 disabled (value: 0)
     *          - B_0x1: Analog watchdog 1 enabled (value: 1)
     */
        /** @brief Analog watchdog 1 disabled */
    constexpr std::uint32_t ADC_CFGR1_AWD1EN_B_0x0 = 0;
        /** @brief Analog watchdog 1 enabled */
    constexpr std::uint32_t ADC_CFGR1_AWD1EN_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They select the input channel to be guarded by the analog watchdog. ..... Others: Reserved Note: The channel selected by the AWDCH[4:0] bits must be also set into the CHSELR register. The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR1_AWD1CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog input Channel 0 monitored by AWD (value: 0)
     *          - B_0x1: ADC analog input Channel 1 monitored by AWD (value: 1)
     *          - B_0x11: ADC analog input Channel 17 monitored by AWD (value: 17)
     *          - B_0x12: ADC analog input Channel 18 monitored by AWD (value: 18)
     */
        /** @brief ADC analog input Channel 0 monitored by AWD */
    constexpr std::uint32_t ADC_CFGR1_AWD1CH_B_0x0 = 0;
        /** @brief ADC analog input Channel 1 monitored by AWD */
    constexpr std::uint32_t ADC_CFGR1_AWD1CH_B_0x1 = 1;
        /** @brief ADC analog input Channel 17 monitored by AWD */
    constexpr std::uint32_t ADC_CFGR1_AWD1CH_B_0x11 = 17;
        /** @brief ADC analog input Channel 18 monitored by AWD */
    constexpr std::uint32_t ADC_CFGR1_AWD1CH_B_0x12 = 18;

    /** @brief ADC configuration register 2 */
    using ADC_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Oversampler Enable This bit is set and cleared by software. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CFGR2_OVSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Oversampler disabled (value: 0)
     *          - B_0x1: Oversampler enabled (value: 1)
     */
        /** @brief Oversampler disabled */
    constexpr std::uint32_t ADC_CFGR2_OVSE_B_0x0 = 0;
        /** @brief Oversampler enabled */
    constexpr std::uint32_t ADC_CFGR2_OVSE_B_0x1 = 1;

    /** @brief Oversampling ratio This bit filed defines the number of oversampling ratio. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
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

    /** @brief Oversampling shift This bit is set and cleared by software. Others: Reserved Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
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

    /** @brief Triggered Oversampling This bit is set and cleared by software. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CFGR2_TOVS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All oversampled conversions for a channel are done consecutively after a trigger (value: 0)
     *          - B_0x1: Each oversampled conversion for a channel needs a trigger (value: 1)
     */
        /** @brief All oversampled conversions for a channel are done consecutively after a trigger */
    constexpr std::uint32_t ADC_CFGR2_TOVS_B_0x0 = 0;
        /** @brief Each oversampled conversion for a channel needs a trigger */
    constexpr std::uint32_t ADC_CFGR2_TOVS_B_0x1 = 1;

    /** @brief Low frequency trigger mode enable This bit is set and cleared by software. Note: The software is allowed to write this bit only when ADSTART bit is cleared to 0 (this ensures that no conversion is ongoing). */
    using ADC_CFGR2_LFTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low Frequency Trigger Mode disabled (value: 0)
     *          - B_0x1: Low Frequency Trigger Mode enabled (value: 1)
     */
        /** @brief Low Frequency Trigger Mode disabled */
    constexpr std::uint32_t ADC_CFGR2_LFTRIG_B_0x0 = 0;
        /** @brief Low Frequency Trigger Mode enabled */
    constexpr std::uint32_t ADC_CFGR2_LFTRIG_B_0x1 = 1;

    /** @brief ADC clock mode These bits are set and cleared by software to define how the analog ADC is clocked: In all synchronous clock modes, there is no jitter in the delay from a timer trigger to the start of a conversion. Note: The software is allowed to write these bits only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0). */
    using ADC_CFGR2_CKMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADCCLK (Asynchronous clock mode), generated at product level (refer to RCC section) (value: 0)
     *          - B_0x1: PCLK/2 (Synchronous clock mode) (value: 1)
     *          - B_0x2: PCLK/4 (Synchronous clock mode) (value: 2)
     *          - B_0x3: PCLK (Synchronous clock mode). This configuration must be enabled only if PCLK has a 50% duty clock cycle (APB prescaler configured inside the RCC must be bypassed and the system clock must by 50% duty cycle) (value: 3)
     */
        /** @brief ADCCLK (Asynchronous clock mode), generated at product level (refer to RCC section) */
    constexpr std::uint32_t ADC_CFGR2_CKMODE_B_0x0 = 0;
        /** @brief PCLK/2 (Synchronous clock mode) */
    constexpr std::uint32_t ADC_CFGR2_CKMODE_B_0x1 = 1;
        /** @brief PCLK/4 (Synchronous clock mode) */
    constexpr std::uint32_t ADC_CFGR2_CKMODE_B_0x2 = 2;
        /** @brief PCLK (Synchronous clock mode). This configuration must be enabled only if PCLK has a 50% duty clock cycle (APB prescaler configured inside the RCC must be bypassed and the system clock must by 50% duty cycle) */
    constexpr std::uint32_t ADC_CFGR2_CKMODE_B_0x3 = 3;

    /** @brief ADC sampling time register */
    using ADC_SMPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sampling time selection 1 These bits are written by software to select the sampling time that applies to all channels. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1.5 ADC clock cycles (value: 0)
     *          - B_0x1: 3.5 ADC clock cycles (value: 1)
     *          - B_0x2: 7.5 ADC clock cycles (value: 2)
     *          - B_0x3: 12.5 ADC clock cycles (value: 3)
     *          - B_0x4: 19.5 ADC clock cycles (value: 4)
     *          - B_0x5: 39.5 ADC clock cycles (value: 5)
     *          - B_0x6: 79.5 ADC clock cycles (value: 6)
     *          - B_0x7: 160.5 ADC clock cycles (value: 7)
     */
        /** @brief 1.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP1_B_0x0 = 0;
        /** @brief 3.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP1_B_0x1 = 1;
        /** @brief 7.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP1_B_0x2 = 2;
        /** @brief 12.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP1_B_0x3 = 3;
        /** @brief 19.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP1_B_0x4 = 4;
        /** @brief 39.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP1_B_0x5 = 5;
        /** @brief 79.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP1_B_0x6 = 6;
        /** @brief 160.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP1_B_0x7 = 7;

    /** @brief Sampling time selection 2 These bits are written by software to select the sampling time that applies to all channels. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1.5 ADC clock cycles (value: 0)
     *          - B_0x1: 3.5 ADC clock cycles (value: 1)
     *          - B_0x2: 7.5 ADC clock cycles (value: 2)
     *          - B_0x3: 12.5 ADC clock cycles (value: 3)
     *          - B_0x4: 19.5 ADC clock cycles (value: 4)
     *          - B_0x5: 39.5 ADC clock cycles (value: 5)
     *          - B_0x6: 79.5 ADC clock cycles (value: 6)
     *          - B_0x7: 160.5 ADC clock cycles (value: 7)
     */
        /** @brief 1.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP2_B_0x0 = 0;
        /** @brief 3.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP2_B_0x1 = 1;
        /** @brief 7.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP2_B_0x2 = 2;
        /** @brief 12.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP2_B_0x3 = 3;
        /** @brief 19.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP2_B_0x4 = 4;
        /** @brief 39.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP2_B_0x5 = 5;
        /** @brief 79.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP2_B_0x6 = 6;
        /** @brief 160.5 ADC clock cycles */
    constexpr std::uint32_t ADC_SMPR_SMP2_B_0x7 = 7;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL0_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL0_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL1_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL1_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL2_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL2_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL3_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL3_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL4_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL4_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL5_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL5_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL6_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL6_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL7_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL7_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL8_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL8_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL9_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL9_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL10_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL10_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL11_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL11_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL12_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL12_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL13_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL13_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL14_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL14_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL15_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL15_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL16_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL16_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL17_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL17_B_0x1 = 1;

    /** @brief Channel-x sampling time selection These bits are written by software to define which sampling time is used. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_SMPR_SMPSEL18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sampling time of CHANNELx use the setting of SMP1[2:0] register. (value: 0)
     *          - B_0x1: Sampling time of CHANNELx use the setting of SMP2[2:0] register. (value: 1)
     */
        /** @brief Sampling time of CHANNELx use the setting of SMP1[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL18_B_0x0 = 0;
        /** @brief Sampling time of CHANNELx use the setting of SMP2[2:0] register. */
    constexpr std::uint32_t ADC_SMPR_SMPSEL18_B_0x1 = 1;

    /** @brief ADC watchdog threshold register */
    using ADC_AWD1TR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 lower threshold These bits are written by software to define the lower threshold for the analog watchdog. Refer to ADC_AWDxTR) on page355. */
    using ADC_AWD1TR_LT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 higher threshold These bits are written by software to define the higher threshold for the analog watchdog. Refer to ADC_AWDxTR) on page355. */
    using ADC_AWD1TR_HT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC watchdog threshold register */
    using ADC_AWD2TR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 lower threshold These bits are written by software to define the lower threshold for the analog watchdog. Refer to ADC_AWDxTR) on page355. */
    using ADC_AWD2TR_LT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 higher threshold These bits are written by software to define the higher threshold for the analog watchdog. Refer to ADC_AWDxTR) on page355. */
    using ADC_AWD2TR_HT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC channel selection register [alternate] */
    using ADC_CHSELR_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL0_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL0_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL1_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL1_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL2_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL2_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL3_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL3_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL4_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL4_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL5_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL5_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL6_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL6_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL7_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL7_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL8_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL8_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL9_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL9_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL10_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL10_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL11_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL11_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL12_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL12_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL13_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL13_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL14_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL14_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL15_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL15_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL16_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL16_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL17_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL17_B_0x1 = 1;

    /** @brief Channel-x selection These bits are written by software and define which channels are part of the sequence of channels to be converted. Refer to for ADC inputs connected to external channels and internal sources. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). If CCRDY is not yet asserted after channel configuration (writing ADC_CHSELR register or changing CHSELRMOD or SCANDIR), the value written to this bit is ignored. */
    using ADC_CHSELR_0_CHSEL18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input Channel-x is not selected for conversion (value: 0)
     *          - B_0x1: Input Channel-x is selected for conversion (value: 1)
     */
        /** @brief Input Channel-x is not selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL18_B_0x0 = 0;
        /** @brief Input Channel-x is selected for conversion */
    constexpr std::uint32_t ADC_CHSELR_0_CHSEL18_B_0x1 = 1;

    /** @brief channel selection register CHSELRMOD = 1 in ADC_CFGR1 */
    using ADC_CHSELR_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1st conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CHSELR_1_SQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2nd conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CHSELR_1_SQ2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 3rd conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CHSELR_1_SQ3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 4th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CHSELR_1_SQ4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 5th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CHSELR_1_SQ5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 6th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CHSELR_1_SQ6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 7th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. Refer to SQ8[3:0] for a definition of channel selection. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CHSELR_1_SQ7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8th conversion of the sequence These bits are programmed by software with the channel number (0...14) assigned to the 8th conversion of the sequence. 0b1111 indicates the end of the sequence. When 0b1111 (end of sequence) is programmed to the lower sequence channels, these bits are ignored. ... Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CHSELR_1_SQ8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CH0 (value: 0)
     *          - B_0x1: CH1 (value: 1)
     *          - B_0xC: CH12 (value: 12)
     *          - B_0xD: CH13 (value: 13)
     *          - B_0xE: CH14 (value: 14)
     *          - B_0xF: No channel selected (End of sequence) (value: 15)
     */
        /** @brief CH0 */
    constexpr std::uint32_t ADC_CHSELR_1_SQ8_B_0x0 = 0;
        /** @brief CH1 */
    constexpr std::uint32_t ADC_CHSELR_1_SQ8_B_0x1 = 1;
        /** @brief CH12 */
    constexpr std::uint32_t ADC_CHSELR_1_SQ8_B_0xC = 12;
        /** @brief CH13 */
    constexpr std::uint32_t ADC_CHSELR_1_SQ8_B_0xD = 13;
        /** @brief CH14 */
    constexpr std::uint32_t ADC_CHSELR_1_SQ8_B_0xE = 14;
        /** @brief No channel selected (End of sequence) */
    constexpr std::uint32_t ADC_CHSELR_1_SQ8_B_0xF = 15;

    /** @brief ADC watchdog threshold register */
    using ADC_AWD3TR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3lower threshold These bits are written by software to define the lower threshold for the analog watchdog. Refer to ADC_AWDxTR) on page355. */
    using ADC_AWD3TR_LT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 higher threshold These bits are written by software to define the higher threshold for the analog watchdog. Refer to ADC_AWDxTR) on page355. */
    using ADC_AWD3TR_HT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC data register */
    using ADC_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Converted data These bits are read-only. They contain the conversion result from the last converted channel. The data are left- or right-aligned as shown in OVSE = 0) on page349. Just after a calibration is complete, DATA[6:0] contains the calibration factor. */
    using ADC_DR_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC Analog Watchdog 2 Configuration register */
    using ADC_AWD2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH0_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH0_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH1_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH1_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH2_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH2_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH3_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH3_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH4_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH4_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH5_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH5_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH6_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH6_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH7_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH7_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH8_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH8_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH9_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH9_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH10_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH10_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH11_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH11_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH12_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH12_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH13_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH13_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH14_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH14_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH15_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH15_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH16_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH16_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH17_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH17_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 2 (AWD2). Note: The channels selected through ADC_AWD2CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD2CR_AWD2CH18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD2 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD2 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH18_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD2 */
    constexpr std::uint32_t ADC_AWD2CR_AWD2CH18_B_0x1 = 1;

    /** @brief ADC Analog Watchdog 3 Configuration register */
    using ADC_AWD3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH0_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH0_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH1_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH1_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH2_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH2_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH3_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH3_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH4_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH4_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH5_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH5_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH6_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH6_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH7_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH7_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH8_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH8_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH9_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH9_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH10_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH10_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH11_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH11_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH12_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH12_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH13_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH13_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH14_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH14_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH15_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH15_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH16_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH16_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH17_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH17_B_0x1 = 1;

    /** @brief Analog watchdog channel selection These bits are set and cleared by software. They enable and select the input channels to be guarded by analog watchdog 3 (AWD3). Note: The channels selected through ADC_AWD3CR must be also configured into the ADC_CHSELR registers. Refer to SQ8[3:0] for a definition of channel selection. The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_AWD3CR_AWD3CH18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADC analog channel-x is not monitored by AWD3 (value: 0)
     *          - B_0x1: ADC analog channel-x is monitored by AWD3 (value: 1)
     */
        /** @brief ADC analog channel-x is not monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH18_B_0x0 = 0;
        /** @brief ADC analog channel-x is monitored by AWD3 */
    constexpr std::uint32_t ADC_AWD3CR_AWD3CH18_B_0x1 = 1;

    /** @brief ADC Calibration factor */
    using ADC_CALFACT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration factor These bits are written by hardware or by software. Once a calibration is complete,they are updated by hardware with the calibration factors. Software can write these bits with a new calibration factor. If the new calibration factor is different from the current one stored into the analog ADC, it is then applied once a new calibration is launched. Just after a calibration is complete, DATA[6:0] contains the calibration factor. Note: Software can write these bits only when ADEN=1 (ADC is enabled and no calibration is ongoing and no conversion is ongoing). Refer to SQ8[3:0] for a definition of channel selection. */
    using ADC_CALFACT_CALFACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC common configuration register */
    using ADC_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC prescaler Set and cleared by software to select the frequency of the clock to the ADC. Other: Reserved Note: Software is allowed to write these bits only when the ADC is disabled (ADCAL=0, ADSTART=0, ADSTP=0, ADDIS=0 and ADEN=0). */
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

    /** @brief VREFINT enable This bit is set and cleared by software to enable/disable the VREFINT. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CCR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFINT disabled (value: 0)
     *          - B_0x1: VREFINT enabled (value: 1)
     */
        /** @brief VREFINT disabled */
    constexpr std::uint32_t ADC_CCR_VREFEN_B_0x0 = 0;
        /** @brief VREFINT enabled */
    constexpr std::uint32_t ADC_CCR_VREFEN_B_0x1 = 1;

    /** @brief Temperature sensor enable This bit is set and cleared by software to enable/disable the temperature sensor. Note: Software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing). */
    using ADC_CCR_TSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature sensor disabled (value: 0)
     *          - B_0x1: Temperature sensor enabled (value: 1)
     */
        /** @brief Temperature sensor disabled */
    constexpr std::uint32_t ADC_CCR_TSEN_B_0x0 = 0;
        /** @brief Temperature sensor enabled */
    constexpr std::uint32_t ADC_CCR_TSEN_B_0x1 = 1;

    /** @brief VBAT enable This bit is set and cleared by software to enable/disable the VBAT channel. Note: The software is allowed to write this bit only when ADSTART=0 (which ensures that no conversion is ongoing) */
    using ADC_CCR_VBATEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VBAT channel disabled (value: 0)
     *          - B_0x1: VBAT channel enabled (value: 1)
     */
        /** @brief VBAT channel disabled */
    constexpr std::uint32_t ADC_CCR_VBATEN_B_0x0 = 0;
        /** @brief VBAT channel enabled */
    constexpr std::uint32_t ADC_CCR_VBATEN_B_0x1 = 1;

}

#endif
