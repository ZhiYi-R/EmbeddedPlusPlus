/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA62_SAES_HPP
#define EMBEDDED_PP_STM32WBA62_SAES_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SAES register block */
namespace STM32WBA62::SAES {

    /** @brief SAES control register */
    using SAES_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable */
    using SAES_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SAES_CR_EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SAES_CR_EN_B_0x1 = 1;

    /** @brief Data type */
    using SAES_CR_DATATYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No swapping (32-bit data). (value: 0)
     *          - B_0x1: Half-word swapping (16-bit data) (value: 1)
     *          - B_0x2: Byte swapping (8-bit data) (value: 2)
     *          - B_0x3: Bit-level swapping (value: 3)
     */
        /** @brief No swapping (32-bit data). */
    constexpr std::uint32_t SAES_CR_DATATYPE_B_0x0 = 0;
        /** @brief Half-word swapping (16-bit data) */
    constexpr std::uint32_t SAES_CR_DATATYPE_B_0x1 = 1;
        /** @brief Byte swapping (8-bit data) */
    constexpr std::uint32_t SAES_CR_DATATYPE_B_0x2 = 2;
        /** @brief Bit-level swapping */
    constexpr std::uint32_t SAES_CR_DATATYPE_B_0x3 = 3;

    /** @brief Operating mode */
    using SAES_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Encryption (value: 0)
     *          - B_0x1: Key derivation (or key preparation), for ECB/CBC decryption only (value: 1)
     *          - B_0x2: Decryption (value: 2)
     */
        /** @brief Encryption */
    constexpr std::uint32_t SAES_CR_MODE_B_0x0 = 0;
        /** @brief Key derivation (or key preparation), for ECB/CBC decryption only */
    constexpr std::uint32_t SAES_CR_MODE_B_0x1 = 1;
        /** @brief Decryption */
    constexpr std::uint32_t SAES_CR_MODE_B_0x2 = 2;

    /** @brief CHMOD[1:0]: Chaining mode */
    using SAES_CR_CHMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Electronic codebook (ECB) (value: 0)
     *          - B_0x1: Cipher-block chaining (CBC) (value: 1)
     *          - B_0x2: Counter mode (CTR) (value: 2)
     *          - B_0x3: Galois counter mode (GCM) and Galois message authentication code (GMAC) (value: 3)
     */
        /** @brief Electronic codebook (ECB) */
    constexpr std::uint32_t SAES_CR_CHMOD_B_0x0 = 0;
        /** @brief Cipher-block chaining (CBC) */
    constexpr std::uint32_t SAES_CR_CHMOD_B_0x1 = 1;
        /** @brief Counter mode (CTR) */
    constexpr std::uint32_t SAES_CR_CHMOD_B_0x2 = 2;
        /** @brief Galois counter mode (GCM) and Galois message authentication code (GMAC) */
    constexpr std::uint32_t SAES_CR_CHMOD_B_0x3 = 3;

    /** @brief DMA input enable */
    using SAES_CR_DMAINEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SAES_CR_DMAINEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SAES_CR_DMAINEN_B_0x1 = 1;

    /** @brief DMA output enable */
    using SAES_CR_DMAOUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SAES_CR_DMAOUTEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SAES_CR_DMAOUTEN_B_0x1 = 1;

    /** @brief GCM or CCM phase selection */
    using SAES_CR_GCMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Initialization phase (value: 0)
     *          - B_0x1: Header phase (value: 1)
     *          - B_0x2: Payload phase (value: 2)
     *          - B_0x3: Final phase (value: 3)
     */
        /** @brief Initialization phase */
    constexpr std::uint32_t SAES_CR_GCMPH_B_0x0 = 0;
        /** @brief Header phase */
    constexpr std::uint32_t SAES_CR_GCMPH_B_0x1 = 1;
        /** @brief Payload phase */
    constexpr std::uint32_t SAES_CR_GCMPH_B_0x2 = 2;
        /** @brief Final phase */
    constexpr std::uint32_t SAES_CR_GCMPH_B_0x3 = 3;

