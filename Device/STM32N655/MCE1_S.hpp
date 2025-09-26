/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N655_MCE1_S_HPP
#define EMBEDDED_PP_STM32N655_MCE1_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Memory cipher engine */
namespace STM32N655::MCE1_S {

    /** @brief MCE configuration register */
    using MCE_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global lock */
    using MCE_CR_GLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCE registers are writable (value: 0)
     *          - B_0x1: All writes to MCE registers are ignored, with the exception of MCE_IACR and MCE_IAIER registers. (value: 1)
     */
        /** @brief MCE registers are writable */
    constexpr std::uint32_t MCE_CR_GLOCK_B_0x0 = 0;
        /** @brief All writes to MCE registers are ignored, with the exception of MCE_IACR and MCE_IAIER registers. */
    constexpr std::uint32_t MCE_CR_GLOCK_B_0x1 = 1;

    /** @brief Master keys lock */
    using MCE_CR_MKLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to MCE_MKEYRx and MCE_FMKEYRx registers are allowed (value: 0)
     *          - B_0x1: Writes to MCE_MKEYRx and MCE_FMKEYRx registers are ignored until next MCE reset. (value: 1)
     */
        /** @brief Writes to MCE_MKEYRx and MCE_FMKEYRx registers are allowed */
    constexpr std::uint32_t MCE_CR_MKLOCK_B_0x0 = 0;
        /** @brief Writes to MCE_MKEYRx and MCE_FMKEYRx registers are ignored until next MCE reset. */
    constexpr std::uint32_t MCE_CR_MKLOCK_B_0x1 = 1;

    /** @brief Cipher selection */
    using MCE_CR_CIPHERSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: AES-128 cipher selected for all encrypted regions (value: 1)
     *          - B_0x2: Noekeon cipher selected for all encrypted regions (value: 2)
     *          - B_0x3: AES-256 cipher selected for all encrypted regions (value: 3)
     *          - B_0x0: No cipher is selected. Any read (resp. write) to an encrypted region with BREN=1 returns zero (resp. is ignored), and illegal access flag IAEF bit is set. (value: 0)
     */
        /** @brief AES-128 cipher selected for all encrypted regions */
    constexpr std::uint32_t MCE_CR_CIPHERSEL_B_0x1 = 1;
        /** @brief Noekeon cipher selected for all encrypted regions */
    constexpr std::uint32_t MCE_CR_CIPHERSEL_B_0x2 = 2;
        /** @brief AES-256 cipher selected for all encrypted regions */
    constexpr std::uint32_t MCE_CR_CIPHERSEL_B_0x3 = 3;
        /** @brief No cipher is selected. Any read (resp. write) to an encrypted region with BREN=1 returns zero (resp. is ignored), and illegal access flag IAEF bit is set. */
    constexpr std::uint32_t MCE_CR_CIPHERSEL_B_0x0 = 0;

    /** @brief MCE status register */
    using MCE_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key valid */
    using MCE_SR_MKVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A valid key has not been written in MCE_MKEYRx registers, or a valid unlocked master key has been erased by hardware (if bit was set before) (value: 0)
     *          - B_0x1: A valid key has been written in MCE_MKEYRx registers (write R0 -> R1 -> R2 -> R3 or the reverse) (value: 1)
     */
        /** @brief A valid key has not been written in MCE_MKEYRx registers, or a valid unlocked master key has been erased by hardware (if bit was set before) */
    constexpr std::uint32_t MCE_SR_MKVALID_B_0x0 = 0;
        /** @brief A valid key has been written in MCE_MKEYRx registers (write R0 -> R1 -> R2 -> R3 or the reverse) */
    constexpr std::uint32_t MCE_SR_MKVALID_B_0x1 = 1;

    /** @brief Fast master key valid */
    using MCE_SR_FMKVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A valid key has not been written in MCE_FMKEYRx registers, or a valid unlocked fast master key has been erased by hardware (if bit was set before) (value: 0)
     *          - B_0x1: A valid key has been written in MCE_FMKEYRx registers (write R0 -> R1 -> R2 -> R3 or the reverse) (value: 1)
     */
        /** @brief A valid key has not been written in MCE_FMKEYRx registers, or a valid unlocked fast master key has been erased by hardware (if bit was set before) */
    constexpr std::uint32_t MCE_SR_FMKVALID_B_0x0 = 0;
        /** @brief A valid key has been written in MCE_FMKEYRx registers (write R0 -> R1 -> R2 -> R3 or the reverse) */
    constexpr std::uint32_t MCE_SR_FMKVALID_B_0x1 = 1;

