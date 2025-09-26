/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7B0_JPEG_HPP
#define EMBEDDED_PP_STM32H7B0_JPEG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief JPEG */
namespace STM32H7B0::JPEG {

    /** @brief JPEG codec control register */
    using JPEG_CONFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start This bit start or stop the encoding or decoding process. Read this register always return 0. */
    using JPEG_CONFR0_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 1 */
    using JPEG_CONFR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of color components This field defines the number of color components minus 1. */
    using JPEG_CONFR1_NF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decoding Enable This bit selects the coding or decoding process */
    using JPEG_CONFR1_DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color Space This filed defines the number of quantization tables minus 1 to insert in the output stream. */
    using JPEG_CONFR1_COLORSPACE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of components for Scan This field defines the number of components minus 1 for scan header marker segment. */
    using JPEG_CONFR1_NS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Header Processing This bit enable the header processing (generation/parsing). */
    using JPEG_CONFR1_HDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Y Size This field defines the number of lines in source image. */
    using JPEG_CONFR1_YSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 2 */
    using JPEG_CONFR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of MCU For encoding: this field defines the number of MCU units minus 1 to encode. For decoding: this field indicates the number of complete MCU units minus 1 to be decoded (this field is updated after the JPEG header parsing). If the decoded image size has not a X or Y size multiple of 8 or 16 (depending on the sub-sampling process), the resulting incomplete or empty MCU must be added to this value to get the total number of MCU generated. */
    using JPEG_CONFR2_NMCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 3 */
    using JPEG_CONFR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief X size This field defines the number of pixels per line. */
    using JPEG_CONFR3_XSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 4-7 */
    using JPEG_CONFRN1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC Selects the Huffman table for encoding the DC coefficients. */
    using JPEG_CONFRN1_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman AC Selects the Huffman table for encoding the AC coefficients. */
    using JPEG_CONFRN1_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization Table Selects quantization table associated with a color component. */
    using JPEG_CONFRN1_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Block Number of data units minus 1 that belong to a particular color in the MCU. */
    using JPEG_CONFRN1_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical Sampling Factor Vertical sampling factor for component i. */
    using JPEG_CONFRN1_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal Sampling Factor Horizontal sampling factor for component i. */
    using JPEG_CONFRN1_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 4-7 */
    using JPEG_CONFRN2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC Selects the Huffman table for encoding the DC coefficients. */
    using JPEG_CONFRN2_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman AC Selects the Huffman table for encoding the AC coefficients. */
    using JPEG_CONFRN2_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization Table Selects quantization table associated with a color component. */
    using JPEG_CONFRN2_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Block Number of data units minus 1 that belong to a particular color in the MCU. */
    using JPEG_CONFRN2_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical Sampling Factor Vertical sampling factor for component i. */
    using JPEG_CONFRN2_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal Sampling Factor Horizontal sampling factor for component i. */
    using JPEG_CONFRN2_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 4-7 */
    using JPEG_CONFRN3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC Selects the Huffman table for encoding the DC coefficients. */
    using JPEG_CONFRN3_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman AC Selects the Huffman table for encoding the AC coefficients. */
    using JPEG_CONFRN3_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization Table Selects quantization table associated with a color component. */
    using JPEG_CONFRN3_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Block Number of data units minus 1 that belong to a particular color in the MCU. */
    using JPEG_CONFRN3_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical Sampling Factor Vertical sampling factor for component i. */
    using JPEG_CONFRN3_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal Sampling Factor Horizontal sampling factor for component i. */
    using JPEG_CONFRN3_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 4-7 */
    using JPEG_CONFRN4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC Selects the Huffman table for encoding the DC coefficients. */
    using JPEG_CONFRN4_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman AC Selects the Huffman table for encoding the AC coefficients. */
    using JPEG_CONFRN4_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization Table Selects quantization table associated with a color component. */
    using JPEG_CONFRN4_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Block Number of data units minus 1 that belong to a particular color in the MCU. */
    using JPEG_CONFRN4_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical Sampling Factor Vertical sampling factor for component i. */
    using JPEG_CONFRN4_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal Sampling Factor Horizontal sampling factor for component i. */
    using JPEG_CONFRN4_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG control register */
    using JPEG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Core Enable Enable the JPEG codec Core. */
    using JPEG_CR_JCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO Threshold Interrupt Enable This bit enables the interrupt generation when input FIFO reach the threshold. */
    using JPEG_CR_IFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO Not Full Interrupt Enable This bit enables the interrupt generation when input FIFO is not empty. */
    using JPEG_CR_IFNFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output FIFO Threshold Interrupt Enable This bit enables the interrupt generation when output FIFO reach the threshold. */
    using JPEG_CR_OFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output FIFO Not Empty Interrupt Enable This bit enables the interrupt generation when output FIFO is not empty. */
    using JPEG_CR_OFNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Conversion Interrupt Enable This bit enables the interrupt generation on the end of conversion. */
    using JPEG_CR_EOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Header Parsing Done Interrupt Enable This bit enables the interrupt generation on the Header Parsing Operation. */
    using JPEG_CR_HPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input DMA Enable Enable the DMA request generation for the input FIFO. */
    using JPEG_CR_IDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output DMA Enable Enable the DMA request generation for the output FIFO. */
    using JPEG_CR_ODMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO Flush This bit flush the input FIFO. This bit is always read as 0. */
    using JPEG_CR_IFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output FIFO Flush This bit flush the output FIFO. This bit is always read as 0. */
    using JPEG_CR_OFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG status register */
    using JPEG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO Threshold Flag This bit is set when the input FIFO is not full and is bellow its threshold. */
    using JPEG_SR_IFTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO Not Full Flag This bit is set when the input FIFO is not full (a data can be written). */
    using JPEG_SR_IFNFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output FIFO Threshold Flag This bit is set when the output FIFO is not empty and has reach its threshold. */
    using JPEG_SR_OFTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output FIFO Not Empty Flag This bit is set when the output FIFO is not empty (a data is available). */
    using JPEG_SR_OFNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Conversion Flag This bit is set when the JPEG codec core has finished the encoding or the decoding process and than last data has been sent to the output FIFO. */
    using JPEG_SR_EOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Header Parsing Done Flag This bit is set in decode mode when the JPEG codec has finished the parsing of the headers and the internal registers have been updated. */
    using JPEG_SR_HPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Codec Operation Flag This bit is set when when a JPEG codec operation is on going (encoding or decoding). */
    using JPEG_SR_COF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG clear flag register */
    using JPEG_CFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear End of Conversion Flag Writing 1 clears the End of Conversion Flag of the JPEG Status Register. */
    using JPEG_CFR_CEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Header Parsing Done Flag Writing 1 clears the Header Parsing Done Flag of the JPEG Status Register. */
    using JPEG_CFR_CHPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG data input register */
    using JPEG_DIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Input FIFO Input FIFO data register. */
    using JPEG_DIR_DATAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG data output register */
    using JPEG_DOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Output FIFO Output FIFO data register. */
    using JPEG_DOR_DATAOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
