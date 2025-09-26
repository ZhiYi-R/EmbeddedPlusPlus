/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_MCE1_HPP
#define EMBEDDED_PP_STM32H7S_MCE1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Memory cipher engine */
namespace STM32H7S::MCE1 {

    /** @brief MCE configuration register */
    using MCE_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global lock Lock the configuration of most MCE registers until next reset. This bit is cleared by default and once set it cannot be reset until MCE reset. */
    using MCE_CR_GLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MCE registers are writable (value: 0)
     *          - B_0x1: All writes to MCE registers are ignored, with the exception of MCE_IACR and MCE_IAIER registers. (value: 1)
     */
        /** @brief MCE registers are writable */
    constexpr std::uint32_t MCE_CR_GLOCK_B_0x0 = 0;
        /** @brief All writes to MCE registers are ignored, with the exception of MCE_IACR and MCE_IAIER registers. */
    constexpr std::uint32_t MCE_CR_GLOCK_B_0x1 = 1;

    /** @brief Master keys lock Lock the master key configurations until next reset. This bit is cleared by default and once set it cannot be reset until MCE reset. Effect of this bit depends on the number of master keys. See Section 35.3: MCE implementation for details. */
    using MCE_CR_MKLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to MCE_MKEYRx and MCE_FMKEYRx registers are allowed (value: 0)
     *          - B_0x1: Writes to MCE_MKEYRx and MCE_FMKEYRx registers are ignored until next MCE reset. (value: 1)
     */
        /** @brief Writes to MCE_MKEYRx and MCE_FMKEYRx registers are allowed */
    constexpr std::uint32_t MCE_CR_MKLOCK_B_0x0 = 0;
        /** @brief Writes to MCE_MKEYRx and MCE_FMKEYRx registers are ignored until next MCE reset. */
    constexpr std::uint32_t MCE_CR_MKLOCK_B_0x1 = 1;

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

    /** @brief Fast master key valid This bit is reserved when fast master key is not present in the MCE instance. See Section 35.3: MCE implementation for detail. */
    using MCE_SR_FMKVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A valid key has not been written in MCE_FMKEYRx registers, or a valid unlocked fast master key has been erased by hardware (if bit was set before) (value: 0)
     *          - B_0x1: A valid key has been written in MCE_FMKEYRx registers (write R0 -> R1 -> R2 -> R3 or the reverse) (value: 1)
     */
        /** @brief A valid key has not been written in MCE_FMKEYRx registers, or a valid unlocked fast master key has been erased by hardware (if bit was set before) */
    constexpr std::uint32_t MCE_SR_FMKVALID_B_0x0 = 0;
        /** @brief A valid key has been written in MCE_FMKEYRx registers (write R0 -> R1 -> R2 -> R3 or the reverse) */
    constexpr std::uint32_t MCE_SR_FMKVALID_B_0x1 = 1;

    /** @brief encryption disabled This bit is set by hardware when the encryption feature is not functional. When ENCDIS is set application must reset MCE peripheral to be able to use the encryption feature again. */
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
    /** @brief Configuration access error flag This bit is set when an illegal access to any MCE configuration register is detected. Bit is cleared by setting corresponding bit in MCE_IACR register. No additional details on the error is available. */
    using MCE_IASR_CAEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access error flag This bit is set when an illegal access is detected on the system bus. More details on the error can be found in MCE_IAESR and MCE_IADDR registers. This bit is cleared by setting corresponding bit in MCE_IACR register. */
    using MCE_IASR_IAEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE illegal access clear register */
    using MCE_IACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configuration access error flag clear Set this bit to clear CAEF bit in MCE_IASR register. */
    using MCE_IACR_CAEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access error flag clear Set this bit to clear IAEF bit in MCE_IASR register. Clearing IAEF bit permits to capture new error information in MCE_IAESR and MCE_IADDR registers. Note that clearing this bit does not clear RISAB_IADDR register. */
    using MCE_IACR_IAEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE illegal access interrupt enable register */
    using MCE_IAIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configuration access error interrupt enable */
    using MCE_IAIER_CAEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt generation on configuration access errors is disabled (value: 0)
     *          - B_0x1: Interrupt generation when a configuration access error occurs (CAEF=1) (value: 1)
     */
        /** @brief Interrupt generation on configuration access errors is disabled */
    constexpr std::uint32_t MCE_IAIER_CAEIE_B_0x0 = 0;
        /** @brief Interrupt generation when a configuration access error occurs (CAEF=1) */
    constexpr std::uint32_t MCE_IAIER_CAEIE_B_0x1 = 1;

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

