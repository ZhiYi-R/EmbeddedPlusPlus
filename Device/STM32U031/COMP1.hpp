/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U031_COMP1_HPP
#define EMBEDDED_PP_STM32U031_COMP1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief COMP address block description */
namespace STM32U031::COMP1 {

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

    /** @brief Comparator 1 signal selector for inverting input INM This bitfield is controlled by software (if not locked). It selects the signal for the inverting input COMP_INM of the comparator 1: Refer to Table176: COMP1 inverting input assignment. */
    using COMP1_CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 1 signal selector for noninverting input This bitfield is controlled by software (if not locked). It selects the signal for the noninverting input COMP_INP of the comparator 1 (also see the WINMODE bit): Refer to Table175: COMP1 noninverting input assignment. */
    using COMP1_CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 1 noninverting input selector for window mode This bit is controlled by software (if not locked). It selects the signal for COMP_INP input of the comparator 1: */
    using COMP1_CSR_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signal selected with INPSEL[2:0] bitfield of this register (value: 0)
     *          - B_0x1: COMP_INP signal of the comparator 2 (required for window mode, see Figure164) (value: 1)
     */
        /** @brief Signal selected with INPSEL[2:0] bitfield of this register */
    constexpr std::uint32_t COMP1_CSR_WINMODE_B_0x0 = 0;
        /** @brief COMP_INP signal of the comparator 2 (required for window mode, see Figure164) */
    constexpr std::uint32_t COMP1_CSR_WINMODE_B_0x1 = 1;

    /** @brief Comparator 1 output selector This bit is controlled by software (if not locked). It selects the comparator 1 output: */
    using COMP1_CSR_WINOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP_VALUE (value: 0)
     *          - B_0x1: COMP_VALUE XOR COMP_VALUE (required for window mode, see Figure164) (value: 1)
     */
        /** @brief COMP_VALUE */
    constexpr std::uint32_t COMP1_CSR_WINOUT_B_0x0 = 0;
        /** @brief COMP_VALUE XOR COMP_VALUE (required for window mode, see Figure164) */
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
     *          - B_0x0: No hysteresis (value: 0)
     *          - B_0x1: Low hysteresis (value: 1)
     *          - B_0x2: Medium hysteresis (value: 2)
     *          - B_0x3: High hysteresis (value: 3)
     */
        /** @brief No hysteresis */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x0 = 0;
        /** @brief Low hysteresis */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x1 = 1;
        /** @brief Medium hysteresis */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x2 = 2;
        /** @brief High hysteresis */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x3 = 3;

    /** @brief Comparator 1 power mode selector This bitfield is controlled by software (if not locked). It selects the power consumption and as a consequence the speed of the comparator 1: */
    using COMP1_CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed/high power (value: 0)
     *          - B_0x1: Medium speed/medium power (value: 1)
     *          - B_0x2: Medium speed/medium power (value: 2)
     *          - B_0x3: Low speed/low power (value: 3)
     */
        /** @brief High speed/high power */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x0 = 0;
        /** @brief Medium speed/medium power */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x1 = 1;
        /** @brief Medium speed/medium power */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x2 = 2;
        /** @brief Low speed/low power */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x3 = 3;

    /** @brief Comparator 1 blanking source selector This bitfield is controlled by software (if not locked). It selects the blanking source: Others: Reserved, must not be used */
    using COMP1_CSR_BLANKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No blanking (value: 0)
     *          - B_0x1: TIM1 OC4 enabled as blanking source (value: 1)
     *          - B_0x2: TIM1 OC5 enabled as blanking source (value: 2)
     *          - B_0x4: TIM2 OC3 enabled as blanking source (value: 4)
     *          - B_0x8: TIM3 OC3 enabled as blanking source (value: 8)
     *          - B_0x10: TIM15 OC2 enabled as blanking source (value: 16)
     */
        /** @brief No blanking */
    constexpr std::uint32_t COMP1_CSR_BLANKSEL_B_0x0 = 0;
        /** @brief TIM1 OC4 enabled as blanking source */
    constexpr std::uint32_t COMP1_CSR_BLANKSEL_B_0x1 = 1;
        /** @brief TIM1 OC5 enabled as blanking source */
    constexpr std::uint32_t COMP1_CSR_BLANKSEL_B_0x2 = 2;
        /** @brief TIM2 OC3 enabled as blanking source */
    constexpr std::uint32_t COMP1_CSR_BLANKSEL_B_0x4 = 4;
        /** @brief TIM3 OC3 enabled as blanking source */
    constexpr std::uint32_t COMP1_CSR_BLANKSEL_B_0x8 = 8;
        /** @brief TIM15 OC2 enabled as blanking source */
    constexpr std::uint32_t COMP1_CSR_BLANKSEL_B_0x10 = 16;

    /** @brief Comparator 1 output status This bit is read-only. It reflects the level of the comparator 1 output after the polarity selector and blanking, as indicated in Figure163. */
    using COMP1_CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP_CSR register lock This bit is set by software and cleared by a system reset. It locks the comparator 3 control bits. When locked, all register bits are read-only. */
    using COMP1_CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not locked (value: 0)
     *          - B_0x1: Locked (value: 1)
     */
        /** @brief Not locked */
    constexpr std::uint32_t COMP1_CSR_LOCK_B_0x0 = 0;
        /** @brief Locked */
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

