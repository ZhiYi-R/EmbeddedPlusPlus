/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_COMP_HPP
#define EMBEDDED_PP_STM32U3B5_COMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief COMP1 Address block */
namespace STM32U3B5::COMP {

    /** @brief COMP1 control and status register */
    using COMP1_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controlled by software (if not locked), enables COMP1. 0: COMP1 disabled 1: COMP1 enabled */
    using COMP1_CSR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP1 disabled (value: 0)
     *          - B_0x1: COMP1 enabled (value: 1)
     */
        /** @brief COMP1 disabled */
    constexpr std::uint32_t COMP1_CSR_EN_B_0x0 = 0;
        /** @brief COMP1 enabled */
    constexpr std::uint32_t COMP1_CSR_EN_B_0x1 = 1;

    /** @brief Controlled by software (if not locked), selects the signal for the inverting input COMP1_INM (see less than xe3 [COMP_pins_and_internal_signals/IDTBL00-15] [number]/> for the assignment). */
    using COMP1_CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controlled by software (if not locked), selects the signal for the noninverting input COMP1_INP (see less than xe6 [COMP_pins_and_internal_signals/IDTBL00-3] [number]/> for the assignment). */
    using COMP1_CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controlled by software (if not locked), selects the signal for the COMP1_INP input of the COMP1. 0: Signal selected with INPSEL[1:0] 1: COMP2_INP signal of COMP2 (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) */
    using COMP1_CSR_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signal selected with INPSEL[1:0] (value: 0)
     *          - B_0x1: COMP2_INP signal of COMP2 (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) (value: 1)
     */
        /** @brief Signal selected with INPSEL[1:0] */
    constexpr std::uint32_t COMP1_CSR_WINMODE_B_0x0 = 0;
        /** @brief COMP2_INP signal of COMP2 (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) */
    constexpr std::uint32_t COMP1_CSR_WINMODE_B_0x1 = 1;

    /** @brief Controlled by software (if not locked), selects the COMP1 output. 0: COMP1_VALUE 1: COMP1_VALUE xOR COMP2_VALUE (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) */
    using COMP1_CSR_WINOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP1_VALUE (value: 0)
     *          - B_0x1: COMP1_VALUE xOR COMP2_VALUE (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) (value: 1)
     */
        /** @brief COMP1_VALUE */
    constexpr std::uint32_t COMP1_CSR_WINOUT_B_0x0 = 0;
        /** @brief COMP1_VALUE xOR COMP2_VALUE (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) */
    constexpr std::uint32_t COMP1_CSR_WINOUT_B_0x1 = 1;

    /** @brief Controlled by software (if not locked), selects the COMP1 output polarity. 0: Noninverted 1: Inverted */
    using COMP1_CSR_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Noninverted (value: 0)
     *          - B_0x1: Inverted (value: 1)
     */
        /** @brief Noninverted */
    constexpr std::uint32_t COMP1_CSR_POLARITY_B_0x0 = 0;
        /** @brief Inverted */
    constexpr std::uint32_t COMP1_CSR_POLARITY_B_0x1 = 1;

    /** @brief Controlled by software (if not locked), selects the COMP1 hysteresis. 00: None 01: Low hysteresis 10: Medium hysteresis 11: High hysteresis */
    using COMP1_CSR_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (value: 0)
     *          - B_0x1: Low hysteresis (value: 1)
     *          - B_0x2: Medium hysteresis (value: 2)
     *          - B_0x3: High hysteresis (value: 3)
     */
        /** @brief None */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x0 = 0;
        /** @brief Low hysteresis */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x1 = 1;
        /** @brief Medium hysteresis */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x2 = 2;
        /** @brief High hysteresis */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x3 = 3;

