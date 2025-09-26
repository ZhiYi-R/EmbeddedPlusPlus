/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H503_COMP_HPP
#define EMBEDDED_PP_STM32H503_COMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Comparator */
namespace STM32H503::COMP {

    /** @brief Comparator status register */
    using COMP_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP Channel1 output status bit This bit is read-only. It reflects the current COMP Channel1 output taking into account POLARITY and BLANKING bits effect. */
    using COMP_SR_C1VAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP Channel1 interrupt flag This bit is set by hardware when the COMP Channel1 output is set This bit is cleared by software writing 1 the CC1IF bit in the COMP_ICFR register. */
    using COMP_SR_C1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator interrupt clear flag register */
    using COMP_ICFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear COMP Channel1 interrupt flag Writing 1 clears the C1IF flag in the COMP_SR register. */
    using COMP_ICFR_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator configuration register 1 */
    using COMP_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP Channel1 enable This bit is set and cleared by software (only if LOCK not set). It enables the COMP Channel1. */
    using COMP_CFGR1_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t COMP_CFGR1_EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t COMP_CFGR1_EN_B_0x1 = 1;

    /** @brief Scaler bridge enable This bit is set and cleared by software (only if LOCK not set). This bit enables the bridge of the scaler. If SCALEN is set and BRGEN is reset, all four scaler outputs provide the same level V REF_COMP (similar to V REFINT ). If SCALEN and BRGEN are set, the four scaler outputs provide V REF_COMP , 3/4 V REF_COMP , 1/2 V REF_COMP and 1/4 V REF_COMP levels, respectively. */
    using COMP_CFGR1_BRGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Scaler resistor bridge disabled (value: 0)
     *          - B_0x1: Scaler resistor bridge enabled (value: 1)
     */
        /** @brief Scaler resistor bridge disabled */
    constexpr std::uint32_t COMP_CFGR1_BRGEN_B_0x0 = 0;
        /** @brief Scaler resistor bridge enabled */
    constexpr std::uint32_t COMP_CFGR1_BRGEN_B_0x1 = 1;

    /** @brief Voltage scaler enable This bit is set and cleared by software (only if LOCK not set). This bit enables the V REFINT scaler for the COMP channels. */
    using COMP_CFGR1_SCALEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V REFINT scaler disabled (value: 0)
     *          - B_0x1: V REFINT scaler enabled (value: 1)
     */
        /** @brief V REFINT scaler disabled */
    constexpr std::uint32_t COMP_CFGR1_SCALEN_B_0x0 = 0;
        /** @brief V REFINT scaler enabled */
    constexpr std::uint32_t COMP_CFGR1_SCALEN_B_0x1 = 1;

    /** @brief COMP channel1 polarity selection This bit is set and cleared by software (only if LOCK not set). It inverts COMP channel1 polarity. */
    using COMP_CFGR1_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP channel1 output is not inverted (value: 0)
     *          - B_0x1: COMP Channel1 output is inverted (value: 1)
     */
        /** @brief COMP channel1 output is not inverted */
    constexpr std::uint32_t COMP_CFGR1_POLARITY_B_0x0 = 0;
        /** @brief COMP Channel1 output is inverted */
    constexpr std::uint32_t COMP_CFGR1_POLARITY_B_0x1 = 1;

    /** @brief COMP channel1 interrupt enable This bit is set and cleared by software (only if LOCK not set). This bit enable the interrupt generation of the COMP channel1. */
    using COMP_CFGR1_ITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt generation disabled for COMP channel1 (value: 0)
     *          - B_0x1: Interrupt generation enabled for COMP channel1 (value: 1)
     */
        /** @brief Interrupt generation disabled for COMP channel1 */
    constexpr std::uint32_t COMP_CFGR1_ITEN_B_0x0 = 0;
        /** @brief Interrupt generation enabled for COMP channel1 */
    constexpr std::uint32_t COMP_CFGR1_ITEN_B_0x1 = 1;

    /** @brief COMP channel1 hysteresis selection These bits are set and cleared by software (only if LOCK not set). They select the hysteresis voltage of the COMP channel1. */
    using COMP_CFGR1_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No hysteresis (value: 0)
     *          - B_0x1: Low hysteresis (value: 1)
     *          - B_0x2: Medium hysteresis (value: 2)
     *          - B_0x3: High hysteresis (value: 3)
     */
        /** @brief No hysteresis */
    constexpr std::uint32_t COMP_CFGR1_HYST_B_0x0 = 0;
        /** @brief Low hysteresis */
    constexpr std::uint32_t COMP_CFGR1_HYST_B_0x1 = 1;
        /** @brief Medium hysteresis */
    constexpr std::uint32_t COMP_CFGR1_HYST_B_0x2 = 2;
        /** @brief High hysteresis */
    constexpr std::uint32_t COMP_CFGR1_HYST_B_0x3 = 3;

