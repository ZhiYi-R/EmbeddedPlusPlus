/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H503_OPAMP1_HPP
#define EMBEDDED_PP_STM32H503_OPAMP1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Operational amplifiers */
namespace STM32H503::OPAMP1 {

    /** @brief OPAMP1 control/status register */
    using OPAMP1_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier Enable Note: If OPAMP1 is unconnected in a specific package, it must remain disabled (keep OPAMP1_CSR register default value). */
    using OPAMP1_CSR_OPAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: operational amplifier disabled (value: 0)
     *          - B_0x1: operational amplifier enabled (value: 1)
     */
        /** @brief operational amplifier disabled */
    constexpr std::uint32_t OPAMP1_CSR_OPAEN_B_0x0 = 0;
        /** @brief operational amplifier enabled */
    constexpr std::uint32_t OPAMP1_CSR_OPAEN_B_0x1 = 1;

    /** @brief Force internal reference on VP (reserved for test) */
    using OPAMP1_CSR_FORCE_VP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operating mode. Non-inverting input connected to inputs. (value: 0)
     *          - B_0x1: Calibration verification mode: Non-inverting input connected to calibration reference voltage. (value: 1)
     */
        /** @brief Normal operating mode. Non-inverting input connected to inputs. */
    constexpr std::uint32_t OPAMP1_CSR_FORCE_VP_B_0x0 = 0;
        /** @brief Calibration verification mode: Non-inverting input connected to calibration reference voltage. */
    constexpr std::uint32_t OPAMP1_CSR_FORCE_VP_B_0x1 = 1;

    /** @brief Non inverted input selection */
    using OPAMP1_CSR_VP_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPIO INP0 connected to OPAMP_VINP (value: 0)
     *          - B_0x1: dac_out1 connected to OPAMP_VINP (value: 1)
     *          - B_0x2: GPIO INP2 is connected to OPAMP_VINP (value: 2)
     */
        /** @brief GPIO INP0 connected to OPAMP_VINP */
    constexpr std::uint32_t OPAMP1_CSR_VP_SEL_B_0x0 = 0;
        /** @brief dac_out1 connected to OPAMP_VINP */
    constexpr std::uint32_t OPAMP1_CSR_VP_SEL_B_0x1 = 1;
        /** @brief GPIO INP2 is connected to OPAMP_VINP */
    constexpr std::uint32_t OPAMP1_CSR_VP_SEL_B_0x2 = 2;

    /** @brief Inverting input selection */
    using OPAMP1_CSR_VM_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: INM0 connected to OPAMP_VINM input (value: 0)
     *          - B_0x1: INM1 connected to OPAMP_VINM input (value: 1)
     *          - B_0x2: Feedback resistor is connected to OPAMP_VINM input (PGA mode), Inverting input selection is depends on the PGA_GAIN setting (value: 2)
     *          - B_0x3: opamp_out connected to OPAMP_VINM input (Follower mode) (value: 3)
     */
        /** @brief INM0 connected to OPAMP_VINM input */
    constexpr std::uint32_t OPAMP1_CSR_VM_SEL_B_0x0 = 0;
        /** @brief INM1 connected to OPAMP_VINM input */
    constexpr std::uint32_t OPAMP1_CSR_VM_SEL_B_0x1 = 1;
        /** @brief Feedback resistor is connected to OPAMP_VINM input (PGA mode), Inverting input selection is depends on the PGA_GAIN setting */
    constexpr std::uint32_t OPAMP1_CSR_VM_SEL_B_0x2 = 2;
        /** @brief opamp_out connected to OPAMP_VINM input (Follower mode) */
    constexpr std::uint32_t OPAMP1_CSR_VM_SEL_B_0x3 = 3;

    /** @brief Operational amplifier high-speed mode The operational amplifier must be disable to change this configuration. */
    using OPAMP1_CSR_OPAHSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: operational amplifier in normal mode (value: 0)
     *          - B_0x1: operational amplifier in high-speed mode (value: 1)
     */
        /** @brief operational amplifier in normal mode */
    constexpr std::uint32_t OPAMP1_CSR_OPAHSM_B_0x0 = 0;
        /** @brief operational amplifier in high-speed mode */
    constexpr std::uint32_t OPAMP1_CSR_OPAHSM_B_0x1 = 1;