    /** @brief MCE privileged configuration register */
    using MCE_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration */
    using MCE_PRIVCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access are granted to MCE registers (value: 0)
     *          - B_0x1: Only privileged access are granted to MCE registers (value: 1)
     */
        /** @brief Privileged and unprivileged access are granted to MCE registers */
    constexpr std::uint32_t MCE_PRIVCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged access are granted to MCE registers */
    constexpr std::uint32_t MCE_PRIVCFGR_PRIV_B_0x1 = 1;

    /** @brief MCE illegal access error status register */
    using MCE_IAESR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access privilege When IAEF bit is set in MCE_IASR register IAPRIV bit captures the privileged state of the master that issued the illegal access detected on the AXI system bus. */
    using MCE_IAESR_IAPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access was unprivileged. (value: 0)
     *          - B_0x1: Illegal access was privileged. (value: 1)
     */
        /** @brief Illegal access was unprivileged. */
    constexpr std::uint32_t MCE_IAESR_IAPRIV_B_0x0 = 0;
        /** @brief Illegal access was privileged. */
    constexpr std::uint32_t MCE_IAESR_IAPRIV_B_0x1 = 1;

    /** @brief Illegal access read/write When IAEF bit is set in MCE_IASR register IANRW bit captures the access type of the illegal access detected. */
    using MCE_IAESR_IANRW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access was a data read or an instruction fetch. (value: 0)
     *          - B_0x1: Illegal access was a data write. (value: 1)
     */
        /** @brief Illegal access was a data read or an instruction fetch. */
    constexpr std::uint32_t MCE_IAESR_IANRW_B_0x0 = 0;
        /** @brief Illegal access was a data write. */
    constexpr std::uint32_t MCE_IAESR_IANRW_B_0x1 = 1;

    /** @brief MCE illegal address register */
    using MCE_IADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal address When IAEF bit is set in MCE_IASR register IADD bitfield captures the 32-bit bus address of the erroneous access. Additional information can be found in MCE_IAESR register. */
    using MCE_IADDR_IADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE region 1 configuration register */
    using MCE_REGCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region enable BREN cannot be set if BADDRSTART > BADDREND. */
    using MCE_REGCR1_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Region x is disabled. Access control of primary region (any-privilege, no encryption) applies to any access between this region start and end addresses. (value: 0)
     *          - B_0x1: Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. (value: 1)
     */
        /** @brief Region x is disabled. Access control of primary region (any-privilege, no encryption) applies to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR1_BREN_B_0x0 = 0;
        /** @brief Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR1_BREN_B_0x1 = 1;

    /** @brief Context ID This bitfield defines the cryptographic context used by the cipher engine assigned to this region. If ENC=00 bitfield CTXID is ignored. If BREN is set write to this bitfield is ignored. If ENC=01 the key stored in MCE_CC1KEYR is used by the stream cipher. The nonce in MCE_CC1NRx registers and the version in MCE_CC1CR register are also used. If ENC=01 the key stored in MCE_CC2KEYR is used by the stream cipher. The nonce in MCE_CC2NRx registers and the version in MCE_CC2CR register are also used. */
    using MCE_REGCR1_CTXID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. (value: 0)
     *          - B_0x1: If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. (value: 1)
     *          - B_0x2: If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. */
    constexpr std::uint32_t MCE_REGCR1_CTXID_B_0x0 = 0;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR1_CTXID_B_0x1 = 1;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR1_CTXID_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t MCE_REGCR1_CTXID_B_0x3 = 3;

    /** @brief Encrypted region Those bits are taken into account only if BREN is set and if the corresponding encryption feature is available in the MCE instance (see Section 35.3: MCE implementation). Write to those bits is ignored if BREN is set. */
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

    /** @brief Privileged region This bit is taken into account only if BREN is set. */
    using MCE_REGCR1_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t MCE_REGCR1_PRIV_B_0x0 = 0;
        /** @brief Application can access to region x in privileged mode only. */
    constexpr std::uint32_t MCE_REGCR1_PRIV_B_0x1 = 1;

