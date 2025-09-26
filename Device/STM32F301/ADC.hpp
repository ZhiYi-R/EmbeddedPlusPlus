/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F301_ADC_HPP
#define EMBEDDED_PP_STM32F301_ADC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Analog to digital converter */
namespace STM32F301::ADC {

    /** @brief ADC interrupt and status register */
    using ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected context queue overflow */
    using ISR_JQOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 flag */
    using ISR_AWD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 flag */
    using ISR_AWD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 flag */
    using ISR_AWD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel end of sequence flag */
    using ISR_JEOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel end of conversion flag */
    using ISR_JEOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC overrun */
    using ISR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular sequence flag */
    using ISR_EOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of conversion flag */
    using ISR_EOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of sampling flag */
    using ISR_EOSMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC ready */
    using ISR_ADRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC interrupt enable register */
    using IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected context queue overflow interrupt enable */
    using IER_JQOVFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 interrupt enable */
    using IER_AWD3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 interrupt enable */
    using IER_AWD2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 interrupt enable */
    using IER_AWD1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected sequence of conversions interrupt enable */
    using IER_JEOSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion interrupt enable */
    using IER_JEOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun interrupt enable */
    using IER_OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular sequence of conversions interrupt enable */
    using IER_EOSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion interrupt enable */
    using IER_EOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of sampling flag interrupt enable for regular conversions */
    using IER_EOSMPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC ready interrupt enable */
    using IER_ADRDYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC control register */
    using CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC calibration */
    using CR_ADCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Differential mode for calibration */
    using CR_ADCALDIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC voltage regulator enable */
    using CR_ADVREGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC stop of injected conversion command */
    using CR_JADST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC stop of regular conversion command */
    using CR_ADSTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC start of injected conversion */
    using CR_JADSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC start of regular conversion */
    using CR_ADSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC disable command */
    using CR_ADDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC enable control */
    using CR_ADEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC configuration register */
    using CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 channel selection */
    using CFGR_AWD1CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic injected group conversion */
    using CFGR_JAUTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 enable on injected channels */
    using CFGR_JAWD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 enable on regular channels */
    using CFGR_AWD1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the watchdog 1 on a single channel or on all channels */
    using CFGR_AWD1SGL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JSQR queue mode */
    using CFGR_JQM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Discontinuous mode on injected channels */
    using CFGR_JDISCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Discontinuous mode channel count */
    using CFGR_DISCNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Discontinuous mode for regular channels */
    using CFGR_DISCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delayed conversion mode */
    using CFGR_AUTDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Single / continuous conversion mode for regular conversions */
    using CFGR_CONT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun Mode */
    using CFGR_OVRMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger enable and polarity selection for regular channels */
    using CFGR_EXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger selection for regular group */
    using CFGR_EXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data alignment */
    using CFGR_ALIGN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data resolution */
    using CFGR_RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direct memory access configuration */
    using CFGR_DMACFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direct memory access enable */
    using CFGR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC sample time register 1 */
    using SMPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 sampling time selection */
    using SMPR1_SMP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 2 sampling time selection */
    using SMPR1_SMP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 3 sampling time selection */
    using SMPR1_SMP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 4 sampling time selection */
    using SMPR1_SMP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 5 sampling time selection */
    using SMPR1_SMP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 6 sampling time selection */
    using SMPR1_SMP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 7 sampling time selection */
    using SMPR1_SMP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 8 sampling time selection */
    using SMPR1_SMP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 9 sampling time selection */
    using SMPR1_SMP9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC sample time register 2 */
    using SMPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 10 sampling time selection */
    using SMPR2_SMP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 11 sampling time selection */
    using SMPR2_SMP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 12 sampling time selection */
    using SMPR2_SMP12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 13 sampling time selection */
    using SMPR2_SMP13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 14 sampling time selection */
    using SMPR2_SMP14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 15 sampling time selection */
    using SMPR2_SMP15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 16 sampling time selection */
    using SMPR2_SMP16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 17 sampling time selection */
    using SMPR2_SMP17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 18 sampling time selection */
    using SMPR2_SMP18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC watchdog threshold register 1 */
    using TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 higher threshold */
    using TR1_HT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 lower threshold */
    using TR1_LT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC watchdog threshold register 2 */
    using TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 higher threshold */
    using TR2_HT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 lower threshold */
    using TR2_LT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read-write */
    using TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 higher threshold */
    using TR3_HT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 lower threshold */
    using TR3_LT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC regular sequence register 1 */
    using SQR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 4th conversion in regular sequence */
    using SQR1_SQ4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 3rd conversion in regular sequence */
    using SQR1_SQ3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2nd conversion in regular sequence */
    using SQR1_SQ2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1st conversion in regular sequence */
    using SQR1_SQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular channel sequence length */
    using SQR1_L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC regular sequence register 2 */
    using SQR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 9th conversion in regular sequence */
    using SQR2_SQ9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8th conversion in regular sequence */
    using SQR2_SQ8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 7th conversion in regular sequence */
    using SQR2_SQ7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 6th conversion in regular sequence */
    using SQR2_SQ6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 5th conversion in regular sequence */
    using SQR2_SQ5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC regular sequence register 3 */
    using SQR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 14th conversion in regular sequence */
    using SQR3_SQ14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 13th conversion in regular sequence */
    using SQR3_SQ13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 13th conversion in regular sequence */
    using SQR3_SQ12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 11th conversion in regular sequence */
    using SQR3_SQ11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 10th conversion in regular sequence */
    using SQR3_SQ10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC regular sequence register 4 */
    using SQR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 16th conversion in regular sequence */
    using SQR4_SQ16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 15th conversion in regular sequence */
    using SQR4_SQ15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC regular Data Register */
    using DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular Data converted */
    using DR_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC injected sequence register */
    using JSQR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 4th conversion in the injected sequence */
    using JSQR_JSQ4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 3rd conversion in the injected sequence */
    using JSQR_JSQ3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2nd conversion in the injected sequence */
    using JSQR_JSQ2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1st conversion in the injected sequence */
    using JSQR_JSQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External Trigger Enable and Polarity Selection for injected channels */
    using JSQR_JEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External Trigger Selection for injected group */
    using JSQR_JEXTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected channel sequence length */
    using JSQR_JL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register1 */
    using OFR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset1 Enable */
    using OFR1_OFFSET1_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel selection for the Data offset 1 */
    using OFR1_OFFSET1_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset 1 for the channel programmed into bits OFFSET1_CH */
    using OFR1_OFFSET1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register2 */
    using OFR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset 2 Enable */
    using OFR2_OFFSET2_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel selection for the Data offset 2 */
    using OFR2_OFFSET2_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset 2 for the channel programmed into bits OFFSET2_CH */
    using OFR2_OFFSET2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register3 */
    using OFR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset y Enable */
    using OFR3_OFFSET3_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel selection for the Data offset 3 */
    using OFR3_OFFSET3_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset 3 for the channel programmed into bits OFFSET3_CH */
    using OFR3_OFFSET3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register4 */
    using OFR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset 4 Enable */
    using OFR4_OFFSET4_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel selection for the Data offset 4 */
    using OFR4_OFFSET4_CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data offset 4 for the channel programmed into bits OFFSET4_CH */
    using OFR4_OFFSET4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register1 */
    using JDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using JDR1_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register2 */
    using JDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using JDR2_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register3 */
    using JDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using JDR3_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC offset register4 */
    using JDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected data */
    using JDR4_JDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC Analog Watchdog 2 Configuration Register */
    using AWD2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 channel selection */
    using AWD2CR_AWD2CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC Analog Watchdog 3 Configuration Register */
    using AWD3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 channel selection */
    using AWD3CR_AWD3CH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC Differential Mode Selection Register */
    using DIFSEL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Differential mode for channels 15 to 1 */
    using DIFSEL_DIFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC Calibration Factors */
    using CALFACT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration Factors in differential mode */
    using CALFACT_CALFACT_D = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration Factors In Single-Ended mode */
    using CALFACT_CALFACT_S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC Common status register */
    using CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected Context Queue Overflow flag of the slave ADC */
    using CSR_JQOVF_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 flag of the slave ADC */
    using CSR_AWD3_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 flag of the slave ADC */
    using CSR_AWD2_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 flag of the slave ADC */
    using CSR_AWD1_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected sequence flag of the slave ADC */
    using CSR_JEOS_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag of the slave ADC */
    using CSR_JEOC_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun flag of the slave ADC */
    using CSR_OVR_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular sequence flag of the slave ADC */
    using CSR_EOS_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion of the slave ADC */
    using CSR_EOC_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Sampling phase flag of the slave ADC */
    using CSR_EOSMP_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave ADC ready */
    using CSR_ADRDY_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Injected Context Queue Overflow flag of the master ADC */
    using CSR_JQOVF_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 flag of the master ADC */
    using CSR_AWD3_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 flag of the master ADC */
    using CSR_AWD2_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 flag of the master ADC */
    using CSR_AWD1_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected sequence flag of the master ADC */
    using CSR_JEOS_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag of the master ADC */
    using CSR_JEOC_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun flag of the master ADC */
    using CSR_OVR_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular sequence flag of the master ADC */
    using CSR_EOS_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion of the master ADC */
    using CSR_EOC_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Sampling phase flag of the master ADC */
    using CSR_EOSMP_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master ADC ready */
    using CSR_ADRDY_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC common control register */
    using CRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VBATEN */
    using CRR_VBATEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Temperature sensor enable */
    using CRR_TSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFINT enable */
    using CRR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC clock mode */
    using CRR_CKMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
