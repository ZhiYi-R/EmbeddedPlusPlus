/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H563_DTS_HPP
#define EMBEDDED_PP_STM32H563_DTS_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Digital temperature sensor */
namespace STM32H563::DTS {

    /** @brief Temperature sensor configuration register 1 */
    using DTS_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Temperature sensor 1 enable bit This bit is set and cleared by software. Note: Once enabled, the temperature sensor is active after a specific delay time. The TS1_RDY flag will be set when the sensor is ready. */
    using DTS_CFGR1_TS1_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature sensor 1 disabled (value: 0)
     *          - B_0x1: Temperature sensor 1 enabled (value: 1)
     */
        /** @brief Temperature sensor 1 disabled */
    constexpr std::uint32_t DTS_CFGR1_TS1_EN_B_0x0 = 0;
        /** @brief Temperature sensor 1 enabled */
    constexpr std::uint32_t DTS_CFGR1_TS1_EN_B_0x1 = 1;

    /** @brief Start frequency measurement on temperature sensor 1 This bit is set and cleared by software. */
    using DTS_CFGR1_TS1_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No software trigger. (value: 0)
     *          - B_0x1: Software trigger for a frequency measurement. (only if TS1 is ready). (value: 1)
     */
        /** @brief No software trigger. */
    constexpr std::uint32_t DTS_CFGR1_TS1_START_B_0x0 = 0;
        /** @brief Software trigger for a frequency measurement. (only if TS1 is ready). */
    constexpr std::uint32_t DTS_CFGR1_TS1_START_B_0x1 = 1;

    /** @brief Input trigger selection bit for temperature sensor 1 These bits are set and cleared by software. They select which input triggers a temperature measurement. Refer to Section 19.3.10: Trigger input. */
    using DTS_CFGR1_TS1_INTRIG_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sampling time for temperature sensor 1 These bits allow increasing the sampling time to improve measurement precision. When the PCLK clock is selected as reference clock (REFCLK_SEL = 0), the measurement will be performed at TS1_SMP_TIME period of CLK_PTAT. When the LSE is selected as reference clock (REFCLK_SEL =1), the measurement will be performed at TS1_SMP_TIME period of LSE. */
    using DTS_CFGR1_TS1_SMP_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference clock selection bit This bit is set and cleared by software. It indicates whether the reference clock is the high speed clock (PCLK) or the low speed clock (LSE). */
    using DTS_CFGR1_REFCLK_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed reference clock (PCLK) (value: 0)
     *          - B_0x1: Low speed reference clock (LSE) (value: 1)
     */
        /** @brief High speed reference clock (PCLK) */
    constexpr std::uint32_t DTS_CFGR1_REFCLK_SEL_B_0x0 = 0;
        /** @brief Low speed reference clock (LSE) */
    constexpr std::uint32_t DTS_CFGR1_REFCLK_SEL_B_0x1 = 1;

    /** @brief Quick measurement option bit This bit is set and cleared by software. It is used to increase the measurement speed by suppressing the calibration step. It is effective only when the LSE clock is used as reference clock (REFCLK_SEL=1). */
    using DTS_CFGR1_Q_MEAS_OPT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Measurement with calibration (value: 0)
     *          - B_0x1: Measurement without calibration (value: 1)
     */
        /** @brief Measurement with calibration */
    constexpr std::uint32_t DTS_CFGR1_Q_MEAS_OPT_B_0x0 = 0;
        /** @brief Measurement without calibration */
    constexpr std::uint32_t DTS_CFGR1_Q_MEAS_OPT_B_0x1 = 1;

    /** @brief High speed clock division ratio These bits are set and cleared by software. They can be used to define the division ratio for the main clock in order to obtain the internal frequency lower than 1 MHz required for the calibration. They are applicable only for calibration when PCLK is selected as reference clock (REFCLK_SEL=0). ... */
    using DTS_CFGR1_HSREF_CLK_DIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No divider (value: 0)
     *          - B_0x1: No divider (value: 1)
     *          - B_0x2: 1/2 division ratio (value: 2)
     *          - B_0x7F: 1/127 division ratio (value: 127)
     */
        /** @brief No divider */
    constexpr std::uint32_t DTS_CFGR1_HSREF_CLK_DIV_B_0x0 = 0;
        /** @brief No divider */
    constexpr std::uint32_t DTS_CFGR1_HSREF_CLK_DIV_B_0x1 = 1;
        /** @brief 1/2 division ratio */
    constexpr std::uint32_t DTS_CFGR1_HSREF_CLK_DIV_B_0x2 = 2;
        /** @brief 1/127 division ratio */
    constexpr std::uint32_t DTS_CFGR1_HSREF_CLK_DIV_B_0x7F = 127;

