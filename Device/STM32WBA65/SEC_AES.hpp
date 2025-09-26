/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA65_SEC_AES_HPP
#define EMBEDDED_PP_STM32WBA65_SEC_AES_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief AES register block */
namespace STM32WBA65::SEC_AES {

    /** @brief AES control register */
    using AES_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable */
    using AES_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t AES_CR_EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t AES_CR_EN_B_0x1 = 1;

    /** @brief Data type */
    using AES_CR_DATATYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No swapping (32-bit data). (value: 0)
     *          - B_0x1: Half-word swapping (16-bit data) (value: 1)
     *          - B_0x2: Byte swapping (8-bit data) (value: 2)
     *          - B_0x3: Bit-level swapping (value: 3)
     */
        /** @brief No swapping (32-bit data). */
    constexpr std::uint32_t AES_CR_DATATYPE_B_0x0 = 0;
        /** @brief Half-word swapping (16-bit data) */
    constexpr std::uint32_t AES_CR_DATATYPE_B_0x1 = 1;
        /** @brief Byte swapping (8-bit data) */
    constexpr std::uint32_t AES_CR_DATATYPE_B_0x2 = 2;
        /** @brief Bit-level swapping */
    constexpr std::uint32_t AES_CR_DATATYPE_B_0x3 = 3;

    /** @brief Operating mode */
    using AES_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Encryption (value: 0)
     *          - B_0x1: Key derivation (or key preparation), for ECB/CBC decryption only (value: 1)
     *          - B_0x2: Decryption (value: 2)
     */
        /** @brief Encryption */
    constexpr std::uint32_t AES_CR_MODE_B_0x0 = 0;
        /** @brief Key derivation (or key preparation), for ECB/CBC decryption only */
    constexpr std::uint32_t AES_CR_MODE_B_0x1 = 1;
        /** @brief Decryption */
    constexpr std::uint32_t AES_CR_MODE_B_0x2 = 2;

    /** @brief CHMOD[1:0]: Chaining mode */
    using AES_CR_CHMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Electronic codebook (ECB) (value: 0)
     *          - B_0x1: Cipher-block chaining (CBC) (value: 1)
     *          - B_0x2: Counter mode (CTR) (value: 2)
     *          - B_0x3: Galois counter mode (GCM) and Galois message authentication code (GMAC) (value: 3)
     */
        /** @brief Electronic codebook (ECB) */
    constexpr std::uint32_t AES_CR_CHMOD_B_0x0 = 0;
        /** @brief Cipher-block chaining (CBC) */
    constexpr std::uint32_t AES_CR_CHMOD_B_0x1 = 1;
        /** @brief Counter mode (CTR) */
    constexpr std::uint32_t AES_CR_CHMOD_B_0x2 = 2;
        /** @brief Galois counter mode (GCM) and Galois message authentication code (GMAC) */
    constexpr std::uint32_t AES_CR_CHMOD_B_0x3 = 3;

    /** @brief DMA input enable */
    using AES_CR_DMAINEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t AES_CR_DMAINEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t AES_CR_DMAINEN_B_0x1 = 1;

    /** @brief DMA output enable */
    using AES_CR_DMAOUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t AES_CR_DMAOUTEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t AES_CR_DMAOUTEN_B_0x1 = 1;

    /** @brief GCM or CCM phase selection */
    using AES_CR_GCMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Initialization phase (value: 0)
     *          - B_0x1: Header phase (value: 1)
     *          - B_0x2: Payload phase (value: 2)
     *          - B_0x3: Final phase (value: 3)
     */
        /** @brief Initialization phase */
    constexpr std::uint32_t AES_CR_GCMPH_B_0x0 = 0;
        /** @brief Header phase */
    constexpr std::uint32_t AES_CR_GCMPH_B_0x1 = 1;
        /** @brief Payload phase */
    constexpr std::uint32_t AES_CR_GCMPH_B_0x2 = 2;
        /** @brief Final phase */
    constexpr std::uint32_t AES_CR_GCMPH_B_0x3 = 3;