    /** @brief CHMOD[2] */
    using SAES_CR_CHMOD_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key size selection */
    using SAES_CR_KEYSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 128-bit (value: 0)
     *          - B_0x1: 256-bit (value: 1)
     */
        /** @brief 128-bit */
    constexpr std::uint32_t SAES_CR_KEYSIZE_B_0x0 = 0;
        /** @brief 256-bit */
    constexpr std::uint32_t SAES_CR_KEYSIZE_B_0x1 = 1;

    /** @brief Key protection */
    using SAES_CR_KEYPROT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When KEYVALID is set and KEYSEL[2:0]=0 application can transfer the ownership of the SAES, with its loaded key, to an application running in another security context (such as non-secure, secure). (value: 0)
     *          - B_0x1: When KEYVALID is set, key error flag (KEIF) is set when an access to any registers is detected, this access having a security context (for example, secure, non-secure) that does not match the one of the application that loaded the key. (value: 1)
     */
        /** @brief When KEYVALID is set and KEYSEL[2:0]=0 application can transfer the ownership of the SAES, with its loaded key, to an application running in another security context (such as non-secure, secure). */
    constexpr std::uint32_t SAES_CR_KEYPROT_B_0x0 = 0;
        /** @brief When KEYVALID is set, key error flag (KEIF) is set when an access to any registers is detected, this access having a security context (for example, secure, non-secure) that does not match the one of the application that loaded the key. */
    constexpr std::uint32_t SAES_CR_KEYPROT_B_0x1 = 1;

    /** @brief Number of padding bytes in last block */
    using SAES_CR_NPBLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All bytes are valid (no padding) (value: 0)
     *          - B_0x1: Padding for the last LSB byte (value: 1)
     *          - B_0xF: Padding for the 15 LSB bytes of last block. (value: 15)
     */
        /** @brief All bytes are valid (no padding) */
    constexpr std::uint32_t SAES_CR_NPBLB_B_0x0 = 0;
        /** @brief Padding for the last LSB byte */
    constexpr std::uint32_t SAES_CR_NPBLB_B_0x1 = 1;
        /** @brief Padding for the 15 LSB bytes of last block. */
    constexpr std::uint32_t SAES_CR_NPBLB_B_0xF = 15;

    /** @brief Key mode selection */
    using SAES_CR_KMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal key mode. (value: 0)
     *          - B_0x1: Wrapped key for SAES mode. (value: 1)
     *          - B_0x2: Shared key mode. (value: 2)
     */
        /** @brief Normal key mode. */
    constexpr std::uint32_t SAES_CR_KMOD_B_0x0 = 0;
        /** @brief Wrapped key for SAES mode. */
    constexpr std::uint32_t SAES_CR_KMOD_B_0x1 = 1;
        /** @brief Shared key mode. */
    constexpr std::uint32_t SAES_CR_KMOD_B_0x2 = 2;

    /** @brief Key share identification */
    using SAES_CR_KSHAREID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES peripheral (value: 0)
     */
        /** @brief AES peripheral */
    constexpr std::uint32_t SAES_CR_KSHAREID_B_0x0 = 0;

    /** @brief Key selection */
    using SAES_CR_KEYSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Software key, loaded in key registers SAES_KEYx (value: 0)
     *          - B_0x1: Derived hardware unique key (DHUK) (value: 1)
     *          - B_0x2: Boot hardware key (BHK) (value: 2)
     *          - B_0x4: XOR of DHUK and BHK (value: 4)
     */
        /** @brief Software key, loaded in key registers SAES_KEYx */
    constexpr std::uint32_t SAES_CR_KEYSEL_B_0x0 = 0;
        /** @brief Derived hardware unique key (DHUK) */
    constexpr std::uint32_t SAES_CR_KEYSEL_B_0x1 = 1;
        /** @brief Boot hardware key (BHK) */
    constexpr std::uint32_t SAES_CR_KEYSEL_B_0x2 = 2;
        /** @brief XOR of DHUK and BHK */
    constexpr std::uint32_t SAES_CR_KEYSEL_B_0x4 = 4;