    /** @brief encryption disabled */
    using MCE_SR_ENCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When ENC bit and BREN are set in MCE_REGCRx all allowed write accesses in region x are encrypted, and all allowed read requests are decrypted. (value: 0)
     *          - B_0x1: When ENC bit and BREN are set in any MCE_REGCRx all write accesses in region x are ignored, and all read requests return zero. All previously written key material are also erased. (value: 1)
     */
        /** @brief When ENC bit and BREN are set in MCE_REGCRx all allowed write accesses in region x are encrypted, and all allowed read requests are decrypted. */
    constexpr std::uint32_t MCE_SR_ENCDIS_B_0x0 = 0;
        /** @brief When ENC bit and BREN are set in any MCE_REGCRx all write accesses in region x are ignored, and all read requests return zero. All previously written key material are also erased. */
    constexpr std::uint32_t MCE_SR_ENCDIS_B_0x1 = 1;

    /** @brief MCE illegal access status register */
    using MCE_IASR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access error flag */
    using MCE_IASR_IAEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE illegal access clear register */
    using MCE_IACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access error flag clear */
    using MCE_IACR_IAEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE illegal access interrupt enable register */
    using MCE_IAIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access error interrupt enable */
    using MCE_IAIER_IAEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt generation on illegal access errors is disabled (value: 0)
     *          - B_0x1: Interrupt generation when an illegal access error occurs (IAEF=1) (value: 1)
     */
        /** @brief Interrupt generation on illegal access errors is disabled */
    constexpr std::uint32_t MCE_IAIER_IAEIE_B_0x0 = 0;
        /** @brief Interrupt generation when an illegal access error occurs (IAEF=1) */
    constexpr std::uint32_t MCE_IAIER_IAEIE_B_0x1 = 1;

    /** @brief MCE illegal address register */
    using MCE_IADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal address */
    using MCE_IADDR_IADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE region 1 configuration register */
    using MCE_REGCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region enable */
    using MCE_REGCR1_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Region x is disabled. Access control of primary region (privileged or unprivileged, no encryption) applies to any access between this region start and end addresses. (value: 0)
     *          - B_0x1: Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. (value: 1)
     */
        /** @brief Region x is disabled. Access control of primary region (privileged or unprivileged, no encryption) applies to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR1_BREN_B_0x0 = 0;
        /** @brief Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR1_BREN_B_0x1 = 1;

    /** @brief Context ID */
    using MCE_REGCR1_CTXID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. (value: 0)
     *          - B_0x1: If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. (value: 1)
     *          - B_0x2: If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. (value: 2)
     */
        /** @brief If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. */
    constexpr std::uint32_t MCE_REGCR1_CTXID_B_0x0 = 0;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR1_CTXID_B_0x1 = 1;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR1_CTXID_B_0x2 = 2;

    /** @brief Encrypted region */
    using MCE_REGCR1_ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effects (value: 0)
     *          - B_0x1: Stream cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the stream cipher, when CCEN bit is set in MCE_CCzCFGR (where CTXID=z). (value: 1)
     *          - B_0x2: Block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the SCA resistant block cipher. If CTXID=0 and MKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. (value: 2)
     *          - B_0x3: Fast block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the fast block cipher. If CTXID=0 and FMKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. (value: 3)
     */
        /** @brief No effects */
    constexpr std::uint32_t MCE_REGCR1_ENC_B_0x0 = 0;
        /** @brief Stream cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the stream cipher, when CCEN bit is set in MCE_CCzCFGR (where CTXID=z). */
    constexpr std::uint32_t MCE_REGCR1_ENC_B_0x1 = 1;
        /** @brief Block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the SCA resistant block cipher. If CTXID=0 and MKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. */
    constexpr std::uint32_t MCE_REGCR1_ENC_B_0x2 = 2;
        /** @brief Fast block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the fast block cipher. If CTXID=0 and FMKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. */
    constexpr std::uint32_t MCE_REGCR1_ENC_B_0x3 = 3;

