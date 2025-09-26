/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U073_OPAMP_HPP
#define EMBEDDED_PP_STM32U073_OPAMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief OPAMP address block description */
namespace STM32U073::OPAMP {

    /** @brief OPAMP control/status register */
    using OPAMP_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier Enable */
    using OPAMP_CSR_OPAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: operational amplifier disabled (value: 0)
     *          - B_0x1: operational amplifier enabled (value: 1)
     */
        /** @brief operational amplifier disabled */
    constexpr std::uint32_t OPAMP_CSR_OPAEN_B_0x0 = 0;
        /** @brief operational amplifier enabled */
    constexpr std::uint32_t OPAMP_CSR_OPAEN_B_0x1 = 1;

    /** @brief Operational amplifier Low Power Mode The operational amplifier must be disable to change this configuration. */
    using OPAMP_CSR_OPALPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: operational amplifier in normal mode (value: 0)
     *          - B_0x1: operational amplifier in low-power mode (value: 1)
     */
        /** @brief operational amplifier in normal mode */
    constexpr std::uint32_t OPAMP_CSR_OPALPM_B_0x0 = 0;
        /** @brief operational amplifier in low-power mode */
    constexpr std::uint32_t OPAMP_CSR_OPALPM_B_0x1 = 1;

    /** @brief Operational amplifier PGA mode */
    using OPAMP_CSR_OPAMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: internal PGA disable (value: 0)
     *          - B_0x1: internal PGA disable (value: 1)
     *          - B_0x2: internal PGA enable, gain programmed in PGA_GAIN (value: 2)
     *          - B_0x3: internal follower (value: 3)
     */
        /** @brief internal PGA disable */
    constexpr std::uint32_t OPAMP_CSR_OPAMODE_B_0x0 = 0;
        /** @brief internal PGA disable */
    constexpr std::uint32_t OPAMP_CSR_OPAMODE_B_0x1 = 1;
        /** @brief internal PGA enable, gain programmed in PGA_GAIN */
    constexpr std::uint32_t OPAMP_CSR_OPAMODE_B_0x2 = 2;
        /** @brief internal follower */
    constexpr std::uint32_t OPAMP_CSR_OPAMODE_B_0x3 = 3;

    /** @brief Operational amplifier Programmable amplifier gain value */
    using OPAMP_CSR_PGA_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: internal PGA Gain 2 (value: 0)
     *          - B_0x1: internal PGA Gain 4 (value: 1)
     *          - B_0x2: internal PGA Gain 8 (value: 2)
     *          - B_0x3: internal PGA Gain 16 (value: 3)
     */
        /** @brief internal PGA Gain 2 */
    constexpr std::uint32_t OPAMP_CSR_PGA_GAIN_B_0x0 = 0;
        /** @brief internal PGA Gain 4 */
    constexpr std::uint32_t OPAMP_CSR_PGA_GAIN_B_0x1 = 1;
        /** @brief internal PGA Gain 8 */
    constexpr std::uint32_t OPAMP_CSR_PGA_GAIN_B_0x2 = 2;
        /** @brief internal PGA Gain 16 */
    constexpr std::uint32_t OPAMP_CSR_PGA_GAIN_B_0x3 = 3;

    /** @brief Inverting input selection These bits are used only when OPAMODE = 00, 01 or 10. 1x:	Inverting input not externally connected. These configurations are valid only when OPAMODE = 10 (PGA mode) */
    using OPAMP_CSR_VM_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIO connected to VINM (valid also in PGA mode for filtering) (value: 0)
     */
        /** @brief GPIO connected to VINM (valid also in PGA mode for filtering) */
    constexpr std::uint32_t OPAMP_CSR_VM_SEL_B_0x0 = 0;

    /** @brief Non inverted input selection */
    using OPAMP_CSR_VP_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIO connected to VINP (value: 0)
     *          - B_0x1: DAC connected to VINP (value: 1)
     */
        /** @brief GPIO connected to VINP */
    constexpr std::uint32_t OPAMP_CSR_VP_SEL_B_0x0 = 0;
        /** @brief DAC connected to VINP */
    constexpr std::uint32_t OPAMP_CSR_VP_SEL_B_0x1 = 1;

    /** @brief Calibration mode enabled */
    using OPAMP_CSR_CALON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode (value: 0)
     *          - B_0x1: Calibration mode (all switches opened by HW) (value: 1)
     */
        /** @brief Normal mode */
    constexpr std::uint32_t OPAMP_CSR_CALON_B_0x0 = 0;
        /** @brief Calibration mode (all switches opened by HW) */
    constexpr std::uint32_t OPAMP_CSR_CALON_B_0x1 = 1;

    /** @brief Calibration selection */
    using OPAMP_CSR_CALSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NMOS calibration (200mV applied on OPAMP inputs) (value: 0)
     *          - B_0x1: PMOS calibration (VDDA-200mV applied on OPAMP inputs) (value: 1)
     */
        /** @brief NMOS calibration (200mV applied on OPAMP inputs) */
    constexpr std::uint32_t OPAMP_CSR_CALSEL_B_0x0 = 0;
        /** @brief PMOS calibration (VDDA-200mV applied on OPAMP inputs) */
    constexpr std::uint32_t OPAMP_CSR_CALSEL_B_0x1 = 1;

    /** @brief allows to switch from factory AOP offset trimmed values to AOP offset user trimmed values This bit is active for both mode normal and low-power. */
    using OPAMP_CSR_USERTRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: factory trim code used (value: 0)
     *          - B_0x1: user trim code used (value: 1)
     */
        /** @brief factory trim code used */
    constexpr std::uint32_t OPAMP_CSR_USERTRIM_B_0x0 = 0;
        /** @brief user trim code used */
    constexpr std::uint32_t OPAMP_CSR_USERTRIM_B_0x1 = 1;

    /** @brief Operational amplifier calibration output During calibration mode offset is trimmed when this signal toggle. */
    using OPAMP_CSR_CALOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier power supply range for stability All AOP must be in power down to allow AOP-RANGE bit write. It applies to all AOP embedded in the product. */
    using OPAMP_CSR_OPA_RANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low range (VDDA < 2.4V) (value: 0)
     *          - B_0x1: High range (VDDA > 2.4V) (value: 1)
     */
        /** @brief Low range (VDDA < 2.4V) */
    constexpr std::uint32_t OPAMP_CSR_OPA_RANGE_B_0x0 = 0;
        /** @brief High range (VDDA > 2.4V) */
    constexpr std::uint32_t OPAMP_CSR_OPA_RANGE_B_0x1 = 1;

    /** @brief OPAMP offset trimming register in normal mode */
    using OPAMP_OTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for NMOS differential pairs */
    using OPAMP_OTR_TRIMOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for PMOS differential pairs */
    using OPAMP_OTR_TRIMOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP offset trimming register in low-power mode */
    using OPAMP_LPOTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode trim for NMOS differential pairs */
    using OPAMP_LPOTR_TRIMLPOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode trim for PMOS differential pairs */
    using OPAMP_LPOTR_TRIMLPOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
