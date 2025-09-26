/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H533_HASH_HPP
#define EMBEDDED_PP_STM32H533_HASH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief HASH register bank */
namespace STM32H533::HASH {

    /** @brief HASH control register */
    using HASH_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialize message digest calculation */
    using HASH_CR_INIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA enable */
    using HASH_CR_DMAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA transfers disabled (value: 0)
     *          - B_0x1: DMA transfers enabled. (value: 1)
     */
        /** @brief DMA transfers disabled */
    constexpr std::uint32_t HASH_CR_DMAE_B_0x0 = 0;
        /** @brief DMA transfers enabled. */
    constexpr std::uint32_t HASH_CR_DMAE_B_0x1 = 1;

    /** @brief Data type selection */
    using HASH_CR_DATATYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 32-bit data. (value: 0)
     *          - B_0x1: 16-bit data or half-word. (value: 1)
     *          - B_0x2: 8-bit data or bytes. (value: 2)
     *          - B_0x3: bit data or bit string. (value: 3)
     */
        /** @brief 32-bit data. */
    constexpr std::uint32_t HASH_CR_DATATYPE_B_0x0 = 0;
        /** @brief 16-bit data or half-word. */
    constexpr std::uint32_t HASH_CR_DATATYPE_B_0x1 = 1;
        /** @brief 8-bit data or bytes. */
    constexpr std::uint32_t HASH_CR_DATATYPE_B_0x2 = 2;
        /** @brief bit data or bit string. */
    constexpr std::uint32_t HASH_CR_DATATYPE_B_0x3 = 3;

    /** @brief Mode selection */
    using HASH_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hash mode selected (value: 0)
     *          - B_0x1: HMAC mode selected. (value: 1)
     */
        /** @brief Hash mode selected */
    constexpr std::uint32_t HASH_CR_MODE_B_0x0 = 0;
        /** @brief HMAC mode selected. */
    constexpr std::uint32_t HASH_CR_MODE_B_0x1 = 1;

    /** @brief Number of words already pushed */
    using HASH_CR_NBW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIN not empty */
    using HASH_CR_DINNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multiple DMA transfers */
    using HASH_CR_MDMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCAL is automatically set at the end of a DMA transfer. (value: 0)
     *          - B_0x1: DCAL is not automatically set at the end of a DMA transfer. (value: 1)
     */
        /** @brief DCAL is automatically set at the end of a DMA transfer. */
    constexpr std::uint32_t HASH_CR_MDMAT_B_0x0 = 0;
        /** @brief DCAL is not automatically set at the end of a DMA transfer. */
    constexpr std::uint32_t HASH_CR_MDMAT_B_0x1 = 1;

    /** @brief Long key selection */
    using HASH_CR_LKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HMAC key is shorter or equal to the block size (short key). (value: 0)
     *          - B_0x1: HMAC key is longer than the block size (long key). (value: 1)
     */
        /** @brief HMAC key is shorter or equal to the block size (short key). */
    constexpr std::uint32_t HASH_CR_LKEY_B_0x0 = 0;
        /** @brief HMAC key is longer than the block size (long key). */
    constexpr std::uint32_t HASH_CR_LKEY_B_0x1 = 1;

    /** @brief Algorithm selection */
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
    /** @brief Data input */
    using HASH_DIN_DATAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH start register */
    using HASH_STR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of valid bits in the last word */
    using HASH_STR_NBLW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: All the 32 bits of the last data written are valid message bits, that is M[31:0] (value: 0)
     *          - B_0x01: Only one bit of the last data written (after swapping) is valid, that is M[0] (value: 1)
     *          - B_0x02: Only two bits of the last data written (after swapping) are valid, that is M[1:0] (value: 2)
     *          - B_0x03: Only three bits of the last data written (after swapping) are valid that is M[2:0] (value: 3)
     *          - B_0x1F: Only 31 bits of the last data written (after swapping) are valid that is M[30:0] (value: 31)
     */
        /** @brief All the 32 bits of the last data written are valid message bits, that is M[31:0] */
    constexpr std::uint32_t HASH_STR_NBLW_B_0x00 = 0;
        /** @brief Only one bit of the last data written (after swapping) is valid, that is M[0] */
    constexpr std::uint32_t HASH_STR_NBLW_B_0x01 = 1;
        /** @brief Only two bits of the last data written (after swapping) are valid, that is M[1:0] */
    constexpr std::uint32_t HASH_STR_NBLW_B_0x02 = 2;
        /** @brief Only three bits of the last data written (after swapping) are valid that is M[2:0] */
    constexpr std::uint32_t HASH_STR_NBLW_B_0x03 = 3;
        /** @brief Only 31 bits of the last data written (after swapping) are valid that is M[30:0] */
    constexpr std::uint32_t HASH_STR_NBLW_B_0x1F = 31;

