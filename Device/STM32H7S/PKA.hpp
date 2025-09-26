/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_PKA_HPP
#define EMBEDDED_PP_STM32H7S_PKA_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Public key accelerator */
namespace STM32H7S::PKA {

    /** @brief PKA control register */
    using PKA_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA enable. When an illegal operation is selected while EN=1 OPERRF bit is set in PKA_SR. See PKA_CR.MODE bitfield for details. Note: When EN=0 PKA RAM can still be accessed by the application. */
    using PKA_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable PKA (value: 0)
     *          - B_0x1: Enable PKA.PKA becomes functional when INITOK is set by hardware in PKA_SR. (value: 1)
     */
        /** @brief Disable PKA */
    constexpr std::uint32_t PKA_CR_EN_B_0x0 = 0;
        /** @brief Enable PKA.PKA becomes functional when INITOK is set by hardware in PKA_SR. */
    constexpr std::uint32_t PKA_CR_EN_B_0x1 = 1;

    /** @brief start the operation Writing 1 to this bit starts the operation which is selected by MODE[5:0], using the operands and data already written to the PKA RAM. This bit is always read as 0. When an illegal operation is selected while START bit is set no operation is started, and OPERRF bit is set in PKA_SR. Note: START is ignored if PKA is busy. */
    using PKA_CR_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA operation code When an operation not listed here is written by the application with EN bit set, OPERRF bit is set in PKA_SR register, and the write to MODE bitfield is ignored. When PKA is configured in limited mode (LMF = 1 in PKA_SR), writing a MODE different from 0x26 with EN bit to 1 triggers OPERRF bit to be set and write to MODE bit is ignored. */
    using PKA_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Montgomery parameter computation then modular exponentiation (value: 0)
     *          - B_0x1: Montgomery parameter computation only (value: 1)
     *          - B_0x2: Modular exponentiation only (Montgomery parameter must be loaded first) (value: 2)
     *          - B_0x3: Modular exponentiation (protected, used when manipulating secrets) (value: 3)
     *          - B_0x20: Montgomery parameter computation then ECC scalar multiplication (value: 32)
     *          - B_0x24: ECDSA sign (value: 36)
     *          - B_0x26: ECDSA verification (value: 38)
     *          - B_0x28: Point on elliptic curve Fp check (value: 40)
     *          - B_0x7: RSA CRT exponentiation (value: 7)
     *          - B_0x8: Modular inversion (value: 8)
     *          - B_0x9: Arithmetic addition (value: 9)
     *          - B_0xA: Arithmetic subtraction (value: 10)
     *          - B_0xB: Arithmetic multiplication (value: 11)
     *          - B_0xC: Arithmetic comparison (value: 12)
     *          - B_0xD: Modular reduction (value: 13)
     *          - B_0xE: Modular addition (value: 14)
     *          - B_0xF: Modular subtraction (value: 15)
     *          - B_0x10: Montgomery multiplication (value: 16)
     *          - B_0x23: ECC complete addition (value: 35)
     *          - B_0x27: ECC double base ladder (value: 39)
     *          - B_0x2F: ECC projective to affine (value: 47)
     */
        /** @brief Montgomery parameter computation then modular exponentiation */
    constexpr std::uint32_t PKA_CR_MODE_B_0x0 = 0;
        /** @brief Montgomery parameter computation only */
    constexpr std::uint32_t PKA_CR_MODE_B_0x1 = 1;
        /** @brief Modular exponentiation only (Montgomery parameter must be loaded first) */
    constexpr std::uint32_t PKA_CR_MODE_B_0x2 = 2;
        /** @brief Modular exponentiation (protected, used when manipulating secrets) */
    constexpr std::uint32_t PKA_CR_MODE_B_0x3 = 3;
        /** @brief Montgomery parameter computation then ECC scalar multiplication */
    constexpr std::uint32_t PKA_CR_MODE_B_0x20 = 32;
        /** @brief ECDSA sign */
    constexpr std::uint32_t PKA_CR_MODE_B_0x24 = 36;
        /** @brief ECDSA verification */
    constexpr std::uint32_t PKA_CR_MODE_B_0x26 = 38;
        /** @brief Point on elliptic curve Fp check */
    constexpr std::uint32_t PKA_CR_MODE_B_0x28 = 40;
        /** @brief RSA CRT exponentiation */
    constexpr std::uint32_t PKA_CR_MODE_B_0x7 = 7;
        /** @brief Modular inversion */
    constexpr std::uint32_t PKA_CR_MODE_B_0x8 = 8;
        /** @brief Arithmetic addition */
    constexpr std::uint32_t PKA_CR_MODE_B_0x9 = 9;
        /** @brief Arithmetic subtraction */
    constexpr std::uint32_t PKA_CR_MODE_B_0xA = 10;
        /** @brief Arithmetic multiplication */
    constexpr std::uint32_t PKA_CR_MODE_B_0xB = 11;
        /** @brief Arithmetic comparison */
    constexpr std::uint32_t PKA_CR_MODE_B_0xC = 12;
        /** @brief Modular reduction */
    constexpr std::uint32_t PKA_CR_MODE_B_0xD = 13;
        /** @brief Modular addition */
    constexpr std::uint32_t PKA_CR_MODE_B_0xE = 14;
        /** @brief Modular subtraction */
    constexpr std::uint32_t PKA_CR_MODE_B_0xF = 15;
        /** @brief Montgomery multiplication */
    constexpr std::uint32_t PKA_CR_MODE_B_0x10 = 16;
        /** @brief ECC complete addition */
    constexpr std::uint32_t PKA_CR_MODE_B_0x23 = 35;
        /** @brief ECC double base ladder */
    constexpr std::uint32_t PKA_CR_MODE_B_0x27 = 39;
        /** @brief ECC projective to affine */
    constexpr std::uint32_t PKA_CR_MODE_B_0x2F = 47;