    /** @brief MCE start address for region 1 register */
    using MCE_SADDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address start */
    using MCE_SADDR1_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE end address for region 1 register */
    using MCE_EADDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address end */
    using MCE_EADDR1_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE region 2 configuration register */
    using MCE_REGCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region enable */
    using MCE_REGCR2_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Region x is disabled. Access control of primary region (privileged or unprivileged, no encryption) applies to any access between this region start and end addresses. (value: 0)
     *          - B_0x1: Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. (value: 1)
     */
        /** @brief Region x is disabled. Access control of primary region (privileged or unprivileged, no encryption) applies to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR2_BREN_B_0x0 = 0;
        /** @brief Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR2_BREN_B_0x1 = 1;

    /** @brief Context ID */
    using MCE_REGCR2_CTXID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. (value: 0)
     *          - B_0x1: If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. (value: 1)
     *          - B_0x2: If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. (value: 2)
     */
        /** @brief If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. */
    constexpr std::uint32_t MCE_REGCR2_CTXID_B_0x0 = 0;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR2_CTXID_B_0x1 = 1;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR2_CTXID_B_0x2 = 2;

    /** @brief Encrypted region */
    using MCE_REGCR2_ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effects (value: 0)
     *          - B_0x1: Stream cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the stream cipher, when CCEN bit is set in MCE_CCzCFGR (where CTXID=z). (value: 1)
     *          - B_0x2: Block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the SCA resistant block cipher. If CTXID=0 and MKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. (value: 2)
     *          - B_0x3: Fast block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the fast block cipher. If CTXID=0 and FMKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. (value: 3)
     */
        /** @brief No effects */
    constexpr std::uint32_t MCE_REGCR2_ENC_B_0x0 = 0;
        /** @brief Stream cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the stream cipher, when CCEN bit is set in MCE_CCzCFGR (where CTXID=z). */
    constexpr std::uint32_t MCE_REGCR2_ENC_B_0x1 = 1;
        /** @brief Block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the SCA resistant block cipher. If CTXID=0 and MKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. */
    constexpr std::uint32_t MCE_REGCR2_ENC_B_0x2 = 2;
        /** @brief Fast block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the fast block cipher. If CTXID=0 and FMKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. */
    constexpr std::uint32_t MCE_REGCR2_ENC_B_0x3 = 3;

    /** @brief MCE start address for region 2 register */
    using MCE_SADDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address start */
    using MCE_SADDR2_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE end address for region 2 register */
    using MCE_EADDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address end */
    using MCE_EADDR2_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE region 3 configuration register */
    using MCE_REGCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region enable */
    using MCE_REGCR3_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Region x is disabled. Access control of primary region (privileged or unprivileged, no encryption) applies to any access between this region start and end addresses. (value: 0)
     *          - B_0x1: Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. (value: 1)
     */
        /** @brief Region x is disabled. Access control of primary region (privileged or unprivileged, no encryption) applies to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR3_BREN_B_0x0 = 0;
        /** @brief Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR3_BREN_B_0x1 = 1;

    /** @brief Context ID */
    using MCE_REGCR3_CTXID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. (value: 0)
     *          - B_0x1: If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. (value: 1)
     *          - B_0x2: If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. (value: 2)
     */
        /** @brief If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. */
    constexpr std::uint32_t MCE_REGCR3_CTXID_B_0x0 = 0;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR3_CTXID_B_0x1 = 1;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR3_CTXID_B_0x2 = 2;

