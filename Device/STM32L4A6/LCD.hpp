/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32L4A6_LCD_HPP
#define EMBEDDED_PP_STM32L4A6_LCD_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Liquid crystal display controller */
namespace STM32L4A6::LCD {

    /** @brief LCD control register */
    using LCD_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCD controller enable This bit is set by software to enable the LCD Controller/Driver. It is cleared by software to turn off the LCD at the beginning of the next frame. When the LCD is disabled all COM and SEG pins are driven to V<sub>SS</sub>. */
    using LCD_CR_LCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LCD controller disabled (value: 0)
     *          - B_0x1: LCD controller enabled (value: 1)
     */
        /** @brief LCD controller disabled */
    constexpr std::uint32_t LCD_CR_LCDEN_B_0x0 = 0;
        /** @brief LCD controller enabled */
    constexpr std::uint32_t LCD_CR_LCDEN_B_0x1 = 1;

    /** @brief Voltage source selection The VSEL bit determines the voltage source for the LCD. */
    using LCD_CR_VSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal source (voltage step-up converter) (value: 0)
     *          - B_0x1: External source (VLCD pin) (value: 1)
     */
        /** @brief Internal source (voltage step-up converter) */
    constexpr std::uint32_t LCD_CR_VSEL_B_0x0 = 0;
        /** @brief External source (VLCD pin) */
    constexpr std::uint32_t LCD_CR_VSEL_B_0x1 = 1;

    /** @brief Duty selection These bits determine the duty cycle.Unused COM pins can serve as general purpose input pins if COMIN is set. Values 101, 110 and 111 are forbidden. Others: Reserved */
    using LCD_CR_DUTY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Static duty (value: 0)
     *          - B_0x1: 1/2 duty (value: 1)
     *          - B_0x2: 1/3 duty (value: 2)
     *          - B_0x3: 1/4 duty (value: 3)
     *          - B_0x4: 1/8 duty (value: 4)
     */
        /** @brief Static duty */
    constexpr std::uint32_t LCD_CR_DUTY_B_0x0 = 0;
        /** @brief 1/2 duty */
    constexpr std::uint32_t LCD_CR_DUTY_B_0x1 = 1;
        /** @brief 1/3 duty */
    constexpr std::uint32_t LCD_CR_DUTY_B_0x2 = 2;
        /** @brief 1/4 duty */
    constexpr std::uint32_t LCD_CR_DUTY_B_0x3 = 3;
        /** @brief 1/8 duty */
    constexpr std::uint32_t LCD_CR_DUTY_B_0x4 = 4;

    /** @brief Bias selector These bits determine the bias used. Value 11 is forbidden. */
    using LCD_CR_BIAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bias 1/4 (value: 0)
     *          - B_0x1: Bias 1/2 (value: 1)
     *          - B_0x2: Bias 1/3 (value: 2)
     */
        /** @brief Bias 1/4 */
    constexpr std::uint32_t LCD_CR_BIAS_B_0x0 = 0;
        /** @brief Bias 1/2 */
    constexpr std::uint32_t LCD_CR_BIAS_B_0x1 = 1;
        /** @brief Bias 1/3 */
    constexpr std::uint32_t LCD_CR_BIAS_B_0x2 = 2;

    /** @brief Mux segment enable This bit is used to enable SEG pin remapping. Four SEG pins can be multiplexed with SEG[31:28] or SEG[15:12]. See Section19.3.7. */
    using LCD_CR_MUX_SEG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SEG pin multiplexing disabled (value: 0)
     *          - B_0x1: SEG[31:28] are multiplexed with SEG[43:40] (value: 1)
     */
        /** @brief SEG pin multiplexing disabled */
    constexpr std::uint32_t LCD_CR_MUX_SEG_B_0x0 = 0;
        /** @brief SEG[31:28] are multiplexed with SEG[43:40] */
    constexpr std::uint32_t LCD_CR_MUX_SEG_B_0x1 = 1;

