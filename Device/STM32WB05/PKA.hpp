/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB05_PKA_HPP
#define EMBEDDED_PP_STM32WB05_PKA_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PKA peripheral */
namespace STM32WB05::PKA {

    /** @brief PKA_CR register */
    using PKA_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral enable. - 0 : Disable PKA. - 1 : Enable PKA. */
    using PKA_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start the operation - 0: No operation - 1: Writing 1' to this bit starts the operation which is selected by MODE[5:0], using the operands and data already written to the PKA RAM. This bit is always read as 0'. Nota: START is ignored if PKA is busy. */
    using PKA_CR_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security enable. - 0: No side channel countermeasure - 1: Square and Multiply always / Double and Add always */
    using PKA_CR_SECLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA operation code - 000000 : Compute Montgomery parameter and modular exponentiation - 000001 : Compute Montgomery parameter - 000010 : Compute modular exponentiation only (Montgomery parameter should be loaded) - 100000 : Compute Montgomery parameter and compute ECC kP operation - 100010 : Compute the ECC kP primitive only (Montgomery parameter should be loaded) - 100100 : ECDSA sign - 100110 : ECDSA Verification - 101000 : Point Check - 000111 : RSA CRT exponentiation - 001000 : Modular inversion - 001001 : Arithmetic addition - 001010 : Arithmetic Subtraction - 001011 : Arithmetic multiplication - 001100 : Comparison - 001101 : Modular Reduction - 001110 : Modular Addition - 001111 : Modular Subtraction - 010000 : Montgomery Multiplication */
    using PKA_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of operation interrupt enable - 0: Interrupt is disabled. - 1: An interrupt is generated when PROCENDF (PKA_SR[17]) is set. */
    using PKA_CR_PROCENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAM error interrupt enable - 0: Interrupt is disabled. - 1: An interrupt is generated when RAMERRF (PKA_SR[19]) is set. */
    using PKA_CR_RAMERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address error interrupt enable - 0: Interrupt is disabled. - 1: An interrupt is generated when ADDRERRF (PKA_SR[20] is set. */
    using PKA_CR_ADDRERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA_SR register */
    using PKA_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA operation is in progress This bit is set to 1' whenever START bit in the PKA_CR is set. It is automatically cleared when the computation is complete, meaning that PKA RAM can be safely accessed and a new operation can be started. - 0: No operation is in progress (default) - 1: An operation is in progress Nota: if PKA is started with a wrong opcode the IP will be busy for a couple of cycles then it will abort automatically the operation and go back to ready (BUSY bit is set to 0'). */
    using PKA_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA End of Operation flag - 0: Operation in progress - 1: PKA operation is completed. This flag is set when the BUSY bit is de-asserted. */
    using PKA_SR_PROCENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA RAM error flag - 0: No PKA RAM access error - 1: An AHB access to the PKA RAM occured while the PKA core was computing and using its internal RAM (AHB PKA_RAM access are not allowed while PKA operation is in progress). */
    using PKA_SR_RAMERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address error flag - 0: No Address error - 1: Address access is out of range (unmapped address) */
    using PKA_SR_ADDRERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA_CLRFR register */
    using PKA_CLRFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear PKA End of Operation flag - 0: No action - 1: Clear the PROCENDF flag */
    using PKA_CLRFR_PROCENDFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear PKA RAM error flag - 0: No action - 1: Clear the RAMERRF flag Bits 18 Reserved, must be kept at zero */
    using PKA_CLRFR_RAMERRFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Address error flag - 0: No action - 1: Clear the ADDRERRF flag */
    using PKA_CLRFR_ADDRERRFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
