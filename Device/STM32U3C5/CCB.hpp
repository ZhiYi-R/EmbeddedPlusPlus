/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3C5_CCB_HPP
#define EMBEDDED_PP_STM32U3C5_CCB_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief CCB register block */
namespace STM32U3C5::CCB {

    /** @brief CCB control register */
    using CCB_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coupling and chaining operation */
    using CCB_CR_CCOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x044: Modular exponentiation blob creation with priv key from the CPU (value: 68)
     *          - B_0x045: Modular exponentiation blob use (value: 69)
     *          - B_0x080: ECC scalar multiplication blob creation with priv key from the CPU (value: 128)
     *          - B_0x082: ECC scalar multiplication blob creation with priv key from the RNG (value: 130)
     *          - B_0x081: ECC scalar multiplication blob use, or ECDSA signature blob use for public key computation (value: 129)
     *          - B_0x0C0: ECDSA signature blob creation with priv key from the CPU (value: 192)
     *          - B_0x0C2: ECDSA signature blob creation with priv key from the RNG (value: 194)
     *          - B_0x0C3: ECDSA signature blob use for ECDSA signature (value: 195)
     */
        /** @brief Modular exponentiation blob creation with priv key from the CPU */
    constexpr std::uint32_t CCB_CR_CCOP_B_0x044 = 68;
        /** @brief Modular exponentiation blob use */
    constexpr std::uint32_t CCB_CR_CCOP_B_0x045 = 69;
        /** @brief ECC scalar multiplication blob creation with priv key from the CPU */
    constexpr std::uint32_t CCB_CR_CCOP_B_0x080 = 128;
        /** @brief ECC scalar multiplication blob creation with priv key from the RNG */
    constexpr std::uint32_t CCB_CR_CCOP_B_0x082 = 130;
        /** @brief ECC scalar multiplication blob use, or ECDSA signature blob use for public key computation */
    constexpr std::uint32_t CCB_CR_CCOP_B_0x081 = 129;
        /** @brief ECDSA signature blob creation with priv key from the CPU */
    constexpr std::uint32_t CCB_CR_CCOP_B_0x0C0 = 192;
        /** @brief ECDSA signature blob creation with priv key from the RNG */
    constexpr std::uint32_t CCB_CR_CCOP_B_0x0C2 = 194;
        /** @brief ECDSA signature blob use for ECDSA signature */
    constexpr std::uint32_t CCB_CR_CCOP_B_0x0C3 = 195;