    /** @brief Calibration mode enabled */
    using OPAMP1_CSR_CALON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode (value: 0)
     *          - B_0x1: Calibration mode (all switches opened by HW) (value: 1)
     */
        /** @brief Normal mode */
    constexpr std::uint32_t OPAMP1_CSR_CALON_B_0x0 = 0;
        /** @brief Calibration mode (all switches opened by HW) */
    constexpr std::uint32_t OPAMP1_CSR_CALON_B_0x1 = 1;

    /** @brief Calibration selection It is used to select the offset calibration bus used to generate the internal reference voltage when CALON = 1 or FORCE_VP= 1. */
    using OPAMP1_CSR_CALSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0.033*VDDA applied on OPAMP inputs (value: 0)
     *          - B_0x1: 0.1*VDDA applied on OPAMP inputs (for PMOS calibration) (value: 1)
     *          - B_0x2: 0.5*VDDA applied on OPAMP inputs (value: 2)
     *          - B_0x3: 0.9*VDDA applied on OPAMP inputs (for NMOS calibration) (value: 3)
     */
        /** @brief 0.033*VDDA applied on OPAMP inputs */
    constexpr std::uint32_t OPAMP1_CSR_CALSEL_B_0x0 = 0;
        /** @brief 0.1*VDDA applied on OPAMP inputs (for PMOS calibration) */
    constexpr std::uint32_t OPAMP1_CSR_CALSEL_B_0x1 = 1;
        /** @brief 0.5*VDDA applied on OPAMP inputs */
    constexpr std::uint32_t OPAMP1_CSR_CALSEL_B_0x2 = 2;
        /** @brief 0.9*VDDA applied on OPAMP inputs (for NMOS calibration) */
    constexpr std::uint32_t OPAMP1_CSR_CALSEL_B_0x3 = 3;

    /** @brief Operational amplifier Programmable amplifier gain value */
    using OPAMP1_CSR_PGA_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-inverting internal Gain 2, VREF- referenced (value: 0)
     *          - B_0x1: Non-inverting internal Gain 4, VREF- referenced (value: 1)
     *          - B_0x2: Non-inverting internal Gain 8, VREF- referenced (value: 2)
     *          - B_0x3: Non-inverting internal Gain 16, VREF- referenced (value: 3)
     *          - B_0x4: Non-inverting internal Gain 2 with filtering on INM0, VREF- referenced (value: 4)
     *          - B_0x5: Non-inverting internal Gain 4 with filtering on INM0, VREF- referenced (value: 5)
     *          - B_0x6: Non-inverting internal Gain 8 with filtering on INM0, VREF- referenced (value: 6)
     *          - B_0x7: Non-inverting internal Gain 16 with filtering on INM0, VREF- referenced (value: 7)
     *          - B_0x8: Inverting gain=-1/ Non-inverting gain =2 with INM0 node for input or bias (value: 8)
     *          - B_0x9: Inverting gain=-3/ Non-inverting gain =4 with INM0 node for input or bias (value: 9)
     *          - B_0xA: Inverting gain=-7/ Non-inverting gain =8 with INM0 node for input or bias (value: 10)
     *          - B_0xB: Inverting gain=-15/ Non-inverting gain =16 with INM0 node for input or bias (value: 11)
     *          - B_0xC: Inverting gain=-1/ Non-inverting gain =2 with INM0 node for input or bias, INM1 node for filtering (value: 12)
     *          - B_0xD: Inverting gain=-3/ Non-inverting gain =4 with INM0 node for input or bias, INM1 node for filtering (value: 13)
     *          - B_0xE: Inverting gain=-7/ Non-inverting gain =8 with INM0 node for input or bias, INM1 node for filtering (value: 14)
     *          - B_0xF: Inverting gain=-15/ Non-inverting gain =16 with INM0 node for input or bias, INM1 node for filtering (value: 15)
     */
        /** @brief Non-inverting internal Gain 2, VREF- referenced */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x0 = 0;
        /** @brief Non-inverting internal Gain 4, VREF- referenced */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x1 = 1;
        /** @brief Non-inverting internal Gain 8, VREF- referenced */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x2 = 2;
        /** @brief Non-inverting internal Gain 16, VREF- referenced */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x3 = 3;
        /** @brief Non-inverting internal Gain 2 with filtering on INM0, VREF- referenced */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x4 = 4;
        /** @brief Non-inverting internal Gain 4 with filtering on INM0, VREF- referenced */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x5 = 5;
        /** @brief Non-inverting internal Gain 8 with filtering on INM0, VREF- referenced */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x6 = 6;
        /** @brief Non-inverting internal Gain 16 with filtering on INM0, VREF- referenced */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x7 = 7;
        /** @brief Inverting gain=-1/ Non-inverting gain =2 with INM0 node for input or bias */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x8 = 8;
        /** @brief Inverting gain=-3/ Non-inverting gain =4 with INM0 node for input or bias */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0x9 = 9;
        /** @brief Inverting gain=-7/ Non-inverting gain =8 with INM0 node for input or bias */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0xA = 10;
        /** @brief Inverting gain=-15/ Non-inverting gain =16 with INM0 node for input or bias */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0xB = 11;
        /** @brief Inverting gain=-1/ Non-inverting gain =2 with INM0 node for input or bias, INM1 node for filtering */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0xC = 12;
        /** @brief Inverting gain=-3/ Non-inverting gain =4 with INM0 node for input or bias, INM1 node for filtering */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0xD = 13;
        /** @brief Inverting gain=-7/ Non-inverting gain =8 with INM0 node for input or bias, INM1 node for filtering */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0xE = 14;
        /** @brief Inverting gain=-15/ Non-inverting gain =16 with INM0 node for input or bias, INM1 node for filtering */
    constexpr std::uint32_t OPAMP1_CSR_PGA_GAIN_B_0xF = 15;

