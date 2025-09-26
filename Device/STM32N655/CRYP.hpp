/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N655_CRYP_HPP
#define EMBEDDED_PP_STM32N655_CRYP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Cryptographic processor */
namespace STM32N655::CRYP {

    /** @brief CRYP control register */
    using CRYP_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Algorithm direction */
    using CRYP_CR_ALGODIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Encryption (value: 0)
     *          - B_0x1: Decryption (value: 1)
     */
        /** @brief Encryption */
    constexpr std::uint32_t CRYP_CR_ALGODIR_B_0x0 = 0;
        /** @brief Decryption */
    constexpr std::uint32_t CRYP_CR_ALGODIR_B_0x1 = 1;

    /** @brief ALGOMODE[2:0]: Algorithm mode */
    using CRYP_CR_ALGOMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: Electronic codebook (ECB) (value: 4)
     *          - B_0x5: Cipher Block Chaining (CBC) (value: 5)
     *          - B_0x6: Counter mode (CTR) (value: 6)
     *          - B_0x7: AES key preparation for ECB or CBC decryption (value: 7)
     */
        /** @brief Electronic codebook (ECB) */
    constexpr std::uint32_t CRYP_CR_ALGOMODE_B_0x4 = 4;
        /** @brief Cipher Block Chaining (CBC) */
    constexpr std::uint32_t CRYP_CR_ALGOMODE_B_0x5 = 5;
        /** @brief Counter mode (CTR) */
    constexpr std::uint32_t CRYP_CR_ALGOMODE_B_0x6 = 6;
        /** @brief AES key preparation for ECB or CBC decryption */
    constexpr std::uint32_t CRYP_CR_ALGOMODE_B_0x7 = 7;

    /** @brief Data type */
    using CRYP_CR_DATATYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No swapping (32-bit data). (value: 0)
     *          - B_0x1: Half-word swapping (16-bit data). (value: 1)
     *          - B_0x2: Byte swapping (8-bit data). (value: 2)
     *          - B_0x3: Bit-level swapping. (value: 3)
     */
        /** @brief No swapping (32-bit data). */
    constexpr std::uint32_t CRYP_CR_DATATYPE_B_0x0 = 0;
        /** @brief Half-word swapping (16-bit data). */
    constexpr std::uint32_t CRYP_CR_DATATYPE_B_0x1 = 1;
        /** @brief Byte swapping (8-bit data). */
    constexpr std::uint32_t CRYP_CR_DATATYPE_B_0x2 = 2;
        /** @brief Bit-level swapping. */
    constexpr std::uint32_t CRYP_CR_DATATYPE_B_0x3 = 3;

    /** @brief Key size selection */
    using CRYP_CR_KEYSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 128-bits (value: 0)
     *          - B_0x1: 192 bits (value: 1)
     *          - B_0x2: 256 bits (value: 2)
     */
        /** @brief 128-bits */
    constexpr std::uint32_t CRYP_CR_KEYSIZE_B_0x0 = 0;
        /** @brief 192 bits */
    constexpr std::uint32_t CRYP_CR_KEYSIZE_B_0x1 = 1;
        /** @brief 256 bits */
    constexpr std::uint32_t CRYP_CR_KEYSIZE_B_0x2 = 2;

