/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G0C1_AES_HPP
#define EMBEDDED_PP_STM32G0C1_AES_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Advanced Encryption Standard */
namespace STM32G0C1::AES {

    /** @brief AES control register */
    using AES_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES enable This bit enables/disables the AES peripheral: At any moment, clearing then setting the bit re-initializes the AES peripheral. This bit is automatically cleared by hardware upon the completion of the key preparation (Mode 2) and upon the completion of GCM/GMAC/CCM initial phase. */
    using AES_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t AES_CR_EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t AES_CR_EN_B_0x1 = 1;

    /** @brief Data type selection This bitfield defines the format of data written in the AES_DINR register or read from the AES_DOUTR register, through selecting the mode of data swapping: For more details, refer to . Attempts to write the bitfield are ignored when the EN bit of the AES_CR register is set before the write access and it is not cleared by that write access. */
    using AES_CR_DATATYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (value: 0)
     *          - B_0x1: Half-word (16-bit) (value: 1)
     *          - B_0x2: Byte (8-bit) (value: 2)
     *          - B_0x3: Bit (value: 3)
     */
        /** @brief None */
    constexpr std::uint32_t AES_CR_DATATYPE_B_0x0 = 0;
        /** @brief Half-word (16-bit) */
    constexpr std::uint32_t AES_CR_DATATYPE_B_0x1 = 1;
        /** @brief Byte (8-bit) */
    constexpr std::uint32_t AES_CR_DATATYPE_B_0x2 = 2;
        /** @brief Bit */
    constexpr std::uint32_t AES_CR_DATATYPE_B_0x3 = 3;

    /** @brief AES operating mode This bitfield selects the AES operating mode: Attempts to write the bitfield are ignored when the EN bit of the AES_CR register is set before the write access and it is not cleared by that write access. Any attempt to selecting Mode 4 while either ECB or CBC chaining mode is not selected, defaults to effective selection of Mode 3. It is not possible to select a Mode 3 following a Mode 4. */
    using AES_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Mode 1: encryption (value: 0)
     *          - B_0x1: Mode 2: key derivation (or key preparation for ECB/CBC decryption) (value: 1)
     *          - B_0x2: Mode 3: decryption (value: 2)
     *          - B_0x3: Mode 4: key derivation then single decryption (value: 3)
     */
        /** @brief Mode 1: encryption */
    constexpr std::uint32_t AES_CR_MODE_B_0x0 = 0;
        /** @brief Mode 2: key derivation (or key preparation for ECB/CBC decryption) */
    constexpr std::uint32_t AES_CR_MODE_B_0x1 = 1;
        /** @brief Mode 3: decryption */
    constexpr std::uint32_t AES_CR_MODE_B_0x2 = 2;
        /** @brief Mode 4: key derivation then single decryption */
    constexpr std::uint32_t AES_CR_MODE_B_0x3 = 3;

    /** @brief Chaining mode selection, bit [2] Refer to the bits [5:6] of the register for the description of the CHMOD[2:0] bitfield CHMOD[1:0]: Chaining mode selection, bits [1:0] This bitfield, together with the bit CHMOD[2] forming CHMOD[2:0], selects the AES chaining mode: others: Reserved Attempts to write the bitfield are ignored when the EN bit of the AES_CR register is set before the write access and it is not cleared by that write access. */
    using AES_CR_CHMOD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Electronic codebook (ECB) (value: 0)
     *          - B_0x1: Cipher-Block Chaining (CBC) (value: 1)
     *          - B_0x2: Counter Mode (CTR) (value: 2)
     *          - B_0x3: Galois Counter Mode (GCM) and Galois Message Authentication Code (GMAC) (value: 3)
     */
        /** @brief Electronic codebook (ECB) */
    constexpr std::uint32_t AES_CR_CHMOD1_B_0x0 = 0;
        /** @brief Cipher-Block Chaining (CBC) */
    constexpr std::uint32_t AES_CR_CHMOD1_B_0x1 = 1;
        /** @brief Counter Mode (CTR) */
    constexpr std::uint32_t AES_CR_CHMOD1_B_0x2 = 2;
        /** @brief Galois Counter Mode (GCM) and Galois Message Authentication Code (GMAC) */
    constexpr std::uint32_t AES_CR_CHMOD1_B_0x3 = 3;

