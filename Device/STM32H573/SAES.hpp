/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H573_SAES_HPP
#define EMBEDDED_PP_STM32H573_SAES_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Secure advanced encryption standard hardware accelerator */
namespace STM32H573::SAES {

    /** @brief SAES control register */
    using SAES_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES enable This bit enables/disables the SAES peripheral: At any moment, clearing then setting the bit re-initializes the SAES peripheral. This bit is automatically cleared by hardware upon the completion of the key preparation (Mode 2) and upon the completion of GCM/GMAC/CCM initial phase. The bit cannot be set as long as KEYVALID = 0 nor along with the following settings: KMOD = 01 + CHMOD = 011 and KMOD = 01 + CHMOD = 010 + MODE = 00. Note: With KMOD[1:0] other than 00, use the IPRST bit rather than the bit EN. */
    using SAES_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SAES_CR_EN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SAES_CR_EN_B_0x1 = 1;

    /** @brief Data type selection This bitfield defines the format of data written in the SAES_DINR register or read from the SAES_DOUTR register, through selecting the mode of data swapping: For more details, refer to . Attempts to write the bitfield are ignored when the BUSY flag of SAES_SR register is set, as well as when the EN bit of the SAES_CR register is set before the write access and it is not cleared by that write access. */
    using SAES_CR_DATATYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (value: 0)
     *          - B_0x1: Half-word (16-bit) (value: 1)
     *          - B_0x2: Byte (8-bit) (value: 2)
     *          - B_0x3: Bit (value: 3)
     */
        /** @brief None */
    constexpr std::uint32_t SAES_CR_DATATYPE_B_0x0 = 0;
        /** @brief Half-word (16-bit) */
    constexpr std::uint32_t SAES_CR_DATATYPE_B_0x1 = 1;
        /** @brief Byte (8-bit) */
    constexpr std::uint32_t SAES_CR_DATATYPE_B_0x2 = 2;
        /** @brief Bit */
    constexpr std::uint32_t SAES_CR_DATATYPE_B_0x3 = 3;

    /** @brief SAES operating mode This bitfield selects the SAES operating mode: Attempts to write the bitfield are ignored when the BUSY flag of SAES_SR register is set, as well as when the EN bit of the SAES_CR register is set before the write access and it is not cleared by that write access. */
    using SAES_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Mode 1: encryption (value: 0)
     *          - B_0x1: Mode 2: key derivation (or key preparation for ECB/CBC decryption) (value: 1)
     *          - B_0x2: Mode 3: decryption (value: 2)
     */
        /** @brief Mode 1: encryption */
    constexpr std::uint32_t SAES_CR_MODE_B_0x0 = 0;
        /** @brief Mode 2: key derivation (or key preparation for ECB/CBC decryption) */
    constexpr std::uint32_t SAES_CR_MODE_B_0x1 = 1;
        /** @brief Mode 3: decryption */
    constexpr std::uint32_t SAES_CR_MODE_B_0x2 = 2;

    /** @brief Chaining mode selection This bitfield selects the AES chaining mode: others: Reserved Attempts to write the bitfield are ignored when the BUSY flag of SAES_SR register is set, as well as when the EN bit of the SAES_CR register is set before the write access and it is not cleared by that write access. */
    using SAES_CR_CHMOD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Electronic codebook (ECB) (value: 0)
     *          - B_0x1: Cipher-block chaining (CBC) (value: 1)
     *          - B_0x2: Counter mode (CTR) (value: 2)
     *          - B_0x3: Galois counter mode (GCM) and Galois message authentication code (GMAC) (value: 3)
     */
        /** @brief Electronic codebook (ECB) */
    constexpr std::uint32_t SAES_CR_CHMOD1_B_0x0 = 0;
        /** @brief Cipher-block chaining (CBC) */
    constexpr std::uint32_t SAES_CR_CHMOD1_B_0x1 = 1;
        /** @brief Counter mode (CTR) */
    constexpr std::uint32_t SAES_CR_CHMOD1_B_0x2 = 2;
        /** @brief Galois counter mode (GCM) and Galois message authentication code (GMAC) */
    constexpr std::uint32_t SAES_CR_CHMOD1_B_0x3 = 3;