    /** @brief MCE start address for region 1 register */
    using MCE_SADDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address start This bitfield defines the absolute start address of the region x on 4 kBytes boundary (inclusive). BREN cannot be set if BADDRSTART > BADDREND. When MCE determines the region, the first 12 bits (LSB) and the last 4 bits (MSB) in this register are ignored, and when this register is accessed in read the 4 MSB bits and the 12 LSB bits return zeros (reference value in MCE). */
    using MCE_SADDR1_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE end address for region 1 register */
    using MCE_EADDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address end This bitfield defines the absolute end address of the region x on 4 kBytes boundary (inclusive). BREN cannot be set if BADDRSTART > BADDREND. When MCE determines the region, the first 12 bits (LSB) and the last 4 bits (MSB) in this register are ignored, and when this register is accessed in read the 4 MSB bits return zeros and the 12 LSB bits return ones (reference value in MCE). */
    using MCE_EADDR1_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE attribute for region 1 register */
    using MCE_ATTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write enable This bit is taken into account only if BREN is set. */
    using MCE_ATTR1_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to region x are ignored. Reads are allowed. (value: 0)
     *          - B_0x1: Region x can be read and written. Restrictions linked to PRIV bit in MCE_REGCRx apply. (value: 1)
     */
        /** @brief Writes to region x are ignored. Reads are allowed. */
    constexpr std::uint32_t MCE_ATTR1_WREN_B_0x0 = 0;
        /** @brief Region x can be read and written. Restrictions linked to PRIV bit in MCE_REGCRx apply. */
    constexpr std::uint32_t MCE_ATTR1_WREN_B_0x1 = 1;

    /** @brief MCE region 2 configuration register */
    using MCE_REGCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region enable BREN cannot be set if BADDRSTART > BADDREND. */
    using MCE_REGCR2_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Region x is disabled. Access control of primary region (any-privilege, no encryption) applies to any access between this region start and end addresses. (value: 0)
     *          - B_0x1: Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. (value: 1)
     */
        /** @brief Region x is disabled. Access control of primary region (any-privilege, no encryption) applies to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR2_BREN_B_0x0 = 0;
        /** @brief Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR2_BREN_B_0x1 = 1;

    /** @brief Context ID This bitfield defines the cryptographic context used by the cipher engine assigned to this region. If ENC=00 bitfield CTXID is ignored. If BREN is set write to this bitfield is ignored. If ENC=01 the key stored in MCE_CC1KEYR is used by the stream cipher. The nonce in MCE_CC1NRx registers and the version in MCE_CC1CR register are also used. If ENC=01 the key stored in MCE_CC2KEYR is used by the stream cipher. The nonce in MCE_CC2NRx registers and the version in MCE_CC2CR register are also used. */
    using MCE_REGCR2_CTXID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. (value: 0)
     *          - B_0x1: If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. (value: 1)
     *          - B_0x2: If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. */
    constexpr std::uint32_t MCE_REGCR2_CTXID_B_0x0 = 0;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR2_CTXID_B_0x1 = 1;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR2_CTXID_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t MCE_REGCR2_CTXID_B_0x3 = 3;

    /** @brief Encrypted region Those bits are taken into account only if BREN is set and if the corresponding encryption feature is available in the MCE instance (see Section 35.3: MCE implementation). Write to those bits is ignored if BREN is set. */
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

    /** @brief Privileged region This bit is taken into account only if BREN is set. */
    using MCE_REGCR2_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t MCE_REGCR2_PRIV_B_0x0 = 0;
        /** @brief Application can access to region x in privileged mode only. */
    constexpr std::uint32_t MCE_REGCR2_PRIV_B_0x1 = 1;

    /** @brief MCE start address for region 2 register */
    using MCE_SADDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address start This bitfield defines the absolute start address of the region x on 4 kBytes boundary (inclusive). BREN cannot be set if BADDRSTART > BADDREND. When MCE determines the region, the first 12 bits (LSB) and the last 4 bits (MSB) in this register are ignored, and when this register is accessed in read the 4 MSB bits and the 12 LSB bits return zeros (reference value in MCE). */
    using MCE_SADDR2_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE end address for region 2 register */
    using MCE_EADDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address end This bitfield defines the absolute end address of the region x on 4 kBytes boundary (inclusive). BREN cannot be set if BADDRSTART > BADDREND. When MCE determines the region, the first 12 bits (LSB) and the last 4 bits (MSB) in this register are ignored, and when this register is accessed in read the 4 MSB bits return zeros and the 12 LSB bits return ones (reference value in MCE). */
    using MCE_EADDR2_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE attribute for region 2 register */
    using MCE_ATTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write enable This bit is taken into account only if BREN is set. */
    using MCE_ATTR2_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to region x are ignored. Reads are allowed. (value: 0)
     *          - B_0x1: Region x can be read and written. Restrictions linked to PRIV bit in MCE_REGCRx apply. (value: 1)
     */
        /** @brief Writes to region x are ignored. Reads are allowed. */
    constexpr std::uint32_t MCE_ATTR2_WREN_B_0x0 = 0;
        /** @brief Region x can be read and written. Restrictions linked to PRIV bit in MCE_REGCRx apply. */
    constexpr std::uint32_t MCE_ATTR2_WREN_B_0x1 = 1;