    /** @brief Computation complete flag clear Upon written to 1, this bit clears the computation complete flag (CCF) in the AES_SR register: Reading the flag always returns zero. */
    using AES_CR_CCFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear CCF (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AES_CR_CCFC_B_0x0 = 0;
        /** @brief Clear CCF */
    constexpr std::uint32_t AES_CR_CCFC_B_0x1 = 1;

    /** @brief Error flag clear Upon written to 1, this bit clears the RDERR and WRERR error flags in the AES_SR register: Reading the flag always returns zero. */
    using AES_CR_ERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear RDERR and WRERR flags (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t AES_CR_ERRC_B_0x0 = 0;
        /** @brief Clear RDERR and WRERR flags */
    constexpr std::uint32_t AES_CR_ERRC_B_0x1 = 1;

    /** @brief CCF interrupt enable This bit enables or disables (masks) the AES interrupt generation when CCF (computation complete flag) is set: */
    using AES_CR_CCFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (mask) (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable (mask) */
    constexpr std::uint32_t AES_CR_CCFIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t AES_CR_CCFIE_B_0x1 = 1;

    /** @brief Error interrupt enable This bit enables or disables (masks) the AES interrupt generation when RDERR and/or WRERR is set: */
    using AES_CR_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (mask) (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable (mask) */
    constexpr std::uint32_t AES_CR_ERRIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t AES_CR_ERRIE_B_0x1 = 1;

    /** @brief DMA input enable This bit enables/disables data transferring with DMA, in the input phase: When the bit is set, DMA requests are automatically generated by AES during the input data phase. This feature is only effective when Mode 1 or Mode 3 is selected through the MODE[1:0] bitfield. It is not effective for Mode 2 (key derivation). Usage of DMA with Mode 4 (single decryption) is not recommended. */
    using AES_CR_DMAINEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t AES_CR_DMAINEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t AES_CR_DMAINEN_B_0x1 = 1;

    /** @brief DMA output enable This bit enables/disables data transferring with DMA, in the output phase: When the bit is set, DMA requests are automatically generated by AES during the output data phase. This feature is only effective when Mode 1 or Mode 3 is selected through the MODE[1:0] bitfield. It is not effective for Mode 2 (key derivation). Usage of DMA with Mode 4 (single decryption) is not recommended. */
    using AES_CR_DMAOUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t AES_CR_DMAOUTEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t AES_CR_DMAOUTEN_B_0x1 = 1;

    /** @brief GCM or CCM phase selection This bitfield selects the phase of GCM, GMAC or CCM algorithm: The bitfield has no effect if other than GCM, GMAC or CCM algorithms are selected (through the ALGOMODE bitfield). */
    using AES_CR_GCMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Init phase (value: 0)
     *          - B_0x1: Header phase (value: 1)
     *          - B_0x2: Payload phase (value: 2)
     *          - B_0x3: Final phase (value: 3)
     */
        /** @brief Init phase */
    constexpr std::uint32_t AES_CR_GCMPH_B_0x0 = 0;
        /** @brief Header phase */
    constexpr std::uint32_t AES_CR_GCMPH_B_0x1 = 1;
        /** @brief Payload phase */
    constexpr std::uint32_t AES_CR_GCMPH_B_0x2 = 2;
        /** @brief Final phase */
    constexpr std::uint32_t AES_CR_GCMPH_B_0x3 = 3;

    /** @brief Chaining mode selection, bit [2] Refer to the bits [5:6] of the register for the description of the CHMOD[2:0] bitfield CHMOD[1:0]: Chaining mode selection, bits [1:0] This bitfield, together with the bit CHMOD[2] forming CHMOD[2:0], selects the AES chaining mode: others: Reserved Attempts to write the bitfield are ignored when the EN bit of the AES_CR register is set before the write access and it is not cleared by that write access. */
    using AES_CR_CHMOD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Electronic codebook (ECB) (value: 0)
     *          - B_0x1: Cipher-Block Chaining (CBC) (value: 1)
     */
        /** @brief Electronic codebook (ECB) */
    constexpr std::uint32_t AES_CR_CHMOD2_B_0x0 = 0;
        /** @brief Cipher-Block Chaining (CBC) */
    constexpr std::uint32_t AES_CR_CHMOD2_B_0x1 = 1;

    /** @brief Key size selection This bitfield defines the length of the key used in the AES cryptographic core, in bits: Attempts to write the bit are ignored when the EN bit of the AES_CR register is set before the write access and it is not cleared by that write access. */
    using AES_CR_KEYSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 128 (value: 0)
     *          - B_0x1: 256 (value: 1)
     */
        /** @brief 128 */
    constexpr std::uint32_t AES_CR_KEYSIZE_B_0x0 = 0;
        /** @brief 256 */
    constexpr std::uint32_t AES_CR_KEYSIZE_B_0x1 = 1;

    /** @brief Number of padding bytes in last block The bitfield sets the number of padding bytes in last block of payload: ... */
    using AES_CR_NPBLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All bytes are valid (no padding) (value: 0)
     *          - B_0x1: Padding for one least-significant byte of last block (value: 1)
     *          - B_0xF: Padding for 15 least-significant bytes of last block (value: 15)
     */
        /** @brief All bytes are valid (no padding) */
    constexpr std::uint32_t AES_CR_NPBLB_B_0x0 = 0;
        /** @brief Padding for one least-significant byte of last block */
    constexpr std::uint32_t AES_CR_NPBLB_B_0x1 = 1;
        /** @brief Padding for 15 least-significant bytes of last block */
    constexpr std::uint32_t AES_CR_NPBLB_B_0xF = 15;

    /** @brief AES status register */
    using AES_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Computation completed flag This flag indicates whether the computation is completed: The flag is set by hardware upon the completion of the computation. It is cleared by software, upon setting the CCFC bit of the AES_CR register. Upon the flag setting, an interrupt is generated if enabled through the CCFIE bit of the AES_CR register. The flag is significant only when the DMAOUTEN bit is 0. It may stay high when DMA_EN is 1. */
    using AES_SR_CCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not completed (value: 0)
     *          - B_0x1: Completed (value: 1)
     */
        /** @brief Not completed */
    constexpr std::uint32_t AES_SR_CCF_B_0x0 = 0;
        /** @brief Completed */
    constexpr std::uint32_t AES_SR_CCF_B_0x1 = 1;

    /** @brief Read error flag This flag indicates the detection of an unexpected read operation from the AES_DOUTR register (during computation or data input phase): The flag is set by hardware. It is cleared by software upon setting the ERRC bit of the AES_CR register. Upon the flag setting, an interrupt is generated if enabled through the ERRIE bit of the AES_CR register. The flag setting has no impact on the AES operation. Unexpected read returns zero. */
    using AES_SR_RDERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not detected (value: 0)
     *          - B_0x1: Detected (value: 1)
     */
        /** @brief Not detected */
    constexpr std::uint32_t AES_SR_RDERR_B_0x0 = 0;
        /** @brief Detected */
    constexpr std::uint32_t AES_SR_RDERR_B_0x1 = 1;

    /** @brief Write error This flag indicates the detection of an unexpected write operation to the AES_DINR register (during computation or data output phase): The flag is set by hardware. It is cleared by software upon setting the ERRC bit of the AES_CR register. Upon the flag setting, an interrupt is generated if enabled through the ERRIE bit of the AES_CR register. The flag setting has no impact on the AES operation. Unexpected write is ignored. */
    using AES_SR_WRERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not detected (value: 0)
     *          - B_0x1: Detected (value: 1)
     */
        /** @brief Not detected */
    constexpr std::uint32_t AES_SR_WRERR_B_0x0 = 0;
        /** @brief Detected */
    constexpr std::uint32_t AES_SR_WRERR_B_0x1 = 1;

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

    /** @brief AES data input register */
    using AES_DINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data word A four-fold sequential write to this bitfield during the input phase results in writing a complete 128-bit block of input data to the AES peripheral. From the first to the fourth write, the corresponding data weights are [127:96], [95:64], [63:32], and [31:0]. Upon each write, the data from the 32-bit input buffer are handled by the data swap block according to the DATATYPE[1:0] bitfield, then written into the AES core 128-bit input buffer. The data signification of the input data block depends on the AES operating mode: - Mode 1 (encryption): plaintext - Mode 2 (key derivation): the bitfield is not used (AES_KEYRx registers used for input) - Mode 3 (decryption) and Mode 4 (key derivation then single decryption): ciphertext The data swap operation is described in page499. */
    using AES_DINR_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES data output register */
    using AES_DOUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output data word This read-only bitfield fetches a 32-bit output buffer. A four-fold sequential read of this bitfield, upon the computation completion (CCF set), virtually reads a complete 128-bit block of output data from the AES peripheral. Before reaching the output buffer, the data produced by the AES core are handled by the data swap block according to the DATATYPE[1:0] bitfield. Data weights from the first to the fourth read operation are: [127:96], [95:64], [63:32], and [31:0]. The data signification of the output data block depends on the AES operating mode: - Mode 1 (encryption): ciphertext - Mode 2 (key derivation): the bitfield is not used (AES_KEYRx registers used for output) - Mode 3 (decryption) and Mode 4 (key derivation then single decryption): plaintext The data swap operation is described in page499. */
    using AES_DOUTR_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 0 */
    using AES_KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [31:0] This bitfield contains the bits [31:0] of the AES encryption or decryption key, depending on the operating mode: - In Mode 1 (encryption), Mode 2 (key derivation) and Mode 4 (key derivation then single decryption): the value to write into the bitfield is the encryption key. - In Mode 3 (decryption): the value to write into the bitfield is the encryption key to be derived before being used for decryption. After writing the encryption key into the bitfield, its reading before enabling AES returns the same value. Its reading after enabling AES and after the CCF flag is set returns the decryption key derived from the encryption key. Note: In mode 4 (key derivation then single decryption) the bitfield always contains the encryption key. The AES_KEYRx registers may be written only when KEYSIZE value is correct and when the AES peripheral is disabled (EN bit of the AES_CR register cleared). Note that, if, the key is directly loaded to AES_KEYRx registers (hence writes to key register is ignored and KEIF is set). Refer to for more details. */
    using AES_KEYR0_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 1 */
    using AES_KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [63:32] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using AES_KEYR1_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 2 */
    using AES_KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [95:64] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using AES_KEYR2_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 3 */
    using AES_KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [127:96] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using AES_KEYR3_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES initialization vector register 0 */
    using AES_IVR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [31:0] Refer to for description of the IVI[127:0] bitfield. The initialization vector is only used in chaining modes other than ECB. The AES_IVRx registers may be written only when the AES peripheral is disabled */
    using AES_IVR0_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES initialization vector register 1 */
    using AES_IVR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [63:32] Refer to the AES_IVR0 register for description of the IVI[128:0] bitfield. */
    using AES_IVR1_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES initialization vector register 2 */
    using AES_IVR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [95:64] Refer to the AES_IVR0 register for description of the IVI[128:0] bitfield. */
    using AES_IVR2_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES initialization vector register 3 */
    using AES_IVR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [127:96] Refer to the AES_IVR0 register for description of the IVI[128:0] bitfield. */
    using AES_IVR3_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 4 */
    using AES_KEYR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [159:128] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using AES_KEYR4_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 5 */
    using AES_KEYR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [191:160] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using AES_KEYR5_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 6 */
    using AES_KEYR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [223:192] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using AES_KEYR6_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES key register 7 */
    using AES_KEYR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [255:224] Refer to the AES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using AES_KEYR7_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSP0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers. */
    using AES_SUSP0R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSP1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers. */
    using AES_SUSP1R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSP2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers. */
    using AES_SUSP2R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSP3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers. */
    using AES_SUSP3R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSP4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers. */
    using AES_SUSP4R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSP5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers. */
    using AES_SUSP5R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSP6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers. */
    using AES_SUSP6R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend registers */
    using AES_SUSP7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES suspend Upon suspend operation, this bitfield of every AES_SUSPxR register takes the value of one of internal AES registers. */
    using AES_SUSP7R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