    /** @brief DMA input enable This bit enables/disables data transferring with DMA, in the input phase: When the bit is set, DMA requests are automatically generated by SAES during the input data phase. This feature is only effective when Mode 1 or Mode 3 is selected through the MODE[1:0] bitfield. It is not effective for Mode 2 (key derivation). */
    using SAES_CR_DMAINEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SAES_CR_DMAINEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SAES_CR_DMAINEN_B_0x1 = 1;

    /** @brief DMA output enable This bit enables/disables data transferring with DMA, in the output phase: When the bit is set, DMA requests are automatically generated by SAES during the output data phase. This feature is only effective when Mode 1 or Mode 3 is selected through the MODE[1:0] bitfield. It is not effective for Mode 2 (key derivation). */
    using SAES_CR_DMAOUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t SAES_CR_DMAOUTEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t SAES_CR_DMAOUTEN_B_0x1 = 1;

    /** @brief GCM or CCM phase selection This bitfield selects the phase of GCM, GMAC or CCM algorithm: The bitfield has no effect if other than GCM, GMAC or CCM algorithms are selected (through the ALGOMODE bitfield). */
    using SAES_CR_GCMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Init phase (value: 0)
     *          - B_0x1: Header phase (value: 1)
     *          - B_0x2: Payload phase (value: 2)
     *          - B_0x3: Final phase (value: 3)
     */
        /** @brief Init phase */
    constexpr std::uint32_t SAES_CR_GCMPH_B_0x0 = 0;
        /** @brief Header phase */
    constexpr std::uint32_t SAES_CR_GCMPH_B_0x1 = 1;
        /** @brief Payload phase */
    constexpr std::uint32_t SAES_CR_GCMPH_B_0x2 = 2;
        /** @brief Final phase */
    constexpr std::uint32_t SAES_CR_GCMPH_B_0x3 = 3;

    /** @brief Chaining mode selection This bitfield selects the AES chaining mode: others: Reserved Attempts to write the bitfield are ignored when the BUSY flag of SAES_SR register is set, as well as when the EN bit of the SAES_CR register is set before the write access and it is not cleared by that write access. */
    using SAES_CR_CHMOD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Electronic codebook (ECB) (value: 0)
     *          - B_0x1: Cipher-block chaining (CBC) (value: 1)
     */
        /** @brief Electronic codebook (ECB) */
    constexpr std::uint32_t SAES_CR_CHMOD2_B_0x0 = 0;
        /** @brief Cipher-block chaining (CBC) */
    constexpr std::uint32_t SAES_CR_CHMOD2_B_0x1 = 1;

    /** @brief Key size selection This bitfield defines the length of the key used in the SAES cryptographic core, in bits: When KMOD[1:0]=01 or 10 KEYSIZE also defines the length of the key to encrypt or decrypt. Attempts to write the bit are ignored when the BUSY flag of SAES_SR register is set, as well as when the EN bit of the SAES_CR register is set before the write access and it is not cleared by that write access. */
    using SAES_CR_KEYSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 128 (value: 0)
     *          - B_0x1: 256 (value: 1)
     */
        /** @brief 128 */
    constexpr std::uint32_t SAES_CR_KEYSIZE_B_0x0 = 0;
        /** @brief 256 */
    constexpr std::uint32_t SAES_CR_KEYSIZE_B_0x1 = 1;

    /** @brief Key protection When set, hardware-based key protection is enabled. Attempts to write the bit are ignored when the BUSY flag of SAES_SR register is set, as well as when the EN bit of the SAES_CR register is set before the write access and it is not cleared by that write access. */
    using SAES_CR_KEYPROT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When KEYVALID is set and KEYSEL=0 application can transfer the ownership of the SAES, with its loaded key, to an application running in another security context (such as non-secure, secure). (value: 0)
     *          - B_0x1: When KEYVALID is set, key error flag (KEIF) is set when an access to any registers is detected, this access having a security context (for example, secure, non-secure) that does not match the one of the application that loaded the key. (value: 1)
     */
        /** @brief When KEYVALID is set and KEYSEL=0 application can transfer the ownership of the SAES, with its loaded key, to an application running in another security context (such as non-secure, secure). */
    constexpr std::uint32_t SAES_CR_KEYPROT_B_0x0 = 0;
        /** @brief When KEYVALID is set, key error flag (KEIF) is set when an access to any registers is detected, this access having a security context (for example, secure, non-secure) that does not match the one of the application that loaded the key. */
    constexpr std::uint32_t SAES_CR_KEYPROT_B_0x1 = 1;