    /** @brief MCE region 3 configuration register */
    using MCE_REGCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region enable BREN cannot be set if BADDRSTART > BADDREND. */
    using MCE_REGCR3_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Region x is disabled. Access control of primary region (any-privilege, no encryption) applies to any access between this region start and end addresses. (value: 0)
     *          - B_0x1: Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. (value: 1)
     */
        /** @brief Region x is disabled. Access control of primary region (any-privilege, no encryption) applies to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR3_BREN_B_0x0 = 0;
        /** @brief Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR3_BREN_B_0x1 = 1;

    /** @brief Context ID This bitfield defines the cryptographic context used by the cipher engine assigned to this region. If ENC=00 bitfield CTXID is ignored. If BREN is set write to this bitfield is ignored. If ENC=01 the key stored in MCE_CC1KEYR is used by the stream cipher. The nonce in MCE_CC1NRx registers and the version in MCE_CC1CR register are also used. If ENC=01 the key stored in MCE_CC2KEYR is used by the stream cipher. The nonce in MCE_CC2NRx registers and the version in MCE_CC2CR register are also used. */
    using MCE_REGCR3_CTXID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. (value: 0)
     *          - B_0x1: If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. (value: 1)
     *          - B_0x2: If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. */
    constexpr std::uint32_t MCE_REGCR3_CTXID_B_0x0 = 0;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR3_CTXID_B_0x1 = 1;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR3_CTXID_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t MCE_REGCR3_CTXID_B_0x3 = 3;

    /** @brief Encrypted region Those bits are taken into account only if BREN is set and if the corresponding encryption feature is available in the MCE instance (see Section 35.3: MCE implementation). Write to those bits is ignored if BREN is set. */
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

    /** @brief Privileged region This bit is taken into account only if BREN is set. */
    using MCE_REGCR3_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t MCE_REGCR3_PRIV_B_0x0 = 0;
        /** @brief Application can access to region x in privileged mode only. */
    constexpr std::uint32_t MCE_REGCR3_PRIV_B_0x1 = 1;

    /** @brief MCE start address for region 3 register */
    using MCE_SADDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address start This bitfield defines the absolute start address of the region x on 4 kBytes boundary (inclusive). BREN cannot be set if BADDRSTART > BADDREND. When MCE determines the region, the first 12 bits (LSB) and the last 4 bits (MSB) in this register are ignored, and when this register is accessed in read the 4 MSB bits and the 12 LSB bits return zeros (reference value in MCE). */
    using MCE_SADDR3_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE end address for region 3 register */
    using MCE_EADDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address end This bitfield defines the absolute end address of the region x on 4 kBytes boundary (inclusive). BREN cannot be set if BADDRSTART > BADDREND. When MCE determines the region, the first 12 bits (LSB) and the last 4 bits (MSB) in this register are ignored, and when this register is accessed in read the 4 MSB bits return zeros and the 12 LSB bits return ones (reference value in MCE). */
    using MCE_EADDR3_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE attribute for region 3 register */
    using MCE_ATTR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write enable This bit is taken into account only if BREN is set. */
    using MCE_ATTR3_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to region x are ignored. Reads are allowed. (value: 0)
     *          - B_0x1: Region x can be read and written. Restrictions linked to PRIV bit in MCE_REGCRx apply. (value: 1)
     */
        /** @brief Writes to region x are ignored. Reads are allowed. */
    constexpr std::uint32_t MCE_ATTR3_WREN_B_0x0 = 0;
        /** @brief Region x can be read and written. Restrictions linked to PRIV bit in MCE_REGCRx apply. */
    constexpr std::uint32_t MCE_ATTR3_WREN_B_0x1 = 1;

    /** @brief MCE region 4 configuration register */
    using MCE_REGCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region enable BREN cannot be set if BADDRSTART > BADDREND. */
    using MCE_REGCR4_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Region x is disabled. Access control of primary region (any-privilege, no encryption) applies to any access between this region start and end addresses. (value: 0)
     *          - B_0x1: Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. (value: 1)
     */
        /** @brief Region x is disabled. Access control of primary region (any-privilege, no encryption) applies to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR4_BREN_B_0x0 = 0;
        /** @brief Region x is enable. Access controls and encryption option defined in this region apply to any access between this region start and end addresses. */
    constexpr std::uint32_t MCE_REGCR4_BREN_B_0x1 = 1;