    /** @brief End of operation interrupt enable */
    using PKA_CR_PROCENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when PROCENDF flag is set in PKA_SR. (value: 0)
     *          - B_0x1: An interrupt is generated when PROCENDF flag is set in PKA_SR. (value: 1)
     */
        /** @brief No interrupt is generated when PROCENDF flag is set in PKA_SR. */
    constexpr std::uint32_t PKA_CR_PROCENDIE_B_0x0 = 0;
        /** @brief An interrupt is generated when PROCENDF flag is set in PKA_SR. */
    constexpr std::uint32_t PKA_CR_PROCENDIE_B_0x1 = 1;

    /** @brief RAM error interrupt enable */
    using PKA_CR_RAMERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when RAMERRF flag is set in PKA_SR. (value: 0)
     *          - B_0x1: An interrupt is generated when RAMERRF flag is set in PKA_SR. (value: 1)
     */
        /** @brief No interrupt is generated when RAMERRF flag is set in PKA_SR. */
    constexpr std::uint32_t PKA_CR_RAMERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when RAMERRF flag is set in PKA_SR. */
    constexpr std::uint32_t PKA_CR_RAMERRIE_B_0x1 = 1;

    /** @brief Address error interrupt enable */
    using PKA_CR_ADDRERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when ADDRERRF flag is set in PKA_SR. (value: 0)
     *          - B_0x1: An interrupt is generated when ADDRERRF flag is set in PKA_SR. (value: 1)
     */
        /** @brief No interrupt is generated when ADDRERRF flag is set in PKA_SR. */
    constexpr std::uint32_t PKA_CR_ADDRERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when ADDRERRF flag is set in PKA_SR. */
    constexpr std::uint32_t PKA_CR_ADDRERRIE_B_0x1 = 1;

    /** @brief Operation error interrupt enable */
    using PKA_CR_OPERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when OPERRF flag is set in PKA_SR. (value: 0)
     *          - B_0x1: An interrupt is generated when OPERRF flag is set in PKA_SR. (value: 1)
     */
        /** @brief No interrupt is generated when OPERRF flag is set in PKA_SR. */
    constexpr std::uint32_t PKA_CR_OPERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated when OPERRF flag is set in PKA_SR. */
    constexpr std::uint32_t PKA_CR_OPERRIE_B_0x1 = 1;

    /** @brief PKA status register */
    using PKA_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PKA initialization OK This bit is asserted when PKA initialization is complete. When RNG is not able to output proper random numbers INITOK stays at 0. */
    using PKA_SR_INITOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA is not initialized correctly. START bit cannot be set. (value: 0)
     *          - B_0x1: PKA is initialized correctly and can be used normally. (value: 1)
     */
        /** @brief PKA is not initialized correctly. START bit cannot be set. */
    constexpr std::uint32_t PKA_SR_INITOK_B_0x0 = 0;
        /** @brief PKA is initialized correctly and can be used normally. */
    constexpr std::uint32_t PKA_SR_INITOK_B_0x1 = 1;

    /** @brief Limited mode flag This bit is updated when EN bit in PKA_CR is set */
    using PKA_SR_LMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All values documented in MODE bitfield can be used. (value: 0)
     *          - B_0x1: Only ECDSA verification (MODE = 0x26) is supported by the PKA. (value: 1)
     */
        /** @brief All values documented in MODE bitfield can be used. */
    constexpr std::uint32_t PKA_SR_LMF_B_0x0 = 0;
        /** @brief Only ECDSA verification (MODE = 0x26) is supported by the PKA. */
    constexpr std::uint32_t PKA_SR_LMF_B_0x1 = 1;