    /** @brief Number of padding bytes in last block The bitfield sets the number of padding bytes in last block of payload: ... */
    using SAES_CR_NPBLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All bytes are valid (no padding) (value: 0)
     *          - B_0x1: Padding for one least-significant byte of last block (value: 1)
     *          - B_0xF: Padding for 15 least-significant bytes of last block (value: 15)
     */
        /** @brief All bytes are valid (no padding) */
    constexpr std::uint32_t SAES_CR_NPBLB_B_0x0 = 0;
        /** @brief Padding for one least-significant byte of last block */
    constexpr std::uint32_t SAES_CR_NPBLB_B_0x1 = 1;
        /** @brief Padding for 15 least-significant bytes of last block */
    constexpr std::uint32_t SAES_CR_NPBLB_B_0xF = 15;

    /** @brief Key mode selection The bitfield defines how the SAES key can be used by the application: Others: Reserved With normal key selection, the key registers are freely usable, no specific usage or protection applies to SAES_DIN and SAES_DOUT registers. With wrapped key selection, the key loaded in key registers can only be used to encrypt or decrypt AES keys. Hence, when a decryption is selected in Wrapped-key mode read-as-zero SAES_DOUT register is automatically loaded into SAES key registers after a successful decryption process. With shared key selection, after a successful decryption process, SAES key registers are shared with the peripheral described in KSHAREID(1:0] bitfield. This sharing is valid only while KMOD[1:0]=10 and KEYVALID = 1. When a decryption is selected, read-as-zero SAES_DOUT register is automatically loaded into SAES key registers after a successful decryption process. With KMOD[1:0] other than zero, any attempt to configure the SAES peripheral for use by an application belonging to a different security domain (secure or non-secure) results in automatic key erasure and setting of the KEIF flag.\nAttempts to write the bitfield are ignored when the BUSY flag of SAES_SR register is set, as well as when the EN bit of the SAES_CR register is set before the write access and it is not cleared by that write access. */
    using SAES_CR_KMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal key (value: 0)
     *          - B_0x1: Wrapped key (value: 1)
     *          - B_0x2: Shared key (value: 2)
     */
        /** @brief Normal key */
    constexpr std::uint32_t SAES_CR_KMOD_B_0x0 = 0;
        /** @brief Wrapped key */
    constexpr std::uint32_t SAES_CR_KMOD_B_0x1 = 1;
        /** @brief Shared key */
    constexpr std::uint32_t SAES_CR_KMOD_B_0x2 = 2;

    /** @brief Key share identification This bitfield defines, at the end of a decryption process with KMOD[1:0]=10 (shared key), which target can read the SAES key registers using a dedicated hardware bus. Others: Reserved Attempts to write the bitfield are ignored when the BUSY flag of SAES_SR register is set, as well as when the EN bit of the SAES_CR register is set before the write access and it is not cleared by that write access. */
    using SAES_CR_KSHAREID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AES peripheral (value: 0)
     */
        /** @brief AES peripheral */
    constexpr std::uint32_t SAES_CR_KSHAREID_B_0x0 = 0;