    /** @brief Context ID This bitfield defines the cryptographic context used by the cipher engine assigned to this region. If ENC=00 bitfield CTXID is ignored. If BREN is set write to this bitfield is ignored. If ENC=01 the key stored in MCE_CC1KEYR is used by the stream cipher. The nonce in MCE_CC1NRx registers and the version in MCE_CC1CR register are also used. If ENC=01 the key stored in MCE_CC2KEYR is used by the stream cipher. The nonce in MCE_CC2NRx registers and the version in MCE_CC2CR register are also used. */
    using MCE_REGCR4_CTXID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. (value: 0)
     *          - B_0x1: If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. (value: 1)
     *          - B_0x2: If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief If ENC=10 (resp. 11) the key stored in MCE_MKEYR (resp. MCE_FMKEYR) registers is used by the block cipher. If ENC=01 bypass mode is selected instead of stream cipher. */
    constexpr std::uint32_t MCE_REGCR4_CTXID_B_0x0 = 0;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC1KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR4_CTXID_B_0x1 = 1;
        /** @brief If ENC=10 or 11 the key stored in MCE_CC2KEYR is used by the block cipher. */
    constexpr std::uint32_t MCE_REGCR4_CTXID_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t MCE_REGCR4_CTXID_B_0x3 = 3;

    /** @brief Encrypted region Those bits are taken into account only if BREN is set and if the corresponding encryption feature is available in the MCE instance (see Section 35.3: MCE implementation). Write to those bits is ignored if BREN is set. */
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

    /** @brief Privileged region This bit is taken into account only if BREN is set. */
    using MCE_REGCR4_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t MCE_REGCR4_PRIV_B_0x0 = 0;
        /** @brief Application can access to region x in privileged mode only. */
    constexpr std::uint32_t MCE_REGCR4_PRIV_B_0x1 = 1;

    /** @brief MCE start address for region 4 register */
    using MCE_SADDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address start This bitfield defines the absolute start address of the region x on 4 kBytes boundary (inclusive). BREN cannot be set if BADDRSTART > BADDREND. When MCE determines the region, the first 12 bits (LSB) and the last 4 bits (MSB) in this register are ignored, and when this register is accessed in read the 4 MSB bits and the 12 LSB bits return zeros (reference value in MCE). */
    using MCE_SADDR4_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE end address for region 4 register */
    using MCE_EADDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region address end This bitfield defines the absolute end address of the region x on 4 kBytes boundary (inclusive). BREN cannot be set if BADDRSTART > BADDREND. When MCE determines the region, the first 12 bits (LSB) and the last 4 bits (MSB) in this register are ignored, and when this register is accessed in read the 4 MSB bits return zeros and the 12 LSB bits return ones (reference value in MCE). */
    using MCE_EADDR4_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE attribute for region 4 register */
    using MCE_ATTR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write enable This bit is taken into account only if BREN is set. */
    using MCE_ATTR4_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to region x are ignored. Reads are allowed. (value: 0)
     *          - B_0x1: Region x can be read and written. Restrictions linked to PRIV bit in MCE_REGCRx apply. (value: 1)
     */
        /** @brief Writes to region x are ignored. Reads are allowed. */
    constexpr std::uint32_t MCE_ATTR4_WREN_B_0x0 = 0;
        /** @brief Region x can be read and written. Restrictions linked to PRIV bit in MCE_REGCRx apply. */
    constexpr std::uint32_t MCE_ATTR4_WREN_B_0x1 = 1;