    /** @brief Power mode of the COMP channel1 These bits are set and cleared by software (only if LOCK not set). They control the power/speed of the COMP channel1. */
    using COMP_CFGR1_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed/high power (value: 0)
     *          - B_0x1: Medium speed/medium power (value: 1)
     *          - B_0x2: Medium speed/medium power (value: 2)
     *          - B_0x3: Ultra low power/ultra-low-power (value: 3)
     */
        /** @brief High speed/high power */
    constexpr std::uint32_t COMP_CFGR1_PWRMODE_B_0x0 = 0;
        /** @brief Medium speed/medium power */
    constexpr std::uint32_t COMP_CFGR1_PWRMODE_B_0x1 = 1;
        /** @brief Medium speed/medium power */
    constexpr std::uint32_t COMP_CFGR1_PWRMODE_B_0x2 = 2;
        /** @brief Ultra low power/ultra-low-power */
    constexpr std::uint32_t COMP_CFGR1_PWRMODE_B_0x3 = 3;

    /** @brief COMP channel1 inverting input selection These bits are set and cleared by software (only if LOCK not set). They select which input is connected to the input minus of the COMP channel. Note: See Table 146: COMP1 inverting input assignment for more details. */
    using COMP_CFGR1_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP noninverting input selection This bit is set and cleared by software (only if LOCK not set). They select which input is connected to the positive input of COMP channel. Note: See Table 145: COMP1 noninverting input assignment for more details. */
    using COMP_CFGR1_INPSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP noninverting input selection This bit is set and cleared by software (only if LOCK not set). They select which input is connected to the positive input of the COMP channel. See Table 145: COMP1 noninverting input assignment for more details. */
    using COMP_CFGR1_INPSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP Channel1 blanking source selection Bits of this field are set and cleared by software (only if LOCK not set). The field selects the input source for COMP Channel1 output blanking: All other values: reserved */
    using COMP_CFGR1_BLANKING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No blanking (value: 0)
     *          - B_0x1: comp_blk1 (value: 1)
     *          - B_0x2: comp_blk2 (value: 2)
     *          - B_0x3: comp_blk3 (value: 3)
     *          - B_0x4: comp_blk4 (value: 4)
     *          - B_0x5: comp_blk5 (value: 5)
     *          - B_0x6: comp_blk6 (value: 6)
     */
        /** @brief No blanking */
    constexpr std::uint32_t COMP_CFGR1_BLANKING_B_0x0 = 0;
        /** @brief comp_blk1 */
    constexpr std::uint32_t COMP_CFGR1_BLANKING_B_0x1 = 1;
        /** @brief comp_blk2 */
    constexpr std::uint32_t COMP_CFGR1_BLANKING_B_0x2 = 2;
        /** @brief comp_blk3 */
    constexpr std::uint32_t COMP_CFGR1_BLANKING_B_0x3 = 3;
        /** @brief comp_blk4 */
    constexpr std::uint32_t COMP_CFGR1_BLANKING_B_0x4 = 4;
        /** @brief comp_blk5 */
    constexpr std::uint32_t COMP_CFGR1_BLANKING_B_0x5 = 5;
        /** @brief comp_blk6 */
    constexpr std::uint32_t COMP_CFGR1_BLANKING_B_0x6 = 6;

    /** @brief Lock This bit is set by software and cleared by a hardware system reset. It locks the whole content of the COMP Channel1 configuration register COMP_CFGR1[31:0] */
    using COMP_CFGR1_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP_CFGR1[31:0] register is read/write (value: 0)
     *          - B_0x1: COMP_CFGR1[31:0] is read-only (value: 1)
     */
        /** @brief COMP_CFGR1[31:0] register is read/write */
    constexpr std::uint32_t COMP_CFGR1_LOCK_B_0x0 = 0;
        /** @brief COMP_CFGR1[31:0] is read-only */
    constexpr std::uint32_t COMP_CFGR1_LOCK_B_0x1 = 1;

    /** @brief Comparator configuration register 2 */
    using COMP_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP non-inverting input selection This bit is set and cleared by software (only if LOCK not set). They select which input is connected to the positive input of COMP channel. See Table 145: COMP1 noninverting input assignment for more details. */
    using COMP_CFGR2_INPSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lock This bit is set by software and cleared by a hardware system reset. It locks the whole content of the COMP Channel1 configuration register COMP_CFGR2[31:0] */
    using COMP_CFGR2_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP_CFGR2[31:0] register is read/write (value: 0)
     *          - B_0x1: COMP_CFGR2[31:0] is read-only (value: 1)
     */
        /** @brief COMP_CFGR2[31:0] register is read/write */
    constexpr std::uint32_t COMP_CFGR2_LOCK_B_0x0 = 0;
        /** @brief COMP_CFGR2[31:0] is read-only */
    constexpr std::uint32_t COMP_CFGR2_LOCK_B_0x1 = 1;

}

#endif