    /** @brief Encrypted region */
    using MCE_REGCR3_ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effects (value: 0)
     *          - B_0x1: Stream cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the stream cipher, when CCEN bit is set in MCE_CCzCFGR (where CTXID=z). (value: 1)
     *          - B_0x2: Block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the SCA resistant block cipher. If CTXID=0 and MKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. (value: 2)
     *          - B_0x3: Fast block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the fast block cipher. If CTXID=0 and FMKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. (value: 3)
     */
        /** @brief No effects */
    constexpr std::uint32_t MCE_REGCR3_ENC_B_0x0 = 0;
        /** @brief Stream cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the stream cipher, when CCEN bit is set in MCE_CCzCFGR (where CTXID=z). */
    constexpr std::uint32_t MCE_REGCR3_ENC_B_0x1 = 1;
        /** @brief Block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the SCA resistant block cipher. If CTXID=0 and MKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. */
    constexpr std::uint32_t MCE_REGCR3_ENC_B_0x2 = 2;
        /** @brief Fast block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the fast block cipher. If CTXID=0 and FMKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. */
    constexpr std::uint32_t MCE_REGCR3_ENC_B_0x3 = 3;

    /** @brief MCE start address for region 3 register */
    using MCE_SADDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address start */
    using MCE_SADDR3_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE end address for region 3 register */
    using MCE_EADDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address end */
    using MCE_EADDR3_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE region 4 configuration register */
    using MCE_REGCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region enable */
    using MCE_REGCR4_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Region x is disabled. Access control of primary region (privileged or unprivileged, no encryption) applies to any access between this region start and end addresses. (value: 0)
     *          - B_0x1: Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. (value: 1)
     */
        /** @brief Region x is disabled. Access control of primary region (privileged or unprivileged, no encryption) applies to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR4_BREN_B_0x0 = 0;
        /** @brief Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR4_BREN_B_0x1 = 1;

    /** @brief Context ID */
    using MCE_REGCR4_CTXID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. (value: 0)
     *          - B_0x1: If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. (value: 1)
     *          - B_0x2: If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. (value: 2)
     */
        /** @brief If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. */
    constexpr std::uint32_t MCE_REGCR4_CTXID_B_0x0 = 0;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR4_CTXID_B_0x1 = 1;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR4_CTXID_B_0x2 = 2;

    /** @brief Encrypted region */
    using MCE_REGCR4_ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effects (value: 0)
     *          - B_0x1: Stream cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the stream cipher, when CCEN bit is set in MCE_CCzCFGR (where CTXID=z). (value: 1)
     *          - B_0x2: Block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the SCA resistant block cipher. If CTXID=0 and MKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. (value: 2)
     *          - B_0x3: Fast block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the fast block cipher. If CTXID=0 and FMKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. (value: 3)
     */
        /** @brief No effects */
    constexpr std::uint32_t MCE_REGCR4_ENC_B_0x0 = 0;
        /** @brief Stream cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the stream cipher, when CCEN bit is set in MCE_CCzCFGR (where CTXID=z). */
    constexpr std::uint32_t MCE_REGCR4_ENC_B_0x1 = 1;
        /** @brief Block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the SCA resistant block cipher. If CTXID=0 and MKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. */
    constexpr std::uint32_t MCE_REGCR4_ENC_B_0x2 = 2;
        /** @brief Fast block cipher - All allowed read (resp. write) requests are decrypted (resp. encrypted) using the fast block cipher. If CTXID=0 and FMKVALID=0 bypass mode is selected instead. If CTXID=z and CCEN bit is cleared in MCE_CCzCFGR bypass mode is also selected. */
    constexpr std::uint32_t MCE_REGCR4_ENC_B_0x3 = 3;