    /** @brief CCB reset */
    using CCB_CR_IPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCB status register */
    using CCB_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operation step */
    using CCB_SR_OPSTEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operation error */
    using CCB_SR_OPERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error detected during protected PKA operation (if applicable) (value: 0)
     *          - B_0x1: CCB RCC reset has been detected when OPSTEP > 0x0 (value: 1)
     *          - B_0x2: SAES RCC reset has been detected when OPSTEP > 0x0 (value: 2)
     *          - B_0x3: PKA RCC reset has been detected when OPSTEP > 0x0 (value: 3)
     *          - B_0x4: RNG RCC reset has been detected when OPSTEP > 0x0 (value: 4)
     *          - B_0x5: The RCC has gated the CCB clock when OPSTEP > 0x0 (value: 5)
     *          - B_0x6: The RCC has gated the SAES clock when OPSTEP > 0x0 (value: 6)
     *          - B_0x7: The RCC has gated the PKA clock when OPSTEP > 0x0 (value: 7)
     *          - B_0x8: The RCC has gated the RNG clock when OPSTEP > 0x0 (value: 8)
     *          - B_0x9: Random in SAES_IV1 is trivial (all 0s or all 1s) when OPSTEP = 0x2 (value: 9)
     *          - B_0xA: Random in SAES_IV2 is trivial (all 0s or all 1s) when OPSTEP = 0x2 (value: 10)
     *          - B_0xB: Random in SAES_IV3 is trivial (all 0s or all 1s) when OPSTEP = 0x2 (value: 11)
     *          - B_0xC: When OPSTEP = 0x17 SAES GCM TAG comparison with CCB_REFTAG failed, or a register different from SAES_DOUT was read in the SAES. (value: 12)
     *          - B_0xD: KEYSIZE different 256 bits in SAES_CR when the SAES is enabled, and OPSTEP > 0x0. (value: 13)
     *          - B_0xE: CHMOD different GCM in SAES_CR when 0x1 less than OPSTEP less than 0x18, or the SAES is not enabled, or KEYVALID is cleared when GCMPH > 0x0. (value: 14)
     *          - B_0xF: KMOD different from wrapped key mode in SAES_CR when the SAES is enabled, and (value: 15)
     *          - B_0x10: KEYSEL different 0x1 or 0x4 in SAES_CR when the SAES is enabled, KEYVALID is set, and OPSTEP=0x1. (value: 16)
     *          - B_0x11: GCMPH not correct (not incremented) in SAES_CR when OPSTEP > 0x1. (value: 17)
     *          - B_0x12: MODE in SAES_CR does not match the expected value (selected by CCOP in CCB_CR) when OPSTEP > 0x1. (value: 18)
     *          - B_0x13: BUSY = 1 in SAES_SR when OPSTEP= 0x18 or 0x19. (value: 19)
     *          - B_0x14: EN = 0 in PKA_CR when OPSTEP > 0x2 (except 0x12). (value: 20)
     *          - B_0x15: INITOK = 0 in PKA_SR when OPSTEP > 0x2 (except 0x12). (value: 21)
     *          - B_0x16: Authorized by local firewall, but unexpected AHB error detected when OPSTEP > 0x0. (value: 22)
     *          - B_0x18: CCB_REFTAGRx registers are equal to 0 when OPSTEP > 0x12. (value: 24)
     *          - B_0x1A: Security or/and privilege protection inconsistent (see Section5: Global TrustZone controller (GTZC)) for the peripherals SAES, PKA, RNG, and CCB when OPSTEP > 0x0. (value: 26)
     *          - B_0x1B: MODE in PKA_CR does not match the expected value (selected by CCOP in CCB_CR) when OPSTEP > 0x0. (value: 27)
     *          - B_0x1C: OPSTEP end-step event not found at OPSTEP= 0x0 (SAES KEYVALID is set). (value: 28)
     *          - B_0x1D: OPSTEP end-step event not found at OPSTEP = 0x1. (value: 29)
     *          - B_0x1E: OPSTEP end-step event not found at OPSTEP = 0x2. (value: 30)
     *          - B_0x1F: OPSTEP end-step event not found at OPSTEP = 0x3. (value: 31)
     *          - B_0x20: OPSTEP end-step event not found at OPSTEP = 0xA. (value: 32)
     *          - B_0x21: OPSTEP end-step event not found at OPSTEP = 0x12. (value: 33)
     *          - B_0x22: OPSTEP end-step event not found at OPSTEP = 0x13. (value: 34)
     *          - B_0x23: OPSTEP end-step event not found at OPSTEP = 0x17. (value: 35)
     */
        /** @brief No error detected during protected PKA operation (if applicable) */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x0 = 0;
        /** @brief CCB RCC reset has been detected when OPSTEP > 0x0 */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x1 = 1;
        /** @brief SAES RCC reset has been detected when OPSTEP > 0x0 */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x2 = 2;
        /** @brief PKA RCC reset has been detected when OPSTEP > 0x0 */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x3 = 3;
        /** @brief RNG RCC reset has been detected when OPSTEP > 0x0 */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x4 = 4;
        /** @brief The RCC has gated the CCB clock when OPSTEP > 0x0 */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x5 = 5;
        /** @brief The RCC has gated the SAES clock when OPSTEP > 0x0 */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x6 = 6;
        /** @brief The RCC has gated the PKA clock when OPSTEP > 0x0 */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x7 = 7;
        /** @brief The RCC has gated the RNG clock when OPSTEP > 0x0 */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x8 = 8;
        /** @brief Random in SAES_IV1 is trivial (all 0s or all 1s) when OPSTEP = 0x2 */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x9 = 9;
        /** @brief Random in SAES_IV2 is trivial (all 0s or all 1s) when OPSTEP = 0x2 */
    constexpr std::uint32_t CCB_SR_OPERR_B_0xA = 10;
        /** @brief Random in SAES_IV3 is trivial (all 0s or all 1s) when OPSTEP = 0x2 */
    constexpr std::uint32_t CCB_SR_OPERR_B_0xB = 11;
        /** @brief When OPSTEP = 0x17 SAES GCM TAG comparison with CCB_REFTAG failed, or a register different from SAES_DOUT was read in the SAES. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0xC = 12;
        /** @brief KEYSIZE different 256 bits in SAES_CR when the SAES is enabled, and OPSTEP > 0x0. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0xD = 13;
        /** @brief CHMOD different GCM in SAES_CR when 0x1 less than OPSTEP less than 0x18, or the SAES is not enabled, or KEYVALID is cleared when GCMPH > 0x0. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0xE = 14;
        /** @brief KMOD different from wrapped key mode in SAES_CR when the SAES is enabled, and */
    constexpr std::uint32_t CCB_SR_OPERR_B_0xF = 15;
        /** @brief KEYSEL different 0x1 or 0x4 in SAES_CR when the SAES is enabled, KEYVALID is set, and OPSTEP=0x1. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x10 = 16;
        /** @brief GCMPH not correct (not incremented) in SAES_CR when OPSTEP > 0x1. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x11 = 17;
        /** @brief MODE in SAES_CR does not match the expected value (selected by CCOP in CCB_CR) when OPSTEP > 0x1. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x12 = 18;
        /** @brief BUSY = 1 in SAES_SR when OPSTEP= 0x18 or 0x19. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x13 = 19;
        /** @brief EN = 0 in PKA_CR when OPSTEP > 0x2 (except 0x12). */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x14 = 20;
        /** @brief INITOK = 0 in PKA_SR when OPSTEP > 0x2 (except 0x12). */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x15 = 21;
        /** @brief Authorized by local firewall, but unexpected AHB error detected when OPSTEP > 0x0. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x16 = 22;
        /** @brief CCB_REFTAGRx registers are equal to 0 when OPSTEP > 0x12. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x18 = 24;
        /** @brief Security or/and privilege protection inconsistent (see Section5: Global TrustZone controller (GTZC)) for the peripherals SAES, PKA, RNG, and CCB when OPSTEP > 0x0. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x1A = 26;
        /** @brief MODE in PKA_CR does not match the expected value (selected by CCOP in CCB_CR) when OPSTEP > 0x0. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x1B = 27;
        /** @brief OPSTEP end-step event not found at OPSTEP= 0x0 (SAES KEYVALID is set). */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x1C = 28;
        /** @brief OPSTEP end-step event not found at OPSTEP = 0x1. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x1D = 29;
        /** @brief OPSTEP end-step event not found at OPSTEP = 0x2. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x1E = 30;
        /** @brief OPSTEP end-step event not found at OPSTEP = 0x3. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x1F = 31;
        /** @brief OPSTEP end-step event not found at OPSTEP = 0xA. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x20 = 32;
        /** @brief OPSTEP end-step event not found at OPSTEP = 0x12. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x21 = 33;
        /** @brief OPSTEP end-step event not found at OPSTEP = 0x13. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x22 = 34;
        /** @brief OPSTEP end-step event not found at OPSTEP = 0x17. */
    constexpr std::uint32_t CCB_SR_OPERR_B_0x23 = 35;

