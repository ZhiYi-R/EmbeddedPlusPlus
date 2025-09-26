/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U585_SEC_OPAMP_HPP
#define EMBEDDED_PP_STM32U585_SEC_OPAMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Operational amplifiers */
namespace STM32U585::SEC_OPAMP {

    /** @brief OPAMP1 control/status register */
    using OPAMP1_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP enable */
    using OPAMP1_CSR_OPAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP disabled (value: 0)
     *          - B_0x1: OPAMP enabled (value: 1)
     */
        /** @brief OPAMP disabled */
    constexpr std::uint32_t OPAMP1_CSR_OPAEN_B_0x0 = 0;
        /** @brief OPAMP enabled */
    constexpr std::uint32_t OPAMP1_CSR_OPAEN_B_0x1 = 1;

    /** @brief OPAMP low-power mode */
    using OPAMP1_CSR_OPALPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal mode (value: 0)
     *          - B_0x1: low-power mode (value: 1)
     */
        /** @brief normal mode */
    constexpr std::uint32_t OPAMP1_CSR_OPALPM_B_0x0 = 0;
        /** @brief low-power mode */
    constexpr std::uint32_t OPAMP1_CSR_OPALPM_B_0x1 = 1;

    /** @brief OPAMP PGA mode */
    using OPAMP1_CSR_OPAMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: internal PGA enabled, gain programmed in PGA_GAIN (value: 2)
     *          - B_0x3: internal follower (value: 3)
     */
        /** @brief internal PGA enabled, gain programmed in PGA_GAIN */
    constexpr std::uint32_t OPAMP1_CSR_OPAMODE_B_0x2 = 2;
        /** @brief internal follower */
    constexpr std::uint32_t OPAMP1_CSR_OPAMODE_B_0x3 = 3;

    /** @brief OPAMP programmable amplifier gain value */
    using OPAMP1_CSR_PGA_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: internal PGA gain 2 (value: 0)
     *          - B_0x1: internal PGA gain 4 (value: 1)
     *          - B_0x2: internal PGA gain 8 (value: 2)
     *          - B_0x3: internal PGA gain 16 (value: 3)
     */
        /** @brief internal PGA gain 2 */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x0 = 0;
        /** @brief internal PGA gain 4 */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x1 = 1;
        /** @brief internal PGA gain 8 */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x2 = 2;
        /** @brief internal PGA gain 16 */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x3 = 3;

    /** @brief Inverting input selection */
    using OPAMP1_CSR_VM_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIO connected to VINM (valid also in PGA mode for filtering) (value: 0)
     *          - B_0x1: dedicated low-leakage input connected to VINM (valid also in PGA mode for filtering) (value: 1)
     */
        /** @brief GPIO connected to VINM (valid also in PGA mode for filtering) */
    constexpr std::uint32_t OPAMP1_CSR_VM_SEL_B_0x0 = 0;
        /** @brief dedicated low-leakage input connected to VINM (valid also in PGA mode for filtering) */
    constexpr std::uint32_t OPAMP1_CSR_VM_SEL_B_0x1 = 1;

    /** @brief Non-inverted input selection */
    using OPAMP1_CSR_VP_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIO connected to VINP (value: 0)
     *          - B_0x1: DAC connected to VINP (value: 1)
     */
        /** @brief GPIO connected to VINP */
    constexpr std::uint32_t OPAMP1_CSR_VP_SEL_B_0x0 = 0;
        /** @brief DAC connected to VINP */
    constexpr std::uint32_t OPAMP1_CSR_VP_SEL_B_0x1 = 1;

    /** @brief Calibration mode enable */
    using OPAMP1_CSR_CALON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal mode (value: 0)
     *          - B_0x1: calibration mode (all switches opened by hardware) (value: 1)
     */
        /** @brief normal mode */
    constexpr std::uint32_t OPAMP1_CSR_CALON_B_0x0 = 0;
        /** @brief calibration mode (all switches opened by hardware) */
    constexpr std::uint32_t OPAMP1_CSR_CALON_B_0x1 = 1;