    /** @brief MCE start address for region 4 register */
    using MCE_SADDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address start */
    using MCE_SADDR4_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE end address for region 4 register */
    using MCE_EADDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address end */
    using MCE_EADDR4_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief .MCE master key 0 */
    using MCE_MKEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 0 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 1 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 2 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 3 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 4 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 5 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 6 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 7 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 8 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 9 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 10 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 11 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 12 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 13 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 14 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 15 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 16 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 17 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 18 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 19 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 20 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 21 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 22 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 23 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 24 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 25 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 26 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 27 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 28 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 29 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 30 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 31 (i = 31 to 0) */
    using MCE_MKEYR0_MKEY31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief .MCE master key 1 */
    using MCE_MKEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 32 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 33 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 34 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 35 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 36 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 37 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 38 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 39 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 40 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 41 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 42 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 43 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 44 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 45 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 46 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 47 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 48 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 49 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 50 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 51 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 52 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 53 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 54 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 55 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 56 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 57 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 58 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 59 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 60 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 61 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 62 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 63 (i = 31 to 0) */
    using MCE_MKEYR1_MKEY63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief .MCE master key 2 */
    using MCE_MKEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 64 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 65 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 66 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 67 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 68 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 69 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 70 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 71 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 72 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 73 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 74 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 75 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 76 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 77 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 78 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 79 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 80 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 81 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 82 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 83 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 84 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 85 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 86 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 87 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 88 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 89 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 90 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 91 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 92 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 93 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 94 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 95 (i = 31 to 0) */
    using MCE_MKEYR2_MKEY95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief .MCE master key 3 */
    using MCE_MKEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 96 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 97 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 98 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 99 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 100 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 101 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 102 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 103 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 104 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 105 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 106 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 107 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 108 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 109 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 110 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 111 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 112 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 113 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 114 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 115 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 116 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 117 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 118 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 119 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 120 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 121 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 122 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 123 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 124 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 125 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 126 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 127 (i = 31 to 0) */
    using MCE_MKEYR3_MKEY127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief .MCE master key 4 */
    using MCE_MKEYR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 128 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 129 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 130 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 131 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 132 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 133 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 134 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 135 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 136 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 137 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 138 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 139 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 140 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 141 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 142 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 143 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 144 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 145 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 146 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 147 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 148 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 149 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 150 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 151 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 152 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 153 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 154 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 155 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 156 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 157 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 158 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 159 (i = 31 to 0) */
    using MCE_MKEYR4_MKEY159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief .MCE master key 5 */
    using MCE_MKEYR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 160 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 161 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 162 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 163 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 164 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 165 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 166 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 167 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 168 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 169 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 170 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 171 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 172 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 173 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 174 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 175 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 176 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY176 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 177 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY177 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 178 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY178 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 179 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY179 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 180 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 181 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY181 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 182 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY182 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 183 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY183 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 184 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY184 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 185 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY185 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 186 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY186 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 187 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY187 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 188 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY188 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 189 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY189 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 190 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY190 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 191 (i = 31 to 0) */
    using MCE_MKEYR5_MKEY191 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief .MCE master key 6 */
    using MCE_MKEYR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 192 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY192 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 193 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY193 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 194 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY194 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 195 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY195 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 196 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY196 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 197 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY197 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 198 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY198 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 199 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY199 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 200 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY200 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 201 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY201 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 202 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY202 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 203 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY203 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 204 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY204 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 205 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY205 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 206 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY206 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 207 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY207 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 208 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY208 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 209 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY209 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 210 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY210 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 211 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY211 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 212 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY212 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 213 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY213 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 214 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY214 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 215 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY215 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 216 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY216 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 217 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY217 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 218 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY218 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 219 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY219 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 220 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY220 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 221 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY221 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 222 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY222 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 223 (i = 31 to 0) */
    using MCE_MKEYR6_MKEY223 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief .MCE master key 7 */
    using MCE_MKEYR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 224 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY224 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 225 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY225 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 226 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY226 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 227 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY227 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 228 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY228 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 229 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY229 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 230 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY230 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 231 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY231 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 232 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY232 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 233 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY233 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 234 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY234 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 235 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY235 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 236 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY236 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 237 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY237 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 238 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY238 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 239 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY239 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 240 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY240 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 241 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY241 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 242 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY242 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 243 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY243 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 244 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY244 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 245 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY245 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 246 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY246 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 247 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY247 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 248 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY248 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 249 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY249 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 250 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY250 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 251 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY251 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 252 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY252 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 253 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY253 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 254 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY254 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 255 (i = 31 to 0) */
    using MCE_MKEYR7_MKEY255 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 0 */
    using MCE_FMKEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 0 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 1 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 2 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 3 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 4 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 5 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 6 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 7 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 8 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 9 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 10 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 11 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 12 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 13 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 14 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 15 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 16 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 17 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 18 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 19 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 20 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 21 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 22 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 23 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 24 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 25 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 26 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 27 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 28 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 29 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 30 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 31 (i = 31 to 0) */
    using MCE_FMKEYR0_FMKEY31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 1 */
    using MCE_FMKEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 32 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 33 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 34 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 35 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 36 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 37 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 38 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 39 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 40 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 41 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 42 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 43 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 44 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 45 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 46 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 47 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 48 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 49 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 50 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 51 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 52 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 53 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 54 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 55 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 56 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 57 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 58 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 59 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 60 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 61 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 62 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 63 (i = 31 to 0) */
    using MCE_FMKEYR1_FMKEY63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 2 */
    using MCE_FMKEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 64 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 65 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 66 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 67 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 68 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 69 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 70 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 71 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 72 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 73 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 74 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 75 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 76 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 77 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 78 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 79 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 80 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 81 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 82 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 83 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 84 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 85 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 86 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 87 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 88 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 89 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 90 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 91 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 92 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 93 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 94 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 95 (i = 31 to 0) */
    using MCE_FMKEYR2_FMKEY95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 3 */
    using MCE_FMKEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 96 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 97 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 98 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 99 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 100 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 101 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 102 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 103 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 104 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 105 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 106 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 107 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 108 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 109 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 110 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 111 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 112 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 113 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 114 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 115 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 116 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 117 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 118 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 119 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 120 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 121 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 122 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 123 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 124 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 125 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 126 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 127 (i = 31 to 0) */
    using MCE_FMKEYR3_FMKEY127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 4 */
    using MCE_FMKEYR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 128 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 129 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 130 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 131 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 132 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 133 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 134 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 135 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 136 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 137 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 138 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 139 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 140 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 141 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 142 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 143 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 144 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 145 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 146 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 147 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 148 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 149 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 150 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 151 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 152 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 153 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 154 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 155 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 156 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 157 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 158 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 159 (i = 31 to 0) */
    using MCE_FMKEYR4_FMKEY159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 5 */
    using MCE_FMKEYR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 160 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 161 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 162 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 163 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 164 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 165 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 166 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 167 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 168 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 169 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 170 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 171 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 172 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 173 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 174 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 175 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 176 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY176 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 177 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY177 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 178 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY178 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 179 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY179 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 180 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 181 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY181 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 182 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY182 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 183 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY183 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 184 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY184 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 185 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY185 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 186 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY186 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 187 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY187 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 188 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY188 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 189 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY189 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 190 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY190 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 191 (i = 31 to 0) */
    using MCE_FMKEYR5_FMKEY191 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 6 */
    using MCE_FMKEYR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 192 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY192 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 193 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY193 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 194 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY194 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 195 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY195 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 196 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY196 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 197 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY197 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 198 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY198 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 199 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY199 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 200 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY200 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 201 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY201 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 202 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY202 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 203 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY203 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 204 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY204 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 205 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY205 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 206 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY206 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 207 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY207 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 208 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY208 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 209 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY209 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 210 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY210 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 211 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY211 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 212 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY212 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 213 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY213 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 214 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY214 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 215 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY215 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 216 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY216 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 217 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY217 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 218 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY218 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 219 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY219 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 220 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY220 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 221 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY221 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 222 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY222 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 223 (i = 31 to 0) */
    using MCE_FMKEYR6_FMKEY223 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 7 */
    using MCE_FMKEYR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x23C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 224 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY224 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 225 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY225 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 226 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY226 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 227 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY227 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 228 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY228 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 229 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY229 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 230 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY230 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 231 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY231 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 232 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY232 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 233 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY233 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 234 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY234 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 235 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY235 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 236 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY236 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 237 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY237 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 238 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY238 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 239 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY239 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 240 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY240 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 241 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY241 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 242 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY242 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 243 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY243 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 244 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY244 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 245 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY245 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 246 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY246 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 247 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY247 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 248 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY248 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 249 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY249 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 250 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY250 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 251 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY251 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 252 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY252 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 253 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY253 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 254 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY254 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 255 (i = 31 to 0) */
    using MCE_FMKEYR7_FMKEY255 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 configuration register */
    using MCE_CC1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cipher context enable */
    using MCE_CC1CFGR_CCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If an enabled region selects CTXID=z bypass mode is selected by MCE (value: 0)
     *          - B_0x1: If an enabled region selects CTXID=z with ENC=01 MCE selects with the stream cipher the information stored in MCE_CCzCFGR, MCE_CCzNR and MCE_CCzKEYR. If the enabled region selects ENC=10 or 11 instead MCE selects with the block cipher the key information stored in MCE_CCzKEYR. When CCEN is set and MODE[1:0] bits do not allow the configuration written in ENC[1:0] bits (see MODE bitfield) reads return zero and writes are ignored. (value: 1)
     */
        /** @brief If an enabled region selects CTXID=z bypass mode is selected by MCE */
    constexpr std::uint32_t MCE_CC1CFGR_CCEN_B_0x0 = 0;
        /** @brief If an enabled region selects CTXID=z with ENC=01 MCE selects with the stream cipher the information stored in MCE_CCzCFGR, MCE_CCzNR and MCE_CCzKEYR. If the enabled region selects ENC=10 or 11 instead MCE selects with the block cipher the key information stored in MCE_CCzKEYR. When CCEN is set and MODE[1:0] bits do not allow the configuration written in ENC[1:0] bits (see MODE bitfield) reads return zero and writes are ignored. */
    constexpr std::uint32_t MCE_CC1CFGR_CCEN_B_0x1 = 1;

