/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H563_HASH_HPP
#define EMBEDDED_PP_STM32H563_HASH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief HASH register bank */
namespace STM32H563::HASH {

    /** @brief HASH control register */
    using HASH_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialize message digest calculation Writing this bit to 1 resets the hash processor core, so that the HASH is ready to compute the message digest of a new message. Writing this bit to 0 has no effect. Reading this bit always returns 0. */
    using HASH_CR_INIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA enable After this bit is set, it is cleared by hardware while the last data of the message is written into the hash processor. Setting this bit to 0 while a DMA transfer is ongoing does not abort the current transfer. Instead, the DMA interface of the HASH remains internally enabled until the transfer is completed or INIT is written to 1. Setting INIT bit to 1 does not clear DMAE bit. */
    using HASH_CR_DMAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA transfers disabled (value: 0)
     *          - B_0x1: DMA transfers enabled. A DMA request is sent as soon as the hash core is ready to receive data. (value: 1)
     */
        /** @brief DMA transfers disabled */
    constexpr std::uint32_t HASH_CR_DMAE_B_0x0 = 0;
        /** @brief DMA transfers enabled. A DMA request is sent as soon as the hash core is ready to receive data. */
    constexpr std::uint32_t HASH_CR_DMAE_B_0x1 = 1;

    /** @brief Data type selection This bitfield defines the format of the data entered into the HASH_DIN register: */
    using HASH_CR_DATATYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 32-bit data. The data written into HASH_DIN are directly used by the HASH processing, without reordering. (value: 0)
     *          - B_0x1: 16-bit data or half-word. The data written into HASH_DIN are considered as two half-words, and are swapped before being used by the HASH processing. (value: 1)
     *          - B_0x2: 8-bit data or bytes. The data written into HASH_DIN are considered as four bytes, and are swapped before being used by the HASH processing. (value: 2)
     *          - B_0x3: bit data or bit string. The data written into HASH_DIN are considered as 32 bits (1st bit of the string at position 0), and are swapped before being used by the HASH processing (1st bit of the string at position 31). (value: 3)
     */
        /** @brief 32-bit data. The data written into HASH_DIN are directly used by the HASH processing, without reordering. */
    constexpr std::uint32_t HASH_CR_DATATYPE_B_0x0 = 0;
        /** @brief 16-bit data or half-word. The data written into HASH_DIN are considered as two half-words, and are swapped before being used by the HASH processing. */
    constexpr std::uint32_t HASH_CR_DATATYPE_B_0x1 = 1;
        /** @brief 8-bit data or bytes. The data written into HASH_DIN are considered as four bytes, and are swapped before being used by the HASH processing. */
    constexpr std::uint32_t HASH_CR_DATATYPE_B_0x2 = 2;
        /** @brief bit data or bit string. The data written into HASH_DIN are considered as 32 bits (1st bit of the string at position 0), and are swapped before being used by the HASH processing (1st bit of the string at position 31). */
    constexpr std::uint32_t HASH_CR_DATATYPE_B_0x3 = 3;

    /** @brief Mode selection This bit selects the normal or the keyed HMAC mode for the selected algorithm: This selection is only taken into account when the INIT bit is set. Changing this bit during a computation has no effect. */
    using HASH_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hash mode selected (value: 0)
     *          - B_0x1: HMAC mode selected. LKEY bit must be set if the key being used is longer than the algorithm block size. (value: 1)
     */
        /** @brief Hash mode selected */
    constexpr std::uint32_t HASH_CR_MODE_B_0x0 = 0;
        /** @brief HMAC mode selected. LKEY bit must be set if the key being used is longer than the algorithm block size. */
    constexpr std::uint32_t HASH_CR_MODE_B_0x1 = 1;

    /** @brief Number of words already pushed Refer to NBWP[3:0] bitfield of HASH_SR for a description of NBW[3:0] bitfield. This bit is read-only. */
    using HASH_CR_NBW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIN not empty Refer to DINNE bit of HASH_SR for a description of DINNE bit. This bit is read-only. */
    using HASH_CR_DINNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiple DMA transfers This bit is set when hashing large files when multiple DMA transfers are needed. */
    using HASH_CR_MDMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCAL is automatically set at the end of a DMA transfer. (value: 0)
     *          - B_0x1: DCAL is not automatically set at the end of a DMA transfer. (value: 1)
     */
        /** @brief DCAL is automatically set at the end of a DMA transfer. */
    constexpr std::uint32_t HASH_CR_MDMAT_B_0x0 = 0;
        /** @brief DCAL is not automatically set at the end of a DMA transfer. */
    constexpr std::uint32_t HASH_CR_MDMAT_B_0x1 = 1;