    /** @brief Temperature sensor T0 value register 1 */
    using DTS_T0VALR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Engineering value of the frequency measured at T0 for 	 temperature sensor 1 This value is expressed in 0.1 kHz. */
    using DTS_T0VALR1_TS1_FMT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Engineering value of the T0 temperature for temperature sensor 1. Others: Reserved, must not be used. */
    using DTS_T0VALR1_TS1_T0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 30 C (value: 0)
     *          - B_0x1: 130 C (value: 1)
     */
        /** @brief 30 C */
    constexpr std::uint32_t DTS_T0VALR1_TS1_T0_B_0x0 = 0;
        /** @brief 130 C */
    constexpr std::uint32_t DTS_T0VALR1_TS1_T0_B_0x1 = 1;

    /** @brief Temperature sensor ramp value register */
    using DTS_RAMPVALR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Engineering value of the ramp coefficient for the temperature sensor 1. This value is expressed in Hz/C. */
    using DTS_RAMPVALR_TS1_RAMP_COEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Temperature sensor interrupt threshold register 1 */
    using DTS_ITR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low interrupt threshold for temperature sensor 1 These bits are set and cleared by software. They indicate the lowest value than can be reached before raising an interrupt signal. */
    using DTS_ITR1_TS1_LITTHD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High interrupt threshold for temperature sensor 1 These bits are set and cleared by software. They indicate the highest value than can be reached before raising an interrupt signal. */
    using DTS_ITR1_TS1_HITTHD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Temperature sensor data register */
    using DTS_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Value of the counter output value for temperature sensor 1 */
    using DTS_DR_TS1_MFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Temperature sensor status register */
    using DTS_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt flag for end of measurement on temperature sensor 1, synchronized on PCLK. This bit is set by hardware when a temperature measure is done. It is cleared by software by writing 1 to the TS2_CITEF bit in the DTS_ICIFR register. Note: This bit is active only when the TS1_ITEFEN bit is set */
    using DTS_SR_TS1_ITEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No end of measurement detected on temperature sensor 1 (value: 0)
     *          - B_0x1: End of measure detected on temperature sensor 1 (value: 1)
     */
        /** @brief No end of measurement detected on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_ITEF_B_0x0 = 0;
        /** @brief End of measure detected on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_ITEF_B_0x1 = 1;

    /** @brief Interrupt flag for low threshold on temperature sensor 1, synchronized on PCLK. This bit is set by hardware when the low threshold is set and reached. It is cleared by software by writing 1 to the TS1_CITLF bit in the DTS_ICIFR register. Note: This bit is active only when the TS1_ITLFEN bit is set */
    using DTS_SR_TS1_ITLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low threshold not reached on temperature sensor 1 (value: 0)
     *          - B_0x1: Low threshold reached on temperature sensor 1 (value: 1)
     */
        /** @brief Low threshold not reached on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_ITLF_B_0x0 = 0;
        /** @brief Low threshold reached on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_ITLF_B_0x1 = 1;

    /** @brief Interrupt flag for high threshold on temperature sensor 1, synchronized on PCLK This bit is set by hardware when the high threshold is set and reached. It is cleared by software by writing 1 to the TS1_CITHF bit in the DTS_ICIFR register. Note: This bit is active only when the TS1_ITHFEN bit is set */
    using DTS_SR_TS1_ITHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High threshold not reached on temperature sensor 1 (value: 0)
     *          - B_0x1: High threshold reached on temperature sensor 1 (value: 1)
     */
        /** @brief High threshold not reached on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_ITHF_B_0x0 = 0;
        /** @brief High threshold reached on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_ITHF_B_0x1 = 1;

    /** @brief Asynchronous interrupt flag for end of measure on temperature sensor 1 This bit is set by hardware when a temperature measure is done. It is cleared by software by writing 1 to the TS1_CAITEF bit in the DTS_ICIFR register. Note: This bit is active only when the TS1_AITEFEN bit is set */
    using DTS_SR_TS1_AITEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of measure not detected on temperature sensor 1 (value: 0)
     *          - B_0x1: End of measure detected on temperature sensor 1 (value: 1)
     */
        /** @brief End of measure not detected on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_AITEF_B_0x0 = 0;
        /** @brief End of measure detected on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_AITEF_B_0x1 = 1;

    /** @brief Asynchronous interrupt flag for low threshold on temperature sensor 1 This bit is set by hardware when the low threshold is reached. It is cleared by software by writing 1 to the TS1_CAITLF bit in the DTS_ICIFR register. Note: This bit is active only when the TS1_AITLFEN bit is set */
    using DTS_SR_TS1_AITLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low threshold not reached on temperature sensor 1 (value: 0)
     *          - B_0x1: Low threshold reached on temperature sensor 1 (value: 1)
     */
        /** @brief Low threshold not reached on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_AITLF_B_0x0 = 0;
        /** @brief Low threshold reached on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_AITLF_B_0x1 = 1;

    /** @brief Asynchronous interrupt flag for high threshold on temperature sensor 1 This bit is set by hardware when the high threshold is reached. It is cleared by software by writing 1 to the TS1_CAITHF bit in the DTS_ICIFR register. Note: This bit is active only when the TS1_AITHFEN bit is set */
    using DTS_SR_TS1_AITHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High threshold not reached on temperature sensor 1 (value: 0)
     *          - B_0x1: High threshold reached on temperature sensor 1 (value: 1)
     */
        /** @brief High threshold not reached on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_AITHF_B_0x0 = 0;
        /** @brief High threshold reached on temperature sensor 1 */
    constexpr std::uint32_t DTS_SR_TS1_AITHF_B_0x1 = 1;