    /** @brief Cipher context lock */
    using MCE_CC1CFGR_CCLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to MCE_CCzCFGR and MCE_CCzNR registers are allowed (value: 0)
     *          - B_0x1: Writes to MCE_CCzCFGR and MCE_CCzNR registers are ignored until next MCE reset. (value: 1)
     */
        /** @brief Writes to MCE_CCzCFGR and MCE_CCzNR registers are allowed */
    constexpr std::uint32_t MCE_CC1CFGR_CCLOCK_B_0x0 = 0;
        /** @brief Writes to MCE_CCzCFGR and MCE_CCzNR registers are ignored until next MCE reset. */
    constexpr std::uint32_t MCE_CC1CFGR_CCLOCK_B_0x1 = 1;

    /** @brief Key lock */
    using MCE_CC1CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to MCE_CCzKEYR registers are allowed (value: 0)
     *          - B_0x1: Writes to MCE_CCzKEYR registers are ignored until next MCE reset. KEYCRC bitfield value does not change. (value: 1)
     */
        /** @brief Writes to MCE_CCzKEYR registers are allowed */
    constexpr std::uint32_t MCE_CC1CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to MCE_CCzKEYR registers are ignored until next MCE reset. KEYCRC bitfield value does not change. */
    constexpr std::uint32_t MCE_CC1CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief Authorized cipher mode */
    using MCE_CC1CFGR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Block cipher is allowed with this cipher context (value: 2)
     *          - B_0x3: Fast block cipher is allowed with this cipher context (value: 3)
     */
        /** @brief Block cipher is allowed with this cipher context */
    constexpr std::uint32_t MCE_CC1CFGR_MODE_B_0x2 = 2;
        /** @brief Fast block cipher is allowed with this cipher context */
    constexpr std::uint32_t MCE_CC1CFGR_MODE_B_0x3 = 3;