    /** @brief Long key selection The application must set this bit if the HMAC key is greater than the block size corresponding to the hash algorithm (see algorithms for details). For example the block size is 64 bytes for SHA2-256. This selection is only taken into account when the INIT and MODE bits are set (HMAC mode selected). Changing this bit during a computation has no effect. */
    using HASH_CR_LKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HMAC key is shorter or equal to the block size (short key). The actual key value written in HASH_DIN is used during the HMAC computation. (value: 0)
     *          - B_0x1: HMAC key is longer than the block size (long key). The hash of the key is used instead of the real key during the HMAC computation. (value: 1)
     */
        /** @brief HMAC key is shorter or equal to the block size (short key). The actual key value written in HASH_DIN is used during the HMAC computation. */
    constexpr std::uint32_t HASH_CR_LKEY_B_0x0 = 0;
        /** @brief HMAC key is longer than the block size (long key). The hash of the key is used instead of the real key during the HMAC computation. */
    constexpr std::uint32_t HASH_CR_LKEY_B_0x1 = 1;

    /** @brief Algorithm selection These bits select the hash algorithm: This selection is only taken into account when the INIT bit is set. Changing this bitfield during a computation has no effect. When the ALGO bitfield is updated and INIT bit is set, NBWE in HASH_SR is automatically updated to 0x11. */
    using HASH_CR_ALGO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SHA-1 (value: 0)
     *          - B_0x2: SHA2-224 (value: 2)
     *          - B_0x3: SHA2-256 (value: 3)
     *          - B_0xC: SHA2-384 (value: 12)
     *          - B_0xD: SHA2-512/224 (value: 13)
     *          - B_0xE: SHA2-512/256 (value: 14)
     *          - B_0xF: SHA2-512 (value: 15)
     */
        /** @brief SHA-1 */
    constexpr std::uint32_t HASH_CR_ALGO_B_0x0 = 0;
        /** @brief SHA2-224 */
    constexpr std::uint32_t HASH_CR_ALGO_B_0x2 = 2;
        /** @brief SHA2-256 */
    constexpr std::uint32_t HASH_CR_ALGO_B_0x3 = 3;
        /** @brief SHA2-384 */
    constexpr std::uint32_t HASH_CR_ALGO_B_0xC = 12;
        /** @brief SHA2-512/224 */
    constexpr std::uint32_t HASH_CR_ALGO_B_0xD = 13;
        /** @brief SHA2-512/256 */
    constexpr std::uint32_t HASH_CR_ALGO_B_0xE = 14;
        /** @brief SHA2-512 */
    constexpr std::uint32_t HASH_CR_ALGO_B_0xF = 15;

    /** @brief HASH data input register */
    using HASH_DIN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data input Writing this register pushes the current register content into the FIFO, and the register takes the new value presented on the AHB bus. Reading this register returns zeros. */
    using HASH_DIN_DATAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH start register */
    using HASH_STR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of valid bits in the last word When the last word of the message bit string is written to HASH_DIN register, the hash processor takes only the valid bits, specified as below, after internal data swapping: ... The above mechanism is valid only if DCAL = 0. If NBLW bits are written while DCAL is set to 1, the NBLW bitfield remains unchanged. In other words it is not possible to configure NBLW and set DCAL at the same time. Reading NBLW bits returns the last value written to NBLW. */
    using HASH_STR_NBLW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All the 32 bits of the last data written are valid message bits, that is M[31:0] (value: 0)
     *          - B_0x1: Only one bit of the last data written (after swapping) is valid, that is M[0] (value: 1)
     *          - B_0x2: Only two bits of the last data written (after swapping) are valid, that is M[1:0] (value: 2)
     *          - B_0x3: Only three bits of the last data written (after swapping) are valid that is M[2:0] (value: 3)
     *          - B_0x1F: Only 31 bits of the last data written (after swapping) are valid that is M[30:0] (value: 31)
     */
        /** @brief All the 32 bits of the last data written are valid message bits, that is M[31:0] */
    constexpr std::uint32_t HASH_STR_NBLW_B_0x0 = 0;
        /** @brief Only one bit of the last data written (after swapping) is valid, that is M[0] */
    constexpr std::uint32_t HASH_STR_NBLW_B_0x1 = 1;
        /** @brief Only two bits of the last data written (after swapping) are valid, that is M[1:0] */
    constexpr std::uint32_t HASH_STR_NBLW_B_0x2 = 2;
        /** @brief Only three bits of the last data written (after swapping) are valid that is M[2:0] */
    constexpr std::uint32_t HASH_STR_NBLW_B_0x3 = 3;
        /** @brief Only 31 bits of the last data written (after swapping) are valid that is M[30:0] */
    constexpr std::uint32_t HASH_STR_NBLW_B_0x1F = 31;