    /** @brief Key selection The bitfield defines the source of the key information to use in the AES cryptographic core. Others: Reserved (if used, unfreeze SAES with IPRST) When KEYSEL is different from zero, selected key value is available in key registers when BUSY bit is cleared and KEYVALID is set in the SAES_SR register. Otherwise, the key error flag KEIF is set. Repeated writing of KEYSEL[2:0] with the same non-zero value only triggers the loading of DHUK or BHK if KEYVALID = 0. When the application software changes the key selection by writing the KEYSEL[2:0] bitfield, the key registers are immediately erased and the KEYVALID flag cleared. At the end of the decryption process, if KMOD[1:0] is other than zero, KEYSEL[2:0] is cleared. With the bitfield value other than zero and KEYVALID set, the application cannot transfer the ownership of SAES with a loaded key to an application running in another security context (such as secure, non-secure). More specifically, when security of an access to any register does not match the information recorded by SAES, the KEIF flag is set. Attempts to write the bitfield are ignored when the BUSY flag of SAES_SR register is set, as well as when the EN bit of the SAES_CR register is set before the write access and it is not cleared by that write access. */
    using SAES_CR_KEYSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Software key, loaded in key registers SAES_KEYx (value: 0)
     *          - B_0x1: Derived hardware unique key (DHUK) (value: 1)
     *          - B_0x2: Boot hardware key (BHK) (value: 2)
     *          - B_0x4: XOR of DHUK and BHK (value: 4)
     *          - B_0x7: Test mode key (256-bit hardware constant 0xA5A5...A5A5) (value: 7)
     */
        /** @brief Software key, loaded in key registers SAES_KEYx */
    constexpr std::uint32_t SAES_CR_KEYSEL_B_0x0 = 0;
        /** @brief Derived hardware unique key (DHUK) */
    constexpr std::uint32_t SAES_CR_KEYSEL_B_0x1 = 1;
        /** @brief Boot hardware key (BHK) */
    constexpr std::uint32_t SAES_CR_KEYSEL_B_0x2 = 2;
        /** @brief XOR of DHUK and BHK */
    constexpr std::uint32_t SAES_CR_KEYSEL_B_0x4 = 4;
        /** @brief Test mode key (256-bit hardware constant 0xA5A5...A5A5) */
    constexpr std::uint32_t SAES_CR_KEYSEL_B_0x7 = 7;

    /** @brief SAES peripheral software reset Setting the bit resets the SAES peripheral, putting all registers to their default values, except the IPRST bit itself and the SAES_DPACFG register. Hence, any key-relative data is lost. For this reason, it is recommended to set the bit before handing over the SAES to a less secure application. The bit must be low while writing any configuration registers. */
    using SAES_CR_IPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES status register */
    using SAES_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Computation completed flag This bit mirrors the CCF bit of the SAES_ISR register. */
    using SAES_SR_CCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read error flag This flag indicates the detection of an unexpected read operation from the SAES_DOUTR register (during computation or data input phase): The flag is set by hardware. It is cleared by software upon setting the RWEIF bit of the SAES_ICR register. Upon the flag setting, an interrupt is generated if enabled through the RWEIE bit of the SAES_ICR register. The flag setting has no impact on the SAES operation. Unexpected read returns zero. */
    using SAES_SR_RDERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not detected (value: 0)
     *          - B_0x1: Detected (value: 1)
     */
        /** @brief Not detected */
    constexpr std::uint32_t SAES_SR_RDERR_B_0x0 = 0;
        /** @brief Detected */
    constexpr std::uint32_t SAES_SR_RDERR_B_0x1 = 1;

    /** @brief Write error This flag indicates the detection of an unexpected write operation to the SAES_DINR register (during computation or data output phase): The flag is set by hardware. It is cleared by software upon setting the RWEIF bit of the SAES_ICR register. Upon the flag setting, an interrupt is generated if enabled through the RWEIE bit of the SAES_ICR register. The flag setting has no impact on the SAES operation. Unexpected write is ignored. */
    using SAES_SR_WRERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not detected (value: 0)
     *          - B_0x1: Detected (value: 1)
     */
        /** @brief Not detected */
    constexpr std::uint32_t SAES_SR_WRERR_B_0x0 = 0;
        /** @brief Detected */
    constexpr std::uint32_t SAES_SR_WRERR_B_0x1 = 1;

    /** @brief Busy This flag indicates whether SAES is idle or busy during GCM payload encryption phase: The flag is set upon SAES initialization, upon fetching random number from the RNG, or upon transferring a shared key to a target peripheral. When GCM encryption is selected, the flag must be at zero before selecting the GCM final phase. */
    using SAES_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle (value: 0)
     *          - B_0x1: Busy (value: 1)
     */
        /** @brief Idle */
    constexpr std::uint32_t SAES_SR_BUSY_B_0x0 = 0;
        /** @brief Busy */
    constexpr std::uint32_t SAES_SR_BUSY_B_0x1 = 1;