    /** @brief Controlled by software (if not locked), selects the power consumption and, as a consequence, the speed of the COMP1. 00: High speed 01: Intermediate speed and power 10: Medium speed and power 11: Ultra-low-power */
    using COMP1_CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed (value: 0)
     *          - B_0x1: Intermediate speed and power (value: 1)
     *          - B_0x2: Medium speed and power (value: 2)
     *          - B_0x3: Ultra-low-power (value: 3)
     */
        /** @brief High speed */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x0 = 0;
        /** @brief Intermediate speed and power */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x1 = 1;
        /** @brief Medium speed and power */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x2 = 2;
        /** @brief Ultra-low-power */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x3 = 3;

    /** @brief This field is controlled by software (if not locked) and selects the blanking source: 00000: None (no blanking) 00001: tim1_oc5 00010: tim2_oc3 Others: Reserved */
    using COMP1_CSR_BLANKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: None (no blanking) (value: 0)
     *          - B_0x01: tim1_oc5 (value: 1)
     *          - B_0x02: tim2_oc3 (value: 2)
     */
        /** @brief None (no blanking) */
    constexpr std::uint32_t COMP1_CSR_BLANKSEL_B_0x00 = 0;
        /** @brief tim1_oc5 */
    constexpr std::uint32_t COMP1_CSR_BLANKSEL_B_0x01 = 1;
        /** @brief tim2_oc3 */
    constexpr std::uint32_t COMP1_CSR_BLANKSEL_B_0x02 = 2;

    /** @brief This bit is read-only. It reflects the level of the COMP1 output after the polarity selector and blanking (see less than xe2 [Comparator_output_blanking_function/ID00-187] [number]/>). */
    using COMP1_CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is set by software and cleared by reset. It locks the whole content of COMP1_CSR. 0: COMP1_CSR read/write bits can be written by software. 1: COMP1_CSR bits can be read but not written by software. */
    using COMP1_CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP1_CSR read/write bits can be written by software. (value: 0)
     *          - B_0x1: COMP1_CSR bits can be read but not written by software. (value: 1)
     */
        /** @brief COMP1_CSR read/write bits can be written by software. */
    constexpr std::uint32_t COMP1_CSR_LOCK_B_0x0 = 0;
        /** @brief COMP1_CSR bits can be read but not written by software. */
    constexpr std::uint32_t COMP1_CSR_LOCK_B_0x1 = 1;

    /** @brief COMP2 control and status register */
    using COMP2_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controlled by software (if not locked), enables COMP2. 0: COMP2 disabled 1: COMP2 enabled */
    using COMP2_CSR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP2 disabled (value: 0)
     *          - B_0x1: COMP2 enabled (value: 1)
     */
        /** @brief COMP2 disabled */
    constexpr std::uint32_t COMP2_CSR_EN_B_0x0 = 0;
        /** @brief COMP2 enabled */
    constexpr std::uint32_t COMP2_CSR_EN_B_0x1 = 1;

    /** @brief Controlled by software (if not locked), selects the signal for the inverting input COMP2_INM (see less than xe1 [COMP_pins_and_internal_signals/IDTBL00-55] [number]/> for the assignment). */
    using COMP2_CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controlled by software (if not locked), selects the signal for the noninverting input COMP2_INP (see less than xe4 [COMP_pins_and_internal_signals/IDTBL00-43] [number]/> for the assignment). */
    using COMP2_CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Controlled by software (if not locked), selects the signal for the COMP2_INP input of the COMP2. 0: Signal selected with INPSEL[1:0] 1: COMP1_INP signal of COMP1 (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) */
    using COMP2_CSR_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signal selected with INPSEL[1:0] (value: 0)
     *          - B_0x1: COMP1_INP signal of COMP1 (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) (value: 1)
     */
        /** @brief Signal selected with INPSEL[1:0] */
    constexpr std::uint32_t COMP2_CSR_WINMODE_B_0x0 = 0;
        /** @brief COMP1_INP signal of COMP1 (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) */
    constexpr std::uint32_t COMP2_CSR_WINMODE_B_0x1 = 1;