    /** @brief Calibration selection */
    using OPAMP1_CSR_CALSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NMOS calibration (200 mV applied on OPAMP inputs) (value: 0)
     *          - B_0x1: PMOS calibration (Vless thansub>DDA less than/sub>- 200 mV applied on OPAMP inputs) (value: 1)
     */
        /** @brief NMOS calibration (200 mV applied on OPAMP inputs) */
    constexpr std::uint32_t OPAMP1_CSR_CALSEL_B_0x0 = 0;
        /** @brief PMOS calibration (Vless thansub>DDA less than/sub>- 200 mV applied on OPAMP inputs) */
    constexpr std::uint32_t OPAMP1_CSR_CALSEL_B_0x1 = 1;

    /** @brief factory' or user' offset trimmed values selection */
    using OPAMP1_CSR_USERTRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: factory' trim code used (value: 0)
     *          - B_0x1: user' trim code used (value: 1)
     */
        /** @brief factory' trim code used */
    constexpr std::uint32_t OPAMP1_CSR_USERTRIM_B_0x0 = 0;
        /** @brief user' trim code used */
    constexpr std::uint32_t OPAMP1_CSR_USERTRIM_B_0x1 = 1;

    /** @brief OPAMP calibration output */
    using OPAMP1_CSR_CALOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP high-speed mode */
    using OPAMP1_CSR_OPAHSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal mode (standard slew rate) (value: 0)
     *          - B_0x1: increased consumption to improve the slew rate (value: 1)
     */
        /** @brief normal mode (standard slew rate) */
    constexpr std::uint32_t OPAMP1_CSR_OPAHSM_B_0x0 = 0;
        /** @brief increased consumption to improve the slew rate */
    constexpr std::uint32_t OPAMP1_CSR_OPAHSM_B_0x1 = 1;

    /** @brief OPAMP range setting */
    using OPAMP1_CSR_OPA_RANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: OPAMP range set (value: 1)
     */
        /** @brief OPAMP range set */
    constexpr std::uint32_t OPAMP1_CSR_OPA_RANGE_B_0x1 = 1;

    /** @brief OPAMP1 offset trimming register in normal mode */
    using OPAMP1_OTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for NMOS differential pairs */
    using OPAMP1_OTR_TRIMOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for PMOS differential pairs */
    using OPAMP1_OTR_TRIMOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP1 offset trimming register in low-power mode */
    using OPAMP1_LPOTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode trim for NMOS differential pairs */
    using OPAMP1_LPOTR_TRIMLPOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode trim for PMOS differential pairs */
    using OPAMP1_LPOTR_TRIMLPOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2 control/status register */
    using OPAMP2_CRS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP enable */
    using OPAMP2_CRS_OPAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OPAMP disabled (value: 0)
     *          - B_0x1: OPAMP enabled (value: 1)
     */
        /** @brief OPAMP disabled */
    constexpr std::uint32_t OPAMP2_CRS_OPAEN_B_0x0 = 0;
        /** @brief OPAMP enabled */
    constexpr std::uint32_t OPAMP2_CRS_OPAEN_B_0x1 = 1;

    /** @brief OPAMP low-power mode */
    using OPAMP2_CRS_OPALPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal mode (value: 0)
     *          - B_0x1: low-power mode (value: 1)
     */
        /** @brief normal mode */
    constexpr std::uint32_t OPAMP2_CRS_OPALPM_B_0x0 = 0;
        /** @brief low-power mode */
    constexpr std::uint32_t OPAMP2_CRS_OPALPM_B_0x1 = 1;

    /** @brief OPAMP PGA mode */
    using OPAMP2_CRS_OPAMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: internal PGA enabled, gain programmed in PGA_GAIN (value: 2)
     *          - B_0x3: internal follower (value: 3)
     */
        /** @brief internal PGA enabled, gain programmed in PGA_GAIN */
    constexpr std::uint32_t OPAMP2_CRS_OPAMODE_B_0x2 = 2;
        /** @brief internal follower */
    constexpr std::uint32_t OPAMP2_CRS_OPAMODE_B_0x3 = 3;

    /** @brief OPAMP programmable amplifier gain value */
    using OPAMP2_CRS_PGA_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: internal PGA gain 2 (value: 0)
     *          - B_0x1: internal PGA gain 4 (value: 1)
     *          - B_0x2: internal PGA gain 8 (value: 2)
     *          - B_0x3: internal PGA gain 16 (value: 3)
     */
        /** @brief internal PGA gain 2 */
    constexpr std::uint32_t OPAMP2_CRS_PGA_GAIN_B_0x0 = 0;
        /** @brief internal PGA gain 4 */
    constexpr std::uint32_t OPAMP2_CRS_PGA_GAIN_B_0x1 = 1;
        /** @brief internal PGA gain 8 */
    constexpr std::uint32_t OPAMP2_CRS_PGA_GAIN_B_0x2 = 2;
        /** @brief internal PGA gain 16 */
    constexpr std::uint32_t OPAMP2_CRS_PGA_GAIN_B_0x3 = 3;