    /** @brief Key Valid flag This bit is set by hardware when the amount of key information defined by KEYSIZE in SAES_CR has been loaded in SAES_KEYx key registers. In normal mode when KEYSEL equals to zero, the application must write the key registers in the correct sequence, otherwise the KEIF flag of the SAES_ISR register is set and KEYVALID stays at zero. When KEYSEL is different from zero the BUSY flag is automatically set by SAES. When key is loaded successfully, the BUSY flag is cleared and KEYVALID set. Upon an error, the KEIF flag of the SAES_ISR register is set, the BUSY flag cleared and KEYVALID kept at zero. When the KEIF flag is set, the application must clear it through the SAES_ICR register, otherwise KEYVALID cannot be set. See the KEIF bit description for more details. For more information on key loading please refer to . */
    using SAES_SR_KEYVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No valid key information is available in key registers. EN bit in SAES_CR cannot be set. (value: 0)
     *          - B_0x1: Valid key information, defined by KEYSIZE in SAES_CR, is loaded in key registers. (value: 1)
     */
        /** @brief No valid key information is available in key registers. EN bit in SAES_CR cannot be set. */
    constexpr std::uint32_t SAES_SR_KEYVALID_B_0x0 = 0;
        /** @brief Valid key information, defined by KEYSIZE in SAES_CR, is loaded in key registers. */
    constexpr std::uint32_t SAES_SR_KEYVALID_B_0x1 = 1;

    /** @brief SAES data input register */
    using SAES_DINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input data word A four-fold sequential write to this bitfield during the input phase results in writing a complete 128-bit block of input data to the SAES peripheral. From the first to the fourth write, the corresponding data weights are [127:96], [95:64], [63:32], and [31:0]. Upon each write, the data from the 32-bit input buffer are handled by the data swap block according to the DATATYPE[1:0] bitfield, then written into the AES core 128-bit input buffer. The data signification of the input data block depends on the SAES operating mode: - Mode 1 (encryption): plaintext - Mode 2 (key derivation): the bitfield is not used (SAES_KEYRx registers used for input if KEYSEL=0) - Mode 3 (decryption): ciphertext The data swap operation is described in on page 1149. */
    using SAES_DINR_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES data output register */
    using SAES_DOUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output data word This read-only bitfield fetches a 32-bit output buffer. A four-fold sequential read of this bitfield, upon the computation completion (CCF set), virtually reads a complete 128-bit block of output data from the SAES peripheral. Before reaching the output buffer, the data produced by the AES core are handled by the data swap block according to the DATATYPE[1:0] bitfield. Data weights from the first to the fourth read operation are: [127:96], [95:64], [63:32], and [31:0]. The data signification of the output data block depends on the SAES operating mode: - Mode 1 (encryption): ciphertext - Mode 2 (key derivation): the bitfield is not used - Mode 3 (decryption): plaintext The data swap operation is described in on page 1149. */
    using SAES_DOUTR_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 0 */
    using SAES_KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [31:0] This write-only bitfield contains the bits [31:0] of the AES encryption or decryption key, depending on the operating mode: - In Mode 1 (encryption), Mode 2 (key derivation): the value to write into the bitfield is the encryption key. - In Mode 3 (decryption): the value to write into the bitfield is the encryption key to be derived before being used for decryption. The SAES_KEYRx registers may be written only when KEYSIZE value is correct and when the SAES peripheral is disabled (EN bit of the SAES_CR register cleared). A special writing sequence is also required, as described in KEYVALID bit of the SAES_SR register. Note that, if KEYSEL is different from 0 and KEYVALID = 0, the key is directly loaded to SAES_KEYRx registers (hence writes to key register is ignored and KEIF is set). Refer to for more details. */
    using SAES_KEYR0_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 1 */
    using SAES_KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [63:32] Refer to the SAES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using SAES_KEYR1_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 2 */
    using SAES_KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [95:64] Refer to the SAES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using SAES_KEYR2_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 3 */
    using SAES_KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [127:96] Refer to the SAES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using SAES_KEYR3_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES initialization vector register 0 */
    using SAES_IVR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [31:0] Refer to for description of the IVI[127:0] bitfield. The initialization vector is only used in chaining modes other than ECB. The SAES_IVRx registers may be written only when the SAES peripheral is disabled */
    using SAES_IVR0_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES initialization vector register 1 */
    using SAES_IVR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [63:32] Refer to the SAES_IVR0 register for description of the IVI[128:0] bitfield. */
    using SAES_IVR1_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES initialization vector register 2 */
    using SAES_IVR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [95:64] Refer to the SAES_IVR0 register for description of the IVI[128:0] bitfield. */
    using SAES_IVR2_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES initialization vector register 3 */
    using SAES_IVR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector input, bits [127:96] Refer to the SAES_IVR0 register for description of the IVI[128:0] bitfield. */
    using SAES_IVR3_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 4 */
    using SAES_KEYR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [159:128] Refer to the SAES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using SAES_KEYR4_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 5 */
    using SAES_KEYR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [191:160] Refer to the SAES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using SAES_KEYR5_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 6 */
    using SAES_KEYR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [223:192] Refer to the SAES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using SAES_KEYR6_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES key register 7 */
    using SAES_KEYR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cryptographic key, bits [255:224] Refer to the SAES_KEYR0 register for description of the KEY[255:0] bitfield. */
    using SAES_KEYR7_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSP0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend Upon suspend operation, this bitfield of the corresponding SAES_SUSPxR register takes the value of one of internal SAES registers. */
    using SAES_SUSP0R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSP1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend Upon suspend operation, this bitfield of the corresponding SAES_SUSPxR register takes the value of one of internal SAES registers. */
    using SAES_SUSP1R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSP2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend Upon suspend operation, this bitfield of the corresponding SAES_SUSPxR register takes the value of one of internal SAES registers. */
    using SAES_SUSP2R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSP3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend Upon suspend operation, this bitfield of the corresponding SAES_SUSPxR register takes the value of one of internal SAES registers. */
    using SAES_SUSP3R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSP4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend Upon suspend operation, this bitfield of the corresponding SAES_SUSPxR register takes the value of one of internal SAES registers. */
    using SAES_SUSP4R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSP5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend Upon suspend operation, this bitfield of the corresponding SAES_SUSPxR register takes the value of one of internal SAES registers. */
    using SAES_SUSP5R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSP6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend Upon suspend operation, this bitfield of the corresponding SAES_SUSPxR register takes the value of one of internal SAES registers. */
    using SAES_SUSP6R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend registers */
    using SAES_SUSP7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES suspend Upon suspend operation, this bitfield of the corresponding SAES_SUSPxR register takes the value of one of internal SAES registers. */
    using SAES_SUSP7R_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SAES interrupt enable register */
    using SAES_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Computation complete flag interrupt enable This bit enables or disables (masks) the SAES interrupt generation when CCF (computation complete flag) is set. */
    using SAES_IER_CCFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (masked) (value: 0)
     *          - B_0x1: Enabled (not masked) (value: 1)
     */
        /** @brief Disabled (masked) */
    constexpr std::uint32_t SAES_IER_CCFIE_B_0x0 = 0;
        /** @brief Enabled (not masked) */
    constexpr std::uint32_t SAES_IER_CCFIE_B_0x1 = 1;