    /** @brief Voltage output buffer enable This bit is used to enable/disable the voltage output buffer for higher driving capability. */
    using LCD_CR_BUFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output buffer disabled (value: 0)
     *          - B_0x1: Output buffer enabled (value: 1)
     */
        /** @brief Output buffer disabled */
    constexpr std::uint32_t LCD_CR_BUFEN_B_0x0 = 0;
        /** @brief Output buffer enabled */
    constexpr std::uint32_t LCD_CR_BUFEN_B_0x1 = 1;

    /** @brief LCD frame control register */
    using LCD_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High drive enable This bit is written by software to enable a low resistance divider. Displays with high internal resistance may need a longer drive time to achieve satisfactory contrast. This bit is useful in this case if some additional power consumption can be tolerated. */
    using LCD_FCR_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Permanent high drive disabled (value: 0)
     *          - B_0x1: Permanent high drive enabled. When HD=1, then the PON bits have to be programmed to001. (value: 1)
     */
        /** @brief Permanent high drive disabled */
    constexpr std::uint32_t LCD_FCR_HD_B_0x0 = 0;
        /** @brief Permanent high drive enabled. When HD=1, then the PON bits have to be programmed to001. */
    constexpr std::uint32_t LCD_FCR_HD_B_0x1 = 1;

    /** @brief Start of frame interrupt enable This bit is set and cleared by software. */
    using LCD_FCR_SOFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LCD start-of-frame interrupt disabled (value: 0)
     *          - B_0x1: LCD start-of-frame interrupt enabled (value: 1)
     */
        /** @brief LCD start-of-frame interrupt disabled */
    constexpr std::uint32_t LCD_FCR_SOFIE_B_0x0 = 0;
        /** @brief LCD start-of-frame interrupt enabled */
    constexpr std::uint32_t LCD_FCR_SOFIE_B_0x1 = 1;

    /** @brief Update display done interrupt enable This bit is set and cleared by software. */
    using LCD_FCR_UDDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LCD Update display done interrupt disabled (value: 0)
     *          - B_0x1: LCD Update display done interrupt enabled (value: 1)
     */
        /** @brief LCD Update display done interrupt disabled */
    constexpr std::uint32_t LCD_FCR_UDDIE_B_0x0 = 0;
        /** @brief LCD Update display done interrupt enabled */
    constexpr std::uint32_t LCD_FCR_UDDIE_B_0x1 = 1;

    /** @brief Pulse ON duration These bits are written by software to define the pulse duration in terms of ck_ps pulses. Ashort pulse leads to lower power consumption, but displays with high internal resistance may need a longer pulse to achieve satisfactory contrast. Note that the pulse is never longer than one half prescaled LCD clock period. PON duration example with LCDCLK = 32.768kHz and PS=0x03: */
    using LCD_FCR_PON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0 s (value: 0)
     *          - B_0x1: 244 s (value: 1)
     *          - B_0x2: 488 s (value: 2)
     *          - B_0x3: 782 s (value: 3)
     *          - B_0x4: 976 ms (value: 4)
     *          - B_0x5: 1.22 ms (value: 5)
     *          - B_0x6: 1.46 ms (value: 6)
     *          - B_0x7: 1.71 ms (value: 7)
     */
        /** @brief 0 s */
    constexpr std::uint32_t LCD_FCR_PON_B_0x0 = 0;
        /** @brief 244 s */
    constexpr std::uint32_t LCD_FCR_PON_B_0x1 = 1;
        /** @brief 488 s */
    constexpr std::uint32_t LCD_FCR_PON_B_0x2 = 2;
        /** @brief 782 s */
    constexpr std::uint32_t LCD_FCR_PON_B_0x3 = 3;
        /** @brief 976 ms */
    constexpr std::uint32_t LCD_FCR_PON_B_0x4 = 4;
        /** @brief 1.22 ms */
    constexpr std::uint32_t LCD_FCR_PON_B_0x5 = 5;
        /** @brief 1.46 ms */
    constexpr std::uint32_t LCD_FCR_PON_B_0x6 = 6;
        /** @brief 1.71 ms */
    constexpr std::uint32_t LCD_FCR_PON_B_0x7 = 7;