    /** @brief Key CRC */
    using MCE_CC1CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version */
    using MCE_CC1CFGR_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 nonce register 0 */
    using MCE_CC1NR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stream cipher nonce, bits [31:0] */
    using MCE_CC1NR0_SCNONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 nonce register 1 */
    using MCE_CC1NR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stream cipher nonce, bits [63:32] */
    using MCE_CC1NR1_SCNONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 key register 0 */
    using MCE_CC1KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [31:0] */
    using MCE_CC1KEYR0_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 key register 1 */
    using MCE_CC1KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [63:32] */
    using MCE_CC1KEYR1_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 key register 2 */
    using MCE_CC1KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [95:64] */
    using MCE_CC1KEYR2_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 key register 3 */
    using MCE_CC1KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x258, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [127:96] */
    using MCE_CC1KEYR3_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 configuration register */
    using MCE_CC2CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cipher context enable */
    using MCE_CC2CFGR_CCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If an enabled region selects CTXID=z bypass mode is selected by MCE (value: 0)
     *          - B_0x1: If an enabled region selects CTXID=z with ENC=01 MCE selects with the stream cipher the information stored in MCE_CCzCFGR, MCE_CCzNR and MCE_CCzKEYR. If the enabled region selects ENC=10 or 11 instead MCE selects with the block cipher the key information stored in MCE_CCzKEYR. When CCEN is set and MODE[1:0] bits do not allow the configuration written in ENC[1:0] bits (see MODE bitfield) reads return zero and writes are ignored. (value: 1)
     */
        /** @brief If an enabled region selects CTXID=z bypass mode is selected by MCE */
    constexpr std::uint32_t MCE_CC2CFGR_CCEN_B_0x0 = 0;
        /** @brief If an enabled region selects CTXID=z with ENC=01 MCE selects with the stream cipher the information stored in MCE_CCzCFGR, MCE_CCzNR and MCE_CCzKEYR. If the enabled region selects ENC=10 or 11 instead MCE selects with the block cipher the key information stored in MCE_CCzKEYR. When CCEN is set and MODE[1:0] bits do not allow the configuration written in ENC[1:0] bits (see MODE bitfield) reads return zero and writes are ignored. */
    constexpr std::uint32_t MCE_CC2CFGR_CCEN_B_0x1 = 1;