    /** @brief Read or write error interrupt enable This bit enables or disables (masks) the SAES interrupt generation when RWEIF (read and/or write error flag) is set. */
    using SAES_IER_RWEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (masked) (value: 0)
     *          - B_0x1: Enabled (not masked) (value: 1)
     */
        /** @brief Disabled (masked) */
    constexpr std::uint32_t SAES_IER_RWEIE_B_0x0 = 0;
        /** @brief Enabled (not masked) */
    constexpr std::uint32_t SAES_IER_RWEIE_B_0x1 = 1;

    /** @brief Key error interrupt enable This bit enables or disables (masks) the SAES interrupt generation when KEIF (key error flag) is set. */
    using SAES_IER_KEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (masked) (value: 0)
     *          - B_0x1: Enabled (not masked) (value: 1)
     */
        /** @brief Disabled (masked) */
    constexpr std::uint32_t SAES_IER_KEIE_B_0x0 = 0;
        /** @brief Enabled (not masked) */
    constexpr std::uint32_t SAES_IER_KEIE_B_0x1 = 1;

    /** @brief RNG error interrupt enable This bit enables or disables (masks) the SAES interrupt generation when RNGEIF (RNG error flag) is set. */
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
    /** @brief Computation complete flag This flag indicates whether the computation is completed: The flag is set by hardware upon the completion of the computation. It is cleared by software, upon setting the CCF bit of the SAES_ICR register. Upon the flag setting, an interrupt is generated if enabled through the CCFIE bit of the SAES_IER register. The flag is significant only when the DMAOUTEN bit is 0. It may stay high when DMA_EN is 1. */
    using SAES_ISR_CCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not completed (value: 0)
     *          - B_0x1: Completed (value: 1)
     */
        /** @brief Not completed */
    constexpr std::uint32_t SAES_ISR_CCF_B_0x0 = 0;
        /** @brief Completed */
    constexpr std::uint32_t SAES_ISR_CCF_B_0x1 = 1;