    /** @brief CHMOD[2] */
    using AES_CR_CHMOD_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key size selection */
    using AES_CR_KEYSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 128-bit (value: 0)
     *          - B_0x1: 256-bit (value: 1)
     */
        /** @brief 128-bit */
    constexpr std::uint32_t AES_CR_KEYSIZE_B_0x0 = 0;
        /** @brief 256-bit */
    constexpr std::uint32_t AES_CR_KEYSIZE_B_0x1 = 1;

    /** @brief Number of padding bytes in last block */
    using AES_CR_NPBLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All bytes are valid (no padding) (value: 0)
     *          - B_0x1: Padding for the last LSB byte (value: 1)
     *          - B_0xF: Padding for the 15 LSB bytes of last block. (value: 15)
     */
        /** @brief All bytes are valid (no padding) */
    constexpr std::uint32_t AES_CR_NPBLB_B_0x0 = 0;
        /** @brief Padding for the last LSB byte */
    constexpr std::uint32_t AES_CR_NPBLB_B_0x1 = 1;
        /** @brief Padding for the 15 LSB bytes of last block. */
    constexpr std::uint32_t AES_CR_NPBLB_B_0xF = 15;

    /** @brief Key mode selection */
    using AES_CR_KMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal key mode. (value: 0)
     *          - B_0x2: Shared key mode. (value: 2)
     */
        /** @brief Normal key mode. */
    constexpr std::uint32_t AES_CR_KMOD_B_0x0 = 0;
        /** @brief Shared key mode. */
    constexpr std::uint32_t AES_CR_KMOD_B_0x2 = 2;

    /** @brief AES peripheral software reset */
    using AES_CR_IPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES status register */
    using AES_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read error flag */
    using AES_SR_RDERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error (value: 0)
     *          - B_0x1: Unexpected read to AES_DOUTR register occurred during computation or data input phase. (value: 1)
     */
        /** @brief No error */
    constexpr std::uint32_t AES_SR_RDERRF_B_0x0 = 0;
        /** @brief Unexpected read to AES_DOUTR register occurred during computation or data input phase. */
    constexpr std::uint32_t AES_SR_RDERRF_B_0x1 = 1;

    /** @brief Write error flag */
    using AES_SR_WRERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error (value: 0)
     *          - B_0x1: Unexpected write to AES_DINR register occurred during computation or data output phase. (value: 1)
     */
        /** @brief No error */
    constexpr std::uint32_t AES_SR_WRERRF_B_0x0 = 0;
        /** @brief Unexpected write to AES_DINR register occurred during computation or data output phase. */
    constexpr std::uint32_t AES_SR_WRERRF_B_0x1 = 1;

    /** @brief Busy */
    using AES_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle (value: 0)
     *          - B_0x1: Busy (value: 1)
     */
        /** @brief Idle */
    constexpr std::uint32_t AES_SR_BUSY_B_0x0 = 0;
        /** @brief Busy */
    constexpr std::uint32_t AES_SR_BUSY_B_0x1 = 1;

    /** @brief Key valid flag */
    using AES_SR_KEYVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Key not valid (value: 0)
     *          - B_0x1: Key valid (value: 1)
     */
        /** @brief Key not valid */
    constexpr std::uint32_t AES_SR_KEYVALID_B_0x0 = 0;
        /** @brief Key valid */
    constexpr std::uint32_t AES_SR_KEYVALID_B_0x1 = 1;