    /** @brief CCB busy */
    using CCB_SR_CCB_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCB idle (value: 0)
     *          - B_0x1: CCB busy or PKA RAM is being cleared following a peripheral reset. (value: 1)
     */
        /** @brief CCB idle */
    constexpr std::uint32_t CCB_SR_CCB_BUSY_B_0x0 = 0;
        /** @brief CCB busy or PKA RAM is being cleared following a peripheral reset. */
    constexpr std::uint32_t CCB_SR_CCB_BUSY_B_0x1 = 1;

    /** @brief Tamper i flag */
    using CCB_SR_TAMP_EVT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event (value: 0)
     *          - B_0x1: Tamper event i has been raised. (value: 1)
     */
        /** @brief No event */
    constexpr std::uint32_t CCB_SR_TAMP_EVT0_B_0x0 = 0;
        /** @brief Tamper event i has been raised. */
    constexpr std::uint32_t CCB_SR_TAMP_EVT0_B_0x1 = 1;

    /** @brief Tamper i flag */
    using CCB_SR_TAMP_EVT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event (value: 0)
     *          - B_0x1: Tamper event i has been raised. (value: 1)
     */
        /** @brief No event */
    constexpr std::uint32_t CCB_SR_TAMP_EVT1_B_0x0 = 0;
        /** @brief Tamper event i has been raised. */
    constexpr std::uint32_t CCB_SR_TAMP_EVT1_B_0x1 = 1;