    /** @brief Dead time duration These bits are written by software to configure the length of the dead time between frames. During the dead time the COM and SEG voltage levels are held at 0 V to reduce the contrast without modifying the frame rate. ...... */
    using LCD_FCR_DEAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No dead time (value: 0)
     *          - B_0x1: 1 phase period dead time (value: 1)
     *          - B_0x2: 2 phase period dead time (value: 2)
     *          - B_0x7: 7 phase period dead time (value: 7)
     */
        /** @brief No dead time */
    constexpr std::uint32_t LCD_FCR_DEAD_B_0x0 = 0;
        /** @brief 1 phase period dead time */
    constexpr std::uint32_t LCD_FCR_DEAD_B_0x1 = 1;
        /** @brief 2 phase period dead time */
    constexpr std::uint32_t LCD_FCR_DEAD_B_0x2 = 2;
        /** @brief 7 phase period dead time */
    constexpr std::uint32_t LCD_FCR_DEAD_B_0x7 = 7;

    /** @brief Contrast control */
    using LCD_FCR_CC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>LCD0</sub> (value: 0)
     *          - B_0x1: V<sub>LCD1</sub> (value: 1)
     *          - B_0x2: V<sub>LCD2</sub> (value: 2)
     *          - B_0x3: V<sub>LCD3</sub> (value: 3)
     *          - B_0x4: V<sub>LCD4</sub> (value: 4)
     *          - B_0x5: V<sub>LCD5</sub> (value: 5)
     *          - B_0x6: V<sub>LCD6</sub> (value: 6)
     *          - B_0x7: V<sub>LCD7</sub> (value: 7)
     */
        /** @brief V<sub>LCD0</sub> */
    constexpr std::uint32_t LCD_FCR_CC_B_0x0 = 0;
        /** @brief V<sub>LCD1</sub> */
    constexpr std::uint32_t LCD_FCR_CC_B_0x1 = 1;
        /** @brief V<sub>LCD2</sub> */
    constexpr std::uint32_t LCD_FCR_CC_B_0x2 = 2;
        /** @brief V<sub>LCD3</sub> */
    constexpr std::uint32_t LCD_FCR_CC_B_0x3 = 3;
        /** @brief V<sub>LCD4</sub> */
    constexpr std::uint32_t LCD_FCR_CC_B_0x4 = 4;
        /** @brief V<sub>LCD5</sub> */
    constexpr std::uint32_t LCD_FCR_CC_B_0x5 = 5;
        /** @brief V<sub>LCD6</sub> */
    constexpr std::uint32_t LCD_FCR_CC_B_0x6 = 6;
        /** @brief V<sub>LCD7</sub> */
    constexpr std::uint32_t LCD_FCR_CC_B_0x7 = 7;

    /** @brief Blink frequency selection */
    using LCD_FCR_BLINKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: f<sub>LCD</sub>/8 (value: 0)
     *          - B_0x1: f<sub>LCD</sub>/16 (value: 1)
     *          - B_0x2: f<sub>LCD</sub>/32 (value: 2)
     *          - B_0x3: f<sub>LCD</sub>/64 (value: 3)
     *          - B_0x4: f<sub>LCD</sub>/128 (value: 4)
     *          - B_0x5: f<sub>LCD</sub>/256 (value: 5)
     *          - B_0x6: f<sub>LCD</sub>/512 (value: 6)
     *          - B_0x7: f<sub>LCD</sub>/1024 (value: 7)
     */
        /** @brief f<sub>LCD</sub>/8 */
    constexpr std::uint32_t LCD_FCR_BLINKF_B_0x0 = 0;
        /** @brief f<sub>LCD</sub>/16 */
    constexpr std::uint32_t LCD_FCR_BLINKF_B_0x1 = 1;
        /** @brief f<sub>LCD</sub>/32 */
    constexpr std::uint32_t LCD_FCR_BLINKF_B_0x2 = 2;
        /** @brief f<sub>LCD</sub>/64 */
    constexpr std::uint32_t LCD_FCR_BLINKF_B_0x3 = 3;
        /** @brief f<sub>LCD</sub>/128 */
    constexpr std::uint32_t LCD_FCR_BLINKF_B_0x4 = 4;
        /** @brief f<sub>LCD</sub>/256 */
    constexpr std::uint32_t LCD_FCR_BLINKF_B_0x5 = 5;
        /** @brief f<sub>LCD</sub>/512 */
    constexpr std::uint32_t LCD_FCR_BLINKF_B_0x6 = 6;
        /** @brief f<sub>LCD</sub>/1024 */
    constexpr std::uint32_t LCD_FCR_BLINKF_B_0x7 = 7;