    /** @brief Controlled by software (if not locked), selects the COMP2 output. 0: COMP2_VALUE 1: COMP1_VALUE xOR COMP2_VALUE (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) */
    using COMP2_CSR_WINOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP2_VALUE (value: 0)
     *          - B_0x1: COMP1_VALUE xOR COMP2_VALUE (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) (value: 1)
     */
        /** @brief COMP2_VALUE */
    constexpr std::uint32_t COMP2_CSR_WINOUT_B_0x0 = 0;
        /** @brief COMP1_VALUE xOR COMP2_VALUE (required for window mode, see less than xe5 [Window_comparator/ID00-180] [number]/>) */
    constexpr std::uint32_t COMP2_CSR_WINOUT_B_0x1 = 1;

    /** @brief Controlled by software (if not locked), selects the COMP2 output polarity. 0: Noninverted 1: Inverted */
    using COMP2_CSR_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Noninverted (value: 0)
     *          - B_0x1: Inverted (value: 1)
     */
        /** @brief Noninverted */
    constexpr std::uint32_t COMP2_CSR_POLARITY_B_0x0 = 0;
        /** @brief Inverted */
    constexpr std::uint32_t COMP2_CSR_POLARITY_B_0x1 = 1;

    /** @brief Controlled by software (if not locked), selects the COMP2 hysteresis. 00: None 01: Low hysteresis 10: Medium hysteresis 11: High hysteresis */
    using COMP2_CSR_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (value: 0)
     *          - B_0x1: Low hysteresis (value: 1)
     *          - B_0x2: Medium hysteresis (value: 2)
     *          - B_0x3: High hysteresis (value: 3)
     */
        /** @brief None */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x0 = 0;
        /** @brief Low hysteresis */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x1 = 1;
        /** @brief Medium hysteresis */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x2 = 2;
        /** @brief High hysteresis */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x3 = 3;

    /** @brief Controlled by software (if not locked), selects the power consumption and, as a consequence, the speed of the COMP2. 00: High speed 01: Intermediate speed and power 10: Medium speed and power 11: Ultra-low-power */
    using COMP2_CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed (value: 0)
     *          - B_0x1: Intermediate speed and power (value: 1)
     *          - B_0x2: Medium speed and power (value: 2)
     *          - B_0x3: Ultra-low-power (value: 3)
     */
        /** @brief High speed */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x0 = 0;
        /** @brief Intermediate speed and power */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x1 = 1;
        /** @brief Medium speed and power */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x2 = 2;
        /** @brief Ultra-low-power */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x3 = 3;

    /** @brief Controlled by software (if not locked) and selects the blanking source: 00000: None (no blanking) 00001: tim3_oc4 Others: Reserved */
    using COMP2_CSR_BLANKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: None (no blanking) (value: 0)
     *          - B_0x01: tim3_oc4 (value: 1)
     */
        /** @brief None (no blanking) */
    constexpr std::uint32_t COMP2_CSR_BLANKSEL_B_0x00 = 0;
        /** @brief tim3_oc4 */
    constexpr std::uint32_t COMP2_CSR_BLANKSEL_B_0x01 = 1;

    /** @brief This bit is read-only. It reflects the level of the COMP2 output after the polarity selector and blanking (see less than xe2 [Comparator_output_blanking_function/ID00-187] [number]/>). */
    using COMP2_CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is set by software and cleared by reset. It locks the whole content of COMP2_CSR. 0: COMP2_CSR read/write bits can be written by software. 1: COMP2_CSR bits can be read but not written by software. */
    using COMP2_CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP2_CSR read/write bits can be written by software. (value: 0)
     *          - B_0x1: COMP2_CSR bits can be read but not written by software. (value: 1)
     */
        /** @brief COMP2_CSR read/write bits can be written by software. */
    constexpr std::uint32_t COMP2_CSR_LOCK_B_0x0 = 0;
        /** @brief COMP2_CSR bits can be read but not written by software. */
    constexpr std::uint32_t COMP2_CSR_LOCK_B_0x1 = 1;

}

#endif
