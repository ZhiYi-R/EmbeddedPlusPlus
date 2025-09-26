/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G0C1_COMP_HPP
#define EMBEDDED_PP_STM32G0C1_COMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Comparator */
namespace STM32G0C1::COMP {

    /** @brief Comparator 1 control and status register */
    using COMP1_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 1 enable bit This bit is controlled by software (if not locked). It enables the comparator 1: */
    using COMP1_CSR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t COMP1_CSR_EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t COMP1_CSR_EN_B_0x1 = 1;

    /** @brief Comparator 1 signal selector for inverting input INM This bitfield is controlled by software (if not locked). It selects the signal for the inverting input COMP1_INM of the comparator 1: > 1000: 1/4 VREFINT */
    using COMP1_CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1/4 VREFINT (value: 0)
     *          - B_0x1: 1/2 VREFINT (value: 1)
     *          - B_0x2: 3/4 VREFINT (value: 2)
     *          - B_0x3: VREFINT (value: 3)
     *          - B_0x4: DAC channel 1 (value: 4)
     *          - B_0x5: DAC channel 2 (value: 5)
     *          - B_0x6: PB1 (value: 6)
     *          - B_0x7: PC4 (value: 7)
     *          - B_0x8: PA0 (value: 8)
     */
        /** @brief 1/4 VREFINT */
    constexpr std::uint32_t COMP1_CSR_INMSEL_B_0x0 = 0;
        /** @brief 1/2 VREFINT */
    constexpr std::uint32_t COMP1_CSR_INMSEL_B_0x1 = 1;
        /** @brief 3/4 VREFINT */
    constexpr std::uint32_t COMP1_CSR_INMSEL_B_0x2 = 2;
        /** @brief VREFINT */
    constexpr std::uint32_t COMP1_CSR_INMSEL_B_0x3 = 3;
        /** @brief DAC channel 1 */
    constexpr std::uint32_t COMP1_CSR_INMSEL_B_0x4 = 4;
        /** @brief DAC channel 2 */
    constexpr std::uint32_t COMP1_CSR_INMSEL_B_0x5 = 5;
        /** @brief PB1 */
    constexpr std::uint32_t COMP1_CSR_INMSEL_B_0x6 = 6;
        /** @brief PC4 */
    constexpr std::uint32_t COMP1_CSR_INMSEL_B_0x7 = 7;
        /** @brief PA0 */
    constexpr std::uint32_t COMP1_CSR_INMSEL_B_0x8 = 8;

    /** @brief Comparator 1 signal selector for non-inverting input This bitfield is controlled by software (if not locked). It selects the signal for the non-inverting input COMP1_INP of the comparator 1 (also see the WINMODE bit): */
    using COMP1_CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PC5 (value: 0)
     *          - B_0x1: PB2 (value: 1)
     *          - B_0x2: PA1 (value: 2)
     *          - B_0x3: None (open) (value: 3)
     */
        /** @brief PC5 */
    constexpr std::uint32_t COMP1_CSR_INPSEL_B_0x0 = 0;
        /** @brief PB2 */
    constexpr std::uint32_t COMP1_CSR_INPSEL_B_0x1 = 1;
        /** @brief PA1 */
    constexpr std::uint32_t COMP1_CSR_INPSEL_B_0x2 = 2;
        /** @brief None (open) */
    constexpr std::uint32_t COMP1_CSR_INPSEL_B_0x3 = 3;

    /** @brief Comparator 1 non-inverting input selector for window mode This bit is controlled by software (if not locked). It selects the signal for COMP1_INP input of the comparator 1: */
    using COMP1_CSR_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signal selected with INPSEL[1:0] bitfield of this register (value: 0)
     *          - B_0x1: COMP2_INP signal of the comparator 2 (required for window mode, see Figure 64) (value: 1)
     */
        /** @brief Signal selected with INPSEL[1:0] bitfield of this register */
    constexpr std::uint32_t COMP1_CSR_WINMODE_B_0x0 = 0;
        /** @brief COMP2_INP signal of the comparator 2 (required for window mode, see Figure 64) */
    constexpr std::uint32_t COMP1_CSR_WINMODE_B_0x1 = 1;

    /** @brief Comparator 1 output selector This bit is controlled by software (if not locked). It selects the comparator 1 output: */
    using COMP1_CSR_WINOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP1_VALUE (value: 0)
     *          - B_0x1: COMP1_VALUE XOR COMP2_VALUE (required for window mode, see Figure 64) (value: 1)
     */
        /** @brief COMP1_VALUE */
    constexpr std::uint32_t COMP1_CSR_WINOUT_B_0x0 = 0;
        /** @brief COMP1_VALUE XOR COMP2_VALUE (required for window mode, see Figure 64) */
    constexpr std::uint32_t COMP1_CSR_WINOUT_B_0x1 = 1;