    /** @brief AES data input register */
    using AES_DINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data input */
    using AES_DINR_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES data output register */
    using AES_DOUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data output */
    using AES_DOUTR_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 0 */
    using AES_KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [31:0] */
    using AES_KEYR0_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 1 */
    using AES_KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [63:32] */
    using AES_KEYR1_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 2 */
    using AES_KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [95:64] */
    using AES_KEYR2_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 3 */
    using AES_KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [127:96] */
    using AES_KEYR3_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES initialization vector register 0 */
    using AES_IVR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [31:0] */
    using AES_IVR0_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES initialization vector register 1 */
    using AES_IVR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [63:32] */
    using AES_IVR1_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES initialization vector register 2 */
    using AES_IVR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [95:64] */
    using AES_IVR2_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES initialization vector register 3 */
    using AES_IVR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [127:96] */
    using AES_IVR3_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 4 */
    using AES_KEYR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [159:128] */
    using AES_KEYR4_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 5 */
    using AES_KEYR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [191:160] */
    using AES_KEYR5_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 6 */
    using AES_KEYR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [223:192] */
    using AES_KEYR6_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 7 */
    using AES_KEYR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [255:224] */
    using AES_KEYR7_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSPR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using AES_SUSPR0_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using AES_SUSPR1_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using AES_SUSPR2_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using AES_SUSPR3_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using AES_SUSPR4_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSPR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using AES_SUSPR5_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSPR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using AES_SUSPR6_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSPR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend data */
    using AES_SUSPR7_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES interrupt enable register */
    using AES_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Computation complete flag interrupt enable */
    using AES_IER_CCFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (masked) (value: 0)
     *          - B_0x1: Enabled (not masked) (value: 1)
     */
        /** @brief Disabled (masked) */
    constexpr std::uint32_t AES_IER_CCFIE_B_0x0 = 0;
        /** @brief Enabled (not masked) */
    constexpr std::uint32_t AES_IER_CCFIE_B_0x1 = 1;

    /** @brief Read or write error interrupt enable */
    using AES_IER_RWEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (masked) (value: 0)
     *          - B_0x1: Enabled (not masked) (value: 1)
     */
        /** @brief Disabled (masked) */
    constexpr std::uint32_t AES_IER_RWEIE_B_0x0 = 0;
        /** @brief Enabled (not masked) */
    constexpr std::uint32_t AES_IER_RWEIE_B_0x1 = 1;

    /** @brief Key error interrupt enable */
    using AES_IER_KEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (masked) (value: 0)
     *          - B_0x1: Enabled (not masked) (value: 1)
     */
        /** @brief Disabled (masked) */
    constexpr std::uint32_t AES_IER_KEIE_B_0x0 = 0;
        /** @brief Enabled (not masked) */
    constexpr std::uint32_t AES_IER_KEIE_B_0x1 = 1;

    /** @brief AES interrupt status register */
    using AES_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Computation complete flag */
    using AES_ISR_CCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not completed (value: 0)
     *          - B_0x1: Completed (value: 1)
     */
        /** @brief Not completed */
    constexpr std::uint32_t AES_ISR_CCF_B_0x0 = 0;
        /** @brief Completed */
    constexpr std::uint32_t AES_ISR_CCF_B_0x1 = 1;

    /** @brief Read or write error interrupt flag */
    using AES_ISR_RWEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No read or write error detected (value: 0)
     *          - B_0x1: Read or write error detected (value: 1)
     */
        /** @brief No read or write error detected */
    constexpr std::uint32_t AES_ISR_RWEIF_B_0x0 = 0;
        /** @brief Read or write error detected */
    constexpr std::uint32_t AES_ISR_RWEIF_B_0x1 = 1;

    /** @brief Key error interrupt flag */
    using AES_ISR_KEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No key error detected (value: 0)
     *          - B_0x1: Key information failed to load into key registers (value: 1)
     */
        /** @brief No key error detected */
    constexpr std::uint32_t AES_ISR_KEIF_B_0x0 = 0;
        /** @brief Key information failed to load into key registers */
    constexpr std::uint32_t AES_ISR_KEIF_B_0x1 = 1;

    /** @brief AES interrupt clear register */
    using AES_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Computation complete flag clear */
    using AES_ICR_CCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read or write error interrupt flag clear */
    using AES_ICR_RWEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key error interrupt flag clear */
    using AES_ICR_KEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