    /** @brief Blink mode selection */
    using LCD_FCR_BLINK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Blink disabled (value: 0)
     *          - B_0x1: Blink enabled on SEG[0], COM[0] (1 pixel) (value: 1)
     *          - B_0x2: Blink enabled on SEG[0], all COMs (up to 8 pixels depending on the programmed duty) (value: 2)
     *          - B_0x3: Blink enabled on all SEGs and all COMs (all pixels) (value: 3)
     */
        /** @brief Blink disabled */
    constexpr std::uint32_t LCD_FCR_BLINK_B_0x0 = 0;
        /** @brief Blink enabled on SEG[0], COM[0] (1 pixel) */
    constexpr std::uint32_t LCD_FCR_BLINK_B_0x1 = 1;
        /** @brief Blink enabled on SEG[0], all COMs (up to 8 pixels depending on the programmed duty) */
    constexpr std::uint32_t LCD_FCR_BLINK_B_0x2 = 2;
        /** @brief Blink enabled on all SEGs and all COMs (all pixels) */
    constexpr std::uint32_t LCD_FCR_BLINK_B_0x3 = 3;

    /** @brief DIV clock divider */
    using LCD_FCR_DIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ck_div = ck_ps/16 (value: 0)
     *          - B_0x1: ck_div = ck_ps/17 (value: 1)
     *          - B_0xF: ck_div = ck_ps/31 (value: 15)
     */
        /** @brief ck_div = ck_ps/16 */
    constexpr std::uint32_t LCD_FCR_DIV_B_0x0 = 0;
        /** @brief ck_div = ck_ps/17 */
    constexpr std::uint32_t LCD_FCR_DIV_B_0x1 = 1;
        /** @brief ck_div = ck_ps/31 */
    constexpr std::uint32_t LCD_FCR_DIV_B_0xF = 15;

    /** @brief PS 16-bit prescaler */
    using LCD_FCR_PS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ck_ps = LCDCLK (value: 0)
     *          - B_0x1: ck_ps = LCDCLK/2 (value: 1)
     *          - B_0xF: ck_ps = LCDCLK/32768 (value: 15)
     */
        /** @brief ck_ps = LCDCLK */
    constexpr std::uint32_t LCD_FCR_PS_B_0x0 = 0;
        /** @brief ck_ps = LCDCLK/2 */
    constexpr std::uint32_t LCD_FCR_PS_B_0x1 = 1;
        /** @brief ck_ps = LCDCLK/32768 */
    constexpr std::uint32_t LCD_FCR_PS_B_0xF = 15;

    /** @brief LCD status register */
    using LCD_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCD enabled status This bit is set and cleared by hardware. It indicates the LCD controller status. The ENS bit is set immediately when the LCDEN bit in the LCD_CR goes from 0 to 1. On deactivation it reflects the real status of LCD so it becomes 0 at the end of the last displayed frame. */
    using LCD_SR_ENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LCD controller disabled (value: 0)
     *          - B_0x1: LCD controller enabled (value: 1)
     */
        /** @brief LCD controller disabled */
    constexpr std::uint32_t LCD_SR_ENS_B_0x0 = 0;
        /** @brief LCD controller enabled */
    constexpr std::uint32_t LCD_SR_ENS_B_0x1 = 1;

    /** @brief Start-of-frame flag This bit is set by hardware at the beginning of a new frame, at the same time as the display data is updated. It is cleared by writing a 1 to the SOFC bit in the LCD_CLR register. The bit clear has priority over the set. */
    using LCD_SR_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event (value: 0)
     *          - B_0x1: Start-of-frame event occurred. (value: 1)
     */
        /** @brief No event */
    constexpr std::uint32_t LCD_SR_SOF_B_0x0 = 0;
        /** @brief Start-of-frame event occurred. */
    constexpr std::uint32_t LCD_SR_SOF_B_0x1 = 1;