    /** @brief Comparator 1 polarity selector This bit is controlled by software (if not locked). It selects the comparator 1 output polarity: */
    using COMP1_CSR_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-inverted (value: 0)
     *          - B_0x1: Inverted (value: 1)
     */
        /** @brief Non-inverted */
    constexpr std::uint32_t COMP1_CSR_POLARITY_B_0x0 = 0;
        /** @brief Inverted */
    constexpr std::uint32_t COMP1_CSR_POLARITY_B_0x1 = 1;

    /** @brief Comparator 1 hysteresis selector This bitfield is controlled by software (if not locked). It selects the hysteresis of the comparator 1: */
    using COMP1_CSR_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (value: 0)
     *          - B_0x1: Low (value: 1)
     *          - B_0x2: Medium (value: 2)
     *          - B_0x3: High (value: 3)
     */
        /** @brief None */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x0 = 0;
        /** @brief Low */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x1 = 1;
        /** @brief Medium */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x2 = 2;
        /** @brief High */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x3 = 3;

    /** @brief Comparator 1 power mode selector This bitfield is controlled by software (if not locked). It selects the power consumption and as a consequence the speed of the comparator 1: others: Reserved */
    using COMP1_CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     */
        /** @brief High speed */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x1 = 1;

    /** @brief Comparator 1 blanking source selector This bitfield is controlled by software (if not locked). It selects the blanking source: xxxx1: TIM1 OC4 xxx1x: TIM1 OC5 xx1xx: TIM2 OC3 x1xxx: TIM3 OC3 1xxxx: TIM15 OC2 */
    using COMP1_CSR_BLANKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (no blanking) (value: 0)
     */
        /** @brief None (no blanking) */
    constexpr std::uint32_t COMP1_CSR_BLANKSEL_B_0x0 = 0;

    /** @brief Comparator 1 output status This bit is read-only. It reflects the level of the comparator 1 output after the polarity selector and blanking, as indicated in . */
    using COMP1_CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1_CSR register lock This bit is set by software and cleared by a system reset. It locks the whole content of the comparator 1 control register COMP1_CSR[31:0]: */
    using COMP1_CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP1_CSR[31:0] register read/write bits can be written by software (value: 0)
     *          - B_0x1: COMP1_CSR[31:0] register bits can be read but not written by software (value: 1)
     */
        /** @brief COMP1_CSR[31:0] register read/write bits can be written by software */
    constexpr std::uint32_t COMP1_CSR_LOCK_B_0x0 = 0;
        /** @brief COMP1_CSR[31:0] register bits can be read but not written by software */
    constexpr std::uint32_t COMP1_CSR_LOCK_B_0x1 = 1;

    /** @brief Comparator 2 control and status register */
    using COMP2_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 enable bit This bit is controlled by software (if not locked). It enables the comparator 2: */
    using COMP2_CSR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t COMP2_CSR_EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t COMP2_CSR_EN_B_0x1 = 1;

    /** @brief Comparator 2 signal selector for inverting input INM This bitfield is controlled by software (if not locked). It selects the signal for the inverting input COMP2_INM of the comparator 2: > 1000: 1/4 VREFINT */
    using COMP2_CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1/4 VREFINT (value: 0)
     *          - B_0x1: 1/2 VREFINT (value: 1)
     *          - B_0x2: 3/4 VREFINT (value: 2)
     *          - B_0x3: VREFINT (value: 3)
     *          - B_0x4: DAC channel 1 (value: 4)
     *          - B_0x5: DAC channel 2 (value: 5)
     *          - B_0x6: PB3 (value: 6)
     *          - B_0x7: PB7 (value: 7)
     *          - B_0x8: PA2 (value: 8)
     */
        /** @brief 1/4 VREFINT */
    constexpr std::uint32_t COMP2_CSR_INMSEL_B_0x0 = 0;
        /** @brief 1/2 VREFINT */
    constexpr std::uint32_t COMP2_CSR_INMSEL_B_0x1 = 1;
        /** @brief 3/4 VREFINT */
    constexpr std::uint32_t COMP2_CSR_INMSEL_B_0x2 = 2;
        /** @brief VREFINT */
    constexpr std::uint32_t COMP2_CSR_INMSEL_B_0x3 = 3;
        /** @brief DAC channel 1 */
    constexpr std::uint32_t COMP2_CSR_INMSEL_B_0x4 = 4;
        /** @brief DAC channel 2 */
    constexpr std::uint32_t COMP2_CSR_INMSEL_B_0x5 = 5;
        /** @brief PB3 */
    constexpr std::uint32_t COMP2_CSR_INMSEL_B_0x6 = 6;
        /** @brief PB7 */
    constexpr std::uint32_t COMP2_CSR_INMSEL_B_0x7 = 7;
        /** @brief PA2 */
    constexpr std::uint32_t COMP2_CSR_INMSEL_B_0x8 = 8;