    /** @brief Digest calculation Writing this bit to 1 starts the message padding using the previously written value of NBLW, and starts the calculation of the final message digest with all the data words written to the input FIFO since the INIT bit was last written to 1. Reading this bit returns 0. */
    using HASH_STR_DCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH aliased digest register 0 */
    using HASH_HRA0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HRA0_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH aliased digest register 1 */
    using HASH_HRA1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HRA1_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH aliased digest register 2 */
    using HASH_HRA2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HRA2_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH aliased digest register 3 */
    using HASH_HRA3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HRA3_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH aliased digest register 4 */
    using HASH_HRA4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HRA4_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH interrupt enable register */
    using HASH_IMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data input interrupt enable */
    using HASH_IMR_DINIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data input interrupt disabled (value: 0)
     *          - B_0x1: Data input interrupt enabled (value: 1)
     */
        /** @brief Data input interrupt disabled */
    constexpr std::uint32_t HASH_IMR_DINIE_B_0x0 = 0;
        /** @brief Data input interrupt enabled */
    constexpr std::uint32_t HASH_IMR_DINIE_B_0x1 = 1;

    /** @brief Digest calculation completion interrupt enable */
    using HASH_IMR_DCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digest calculation completion interrupt disabled (value: 0)
     *          - B_0x1: Digest calculation completion interrupt enabled. (value: 1)
     */
        /** @brief Digest calculation completion interrupt disabled */
    constexpr std::uint32_t HASH_IMR_DCIE_B_0x0 = 0;
        /** @brief Digest calculation completion interrupt enabled. */
    constexpr std::uint32_t HASH_IMR_DCIE_B_0x1 = 1;

    /** @brief HASH status register */
    using HASH_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data input interrupt status This bit is set by hardware when the FIFO is ready to get a new block (16 locations are free). It is cleared by writing it to 0 or by writing the HASH_DIN register. When DINIS = 0, HASH_CSRx registers reads as zero. */
    using HASH_SR_DINIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 16 locations are free in the input buffer (value: 0)
     *          - B_0x1: A new block can be entered into the input buffer. An interrupt is generated if the DINIE bit is set in the HASH_IMR register. (value: 1)
     */
        /** @brief Less than 16 locations are free in the input buffer */
    constexpr std::uint32_t HASH_SR_DINIS_B_0x0 = 0;
        /** @brief A new block can be entered into the input buffer. An interrupt is generated if the DINIE bit is set in the HASH_IMR register. */
    constexpr std::uint32_t HASH_SR_DINIS_B_0x1 = 1;

    /** @brief Digest calculation completion interrupt status This bit is set by hardware when a digest becomes ready (the whole message has been processed). It is cleared by writing it to 0 or by writing the INIT bit to 1 in the HASH_CR register. */
    using HASH_SR_DCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No digest available in the HASH_HRx registers (zeros are returned) (value: 0)
     *          - B_0x1: Digest calculation complete, a digest is available in the HASH_HRx registers. An interrupt is generated if the DCIE bit is set in the HASH_IMR register. (value: 1)
     */
        /** @brief No digest available in the HASH_HRx registers (zeros are returned) */
    constexpr std::uint32_t HASH_SR_DCIS_B_0x0 = 0;
        /** @brief Digest calculation complete, a digest is available in the HASH_HRx registers. An interrupt is generated if the DCIE bit is set in the HASH_IMR register. */
    constexpr std::uint32_t HASH_SR_DCIS_B_0x1 = 1;