    /** @brief SAES peripheral software reset */
    using SAES_CR_IPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES status register */
    using SAES_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read error flag */
    using SAES_SR_RDERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error (value: 0)
     *          - B_0x1: Unexpected read to SAES_DOUTR register occurred during computation or data input phase. (value: 1)
     */
        /** @brief No error */
    constexpr std::uint32_t SAES_SR_RDERRF_B_0x0 = 0;
        /** @brief Unexpected read to SAES_DOUTR register occurred during computation or data input phase. */
    constexpr std::uint32_t SAES_SR_RDERRF_B_0x1 = 1;

    /** @brief Write error flag */
    using SAES_SR_WRERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error (value: 0)
     *          - B_0x1: Unexpected write to SAES_DINR register occurred during computation or data output phase. (value: 1)
     */
        /** @brief No error */
    constexpr std::uint32_t SAES_SR_WRERRF_B_0x0 = 0;
        /** @brief Unexpected write to SAES_DINR register occurred during computation or data output phase. */
    constexpr std::uint32_t SAES_SR_WRERRF_B_0x1 = 1;

    /** @brief Busy */
    using SAES_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle (value: 0)
     *          - B_0x1: Busy (value: 1)
     */
        /** @brief Idle */
    constexpr std::uint32_t SAES_SR_BUSY_B_0x0 = 0;
        /** @brief Busy */
    constexpr std::uint32_t SAES_SR_BUSY_B_0x1 = 1;

    /** @brief Key valid flag */
    using SAES_SR_KEYVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Key not valid (value: 0)
     *          - B_0x1: Key valid (value: 1)
     */
        /** @brief Key not valid */
    constexpr std::uint32_t SAES_SR_KEYVALID_B_0x0 = 0;
        /** @brief Key valid */
    constexpr std::uint32_t SAES_SR_KEYVALID_B_0x1 = 1;

    /** @brief SAES data input register */
    using SAES_DINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data input */
    using SAES_DINR_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES data output register */
    using SAES_DOUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data output */
    using SAES_DOUTR_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 0 */
    using SAES_KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [31:0] */
    using SAES_KEYR0_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 1 */
    using SAES_KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [63:32] */
    using SAES_KEYR1_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 2 */
    using SAES_KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [95:64] */
    using SAES_KEYR2_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 3 */
    using SAES_KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [127:96] */
    using SAES_KEYR3_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES initialization vector register 0 */
    using SAES_IVR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [31:0] */
    using SAES_IVR0_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES initialization vector register 1 */
    using SAES_IVR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [63:32] */
    using SAES_IVR1_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES initialization vector register 2 */
    using SAES_IVR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [95:64] */
    using SAES_IVR2_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES initialization vector register 3 */
    using SAES_IVR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [127:96] */
    using SAES_IVR3_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 4 */
    using SAES_KEYR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [159:128] */
    using SAES_KEYR4_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 5 */
    using SAES_KEYR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [191:160] */
    using SAES_KEYR5_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 6 */
    using SAES_KEYR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [223:192] */
    using SAES_KEYR6_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 7 */
    using SAES_KEYR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [255:224] */
    using SAES_KEYR7_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSPR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using SAES_SUSPR0_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using SAES_SUSPR1_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using SAES_SUSPR2_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using SAES_SUSPR3_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using SAES_SUSPR4_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSPR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using SAES_SUSPR5_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSPR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using SAES_SUSPR6_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSPR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using SAES_SUSPR7_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES interrupt enable register */
    using SAES_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Computation complete flag interrupt enable */
    using SAES_IER_CCFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (masked) (value: 0)
     *          - B_0x1: Enabled (not masked) (value: 1)
     */
        /** @brief Disabled (masked) */
    constexpr std::uint32_t SAES_IER_CCFIE_B_0x0 = 0;
        /** @brief Enabled (not masked) */
    constexpr std::uint32_t SAES_IER_CCFIE_B_0x1 = 1;