    /** @brief Tamper i flag */
    using CCB_SR_TAMP_EVT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event (value: 0)
     *          - B_0x1: Tamper event i has been raised. (value: 1)
     */
        /** @brief No event */
    constexpr std::uint32_t CCB_SR_TAMP_EVT2_B_0x0 = 0;
        /** @brief Tamper event i has been raised. */
    constexpr std::uint32_t CCB_SR_TAMP_EVT2_B_0x1 = 1;

    /** @brief Tamper i flag */
    using CCB_SR_TAMP_EVT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event (value: 0)
     *          - B_0x1: Tamper event i has been raised. (value: 1)
     */
        /** @brief No event */
    constexpr std::uint32_t CCB_SR_TAMP_EVT3_B_0x0 = 0;
        /** @brief Tamper event i has been raised. */
    constexpr std::uint32_t CCB_SR_TAMP_EVT3_B_0x1 = 1;

    /** @brief Tamper i flag */
    using CCB_SR_TAMP_EVT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event (value: 0)
     *          - B_0x1: Tamper event i has been raised. (value: 1)
     */
        /** @brief No event */
    constexpr std::uint32_t CCB_SR_TAMP_EVT4_B_0x0 = 0;
        /** @brief Tamper event i has been raised. */
    constexpr std::uint32_t CCB_SR_TAMP_EVT4_B_0x1 = 1;

    /** @brief Tamper i flag */
    using CCB_SR_TAMP_EVT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event (value: 0)
     *          - B_0x1: Tamper event i has been raised. (value: 1)
     */
        /** @brief No event */
    constexpr std::uint32_t CCB_SR_TAMP_EVT5_B_0x0 = 0;
        /** @brief Tamper event i has been raised. */
    constexpr std::uint32_t CCB_SR_TAMP_EVT5_B_0x1 = 1;