    /** @brief DMA Status This bit provides information on the DMA interface activity. It is set with DMAE and cleared when DMAE = 0 and no DMA transfer is ongoing. No interrupt is associated with this bit. */
    using HASH_SR_DMAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA interface is disabled (DMAE = 0) and no transfer is ongoing (value: 0)
     *          - B_0x1: DMA interface is enabled (DMAE = 1) or a transfer is ongoing (value: 1)
     */
        /** @brief DMA interface is disabled (DMAE = 0) and no transfer is ongoing */
    constexpr std::uint32_t HASH_SR_DMAS_B_0x0 = 0;
        /** @brief DMA interface is enabled (DMAE = 1) or a transfer is ongoing */
    constexpr std::uint32_t HASH_SR_DMAS_B_0x1 = 1;

    /** @brief Busy bit */
    using HASH_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No block is currently being processed (value: 0)
     *          - B_0x1: The hash core is processing a block of data (value: 1)
     */
        /** @brief No block is currently being processed */
    constexpr std::uint32_t HASH_SR_BUSY_B_0x0 = 0;
        /** @brief The hash core is processing a block of data */
    constexpr std::uint32_t HASH_SR_BUSY_B_0x1 = 1;

    /** @brief Number of words already pushed This bitfield is the exact number of words in the message that have already been pushed into the FIFO. NBWP is incremented by 1 when a write access is performed to the HASH_DIN register. When a digest calculation starts, NBWP is updated to NBWP- block size (in words), and NBWP goes to zero when the INIT bit is written to 1. */
    using HASH_SR_NBWP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIN not empty This bit is set when the HASH_DIN register holds valid data (that is after being written at least once). It is cleared when either the INIT bit (initialization) or the DCAL bit (completion of the previous message processing) is written to 1. */
    using HASH_SR_DINNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data are present in the data input buffer (value: 0)
     *          - B_0x1: The input buffer contains at least one word of data (value: 1)
     */
        /** @brief No data are present in the data input buffer */
    constexpr std::uint32_t HASH_SR_DINNE_B_0x0 = 0;
        /** @brief The input buffer contains at least one word of data */
    constexpr std::uint32_t HASH_SR_DINNE_B_0x1 = 1;