    /** @brief Update display request */
    using LCD_SR_UDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Update display request (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t LCD_SR_UDR_B_0x0 = 0;
        /** @brief Update display request */
    constexpr std::uint32_t LCD_SR_UDR_B_0x1 = 1;

    /** @brief Update display done This bit is set by hardware. It is cleared by writing 1 to the UDDC bit in the LCD_CLR register. The bit set has priority over the clear. If the device is in Stop mode (PCLK not provided), UDD does not generate an interrupt even if UDDIE = 1. If the display is not enabled the UDD interrupt never occurs. */
    using LCD_SR_UDD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event (value: 0)
     *          - B_0x1: Update Display Request done. (value: 1)
     */
        /** @brief No event */
    constexpr std::uint32_t LCD_SR_UDD_B_0x0 = 0;
        /** @brief Update Display Request done. */
    constexpr std::uint32_t LCD_SR_UDD_B_0x1 = 1;

    /** @brief Ready flag This bit is set and cleared by hardware. It indicates the status of the step-up converter. */
    using LCD_SR_RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready (value: 0)
     *          - B_0x1: Step-up converter is enabled and ready to provide the correct voltage. (value: 1)
     */
        /** @brief Not ready */
    constexpr std::uint32_t LCD_SR_RDY_B_0x0 = 0;
        /** @brief Step-up converter is enabled and ready to provide the correct voltage. */
    constexpr std::uint32_t LCD_SR_RDY_B_0x1 = 1;

    /** @brief LCD frame control register synchronization flag This bit is set by hardware each time the LCD_FCR register is updated in the LCDCLK domain. It is cleared by hardware when writing to the LCD_FCR register. */
    using LCD_SR_FCRSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LCD frame control register not yet synchronized (value: 0)
     *          - B_0x1: LCD frame control register synchronized (value: 1)
     */
        /** @brief LCD frame control register not yet synchronized */
    constexpr std::uint32_t LCD_SR_FCRSF_B_0x0 = 0;
        /** @brief LCD frame control register synchronized */
    constexpr std::uint32_t LCD_SR_FCRSF_B_0x1 = 1;

    /** @brief LCD clear register */
    using LCD_CLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame flag clear This bit is written by software to clear the SOF flag in the LCD_SR register. */
    using LCD_CLR_SOFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear SOF flag. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t LCD_CLR_SOFC_B_0x0 = 0;
        /** @brief Clear SOF flag. */
    constexpr std::uint32_t LCD_CLR_SOFC_B_0x1 = 1;

    /** @brief Update display done clear This bit is written by software to clear the UDD flag in the LCD_SR register. */
    using LCD_CLR_UDDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear UDD flag. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t LCD_CLR_UDDC_B_0x0 = 0;
        /** @brief Clear UDD flag. */
    constexpr std::uint32_t LCD_CLR_UDDC_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM0_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM0_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM0_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM1_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM1_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM1_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM2_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM2_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM2_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM3_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM3_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM3_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM4_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM4_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM4_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM5_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM5_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM5_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM6_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM6_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM6_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM7_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM7_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM7_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM8_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM8_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM8_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM9_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM9_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM9_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM10_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM10_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM10_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM11_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM11_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM11_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM12_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM12_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM12_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM13_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM13_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM13_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM14_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM14_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM14_SEGMENT_DATA_B_0x1 = 1;

    /** @brief LCD display memory */
    using LCD_RAM15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Each bit corresponds to one pixel of the LCD display. */
    using LCD_RAM15_SEGMENT_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pixel inactive (value: 0)
     *          - B_0x1: Pixel active (value: 1)
     */
        /** @brief Pixel inactive */
    constexpr std::uint32_t LCD_RAM15_SEGMENT_DATA_B_0x0 = 0;
        /** @brief Pixel active */
    constexpr std::uint32_t LCD_RAM15_SEGMENT_DATA_B_0x1 = 1;

}

#endif