    /** @brief PKA operation is in progress This bit is set to 1 whenever START bit in the PKA_CR is set. It is automatically cleared when the computation is complete, meaning that PKA RAM can be safely accessed and a new operation can be started. If PKA is started with a wrong opcode, it is busy for a couple of cycles, then it aborts automatically the operation and go back to ready (BUSY bit is set to 0). */
    using PKA_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No operation is in progress (default) (value: 0)
     *          - B_0x1: An operation is in progress (value: 1)
     */
        /** @brief No operation is in progress (default) */
    constexpr std::uint32_t PKA_SR_BUSY_B_0x0 = 0;
        /** @brief An operation is in progress */
    constexpr std::uint32_t PKA_SR_BUSY_B_0x1 = 1;

    /** @brief PKA End of Operation flag */
    using PKA_SR_PROCENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Operation in progress (value: 0)
     *          - B_0x1: PKA operation is completed. This flag is set when the BUSY bit is deasserted. (value: 1)
     */
        /** @brief Operation in progress */
    constexpr std::uint32_t PKA_SR_PROCENDF_B_0x0 = 0;
        /** @brief PKA operation is completed. This flag is set when the BUSY bit is deasserted. */
    constexpr std::uint32_t PKA_SR_PROCENDF_B_0x1 = 1;

    /** @brief PKA RAM error flag This bit is cleared using RAMERRFC bit in PKA_CLRFR. */
    using PKA_SR_RAMERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No PKA RAM access error (value: 0)
     *          - B_0x1: An AHB access to the PKA RAM occurred while the PKA core was computing and using its internal RAM (AHB PKA_RAM access are not allowed while PKA operation is in progress). (value: 1)
     */
        /** @brief No PKA RAM access error */
    constexpr std::uint32_t PKA_SR_RAMERRF_B_0x0 = 0;
        /** @brief An AHB access to the PKA RAM occurred while the PKA core was computing and using its internal RAM (AHB PKA_RAM access are not allowed while PKA operation is in progress). */
    constexpr std::uint32_t PKA_SR_RAMERRF_B_0x1 = 1;

    /** @brief Address error flag This bit is cleared using ADDRERRFC bit in PKA_CLRFR. */
    using PKA_SR_ADDRERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No address error (value: 0)
     *          - B_0x1: Address access is out of range (unmapped address) (value: 1)
     */
        /** @brief No address error */
    constexpr std::uint32_t PKA_SR_ADDRERRF_B_0x0 = 0;
        /** @brief Address access is out of range (unmapped address) */
    constexpr std::uint32_t PKA_SR_ADDRERRF_B_0x1 = 1;

    /** @brief Operation error flag This bit is cleared using OPERRFC bit in PKA_CLRFR. */
    using PKA_SR_OPERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event error (value: 0)
     *          - B_0x1: An illegal or unknown operation has been selected in PKA_CR register (value: 1)
     */
        /** @brief No event error */
    constexpr std::uint32_t PKA_SR_OPERRF_B_0x0 = 0;
        /** @brief An illegal or unknown operation has been selected in PKA_CR register */
    constexpr std::uint32_t PKA_SR_OPERRF_B_0x1 = 1;

    /** @brief PKA clear flag register */
    using PKA_CLRFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear PKA End of Operation flag */
    using PKA_CLRFR_PROCENDFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Clear the PROCENDF flag in PKA_SR (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t PKA_CLRFR_PROCENDFC_B_0x0 = 0;
        /** @brief Clear the PROCENDF flag in PKA_SR */
    constexpr std::uint32_t PKA_CLRFR_PROCENDFC_B_0x1 = 1;

    /** @brief Clear PKA RAM error flag */
    using PKA_CLRFR_RAMERRFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Clear the RAMERRF flag in PKA_SR (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t PKA_CLRFR_RAMERRFC_B_0x0 = 0;
        /** @brief Clear the RAMERRF flag in PKA_SR */
    constexpr std::uint32_t PKA_CLRFR_RAMERRFC_B_0x1 = 1;

    /** @brief Clear address error flag */
    using PKA_CLRFR_ADDRERRFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Clear the ADDRERRF flag in PKA_SR (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t PKA_CLRFR_ADDRERRFC_B_0x0 = 0;
        /** @brief Clear the ADDRERRF flag in PKA_SR */
    constexpr std::uint32_t PKA_CLRFR_ADDRERRFC_B_0x1 = 1;

    /** @brief Clear operation error flag */
    using PKA_CLRFR_OPERRFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Clear the OPERRF flag in PKA_SR (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t PKA_CLRFR_OPERRFC_B_0x0 = 0;
        /** @brief Clear the OPERRF flag in PKA_SR */
    constexpr std::uint32_t PKA_CLRFR_OPERRFC_B_0x1 = 1;

}

#endif