    /** @brief MCE master key 0 */
    using MCE_MKEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 0 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 1 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 2 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 3 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 4 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 5 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 6 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 7 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 8 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 9 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 10 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 11 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 12 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 13 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 14 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 15 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 16 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 17 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 18 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 19 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 20 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 21 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 22 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 23 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 24 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 25 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 26 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 27 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 28 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 29 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 30 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 31 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR0_MKEY31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE master key 1 */
    using MCE_MKEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 32 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 33 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 34 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 35 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 36 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 37 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 38 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 39 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 40 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 41 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 42 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 43 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 44 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 45 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 46 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 47 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 48 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 49 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 50 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 51 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 52 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 53 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 54 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 55 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 56 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 57 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 58 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 59 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 60 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 61 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 62 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 63 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR1_MKEY63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE master key 2 */
    using MCE_MKEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 64 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 65 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 66 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 67 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 68 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 69 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 70 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 71 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 72 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 73 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 74 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 75 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 76 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 77 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 78 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 79 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 80 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 81 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 82 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 83 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 84 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 85 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 86 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 87 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 88 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 89 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 90 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 91 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 92 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 93 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 94 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 95 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR2_MKEY95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE master key 3 */
    using MCE_MKEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 96 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 97 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 98 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 99 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 100 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 101 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 102 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 103 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 104 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 105 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 106 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 107 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 108 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 109 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 110 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 111 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 112 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 113 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 114 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 115 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 116 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 117 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 118 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 119 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 120 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 121 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 122 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 123 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 124 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 125 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 126 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master key bit 127 This key is used by the MCE block cipher in normal, SCA resistant mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_MKEYR3_MKEY127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 0 */
    using MCE_FMKEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 0 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 1 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 2 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 3 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 4 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 5 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 6 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 7 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 8 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 9 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 10 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 11 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 12 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 13 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 14 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 15 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 16 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 17 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 18 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 19 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 20 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 21 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 22 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 23 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 24 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 25 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 26 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 27 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 28 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 29 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 30 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 31 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR0_FMKEY31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 1 */
    using MCE_FMKEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 32 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 33 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 34 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 35 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 36 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 37 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 38 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 39 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 40 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 41 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 42 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 43 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 44 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 45 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 46 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 47 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 48 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 49 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 50 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 51 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 52 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 53 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 54 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 55 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 56 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 57 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 58 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 59 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 60 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 61 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 62 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 63 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR1_FMKEY63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 2 */
    using MCE_FMKEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 64 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 65 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 66 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 67 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 68 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 69 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 70 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 71 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 72 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 73 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 74 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 75 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 76 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 77 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 78 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 79 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 80 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 81 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 82 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 83 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 84 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 85 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 86 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 87 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 88 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 89 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 90 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 91 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 92 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 93 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 94 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 95 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR2_FMKEY95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE fast master key 3 */
    using MCE_FMKEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 96 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 97 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 98 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 99 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 100 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 101 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 102 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 103 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 104 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 105 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 106 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 107 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 108 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 109 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 110 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 111 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 112 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 113 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 114 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 115 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 116 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 117 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 118 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 119 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 120 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 121 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 122 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 123 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 124 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 125 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 126 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast master key bit 127 This key is used by the MCE block cipher in fast mode, if CTXID=0x0 in MCE_REGCR register. */
    using MCE_FMKEYR3_FMKEY127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 configuration register */
    using MCE_CC1CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cipher context enable */
    using MCE_CC1CFGR_CCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If an enabled region selects CTXID=z bypass mode is selected by MCE (value: 0)
     *          - B_0x1: If an enabled region selects CTXID=z with ENC=01 MCE selects with the stream cipher the information stored in MCE_CCzCFGR, MCE_CCzNR and MCE_CCzKEYR. If the enabled region selects ENC=10 or 11 instead MCE selects with the block cipher the key information stored in MCE_CCzKEYR. (value: 1)
     */
        /** @brief If an enabled region selects CTXID=z bypass mode is selected by MCE */
    constexpr std::uint32_t MCE_CC1CFGR_CCEN_B_0x0 = 0;
        /** @brief If an enabled region selects CTXID=z with ENC=01 MCE selects with the stream cipher the information stored in MCE_CCzCFGR, MCE_CCzNR and MCE_CCzKEYR. If the enabled region selects ENC=10 or 11 instead MCE selects with the block cipher the key information stored in MCE_CCzKEYR. */
    constexpr std::uint32_t MCE_CC1CFGR_CCEN_B_0x1 = 1;

    /** @brief Cipher context lock Note: This bit is set once. If this bit is set, it can only be cleared to 0 if MCE is reset. Setting this bit forces KEYLOCK bit to 1. */
    using MCE_CC1CFGR_CCLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to MCE_CCzCFGR and MCE_CCzNR registers are allowed (value: 0)
     *          - B_0x1: Writes to MCE_CCzCFGR and MCE_CCzNR registers are ignored until next MCE reset. (value: 1)
     */
        /** @brief Writes to MCE_CCzCFGR and MCE_CCzNR registers are allowed */
    constexpr std::uint32_t MCE_CC1CFGR_CCLOCK_B_0x0 = 0;
        /** @brief Writes to MCE_CCzCFGR and MCE_CCzNR registers are ignored until next MCE reset. */
    constexpr std::uint32_t MCE_CC1CFGR_CCLOCK_B_0x1 = 1;

