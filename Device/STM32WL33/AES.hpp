/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_AES_HPP
#define EMBEDDED_PP_STM32WL33_AES_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief AES peripheral */
namespace STM32WL33::AES {

    /** @brief AES_CR register */
    using AES_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EN: AES IP enable */
    using AES_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATATYPE[1:0]: Data type selection */
    using AES_CR_DATATYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE[1:0]: AES operating mode */
    using AES_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHMOD[1:0]: AES Chaining Mode selection */
    using AES_CR_CHMOD_1_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCFC: Computation Complete Flag Clear */
    using AES_CR_CCFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ERRC: Error clear */
    using AES_CR_ERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCFIE: CCF Flag Interrupt Enable */
    using AES_CR_CCFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ERRIE: Error Interrupt Enable */
    using AES_CR_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAINEN: DMA Input Enable */
    using AES_CR_DMAINEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAOUTEN: DMA Output Enable */
    using AES_CR_DMAOUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GCMPH[1:0]: GCM or CCM Phase selection */
    using AES_CR_GCMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CHMOD[2]: Chaining mode selection, bit [2] */
    using AES_CR_CHMOD_2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief KEYSIZE: Key Size selection. */
    using AES_CR_KEYSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NPBLB: Number of Padding Bytes in Last Block of payload. */
    using AES_CR_NPBLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES_SR register */
    using AES_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCF: Computation complete flag */
    using AES_SR_CCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RDERR: Read error flag */
    using AES_SR_RDERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WRERR: Write error flag */
    using AES_SR_WRERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSY: Busy flag */
    using AES_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES_DINR register */
    using AES_DINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DINR[x+31:x]: One of four 32-bit words of a 128-bit input data block being written into the peripheral */
    using AES_DINR_DINR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES_DOUTR register */
    using AES_DOUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DOUTR[x+31:x]: One of four 32-bit words of a 128-bit output data block being read from the */
    using AES_DOUTR_DOUTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES_KEYRx register */
    using AES_KEYR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief KEY [((32*x)+31):((32*x)+0)]: Cryptographic key, bits [((32*x)+31):((32*x)+0)] */
    using AES_KEYR0_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES_KEYRx register */
    using AES_KEYR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief KEY [((32*x)+31):((32*x)+0)]: Cryptographic key, bits [((32*x)+31):((32*x)+0)] */
    using AES_KEYR1_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES_KEYRx register */
    using AES_KEYR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief KEY [((32*x)+31):((32*x)+0)]: Cryptographic key, bits [((32*x)+31):((32*x)+0)] */
    using AES_KEYR2_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES_KEYRx register */
    using AES_KEYR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief KEY [((32*x)+31):((32*x)+0)]: Cryptographic key, bits [((32*x)+31):((32*x)+0)] */
    using AES_KEYR3_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES_IVRx register */
    using AES_IVR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IVI [((32*x)+31):((32*x)+0)]: Initialization vector register (LSB IVR[((32*x)+31):((32*x)+0)]) */
    using AES_IVR0_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES_IVRx register */
    using AES_IVR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IVI [((32*x)+31):((32*x)+0)]: Initialization vector register (LSB IVR[((32*x)+31):((32*x)+0)]) */
    using AES_IVR1_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES_IVRx register */
    using AES_IVR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IVI [((32*x)+31):((32*x)+0)]: Initialization vector register (LSB IVR[((32*x)+31):((32*x)+0)]) */
    using AES_IVR2_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES_IVRx register */
    using AES_IVR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IVI [((32*x)+31):((32*x)+0)]: Initialization vector register (LSB IVR[((32*x)+31):((32*x)+0)]) */
    using AES_IVR3_IVI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