    /** @brief Read or write error interrupt flag This read-only bit is set by hardware when a RDERR or a WRERR error flag is set in the SAES_SR register. RWEIF bit is cleared when application sets the corresponding bit of SAES_ICR register. An interrupt is generated if the RWEIE bit has been previously set in the SAES_IER register. This flags has no meaning when key derivation mode is selected. */
    using SAES_ISR_RWEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No read or write error detected (value: 0)
     *          - B_0x1: Read or write error detected (see SAES_SR register for details) (value: 1)
     */
        /** @brief No read or write error detected */
    constexpr std::uint32_t SAES_ISR_RWEIF_B_0x0 = 0;
        /** @brief Read or write error detected (see SAES_SR register for details) */
    constexpr std::uint32_t SAES_ISR_RWEIF_B_0x1 = 1;

    /** @brief Key error interrupt flag This read-only bit is set by hardware when key information failed to load into key registers or key register usage is forbidden. Setting the corresponding bit of the SAES_ICR register clears the KEIF and generates interrupt if the KEIE bit of the SAES_IER register is set. KEIF is triggered upon any of the following errors: SAES fails to load the DHUK (KEYSEL = 001 or 100). SAES fails to load the BHK (KEYSEL = 010 or 100) respecting the correct order. AES fails to load the key shared by SAES peripheral (KMOD=10). When KEYVALID = 1 and (KEYPROT = 1 or KEYSEL is not 0x0), the security context of the application that loads the key (secure or non-secure) does not match the security attribute of the access to SAES_CR or SAES_DOUT. In this case, KEYVALID and EN bits are cleared. SAES_KEYRx register write does not respect the correct order. (For KEYSIZE = 0, SAES_KEYR0 then SAES_KEYR1 then SAES_KEYR2 then SAES_KEYR3 register, or reverse. For KEYSIZE = 1, SAES_KEYR0 then SAES_KEYR1 then SAES_KEYR2 then SAES_KEYR3 then SAES_KEYR4 then SAES_KEYR5 then SAES_KEYR6 then SAES_KEYR7, or reverse). KEIF must be cleared by the application software, otherwise KEYVALID cannot be set. */
    using SAES_ISR_KEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No key error detected (value: 0)
     *          - B_0x1: Key information failed to load into key registers, or key register use is forbidden (value: 1)
     */
        /** @brief No key error detected */
    constexpr std::uint32_t SAES_ISR_KEIF_B_0x0 = 0;
        /** @brief Key information failed to load into key registers, or key register use is forbidden */
    constexpr std::uint32_t SAES_ISR_KEIF_B_0x1 = 1;

    /** @brief RNG error interrupt flag This read-only bit is set by hardware when an error is detected on RNG bus interface (e.g. bad entropy). RNGEIE bit is cleared when application sets the corresponding bit of SAES_ICR register. An interrupt is generated if the RNGEIE bit has been previously set in the SAES_IER register. Clearing this bit triggers the reload of a new random number from RNG peripheral. */
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
    /** @brief Computation complete flag clear Setting this bit clears the CCF status bit of the SAES_SR and SAES_ISR registers. */
    using SAES_ICR_CCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read or write error interrupt flag clear Setting this bit clears the RWEIF status bit of the SAES_ISR register, and both RDERR and WRERR flags in the SAES_SR register. */
    using SAES_ICR_RWEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key error interrupt flag clear Setting this bit clears the KEIF status bit of the SAES_ISR register. */
    using SAES_ICR_KEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RNG error interrupt flag clear Application must set this bit to clear the RNGEIF status bit in SAES_ISR register. */
    using SAES_ICR_RNGEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