    /** @brief Key lock Note: This bit is set once. If this bit is set, it can only be cleared to 0 if MCE is reset. */
    using MCE_CC1CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to MCE_CCzKEYR registers are allowed (value: 0)
     *          - B_0x1: Writes to MCE_CCzKEYR registers are ignored until next MCE reset. (value: 1)
     */
        /** @brief Writes to MCE_CCzKEYR registers are allowed */
    constexpr std::uint32_t MCE_CC1CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to MCE_CCzKEYR registers are ignored until next MCE reset. */
    constexpr std::uint32_t MCE_CC1CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief Key CRC When KEYLOCK=0, KEYCRC information is automatically computed by hardware while loading the key of this region in this exact sequence: KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). A new KEYCRC computation starts as soon as a new valid sequence is initiated. KEYCRC bitfield reads as zero until a valid sequence is completed (after it return the computed CRC value). When GLOCK=1, KEYCRC bitfield always return the computed CRC value until the next reset. CRC computation is an 8-bit checksum using the standard CRC-8-CCITT algorithm X8 + X2 + X + 1 (according the convention). Note: CRC information is updated, and the key is usable by MCE, only after the last bit of the key has been written. When GLOCK=0 any write to MCE_CCxKEYR registers clears KEYCRC in MCE_CCxCFGR, and makes the cipher context key un-usable (bypass mode is selected instead). To be able to use the key again application must perform this sequence: write to KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). As KEYLOCK=1 all those writes are ignored, so the correct key is used instead. */
    using MCE_CC1CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version This 16-bit bitfield must be correctly initialized before CCEN bit is set. Bitfield usage is defined in Section 35.4.6: MCE stream cipher encryption mode. */
    using MCE_CC1CFGR_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 nonce register 0 */
    using MCE_CC1NR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stream cipher nonce, bits [31:0] This register is used by stream cipher to compute keystream. It must be correctly initialize before CCEN bit is set in MCE_CCzCFGR register. Bitfield usage is defined in Section 35.4.6: MCE stream cipher encryption mode. */
    using MCE_CC1NR0_SCNONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 nonce register 1 */
    using MCE_CC1NR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stream cipher nonce, bits [63:32] Refer to the MCE_CCzNR0 register for description of the SCNONCE[63:0] bitfield. */
    using MCE_CC1NR1_SCNONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 key register 0 */
    using MCE_CC1KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [31:0] This register is used by the block or stream cipher of MCE when CTXID = z in encrypted region configuration register. KEY[127:0] must be correctly initialize before CCEN bit is set in MCE_CCzCFGR register. */
    using MCE_CC1KEYR0_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 key register 1 */
    using MCE_CC1KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [63:32] Refer to the MCE_CCzKEYR0 register for description of the KEY[127:0] bitfield. */
    using MCE_CC1KEYR1_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 key register 2 */
    using MCE_CC1KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [95:64] Refer to the MCE_CCzKEYR0 register for description of the KEY[127:0] bitfield. */
    using MCE_CC1KEYR2_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 1 key register 3 */
    using MCE_CC1KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x258, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [127:96] Refer to the MCE_CCzKEYR0 register for description of the KEY[127:0] bitfield. */
    using MCE_CC1KEYR3_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 configuration register */
    using MCE_CC2CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cipher context enable */
    using MCE_CC2CFGR_CCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If an enabled region selects CTXID=z bypass mode is selected by MCE (value: 0)
     *          - B_0x1: If an enabled region selects CTXID=z with ENC=01 MCE selects with the stream cipher the information stored in MCE_CCzCFGR, MCE_CCzNR and MCE_CCzKEYR. If the enabled region selects ENC=10 or 11 instead MCE selects with the block cipher the key information stored in MCE_CCzKEYR. (value: 1)
     */
        /** @brief If an enabled region selects CTXID=z bypass mode is selected by MCE */
    constexpr std::uint32_t MCE_CC2CFGR_CCEN_B_0x0 = 0;
        /** @brief If an enabled region selects CTXID=z with ENC=01 MCE selects with the stream cipher the information stored in MCE_CCzCFGR, MCE_CCzNR and MCE_CCzKEYR. If the enabled region selects ENC=10 or 11 instead MCE selects with the block cipher the key information stored in MCE_CCzKEYR. */
    constexpr std::uint32_t MCE_CC2CFGR_CCEN_B_0x1 = 1;

    /** @brief Cipher context lock Note: This bit is set once. If this bit is set, it can only be cleared to 0 if MCE is reset. Setting this bit forces KEYLOCK bit to 1. */
    using MCE_CC2CFGR_CCLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to MCE_CCzCFGR and MCE_CCzNR registers are allowed (value: 0)
     *          - B_0x1: Writes to MCE_CCzCFGR and MCE_CCzNR registers are ignored until next MCE reset. (value: 1)
     */
        /** @brief Writes to MCE_CCzCFGR and MCE_CCzNR registers are allowed */
    constexpr std::uint32_t MCE_CC2CFGR_CCLOCK_B_0x0 = 0;
        /** @brief Writes to MCE_CCzCFGR and MCE_CCzNR registers are ignored until next MCE reset. */
    constexpr std::uint32_t MCE_CC2CFGR_CCLOCK_B_0x1 = 1;

    /** @brief Key lock Note: This bit is set once. If this bit is set, it can only be cleared to 0 if MCE is reset. */
    using MCE_CC2CFGR_KEYLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Writes to MCE_CCzKEYR registers are allowed (value: 0)
     *          - B_0x1: Writes to MCE_CCzKEYR registers are ignored until next MCE reset. (value: 1)
     */
        /** @brief Writes to MCE_CCzKEYR registers are allowed */
    constexpr std::uint32_t MCE_CC2CFGR_KEYLOCK_B_0x0 = 0;
        /** @brief Writes to MCE_CCzKEYR registers are ignored until next MCE reset. */
    constexpr std::uint32_t MCE_CC2CFGR_KEYLOCK_B_0x1 = 1;

    /** @brief Key CRC When KEYLOCK=0, KEYCRC information is automatically computed by hardware while loading the key of this region in this exact sequence: KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). A new KEYCRC computation starts as soon as a new valid sequence is initiated. KEYCRC bitfield reads as zero until a valid sequence is completed (after it return the computed CRC value). When GLOCK=1, KEYCRC bitfield always return the computed CRC value until the next reset. CRC computation is an 8-bit checksum using the standard CRC-8-CCITT algorithm X8 + X2 + X + 1 (according the convention). Note: CRC information is updated, and the key is usable by MCE, only after the last bit of the key has been written. When GLOCK=0 any write to MCE_CCxKEYR registers clears KEYCRC in MCE_CCxCFGR, and makes the cipher context key un-usable (bypass mode is selected instead). To be able to use the key again application must perform this sequence: write to KEYR0 then KEYR1 then KEYR2 then finally KEYR3 (all written once). As KEYLOCK=1 all those writes are ignored, so the correct key is used instead. */
    using MCE_CC2CFGR_KEYCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version This 16-bit bitfield must be correctly initialized before CCEN bit is set. Bitfield usage is defined in Section 35.4.6: MCE stream cipher encryption mode. */
    using MCE_CC2CFGR_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 nonce register 0 */
    using MCE_CC2NR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x274, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stream cipher nonce, bits [31:0] This register is used by stream cipher to compute keystream. It must be correctly initialize before CCEN bit is set in MCE_CCzCFGR register. Bitfield usage is defined in Section 35.4.6: MCE stream cipher encryption mode. */
    using MCE_CC2NR0_SCNONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 nonce register 1 */
    using MCE_CC2NR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x278, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stream cipher nonce, bits [63:32] Refer to the MCE_CCzNR0 register for description of the SCNONCE[63:0] bitfield. */
    using MCE_CC2NR1_SCNONCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 key register 0 */
    using MCE_CC2KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x27C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [31:0] This register is used by the block or stream cipher of MCE when CTXID = z in encrypted region configuration register. KEY[127:0] must be correctly initialize before CCEN bit is set in MCE_CCzCFGR register. */
    using MCE_CC2KEYR0_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 key register 1 */
    using MCE_CC2KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [63:32] Refer to the MCE_CCzKEYR0 register for description of the KEY[127:0] bitfield. */
    using MCE_CC2KEYR1_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 key register 2 */
    using MCE_CC2KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [95:64] Refer to the MCE_CCzKEYR0 register for description of the KEY[127:0] bitfield. */
    using MCE_CC2KEYR2_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MCE cipher context 2 key register 3 */
    using MCE_CC2KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cipher key, bits [127:96] Refer to the MCE_CCzKEYR0 register for description of the KEY[127:0] bitfield. */
    using MCE_CC2KEYR3_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
