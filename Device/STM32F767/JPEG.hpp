/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F767_JPEG_HPP
#define EMBEDDED_PP_STM32F767_JPEG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief JPEG codec */
namespace STM32F767::JPEG {

    /** @brief JPEG codec configuration register 0 */
    using JPEG_CONFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start */
    using JPEG_CONFR0_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 1 */
    using JPEG_CONFR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of color components */
    using JPEG_CONFR1_NF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decoding Enable */
    using JPEG_CONFR1_DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color Space */
    using JPEG_CONFR1_COLORSPACE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of components for Scan */
    using JPEG_CONFR1_NS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Header Processing */
    using JPEG_CONFR1_HDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Y Size */
    using JPEG_CONFR1_YSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 2 */
    using JPEG_CONFR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of MCU */
    using JPEG_CONFR2_NMCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 3 */
    using JPEG_CONFR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief X size */
    using JPEG_CONFR3_XSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 4 */
    using JPEG_CONFR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC */
    using JPEG_CONFR4_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman AC */
    using JPEG_CONFR4_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization Table */
    using JPEG_CONFR4_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Block */
    using JPEG_CONFR4_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical Sampling Factor */
    using JPEG_CONFR4_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal Sampling Factor */
    using JPEG_CONFR4_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 5 */
    using JPEG_CONFR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC */
    using JPEG_CONFR5_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman AC */
    using JPEG_CONFR5_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization Table */
    using JPEG_CONFR5_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Block */
    using JPEG_CONFR5_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical Sampling Factor */
    using JPEG_CONFR5_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal Sampling Factor */
    using JPEG_CONFR5_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 6 */
    using JPEG_CONFR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC */
    using JPEG_CONFR6_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman AC */
    using JPEG_CONFR6_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization Table */
    using JPEG_CONFR6_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Block */
    using JPEG_CONFR6_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical Sampling Factor */
    using JPEG_CONFR6_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal Sampling Factor */
    using JPEG_CONFR6_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 7 */
    using JPEG_CONFR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC */
    using JPEG_CONFR7_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman AC */
    using JPEG_CONFR7_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization Table */
    using JPEG_CONFR7_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Block */
    using JPEG_CONFR7_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical Sampling Factor */
    using JPEG_CONFR7_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal Sampling Factor */
    using JPEG_CONFR7_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG control register */
    using JPEG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Core Enable */
    using JPEG_CR_JCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO Threshold Interrupt Enable */
    using JPEG_CR_IFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO Not Full Interrupt Enable */
    using JPEG_CR_IFNFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output FIFO Threshold Interrupt Enable */
    using JPEG_CR_OFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output FIFO Not Empty Interrupt Enable */
    using JPEG_CR_OFNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Conversion Interrupt Enable */
    using JPEG_CR_EOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Header Parsing Done Interrupt Enable */
    using JPEG_CR_HPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA Enable */
    using JPEG_CR_IDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output DMA Enable */
    using JPEG_CR_ODMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO Flush */
    using JPEG_CR_IFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output FIFO Flush */
    using JPEG_CR_OFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG status register */
    using JPEG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO Threshold Flag */
    using JPEG_SR_IFTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO Not Full Flag */
    using JPEG_SR_IFNFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output FIFO Threshold Flag */
    using JPEG_SR_OFTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output FIFO Not Empty Flag */
    using JPEG_SR_OFNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Conversion Flag */
    using JPEG_SR_EOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Header Parsing Done Flag */
    using JPEG_SR_HPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Codec Operation Flag */
    using JPEG_SR_COF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG clear flag register */
    using JPEG_CFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear End of Conversion Flag */
    using JPEG_CFR_CEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Header Parsing Done Flag */
    using JPEG_CFR_CHPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG data input register */
    using JPEG_DIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Input FIFO */
    using JPEG_DIR_DATAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG data output register */
    using JPEG_DOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Output FIFO */
    using JPEG_DOR_DATAOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_0_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_1_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_2_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_3_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_4_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_5_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_6_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_7_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_8_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_9_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_10_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_11_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_12_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_13_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_14_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM0_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM0_15_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_0_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_1_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_2_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_3_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_4_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_5_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_6_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_7_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_8_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_9_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_10_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_11_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_12_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_13_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_14_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM1_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM1_15_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_0_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_1_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_2_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_3_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_4_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_5_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_6_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_7_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_8_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_9_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_10_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_11_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_12_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_13_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_14_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM2_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM2_15_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_0_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_1_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_2_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_3_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_4_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_5_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_6_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_7_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_8_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_9_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_10_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_11_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_12_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_13_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_14_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization tables */
    using QMEM3_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QMem RAM */
    using QMEM3_15_QMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_0_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_1_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_2_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_3_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_4_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_5_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_6_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_7_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_8_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_9_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_10_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_11_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_12_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_13_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_14_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffMin tables */
    using HUFFMIN_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffMin RAM */
    using HUFFMIN_15_HuffMin_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE0_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE0_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE1_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE1_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE2_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE2_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE3_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE3_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE4_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE4_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE5_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE5_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE6_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE6_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE7_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE7_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE8_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE8_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE9_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE9_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE10_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE10_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE11_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE11_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE12_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE12_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE13_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE13_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE14_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE14_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE15_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE15_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE16_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE16_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE17_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE17_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE18_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE18_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE19_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE19_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE20_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE20_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE21_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE21_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE22_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE22_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE23_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE23_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE24_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE24_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE25_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE25_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE26_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE26_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE27_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE27_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE28_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE28_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE29_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE29_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE30_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE30_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HuffSymb tables */
    using HUFFBASE31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE31_HuffBase_RAM_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HuffBase RAM */
    using HUFFBASE31_HuffBase_RAM_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB0_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB1_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB2_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB3_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB4_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB5_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB6_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB7_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB8_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB9_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB10_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x23C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB11_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB12_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB13_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB14_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB15_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB16_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB17_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x258, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB18_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x25C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB19_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB20_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB21_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x268, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB22_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB23_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB24_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x274, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB25_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x278, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB26_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x27C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB27_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB28_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB29_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB30_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB31_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB32_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB33_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB34_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB35_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB36_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB37_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB38_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB39_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB40_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB41_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB42_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB43_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB44_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB45_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB46_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB47_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB48_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB49_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB50_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB51_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB52_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB53_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB54_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB55_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB56_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB57_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB58_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB59_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB60_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB61_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB62_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB63_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB64_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB65_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB66_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB67_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB68_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x324, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB69_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x328, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB70_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x32C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB71_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x330, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB72_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x334, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB73_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x338, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB74_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x33C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB75_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x340, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB76_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x344, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB77_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x348, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB78_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB79_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x350, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB80_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x354, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB81_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x358, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB82_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG HUFFSYMB tables */
    using HUFFSYMB83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x35C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTSymb RAM */
    using HUFFSYMB83_HuffSymb_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x360, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM0_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x364, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM2_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x368, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM3_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x36C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM4_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x370, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM5_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x374, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM6_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x378, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM7_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x37C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM8_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x380, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM9_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x384, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM10_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x388, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM11_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM12_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x390, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM13_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x394, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM14_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x398, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM15_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x39C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM16_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM17_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM18_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM19_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM20_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM21_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM22_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM23_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM24_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM25_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM26_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM27_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM28_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM29_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM30_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM31_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM32_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM33_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM34_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM35_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM36_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM37_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM38_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM39_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM40_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM41_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM42_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x408, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM43_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM44_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM45_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM46_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM47_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM48_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM49_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x424, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM50_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x428, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM51_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM52_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x430, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM53_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x434, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM54_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x438, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM55_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x43C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM56_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x440, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM57_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x444, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM58_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x448, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM59_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM60_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x450, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM61_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x454, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM62_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x458, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM63_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM64_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x460, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM65_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x464, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM66_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x468, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM67_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x46C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM68_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x470, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM69_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x474, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM70_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x478, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM71_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x47C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM72_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x480, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM73_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x484, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM74_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x488, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM75_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM76_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x490, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM77_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x494, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM78_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x498, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM79_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x49C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM80_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM81_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM82_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM83_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM84_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM85_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM86_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM87_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM88 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM88_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM89 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM89_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM90 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM90_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM91 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM91_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM92 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM92_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM93 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM93_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM94 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM94_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM95 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM95_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM96 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM96_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM97 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM97_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM98 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM98_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM99 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM99_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM100 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM100_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM101 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM101_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM102 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM102_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHTMem tables */
    using DHTMEM103 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using DHTMEM103_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x500, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_0_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x504, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_1_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x508, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_2_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_3_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x510, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_4_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x514, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_5_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x518, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_6_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x51C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_7_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x520, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_8_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x524, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_9_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x528, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_10_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x52C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_11_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x530, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_12_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x534, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_13_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x538, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_14_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x53C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_15_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x540, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_16_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x544, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_17_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x548, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_18_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_19_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x550, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_20_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x554, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_21_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x558, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_22_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x55C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_23_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x560, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_24_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x564, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_25_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x568, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_26_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x56C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_27_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x570, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_28_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x574, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_29_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x578, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_30_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x57C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_31_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x580, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_32_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x584, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_33_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x588, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_34_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_35_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x590, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_36_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x594, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_37_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x598, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_38_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x59C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_39_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_40_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_41_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_42_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_43_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_44_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_45_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_46_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_47_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_48_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_49_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_50_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_51_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_52_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_53_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_54_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_55_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_56_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_57_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_58_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_59_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_60_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_61_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_62_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_63_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x600, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_64_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x604, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_65_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x608, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_66_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_67_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x610, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_68_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x614, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_69_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x618, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_70_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x61C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_71_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x620, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_72_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x624, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_73_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x628, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_74_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x62C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_75_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x630, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_76_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x634, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_77_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x638, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_78_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x63C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_79_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x640, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_80_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x644, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_81_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x648, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_82_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_83_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x650, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_84_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x654, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_85_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x658, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_86_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 0 */
    using HUFFENC_AC0_87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x65C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC0_87_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x660, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_0_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x664, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_1_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x668, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_2_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x66C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_3_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x670, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_4_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x674, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_5_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x678, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_6_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x67C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_7_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x680, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_8_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x684, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_9_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x688, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_10_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_11_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x690, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_12_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x694, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_13_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x698, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_14_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x69C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_15_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_16_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_17_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_18_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_19_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_20_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_21_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_22_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_23_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_24_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_25_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_26_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_27_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_28_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_29_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_30_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_31_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_32_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_33_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_34_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_35_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_36_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_37_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_38_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_39_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x700, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_40_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x704, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_41_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x708, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_42_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_43_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x710, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_44_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x714, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_45_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x718, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_46_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x71C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_47_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x720, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_48_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x724, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_49_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x728, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_50_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x72C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_51_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x730, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_52_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x734, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_53_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x738, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_54_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x73C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_55_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x740, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_56_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x744, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_57_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x748, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_58_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_59_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x750, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_60_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x754, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_61_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x758, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_62_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x75C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_63_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x760, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_64_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x764, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_65_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x768, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_66_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x76C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_67_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x770, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_68_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x774, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_69_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x778, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_70_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x77C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_71_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x780, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_72_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x784, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_73_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x788, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_74_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_75_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x790, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_76_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x794, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_77_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x798, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_78_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x79C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_79_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_80_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_81_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_82_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_83_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_84_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_85_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_86_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, AC Huffman table 1 */
    using HUFFENC_AC1_87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_AC1_87_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 0 */
    using HUFFENC_DC0_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC0_0_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 0 */
    using HUFFENC_DC0_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC0_1_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 0 */
    using HUFFENC_DC0_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC0_2_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 0 */
    using HUFFENC_DC0_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC0_3_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 0 */
    using HUFFENC_DC0_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC0_4_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 0 */
    using HUFFENC_DC0_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC0_5_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 0 */
    using HUFFENC_DC0_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC0_6_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 0 */
    using HUFFENC_DC0_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC0_7_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 1 */
    using HUFFENC_DC1_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC1_0_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 1 */
    using HUFFENC_DC1_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC1_1_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 1 */
    using HUFFENC_DC1_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC1_2_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 1 */
    using HUFFENC_DC1_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC1_3_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 1 */
    using HUFFENC_DC1_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC1_4_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 1 */
    using HUFFENC_DC1_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC1_5_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 1 */
    using HUFFENC_DC1_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC1_6_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG encoder, DC Huffman table 1 */
    using HUFFENC_DC1_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHTMem RAM */
    using HUFFENC_DC1_7_DHTMem_RAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
