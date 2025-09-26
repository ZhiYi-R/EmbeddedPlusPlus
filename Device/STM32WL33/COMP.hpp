/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_COMP_HPP
#define EMBEDDED_PP_STM32WL33_COMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief COMP address block description */
namespace STM32WL33::COMP {

    /** @brief CSR register */
    using CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EN: Comparator enable bit This bit is set and cleared by software (only if LOCK not set). It switches on Comparator. 0: Comparator switched OFF 1: Comparator switched ON */
    using CSR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWRMODE[1:0]: Power Mode of the comparator These bits are set and cleared by software (only if LOCK not set). They control the power/speed of the Comparator. 00:High speed 01 or 10:Medium speed 11:Ultra low power */
    using CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INMSEL: Comparator input minus selection bits These bits are set and cleared by software (only if LOCK not set). They select which input is connected to the input minus of comparator. 000: 1/4 VREFINT 001: 1/2 VREFINT 010: 3/4VREFINT 011: VREFINT 100: DAC OUT 101: PA13 110: PB0 111: PB3 */
    using CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INPSEL[1:0]: Comparator input plus selection bit This bit is set and cleared by software (only if LOCK not set). 00: PA14 01: PB1 1x: PB2 */
    using CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief POLARITY: Comparator polarity selection bit This bit is set and cleared by software (only if LOCK not set). It inverts Comparator polarity. 0: Comparator output value not inverted 1: Comparator output value inverted */
    using CSR_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HYST[1:0]: Comparator hysteresis selection bits These bits are set and cleared by software (only if LOCK not set). They select the Hysteresis voltage of the comparator . 00: No hysteresis 01: Low hysteresis 10: Medium hysteresis 11: High hysteresis */
    using CSR_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BLANKING[2:0]: Comparator blanking source selection bits These bits select which timer output controls the comparator output blanking. 000: No blanking 001: TIM2 OC4 selected as blanking source 010: TIM16 OC1 selected as blanking source All other values: reserved */
    using CSR_BLANKING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRGEN: Scaler bridge enable This bit is set and cleared by software (only if LOCK not set). This bit enable the bridge of the scaler. 0: Scaler resistor bridge disable 1: Scaler resistor bridge enable If SCALEN is set and BRGEN is reset, BG voltage reference is available but not 1/4BGAP, 1/2BGAP, 3/4 BGAP. BGAP value is sent instead of 1/4BGAP, 1/2BGAP, 3/4 BGAP. If SCALEN and BRGEN are set, 1/4 BGAP 1/2BGAP 3/4BGAP and BGAP voltage references are available. */
    using CSR_BRGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCALEN: Voltage scaler enable bit This bit is set and cleared by software. This bit enable the outputs of the VREFINT divider available on the minus input of the Comparator 0: scaler disable 1: scaler enable */
    using CSR_SCALEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VALUE: Comparator output status bit This bit is read-only. It reflects the current comparator output taking into account POLARITY bit effect. */
    using CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK: COMP_CSR register lock bit This bit is set by software and cleared by a hardware system reset. It locks the whole content of the comparator control register, COMP1_CSR[31:0]. 0: COMP1_CSR[31:0] are read/write 1: COMP1_CSR[31:0] are read-only */
    using CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
