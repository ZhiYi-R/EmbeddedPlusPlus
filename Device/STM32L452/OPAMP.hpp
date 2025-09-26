/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32L452_OPAMP_HPP
#define EMBEDDED_PP_STM32L452_OPAMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Operational amplifiers */
namespace STM32L452::OPAMP {

    /** @brief OPAMP1 control/status register */
    using OPAMP1_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier Enable */
    using OPAMP1_CSR_OPAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier Low Power Mode */
    using OPAMP1_CSR_OPALPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier PGA mode */
    using OPAMP1_CSR_OPAMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier Programmable amplifier gain value */
    using OPAMP1_CSR_PGA_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Inverting input selection */
    using OPAMP1_CSR_VM_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non inverted input selection */
    using OPAMP1_CSR_VP_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration mode enabled */
    using OPAMP1_CSR_CALON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration selection */
    using OPAMP1_CSR_CALSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief allows to switch from AOP offset trimmed values to AOP offset */
    using OPAMP1_CSR_USERTRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier calibration output */
    using OPAMP1_CSR_CALOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier power supply range for stability */
    using OPAMP1_CSR_OPA_RANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP1 offset trimming register in normal mode */
    using OPAMP1_OTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for NMOS differential pairs */
    using OPAMP1_OTR_TRIMOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for PMOS differential pairs */
    using OPAMP1_OTR_TRIMOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP1 offset trimming register in low-power mode */
    using OPAMP1_LPOTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for NMOS differential pairs */
    using OPAMP1_LPOTR_TRIMLPOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for PMOS differential pairs */
    using OPAMP1_LPOTR_TRIMLPOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2 control/status register */
    using OPAMP2_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier Enable */
    using OPAMP2_CSR_OPAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier Low Power Mode */
    using OPAMP2_CSR_OPALPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier PGA mode */
    using OPAMP2_CSR_OPAMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier Programmable amplifier gain value */
    using OPAMP2_CSR_PGA_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Inverting input selection */
    using OPAMP2_CSR_VM_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non inverted input selection */
    using OPAMP2_CSR_VP_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration mode enabled */
    using OPAMP2_CSR_CALON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration selection */
    using OPAMP2_CSR_CALSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief allows to switch from AOP offset trimmed values to AOP offset */
    using OPAMP2_CSR_USERTRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier calibration output */
    using OPAMP2_CSR_CALOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2 offset trimming register in normal mode */
    using OPAMP2_OTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for NMOS differential pairs */
    using OPAMP2_OTR_TRIMOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for PMOS differential pairs */
    using OPAMP2_OTR_TRIMOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2 offset trimming register in low-power mode */
    using OPAMP2_LPOTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for NMOS differential pairs */
    using OPAMP2_LPOTR_TRIMLPOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trim for PMOS differential pairs */
    using OPAMP2_LPOTR_TRIMLPOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