    /** @brief CCB reference tag register */
    using CCB_REFTAGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 0 */
    using CCB_REFTAGR0_REFTAG0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 1 */
    using CCB_REFTAGR0_REFTAG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 2 */
    using CCB_REFTAGR0_REFTAG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 3 */
    using CCB_REFTAGR0_REFTAG3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 4 */
    using CCB_REFTAGR0_REFTAG4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 5 */
    using CCB_REFTAGR0_REFTAG5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 6 */
    using CCB_REFTAGR0_REFTAG6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 7 */
    using CCB_REFTAGR0_REFTAG7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 8 */
    using CCB_REFTAGR0_REFTAG8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 9 */
    using CCB_REFTAGR0_REFTAG9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 10 */
    using CCB_REFTAGR0_REFTAG10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 11 */
    using CCB_REFTAGR0_REFTAG11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 12 */
    using CCB_REFTAGR0_REFTAG12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 13 */
    using CCB_REFTAGR0_REFTAG13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 14 */
    using CCB_REFTAGR0_REFTAG14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 15 */
    using CCB_REFTAGR0_REFTAG15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 16 */
    using CCB_REFTAGR0_REFTAG16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 17 */
    using CCB_REFTAGR0_REFTAG17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 18 */
    using CCB_REFTAGR0_REFTAG18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 19 */
    using CCB_REFTAGR0_REFTAG19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 20 */
    using CCB_REFTAGR0_REFTAG20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 21 */
    using CCB_REFTAGR0_REFTAG21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 22 */
    using CCB_REFTAGR0_REFTAG22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 23 */
    using CCB_REFTAGR0_REFTAG23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 24 */
    using CCB_REFTAGR0_REFTAG24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 25 */
    using CCB_REFTAGR0_REFTAG25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 26 */
    using CCB_REFTAGR0_REFTAG26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 27 */
    using CCB_REFTAGR0_REFTAG27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 28 */
    using CCB_REFTAGR0_REFTAG28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 29 */
    using CCB_REFTAGR0_REFTAG29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 30 */
    using CCB_REFTAGR0_REFTAG30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 31 */
    using CCB_REFTAGR0_REFTAG31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCB reference tag register */
    using CCB_REFTAGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 32 */
    using CCB_REFTAGR1_REFTAG32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 33 */
    using CCB_REFTAGR1_REFTAG33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 34 */
    using CCB_REFTAGR1_REFTAG34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 35 */
    using CCB_REFTAGR1_REFTAG35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 36 */
    using CCB_REFTAGR1_REFTAG36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 37 */
    using CCB_REFTAGR1_REFTAG37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 38 */
    using CCB_REFTAGR1_REFTAG38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 39 */
    using CCB_REFTAGR1_REFTAG39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 40 */
    using CCB_REFTAGR1_REFTAG40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 41 */
    using CCB_REFTAGR1_REFTAG41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 42 */
    using CCB_REFTAGR1_REFTAG42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 43 */
    using CCB_REFTAGR1_REFTAG43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 44 */
    using CCB_REFTAGR1_REFTAG44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 45 */
    using CCB_REFTAGR1_REFTAG45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 46 */
    using CCB_REFTAGR1_REFTAG46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 47 */
    using CCB_REFTAGR1_REFTAG47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 48 */
    using CCB_REFTAGR1_REFTAG48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 49 */
    using CCB_REFTAGR1_REFTAG49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 50 */
    using CCB_REFTAGR1_REFTAG50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 51 */
    using CCB_REFTAGR1_REFTAG51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 52 */
    using CCB_REFTAGR1_REFTAG52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 53 */
    using CCB_REFTAGR1_REFTAG53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 54 */
    using CCB_REFTAGR1_REFTAG54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 55 */
    using CCB_REFTAGR1_REFTAG55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 56 */
    using CCB_REFTAGR1_REFTAG56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 57 */
    using CCB_REFTAGR1_REFTAG57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 58 */
    using CCB_REFTAGR1_REFTAG58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 59 */
    using CCB_REFTAGR1_REFTAG59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 60 */
    using CCB_REFTAGR1_REFTAG60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 61 */
    using CCB_REFTAGR1_REFTAG61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 62 */
    using CCB_REFTAGR1_REFTAG62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 63 */
    using CCB_REFTAGR1_REFTAG63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCB reference tag register */
    using CCB_REFTAGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 64 */
    using CCB_REFTAGR2_REFTAG64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 65 */
    using CCB_REFTAGR2_REFTAG65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 66 */
    using CCB_REFTAGR2_REFTAG66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 67 */
    using CCB_REFTAGR2_REFTAG67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 68 */
    using CCB_REFTAGR2_REFTAG68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 69 */
    using CCB_REFTAGR2_REFTAG69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 70 */
    using CCB_REFTAGR2_REFTAG70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 71 */
    using CCB_REFTAGR2_REFTAG71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 72 */
    using CCB_REFTAGR2_REFTAG72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 73 */
    using CCB_REFTAGR2_REFTAG73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 74 */
    using CCB_REFTAGR2_REFTAG74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 75 */
    using CCB_REFTAGR2_REFTAG75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 76 */
    using CCB_REFTAGR2_REFTAG76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 77 */
    using CCB_REFTAGR2_REFTAG77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 78 */
    using CCB_REFTAGR2_REFTAG78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 79 */
    using CCB_REFTAGR2_REFTAG79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 80 */
    using CCB_REFTAGR2_REFTAG80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 81 */
    using CCB_REFTAGR2_REFTAG81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 82 */
    using CCB_REFTAGR2_REFTAG82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 83 */
    using CCB_REFTAGR2_REFTAG83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 84 */
    using CCB_REFTAGR2_REFTAG84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 85 */
    using CCB_REFTAGR2_REFTAG85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 86 */
    using CCB_REFTAGR2_REFTAG86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 87 */
    using CCB_REFTAGR2_REFTAG87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 88 */
    using CCB_REFTAGR2_REFTAG88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 89 */
    using CCB_REFTAGR2_REFTAG89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 90 */
    using CCB_REFTAGR2_REFTAG90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 91 */
    using CCB_REFTAGR2_REFTAG91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 92 */
    using CCB_REFTAGR2_REFTAG92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 93 */
    using CCB_REFTAGR2_REFTAG93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 94 */
    using CCB_REFTAGR2_REFTAG94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 95 */
    using CCB_REFTAGR2_REFTAG95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCB reference tag register */
    using CCB_REFTAGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 96 */
    using CCB_REFTAGR3_REFTAG96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 97 */
    using CCB_REFTAGR3_REFTAG97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 98 */
    using CCB_REFTAGR3_REFTAG98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 99 */
    using CCB_REFTAGR3_REFTAG99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 100 */
    using CCB_REFTAGR3_REFTAG100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 101 */
    using CCB_REFTAGR3_REFTAG101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 102 */
    using CCB_REFTAGR3_REFTAG102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 103 */
    using CCB_REFTAGR3_REFTAG103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 104 */
    using CCB_REFTAGR3_REFTAG104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 105 */
    using CCB_REFTAGR3_REFTAG105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 106 */
    using CCB_REFTAGR3_REFTAG106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 107 */
    using CCB_REFTAGR3_REFTAG107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 108 */
    using CCB_REFTAGR3_REFTAG108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 109 */
    using CCB_REFTAGR3_REFTAG109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 110 */
    using CCB_REFTAGR3_REFTAG110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 111 */
    using CCB_REFTAGR3_REFTAG111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 112 */
    using CCB_REFTAGR3_REFTAG112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 113 */
    using CCB_REFTAGR3_REFTAG113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 114 */
    using CCB_REFTAGR3_REFTAG114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 115 */
    using CCB_REFTAGR3_REFTAG115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 116 */
    using CCB_REFTAGR3_REFTAG116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 117 */
    using CCB_REFTAGR3_REFTAG117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 118 */
    using CCB_REFTAGR3_REFTAG118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 119 */
    using CCB_REFTAGR3_REFTAG119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 120 */
    using CCB_REFTAGR3_REFTAG120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 121 */
    using CCB_REFTAGR3_REFTAG121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 122 */
    using CCB_REFTAGR3_REFTAG122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 123 */
    using CCB_REFTAGR3_REFTAG123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 124 */
    using CCB_REFTAGR3_REFTAG124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 125 */
    using CCB_REFTAGR3_REFTAG125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 126 */
    using CCB_REFTAGR3_REFTAG126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference tag bits 127 */
    using CCB_REFTAGR3_REFTAG127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