    /** @brief Digest calculation */
    using HASH_STR_DCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH aliased digest register 0 */
    using HASH_HRA0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HRA0_H0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH aliased digest register 1 */
    using HASH_HRA1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HRA1_H1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH aliased digest register 2 */
    using HASH_HRA2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HRA2_H2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH aliased digest register 3 */
    using HASH_HRA3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HRA3_H3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH aliased digest register 4 */
    using HASH_HRA4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HRA4_H4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief Data input interrupt status */
    using HASH_SR_DINIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 16 locations are free in the input buffer (value: 0)
     *          - B_0x1: A new block can be entered into the input buffer. (value: 1)
     */
        /** @brief Less than 16 locations are free in the input buffer */
    constexpr std::uint32_t HASH_SR_DINIS_B_0x0 = 0;
        /** @brief A new block can be entered into the input buffer. */
    constexpr std::uint32_t HASH_SR_DINIS_B_0x1 = 1;

    /** @brief Digest calculation completion interrupt status */
    using HASH_SR_DCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No digest available in the HASH_HRx registers (zeros are returned) (value: 0)
     *          - B_0x1: Digest calculation complete, a digest is available in the HASH_HRx registers. (value: 1)
     */
        /** @brief No digest available in the HASH_HRx registers (zeros are returned) */
    constexpr std::uint32_t HASH_SR_DCIS_B_0x0 = 0;
        /** @brief Digest calculation complete, a digest is available in the HASH_HRx registers. */
    constexpr std::uint32_t HASH_SR_DCIS_B_0x1 = 1;

    /** @brief DMA Status */
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

    /** @brief Number of words already pushed */
    using HASH_SR_NBWP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIN not empty */
    using HASH_SR_DINNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data are present in the data input buffer (value: 0)
     *          - B_0x1: The input buffer contains at least one word of data (value: 1)
     */
        /** @brief No data are present in the data input buffer */
    constexpr std::uint32_t HASH_SR_DINNE_B_0x0 = 0;
        /** @brief The input buffer contains at least one word of data */
    constexpr std::uint32_t HASH_SR_DINNE_B_0x1 = 1;