    /** @brief FIFO flush */
    using CRYP_CR_FFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: FIFO flush enabled (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t CRYP_CR_FFLUSH_B_0x0 = 0;
        /** @brief FIFO flush enabled */
    constexpr std::uint32_t CRYP_CR_FFLUSH_B_0x1 = 1;

    /** @brief CRYP enable */
    using CRYP_CR_CRYPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRYP disabled (value: 0)
     *          - B_0x1: CRYP enabled (value: 1)
     */
        /** @brief CRYP disabled */
    constexpr std::uint32_t CRYP_CR_CRYPEN_B_0x0 = 0;
        /** @brief CRYP enabled */
    constexpr std::uint32_t CRYP_CR_CRYPEN_B_0x1 = 1;

    /** @brief GCM or CCM phase selection */
    using CRYP_CR_GCM_CCMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Initialization phase (value: 0)
     *          - B_0x1: Header phase (value: 1)
     *          - B_0x2: Payload phase (value: 2)
     *          - B_0x3: Final phase (value: 3)
     */
        /** @brief Initialization phase */
    constexpr std::uint32_t CRYP_CR_GCM_CCMPH_B_0x0 = 0;
        /** @brief Header phase */
    constexpr std::uint32_t CRYP_CR_GCM_CCMPH_B_0x1 = 1;
        /** @brief Payload phase */
    constexpr std::uint32_t CRYP_CR_GCM_CCMPH_B_0x2 = 2;
        /** @brief Final phase */
    constexpr std::uint32_t CRYP_CR_GCM_CCMPH_B_0x3 = 3;

    /** @brief ALGOMODE[3] */
    using CRYP_CR_ALGOMODE_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of padding bytes in last block */
    using CRYP_CR_NPBLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All bytes are valid (no padding) (value: 0)
     *          - B_0x1: Padding for the last LSB byte (value: 1)
     *          - B_0xF: Padding for the 15 LSB bytes of last block. (value: 15)
     */
        /** @brief All bytes are valid (no padding) */
    constexpr std::uint32_t CRYP_CR_NPBLB_B_0x0 = 0;
        /** @brief Padding for the last LSB byte */
    constexpr std::uint32_t CRYP_CR_NPBLB_B_0x1 = 1;
        /** @brief Padding for the 15 LSB bytes of last block. */
    constexpr std::uint32_t CRYP_CR_NPBLB_B_0xF = 15;

    /** @brief Key mode selection */
    using CRYP_CR_KMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal-key mode. Key registers are freely usable. (value: 0)
     *          - B_0x2: Shared-key mode. If shared-key mode is properly initialized in SAES peripheral, the CRYP peripheral automatically loads its key registers with the data stored in the SAES key registers. The key value is available in CRYP key registers when BUSY bit is cleared and KEYVALID is set in the CRYP_SR register. Key error flag KERF is set otherwise in the CRYP_SR register. (value: 2)
     */
        /** @brief Normal-key mode. Key registers are freely usable. */
    constexpr std::uint32_t CRYP_CR_KMOD_B_0x0 = 0;
        /** @brief Shared-key mode. If shared-key mode is properly initialized in SAES peripheral, the CRYP peripheral automatically loads its key registers with the data stored in the SAES key registers. The key value is available in CRYP key registers when BUSY bit is cleared and KEYVALID is set in the CRYP_SR register. Key error flag KERF is set otherwise in the CRYP_SR register. */
    constexpr std::uint32_t CRYP_CR_KMOD_B_0x2 = 2;

    /** @brief CRYP peripheral software reset */
    using CRYP_CR_IPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP status register */
    using CRYP_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO empty flag */
    using CRYP_SR_IFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input FIFO is not empty (value: 0)
     *          - B_0x1: Input FIFO is empty (value: 1)
     */
        /** @brief Input FIFO is not empty */
    constexpr std::uint32_t CRYP_SR_IFEM_B_0x0 = 0;
        /** @brief Input FIFO is empty */
    constexpr std::uint32_t CRYP_SR_IFEM_B_0x1 = 1;

    /** @brief Input FIFO not full flag */
    using CRYP_SR_IFNF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input FIFO is full (value: 0)
     *          - B_0x1: Input FIFO is not full (value: 1)
     */
        /** @brief Input FIFO is full */
    constexpr std::uint32_t CRYP_SR_IFNF_B_0x0 = 0;
        /** @brief Input FIFO is not full */
    constexpr std::uint32_t CRYP_SR_IFNF_B_0x1 = 1;

    /** @brief Output FIFO not empty flag */
    using CRYP_SR_OFNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output FIFO is empty (value: 0)
     *          - B_0x1: Output FIFO is not empty (value: 1)
     */
        /** @brief Output FIFO is empty */
    constexpr std::uint32_t CRYP_SR_OFNE_B_0x0 = 0;
        /** @brief Output FIFO is not empty */
    constexpr std::uint32_t CRYP_SR_OFNE_B_0x1 = 1;

    /** @brief Output FIFO full flag */
    using CRYP_SR_OFFU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output FIFO is not full (value: 0)
     *          - B_0x1: Output FIFO is full (value: 1)
     */
        /** @brief Output FIFO is not full */
    constexpr std::uint32_t CRYP_SR_OFFU_B_0x0 = 0;
        /** @brief Output FIFO is full */
    constexpr std::uint32_t CRYP_SR_OFFU_B_0x1 = 1;

    /** @brief Busy bit */
    using CRYP_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle (value: 0)
     *          - B_0x1: Busy (value: 1)
     */
        /** @brief Idle */
    constexpr std::uint32_t CRYP_SR_BUSY_B_0x0 = 0;
        /** @brief Busy */
    constexpr std::uint32_t CRYP_SR_BUSY_B_0x1 = 1;

    /** @brief Key error flag */
    using CRYP_SR_KERF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No key error detected (value: 0)
     *          - B_0x1: Key information failed to load into key registers (value: 1)
     */
        /** @brief No key error detected */
    constexpr std::uint32_t CRYP_SR_KERF_B_0x0 = 0;
        /** @brief Key information failed to load into key registers */
    constexpr std::uint32_t CRYP_SR_KERF_B_0x1 = 1;

    /** @brief Key valid flag */
    using CRYP_SR_KEYVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Key not valid (value: 0)
     *          - B_0x1: Key valid (value: 1)
     */
        /** @brief Key not valid */
    constexpr std::uint32_t CRYP_SR_KEYVALID_B_0x0 = 0;
        /** @brief Key valid */
    constexpr std::uint32_t CRYP_SR_KEYVALID_B_0x1 = 1;

    /** @brief CRYP data input register */
    using CRYP_DINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data input */
    using CRYP_DINR_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP data output register */
    using CRYP_DOUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data output */
    using CRYP_DOUTR_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP DMA control register */
    using CRYP_DMACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA input enable */
    using CRYP_DMACR_DIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Incoming data transfer to CRYP via DMA is disabled (value: 0)
     *          - B_0x1: Incoming data transfer to CRYP via DMA is disabled (value: 1)
     */
        /** @brief Incoming data transfer to CRYP via DMA is disabled */
    constexpr std::uint32_t CRYP_DMACR_DIEN_B_0x0 = 0;
        /** @brief Incoming data transfer to CRYP via DMA is disabled */
    constexpr std::uint32_t CRYP_DMACR_DIEN_B_0x1 = 1;

    /** @brief DMA output enable */
    using CRYP_DMACR_DOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Outgoing data transfer from CRYP via DMA is disabled (value: 0)
     *          - B_0x1: Outgoing data transfer from CRYP via DMA is enabled (value: 1)
     */
        /** @brief Outgoing data transfer from CRYP via DMA is disabled */
    constexpr std::uint32_t CRYP_DMACR_DOEN_B_0x0 = 0;
        /** @brief Outgoing data transfer from CRYP via DMA is enabled */
    constexpr std::uint32_t CRYP_DMACR_DOEN_B_0x1 = 1;

    /** @brief CRYP interrupt mask set/clear register */
    using CRYP_IMSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO service interrupt mask */
    using CRYP_IMSCR_INIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input FIFO interrupt is disabled (masked), masked interrupt status (INMIS) stays cleared (value: 0)
     *          - B_0x1: Input FIFO interrupt is enabled (not masked) (value: 1)
     */
        /** @brief Input FIFO interrupt is disabled (masked), masked interrupt status (INMIS) stays cleared */
    constexpr std::uint32_t CRYP_IMSCR_INIM_B_0x0 = 0;
        /** @brief Input FIFO interrupt is enabled (not masked) */
    constexpr std::uint32_t CRYP_IMSCR_INIM_B_0x1 = 1;

    /** @brief Output FIFO service interrupt mask */
    using CRYP_IMSCR_OUTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output FIFO interrupt is disabled (masked), masked interrupt status (OUTMIS) stays cleared (value: 0)
     *          - B_0x1: Output FIFO interrupt is enabled (not masked) (value: 1)
     */
        /** @brief Output FIFO interrupt is disabled (masked), masked interrupt status (OUTMIS) stays cleared */
    constexpr std::uint32_t CRYP_IMSCR_OUTIM_B_0x0 = 0;
        /** @brief Output FIFO interrupt is enabled (not masked) */
    constexpr std::uint32_t CRYP_IMSCR_OUTIM_B_0x1 = 1;

    /** @brief CRYP raw interrupt status register */
    using CRYP_RISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO service raw interrupt status */
    using CRYP_RISR_INRIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input FIFO event detected (value: 0)
     *          - B_0x1: Input FIFO empty or not full detected; an interrupt is generated if CRYPEN is set and if INIM bit is set in CRYP_IMSCR register (value: 1)
     */
        /** @brief No input FIFO event detected */
    constexpr std::uint32_t CRYP_RISR_INRIS_B_0x0 = 0;
        /** @brief Input FIFO empty or not full detected; an interrupt is generated if CRYPEN is set and if INIM bit is set in CRYP_IMSCR register */
    constexpr std::uint32_t CRYP_RISR_INRIS_B_0x1 = 1;

    /** @brief Output FIFO service raw interrupt status */
    using CRYP_RISR_OUTRIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No output FIFO event detected (value: 0)
     *          - B_0x1: Output FIFO full or not empty detected; an interrupt is generated if OUTIM bit is set in CRYP_IMSCR register (value: 1)
     */
        /** @brief No output FIFO event detected */
    constexpr std::uint32_t CRYP_RISR_OUTRIS_B_0x0 = 0;
        /** @brief Output FIFO full or not empty detected; an interrupt is generated if OUTIM bit is set in CRYP_IMSCR register */
    constexpr std::uint32_t CRYP_RISR_OUTRIS_B_0x1 = 1;

    /** @brief CRYP masked interrupt status register */
    using CRYP_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO service masked interrupt status */
    using CRYP_MISR_INMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input FIFO event detected or INIM mask cleared in CRYP_IMSCR or CRYPEN bit cleared. (value: 0)
     *          - B_0x1: Input FIFO empty or not full detected, with an interrupt pending (value: 1)
     */
        /** @brief No input FIFO event detected or INIM mask cleared in CRYP_IMSCR or CRYPEN bit cleared. */
    constexpr std::uint32_t CRYP_MISR_INMIS_B_0x0 = 0;
        /** @brief Input FIFO empty or not full detected, with an interrupt pending */
    constexpr std::uint32_t CRYP_MISR_INMIS_B_0x1 = 1;

    /** @brief Output FIFO service masked interrupt status */
    using CRYP_MISR_OUTMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No output FIFO event detected or OUTIM mask cleared in CRYP_IMSCR (value: 0)
     *          - B_0x1: Output FIFO full or not empty detected, with an interrupt pending (value: 1)
     */
        /** @brief No output FIFO event detected or OUTIM mask cleared in CRYP_IMSCR */
    constexpr std::uint32_t CRYP_MISR_OUTMIS_B_0x0 = 0;
        /** @brief Output FIFO full or not empty detected, with an interrupt pending */
    constexpr std::uint32_t CRYP_MISR_OUTMIS_B_0x1 = 1;

    /** @brief CRYP key register 0L */
    using CRYP_K0LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key bit x */
    using CRYP_K0LR_K = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP key register 0R */
    using CRYP_K0RR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key bit x */
    using CRYP_K0RR_K = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP key register 1L */
    using CRYP_K1LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key bit x */
    using CRYP_K1LR_K = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP key register 1R */
    using CRYP_K1RR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key bit x */
    using CRYP_K1RR_K = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP key register 2L */
    using CRYP_K2LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key bit x */
    using CRYP_K2LR_K = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP key register 2R */
    using CRYP_K2RR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key bit x */
    using CRYP_K2RR_K = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP key register 3L */
    using CRYP_K3LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key bit x */
    using CRYP_K3LR_K = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP key register 3R */
    using CRYP_K3RR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key bit x */
    using CRYP_K3RR_K = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP initialization vector register 0L */
    using CRYP_IV0LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector bit x */
    using CRYP_IV0LR_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP initialization vector register 0R */
    using CRYP_IV0RR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector bit x */
    using CRYP_IV0RR_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP initialization vector register 1L */
    using CRYP_IV1LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector bit x */
    using CRYP_IV1LR_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP initialization vector register 1R */
    using CRYP_IV1RR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization vector bit x */
    using CRYP_IV1RR_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM-CCM registers */
    using CRYP_CSGCMCCM0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC and CCM modes */
    using CRYP_CSGCMCCM0R_CSGCMCCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM-CCM registers */
    using CRYP_CSGCMCCM1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC and CCM modes */
    using CRYP_CSGCMCCM1R_CSGCMCCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM-CCM registers */
    using CRYP_CSGCMCCM2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC and CCM modes */
    using CRYP_CSGCMCCM2R_CSGCMCCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM-CCM registers */
    using CRYP_CSGCMCCM3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC and CCM modes */
    using CRYP_CSGCMCCM3R_CSGCMCCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM-CCM registers */
    using CRYP_CSGCMCCM4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC and CCM modes */
    using CRYP_CSGCMCCM4R_CSGCMCCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM-CCM registers */
    using CRYP_CSGCMCCM5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC and CCM modes */
    using CRYP_CSGCMCCM5R_CSGCMCCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM-CCM registers */
    using CRYP_CSGCMCCM6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC and CCM modes */
    using CRYP_CSGCMCCM6R_CSGCMCCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM-CCM registers */
    using CRYP_CSGCMCCM7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC and CCM modes */
    using CRYP_CSGCMCCM7R_CSGCMCCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM registers */
    using CRYP_CSGCM0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC modes */
    using CRYP_CSGCM0R_CSGCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM registers */
    using CRYP_CSGCM1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC modes */
    using CRYP_CSGCM1R_CSGCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM registers */
    using CRYP_CSGCM2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC modes */
    using CRYP_CSGCM2R_CSGCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM registers */
    using CRYP_CSGCM3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC modes */
    using CRYP_CSGCM3R_CSGCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM registers */
    using CRYP_CSGCM4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC modes */
    using CRYP_CSGCM4R_CSGCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM registers */
    using CRYP_CSGCM5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC modes */
    using CRYP_CSGCM5R_CSGCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM registers */
    using CRYP_CSGCM6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC modes */
    using CRYP_CSGCM6R_CSGCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRYP context swap GCM registers */
    using CRYP_CSGCM7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap for GCM/GMAC modes */
    using CRYP_CSGCM7R_CSGCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