    /** @brief Read or write error interrupt enable */
    using SAES_IER_RWEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (masked) (value: 0)
     *          - B_0x1: Enabled (not masked) (value: 1)
     */
        /** @brief Disabled (masked) */
    constexpr std::uint32_t SAES_IER_RWEIE_B_0x0 = 0;
        /** @brief Enabled (not masked) */
    constexpr std::uint32_t SAES_IER_RWEIE_B_0x1 = 1;

    /** @brief Key error interrupt enable */
    using SAES_IER_KEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (masked) (value: 0)
     *          - B_0x1: Enabled (not masked) (value: 1)
     */
        /** @brief Disabled (masked) */
    constexpr std::uint32_t SAES_IER_KEIE_B_0x0 = 0;
        /** @brief Enabled (not masked) */
    constexpr std::uint32_t SAES_IER_KEIE_B_0x1 = 1;

    /** @brief RNG error interrupt enable */
    using SAES_IER_RNGEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (masked) (value: 0)
     *          - B_0x1: Enabled (not masked) (value: 1)
     */
        /** @brief Disabled (masked) */
    constexpr std::uint32_t SAES_IER_RNGEIE_B_0x0 = 0;
        /** @brief Enabled (not masked) */
    constexpr std::uint32_t SAES_IER_RNGEIE_B_0x1 = 1;

    /** @brief SAES interrupt status register */
    using SAES_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Computation complete flag */
    using SAES_ISR_CCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not completed (value: 0)
     *          - B_0x1: Completed (value: 1)
     */
        /** @brief Not completed */
    constexpr std::uint32_t SAES_ISR_CCF_B_0x0 = 0;
        /** @brief Completed */
    constexpr std::uint32_t SAES_ISR_CCF_B_0x1 = 1;

    /** @brief Read or write error interrupt flag */
    using SAES_ISR_RWEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No read or write error detected (value: 0)
     *          - B_0x1: Read or write error detected (value: 1)
     */
        /** @brief No read or write error detected */
    constexpr std::uint32_t SAES_ISR_RWEIF_B_0x0 = 0;
        /** @brief Read or write error detected */
    constexpr std::uint32_t SAES_ISR_RWEIF_B_0x1 = 1;

    /** @brief Key error interrupt flag */
    using SAES_ISR_KEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No key error detected (value: 0)
     *          - B_0x1: Key information failed to load into key registers or the key register use is forbidden (value: 1)
     */
        /** @brief No key error detected */
    constexpr std::uint32_t SAES_ISR_KEIF_B_0x0 = 0;
        /** @brief Key information failed to load into key registers or the key register use is forbidden */
    constexpr std::uint32_t SAES_ISR_KEIF_B_0x1 = 1;

    /** @brief RNG error interrupt flag */
    using SAES_ISR_RNGEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RNG bus is functional (value: 0)
     *          - B_0x1: Error detected on RNG bus interface (random seed fetching error) (value: 1)
     */
        /** @brief RNG bus is functional */
    constexpr std::uint32_t SAES_ISR_RNGEIF_B_0x0 = 0;
        /** @brief Error detected on RNG bus interface (random seed fetching error) */
    constexpr std::uint32_t SAES_ISR_RNGEIF_B_0x1 = 1;

    /** @brief SAES interrupt clear register */
    using SAES_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Computation complete flag clear */
    using SAES_ICR_CCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read or write error interrupt flag clear */
    using SAES_ICR_RWEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key error interrupt flag clear */
    using SAES_ICR_KEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG error interrupt flag clear */
    using SAES_ICR_RNGEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