    /** @brief Temperature sensor 1 ready flag This bit is set and reset by hardware. It indicates that a measurement is ongoing. */
    using DTS_SR_TS1_RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature sensor 1 busy (value: 0)
     *          - B_0x1: Temperature sensor 1 ready (value: 1)
     */
        /** @brief Temperature sensor 1 busy */
    constexpr std::uint32_t DTS_SR_TS1_RDY_B_0x0 = 0;
        /** @brief Temperature sensor 1 ready */
    constexpr std::uint32_t DTS_SR_TS1_RDY_B_0x1 = 1;

    /** @brief Temperature sensor interrupt enable register */
    using DTS_ITENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable flag for end of measurement on temperature sensor 1, synchronized on PCLK. This bit are set and cleared by software. It enables the synchronous interrupt for end of measurement. */
    using DTS_ITENR_TS1_ITEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronous interrupt for end of measurement disabled on temperature sensor 1 (value: 0)
     *          - B_0x1: Synchronous interrupt for end of measurement enabled on temperature sensor 1 (value: 1)
     */
        /** @brief Synchronous interrupt for end of measurement disabled on temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_ITEEN_B_0x0 = 0;
        /** @brief Synchronous interrupt for end of measurement enabled on temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_ITEEN_B_0x1 = 1;

    /** @brief Interrupt enable flag for low threshold on temperature sensor 1, synchronized on PCLK. This bit are set and cleared by software. It enables the synchronous interrupt when the measure reaches or is below the low threshold. */
    using DTS_ITENR_TS1_ITLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronous interrupt for low threshold disabled on temperature sensor 1 (value: 0)
     *          - B_0x1: Synchronous interrupt for low threshold enabled on temperature sensor 1 (value: 1)
     */
        /** @brief Synchronous interrupt for low threshold disabled on temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_ITLEN_B_0x0 = 0;
        /** @brief Synchronous interrupt for low threshold enabled on temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_ITLEN_B_0x1 = 1;

    /** @brief Interrupt enable flag for high threshold on temperature sensor 1, synchronized on PCLK. This bit are set and cleared by software. It enables the interrupt when the measure reaches or is above the high threshold. */
    using DTS_ITENR_TS1_ITHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronous interrupt for high threshold disabled on temperature sensor 1 (value: 0)
     *          - B_0x1: Synchronous interrupt for high threshold enabled on temperature sensor 1 (value: 1)
     */
        /** @brief Synchronous interrupt for high threshold disabled on temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_ITHEN_B_0x0 = 0;
        /** @brief Synchronous interrupt for high threshold enabled on temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_ITHEN_B_0x1 = 1;

    /** @brief Asynchronous interrupt enable flag for end of measurement on temperature sensor 1 This bit are set and cleared by software. It enables the asynchronous interrupt for end of measurement (only when REFCLK_SEL = 1). */
    using DTS_ITENR_TS1_AITEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Asynchronous interrupt for end of measurement disabled on temperature sensor 1 (value: 0)
     *          - B_0x1: Asynchronous interrupt for end of measurement enabled on temperature sensor 1 (value: 1)
     */
        /** @brief Asynchronous interrupt for end of measurement disabled on temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_AITEEN_B_0x0 = 0;
        /** @brief Asynchronous interrupt for end of measurement enabled on temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_AITEEN_B_0x1 = 1;

    /** @brief Asynchronous interrupt enable flag for low threshold on temperature sensor 1. This bit are set and cleared by software. It enables the asynchronous interrupt when the temperature is below the low threshold (only when REFCLK_SEL= 1) */
    using DTS_ITENR_TS1_AITLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Asynchronous interrupt on low threshold disabled for temperature sensor 1 (value: 0)
     *          - B_0x1: Asynchronous interrupt on low threshold enabled for temperature sensor 1 (value: 1)
     */
        /** @brief Asynchronous interrupt on low threshold disabled for temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_AITLEN_B_0x0 = 0;
        /** @brief Asynchronous interrupt on low threshold enabled for temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_AITLEN_B_0x1 = 1;

    /** @brief Asynchronous interrupt enable flag on high threshold for temperature sensor 1. This bit are set and cleared by software. It enables the asynchronous interrupt when the temperature is above the high threshold (only when REFCLK_SEL= 1'') */
    using DTS_ITENR_TS1_AITHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Asynchronous interrupt on high threshold disabled for temperature sensor 1 (value: 0)
     *          - B_0x1: Asynchronous interrupt on high threshold enabled for temperature sensor 1 (value: 1)
     */
        /** @brief Asynchronous interrupt on high threshold disabled for temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_AITHEN_B_0x0 = 0;
        /** @brief Asynchronous interrupt on high threshold enabled for temperature sensor 1 */
    constexpr std::uint32_t DTS_ITENR_TS1_AITHEN_B_0x1 = 1;