    /** @brief Cipher context lock */
    using MCE_CC2CFGR_CCLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to MCE_CCzCFGR and MCE_CCzNR registers are allowed (value: 0)
     *          - B_0x1: Writes to MCE_CCzCFGR and MCE_CCzNR registers are ignored until next MCE reset. (value: 1)
     */
        /** @brief Writes to MCE_CCzCFGR and MCE_CCzNR registers are allowed */
    constexpr std::uint32_t MCE_CC2CFGR_CCLOCK_B_0x0 = 0;
        /** @brief Writes to MCE_CCzCFGR and MCE_CCzNR registers are ignored until next MCE reset. */
    constexpr std::uint32_t MCE_CC2CFGR_CCLOCK_B_0x1 = 1;

    /** @brief Key lock */
    using MCE_CC2CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to MCE_CCzKEYR registers are allowed (value: 0)
     *          - B_0x1: Writes to MCE_CCzKEYR registers are ignored until next MCE reset. KEYCRC bitfield value does not change. (value: 1)
     */
        /** @brief Writes to MCE_CCzKEYR registers are allowed */
    constexpr std::uint32_t MCE_CC2CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to MCE_CCzKEYR registers are ignored until next MCE reset. KEYCRC bitfield value does not change. */
    constexpr std::uint32_t MCE_CC2CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief Authorized cipher mode */
    using MCE_CC2CFGR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Block cipher is allowed with this cipher context (value: 2)
     *          - B_0x3: Fast block cipher is allowed with this cipher context (value: 3)
     */
        /** @brief Block cipher is allowed with this cipher context */
    constexpr std::uint32_t MCE_CC2CFGR_MODE_B_0x2 = 2;
        /** @brief Fast block cipher is allowed with this cipher context */
    constexpr std::uint32_t MCE_CC2CFGR_MODE_B_0x3 = 3;

    /** @brief Key CRC */
    using MCE_CC2CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version */
    using MCE_CC2CFGR_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 nonce register 0 */
    using MCE_CC2NR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x274, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stream cipher nonce, bits [31:0] */
    using MCE_CC2NR0_SCNONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 nonce register 1 */
    using MCE_CC2NR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x278, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stream cipher nonce, bits [63:32] */
    using MCE_CC2NR1_SCNONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 key register 0 */
    using MCE_CC2KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x27C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [31:0] */
    using MCE_CC2KEYR0_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 key register 1 */
    using MCE_CC2KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [63:32] */
    using MCE_CC2KEYR1_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 key register 2 */
    using MCE_CC2KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [95:64] */
    using MCE_CC2KEYR2_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 key register 3 */
    using MCE_CC2KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [127:96] */
    using MCE_CC2KEYR3_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