    /** @brief Comparator 2 signal selector for non-inverting input This bitfield is controlled by software (if not locked). It selects the signal for the non-inverting input COMP2_INP of the comparator 2 (also see the WINMODE bit): */
    using COMP2_CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PB4 (value: 0)
     *          - B_0x1: PB6 (value: 1)
     *          - B_0x2: PA3 (value: 2)
     *          - B_0x3: None (open) (value: 3)
     */
        /** @brief PB4 */
    constexpr std::uint32_t COMP2_CSR_INPSEL_B_0x0 = 0;
        /** @brief PB6 */
    constexpr std::uint32_t COMP2_CSR_INPSEL_B_0x1 = 1;
        /** @brief PA3 */
    constexpr std::uint32_t COMP2_CSR_INPSEL_B_0x2 = 2;
        /** @brief None (open) */
    constexpr std::uint32_t COMP2_CSR_INPSEL_B_0x3 = 3;

    /** @brief Comparator 2 non-inverting input selector for window mode This bit is controlled by software (if not locked). It selects the signal for COMP2_INP input of the comparator 2: */
    using COMP2_CSR_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signal selected with INPSEL[1:0] bitfield of this register (value: 0)
     *          - B_0x1: COMP1_INP signal of the comparator 1 (required for window mode, see Figure 64) (value: 1)
     */
        /** @brief Signal selected with INPSEL[1:0] bitfield of this register */
    constexpr std::uint32_t COMP2_CSR_WINMODE_B_0x0 = 0;
        /** @brief COMP1_INP signal of the comparator 1 (required for window mode, see Figure 64) */
    constexpr std::uint32_t COMP2_CSR_WINMODE_B_0x1 = 1;

    /** @brief Comparator 2 output selector This bit is controlled by software (if not locked). It selects the comparator 2 output: */
    using COMP2_CSR_WINOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP2_VALUE (value: 0)
     *          - B_0x1: COMP1_VALUE XOR COMP2_VALUE (required for window mode, see Figure 64) (value: 1)
     */
        /** @brief COMP2_VALUE */
    constexpr std::uint32_t COMP2_CSR_WINOUT_B_0x0 = 0;
        /** @brief COMP1_VALUE XOR COMP2_VALUE (required for window mode, see Figure 64) */
    constexpr std::uint32_t COMP2_CSR_WINOUT_B_0x1 = 1;

    /** @brief Comparator 2 polarity selector This bit is controlled by software (if not locked). It selects the comparator 2 output polarity: */
    using COMP2_CSR_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-inverted (value: 0)
     *          - B_0x1: Inverted (value: 1)
     */
        /** @brief Non-inverted */
    constexpr std::uint32_t COMP2_CSR_POLARITY_B_0x0 = 0;
        /** @brief Inverted */
    constexpr std::uint32_t COMP2_CSR_POLARITY_B_0x1 = 1;

    /** @brief Comparator 2 hysteresis selector This bitfield is controlled by software (if not locked). It selects the hysteresis of the comparator 2: */
    using COMP2_CSR_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (value: 0)
     *          - B_0x1: Low (value: 1)
     *          - B_0x2: Medium (value: 2)
     *          - B_0x3: High (value: 3)
     */
        /** @brief None */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x0 = 0;
        /** @brief Low */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x1 = 1;
        /** @brief Medium */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x2 = 2;
        /** @brief High */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x3 = 3;

    /** @brief Comparator 2 power mode selector This bitfield is controlled by software (if not locked). It selects the power consumption and as a consequence the speed of the comparator 2: others: Reserved */
    using COMP2_CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     */
        /** @brief High speed */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x1 = 1;