    /** @brief Temperature sensor clear interrupt flag register */
    using DTS_ICIFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt clear flag for end of measurement on temperature sensor 1 Writing 1 to this bit clears the TS1_ITEF flag in the DTS_SR register. */
    using DTS_ICIFR_TS1_CITEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt clear flag for low threshold on temperature sensor 1 Writing 1 to this bit clears the TS1_ITLF flag in the DTS_SR register. */
    using DTS_ICIFR_TS1_CITLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt clear flag for high threshold on temperature sensor 1 Writing this bit to 1 clears the TS1_ITHF flag in the DTS_SR register. */
    using DTS_ICIFR_TS1_CITHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write once bit. Clear the asynchronous IT flag for End Of Measure for thermal sensor 1. Writing 1 clears the TS1_AITEF flag of the DTS_SR register. */
    using DTS_ICIFR_TS1_CAITEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Asynchronous interrupt clear flag for low threshold on temperature sensor 1 Writing 1 to this bit clears the TS1_AITLF flag in the DTS_SR register. */
    using DTS_ICIFR_TS1_CAITLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Asynchronous interrupt clear flag for high threshold on temperature sensor 1 Writing 1 to this bit clears the TS1_AITHF flag in the DTS_SR register. */
    using DTS_ICIFR_TS1_CAITHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Temperature sensor option register */
    using DTS_OR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief general purpose option bits */
    using DTS_OR_TS_OP31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