    /** @brief Comparator 2 signal selector for inverting input INM This bitfield is controlled by software (if not locked). It selects the signal for the inverting input COMP_INM of the comparator 2: Refer to Table178: COMP2 inverting input assignment. */
    using COMP2_CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 signal selector for noninverting input This bitfield is controlled by software (if not locked). It selects the signal for the noninverting input COMP_INP of the comparator 2 (also see the WINMODE bit): Refer to Table177: COMP2 noninverting input assignment. */
    using COMP2_CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 noninverting input selector for window mode This bit is controlled by software (if not locked). It selects the signal for COMP_INP input of the comparator 2: */
    using COMP2_CSR_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signal selected with INPSEL[1:0] bitfield of this register (value: 0)
     *          - B_0x1: COMP_INP signal of the comparator 1 (required for window mode, see Figure164) (value: 1)
     */
        /** @brief Signal selected with INPSEL[1:0] bitfield of this register */
    constexpr std::uint32_t COMP2_CSR_WINMODE_B_0x0 = 0;
        /** @brief COMP_INP signal of the comparator 1 (required for window mode, see Figure164) */
    constexpr std::uint32_t COMP2_CSR_WINMODE_B_0x1 = 1;

    /** @brief Comparator 2 output selector This bit is controlled by software (if not locked). It selects the comparator 2 output: */
    using COMP2_CSR_WINOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP_VALUE (value: 0)
     *          - B_0x1: COMP_VALUE XOR COMP_VALUE (required for window mode, see Figure164) (value: 1)
     */
        /** @brief COMP_VALUE */
    constexpr std::uint32_t COMP2_CSR_WINOUT_B_0x0 = 0;
        /** @brief COMP_VALUE XOR COMP_VALUE (required for window mode, see Figure164) */
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
     *          - B_0x0: No hysteresis (value: 0)
     *          - B_0x1: Low hysteresis (value: 1)
     *          - B_0x2: Medium hysteresis (value: 2)
     *          - B_0x3: High hysteresis (value: 3)
     */
        /** @brief No hysteresis */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x0 = 0;
        /** @brief Low hysteresis */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x1 = 1;
        /** @brief Medium hysteresis */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x2 = 2;
        /** @brief High hysteresis */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x3 = 3;

    /** @brief Comparator 2 power mode selector This bitfield is controlled by software (if not locked). It selects the power consumption and as a consequence the speed of the comparator 2: */
    using COMP2_CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed/high power (value: 0)
     *          - B_0x1: Medium speed/medium power (value: 1)
     *          - B_0x2: Medium speed/medium power (value: 2)
     *          - B_0x3: Low speed/low power (value: 3)
     */
        /** @brief High speed/high power */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x0 = 0;
        /** @brief Medium speed/medium power */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x1 = 1;
        /** @brief Medium speed/medium power */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x2 = 2;
        /** @brief Low speed/low power */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x3 = 3;

    /** @brief Comparator 2 blanking source selector This bitfield is controlled by software (if not locked). It selects the blanking source: Others: Reserved, must not be used */
    using COMP2_CSR_BLANKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No blanking (value: 0)
     *          - B_0x1: TIM1 OC4 enabled as blanking source (value: 1)
     *          - B_0x2: TIM1 OC5 enabled as blanking source (value: 2)
     *          - B_0x4: TIM2 OC3 enabled as blanking source (value: 4)
     *          - B_0x8: TIM3 OC3 enabled as blanking source (value: 8)
     *          - B_0x10: TIM15 OC2 enabled as blanking source (value: 16)
     */
        /** @brief No blanking */
    constexpr std::uint32_t COMP2_CSR_BLANKSEL_B_0x0 = 0;
        /** @brief TIM1 OC4 enabled as blanking source */
    constexpr std::uint32_t COMP2_CSR_BLANKSEL_B_0x1 = 1;
        /** @brief TIM1 OC5 enabled as blanking source */
    constexpr std::uint32_t COMP2_CSR_BLANKSEL_B_0x2 = 2;
        /** @brief TIM2 OC3 enabled as blanking source */
    constexpr std::uint32_t COMP2_CSR_BLANKSEL_B_0x4 = 4;
        /** @brief TIM3 OC3 enabled as blanking source */
    constexpr std::uint32_t COMP2_CSR_BLANKSEL_B_0x8 = 8;
        /** @brief TIM15 OC2 enabled as blanking source */
    constexpr std::uint32_t COMP2_CSR_BLANKSEL_B_0x10 = 16;

    /** @brief Comparator 2 output status This bit is read-only. It reflects the level of the comparator 2 output after the polarity selector and blanking, as indicated in Figure163. */
    using COMP2_CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP_CSR register lock This bit is set by software and cleared by a system reset. It locks the comparator 3 control bits. When locked, all register bits are read-only. */
    using COMP2_CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not locked (value: 0)
     *          - B_0x1: Locked (value: 1)
     */
        /** @brief Not locked */
    constexpr std::uint32_t COMP2_CSR_LOCK_B_0x0 = 0;
        /** @brief Locked */
    constexpr std::uint32_t COMP2_CSR_LOCK_B_0x1 = 1;

}

#endif