    /** @brief Comparator 2 blanking source selector This bitfield is controlled by software (if not locked). It selects the blanking source: xxxx1: TIM1 OC4 xxx1x: TIM1 OC5 xx1xx: TIM2 OC3 x1xxx: TIM3 OC3 1xxxx: TIM15 OC2 */
    using COMP2_CSR_BLANKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (no blanking) (value: 0)
     */
        /** @brief None (no blanking) */
    constexpr std::uint32_t COMP2_CSR_BLANKSEL_B_0x0 = 0;

    /** @brief Comparator 2 output status This bit is read-only. It reflects the level of the comparator 2 output after the polarity selector and blanking, as indicated in . */
    using COMP2_CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP2_CSR register lock This bit is set by software and cleared by a system reset. It locks the whole content of the comparator 2 control register COMP2_CSR[31:0]: */
    using COMP2_CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP2_CSR[31:0] register read/write bits can be written by software (value: 0)
     *          - B_0x1: COMP2_CSR[31:0] register bits can be read but not written by software (value: 1)
     */
        /** @brief COMP2_CSR[31:0] register read/write bits can be written by software */
    constexpr std::uint32_t COMP2_CSR_LOCK_B_0x0 = 0;
        /** @brief COMP2_CSR[31:0] register bits can be read but not written by software */
    constexpr std::uint32_t COMP2_CSR_LOCK_B_0x1 = 1;

    /** @brief Comparator 2 control and status register */
    using COMP3_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 3 enable bit This bit is controlled by software (if not locked). It enables the comparator 3: */
    using COMP3_CSR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t COMP3_CSR_EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t COMP3_CSR_EN_B_0x1 = 1;

    /** @brief Comparator 3 signal selector for inverting input INM This bitfield is controlled by software (if not locked). It selects the signal for the inverting input COMP3_INM of the comparator 3: > 1000: 1/4 VREFINT */
    using COMP3_CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1/4 VREFINT (value: 0)
     *          - B_0x1: 1/2 VREFINT (value: 1)
     *          - B_0x2: 3/4 VREFINT (value: 2)
     *          - B_0x3: VREFINT (value: 3)
     *          - B_0x4: DAC channel 1 (value: 4)
     *          - B_0x5: DAC channel 2 (value: 5)
     *          - B_0x6: PB3 (value: 6)
     *          - B_0x7: PB7 (value: 7)
     *          - B_0x8: PA2 (value: 8)
     */
        /** @brief 1/4 VREFINT */
    constexpr std::uint32_t COMP3_CSR_INMSEL_B_0x0 = 0;
        /** @brief 1/2 VREFINT */
    constexpr std::uint32_t COMP3_CSR_INMSEL_B_0x1 = 1;
        /** @brief 3/4 VREFINT */
    constexpr std::uint32_t COMP3_CSR_INMSEL_B_0x2 = 2;
        /** @brief VREFINT */
    constexpr std::uint32_t COMP3_CSR_INMSEL_B_0x3 = 3;
        /** @brief DAC channel 1 */
    constexpr std::uint32_t COMP3_CSR_INMSEL_B_0x4 = 4;
        /** @brief DAC channel 2 */
    constexpr std::uint32_t COMP3_CSR_INMSEL_B_0x5 = 5;
        /** @brief PB3 */
    constexpr std::uint32_t COMP3_CSR_INMSEL_B_0x6 = 6;
        /** @brief PB7 */
    constexpr std::uint32_t COMP3_CSR_INMSEL_B_0x7 = 7;
        /** @brief PA2 */
    constexpr std::uint32_t COMP3_CSR_INMSEL_B_0x8 = 8;

    /** @brief Comparator 3 signal selector for non-inverting input This bitfield is controlled by software (if not locked). It selects the signal for the non-inverting input COMP3_INP of the comparator 3 (also see the WINMODE bit): */
    using COMP3_CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PB4 (value: 0)
     *          - B_0x1: PB6 (value: 1)
     *          - B_0x2: PA3 (value: 2)
     *          - B_0x3: None (open) (value: 3)
     */
        /** @brief PB4 */
    constexpr std::uint32_t COMP3_CSR_INPSEL_B_0x0 = 0;
        /** @brief PB6 */
    constexpr std::uint32_t COMP3_CSR_INPSEL_B_0x1 = 1;
        /** @brief PA3 */
    constexpr std::uint32_t COMP3_CSR_INPSEL_B_0x2 = 2;
        /** @brief None (open) */
    constexpr std::uint32_t COMP3_CSR_INPSEL_B_0x3 = 3;