    /** @brief Number of words expected */
    using HASH_SR_NBWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 0 */
    using HASH_CSR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR0_CS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 1 */
    using HASH_CSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR1_CS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 2 */
    using HASH_CSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR2_CS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 3 */
    using HASH_CSR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR3_CS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 4 */
    using HASH_CSR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR4_CS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 5 */
    using HASH_CSR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR5_CS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 6 */
    using HASH_CSR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR6_CS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 7 */
    using HASH_CSR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR7_CS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 8 */
    using HASH_CSR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR8_CS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 9 */
    using HASH_CSR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR9_CS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 10 */
    using HASH_CSR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR10_CS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 11 */
    using HASH_CSR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR11_CS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 12 */
    using HASH_CSR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR12_CS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 13 */
    using HASH_CSR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR13_CS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 14 */
    using HASH_CSR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR14_CS14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 15 */
    using HASH_CSR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR15_CS15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 16 */
    using HASH_CSR16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR16_CS16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 17 */
    using HASH_CSR17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR17_CS17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 18 */
    using HASH_CSR18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR18_CS18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 19 */
    using HASH_CSR19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR19_CS19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 20 */
    using HASH_CSR20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR20_CS20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 21 */
    using HASH_CSR21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR21_CS21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 22 */
    using HASH_CSR22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR22_CS22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 23 */
    using HASH_CSR23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR23_CS23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 24 */
    using HASH_CSR24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR24_CS24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 25 */
    using HASH_CSR25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR25_CS25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 26 */
    using HASH_CSR26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR26_CS26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 27 */
    using HASH_CSR27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR27_CS27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 28 */
    using HASH_CSR28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR28_CS28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 29 */
    using HASH_CSR29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR29_CS29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 30 */
    using HASH_CSR30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR30_CS30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 31 */
    using HASH_CSR31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR31_CS31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 32 */
    using HASH_CSR32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR32_CS32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 33 */
    using HASH_CSR33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR33_CS33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 34 */
    using HASH_CSR34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR34_CS34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 35 */
    using HASH_CSR35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR35_CS35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 36 */
    using HASH_CSR36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR36_CS36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 37 */
    using HASH_CSR37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR37_CS37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 38 */
    using HASH_CSR38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR38_CS38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 39 */
    using HASH_CSR39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR39_CS39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 40 */
    using HASH_CSR40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR40_CS40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 41 */
    using HASH_CSR41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR41_CS41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 42 */
    using HASH_CSR42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR42_CS42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 43 */
    using HASH_CSR43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR43_CS43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 44 */
    using HASH_CSR44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR44_CS44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 45 */
    using HASH_CSR45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR45_CS45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 46 */
    using HASH_CSR46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR46_CS46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 47 */
    using HASH_CSR47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR47_CS47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 48 */
    using HASH_CSR48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR48_CS48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 49 */
    using HASH_CSR49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR49_CS49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 50 */
    using HASH_CSR50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR50_CS50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 51 */
    using HASH_CSR51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR51_CS51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 52 */
    using HASH_CSR52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR52_CS52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 53 */
    using HASH_CSR53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR53_CS53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 54 */
    using HASH_CSR54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR54_CS54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 55 */
    using HASH_CSR55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR55_CS55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 56 */
    using HASH_CSR56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR56_CS56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 57 */
    using HASH_CSR57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR57_CS57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 58 */
    using HASH_CSR58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR58_CS58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 59 */
    using HASH_CSR59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR59_CS59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 60 */
    using HASH_CSR60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR60_CS60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 61 */
    using HASH_CSR61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR61_CS61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 62 */
    using HASH_CSR62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR62_CS62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 63 */
    using HASH_CSR63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR63_CS63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 64 */
    using HASH_CSR64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR64_CS64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 65 */
    using HASH_CSR65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR65_CS65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 66 */
    using HASH_CSR66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR66_CS66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 67 */
    using HASH_CSR67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR67_CS67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 68 */
    using HASH_CSR68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR68_CS68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 69 */
    using HASH_CSR69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR69_CS69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 70 */
    using HASH_CSR70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR70_CS70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 71 */
    using HASH_CSR71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR71_CS71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 72 */
    using HASH_CSR72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR72_CS72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 73 */
    using HASH_CSR73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR73_CS73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 74 */
    using HASH_CSR74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR74_CS74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 75 */
    using HASH_CSR75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR75_CS75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 76 */
    using HASH_CSR76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR76_CS76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 77 */
    using HASH_CSR77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR77_CS77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 78 */
    using HASH_CSR78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR78_CS78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 79 */
    using HASH_CSR79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR79_CS79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 80 */
    using HASH_CSR80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR80_CS80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 81 */
    using HASH_CSR81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x23C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR81_CS81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 82 */
    using HASH_CSR82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR82_CS82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 83 */
    using HASH_CSR83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR83_CS83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 84 */
    using HASH_CSR84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR84_CS84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 85 */
    using HASH_CSR85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR85_CS85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 86 */
    using HASH_CSR86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR86_CS86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 87 */
    using HASH_CSR87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR87_CS87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 88 */
    using HASH_CSR88 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x258, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR88_CS88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 89 */
    using HASH_CSR89 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x25C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR89_CS89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 90 */
    using HASH_CSR90 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR90_CS90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 91 */
    using HASH_CSR91 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR91_CS91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 92 */
    using HASH_CSR92 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x268, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR92_CS92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 93 */
    using HASH_CSR93 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR93_CS93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 94 */
    using HASH_CSR94 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR94_CS94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 95 */
    using HASH_CSR95 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x274, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR95_CS95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 96 */
    using HASH_CSR96 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x278, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR96_CS96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 97 */
    using HASH_CSR97 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x27C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR97_CS97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 98 */
    using HASH_CSR98 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR98_CS98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 99 */
    using HASH_CSR99 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR99_CS99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 100 */
    using HASH_CSR100 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR100_CS100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 101 */
    using HASH_CSR101 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR101_CS101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH context swap register 102 */
    using HASH_CSR102 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context swap x */
    using HASH_CSR102_CS102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register 0 */
    using HASH_HR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR0_H0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register 1 */
    using HASH_HR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR1_H1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register 2 */
    using HASH_HR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR2_H2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register 3 */
    using HASH_HR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR3_H3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH digest register 4 */
    using HASH_HR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR4_H4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH supplementary digest register 5 */
    using HASH_HR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x324, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR5_H5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH supplementary digest register 6 */
    using HASH_HR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x328, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR6_H6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH supplementary digest register 7 */
    using HASH_HR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x32C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR7_H7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH supplementary digest register 8 */
    using HASH_HR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x330, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR8_H8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH supplementary digest register 9 */
    using HASH_HR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x334, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR9_H9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH supplementary digest register 10 */
    using HASH_HR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x338, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR10_H10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH supplementary digest register 11 */
    using HASH_HR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x33C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR11_H11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH supplementary digest register 12 */
    using HASH_HR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x340, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR12_H12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH supplementary digest register 13 */
    using HASH_HR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x344, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR13_H13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH supplementary digest register 14 */
    using HASH_HR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x348, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR14_H14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HASH supplementary digest register 15 */
    using HASH_HR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash data x */
    using HASH_HR15_H15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