    /** @brief Inverting input selection */
    using OPAMP2_CRS_VM_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIO connected to VINM (valid also in PGA mode for filtering) (value: 0)
     *          - B_0x1: dedicated low-leakage input connected to VINM (valid also (value: 1)
     */
        /** @brief GPIO connected to VINM (valid also in PGA mode for filtering) */
    constexpr std::uint32_t OPAMP2_CRS_VM_SEL_B_0x0 = 0;
        /** @brief dedicated low-leakage input connected to VINM (valid also */
    constexpr std::uint32_t OPAMP2_CRS_VM_SEL_B_0x1 = 1;

    /** @brief Non inverted input selection */
    using OPAMP2_CRS_VP_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIO connected to VINP (value: 0)
     *          - B_0x1: DAC connected to VINP (value: 1)
     */
        /** @brief GPIO connected to VINP */
    constexpr std::uint32_t OPAMP2_CRS_VP_SEL_B_0x0 = 0;
        /** @brief DAC connected to VINP */
    constexpr std::uint32_t OPAMP2_CRS_VP_SEL_B_0x1 = 1;

    /** @brief Calibration mode enable */
    using OPAMP2_CRS_CALON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal mode (value: 0)
     *          - B_0x1: calibration mode (all switches opened by hardware) (value: 1)
     */
        /** @brief normal mode */
    constexpr std::uint32_t OPAMP2_CRS_CALON_B_0x0 = 0;
        /** @brief calibration mode (all switches opened by hardware) */
    constexpr std::uint32_t OPAMP2_CRS_CALON_B_0x1 = 1;

    /** @brief Calibration selection */
    using OPAMP2_CRS_CALSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NMOS calibration (200 mV applied on OPAMP inputs) (value: 0)
     *          - B_0x1: PMOS calibration (Vless thansub>DDA less than/sub>- 200 mV applied on OPAMP inputs) (value: 1)
     */
        /** @brief NMOS calibration (200 mV applied on OPAMP inputs) */
    constexpr std::uint32_t OPAMP2_CRS_CALSEL_B_0x0 = 0;
        /** @brief PMOS calibration (Vless thansub>DDA less than/sub>- 200 mV applied on OPAMP inputs) */
    constexpr std::uint32_t OPAMP2_CRS_CALSEL_B_0x1 = 1;

    /** @brief factory' or user' offset trimmed values selection */
    using OPAMP2_CRS_USERTRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: factory' trim code used (value: 0)
     *          - B_0x1: user' trim code used (value: 1)
     */
        /** @brief factory' trim code used */
    constexpr std::uint32_t OPAMP2_CRS_USERTRIM_B_0x0 = 0;
        /** @brief user' trim code used */
    constexpr std::uint32_t OPAMP2_CRS_USERTRIM_B_0x1 = 1;

    /** @brief OPAMP calibration output */
    using OPAMP2_CRS_CALOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP high-speed mode */
    using OPAMP2_CRS_OPAHSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal mode (standard slew rate) (value: 0)
     *          - B_0x1: increased consumption to improve the slew rate (value: 1)
     */
        /** @brief normal mode (standard slew rate) */
    constexpr std::uint32_t OPAMP2_CRS_OPAHSM_B_0x0 = 0;
        /** @brief increased consumption to improve the slew rate */
    constexpr std::uint32_t OPAMP2_CRS_OPAHSM_B_0x1 = 1;

    /** @brief OPAMP2 offset trimming register in normal mode */
    using OPAMP2_OTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for NMOS differential pairs */
    using OPAMP2_OTR_TRIMOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for PMOS differential pairs */
    using OPAMP2_OTR_TRIMOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2 offset trimming register in low-power mode */
    using OPAMP2_LPOTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode trim for NMOS differential pairs */
    using OPAMP2_LPOTR_TRIMLPOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode trim for PMOS differential pairs */
    using OPAMP2_LPOTR_TRIMLPOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