    /** @brief Number of words expected This bitfield reflects the number of words in the message that must be pushed into the FIFO to trigger a partial computation. NBWE is decremented by 1 when a write access is performed to the HASH_DIN register. NBWE is set to the expected block size +1 in words (0x11) when INIT bit is set in HASH_CR. It is set to the expected block size (0x10) when the partial digest calculation ends. */
    using HASH_SR_NBWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 0 */
    using HASH_CSR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 0 Refer to introduction. */
    using HASH_CSR0_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 1 */
    using HASH_CSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 1 Refer to introduction. */
    using HASH_CSR1_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 2 */
    using HASH_CSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 2 Refer to introduction. */
    using HASH_CSR2_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 3 */
    using HASH_CSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 3 Refer to introduction. */
    using HASH_CSR3_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 4 */
    using HASH_CSR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 4 Refer to introduction. */
    using HASH_CSR4_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 5 */
    using HASH_CSR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 5 Refer to introduction. */
    using HASH_CSR5_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 6 */
    using HASH_CSR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 6 Refer to introduction. */
    using HASH_CSR6_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 7 */
    using HASH_CSR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 7 Refer to introduction. */
    using HASH_CSR7_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 8 */
    using HASH_CSR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 8 Refer to introduction. */
    using HASH_CSR8_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 9 */
    using HASH_CSR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 9 Refer to introduction. */
    using HASH_CSR9_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 10 */
    using HASH_CSR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 10 Refer to introduction. */
    using HASH_CSR10_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 11 */
    using HASH_CSR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 11 Refer to introduction. */
    using HASH_CSR11_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 12 */
    using HASH_CSR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 12 Refer to introduction. */
    using HASH_CSR12_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 13 */
    using HASH_CSR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 13 Refer to introduction. */
    using HASH_CSR13_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 14 */
    using HASH_CSR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 14 Refer to introduction. */
    using HASH_CSR14_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 15 */
    using HASH_CSR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 15 Refer to introduction. */
    using HASH_CSR15_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 16 */
    using HASH_CSR16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 16 Refer to introduction. */
    using HASH_CSR16_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 17 */
    using HASH_CSR17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 17 Refer to introduction. */
    using HASH_CSR17_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 18 */
    using HASH_CSR18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 18 Refer to introduction. */
    using HASH_CSR18_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 19 */
    using HASH_CSR19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 19 Refer to introduction. */
    using HASH_CSR19_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 20 */
    using HASH_CSR20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 20 Refer to introduction. */
    using HASH_CSR20_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 21 */
    using HASH_CSR21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 21 Refer to introduction. */
    using HASH_CSR21_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 22 */
    using HASH_CSR22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 22 Refer to introduction. */
    using HASH_CSR22_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 23 */
    using HASH_CSR23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 23 Refer to introduction. */
    using HASH_CSR23_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 24 */
    using HASH_CSR24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 24 Refer to introduction. */
    using HASH_CSR24_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 25 */
    using HASH_CSR25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 25 Refer to introduction. */
    using HASH_CSR25_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 26 */
    using HASH_CSR26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 26 Refer to introduction. */
    using HASH_CSR26_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 27 */
    using HASH_CSR27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 27 Refer to introduction. */
    using HASH_CSR27_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 28 */
    using HASH_CSR28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 28 Refer to introduction. */
    using HASH_CSR28_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 29 */
    using HASH_CSR29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 29 Refer to introduction. */
    using HASH_CSR29_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 30 */
    using HASH_CSR30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 30 Refer to introduction. */
    using HASH_CSR30_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 31 */
    using HASH_CSR31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 31 Refer to introduction. */
    using HASH_CSR31_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 32 */
    using HASH_CSR32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 32 Refer to introduction. */
    using HASH_CSR32_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 33 */
    using HASH_CSR33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 33 Refer to introduction. */
    using HASH_CSR33_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 34 */
    using HASH_CSR34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 34 Refer to introduction. */
    using HASH_CSR34_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 35 */
    using HASH_CSR35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 35 Refer to introduction. */
    using HASH_CSR35_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 36 */
    using HASH_CSR36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 36 Refer to introduction. */
    using HASH_CSR36_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 37 */
    using HASH_CSR37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 37 Refer to introduction. */
    using HASH_CSR37_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 38 */
    using HASH_CSR38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 38 Refer to introduction. */
    using HASH_CSR38_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 39 */
    using HASH_CSR39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 39 Refer to introduction. */
    using HASH_CSR39_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 40 */
    using HASH_CSR40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 40 Refer to introduction. */
    using HASH_CSR40_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 41 */
    using HASH_CSR41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 41 Refer to introduction. */
    using HASH_CSR41_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 42 */
    using HASH_CSR42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 42 Refer to introduction. */
    using HASH_CSR42_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 43 */
    using HASH_CSR43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 43 Refer to introduction. */
    using HASH_CSR43_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 44 */
    using HASH_CSR44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 44 Refer to introduction. */
    using HASH_CSR44_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 45 */
    using HASH_CSR45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 45 Refer to introduction. */
    using HASH_CSR45_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 46 */
    using HASH_CSR46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 46 Refer to introduction. */
    using HASH_CSR46_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 47 */
    using HASH_CSR47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 47 Refer to introduction. */
    using HASH_CSR47_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 48 */
    using HASH_CSR48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 48 Refer to introduction. */
    using HASH_CSR48_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 49 */
    using HASH_CSR49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 49 Refer to introduction. */
    using HASH_CSR49_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 50 */
    using HASH_CSR50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 50 Refer to introduction. */
    using HASH_CSR50_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 51 */
    using HASH_CSR51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 51 Refer to introduction. */
    using HASH_CSR51_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 52 */
    using HASH_CSR52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 52 Refer to introduction. */
    using HASH_CSR52_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 53 */
    using HASH_CSR53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 53 Refer to introduction. */
    using HASH_CSR53_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 54 */
    using HASH_CSR54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 54 Refer to introduction. */
    using HASH_CSR54_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 55 */
    using HASH_CSR55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 55 Refer to introduction. */
    using HASH_CSR55_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 56 */
    using HASH_CSR56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 56 Refer to introduction. */
    using HASH_CSR56_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 57 */
    using HASH_CSR57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 57 Refer to introduction. */
    using HASH_CSR57_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 58 */
    using HASH_CSR58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 58 Refer to introduction. */
    using HASH_CSR58_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 59 */
    using HASH_CSR59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 59 Refer to introduction. */
    using HASH_CSR59_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 60 */
    using HASH_CSR60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 60 Refer to introduction. */
    using HASH_CSR60_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 61 */
    using HASH_CSR61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 61 Refer to introduction. */
    using HASH_CSR61_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 62 */
    using HASH_CSR62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 62 Refer to introduction. */
    using HASH_CSR62_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 63 */
    using HASH_CSR63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 63 Refer to introduction. */
    using HASH_CSR63_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 64 */
    using HASH_CSR64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 64 Refer to introduction. */
    using HASH_CSR64_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 65 */
    using HASH_CSR65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 65 Refer to introduction. */
    using HASH_CSR65_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 66 */
    using HASH_CSR66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 66 Refer to introduction. */
    using HASH_CSR66_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 67 */
    using HASH_CSR67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 67 Refer to introduction. */
    using HASH_CSR67_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 68 */
    using HASH_CSR68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 68 Refer to introduction. */
    using HASH_CSR68_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 69 */
    using HASH_CSR69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 69 Refer to introduction. */
    using HASH_CSR69_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 70 */
    using HASH_CSR70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 70 Refer to introduction. */
    using HASH_CSR70_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 71 */
    using HASH_CSR71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 71 Refer to introduction. */
    using HASH_CSR71_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 72 */
    using HASH_CSR72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 72 Refer to introduction. */
    using HASH_CSR72_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 73 */
    using HASH_CSR73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 73 Refer to introduction. */
    using HASH_CSR73_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 74 */
    using HASH_CSR74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 74 Refer to introduction. */
    using HASH_CSR74_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 75 */
    using HASH_CSR75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 75 Refer to introduction. */
    using HASH_CSR75_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 76 */
    using HASH_CSR76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 76 Refer to introduction. */
    using HASH_CSR76_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 77 */
    using HASH_CSR77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 77 Refer to introduction. */
    using HASH_CSR77_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 78 */
    using HASH_CSR78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 78 Refer to introduction. */
    using HASH_CSR78_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 79 */
    using HASH_CSR79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 79 Refer to introduction. */
    using HASH_CSR79_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 80 */
    using HASH_CSR80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 80 Refer to introduction. */
    using HASH_CSR80_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 81 */
    using HASH_CSR81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x23C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 81 Refer to introduction. */
    using HASH_CSR81_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 82 */
    using HASH_CSR82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 82 Refer to introduction. */
    using HASH_CSR82_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 83 */
    using HASH_CSR83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 83 Refer to introduction. */
    using HASH_CSR83_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 84 */
    using HASH_CSR84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 84 Refer to introduction. */
    using HASH_CSR84_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 85 */
    using HASH_CSR85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 85 Refer to introduction. */
    using HASH_CSR85_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 86 */
    using HASH_CSR86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 86 Refer to introduction. */
    using HASH_CSR86_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 87 */
    using HASH_CSR87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 87 Refer to introduction. */
    using HASH_CSR87_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 88 */
    using HASH_CSR88 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x258, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 88 Refer to introduction. */
    using HASH_CSR88_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 89 */
    using HASH_CSR89 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x25C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 89 Refer to introduction. */
    using HASH_CSR89_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 90 */
    using HASH_CSR90 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 90 Refer to introduction. */
    using HASH_CSR90_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 91 */
    using HASH_CSR91 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 91 Refer to introduction. */
    using HASH_CSR91_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 92 */
    using HASH_CSR92 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x268, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 92 Refer to introduction. */
    using HASH_CSR92_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 93 */
    using HASH_CSR93 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 93 Refer to introduction. */
    using HASH_CSR93_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 94 */
    using HASH_CSR94 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 94 Refer to introduction. */
    using HASH_CSR94_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 95 */
    using HASH_CSR95 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x274, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 95 Refer to introduction. */
    using HASH_CSR95_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 96 */
    using HASH_CSR96 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x278, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 96 Refer to introduction. */
    using HASH_CSR96_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 97 */
    using HASH_CSR97 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x27C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 97 Refer to introduction. */
    using HASH_CSR97_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 98 */
    using HASH_CSR98 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 98 Refer to introduction. */
    using HASH_CSR98_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 99 */
    using HASH_CSR99 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 99 Refer to introduction. */
    using HASH_CSR99_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 100 */
    using HASH_CSR100 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 100 Refer to introduction. */
    using HASH_CSR100_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 101 */
    using HASH_CSR101 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 101 Refer to introduction. */
    using HASH_CSR101_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 102 */
    using HASH_CSR102 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap 102 Refer to introduction. */
    using HASH_CSR102_CSx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR0_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR1_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR2_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR3_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR4_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x324, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR5_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x328, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR6_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x32C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR7_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x330, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR8_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x334, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR9_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x338, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR10_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x33C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR11_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x340, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR12_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x344, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR13_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x348, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR14_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register */
    using HASH_HR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x Refer to introduction. */
    using HASH_HR15_Hx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