    /** @brief User trimming enable This bit allows to switch from 'factory' AOP offset trimmed values to 'user' AOP offset trimmed values This bit is active for both mode normal and high-power. */
    using OPAMP1_CSR_USERTRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 'factory' trim code used (value: 0)
     *          - B_0x1: 'user' trim code used (value: 1)
     */
        /** @brief 'factory' trim code used */
    constexpr std::uint32_t OPAMP1_CSR_USERTRIM_B_0x0 = 0;
        /** @brief 'user' trim code used */
    constexpr std::uint32_t OPAMP1_CSR_USERTRIM_B_0x1 = 1;

    /** @brief OPAMP calibration reference voltage output control (reserved for test) */
    using OPAMP1_CSR_TSTREF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: INTVREF of OPAMP is not output (value: 0)
     *          - B_0x1: INTVREF of OPAMP is output (value: 1)
     */
        /** @brief INTVREF of OPAMP is not output */
    constexpr std::uint32_t OPAMP1_CSR_TSTREF_B_0x0 = 0;
        /** @brief INTVREF of OPAMP is output */
    constexpr std::uint32_t OPAMP1_CSR_TSTREF_B_0x1 = 1;

    /** @brief Operational amplifier calibration output OPAMP output status flag. During the calibration mode, OPAMP is used as comparator. */
    using OPAMP1_CSR_CALOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-inverting inverting (value: 0)
     *          - B_0x1: Non-inverting inverting (value: 1)
     */
        /** @brief Non-inverting inverting */
    constexpr std::uint32_t OPAMP1_CSR_CALOUT_B_0x0 = 0;
        /** @brief Non-inverting inverting */
    constexpr std::uint32_t OPAMP1_CSR_CALOUT_B_0x1 = 1;

    /** @brief OPAMP1 trimming register in normal mode */
    using OPAMP1_OTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for NMOS differential pairs */
    using OPAMP1_OTR_TRIMOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for PMOS differential pairs */
    using OPAMP1_OTR_TRIMOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP1 trimming register in high-speed mode */
    using OPAMP1_HSOTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed mode trim for NMOS differential pairs */
    using OPAMP1_HSOTR_TRIMHSOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High-speed mode trim for PMOS differential pairs */
    using OPAMP1_HSOTR_TRIMHSOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP option register */
    using OPAMP_OR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