    /** @brief Comparator 3 non-inverting input selector for window mode This bit is controlled by software (if not locked). It selects the signal for COMP3_INP input of the comparator 3: */
    using COMP3_CSR_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signal selected with INPSEL[1:0] bitfield of this register (value: 0)
     *          - B_0x1: COMP1_INP signal of the comparator 1 (required for window mode, see Figure 64) (value: 1)
     */
        /** @brief Signal selected with INPSEL[1:0] bitfield of this register */
    constexpr std::uint32_t COMP3_CSR_WINMODE_B_0x0 = 0;
        /** @brief COMP1_INP signal of the comparator 1 (required for window mode, see Figure 64) */
    constexpr std::uint32_t COMP3_CSR_WINMODE_B_0x1 = 1;

    /** @brief Comparator 3 output selector This bit is controlled by software (if not locked). It selects the comparator 3 output: */
    using COMP3_CSR_WINOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP2_VALUE (value: 0)
     *          - B_0x1: COMP1_VALUE XOR COMP3_VALUE (required for window mode, see Figure 64) (value: 1)
     */
        /** @brief COMP2_VALUE */
    constexpr std::uint32_t COMP3_CSR_WINOUT_B_0x0 = 0;
        /** @brief COMP1_VALUE XOR COMP3_VALUE (required for window mode, see Figure 64) */
    constexpr std::uint32_t COMP3_CSR_WINOUT_B_0x1 = 1;

    /** @brief Comparator 2 polarity selector This bit is controlled by software (if not locked). It selects the comparator 3 output polarity: */
    using COMP3_CSR_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-inverted (value: 0)
     *          - B_0x1: Inverted (value: 1)
     */
        /** @brief Non-inverted */
    constexpr std::uint32_t COMP3_CSR_POLARITY_B_0x0 = 0;
        /** @brief Inverted */
    constexpr std::uint32_t COMP3_CSR_POLARITY_B_0x1 = 1;

    /** @brief Comparator 3 hysteresis selector This bitfield is controlled by software (if not locked). It selects the hysteresis of the comparator 3: */
    using COMP3_CSR_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (value: 0)
     *          - B_0x1: Low (value: 1)
     *          - B_0x2: Medium (value: 2)
     *          - B_0x3: High (value: 3)
     */
        /** @brief None */
    constexpr std::uint32_t COMP3_CSR_HYST_B_0x0 = 0;
        /** @brief Low */
    constexpr std::uint32_t COMP3_CSR_HYST_B_0x1 = 1;
        /** @brief Medium */
    constexpr std::uint32_t COMP3_CSR_HYST_B_0x2 = 2;
        /** @brief High */
    constexpr std::uint32_t COMP3_CSR_HYST_B_0x3 = 3;

    /** @brief Comparator 3 power mode selector This bitfield is controlled by software (if not locked). It selects the power consumption and as a consequence the speed of the comparator 3: others: Reserved */
    using COMP3_CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed (value: 0)
     *          - B_0x1: Medium speed (value: 1)
     */
        /** @brief High speed */
    constexpr std::uint32_t COMP3_CSR_PWRMODE_B_0x0 = 0;
        /** @brief Medium speed */
    constexpr std::uint32_t COMP3_CSR_PWRMODE_B_0x1 = 1;

    /** @brief Comparator 3 blanking source selector This bitfield is controlled by software (if not locked). It selects the blanking source: xxxx1: TIM1 OC4 xxx1x: TIM1 OC5 xx1xx: TIM2 OC3 x1xxx: TIM3 OC3 1xxxx: TIM15 OC2 */
    using COMP3_CSR_BLANKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (no blanking) (value: 0)
     */
        /** @brief None (no blanking) */
    constexpr std::uint32_t COMP3_CSR_BLANKSEL_B_0x0 = 0;

    /** @brief Comparator 3 output status This bit is read-only. It reflects the level of the comparator 2 output after the polarity selector and blanking, as indicated in . */
    using COMP3_CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP3_CSR register lock This bit is set by software and cleared by a system reset. It locks the whole content of the comparator 3 control register COMP3_CSR[31:0]: */
    using COMP3_CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP3_CSR[31:0] register read/write bits can be written by software (value: 0)
     *          - B_0x1: COMP3_CSR[31:0] register bits can be read but not written by software (value: 1)
     */
        /** @brief COMP3_CSR[31:0] register read/write bits can be written by software */
    constexpr std::uint32_t COMP3_CSR_LOCK_B_0x0 = 0;
        /** @brief COMP3_CSR[31:0] register bits can be read but not written by software */
    constexpr std::uint32_t COMP3_CSR_LOCK_B_0x1 = 1;

}

#endif
