/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U5GX_JPEG_HPP
#define EMBEDDED_PP_STM32U5GX_JPEG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief JPEG address block description */
namespace STM32U5Gx::JPEG {

    /** @brief JPEG codec control register */
    using JPEG_CONFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start This bit start or stop the encoding or decoding process. Note: Reads always return 0. */
    using JPEG_CONFR0_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop/abort (value: 0)
     *          - B_0x1: Start (value: 1)
     */
        /** @brief Stop/abort */
    constexpr std::uint32_t JPEG_CONFR0_START_B_0x0 = 0;
        /** @brief Start */
    constexpr std::uint32_t JPEG_CONFR0_START_B_0x1 = 1;

    /** @brief JPEG codec configuration register 1 */
    using JPEG_CONFR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of color components This field defines the number of color components minus 1. */
    using JPEG_CONFR1_NF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Grayscale (1 color component) (value: 0)
     *          - B_0x1: - (2 color components) (value: 1)
     *          - B_0x2: YUV or RGB (3 color components) (value: 2)
     *          - B_0x3: CMYK (4 color components) (value: 3)
     */
        /** @brief Grayscale (1 color component) */
    constexpr std::uint32_t JPEG_CONFR1_NF_B_0x0 = 0;
        /** @brief - (2 color components) */
    constexpr std::uint32_t JPEG_CONFR1_NF_B_0x1 = 1;
        /** @brief YUV or RGB (3 color components) */
    constexpr std::uint32_t JPEG_CONFR1_NF_B_0x2 = 2;
        /** @brief CMYK (4 color components) */
    constexpr std::uint32_t JPEG_CONFR1_NF_B_0x3 = 3;

    /** @brief Codec operation as coder or decoder This bit selects the code or decode process */
    using JPEG_CONFR1_DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Code (value: 0)
     *          - B_0x1: Decode (value: 1)
     */
        /** @brief Code */
    constexpr std::uint32_t JPEG_CONFR1_DE_B_0x0 = 0;
        /** @brief Decode */
    constexpr std::uint32_t JPEG_CONFR1_DE_B_0x1 = 1;

    /** @brief Color space This filed defines the number of quantization tables minus 1 to insert in the output stream. */
    using JPEG_CONFR1_COLSPACE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Grayscale (1 quantization table) (value: 0)
     *          - B_0x1: YUV (2 quantization tables) (value: 1)
     *          - B_0x2: RGB (3 quantization tables) (value: 2)
     *          - B_0x3: CMYK (4 quantization tables) (value: 3)
     */
        /** @brief Grayscale (1 quantization table) */
    constexpr std::uint32_t JPEG_CONFR1_COLSPACE_B_0x0 = 0;
        /** @brief YUV (2 quantization tables) */
    constexpr std::uint32_t JPEG_CONFR1_COLSPACE_B_0x1 = 1;
        /** @brief RGB (3 quantization tables) */
    constexpr std::uint32_t JPEG_CONFR1_COLSPACE_B_0x2 = 2;
        /** @brief CMYK (4 quantization tables) */
    constexpr std::uint32_t JPEG_CONFR1_COLSPACE_B_0x3 = 3;

    /** @brief Number of components for scan This field defines the number of components minus 1 for scan header marker segment. */
    using JPEG_CONFR1_NS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Header processing This bit enables the header processing (generation/parsing). */
    using JPEG_CONFR1_HDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t JPEG_CONFR1_HDR_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t JPEG_CONFR1_HDR_B_0x1 = 1;

    /** @brief Y Size This field defines the number of lines in source image. */
    using JPEG_CONFR1_YSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 2 */
    using JPEG_CONFR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of MCUs For encoding: this field defines the number of MCU units minus 1 to encode. For decoding: this field indicates the number of complete MCU units minus 1 to be decoded (this field is updated after the JPEG header parsing). If the decoded image size has not a X or Y size multiple of 8 or 16 (depending on the sub-sampling process), the resulting incomplete or empty MCU must be added to this value to get the total number of MCUs generated. */
    using JPEG_CONFR2_NMCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 3 */
    using JPEG_CONFR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief X size This field defines the number of pixels per line. */
    using JPEG_CONFR3_XSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 4 */
    using JPEG_CONFR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC Selects the Huffman table for encoding DC coefficients. */
    using JPEG_CONFR4_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Huffman DC table 0 (value: 0)
     *          - B_0x1: Huffman DC table 1 (value: 1)
     */
        /** @brief Huffman DC table 0 */
    constexpr std::uint32_t JPEG_CONFR4_HD_B_0x0 = 0;
        /** @brief Huffman DC table 1 */
    constexpr std::uint32_t JPEG_CONFR4_HD_B_0x1 = 1;

    /** @brief Huffman AC Selects the Huffman table for encoding AC coefficients. */
    using JPEG_CONFR4_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Huffman AC table 0 (value: 0)
     *          - B_0x1: Huffman AC table 1 (value: 1)
     */
        /** @brief Huffman AC table 0 */
    constexpr std::uint32_t JPEG_CONFR4_HA_B_0x0 = 0;
        /** @brief Huffman AC table 1 */
    constexpr std::uint32_t JPEG_CONFR4_HA_B_0x1 = 1;

    /** @brief Quantization table Selects quantization table used for component 0. */
    using JPEG_CONFR4_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Quantization table 0 (value: 0)
     *          - B_0x1: Quantization table 1 (value: 1)
     *          - B_0x2: Quantization table 2 (value: 2)
     *          - B_0x3: Quantization table 3 (value: 3)
     */
        /** @brief Quantization table 0 */
    constexpr std::uint32_t JPEG_CONFR4_QT_B_0x0 = 0;
        /** @brief Quantization table 1 */
    constexpr std::uint32_t JPEG_CONFR4_QT_B_0x1 = 1;
        /** @brief Quantization table 2 */
    constexpr std::uint32_t JPEG_CONFR4_QT_B_0x2 = 2;
        /** @brief Quantization table 3 */
    constexpr std::uint32_t JPEG_CONFR4_QT_B_0x3 = 3;

    /** @brief Number of blocks Number of data units minus 1 that belong to a particular color in the MCU. */
    using JPEG_CONFR4_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical sampling factor Vertical sampling factor for component 0. */
    using JPEG_CONFR4_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal sampling factor Horizontal sampling factor for component 0. */
    using JPEG_CONFR4_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 5 */
    using JPEG_CONFR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC Selects the Huffman table for encoding DC coefficients. */
    using JPEG_CONFR5_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Huffman DC table 0 (value: 0)
     *          - B_0x1: Huffman DC table 1 (value: 1)
     */
        /** @brief Huffman DC table 0 */
    constexpr std::uint32_t JPEG_CONFR5_HD_B_0x0 = 0;
        /** @brief Huffman DC table 1 */
    constexpr std::uint32_t JPEG_CONFR5_HD_B_0x1 = 1;

    /** @brief Huffman AC Selects the Huffman table for encoding AC coefficients. */
    using JPEG_CONFR5_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Huffman AC table 0 (value: 0)
     *          - B_0x1: Huffman AC table 1 (value: 1)
     */
        /** @brief Huffman AC table 0 */
    constexpr std::uint32_t JPEG_CONFR5_HA_B_0x0 = 0;
        /** @brief Huffman AC table 1 */
    constexpr std::uint32_t JPEG_CONFR5_HA_B_0x1 = 1;

    /** @brief Quantization table Selects quantization table used for component 1. */
    using JPEG_CONFR5_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Quantization table 0 (value: 0)
     *          - B_0x1: Quantization table 1 (value: 1)
     *          - B_0x2: Quantization table 2 (value: 2)
     *          - B_0x3: Quantization table 3 (value: 3)
     */
        /** @brief Quantization table 0 */
    constexpr std::uint32_t JPEG_CONFR5_QT_B_0x0 = 0;
        /** @brief Quantization table 1 */
    constexpr std::uint32_t JPEG_CONFR5_QT_B_0x1 = 1;
        /** @brief Quantization table 2 */
    constexpr std::uint32_t JPEG_CONFR5_QT_B_0x2 = 2;
        /** @brief Quantization table 3 */
    constexpr std::uint32_t JPEG_CONFR5_QT_B_0x3 = 3;

    /** @brief Number of blocks Number of data units minus 1 that belong to a particular color in the MCU. */
    using JPEG_CONFR5_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical sampling factor Vertical sampling factor for component 1. */
    using JPEG_CONFR5_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal sampling factor Horizontal sampling factor for component 1. */
    using JPEG_CONFR5_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 6 */
    using JPEG_CONFR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC Selects the Huffman table for encoding DC coefficients. */
    using JPEG_CONFR6_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Huffman DC table 0 (value: 0)
     *          - B_0x1: Huffman DC table 1 (value: 1)
     */
        /** @brief Huffman DC table 0 */
    constexpr std::uint32_t JPEG_CONFR6_HD_B_0x0 = 0;
        /** @brief Huffman DC table 1 */
    constexpr std::uint32_t JPEG_CONFR6_HD_B_0x1 = 1;

    /** @brief Huffman AC Selects the Huffman table for encoding AC coefficients. */
    using JPEG_CONFR6_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Huffman AC table 0 (value: 0)
     *          - B_0x1: Huffman AC table 1 (value: 1)
     */
        /** @brief Huffman AC table 0 */
    constexpr std::uint32_t JPEG_CONFR6_HA_B_0x0 = 0;
        /** @brief Huffman AC table 1 */
    constexpr std::uint32_t JPEG_CONFR6_HA_B_0x1 = 1;

    /** @brief Quantization table Selects quantization table used for component 2. */
    using JPEG_CONFR6_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Quantization table 0 (value: 0)
     *          - B_0x1: Quantization table 1 (value: 1)
     *          - B_0x2: Quantization table 2 (value: 2)
     *          - B_0x3: Quantization table 3 (value: 3)
     */
        /** @brief Quantization table 0 */
    constexpr std::uint32_t JPEG_CONFR6_QT_B_0x0 = 0;
        /** @brief Quantization table 1 */
    constexpr std::uint32_t JPEG_CONFR6_QT_B_0x1 = 1;
        /** @brief Quantization table 2 */
    constexpr std::uint32_t JPEG_CONFR6_QT_B_0x2 = 2;
        /** @brief Quantization table 3 */
    constexpr std::uint32_t JPEG_CONFR6_QT_B_0x3 = 3;

    /** @brief Number of blocks Number of data units minus 1 that belong to a particular color in the MCU. */
    using JPEG_CONFR6_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical sampling factor Vertical sampling factor for component 2. */
    using JPEG_CONFR6_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal sampling factor Horizontal sampling factor for component 2. */
    using JPEG_CONFR6_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG codec configuration register 7 */
    using JPEG_CONFR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman DC Selects the Huffman table for encoding DC coefficients. */
    using JPEG_CONFR7_HD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Huffman DC table 0 (value: 0)
     *          - B_0x1: Huffman DC table 1 (value: 1)
     */
        /** @brief Huffman DC table 0 */
    constexpr std::uint32_t JPEG_CONFR7_HD_B_0x0 = 0;
        /** @brief Huffman DC table 1 */
    constexpr std::uint32_t JPEG_CONFR7_HD_B_0x1 = 1;

    /** @brief Huffman AC Selects the Huffman table for encoding AC coefficients. */
    using JPEG_CONFR7_HA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Huffman AC table 0 (value: 0)
     *          - B_0x1: Huffman AC table 1 (value: 1)
     */
        /** @brief Huffman AC table 0 */
    constexpr std::uint32_t JPEG_CONFR7_HA_B_0x0 = 0;
        /** @brief Huffman AC table 1 */
    constexpr std::uint32_t JPEG_CONFR7_HA_B_0x1 = 1;

    /** @brief Quantization table Selects quantization table used for component 3. */
    using JPEG_CONFR7_QT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Quantization table 0 (value: 0)
     *          - B_0x1: Quantization table 1 (value: 1)
     *          - B_0x2: Quantization table 2 (value: 2)
     *          - B_0x3: Quantization table 3 (value: 3)
     */
        /** @brief Quantization table 0 */
    constexpr std::uint32_t JPEG_CONFR7_QT_B_0x0 = 0;
        /** @brief Quantization table 1 */
    constexpr std::uint32_t JPEG_CONFR7_QT_B_0x1 = 1;
        /** @brief Quantization table 2 */
    constexpr std::uint32_t JPEG_CONFR7_QT_B_0x2 = 2;
        /** @brief Quantization table 3 */
    constexpr std::uint32_t JPEG_CONFR7_QT_B_0x3 = 3;

    /** @brief Number of blocks Number of data units minus 1 that belong to a particular color in the MCU. */
    using JPEG_CONFR7_NB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical sampling factor Vertical sampling factor for component 3. */
    using JPEG_CONFR7_VSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal sampling factor Horizontal sampling factor for component 3. */
    using JPEG_CONFR7_HSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG control register */
    using JPEG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG core enable This bit enables the JPEG codec core. */
    using JPEG_CR_JCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (internal registers are reset). (value: 0)
     *          - B_0x1: Enabled (internal registers are accessible). (value: 1)
     */
        /** @brief Disabled (internal registers are reset). */
    constexpr std::uint32_t JPEG_CR_JCEN_B_0x0 = 0;
        /** @brief Enabled (internal registers are accessible). */
    constexpr std::uint32_t JPEG_CR_JCEN_B_0x1 = 1;

    /** @brief Input FIFO threshold interrupt enable This bit enables interrupt generation when the input FIFO reaches a threshold. */
    using JPEG_CR_IFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t JPEG_CR_IFTIE_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t JPEG_CR_IFTIE_B_0x1 = 1;

    /** @brief Input FIFO not full interrupt enable This bit enables interrupt generation when the input FIFO is not empty. */
    using JPEG_CR_IFNFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t JPEG_CR_IFNFIE_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t JPEG_CR_IFNFIE_B_0x1 = 1;

    /** @brief Output FIFO threshold interrupt enable This bit enables interrupt generation when the output FIFO reaches a threshold. */
    using JPEG_CR_OFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t JPEG_CR_OFTIE_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t JPEG_CR_OFTIE_B_0x1 = 1;

    /** @brief Output FIFO not empty interrupt enable This bit enables interrupt generation when the output FIFO is not empty. */
    using JPEG_CR_OFNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t JPEG_CR_OFNEIE_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t JPEG_CR_OFNEIE_B_0x1 = 1;

    /** @brief End of conversion interrupt enable This bit enables interrupt generation at the end of conversion. */
    using JPEG_CR_EOCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t JPEG_CR_EOCIE_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t JPEG_CR_EOCIE_B_0x1 = 1;

    /** @brief Header parsing done interrupt enable This bit enables interrupt generation upon the completion of the header parsing operation. */
    using JPEG_CR_HPDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t JPEG_CR_HPDIE_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t JPEG_CR_HPDIE_B_0x1 = 1;

    /** @brief Input DMA enable Enables DMA request generation for the input FIFO. */
    using JPEG_CR_IDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t JPEG_CR_IDMAEN_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t JPEG_CR_IDMAEN_B_0x1 = 1;

    /** @brief Output DMA enable Enables DMA request generation for the output FIFO. */
    using JPEG_CR_ODMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t JPEG_CR_ODMAEN_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t JPEG_CR_ODMAEN_B_0x1 = 1;

    /** @brief Input FIFO flush This bit flushes the input FIFO. Note: Reads always return 0. */
    using JPEG_CR_IFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Input FIFO is flushed (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t JPEG_CR_IFF_B_0x0 = 0;
        /** @brief Input FIFO is flushed */
    constexpr std::uint32_t JPEG_CR_IFF_B_0x1 = 1;

    /** @brief Output FIFO flush This bit flushes the output FIFO. Note: Reads always return 0. */
    using JPEG_CR_OFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Output FIFO is flushed (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t JPEG_CR_OFF_B_0x0 = 0;
        /** @brief Output FIFO is flushed */
    constexpr std::uint32_t JPEG_CR_OFF_B_0x1 = 1;

    /** @brief JPEG status register */
    using JPEG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input FIFO threshold flag This bit flags that the amount of data in the input FIFO is below a threshold. This flag must not be considered when using DMA. */
    using JPEG_SR_IFTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At or above threshold (value: 0)
     *          - B_0x1: Below threshold. (value: 1)
     */
        /** @brief At or above threshold */
    constexpr std::uint32_t JPEG_SR_IFTF_B_0x0 = 0;
        /** @brief Below threshold. */
    constexpr std::uint32_t JPEG_SR_IFTF_B_0x1 = 1;

    /** @brief Input FIFO not full flag This bit flags that the input FIFO is not full (data can be written). This flag must not be considered when using DMA. */
    using JPEG_SR_IFNFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full (value: 0)
     *          - B_0x1: Not full (value: 1)
     */
        /** @brief Full */
    constexpr std::uint32_t JPEG_SR_IFNFF_B_0x0 = 0;
        /** @brief Not full */
    constexpr std::uint32_t JPEG_SR_IFNFF_B_0x1 = 1;

    /** @brief Output FIFO threshold flag This bit flags that the amount of data in the output FIFO reaches or exceeds a threshold. This flag must not be considered when using DMA. */
    using JPEG_SR_OFTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Below threshold (value: 0)
     *          - B_0x1: At or above threshold (value: 1)
     */
        /** @brief Below threshold */
    constexpr std::uint32_t JPEG_SR_OFTF_B_0x0 = 0;
        /** @brief At or above threshold */
    constexpr std::uint32_t JPEG_SR_OFTF_B_0x1 = 1;

    /** @brief Output FIFO not empty flag This bit flags that data is available in the output FIFO. This flag must not be considered when using DMA. */
    using JPEG_SR_OFNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Empty (data not available) (value: 0)
     *          - B_0x1: Not empty (data available) (value: 1)
     */
        /** @brief Empty (data not available) */
    constexpr std::uint32_t JPEG_SR_OFNEF_B_0x0 = 0;
        /** @brief Not empty (data available) */
    constexpr std::uint32_t JPEG_SR_OFNEF_B_0x1 = 1;

    /** @brief End of conversion flag This bit flags the completion of encode/decode process and data transfer to the output FIFO. */
    using JPEG_SR_EOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not completed (value: 0)
     *          - B_0x1: Completed (value: 1)
     */
        /** @brief Not completed */
    constexpr std::uint32_t JPEG_SR_EOCF_B_0x0 = 0;
        /** @brief Completed */
    constexpr std::uint32_t JPEG_SR_EOCF_B_0x1 = 1;

    /** @brief Header parsing done flag In decode mode, this bit flags the completion of header parsing and updating internal registers. */
    using JPEG_SR_HPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not completed (value: 0)
     *          - B_0x1: Completed (value: 1)
     */
        /** @brief Not completed */
    constexpr std::uint32_t JPEG_SR_HPDF_B_0x0 = 0;
        /** @brief Completed */
    constexpr std::uint32_t JPEG_SR_HPDF_B_0x1 = 1;

    /** @brief Codec operation flag This bit flags code/decode operation in progress. */
    using JPEG_SR_COF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not in progress (value: 0)
     *          - B_0x1: In progress (value: 1)
     */
        /** @brief Not in progress */
    constexpr std::uint32_t JPEG_SR_COF_B_0x0 = 0;
        /** @brief In progress */
    constexpr std::uint32_t JPEG_SR_COF_B_0x1 = 1;

    /** @brief JPEG clear flag register */
    using JPEG_CFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear end of conversion flag Writing 1 clears the ECF bit of the JPEG_SR register. */
    using JPEG_CFR_CEOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t JPEG_CFR_CEOCF_B_0x0 = 0;
        /** @brief Clear */
    constexpr std::uint32_t JPEG_CFR_CEOCF_B_0x1 = 1;

    /** @brief Clear header parsing done flag Writing 1 clears the HPDF bit of the JPEG_SR register. */
    using JPEG_CFR_CHPDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clear (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t JPEG_CFR_CHPDF_B_0x0 = 0;
        /** @brief Clear */
    constexpr std::uint32_t JPEG_CFR_CHPDF_B_0x1 = 1;

    /** @brief JPEG data input register */
    using JPEG_DIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data input FIFO Input FIFO data register */
    using JPEG_DIR_DATAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG data output register */
    using JPEG_DOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data output FIFO Output FIFO data register. */
    using JPEG_DOR_DATAOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 0 8-bit quantization coefficient. */
    using JPEG_QMEM0_0_QCOEF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 1 8-bit quantization coefficient. */
    using JPEG_QMEM0_0_QCOEF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 2 8-bit quantization coefficient. */
    using JPEG_QMEM0_0_QCOEF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 3 8-bit quantization coefficient. */
    using JPEG_QMEM0_0_QCOEF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 4 8-bit quantization coefficient. */
    using JPEG_QMEM0_1_QCOEF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 5 8-bit quantization coefficient. */
    using JPEG_QMEM0_1_QCOEF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 6 8-bit quantization coefficient. */
    using JPEG_QMEM0_1_QCOEF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 7 8-bit quantization coefficient. */
    using JPEG_QMEM0_1_QCOEF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 8 8-bit quantization coefficient. */
    using JPEG_QMEM0_2_QCOEF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 9 8-bit quantization coefficient. */
    using JPEG_QMEM0_2_QCOEF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 10 8-bit quantization coefficient. */
    using JPEG_QMEM0_2_QCOEF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 11 8-bit quantization coefficient. */
    using JPEG_QMEM0_2_QCOEF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 12 8-bit quantization coefficient. */
    using JPEG_QMEM0_3_QCOEF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 13 8-bit quantization coefficient. */
    using JPEG_QMEM0_3_QCOEF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 14 8-bit quantization coefficient. */
    using JPEG_QMEM0_3_QCOEF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 15 8-bit quantization coefficient. */
    using JPEG_QMEM0_3_QCOEF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 16 8-bit quantization coefficient. */
    using JPEG_QMEM0_4_QCOEF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 17 8-bit quantization coefficient. */
    using JPEG_QMEM0_4_QCOEF17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 18 8-bit quantization coefficient. */
    using JPEG_QMEM0_4_QCOEF18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 19 8-bit quantization coefficient. */
    using JPEG_QMEM0_4_QCOEF19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 20 8-bit quantization coefficient. */
    using JPEG_QMEM0_5_QCOEF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 21 8-bit quantization coefficient. */
    using JPEG_QMEM0_5_QCOEF21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 22 8-bit quantization coefficient. */
    using JPEG_QMEM0_5_QCOEF22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 23 8-bit quantization coefficient. */
    using JPEG_QMEM0_5_QCOEF23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 24 8-bit quantization coefficient. */
    using JPEG_QMEM0_6_QCOEF24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 25 8-bit quantization coefficient. */
    using JPEG_QMEM0_6_QCOEF25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 26 8-bit quantization coefficient. */
    using JPEG_QMEM0_6_QCOEF26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 27 8-bit quantization coefficient. */
    using JPEG_QMEM0_6_QCOEF27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 28 8-bit quantization coefficient. */
    using JPEG_QMEM0_7_QCOEF28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 29 8-bit quantization coefficient. */
    using JPEG_QMEM0_7_QCOEF29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 30 8-bit quantization coefficient. */
    using JPEG_QMEM0_7_QCOEF30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 31 8-bit quantization coefficient. */
    using JPEG_QMEM0_7_QCOEF31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 32 8-bit quantization coefficient. */
    using JPEG_QMEM0_8_QCOEF32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 33 8-bit quantization coefficient. */
    using JPEG_QMEM0_8_QCOEF33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 34 8-bit quantization coefficient. */
    using JPEG_QMEM0_8_QCOEF34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 35 8-bit quantization coefficient. */
    using JPEG_QMEM0_8_QCOEF35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 36 8-bit quantization coefficient. */
    using JPEG_QMEM0_9_QCOEF36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 37 8-bit quantization coefficient. */
    using JPEG_QMEM0_9_QCOEF37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 38 8-bit quantization coefficient. */
    using JPEG_QMEM0_9_QCOEF38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 39 8-bit quantization coefficient. */
    using JPEG_QMEM0_9_QCOEF39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 40 8-bit quantization coefficient. */
    using JPEG_QMEM0_10_QCOEF40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 41 8-bit quantization coefficient. */
    using JPEG_QMEM0_10_QCOEF41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 42 8-bit quantization coefficient. */
    using JPEG_QMEM0_10_QCOEF42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 43 8-bit quantization coefficient. */
    using JPEG_QMEM0_10_QCOEF43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 44 8-bit quantization coefficient. */
    using JPEG_QMEM0_11_QCOEF44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 45 8-bit quantization coefficient. */
    using JPEG_QMEM0_11_QCOEF45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 46 8-bit quantization coefficient. */
    using JPEG_QMEM0_11_QCOEF46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 47 8-bit quantization coefficient. */
    using JPEG_QMEM0_11_QCOEF47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 48 8-bit quantization coefficient. */
    using JPEG_QMEM0_12_QCOEF48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 49 8-bit quantization coefficient. */
    using JPEG_QMEM0_12_QCOEF49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 50 8-bit quantization coefficient. */
    using JPEG_QMEM0_12_QCOEF50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 51 8-bit quantization coefficient. */
    using JPEG_QMEM0_12_QCOEF51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 52 8-bit quantization coefficient. */
    using JPEG_QMEM0_13_QCOEF52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 53 8-bit quantization coefficient. */
    using JPEG_QMEM0_13_QCOEF53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 54 8-bit quantization coefficient. */
    using JPEG_QMEM0_13_QCOEF54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 55 8-bit quantization coefficient. */
    using JPEG_QMEM0_13_QCOEF55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 56 8-bit quantization coefficient. */
    using JPEG_QMEM0_14_QCOEF56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 57 8-bit quantization coefficient. */
    using JPEG_QMEM0_14_QCOEF57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 58 8-bit quantization coefficient. */
    using JPEG_QMEM0_14_QCOEF58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 59 8-bit quantization coefficient. */
    using JPEG_QMEM0_14_QCOEF59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 0 */
    using JPEG_QMEM0_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 60 8-bit quantization coefficient. */
    using JPEG_QMEM0_15_QCOEF60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 61 8-bit quantization coefficient. */
    using JPEG_QMEM0_15_QCOEF61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 62 8-bit quantization coefficient. */
    using JPEG_QMEM0_15_QCOEF62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 63 8-bit quantization coefficient. */
    using JPEG_QMEM0_15_QCOEF63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 0 8-bit quantization coefficient. */
    using JPEG_QMEM1_0_QCOEF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 1 8-bit quantization coefficient. */
    using JPEG_QMEM1_0_QCOEF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 2 8-bit quantization coefficient. */
    using JPEG_QMEM1_0_QCOEF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 3 8-bit quantization coefficient. */
    using JPEG_QMEM1_0_QCOEF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 4 8-bit quantization coefficient. */
    using JPEG_QMEM1_1_QCOEF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 5 8-bit quantization coefficient. */
    using JPEG_QMEM1_1_QCOEF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 6 8-bit quantization coefficient. */
    using JPEG_QMEM1_1_QCOEF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 7 8-bit quantization coefficient. */
    using JPEG_QMEM1_1_QCOEF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 8 8-bit quantization coefficient. */
    using JPEG_QMEM1_2_QCOEF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 9 8-bit quantization coefficient. */
    using JPEG_QMEM1_2_QCOEF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 10 8-bit quantization coefficient. */
    using JPEG_QMEM1_2_QCOEF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 11 8-bit quantization coefficient. */
    using JPEG_QMEM1_2_QCOEF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 12 8-bit quantization coefficient. */
    using JPEG_QMEM1_3_QCOEF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 13 8-bit quantization coefficient. */
    using JPEG_QMEM1_3_QCOEF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 14 8-bit quantization coefficient. */
    using JPEG_QMEM1_3_QCOEF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 15 8-bit quantization coefficient. */
    using JPEG_QMEM1_3_QCOEF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 16 8-bit quantization coefficient. */
    using JPEG_QMEM1_4_QCOEF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 17 8-bit quantization coefficient. */
    using JPEG_QMEM1_4_QCOEF17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 18 8-bit quantization coefficient. */
    using JPEG_QMEM1_4_QCOEF18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 19 8-bit quantization coefficient. */
    using JPEG_QMEM1_4_QCOEF19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 20 8-bit quantization coefficient. */
    using JPEG_QMEM1_5_QCOEF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 21 8-bit quantization coefficient. */
    using JPEG_QMEM1_5_QCOEF21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 22 8-bit quantization coefficient. */
    using JPEG_QMEM1_5_QCOEF22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 23 8-bit quantization coefficient. */
    using JPEG_QMEM1_5_QCOEF23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 24 8-bit quantization coefficient. */
    using JPEG_QMEM1_6_QCOEF24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 25 8-bit quantization coefficient. */
    using JPEG_QMEM1_6_QCOEF25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 26 8-bit quantization coefficient. */
    using JPEG_QMEM1_6_QCOEF26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 27 8-bit quantization coefficient. */
    using JPEG_QMEM1_6_QCOEF27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 28 8-bit quantization coefficient. */
    using JPEG_QMEM1_7_QCOEF28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 29 8-bit quantization coefficient. */
    using JPEG_QMEM1_7_QCOEF29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 30 8-bit quantization coefficient. */
    using JPEG_QMEM1_7_QCOEF30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 31 8-bit quantization coefficient. */
    using JPEG_QMEM1_7_QCOEF31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 32 8-bit quantization coefficient. */
    using JPEG_QMEM1_8_QCOEF32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 33 8-bit quantization coefficient. */
    using JPEG_QMEM1_8_QCOEF33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 34 8-bit quantization coefficient. */
    using JPEG_QMEM1_8_QCOEF34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 35 8-bit quantization coefficient. */
    using JPEG_QMEM1_8_QCOEF35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 36 8-bit quantization coefficient. */
    using JPEG_QMEM1_9_QCOEF36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 37 8-bit quantization coefficient. */
    using JPEG_QMEM1_9_QCOEF37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 38 8-bit quantization coefficient. */
    using JPEG_QMEM1_9_QCOEF38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 39 8-bit quantization coefficient. */
    using JPEG_QMEM1_9_QCOEF39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 40 8-bit quantization coefficient. */
    using JPEG_QMEM1_10_QCOEF40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 41 8-bit quantization coefficient. */
    using JPEG_QMEM1_10_QCOEF41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 42 8-bit quantization coefficient. */
    using JPEG_QMEM1_10_QCOEF42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 43 8-bit quantization coefficient. */
    using JPEG_QMEM1_10_QCOEF43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 44 8-bit quantization coefficient. */
    using JPEG_QMEM1_11_QCOEF44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 45 8-bit quantization coefficient. */
    using JPEG_QMEM1_11_QCOEF45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 46 8-bit quantization coefficient. */
    using JPEG_QMEM1_11_QCOEF46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 47 8-bit quantization coefficient. */
    using JPEG_QMEM1_11_QCOEF47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 48 8-bit quantization coefficient. */
    using JPEG_QMEM1_12_QCOEF48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 49 8-bit quantization coefficient. */
    using JPEG_QMEM1_12_QCOEF49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 50 8-bit quantization coefficient. */
    using JPEG_QMEM1_12_QCOEF50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 51 8-bit quantization coefficient. */
    using JPEG_QMEM1_12_QCOEF51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 52 8-bit quantization coefficient. */
    using JPEG_QMEM1_13_QCOEF52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 53 8-bit quantization coefficient. */
    using JPEG_QMEM1_13_QCOEF53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 54 8-bit quantization coefficient. */
    using JPEG_QMEM1_13_QCOEF54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 55 8-bit quantization coefficient. */
    using JPEG_QMEM1_13_QCOEF55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 56 8-bit quantization coefficient. */
    using JPEG_QMEM1_14_QCOEF56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 57 8-bit quantization coefficient. */
    using JPEG_QMEM1_14_QCOEF57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 58 8-bit quantization coefficient. */
    using JPEG_QMEM1_14_QCOEF58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 59 8-bit quantization coefficient. */
    using JPEG_QMEM1_14_QCOEF59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 1 */
    using JPEG_QMEM1_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 60 8-bit quantization coefficient. */
    using JPEG_QMEM1_15_QCOEF60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 61 8-bit quantization coefficient. */
    using JPEG_QMEM1_15_QCOEF61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 62 8-bit quantization coefficient. */
    using JPEG_QMEM1_15_QCOEF62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 63 8-bit quantization coefficient. */
    using JPEG_QMEM1_15_QCOEF63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 0 8-bit quantization coefficient. */
    using JPEG_QMEM2_0_QCOEF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 1 8-bit quantization coefficient. */
    using JPEG_QMEM2_0_QCOEF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 2 8-bit quantization coefficient. */
    using JPEG_QMEM2_0_QCOEF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 3 8-bit quantization coefficient. */
    using JPEG_QMEM2_0_QCOEF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 4 8-bit quantization coefficient. */
    using JPEG_QMEM2_1_QCOEF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 5 8-bit quantization coefficient. */
    using JPEG_QMEM2_1_QCOEF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 6 8-bit quantization coefficient. */
    using JPEG_QMEM2_1_QCOEF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 7 8-bit quantization coefficient. */
    using JPEG_QMEM2_1_QCOEF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 8 8-bit quantization coefficient. */
    using JPEG_QMEM2_2_QCOEF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 9 8-bit quantization coefficient. */
    using JPEG_QMEM2_2_QCOEF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 10 8-bit quantization coefficient. */
    using JPEG_QMEM2_2_QCOEF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 11 8-bit quantization coefficient. */
    using JPEG_QMEM2_2_QCOEF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 12 8-bit quantization coefficient. */
    using JPEG_QMEM2_3_QCOEF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 13 8-bit quantization coefficient. */
    using JPEG_QMEM2_3_QCOEF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 14 8-bit quantization coefficient. */
    using JPEG_QMEM2_3_QCOEF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 15 8-bit quantization coefficient. */
    using JPEG_QMEM2_3_QCOEF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 16 8-bit quantization coefficient. */
    using JPEG_QMEM2_4_QCOEF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 17 8-bit quantization coefficient. */
    using JPEG_QMEM2_4_QCOEF17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 18 8-bit quantization coefficient. */
    using JPEG_QMEM2_4_QCOEF18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 19 8-bit quantization coefficient. */
    using JPEG_QMEM2_4_QCOEF19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 20 8-bit quantization coefficient. */
    using JPEG_QMEM2_5_QCOEF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 21 8-bit quantization coefficient. */
    using JPEG_QMEM2_5_QCOEF21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 22 8-bit quantization coefficient. */
    using JPEG_QMEM2_5_QCOEF22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 23 8-bit quantization coefficient. */
    using JPEG_QMEM2_5_QCOEF23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 24 8-bit quantization coefficient. */
    using JPEG_QMEM2_6_QCOEF24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 25 8-bit quantization coefficient. */
    using JPEG_QMEM2_6_QCOEF25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 26 8-bit quantization coefficient. */
    using JPEG_QMEM2_6_QCOEF26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 27 8-bit quantization coefficient. */
    using JPEG_QMEM2_6_QCOEF27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 28 8-bit quantization coefficient. */
    using JPEG_QMEM2_7_QCOEF28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 29 8-bit quantization coefficient. */
    using JPEG_QMEM2_7_QCOEF29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 30 8-bit quantization coefficient. */
    using JPEG_QMEM2_7_QCOEF30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 31 8-bit quantization coefficient. */
    using JPEG_QMEM2_7_QCOEF31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 32 8-bit quantization coefficient. */
    using JPEG_QMEM2_8_QCOEF32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 33 8-bit quantization coefficient. */
    using JPEG_QMEM2_8_QCOEF33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 34 8-bit quantization coefficient. */
    using JPEG_QMEM2_8_QCOEF34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 35 8-bit quantization coefficient. */
    using JPEG_QMEM2_8_QCOEF35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 36 8-bit quantization coefficient. */
    using JPEG_QMEM2_9_QCOEF36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 37 8-bit quantization coefficient. */
    using JPEG_QMEM2_9_QCOEF37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 38 8-bit quantization coefficient. */
    using JPEG_QMEM2_9_QCOEF38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 39 8-bit quantization coefficient. */
    using JPEG_QMEM2_9_QCOEF39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 40 8-bit quantization coefficient. */
    using JPEG_QMEM2_10_QCOEF40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 41 8-bit quantization coefficient. */
    using JPEG_QMEM2_10_QCOEF41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 42 8-bit quantization coefficient. */
    using JPEG_QMEM2_10_QCOEF42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 43 8-bit quantization coefficient. */
    using JPEG_QMEM2_10_QCOEF43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 44 8-bit quantization coefficient. */
    using JPEG_QMEM2_11_QCOEF44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 45 8-bit quantization coefficient. */
    using JPEG_QMEM2_11_QCOEF45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 46 8-bit quantization coefficient. */
    using JPEG_QMEM2_11_QCOEF46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 47 8-bit quantization coefficient. */
    using JPEG_QMEM2_11_QCOEF47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 48 8-bit quantization coefficient. */
    using JPEG_QMEM2_12_QCOEF48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 49 8-bit quantization coefficient. */
    using JPEG_QMEM2_12_QCOEF49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 50 8-bit quantization coefficient. */
    using JPEG_QMEM2_12_QCOEF50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 51 8-bit quantization coefficient. */
    using JPEG_QMEM2_12_QCOEF51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 52 8-bit quantization coefficient. */
    using JPEG_QMEM2_13_QCOEF52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 53 8-bit quantization coefficient. */
    using JPEG_QMEM2_13_QCOEF53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 54 8-bit quantization coefficient. */
    using JPEG_QMEM2_13_QCOEF54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 55 8-bit quantization coefficient. */
    using JPEG_QMEM2_13_QCOEF55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 56 8-bit quantization coefficient. */
    using JPEG_QMEM2_14_QCOEF56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 57 8-bit quantization coefficient. */
    using JPEG_QMEM2_14_QCOEF57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 58 8-bit quantization coefficient. */
    using JPEG_QMEM2_14_QCOEF58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 59 8-bit quantization coefficient. */
    using JPEG_QMEM2_14_QCOEF59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 2 */
    using JPEG_QMEM2_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 60 8-bit quantization coefficient. */
    using JPEG_QMEM2_15_QCOEF60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 61 8-bit quantization coefficient. */
    using JPEG_QMEM2_15_QCOEF61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 62 8-bit quantization coefficient. */
    using JPEG_QMEM2_15_QCOEF62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 63 8-bit quantization coefficient. */
    using JPEG_QMEM2_15_QCOEF63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 0 8-bit quantization coefficient. */
    using JPEG_QMEM3_0_QCOEF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 1 8-bit quantization coefficient. */
    using JPEG_QMEM3_0_QCOEF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 2 8-bit quantization coefficient. */
    using JPEG_QMEM3_0_QCOEF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 3 8-bit quantization coefficient. */
    using JPEG_QMEM3_0_QCOEF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 4 8-bit quantization coefficient. */
    using JPEG_QMEM3_1_QCOEF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 5 8-bit quantization coefficient. */
    using JPEG_QMEM3_1_QCOEF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 6 8-bit quantization coefficient. */
    using JPEG_QMEM3_1_QCOEF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 7 8-bit quantization coefficient. */
    using JPEG_QMEM3_1_QCOEF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 8 8-bit quantization coefficient. */
    using JPEG_QMEM3_2_QCOEF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 9 8-bit quantization coefficient. */
    using JPEG_QMEM3_2_QCOEF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 10 8-bit quantization coefficient. */
    using JPEG_QMEM3_2_QCOEF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 11 8-bit quantization coefficient. */
    using JPEG_QMEM3_2_QCOEF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 12 8-bit quantization coefficient. */
    using JPEG_QMEM3_3_QCOEF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 13 8-bit quantization coefficient. */
    using JPEG_QMEM3_3_QCOEF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 14 8-bit quantization coefficient. */
    using JPEG_QMEM3_3_QCOEF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 15 8-bit quantization coefficient. */
    using JPEG_QMEM3_3_QCOEF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 16 8-bit quantization coefficient. */
    using JPEG_QMEM3_4_QCOEF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 17 8-bit quantization coefficient. */
    using JPEG_QMEM3_4_QCOEF17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 18 8-bit quantization coefficient. */
    using JPEG_QMEM3_4_QCOEF18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 19 8-bit quantization coefficient. */
    using JPEG_QMEM3_4_QCOEF19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 20 8-bit quantization coefficient. */
    using JPEG_QMEM3_5_QCOEF20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 21 8-bit quantization coefficient. */
    using JPEG_QMEM3_5_QCOEF21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 22 8-bit quantization coefficient. */
    using JPEG_QMEM3_5_QCOEF22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 23 8-bit quantization coefficient. */
    using JPEG_QMEM3_5_QCOEF23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 24 8-bit quantization coefficient. */
    using JPEG_QMEM3_6_QCOEF24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 25 8-bit quantization coefficient. */
    using JPEG_QMEM3_6_QCOEF25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 26 8-bit quantization coefficient. */
    using JPEG_QMEM3_6_QCOEF26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 27 8-bit quantization coefficient. */
    using JPEG_QMEM3_6_QCOEF27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 28 8-bit quantization coefficient. */
    using JPEG_QMEM3_7_QCOEF28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 29 8-bit quantization coefficient. */
    using JPEG_QMEM3_7_QCOEF29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 30 8-bit quantization coefficient. */
    using JPEG_QMEM3_7_QCOEF30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 31 8-bit quantization coefficient. */
    using JPEG_QMEM3_7_QCOEF31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 32 8-bit quantization coefficient. */
    using JPEG_QMEM3_8_QCOEF32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 33 8-bit quantization coefficient. */
    using JPEG_QMEM3_8_QCOEF33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 34 8-bit quantization coefficient. */
    using JPEG_QMEM3_8_QCOEF34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 35 8-bit quantization coefficient. */
    using JPEG_QMEM3_8_QCOEF35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 36 8-bit quantization coefficient. */
    using JPEG_QMEM3_9_QCOEF36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 37 8-bit quantization coefficient. */
    using JPEG_QMEM3_9_QCOEF37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 38 8-bit quantization coefficient. */
    using JPEG_QMEM3_9_QCOEF38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 39 8-bit quantization coefficient. */
    using JPEG_QMEM3_9_QCOEF39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 40 8-bit quantization coefficient. */
    using JPEG_QMEM3_10_QCOEF40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 41 8-bit quantization coefficient. */
    using JPEG_QMEM3_10_QCOEF41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 42 8-bit quantization coefficient. */
    using JPEG_QMEM3_10_QCOEF42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 43 8-bit quantization coefficient. */
    using JPEG_QMEM3_10_QCOEF43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 44 8-bit quantization coefficient. */
    using JPEG_QMEM3_11_QCOEF44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 45 8-bit quantization coefficient. */
    using JPEG_QMEM3_11_QCOEF45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 46 8-bit quantization coefficient. */
    using JPEG_QMEM3_11_QCOEF46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 47 8-bit quantization coefficient. */
    using JPEG_QMEM3_11_QCOEF47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 48 8-bit quantization coefficient. */
    using JPEG_QMEM3_12_QCOEF48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 49 8-bit quantization coefficient. */
    using JPEG_QMEM3_12_QCOEF49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 50 8-bit quantization coefficient. */
    using JPEG_QMEM3_12_QCOEF50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 51 8-bit quantization coefficient. */
    using JPEG_QMEM3_12_QCOEF51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 52 8-bit quantization coefficient. */
    using JPEG_QMEM3_13_QCOEF52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 53 8-bit quantization coefficient. */
    using JPEG_QMEM3_13_QCOEF53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 54 8-bit quantization coefficient. */
    using JPEG_QMEM3_13_QCOEF54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 55 8-bit quantization coefficient. */
    using JPEG_QMEM3_13_QCOEF55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 56 8-bit quantization coefficient. */
    using JPEG_QMEM3_14_QCOEF56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 57 8-bit quantization coefficient. */
    using JPEG_QMEM3_14_QCOEF57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 58 8-bit quantization coefficient. */
    using JPEG_QMEM3_14_QCOEF58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 59 8-bit quantization coefficient. */
    using JPEG_QMEM3_14_QCOEF59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG quantization memory 3 */
    using JPEG_QMEM3_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 60 8-bit quantization coefficient. */
    using JPEG_QMEM3_15_QCOEF60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 61 8-bit quantization coefficient. */
    using JPEG_QMEM3_15_QCOEF61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 62 8-bit quantization coefficient. */
    using JPEG_QMEM3_15_QCOEF62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Quantization coefficient 63 8-bit quantization coefficient. */
    using JPEG_QMEM3_15_QCOEF63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN0_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN0_0_DATA0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN0_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN0_1_DATA0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN0_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN0_2_DATA0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min 0 [alternate] */
    using JPEG_HUFFMIN0_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN0_3_DATA0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN1_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN1_0_DATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN1_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN1_1_DATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN1_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN1_2_DATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min 1 [alternate] */
    using JPEG_HUFFMIN1_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN1_3_DATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN2_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN2_0_DATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN2_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN2_1_DATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN2_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN2_2_DATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min 2 [alternate] */
    using JPEG_HUFFMIN2_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN2_3_DATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN3_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN3_0_DATA3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN3_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN3_1_DATA3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min */
    using JPEG_HUFFMIN3_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN3_2_DATA3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman min 3 [alternate] */
    using JPEG_HUFFMIN3_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum Huffman value 100-bit minimum Huffman value used internally by the JPEG decoder. */
    using JPEG_HUFFMIN3_3_DATA3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 0 Base Huffman value. */
    using JPEG_HUFFBASE0_DATA0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 1 Base Huffman value. */
    using JPEG_HUFFBASE0_DATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 2 Base Huffman value. */
    using JPEG_HUFFBASE1_DATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 3 Base Huffman value. */
    using JPEG_HUFFBASE1_DATA3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 4 Base Huffman value. */
    using JPEG_HUFFBASE2_DATA4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 5 Base Huffman value. */
    using JPEG_HUFFBASE2_DATA5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 6 Base Huffman value. */
    using JPEG_HUFFBASE3_DATA6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 7 Base Huffman value. */
    using JPEG_HUFFBASE3_DATA7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 8 Base Huffman value. */
    using JPEG_HUFFBASE4_DATA8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 9 Base Huffman value. */
    using JPEG_HUFFBASE4_DATA9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 10 Base Huffman value. */
    using JPEG_HUFFBASE5_DATA10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 11 Base Huffman value. */
    using JPEG_HUFFBASE5_DATA11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 12 Base Huffman value. */
    using JPEG_HUFFBASE6_DATA12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 13 Base Huffman value. */
    using JPEG_HUFFBASE6_DATA13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 14 Base Huffman value. */
    using JPEG_HUFFBASE7_DATA14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 15 Base Huffman value. */
    using JPEG_HUFFBASE7_DATA15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 16 Base Huffman value. */
    using JPEG_HUFFBASE8_DATA16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 17 Base Huffman value. */
    using JPEG_HUFFBASE8_DATA17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 18 Base Huffman value. */
    using JPEG_HUFFBASE9_DATA18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 19 Base Huffman value. */
    using JPEG_HUFFBASE9_DATA19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 20 Base Huffman value. */
    using JPEG_HUFFBASE10_DATA20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 21 Base Huffman value. */
    using JPEG_HUFFBASE10_DATA21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 22 Base Huffman value. */
    using JPEG_HUFFBASE11_DATA22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 23 Base Huffman value. */
    using JPEG_HUFFBASE11_DATA23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 24 Base Huffman value. */
    using JPEG_HUFFBASE12_DATA24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 25 Base Huffman value. */
    using JPEG_HUFFBASE12_DATA25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 26 Base Huffman value. */
    using JPEG_HUFFBASE13_DATA26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 27 Base Huffman value. */
    using JPEG_HUFFBASE13_DATA27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 28 Base Huffman value. */
    using JPEG_HUFFBASE14_DATA28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 29 Base Huffman value. */
    using JPEG_HUFFBASE14_DATA29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 30 Base Huffman value. */
    using JPEG_HUFFBASE15_DATA30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 31 Base Huffman value. */
    using JPEG_HUFFBASE15_DATA31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 32 Base Huffman value. */
    using JPEG_HUFFBASE16_DATA32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 33 Base Huffman value. */
    using JPEG_HUFFBASE16_DATA33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 34 Base Huffman value. */
    using JPEG_HUFFBASE17_DATA34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 35 Base Huffman value. */
    using JPEG_HUFFBASE17_DATA35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 36 Base Huffman value. */
    using JPEG_HUFFBASE18_DATA36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 37 Base Huffman value. */
    using JPEG_HUFFBASE18_DATA37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 38 Base Huffman value. */
    using JPEG_HUFFBASE19_DATA38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 39 Base Huffman value. */
    using JPEG_HUFFBASE19_DATA39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 40 Base Huffman value. */
    using JPEG_HUFFBASE20_DATA40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 41 Base Huffman value. */
    using JPEG_HUFFBASE20_DATA41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 42 Base Huffman value. */
    using JPEG_HUFFBASE21_DATA42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 43 Base Huffman value. */
    using JPEG_HUFFBASE21_DATA43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 44 Base Huffman value. */
    using JPEG_HUFFBASE22_DATA44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 45 Base Huffman value. */
    using JPEG_HUFFBASE22_DATA45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 46 Base Huffman value. */
    using JPEG_HUFFBASE23_DATA46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 47 Base Huffman value. */
    using JPEG_HUFFBASE23_DATA47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 48 Base Huffman value. */
    using JPEG_HUFFBASE24_DATA48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 49 Base Huffman value. */
    using JPEG_HUFFBASE24_DATA49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 50 Base Huffman value. */
    using JPEG_HUFFBASE25_DATA50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 51 Base Huffman value. */
    using JPEG_HUFFBASE25_DATA51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 52 Base Huffman value. */
    using JPEG_HUFFBASE26_DATA52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 53 Base Huffman value. */
    using JPEG_HUFFBASE26_DATA53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 54 Base Huffman value. */
    using JPEG_HUFFBASE27_DATA54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 55 Base Huffman value. */
    using JPEG_HUFFBASE27_DATA55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 56 Base Huffman value. */
    using JPEG_HUFFBASE28_DATA56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 57 Base Huffman value. */
    using JPEG_HUFFBASE28_DATA57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 58 Base Huffman value. */
    using JPEG_HUFFBASE29_DATA58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 59 Base Huffman value. */
    using JPEG_HUFFBASE29_DATA59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 60 Base Huffman value. */
    using JPEG_HUFFBASE30_DATA60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 61 Base Huffman value. */
    using JPEG_HUFFBASE30_DATA61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman base */
    using JPEG_HUFFBASE31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 62 Base Huffman value. */
    using JPEG_HUFFBASE31_DATA62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 63 Base Huffman value. */
    using JPEG_HUFFBASE31_DATA63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 0 Huffman symbol. */
    using JPEG_HUFFSYMB0_DATA0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 1 Huffman symbol. */
    using JPEG_HUFFSYMB0_DATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 2 Huffman symbol. */
    using JPEG_HUFFSYMB0_DATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 3 Huffman symbol. */
    using JPEG_HUFFSYMB0_DATA3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 4 Huffman symbol. */
    using JPEG_HUFFSYMB1_DATA4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 5 Huffman symbol. */
    using JPEG_HUFFSYMB1_DATA5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 6 Huffman symbol. */
    using JPEG_HUFFSYMB1_DATA6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 7 Huffman symbol. */
    using JPEG_HUFFSYMB1_DATA7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 8 Huffman symbol. */
    using JPEG_HUFFSYMB2_DATA8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 9 Huffman symbol. */
    using JPEG_HUFFSYMB2_DATA9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 10 Huffman symbol. */
    using JPEG_HUFFSYMB2_DATA10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 11 Huffman symbol. */
    using JPEG_HUFFSYMB2_DATA11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 12 Huffman symbol. */
    using JPEG_HUFFSYMB3_DATA12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 13 Huffman symbol. */
    using JPEG_HUFFSYMB3_DATA13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 14 Huffman symbol. */
    using JPEG_HUFFSYMB3_DATA14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 15 Huffman symbol. */
    using JPEG_HUFFSYMB3_DATA15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 16 Huffman symbol. */
    using JPEG_HUFFSYMB4_DATA16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 17 Huffman symbol. */
    using JPEG_HUFFSYMB4_DATA17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 18 Huffman symbol. */
    using JPEG_HUFFSYMB4_DATA18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 19 Huffman symbol. */
    using JPEG_HUFFSYMB4_DATA19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 20 Huffman symbol. */
    using JPEG_HUFFSYMB5_DATA20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 21 Huffman symbol. */
    using JPEG_HUFFSYMB5_DATA21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 22 Huffman symbol. */
    using JPEG_HUFFSYMB5_DATA22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 23 Huffman symbol. */
    using JPEG_HUFFSYMB5_DATA23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 24 Huffman symbol. */
    using JPEG_HUFFSYMB6_DATA24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 25 Huffman symbol. */
    using JPEG_HUFFSYMB6_DATA25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 26 Huffman symbol. */
    using JPEG_HUFFSYMB6_DATA26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 27 Huffman symbol. */
    using JPEG_HUFFSYMB6_DATA27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 28 Huffman symbol. */
    using JPEG_HUFFSYMB7_DATA28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 29 Huffman symbol. */
    using JPEG_HUFFSYMB7_DATA29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 30 Huffman symbol. */
    using JPEG_HUFFSYMB7_DATA30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 31 Huffman symbol. */
    using JPEG_HUFFSYMB7_DATA31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 32 Huffman symbol. */
    using JPEG_HUFFSYMB8_DATA32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 33 Huffman symbol. */
    using JPEG_HUFFSYMB8_DATA33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 34 Huffman symbol. */
    using JPEG_HUFFSYMB8_DATA34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 35 Huffman symbol. */
    using JPEG_HUFFSYMB8_DATA35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 36 Huffman symbol. */
    using JPEG_HUFFSYMB9_DATA36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 37 Huffman symbol. */
    using JPEG_HUFFSYMB9_DATA37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 38 Huffman symbol. */
    using JPEG_HUFFSYMB9_DATA38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 39 Huffman symbol. */
    using JPEG_HUFFSYMB9_DATA39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 40 Huffman symbol. */
    using JPEG_HUFFSYMB10_DATA40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 41 Huffman symbol. */
    using JPEG_HUFFSYMB10_DATA41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 42 Huffman symbol. */
    using JPEG_HUFFSYMB10_DATA42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 43 Huffman symbol. */
    using JPEG_HUFFSYMB10_DATA43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x23C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 44 Huffman symbol. */
    using JPEG_HUFFSYMB11_DATA44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 45 Huffman symbol. */
    using JPEG_HUFFSYMB11_DATA45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 46 Huffman symbol. */
    using JPEG_HUFFSYMB11_DATA46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 47 Huffman symbol. */
    using JPEG_HUFFSYMB11_DATA47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 48 Huffman symbol. */
    using JPEG_HUFFSYMB12_DATA48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 49 Huffman symbol. */
    using JPEG_HUFFSYMB12_DATA49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 50 Huffman symbol. */
    using JPEG_HUFFSYMB12_DATA50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 51 Huffman symbol. */
    using JPEG_HUFFSYMB12_DATA51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 52 Huffman symbol. */
    using JPEG_HUFFSYMB13_DATA52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 53 Huffman symbol. */
    using JPEG_HUFFSYMB13_DATA53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 54 Huffman symbol. */
    using JPEG_HUFFSYMB13_DATA54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 55 Huffman symbol. */
    using JPEG_HUFFSYMB13_DATA55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 56 Huffman symbol. */
    using JPEG_HUFFSYMB14_DATA56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 57 Huffman symbol. */
    using JPEG_HUFFSYMB14_DATA57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 58 Huffman symbol. */
    using JPEG_HUFFSYMB14_DATA58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 59 Huffman symbol. */
    using JPEG_HUFFSYMB14_DATA59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 60 Huffman symbol. */
    using JPEG_HUFFSYMB15_DATA60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 61 Huffman symbol. */
    using JPEG_HUFFSYMB15_DATA61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 62 Huffman symbol. */
    using JPEG_HUFFSYMB15_DATA62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 63 Huffman symbol. */
    using JPEG_HUFFSYMB15_DATA63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 64 Huffman symbol. */
    using JPEG_HUFFSYMB16_DATA64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 65 Huffman symbol. */
    using JPEG_HUFFSYMB16_DATA65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 66 Huffman symbol. */
    using JPEG_HUFFSYMB16_DATA66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 67 Huffman symbol. */
    using JPEG_HUFFSYMB16_DATA67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 68 Huffman symbol. */
    using JPEG_HUFFSYMB17_DATA68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 69 Huffman symbol. */
    using JPEG_HUFFSYMB17_DATA69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 70 Huffman symbol. */
    using JPEG_HUFFSYMB17_DATA70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 71 Huffman symbol. */
    using JPEG_HUFFSYMB17_DATA71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x258, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 72 Huffman symbol. */
    using JPEG_HUFFSYMB18_DATA72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 73 Huffman symbol. */
    using JPEG_HUFFSYMB18_DATA73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 74 Huffman symbol. */
    using JPEG_HUFFSYMB18_DATA74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 75 Huffman symbol. */
    using JPEG_HUFFSYMB18_DATA75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x25C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 76 Huffman symbol. */
    using JPEG_HUFFSYMB19_DATA76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 77 Huffman symbol. */
    using JPEG_HUFFSYMB19_DATA77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 78 Huffman symbol. */
    using JPEG_HUFFSYMB19_DATA78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 79 Huffman symbol. */
    using JPEG_HUFFSYMB19_DATA79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 80 Huffman symbol. */
    using JPEG_HUFFSYMB20_DATA80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 81 Huffman symbol. */
    using JPEG_HUFFSYMB20_DATA81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 82 Huffman symbol. */
    using JPEG_HUFFSYMB20_DATA82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 83 Huffman symbol. */
    using JPEG_HUFFSYMB20_DATA83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 84 Huffman symbol. */
    using JPEG_HUFFSYMB21_DATA84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 85 Huffman symbol. */
    using JPEG_HUFFSYMB21_DATA85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 86 Huffman symbol. */
    using JPEG_HUFFSYMB21_DATA86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 87 Huffman symbol. */
    using JPEG_HUFFSYMB21_DATA87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x268, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 88 Huffman symbol. */
    using JPEG_HUFFSYMB22_DATA88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 89 Huffman symbol. */
    using JPEG_HUFFSYMB22_DATA89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 90 Huffman symbol. */
    using JPEG_HUFFSYMB22_DATA90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 91 Huffman symbol. */
    using JPEG_HUFFSYMB22_DATA91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 92 Huffman symbol. */
    using JPEG_HUFFSYMB23_DATA92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 93 Huffman symbol. */
    using JPEG_HUFFSYMB23_DATA93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 94 Huffman symbol. */
    using JPEG_HUFFSYMB23_DATA94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 95 Huffman symbol. */
    using JPEG_HUFFSYMB23_DATA95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 96 Huffman symbol. */
    using JPEG_HUFFSYMB24_DATA96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 97 Huffman symbol. */
    using JPEG_HUFFSYMB24_DATA97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 98 Huffman symbol. */
    using JPEG_HUFFSYMB24_DATA98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 99 Huffman symbol. */
    using JPEG_HUFFSYMB24_DATA99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x274, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 100 Huffman symbol. */
    using JPEG_HUFFSYMB25_DATA100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 101 Huffman symbol. */
    using JPEG_HUFFSYMB25_DATA101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 102 Huffman symbol. */
    using JPEG_HUFFSYMB25_DATA102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 103 Huffman symbol. */
    using JPEG_HUFFSYMB25_DATA103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x278, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 104 Huffman symbol. */
    using JPEG_HUFFSYMB26_DATA104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 105 Huffman symbol. */
    using JPEG_HUFFSYMB26_DATA105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 106 Huffman symbol. */
    using JPEG_HUFFSYMB26_DATA106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 107 Huffman symbol. */
    using JPEG_HUFFSYMB26_DATA107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x27C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 108 Huffman symbol. */
    using JPEG_HUFFSYMB27_DATA108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 109 Huffman symbol. */
    using JPEG_HUFFSYMB27_DATA109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 110 Huffman symbol. */
    using JPEG_HUFFSYMB27_DATA110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 111 Huffman symbol. */
    using JPEG_HUFFSYMB27_DATA111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 112 Huffman symbol. */
    using JPEG_HUFFSYMB28_DATA112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 113 Huffman symbol. */
    using JPEG_HUFFSYMB28_DATA113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 114 Huffman symbol. */
    using JPEG_HUFFSYMB28_DATA114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 115 Huffman symbol. */
    using JPEG_HUFFSYMB28_DATA115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 116 Huffman symbol. */
    using JPEG_HUFFSYMB29_DATA116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 117 Huffman symbol. */
    using JPEG_HUFFSYMB29_DATA117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 118 Huffman symbol. */
    using JPEG_HUFFSYMB29_DATA118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 119 Huffman symbol. */
    using JPEG_HUFFSYMB29_DATA119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 120 Huffman symbol. */
    using JPEG_HUFFSYMB30_DATA120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 121 Huffman symbol. */
    using JPEG_HUFFSYMB30_DATA121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 122 Huffman symbol. */
    using JPEG_HUFFSYMB30_DATA122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 123 Huffman symbol. */
    using JPEG_HUFFSYMB30_DATA123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 124 Huffman symbol. */
    using JPEG_HUFFSYMB31_DATA124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 125 Huffman symbol. */
    using JPEG_HUFFSYMB31_DATA125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 126 Huffman symbol. */
    using JPEG_HUFFSYMB31_DATA126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 127 Huffman symbol. */
    using JPEG_HUFFSYMB31_DATA127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 128 Huffman symbol. */
    using JPEG_HUFFSYMB32_DATA128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 129 Huffman symbol. */
    using JPEG_HUFFSYMB32_DATA129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 130 Huffman symbol. */
    using JPEG_HUFFSYMB32_DATA130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 131 Huffman symbol. */
    using JPEG_HUFFSYMB32_DATA131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 132 Huffman symbol. */
    using JPEG_HUFFSYMB33_DATA132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 133 Huffman symbol. */
    using JPEG_HUFFSYMB33_DATA133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 134 Huffman symbol. */
    using JPEG_HUFFSYMB33_DATA134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 135 Huffman symbol. */
    using JPEG_HUFFSYMB33_DATA135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 136 Huffman symbol. */
    using JPEG_HUFFSYMB34_DATA136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 137 Huffman symbol. */
    using JPEG_HUFFSYMB34_DATA137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 138 Huffman symbol. */
    using JPEG_HUFFSYMB34_DATA138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 139 Huffman symbol. */
    using JPEG_HUFFSYMB34_DATA139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 140 Huffman symbol. */
    using JPEG_HUFFSYMB35_DATA140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 141 Huffman symbol. */
    using JPEG_HUFFSYMB35_DATA141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 142 Huffman symbol. */
    using JPEG_HUFFSYMB35_DATA142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 143 Huffman symbol. */
    using JPEG_HUFFSYMB35_DATA143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 144 Huffman symbol. */
    using JPEG_HUFFSYMB36_DATA144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 145 Huffman symbol. */
    using JPEG_HUFFSYMB36_DATA145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 146 Huffman symbol. */
    using JPEG_HUFFSYMB36_DATA146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 147 Huffman symbol. */
    using JPEG_HUFFSYMB36_DATA147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 148 Huffman symbol. */
    using JPEG_HUFFSYMB37_DATA148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 149 Huffman symbol. */
    using JPEG_HUFFSYMB37_DATA149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 150 Huffman symbol. */
    using JPEG_HUFFSYMB37_DATA150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 151 Huffman symbol. */
    using JPEG_HUFFSYMB37_DATA151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 152 Huffman symbol. */
    using JPEG_HUFFSYMB38_DATA152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 153 Huffman symbol. */
    using JPEG_HUFFSYMB38_DATA153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 154 Huffman symbol. */
    using JPEG_HUFFSYMB38_DATA154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 155 Huffman symbol. */
    using JPEG_HUFFSYMB38_DATA155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 156 Huffman symbol. */
    using JPEG_HUFFSYMB39_DATA156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 157 Huffman symbol. */
    using JPEG_HUFFSYMB39_DATA157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 158 Huffman symbol. */
    using JPEG_HUFFSYMB39_DATA158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 159 Huffman symbol. */
    using JPEG_HUFFSYMB39_DATA159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 160 Huffman symbol. */
    using JPEG_HUFFSYMB40_DATA160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 161 Huffman symbol. */
    using JPEG_HUFFSYMB40_DATA161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 162 Huffman symbol. */
    using JPEG_HUFFSYMB40_DATA162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 163 Huffman symbol. */
    using JPEG_HUFFSYMB40_DATA163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 164 Huffman symbol. */
    using JPEG_HUFFSYMB41_DATA164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 165 Huffman symbol. */
    using JPEG_HUFFSYMB41_DATA165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 166 Huffman symbol. */
    using JPEG_HUFFSYMB41_DATA166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 167 Huffman symbol. */
    using JPEG_HUFFSYMB41_DATA167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 168 Huffman symbol. */
    using JPEG_HUFFSYMB42_DATA168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 169 Huffman symbol. */
    using JPEG_HUFFSYMB42_DATA169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 170 Huffman symbol. */
    using JPEG_HUFFSYMB42_DATA170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 171 Huffman symbol. */
    using JPEG_HUFFSYMB42_DATA171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 172 Huffman symbol. */
    using JPEG_HUFFSYMB43_DATA172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 173 Huffman symbol. */
    using JPEG_HUFFSYMB43_DATA173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 174 Huffman symbol. */
    using JPEG_HUFFSYMB43_DATA174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 175 Huffman symbol. */
    using JPEG_HUFFSYMB43_DATA175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 176 Huffman symbol. */
    using JPEG_HUFFSYMB44_DATA176 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 177 Huffman symbol. */
    using JPEG_HUFFSYMB44_DATA177 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 178 Huffman symbol. */
    using JPEG_HUFFSYMB44_DATA178 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 179 Huffman symbol. */
    using JPEG_HUFFSYMB44_DATA179 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 180 Huffman symbol. */
    using JPEG_HUFFSYMB45_DATA180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 181 Huffman symbol. */
    using JPEG_HUFFSYMB45_DATA181 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 182 Huffman symbol. */
    using JPEG_HUFFSYMB45_DATA182 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 183 Huffman symbol. */
    using JPEG_HUFFSYMB45_DATA183 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 184 Huffman symbol. */
    using JPEG_HUFFSYMB46_DATA184 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 185 Huffman symbol. */
    using JPEG_HUFFSYMB46_DATA185 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 186 Huffman symbol. */
    using JPEG_HUFFSYMB46_DATA186 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 187 Huffman symbol. */
    using JPEG_HUFFSYMB46_DATA187 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 188 Huffman symbol. */
    using JPEG_HUFFSYMB47_DATA188 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 189 Huffman symbol. */
    using JPEG_HUFFSYMB47_DATA189 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 190 Huffman symbol. */
    using JPEG_HUFFSYMB47_DATA190 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 191 Huffman symbol. */
    using JPEG_HUFFSYMB47_DATA191 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 192 Huffman symbol. */
    using JPEG_HUFFSYMB48_DATA192 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 193 Huffman symbol. */
    using JPEG_HUFFSYMB48_DATA193 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 194 Huffman symbol. */
    using JPEG_HUFFSYMB48_DATA194 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 195 Huffman symbol. */
    using JPEG_HUFFSYMB48_DATA195 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 196 Huffman symbol. */
    using JPEG_HUFFSYMB49_DATA196 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 197 Huffman symbol. */
    using JPEG_HUFFSYMB49_DATA197 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 198 Huffman symbol. */
    using JPEG_HUFFSYMB49_DATA198 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 199 Huffman symbol. */
    using JPEG_HUFFSYMB49_DATA199 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 200 Huffman symbol. */
    using JPEG_HUFFSYMB50_DATA200 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 201 Huffman symbol. */
    using JPEG_HUFFSYMB50_DATA201 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 202 Huffman symbol. */
    using JPEG_HUFFSYMB50_DATA202 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 203 Huffman symbol. */
    using JPEG_HUFFSYMB50_DATA203 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 204 Huffman symbol. */
    using JPEG_HUFFSYMB51_DATA204 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 205 Huffman symbol. */
    using JPEG_HUFFSYMB51_DATA205 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 206 Huffman symbol. */
    using JPEG_HUFFSYMB51_DATA206 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 207 Huffman symbol. */
    using JPEG_HUFFSYMB51_DATA207 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 208 Huffman symbol. */
    using JPEG_HUFFSYMB52_DATA208 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 209 Huffman symbol. */
    using JPEG_HUFFSYMB52_DATA209 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 210 Huffman symbol. */
    using JPEG_HUFFSYMB52_DATA210 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 211 Huffman symbol. */
    using JPEG_HUFFSYMB52_DATA211 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 212 Huffman symbol. */
    using JPEG_HUFFSYMB53_DATA212 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 213 Huffman symbol. */
    using JPEG_HUFFSYMB53_DATA213 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 214 Huffman symbol. */
    using JPEG_HUFFSYMB53_DATA214 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 215 Huffman symbol. */
    using JPEG_HUFFSYMB53_DATA215 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 216 Huffman symbol. */
    using JPEG_HUFFSYMB54_DATA216 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 217 Huffman symbol. */
    using JPEG_HUFFSYMB54_DATA217 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 218 Huffman symbol. */
    using JPEG_HUFFSYMB54_DATA218 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 219 Huffman symbol. */
    using JPEG_HUFFSYMB54_DATA219 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 220 Huffman symbol. */
    using JPEG_HUFFSYMB55_DATA220 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 221 Huffman symbol. */
    using JPEG_HUFFSYMB55_DATA221 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 222 Huffman symbol. */
    using JPEG_HUFFSYMB55_DATA222 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 223 Huffman symbol. */
    using JPEG_HUFFSYMB55_DATA223 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 224 Huffman symbol. */
    using JPEG_HUFFSYMB56_DATA224 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 225 Huffman symbol. */
    using JPEG_HUFFSYMB56_DATA225 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 226 Huffman symbol. */
    using JPEG_HUFFSYMB56_DATA226 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 227 Huffman symbol. */
    using JPEG_HUFFSYMB56_DATA227 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 228 Huffman symbol. */
    using JPEG_HUFFSYMB57_DATA228 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 229 Huffman symbol. */
    using JPEG_HUFFSYMB57_DATA229 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 230 Huffman symbol. */
    using JPEG_HUFFSYMB57_DATA230 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 231 Huffman symbol. */
    using JPEG_HUFFSYMB57_DATA231 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 232 Huffman symbol. */
    using JPEG_HUFFSYMB58_DATA232 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 233 Huffman symbol. */
    using JPEG_HUFFSYMB58_DATA233 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 234 Huffman symbol. */
    using JPEG_HUFFSYMB58_DATA234 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 235 Huffman symbol. */
    using JPEG_HUFFSYMB58_DATA235 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 236 Huffman symbol. */
    using JPEG_HUFFSYMB59_DATA236 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 237 Huffman symbol. */
    using JPEG_HUFFSYMB59_DATA237 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 238 Huffman symbol. */
    using JPEG_HUFFSYMB59_DATA238 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 239 Huffman symbol. */
    using JPEG_HUFFSYMB59_DATA239 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 240 Huffman symbol. */
    using JPEG_HUFFSYMB60_DATA240 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 241 Huffman symbol. */
    using JPEG_HUFFSYMB60_DATA241 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 242 Huffman symbol. */
    using JPEG_HUFFSYMB60_DATA242 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 243 Huffman symbol. */
    using JPEG_HUFFSYMB60_DATA243 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 244 Huffman symbol. */
    using JPEG_HUFFSYMB61_DATA244 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 245 Huffman symbol. */
    using JPEG_HUFFSYMB61_DATA245 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 246 Huffman symbol. */
    using JPEG_HUFFSYMB61_DATA246 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 247 Huffman symbol. */
    using JPEG_HUFFSYMB61_DATA247 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 248 Huffman symbol. */
    using JPEG_HUFFSYMB62_DATA248 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 249 Huffman symbol. */
    using JPEG_HUFFSYMB62_DATA249 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 250 Huffman symbol. */
    using JPEG_HUFFSYMB62_DATA250 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 251 Huffman symbol. */
    using JPEG_HUFFSYMB62_DATA251 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 252 Huffman symbol. */
    using JPEG_HUFFSYMB63_DATA252 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 253 Huffman symbol. */
    using JPEG_HUFFSYMB63_DATA253 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 254 Huffman symbol. */
    using JPEG_HUFFSYMB63_DATA254 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 255 Huffman symbol. */
    using JPEG_HUFFSYMB63_DATA255 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 256 Huffman symbol. */
    using JPEG_HUFFSYMB64_DATA256 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 257 Huffman symbol. */
    using JPEG_HUFFSYMB64_DATA257 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 258 Huffman symbol. */
    using JPEG_HUFFSYMB64_DATA258 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 259 Huffman symbol. */
    using JPEG_HUFFSYMB64_DATA259 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 260 Huffman symbol. */
    using JPEG_HUFFSYMB65_DATA260 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 261 Huffman symbol. */
    using JPEG_HUFFSYMB65_DATA261 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 262 Huffman symbol. */
    using JPEG_HUFFSYMB65_DATA262 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 263 Huffman symbol. */
    using JPEG_HUFFSYMB65_DATA263 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 264 Huffman symbol. */
    using JPEG_HUFFSYMB66_DATA264 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 265 Huffman symbol. */
    using JPEG_HUFFSYMB66_DATA265 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 266 Huffman symbol. */
    using JPEG_HUFFSYMB66_DATA266 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 267 Huffman symbol. */
    using JPEG_HUFFSYMB66_DATA267 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 268 Huffman symbol. */
    using JPEG_HUFFSYMB67_DATA268 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 269 Huffman symbol. */
    using JPEG_HUFFSYMB67_DATA269 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 270 Huffman symbol. */
    using JPEG_HUFFSYMB67_DATA270 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 271 Huffman symbol. */
    using JPEG_HUFFSYMB67_DATA271 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 272 Huffman symbol. */
    using JPEG_HUFFSYMB68_DATA272 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 273 Huffman symbol. */
    using JPEG_HUFFSYMB68_DATA273 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 274 Huffman symbol. */
    using JPEG_HUFFSYMB68_DATA274 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 275 Huffman symbol. */
    using JPEG_HUFFSYMB68_DATA275 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x324, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 276 Huffman symbol. */
    using JPEG_HUFFSYMB69_DATA276 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 277 Huffman symbol. */
    using JPEG_HUFFSYMB69_DATA277 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 278 Huffman symbol. */
    using JPEG_HUFFSYMB69_DATA278 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 279 Huffman symbol. */
    using JPEG_HUFFSYMB69_DATA279 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x328, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 280 Huffman symbol. */
    using JPEG_HUFFSYMB70_DATA280 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 281 Huffman symbol. */
    using JPEG_HUFFSYMB70_DATA281 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 282 Huffman symbol. */
    using JPEG_HUFFSYMB70_DATA282 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 283 Huffman symbol. */
    using JPEG_HUFFSYMB70_DATA283 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x32C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 284 Huffman symbol. */
    using JPEG_HUFFSYMB71_DATA284 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 285 Huffman symbol. */
    using JPEG_HUFFSYMB71_DATA285 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 286 Huffman symbol. */
    using JPEG_HUFFSYMB71_DATA286 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 287 Huffman symbol. */
    using JPEG_HUFFSYMB71_DATA287 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x330, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 288 Huffman symbol. */
    using JPEG_HUFFSYMB72_DATA288 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 289 Huffman symbol. */
    using JPEG_HUFFSYMB72_DATA289 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 290 Huffman symbol. */
    using JPEG_HUFFSYMB72_DATA290 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 291 Huffman symbol. */
    using JPEG_HUFFSYMB72_DATA291 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x334, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 292 Huffman symbol. */
    using JPEG_HUFFSYMB73_DATA292 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 293 Huffman symbol. */
    using JPEG_HUFFSYMB73_DATA293 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 294 Huffman symbol. */
    using JPEG_HUFFSYMB73_DATA294 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 295 Huffman symbol. */
    using JPEG_HUFFSYMB73_DATA295 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x338, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 296 Huffman symbol. */
    using JPEG_HUFFSYMB74_DATA296 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 297 Huffman symbol. */
    using JPEG_HUFFSYMB74_DATA297 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 298 Huffman symbol. */
    using JPEG_HUFFSYMB74_DATA298 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 299 Huffman symbol. */
    using JPEG_HUFFSYMB74_DATA299 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x33C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 300 Huffman symbol. */
    using JPEG_HUFFSYMB75_DATA300 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 301 Huffman symbol. */
    using JPEG_HUFFSYMB75_DATA301 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 302 Huffman symbol. */
    using JPEG_HUFFSYMB75_DATA302 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 303 Huffman symbol. */
    using JPEG_HUFFSYMB75_DATA303 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x340, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 304 Huffman symbol. */
    using JPEG_HUFFSYMB76_DATA304 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 305 Huffman symbol. */
    using JPEG_HUFFSYMB76_DATA305 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 306 Huffman symbol. */
    using JPEG_HUFFSYMB76_DATA306 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 307 Huffman symbol. */
    using JPEG_HUFFSYMB76_DATA307 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x344, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 308 Huffman symbol. */
    using JPEG_HUFFSYMB77_DATA308 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 309 Huffman symbol. */
    using JPEG_HUFFSYMB77_DATA309 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 310 Huffman symbol. */
    using JPEG_HUFFSYMB77_DATA310 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 311 Huffman symbol. */
    using JPEG_HUFFSYMB77_DATA311 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x348, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 312 Huffman symbol. */
    using JPEG_HUFFSYMB78_DATA312 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 313 Huffman symbol. */
    using JPEG_HUFFSYMB78_DATA313 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 314 Huffman symbol. */
    using JPEG_HUFFSYMB78_DATA314 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 315 Huffman symbol. */
    using JPEG_HUFFSYMB78_DATA315 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 316 Huffman symbol. */
    using JPEG_HUFFSYMB79_DATA316 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 317 Huffman symbol. */
    using JPEG_HUFFSYMB79_DATA317 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 318 Huffman symbol. */
    using JPEG_HUFFSYMB79_DATA318 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 319 Huffman symbol. */
    using JPEG_HUFFSYMB79_DATA319 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x350, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 320 Huffman symbol. */
    using JPEG_HUFFSYMB80_DATA320 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 321 Huffman symbol. */
    using JPEG_HUFFSYMB80_DATA321 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 322 Huffman symbol. */
    using JPEG_HUFFSYMB80_DATA322 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 323 Huffman symbol. */
    using JPEG_HUFFSYMB80_DATA323 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x354, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 324 Huffman symbol. */
    using JPEG_HUFFSYMB81_DATA324 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 325 Huffman symbol. */
    using JPEG_HUFFSYMB81_DATA325 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 326 Huffman symbol. */
    using JPEG_HUFFSYMB81_DATA326 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 327 Huffman symbol. */
    using JPEG_HUFFSYMB81_DATA327 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x358, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 328 Huffman symbol. */
    using JPEG_HUFFSYMB82_DATA328 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 329 Huffman symbol. */
    using JPEG_HUFFSYMB82_DATA329 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 330 Huffman symbol. */
    using JPEG_HUFFSYMB82_DATA330 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 331 Huffman symbol. */
    using JPEG_HUFFSYMB82_DATA331 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman symbol */
    using JPEG_HUFFSYMB83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x35C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 332 Huffman symbol. */
    using JPEG_HUFFSYMB83_DATA332 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 333 Huffman symbol. */
    using JPEG_HUFFSYMB83_DATA333 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 334 Huffman symbol. */
    using JPEG_HUFFSYMB83_DATA334 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data 335 Huffman symbol. */
    using JPEG_HUFFSYMB83_DATA335 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x360, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 0 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM0_DATA0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 1 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM0_DATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 2 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM0_DATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 3 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM0_DATA3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x364, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 4 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM1_DATA4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 5 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM1_DATA5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 6 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM1_DATA6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 7 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM1_DATA7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x368, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 8 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM2_DATA8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 9 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM2_DATA9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 10 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM2_DATA10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 11 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM2_DATA11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x36C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 12 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM3_DATA12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 13 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM3_DATA13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 14 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM3_DATA14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 15 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM3_DATA15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x370, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 16 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM4_DATA16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 17 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM4_DATA17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 18 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM4_DATA18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 19 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM4_DATA19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x374, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 20 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM5_DATA20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 21 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM5_DATA21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 22 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM5_DATA22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 23 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM5_DATA23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x378, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 24 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM6_DATA24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 25 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM6_DATA25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 26 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM6_DATA26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 27 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM6_DATA27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x37C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 28 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM7_DATA28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 29 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM7_DATA29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 30 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM7_DATA30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 31 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM7_DATA31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x380, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 32 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM8_DATA32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 33 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM8_DATA33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 34 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM8_DATA34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 35 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM8_DATA35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x384, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 36 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM9_DATA36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 37 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM9_DATA37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 38 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM9_DATA38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 39 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM9_DATA39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x388, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 40 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM10_DATA40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 41 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM10_DATA41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 42 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM10_DATA42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 43 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM10_DATA43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 44 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM11_DATA44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 45 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM11_DATA45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 46 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM11_DATA46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 47 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM11_DATA47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x390, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 48 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM12_DATA48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 49 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM12_DATA49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 50 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM12_DATA50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 51 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM12_DATA51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x394, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 52 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM13_DATA52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 53 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM13_DATA53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 54 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM13_DATA54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 55 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM13_DATA55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x398, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 56 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM14_DATA56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 57 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM14_DATA57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 58 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM14_DATA58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 59 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM14_DATA59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x39C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 60 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM15_DATA60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 61 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM15_DATA61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 62 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM15_DATA62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 63 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM15_DATA63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 64 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM16_DATA64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 65 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM16_DATA65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 66 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM16_DATA66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 67 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM16_DATA67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 68 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM17_DATA68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 69 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM17_DATA69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 70 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM17_DATA70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 71 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM17_DATA71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 72 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM18_DATA72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 73 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM18_DATA73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 74 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM18_DATA74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 75 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM18_DATA75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 76 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM19_DATA76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 77 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM19_DATA77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 78 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM19_DATA78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 79 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM19_DATA79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 80 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM20_DATA80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 81 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM20_DATA81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 82 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM20_DATA82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 83 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM20_DATA83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 84 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM21_DATA84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 85 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM21_DATA85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 86 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM21_DATA86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 87 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM21_DATA87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 88 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM22_DATA88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 89 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM22_DATA89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 90 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM22_DATA90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 91 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM22_DATA91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 92 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM23_DATA92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 93 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM23_DATA93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 94 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM23_DATA94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 95 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM23_DATA95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 96 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM24_DATA96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 97 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM24_DATA97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 98 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM24_DATA98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 99 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM24_DATA99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 100 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM25_DATA100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 101 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM25_DATA101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 102 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM25_DATA102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 103 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM25_DATA103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 104 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM26_DATA104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 105 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM26_DATA105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 106 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM26_DATA106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 107 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM26_DATA107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 108 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM27_DATA108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 109 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM27_DATA109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 110 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM27_DATA110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 111 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM27_DATA111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 112 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM28_DATA112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 113 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM28_DATA113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 114 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM28_DATA114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 115 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM28_DATA115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 116 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM29_DATA116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 117 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM29_DATA117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 118 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM29_DATA118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 119 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM29_DATA119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 120 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM30_DATA120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 121 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM30_DATA121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 122 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM30_DATA122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 123 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM30_DATA123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 124 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM31_DATA124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 125 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM31_DATA125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 126 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM31_DATA126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 127 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM31_DATA127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 128 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM32_DATA128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 129 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM32_DATA129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 130 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM32_DATA130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 131 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM32_DATA131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 132 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM33_DATA132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 133 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM33_DATA133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 134 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM33_DATA134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 135 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM33_DATA135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 136 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM34_DATA136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 137 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM34_DATA137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 138 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM34_DATA138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 139 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM34_DATA139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 140 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM35_DATA140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 141 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM35_DATA141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 142 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM35_DATA142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 143 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM35_DATA143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 144 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM36_DATA144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 145 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM36_DATA145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 146 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM36_DATA146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 147 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM36_DATA147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 148 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM37_DATA148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 149 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM37_DATA149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 150 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM37_DATA150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 151 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM37_DATA151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 152 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM38_DATA152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 153 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM38_DATA153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 154 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM38_DATA154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 155 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM38_DATA155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 156 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM39_DATA156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 157 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM39_DATA157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 158 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM39_DATA158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 159 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM39_DATA159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 160 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM40_DATA160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 161 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM40_DATA161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 162 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM40_DATA162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 163 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM40_DATA163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 164 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM41_DATA164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 165 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM41_DATA165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 166 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM41_DATA166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 167 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM41_DATA167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x408, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 168 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM42_DATA168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 169 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM42_DATA169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 170 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM42_DATA170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 171 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM42_DATA171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 172 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM43_DATA172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 173 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM43_DATA173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 174 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM43_DATA174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 175 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM43_DATA175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 176 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM44_DATA176 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 177 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM44_DATA177 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 178 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM44_DATA178 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 179 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM44_DATA179 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 180 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM45_DATA180 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 181 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM45_DATA181 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 182 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM45_DATA182 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 183 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM45_DATA183 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 184 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM46_DATA184 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 185 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM46_DATA185 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 186 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM46_DATA186 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 187 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM46_DATA187 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 188 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM47_DATA188 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 189 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM47_DATA189 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 190 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM47_DATA190 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 191 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM47_DATA191 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 192 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM48_DATA192 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 193 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM48_DATA193 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 194 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM48_DATA194 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 195 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM48_DATA195 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x424, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 196 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM49_DATA196 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 197 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM49_DATA197 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 198 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM49_DATA198 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 199 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM49_DATA199 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x428, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 200 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM50_DATA200 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 201 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM50_DATA201 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 202 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM50_DATA202 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 203 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM50_DATA203 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 204 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM51_DATA204 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 205 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM51_DATA205 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 206 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM51_DATA206 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 207 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM51_DATA207 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x430, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 208 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM52_DATA208 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 209 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM52_DATA209 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 210 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM52_DATA210 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 211 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM52_DATA211 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x434, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 212 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM53_DATA212 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 213 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM53_DATA213 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 214 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM53_DATA214 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 215 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM53_DATA215 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x438, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 216 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM54_DATA216 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 217 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM54_DATA217 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 218 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM54_DATA218 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 219 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM54_DATA219 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x43C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 220 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM55_DATA220 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 221 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM55_DATA221 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 222 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM55_DATA222 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 223 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM55_DATA223 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x440, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 224 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM56_DATA224 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 225 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM56_DATA225 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 226 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM56_DATA226 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 227 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM56_DATA227 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x444, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 228 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM57_DATA228 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 229 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM57_DATA229 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 230 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM57_DATA230 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 231 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM57_DATA231 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x448, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 232 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM58_DATA232 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 233 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM58_DATA233 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 234 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM58_DATA234 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 235 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM58_DATA235 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 236 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM59_DATA236 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 237 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM59_DATA237 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 238 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM59_DATA238 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 239 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM59_DATA239 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x450, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 240 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM60_DATA240 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 241 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM60_DATA241 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 242 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM60_DATA242 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 243 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM60_DATA243 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x454, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 244 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM61_DATA244 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 245 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM61_DATA245 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 246 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM61_DATA246 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 247 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM61_DATA247 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x458, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 248 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM62_DATA248 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 249 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM62_DATA249 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 250 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM62_DATA250 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 251 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM62_DATA251 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 252 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM63_DATA252 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 253 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM63_DATA253 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 254 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM63_DATA254 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 255 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM63_DATA255 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x460, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 256 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM64_DATA256 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 257 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM64_DATA257 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 258 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM64_DATA258 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 259 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM64_DATA259 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x464, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 260 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM65_DATA260 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 261 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM65_DATA261 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 262 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM65_DATA262 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 263 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM65_DATA263 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x468, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 264 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM66_DATA264 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 265 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM66_DATA265 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 266 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM66_DATA266 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 267 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM66_DATA267 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x46C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 268 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM67_DATA268 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 269 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM67_DATA269 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 270 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM67_DATA270 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 271 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM67_DATA271 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x470, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 272 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM68_DATA272 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 273 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM68_DATA273 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 274 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM68_DATA274 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 275 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM68_DATA275 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x474, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 276 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM69_DATA276 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 277 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM69_DATA277 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 278 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM69_DATA278 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 279 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM69_DATA279 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x478, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 280 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM70_DATA280 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 281 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM70_DATA281 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 282 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM70_DATA282 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 283 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM70_DATA283 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x47C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 284 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM71_DATA284 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 285 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM71_DATA285 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 286 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM71_DATA286 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 287 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM71_DATA287 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x480, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 288 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM72_DATA288 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 289 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM72_DATA289 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 290 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM72_DATA290 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 291 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM72_DATA291 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x484, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 292 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM73_DATA292 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 293 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM73_DATA293 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 294 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM73_DATA294 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 295 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM73_DATA295 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x488, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 296 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM74_DATA296 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 297 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM74_DATA297 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 298 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM74_DATA298 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 299 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM74_DATA299 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 300 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM75_DATA300 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 301 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM75_DATA301 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 302 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM75_DATA302 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 303 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM75_DATA303 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x490, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 304 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM76_DATA304 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 305 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM76_DATA305 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 306 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM76_DATA306 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 307 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM76_DATA307 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x494, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 308 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM77_DATA308 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 309 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM77_DATA309 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 310 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM77_DATA310 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 311 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM77_DATA311 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x498, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 312 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM78_DATA312 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 313 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM78_DATA313 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 314 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM78_DATA314 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 315 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM78_DATA315 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x49C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 316 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM79_DATA316 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 317 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM79_DATA317 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 318 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM79_DATA318 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 319 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM79_DATA319 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 320 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM80_DATA320 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 321 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM80_DATA321 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 322 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM80_DATA322 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 323 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM80_DATA323 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 324 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM81_DATA324 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 325 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM81_DATA325 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 326 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM81_DATA326 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 327 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM81_DATA327 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 328 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM82_DATA328 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 329 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM82_DATA329 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 330 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM82_DATA330 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 331 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM82_DATA331 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 332 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM83_DATA332 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 333 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM83_DATA333 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 334 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM83_DATA334 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 335 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM83_DATA335 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 336 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM84_DATA336 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 337 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM84_DATA337 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 338 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM84_DATA338 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 339 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM84_DATA339 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 340 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM85_DATA340 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 341 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM85_DATA341 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 342 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM85_DATA342 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 343 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM85_DATA343 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 344 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM86_DATA344 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 345 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM86_DATA345 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 346 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM86_DATA346 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 347 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM86_DATA347 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 348 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM87_DATA348 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 349 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM87_DATA349 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 350 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM87_DATA350 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 351 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM87_DATA351 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM88 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 352 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM88_DATA352 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 353 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM88_DATA353 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 354 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM88_DATA354 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 355 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM88_DATA355 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM89 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 356 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM89_DATA356 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 357 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM89_DATA357 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 358 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM89_DATA358 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 359 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM89_DATA359 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM90 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 360 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM90_DATA360 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 361 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM90_DATA361 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 362 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM90_DATA362 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 363 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM90_DATA363 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM91 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 364 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM91_DATA364 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 365 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM91_DATA365 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 366 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM91_DATA366 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 367 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM91_DATA367 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM92 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 368 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM92_DATA368 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 369 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM92_DATA369 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 370 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM92_DATA370 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 371 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM92_DATA371 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM93 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 372 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM93_DATA372 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 373 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM93_DATA373 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 374 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM93_DATA374 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 375 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM93_DATA375 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM94 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 376 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM94_DATA376 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 377 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM94_DATA377 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 378 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM94_DATA378 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 379 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM94_DATA379 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM95 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 380 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM95_DATA380 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 381 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM95_DATA381 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 382 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM95_DATA382 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 383 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM95_DATA383 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM96 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 384 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM96_DATA384 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 385 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM96_DATA385 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 386 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM96_DATA386 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 387 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM96_DATA387 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM97 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 388 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM97_DATA388 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 389 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM97_DATA389 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 390 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM97_DATA390 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 391 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM97_DATA391 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM98 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 392 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM98_DATA392 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 393 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM98_DATA393 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 394 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM98_DATA394 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 395 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM98_DATA395 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM99 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 396 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM99_DATA396 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 397 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM99_DATA397 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 398 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM99_DATA398 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 399 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM99_DATA399 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM100 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 400 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM100_DATA400 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 401 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM100_DATA401 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 402 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM100_DATA402 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 403 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM100_DATA403 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM101 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 404 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM101_DATA404 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 405 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM101_DATA405 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 406 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM101_DATA406 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 407 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM101_DATA407 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG DHT memory */
    using JPEG_DHTMEM102 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 408 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM102_DATA408 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 409 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM102_DATA409 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 410 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM102_DATA410 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman table data 411 Huffman table data for DHT marker segment generation. */
    using JPEG_DHTMEM102_DATA411 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x500, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 0 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_0_HCODE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 0 Number of bits in the Huffman code HCODE0 minus 1. */
    using JPEG_HUFFENC_AC0_0_HLEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 1 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_0_HCODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 1 Number of bits in the Huffman code HCODE1 minus 1. */
    using JPEG_HUFFENC_AC0_0_HLEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x504, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 2 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_1_HCODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 2 Number of bits in the Huffman code HCODE2 minus 1. */
    using JPEG_HUFFENC_AC0_1_HLEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 3 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_1_HCODE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 3 Number of bits in the Huffman code HCODE3 minus 1. */
    using JPEG_HUFFENC_AC0_1_HLEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x508, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 4 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_2_HCODE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 4 Number of bits in the Huffman code HCODE4 minus 1. */
    using JPEG_HUFFENC_AC0_2_HLEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 5 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_2_HCODE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 5 Number of bits in the Huffman code HCODE5 minus 1. */
    using JPEG_HUFFENC_AC0_2_HLEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 6 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_3_HCODE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 6 Number of bits in the Huffman code HCODE6 minus 1. */
    using JPEG_HUFFENC_AC0_3_HLEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 7 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_3_HCODE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 7 Number of bits in the Huffman code HCODE7 minus 1. */
    using JPEG_HUFFENC_AC0_3_HLEN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x510, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 8 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_4_HCODE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 8 Number of bits in the Huffman code HCODE8 minus 1. */
    using JPEG_HUFFENC_AC0_4_HLEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 9 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_4_HCODE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 9 Number of bits in the Huffman code HCODE9 minus 1. */
    using JPEG_HUFFENC_AC0_4_HLEN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x514, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 10 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_5_HCODE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 10 Number of bits in the Huffman code HCODE10 minus 1. */
    using JPEG_HUFFENC_AC0_5_HLEN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 11 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_5_HCODE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 11 Number of bits in the Huffman code HCODE11 minus 1. */
    using JPEG_HUFFENC_AC0_5_HLEN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x518, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 12 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_6_HCODE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 12 Number of bits in the Huffman code HCODE12 minus 1. */
    using JPEG_HUFFENC_AC0_6_HLEN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 13 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_6_HCODE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 13 Number of bits in the Huffman code HCODE13 minus 1. */
    using JPEG_HUFFENC_AC0_6_HLEN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x51C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 14 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_7_HCODE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 14 Number of bits in the Huffman code HCODE14 minus 1. */
    using JPEG_HUFFENC_AC0_7_HLEN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 15 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_7_HCODE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 15 Number of bits in the Huffman code HCODE15 minus 1. */
    using JPEG_HUFFENC_AC0_7_HLEN15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x520, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 16 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_8_HCODE16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 16 Number of bits in the Huffman code HCODE16 minus 1. */
    using JPEG_HUFFENC_AC0_8_HLEN16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 17 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_8_HCODE17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 17 Number of bits in the Huffman code HCODE17 minus 1. */
    using JPEG_HUFFENC_AC0_8_HLEN17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x524, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 18 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_9_HCODE18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 18 Number of bits in the Huffman code HCODE18 minus 1. */
    using JPEG_HUFFENC_AC0_9_HLEN18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 19 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_9_HCODE19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 19 Number of bits in the Huffman code HCODE19 minus 1. */
    using JPEG_HUFFENC_AC0_9_HLEN19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x528, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 20 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_10_HCODE20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 20 Number of bits in the Huffman code HCODE20 minus 1. */
    using JPEG_HUFFENC_AC0_10_HLEN20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 21 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_10_HCODE21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 21 Number of bits in the Huffman code HCODE21 minus 1. */
    using JPEG_HUFFENC_AC0_10_HLEN21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x52C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 22 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_11_HCODE22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 22 Number of bits in the Huffman code HCODE22 minus 1. */
    using JPEG_HUFFENC_AC0_11_HLEN22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 23 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_11_HCODE23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 23 Number of bits in the Huffman code HCODE23 minus 1. */
    using JPEG_HUFFENC_AC0_11_HLEN23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x530, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 24 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_12_HCODE24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 24 Number of bits in the Huffman code HCODE24 minus 1. */
    using JPEG_HUFFENC_AC0_12_HLEN24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 25 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_12_HCODE25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 25 Number of bits in the Huffman code HCODE25 minus 1. */
    using JPEG_HUFFENC_AC0_12_HLEN25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x534, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 26 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_13_HCODE26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 26 Number of bits in the Huffman code HCODE26 minus 1. */
    using JPEG_HUFFENC_AC0_13_HLEN26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 27 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_13_HCODE27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 27 Number of bits in the Huffman code HCODE27 minus 1. */
    using JPEG_HUFFENC_AC0_13_HLEN27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x538, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 28 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_14_HCODE28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 28 Number of bits in the Huffman code HCODE28 minus 1. */
    using JPEG_HUFFENC_AC0_14_HLEN28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 29 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_14_HCODE29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 29 Number of bits in the Huffman code HCODE29 minus 1. */
    using JPEG_HUFFENC_AC0_14_HLEN29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x53C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 30 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_15_HCODE30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 30 Number of bits in the Huffman code HCODE30 minus 1. */
    using JPEG_HUFFENC_AC0_15_HLEN30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 31 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_15_HCODE31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 31 Number of bits in the Huffman code HCODE31 minus 1. */
    using JPEG_HUFFENC_AC0_15_HLEN31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x540, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 32 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_16_HCODE32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 32 Number of bits in the Huffman code HCODE32 minus 1. */
    using JPEG_HUFFENC_AC0_16_HLEN32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 33 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_16_HCODE33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 33 Number of bits in the Huffman code HCODE33 minus 1. */
    using JPEG_HUFFENC_AC0_16_HLEN33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x544, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 34 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_17_HCODE34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 34 Number of bits in the Huffman code HCODE34 minus 1. */
    using JPEG_HUFFENC_AC0_17_HLEN34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 35 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_17_HCODE35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 35 Number of bits in the Huffman code HCODE35 minus 1. */
    using JPEG_HUFFENC_AC0_17_HLEN35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x548, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 36 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_18_HCODE36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 36 Number of bits in the Huffman code HCODE36 minus 1. */
    using JPEG_HUFFENC_AC0_18_HLEN36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 37 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_18_HCODE37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 37 Number of bits in the Huffman code HCODE37 minus 1. */
    using JPEG_HUFFENC_AC0_18_HLEN37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 38 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_19_HCODE38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 38 Number of bits in the Huffman code HCODE38 minus 1. */
    using JPEG_HUFFENC_AC0_19_HLEN38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 39 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_19_HCODE39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 39 Number of bits in the Huffman code HCODE39 minus 1. */
    using JPEG_HUFFENC_AC0_19_HLEN39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x550, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 40 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_20_HCODE40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 40 Number of bits in the Huffman code HCODE40 minus 1. */
    using JPEG_HUFFENC_AC0_20_HLEN40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 41 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_20_HCODE41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 41 Number of bits in the Huffman code HCODE41 minus 1. */
    using JPEG_HUFFENC_AC0_20_HLEN41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x554, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 42 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_21_HCODE42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 42 Number of bits in the Huffman code HCODE42 minus 1. */
    using JPEG_HUFFENC_AC0_21_HLEN42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 43 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_21_HCODE43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 43 Number of bits in the Huffman code HCODE43 minus 1. */
    using JPEG_HUFFENC_AC0_21_HLEN43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x558, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 44 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_22_HCODE44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 44 Number of bits in the Huffman code HCODE44 minus 1. */
    using JPEG_HUFFENC_AC0_22_HLEN44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 45 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_22_HCODE45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 45 Number of bits in the Huffman code HCODE45 minus 1. */
    using JPEG_HUFFENC_AC0_22_HLEN45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x55C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 46 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_23_HCODE46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 46 Number of bits in the Huffman code HCODE46 minus 1. */
    using JPEG_HUFFENC_AC0_23_HLEN46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 47 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_23_HCODE47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 47 Number of bits in the Huffman code HCODE47 minus 1. */
    using JPEG_HUFFENC_AC0_23_HLEN47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x560, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 48 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_24_HCODE48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 48 Number of bits in the Huffman code HCODE48 minus 1. */
    using JPEG_HUFFENC_AC0_24_HLEN48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 49 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_24_HCODE49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 49 Number of bits in the Huffman code HCODE49 minus 1. */
    using JPEG_HUFFENC_AC0_24_HLEN49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x564, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 50 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_25_HCODE50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 50 Number of bits in the Huffman code HCODE50 minus 1. */
    using JPEG_HUFFENC_AC0_25_HLEN50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 51 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_25_HCODE51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 51 Number of bits in the Huffman code HCODE51 minus 1. */
    using JPEG_HUFFENC_AC0_25_HLEN51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x568, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 52 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_26_HCODE52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 52 Number of bits in the Huffman code HCODE52 minus 1. */
    using JPEG_HUFFENC_AC0_26_HLEN52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 53 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_26_HCODE53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 53 Number of bits in the Huffman code HCODE53 minus 1. */
    using JPEG_HUFFENC_AC0_26_HLEN53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x56C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 54 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_27_HCODE54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 54 Number of bits in the Huffman code HCODE54 minus 1. */
    using JPEG_HUFFENC_AC0_27_HLEN54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 55 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_27_HCODE55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 55 Number of bits in the Huffman code HCODE55 minus 1. */
    using JPEG_HUFFENC_AC0_27_HLEN55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x570, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 56 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_28_HCODE56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 56 Number of bits in the Huffman code HCODE56 minus 1. */
    using JPEG_HUFFENC_AC0_28_HLEN56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 57 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_28_HCODE57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 57 Number of bits in the Huffman code HCODE57 minus 1. */
    using JPEG_HUFFENC_AC0_28_HLEN57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x574, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 58 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_29_HCODE58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 58 Number of bits in the Huffman code HCODE58 minus 1. */
    using JPEG_HUFFENC_AC0_29_HLEN58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 59 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_29_HCODE59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 59 Number of bits in the Huffman code HCODE59 minus 1. */
    using JPEG_HUFFENC_AC0_29_HLEN59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x578, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 60 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_30_HCODE60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 60 Number of bits in the Huffman code HCODE60 minus 1. */
    using JPEG_HUFFENC_AC0_30_HLEN60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 61 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_30_HCODE61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 61 Number of bits in the Huffman code HCODE61 minus 1. */
    using JPEG_HUFFENC_AC0_30_HLEN61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x57C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 62 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_31_HCODE62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 62 Number of bits in the Huffman code HCODE62 minus 1. */
    using JPEG_HUFFENC_AC0_31_HLEN62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 63 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_31_HCODE63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 63 Number of bits in the Huffman code HCODE63 minus 1. */
    using JPEG_HUFFENC_AC0_31_HLEN63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x580, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 64 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_32_HCODE64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 64 Number of bits in the Huffman code HCODE64 minus 1. */
    using JPEG_HUFFENC_AC0_32_HLEN64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 65 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_32_HCODE65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 65 Number of bits in the Huffman code HCODE65 minus 1. */
    using JPEG_HUFFENC_AC0_32_HLEN65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x584, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 66 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_33_HCODE66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 66 Number of bits in the Huffman code HCODE66 minus 1. */
    using JPEG_HUFFENC_AC0_33_HLEN66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 67 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_33_HCODE67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 67 Number of bits in the Huffman code HCODE67 minus 1. */
    using JPEG_HUFFENC_AC0_33_HLEN67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x588, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 68 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_34_HCODE68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 68 Number of bits in the Huffman code HCODE68 minus 1. */
    using JPEG_HUFFENC_AC0_34_HLEN68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 69 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_34_HCODE69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 69 Number of bits in the Huffman code HCODE69 minus 1. */
    using JPEG_HUFFENC_AC0_34_HLEN69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 70 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_35_HCODE70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 70 Number of bits in the Huffman code HCODE70 minus 1. */
    using JPEG_HUFFENC_AC0_35_HLEN70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 71 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_35_HCODE71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 71 Number of bits in the Huffman code HCODE71 minus 1. */
    using JPEG_HUFFENC_AC0_35_HLEN71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x590, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 72 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_36_HCODE72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 72 Number of bits in the Huffman code HCODE72 minus 1. */
    using JPEG_HUFFENC_AC0_36_HLEN72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 73 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_36_HCODE73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 73 Number of bits in the Huffman code HCODE73 minus 1. */
    using JPEG_HUFFENC_AC0_36_HLEN73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x594, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 74 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_37_HCODE74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 74 Number of bits in the Huffman code HCODE74 minus 1. */
    using JPEG_HUFFENC_AC0_37_HLEN74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 75 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_37_HCODE75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 75 Number of bits in the Huffman code HCODE75 minus 1. */
    using JPEG_HUFFENC_AC0_37_HLEN75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x598, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 76 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_38_HCODE76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 76 Number of bits in the Huffman code HCODE76 minus 1. */
    using JPEG_HUFFENC_AC0_38_HLEN76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 77 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_38_HCODE77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 77 Number of bits in the Huffman code HCODE77 minus 1. */
    using JPEG_HUFFENC_AC0_38_HLEN77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x59C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 78 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_39_HCODE78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 78 Number of bits in the Huffman code HCODE78 minus 1. */
    using JPEG_HUFFENC_AC0_39_HLEN78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 79 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_39_HCODE79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 79 Number of bits in the Huffman code HCODE79 minus 1. */
    using JPEG_HUFFENC_AC0_39_HLEN79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 80 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_40_HCODE80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 80 Number of bits in the Huffman code HCODE80 minus 1. */
    using JPEG_HUFFENC_AC0_40_HLEN80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 81 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_40_HCODE81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 81 Number of bits in the Huffman code HCODE81 minus 1. */
    using JPEG_HUFFENC_AC0_40_HLEN81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 82 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_41_HCODE82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 82 Number of bits in the Huffman code HCODE82 minus 1. */
    using JPEG_HUFFENC_AC0_41_HLEN82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 83 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_41_HCODE83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 83 Number of bits in the Huffman code HCODE83 minus 1. */
    using JPEG_HUFFENC_AC0_41_HLEN83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 84 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_42_HCODE84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 84 Number of bits in the Huffman code HCODE84 minus 1. */
    using JPEG_HUFFENC_AC0_42_HLEN84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 85 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_42_HCODE85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 85 Number of bits in the Huffman code HCODE85 minus 1. */
    using JPEG_HUFFENC_AC0_42_HLEN85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 86 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_43_HCODE86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 86 Number of bits in the Huffman code HCODE86 minus 1. */
    using JPEG_HUFFENC_AC0_43_HLEN86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 87 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_43_HCODE87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 87 Number of bits in the Huffman code HCODE87 minus 1. */
    using JPEG_HUFFENC_AC0_43_HLEN87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 88 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_44_HCODE88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 88 Number of bits in the Huffman code HCODE88 minus 1. */
    using JPEG_HUFFENC_AC0_44_HLEN88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 89 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_44_HCODE89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 89 Number of bits in the Huffman code HCODE89 minus 1. */
    using JPEG_HUFFENC_AC0_44_HLEN89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 90 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_45_HCODE90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 90 Number of bits in the Huffman code HCODE90 minus 1. */
    using JPEG_HUFFENC_AC0_45_HLEN90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 91 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_45_HCODE91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 91 Number of bits in the Huffman code HCODE91 minus 1. */
    using JPEG_HUFFENC_AC0_45_HLEN91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 92 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_46_HCODE92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 92 Number of bits in the Huffman code HCODE92 minus 1. */
    using JPEG_HUFFENC_AC0_46_HLEN92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 93 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_46_HCODE93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 93 Number of bits in the Huffman code HCODE93 minus 1. */
    using JPEG_HUFFENC_AC0_46_HLEN93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 94 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_47_HCODE94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 94 Number of bits in the Huffman code HCODE94 minus 1. */
    using JPEG_HUFFENC_AC0_47_HLEN94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 95 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_47_HCODE95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 95 Number of bits in the Huffman code HCODE95 minus 1. */
    using JPEG_HUFFENC_AC0_47_HLEN95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 96 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_48_HCODE96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 96 Number of bits in the Huffman code HCODE96 minus 1. */
    using JPEG_HUFFENC_AC0_48_HLEN96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 97 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_48_HCODE97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 97 Number of bits in the Huffman code HCODE97 minus 1. */
    using JPEG_HUFFENC_AC0_48_HLEN97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 98 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_49_HCODE98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 98 Number of bits in the Huffman code HCODE98 minus 1. */
    using JPEG_HUFFENC_AC0_49_HLEN98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 99 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_49_HCODE99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 99 Number of bits in the Huffman code HCODE99 minus 1. */
    using JPEG_HUFFENC_AC0_49_HLEN99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 100 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_50_HCODE100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 100 Number of bits in the Huffman code HCODE100 minus 1. */
    using JPEG_HUFFENC_AC0_50_HLEN100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 101 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_50_HCODE101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 101 Number of bits in the Huffman code HCODE101 minus 1. */
    using JPEG_HUFFENC_AC0_50_HLEN101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 102 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_51_HCODE102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 102 Number of bits in the Huffman code HCODE102 minus 1. */
    using JPEG_HUFFENC_AC0_51_HLEN102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 103 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_51_HCODE103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 103 Number of bits in the Huffman code HCODE103 minus 1. */
    using JPEG_HUFFENC_AC0_51_HLEN103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 104 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_52_HCODE104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 104 Number of bits in the Huffman code HCODE104 minus 1. */
    using JPEG_HUFFENC_AC0_52_HLEN104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 105 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_52_HCODE105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 105 Number of bits in the Huffman code HCODE105 minus 1. */
    using JPEG_HUFFENC_AC0_52_HLEN105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 106 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_53_HCODE106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 106 Number of bits in the Huffman code HCODE106 minus 1. */
    using JPEG_HUFFENC_AC0_53_HLEN106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 107 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_53_HCODE107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 107 Number of bits in the Huffman code HCODE107 minus 1. */
    using JPEG_HUFFENC_AC0_53_HLEN107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 108 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_54_HCODE108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 108 Number of bits in the Huffman code HCODE108 minus 1. */
    using JPEG_HUFFENC_AC0_54_HLEN108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 109 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_54_HCODE109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 109 Number of bits in the Huffman code HCODE109 minus 1. */
    using JPEG_HUFFENC_AC0_54_HLEN109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 110 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_55_HCODE110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 110 Number of bits in the Huffman code HCODE110 minus 1. */
    using JPEG_HUFFENC_AC0_55_HLEN110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 111 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_55_HCODE111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 111 Number of bits in the Huffman code HCODE111 minus 1. */
    using JPEG_HUFFENC_AC0_55_HLEN111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 0 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_0_HCODE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 0 Number of bits in the Huffman code HCODE0 minus 1. */
    using JPEG_HUFFENC_AC1_0_HLEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 1 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_0_HCODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 1 Number of bits in the Huffman code HCODE1 minus 1. */
    using JPEG_HUFFENC_AC1_0_HLEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 112 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_56_HCODE112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 112 Number of bits in the Huffman code HCODE112 minus 1. */
    using JPEG_HUFFENC_AC0_56_HLEN112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 113 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_56_HCODE113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 113 Number of bits in the Huffman code HCODE113 minus 1. */
    using JPEG_HUFFENC_AC0_56_HLEN113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 2 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_1_HCODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 2 Number of bits in the Huffman code HCODE2 minus 1. */
    using JPEG_HUFFENC_AC1_1_HLEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 3 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_1_HCODE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 3 Number of bits in the Huffman code HCODE3 minus 1. */
    using JPEG_HUFFENC_AC1_1_HLEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 114 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_57_HCODE114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 114 Number of bits in the Huffman code HCODE114 minus 1. */
    using JPEG_HUFFENC_AC0_57_HLEN114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 115 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_57_HCODE115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 115 Number of bits in the Huffman code HCODE115 minus 1. */
    using JPEG_HUFFENC_AC0_57_HLEN115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 4 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_2_HCODE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 4 Number of bits in the Huffman code HCODE4 minus 1. */
    using JPEG_HUFFENC_AC1_2_HLEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 5 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_2_HCODE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 5 Number of bits in the Huffman code HCODE5 minus 1. */
    using JPEG_HUFFENC_AC1_2_HLEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 116 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_58_HCODE116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 116 Number of bits in the Huffman code HCODE116 minus 1. */
    using JPEG_HUFFENC_AC0_58_HLEN116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 117 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_58_HCODE117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 117 Number of bits in the Huffman code HCODE117 minus 1. */
    using JPEG_HUFFENC_AC0_58_HLEN117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 6 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_3_HCODE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 6 Number of bits in the Huffman code HCODE6 minus 1. */
    using JPEG_HUFFENC_AC1_3_HLEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 7 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_3_HCODE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 7 Number of bits in the Huffman code HCODE7 minus 1. */
    using JPEG_HUFFENC_AC1_3_HLEN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 118 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_59_HCODE118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 118 Number of bits in the Huffman code HCODE118 minus 1. */
    using JPEG_HUFFENC_AC0_59_HLEN118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 119 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_59_HCODE119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 119 Number of bits in the Huffman code HCODE119 minus 1. */
    using JPEG_HUFFENC_AC0_59_HLEN119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 8 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_4_HCODE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 8 Number of bits in the Huffman code HCODE8 minus 1. */
    using JPEG_HUFFENC_AC1_4_HLEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 9 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_4_HCODE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 9 Number of bits in the Huffman code HCODE9 minus 1. */
    using JPEG_HUFFENC_AC1_4_HLEN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 120 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_60_HCODE120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 120 Number of bits in the Huffman code HCODE120 minus 1. */
    using JPEG_HUFFENC_AC0_60_HLEN120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 121 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_60_HCODE121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 121 Number of bits in the Huffman code HCODE121 minus 1. */
    using JPEG_HUFFENC_AC0_60_HLEN121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 10 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_5_HCODE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 10 Number of bits in the Huffman code HCODE10 minus 1. */
    using JPEG_HUFFENC_AC1_5_HLEN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 11 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_5_HCODE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 11 Number of bits in the Huffman code HCODE11 minus 1. */
    using JPEG_HUFFENC_AC1_5_HLEN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 122 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_61_HCODE122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 122 Number of bits in the Huffman code HCODE122 minus 1. */
    using JPEG_HUFFENC_AC0_61_HLEN122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 123 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_61_HCODE123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 123 Number of bits in the Huffman code HCODE123 minus 1. */
    using JPEG_HUFFENC_AC0_61_HLEN123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 12 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_6_HCODE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 12 Number of bits in the Huffman code HCODE12 minus 1. */
    using JPEG_HUFFENC_AC1_6_HLEN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 13 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_6_HCODE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 13 Number of bits in the Huffman code HCODE13 minus 1. */
    using JPEG_HUFFENC_AC1_6_HLEN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 124 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_62_HCODE124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 124 Number of bits in the Huffman code HCODE124 minus 1. */
    using JPEG_HUFFENC_AC0_62_HLEN124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 125 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_62_HCODE125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 125 Number of bits in the Huffman code HCODE125 minus 1. */
    using JPEG_HUFFENC_AC0_62_HLEN125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 14 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_7_HCODE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 14 Number of bits in the Huffman code HCODE14 minus 1. */
    using JPEG_HUFFENC_AC1_7_HLEN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 15 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_7_HCODE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 15 Number of bits in the Huffman code HCODE15 minus 1. */
    using JPEG_HUFFENC_AC1_7_HLEN15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 126 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_63_HCODE126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 126 Number of bits in the Huffman code HCODE126 minus 1. */
    using JPEG_HUFFENC_AC0_63_HLEN126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 127 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_63_HCODE127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 127 Number of bits in the Huffman code HCODE127 minus 1. */
    using JPEG_HUFFENC_AC0_63_HLEN127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 16 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_8_HCODE16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 16 Number of bits in the Huffman code HCODE16 minus 1. */
    using JPEG_HUFFENC_AC1_8_HLEN16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 17 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_8_HCODE17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 17 Number of bits in the Huffman code HCODE17 minus 1. */
    using JPEG_HUFFENC_AC1_8_HLEN17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x600, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 128 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_64_HCODE128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 128 Number of bits in the Huffman code HCODE128 minus 1. */
    using JPEG_HUFFENC_AC0_64_HLEN128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 129 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_64_HCODE129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 129 Number of bits in the Huffman code HCODE129 minus 1. */
    using JPEG_HUFFENC_AC0_64_HLEN129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x600, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 18 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_9_HCODE18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 18 Number of bits in the Huffman code HCODE18 minus 1. */
    using JPEG_HUFFENC_AC1_9_HLEN18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 19 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_9_HCODE19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 19 Number of bits in the Huffman code HCODE19 minus 1. */
    using JPEG_HUFFENC_AC1_9_HLEN19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x604, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 130 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_65_HCODE130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 130 Number of bits in the Huffman code HCODE130 minus 1. */
    using JPEG_HUFFENC_AC0_65_HLEN130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 131 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_65_HCODE131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 131 Number of bits in the Huffman code HCODE131 minus 1. */
    using JPEG_HUFFENC_AC0_65_HLEN131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x604, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 20 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_10_HCODE20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 20 Number of bits in the Huffman code HCODE20 minus 1. */
    using JPEG_HUFFENC_AC1_10_HLEN20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 21 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_10_HCODE21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 21 Number of bits in the Huffman code HCODE21 minus 1. */
    using JPEG_HUFFENC_AC1_10_HLEN21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x608, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 132 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_66_HCODE132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 132 Number of bits in the Huffman code HCODE132 minus 1. */
    using JPEG_HUFFENC_AC0_66_HLEN132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 133 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_66_HCODE133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 133 Number of bits in the Huffman code HCODE133 minus 1. */
    using JPEG_HUFFENC_AC0_66_HLEN133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x608, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 22 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_11_HCODE22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 22 Number of bits in the Huffman code HCODE22 minus 1. */
    using JPEG_HUFFENC_AC1_11_HLEN22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 23 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_11_HCODE23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 23 Number of bits in the Huffman code HCODE23 minus 1. */
    using JPEG_HUFFENC_AC1_11_HLEN23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 134 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_67_HCODE134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 134 Number of bits in the Huffman code HCODE134 minus 1. */
    using JPEG_HUFFENC_AC0_67_HLEN134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 135 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_67_HCODE135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 135 Number of bits in the Huffman code HCODE135 minus 1. */
    using JPEG_HUFFENC_AC0_67_HLEN135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 24 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_12_HCODE24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 24 Number of bits in the Huffman code HCODE24 minus 1. */
    using JPEG_HUFFENC_AC1_12_HLEN24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 25 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_12_HCODE25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 25 Number of bits in the Huffman code HCODE25 minus 1. */
    using JPEG_HUFFENC_AC1_12_HLEN25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x610, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 136 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_68_HCODE136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 136 Number of bits in the Huffman code HCODE136 minus 1. */
    using JPEG_HUFFENC_AC0_68_HLEN136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 137 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_68_HCODE137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 137 Number of bits in the Huffman code HCODE137 minus 1. */
    using JPEG_HUFFENC_AC0_68_HLEN137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x610, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 26 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_13_HCODE26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 26 Number of bits in the Huffman code HCODE26 minus 1. */
    using JPEG_HUFFENC_AC1_13_HLEN26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 27 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_13_HCODE27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 27 Number of bits in the Huffman code HCODE27 minus 1. */
    using JPEG_HUFFENC_AC1_13_HLEN27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x614, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 138 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_69_HCODE138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 138 Number of bits in the Huffman code HCODE138 minus 1. */
    using JPEG_HUFFENC_AC0_69_HLEN138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 139 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_69_HCODE139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 139 Number of bits in the Huffman code HCODE139 minus 1. */
    using JPEG_HUFFENC_AC0_69_HLEN139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x614, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 28 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_14_HCODE28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 28 Number of bits in the Huffman code HCODE28 minus 1. */
    using JPEG_HUFFENC_AC1_14_HLEN28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 29 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_14_HCODE29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 29 Number of bits in the Huffman code HCODE29 minus 1. */
    using JPEG_HUFFENC_AC1_14_HLEN29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x618, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 140 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_70_HCODE140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 140 Number of bits in the Huffman code HCODE140 minus 1. */
    using JPEG_HUFFENC_AC0_70_HLEN140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 141 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_70_HCODE141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 141 Number of bits in the Huffman code HCODE141 minus 1. */
    using JPEG_HUFFENC_AC0_70_HLEN141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x618, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 30 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_15_HCODE30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 30 Number of bits in the Huffman code HCODE30 minus 1. */
    using JPEG_HUFFENC_AC1_15_HLEN30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 31 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_15_HCODE31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 31 Number of bits in the Huffman code HCODE31 minus 1. */
    using JPEG_HUFFENC_AC1_15_HLEN31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x61C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 142 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_71_HCODE142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 142 Number of bits in the Huffman code HCODE142 minus 1. */
    using JPEG_HUFFENC_AC0_71_HLEN142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 143 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_71_HCODE143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 143 Number of bits in the Huffman code HCODE143 minus 1. */
    using JPEG_HUFFENC_AC0_71_HLEN143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x61C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 32 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_16_HCODE32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 32 Number of bits in the Huffman code HCODE32 minus 1. */
    using JPEG_HUFFENC_AC1_16_HLEN32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 33 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_16_HCODE33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 33 Number of bits in the Huffman code HCODE33 minus 1. */
    using JPEG_HUFFENC_AC1_16_HLEN33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x620, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 144 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_72_HCODE144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 144 Number of bits in the Huffman code HCODE144 minus 1. */
    using JPEG_HUFFENC_AC0_72_HLEN144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 145 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_72_HCODE145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 145 Number of bits in the Huffman code HCODE145 minus 1. */
    using JPEG_HUFFENC_AC0_72_HLEN145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x620, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 34 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_17_HCODE34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 34 Number of bits in the Huffman code HCODE34 minus 1. */
    using JPEG_HUFFENC_AC1_17_HLEN34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 35 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_17_HCODE35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 35 Number of bits in the Huffman code HCODE35 minus 1. */
    using JPEG_HUFFENC_AC1_17_HLEN35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x624, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 146 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_73_HCODE146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 146 Number of bits in the Huffman code HCODE146 minus 1. */
    using JPEG_HUFFENC_AC0_73_HLEN146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 147 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_73_HCODE147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 147 Number of bits in the Huffman code HCODE147 minus 1. */
    using JPEG_HUFFENC_AC0_73_HLEN147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x624, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 36 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_18_HCODE36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 36 Number of bits in the Huffman code HCODE36 minus 1. */
    using JPEG_HUFFENC_AC1_18_HLEN36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 37 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_18_HCODE37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 37 Number of bits in the Huffman code HCODE37 minus 1. */
    using JPEG_HUFFENC_AC1_18_HLEN37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x628, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 148 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_74_HCODE148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 148 Number of bits in the Huffman code HCODE148 minus 1. */
    using JPEG_HUFFENC_AC0_74_HLEN148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 149 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_74_HCODE149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 149 Number of bits in the Huffman code HCODE149 minus 1. */
    using JPEG_HUFFENC_AC0_74_HLEN149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x628, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 38 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_19_HCODE38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 38 Number of bits in the Huffman code HCODE38 minus 1. */
    using JPEG_HUFFENC_AC1_19_HLEN38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 39 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_19_HCODE39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 39 Number of bits in the Huffman code HCODE39 minus 1. */
    using JPEG_HUFFENC_AC1_19_HLEN39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x62C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 150 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_75_HCODE150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 150 Number of bits in the Huffman code HCODE150 minus 1. */
    using JPEG_HUFFENC_AC0_75_HLEN150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 151 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_75_HCODE151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 151 Number of bits in the Huffman code HCODE151 minus 1. */
    using JPEG_HUFFENC_AC0_75_HLEN151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x62C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 40 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_20_HCODE40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 40 Number of bits in the Huffman code HCODE40 minus 1. */
    using JPEG_HUFFENC_AC1_20_HLEN40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 41 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_20_HCODE41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 41 Number of bits in the Huffman code HCODE41 minus 1. */
    using JPEG_HUFFENC_AC1_20_HLEN41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x630, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 152 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_76_HCODE152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 152 Number of bits in the Huffman code HCODE152 minus 1. */
    using JPEG_HUFFENC_AC0_76_HLEN152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 153 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_76_HCODE153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 153 Number of bits in the Huffman code HCODE153 minus 1. */
    using JPEG_HUFFENC_AC0_76_HLEN153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x630, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 42 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_21_HCODE42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 42 Number of bits in the Huffman code HCODE42 minus 1. */
    using JPEG_HUFFENC_AC1_21_HLEN42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 43 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_21_HCODE43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 43 Number of bits in the Huffman code HCODE43 minus 1. */
    using JPEG_HUFFENC_AC1_21_HLEN43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x634, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 154 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_77_HCODE154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 154 Number of bits in the Huffman code HCODE154 minus 1. */
    using JPEG_HUFFENC_AC0_77_HLEN154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 155 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_77_HCODE155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 155 Number of bits in the Huffman code HCODE155 minus 1. */
    using JPEG_HUFFENC_AC0_77_HLEN155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x634, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 44 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_22_HCODE44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 44 Number of bits in the Huffman code HCODE44 minus 1. */
    using JPEG_HUFFENC_AC1_22_HLEN44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 45 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_22_HCODE45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 45 Number of bits in the Huffman code HCODE45 minus 1. */
    using JPEG_HUFFENC_AC1_22_HLEN45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x638, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 156 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_78_HCODE156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 156 Number of bits in the Huffman code HCODE156 minus 1. */
    using JPEG_HUFFENC_AC0_78_HLEN156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 157 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_78_HCODE157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 157 Number of bits in the Huffman code HCODE157 minus 1. */
    using JPEG_HUFFENC_AC0_78_HLEN157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x638, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 46 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_23_HCODE46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 46 Number of bits in the Huffman code HCODE46 minus 1. */
    using JPEG_HUFFENC_AC1_23_HLEN46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 47 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_23_HCODE47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 47 Number of bits in the Huffman code HCODE47 minus 1. */
    using JPEG_HUFFENC_AC1_23_HLEN47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x63C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 158 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_79_HCODE158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 158 Number of bits in the Huffman code HCODE158 minus 1. */
    using JPEG_HUFFENC_AC0_79_HLEN158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 159 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_79_HCODE159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 159 Number of bits in the Huffman code HCODE159 minus 1. */
    using JPEG_HUFFENC_AC0_79_HLEN159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x63C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 48 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_24_HCODE48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 48 Number of bits in the Huffman code HCODE48 minus 1. */
    using JPEG_HUFFENC_AC1_24_HLEN48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 49 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_24_HCODE49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 49 Number of bits in the Huffman code HCODE49 minus 1. */
    using JPEG_HUFFENC_AC1_24_HLEN49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x640, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 160 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_80_HCODE160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 160 Number of bits in the Huffman code HCODE160 minus 1. */
    using JPEG_HUFFENC_AC0_80_HLEN160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 161 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_80_HCODE161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 161 Number of bits in the Huffman code HCODE161 minus 1. */
    using JPEG_HUFFENC_AC0_80_HLEN161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x640, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 50 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_25_HCODE50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 50 Number of bits in the Huffman code HCODE50 minus 1. */
    using JPEG_HUFFENC_AC1_25_HLEN50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 51 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_25_HCODE51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 51 Number of bits in the Huffman code HCODE51 minus 1. */
    using JPEG_HUFFENC_AC1_25_HLEN51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x644, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 162 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_81_HCODE162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 162 Number of bits in the Huffman code HCODE162 minus 1. */
    using JPEG_HUFFENC_AC0_81_HLEN162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 163 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_81_HCODE163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 163 Number of bits in the Huffman code HCODE163 minus 1. */
    using JPEG_HUFFENC_AC0_81_HLEN163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x644, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 52 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_26_HCODE52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 52 Number of bits in the Huffman code HCODE52 minus 1. */
    using JPEG_HUFFENC_AC1_26_HLEN52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 53 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_26_HCODE53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 53 Number of bits in the Huffman code HCODE53 minus 1. */
    using JPEG_HUFFENC_AC1_26_HLEN53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x648, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 164 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_82_HCODE164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 164 Number of bits in the Huffman code HCODE164 minus 1. */
    using JPEG_HUFFENC_AC0_82_HLEN164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 165 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_82_HCODE165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 165 Number of bits in the Huffman code HCODE165 minus 1. */
    using JPEG_HUFFENC_AC0_82_HLEN165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x648, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 54 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_27_HCODE54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 54 Number of bits in the Huffman code HCODE54 minus 1. */
    using JPEG_HUFFENC_AC1_27_HLEN54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 55 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_27_HCODE55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 55 Number of bits in the Huffman code HCODE55 minus 1. */
    using JPEG_HUFFENC_AC1_27_HLEN55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 166 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_83_HCODE166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 166 Number of bits in the Huffman code HCODE166 minus 1. */
    using JPEG_HUFFENC_AC0_83_HLEN166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 167 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_83_HCODE167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 167 Number of bits in the Huffman code HCODE167 minus 1. */
    using JPEG_HUFFENC_AC0_83_HLEN167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 56 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_28_HCODE56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 56 Number of bits in the Huffman code HCODE56 minus 1. */
    using JPEG_HUFFENC_AC1_28_HLEN56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 57 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_28_HCODE57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 57 Number of bits in the Huffman code HCODE57 minus 1. */
    using JPEG_HUFFENC_AC1_28_HLEN57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x650, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 168 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_84_HCODE168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 168 Number of bits in the Huffman code HCODE168 minus 1. */
    using JPEG_HUFFENC_AC0_84_HLEN168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 169 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_84_HCODE169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 169 Number of bits in the Huffman code HCODE169 minus 1. */
    using JPEG_HUFFENC_AC0_84_HLEN169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x650, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 58 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_29_HCODE58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 58 Number of bits in the Huffman code HCODE58 minus 1. */
    using JPEG_HUFFENC_AC1_29_HLEN58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 59 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_29_HCODE59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 59 Number of bits in the Huffman code HCODE59 minus 1. */
    using JPEG_HUFFENC_AC1_29_HLEN59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x654, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 170 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_85_HCODE170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 170 Number of bits in the Huffman code HCODE170 minus 1. */
    using JPEG_HUFFENC_AC0_85_HLEN170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 171 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_85_HCODE171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 171 Number of bits in the Huffman code HCODE171 minus 1. */
    using JPEG_HUFFENC_AC0_85_HLEN171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x654, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 60 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_30_HCODE60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 60 Number of bits in the Huffman code HCODE60 minus 1. */
    using JPEG_HUFFENC_AC1_30_HLEN60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 61 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_30_HCODE61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 61 Number of bits in the Huffman code HCODE61 minus 1. */
    using JPEG_HUFFENC_AC1_30_HLEN61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x658, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 172 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_86_HCODE172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 172 Number of bits in the Huffman code HCODE172 minus 1. */
    using JPEG_HUFFENC_AC0_86_HLEN172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 173 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_86_HCODE173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 173 Number of bits in the Huffman code HCODE173 minus 1. */
    using JPEG_HUFFENC_AC0_86_HLEN173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x658, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 62 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_31_HCODE62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 62 Number of bits in the Huffman code HCODE62 minus 1. */
    using JPEG_HUFFENC_AC1_31_HLEN62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 63 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_31_HCODE63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 63 Number of bits in the Huffman code HCODE63 minus 1. */
    using JPEG_HUFFENC_AC1_31_HLEN63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC0 */
    using JPEG_HUFFENC_AC0_87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x65C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 174 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_87_HCODE174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 174 Number of bits in the Huffman code HCODE174 minus 1. */
    using JPEG_HUFFENC_AC0_87_HLEN174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 175 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC0_87_HCODE175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 175 Number of bits in the Huffman code HCODE175 minus 1. */
    using JPEG_HUFFENC_AC0_87_HLEN175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x65C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 64 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_32_HCODE64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 64 Number of bits in the Huffman code HCODE64 minus 1. */
    using JPEG_HUFFENC_AC1_32_HLEN64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 65 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_32_HCODE65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 65 Number of bits in the Huffman code HCODE65 minus 1. */
    using JPEG_HUFFENC_AC1_32_HLEN65 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x660, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 66 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_33_HCODE66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 66 Number of bits in the Huffman code HCODE66 minus 1. */
    using JPEG_HUFFENC_AC1_33_HLEN66 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 67 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_33_HCODE67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 67 Number of bits in the Huffman code HCODE67 minus 1. */
    using JPEG_HUFFENC_AC1_33_HLEN67 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x664, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 68 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_34_HCODE68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 68 Number of bits in the Huffman code HCODE68 minus 1. */
    using JPEG_HUFFENC_AC1_34_HLEN68 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 69 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_34_HCODE69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 69 Number of bits in the Huffman code HCODE69 minus 1. */
    using JPEG_HUFFENC_AC1_34_HLEN69 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x668, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 70 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_35_HCODE70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 70 Number of bits in the Huffman code HCODE70 minus 1. */
    using JPEG_HUFFENC_AC1_35_HLEN70 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 71 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_35_HCODE71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 71 Number of bits in the Huffman code HCODE71 minus 1. */
    using JPEG_HUFFENC_AC1_35_HLEN71 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x66C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 72 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_36_HCODE72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 72 Number of bits in the Huffman code HCODE72 minus 1. */
    using JPEG_HUFFENC_AC1_36_HLEN72 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 73 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_36_HCODE73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 73 Number of bits in the Huffman code HCODE73 minus 1. */
    using JPEG_HUFFENC_AC1_36_HLEN73 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x670, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 74 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_37_HCODE74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 74 Number of bits in the Huffman code HCODE74 minus 1. */
    using JPEG_HUFFENC_AC1_37_HLEN74 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 75 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_37_HCODE75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 75 Number of bits in the Huffman code HCODE75 minus 1. */
    using JPEG_HUFFENC_AC1_37_HLEN75 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x674, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 76 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_38_HCODE76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 76 Number of bits in the Huffman code HCODE76 minus 1. */
    using JPEG_HUFFENC_AC1_38_HLEN76 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 77 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_38_HCODE77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 77 Number of bits in the Huffman code HCODE77 minus 1. */
    using JPEG_HUFFENC_AC1_38_HLEN77 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x678, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 78 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_39_HCODE78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 78 Number of bits in the Huffman code HCODE78 minus 1. */
    using JPEG_HUFFENC_AC1_39_HLEN78 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 79 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_39_HCODE79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 79 Number of bits in the Huffman code HCODE79 minus 1. */
    using JPEG_HUFFENC_AC1_39_HLEN79 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x67C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 80 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_40_HCODE80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 80 Number of bits in the Huffman code HCODE80 minus 1. */
    using JPEG_HUFFENC_AC1_40_HLEN80 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 81 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_40_HCODE81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 81 Number of bits in the Huffman code HCODE81 minus 1. */
    using JPEG_HUFFENC_AC1_40_HLEN81 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x680, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 82 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_41_HCODE82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 82 Number of bits in the Huffman code HCODE82 minus 1. */
    using JPEG_HUFFENC_AC1_41_HLEN82 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 83 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_41_HCODE83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 83 Number of bits in the Huffman code HCODE83 minus 1. */
    using JPEG_HUFFENC_AC1_41_HLEN83 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x684, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 84 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_42_HCODE84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 84 Number of bits in the Huffman code HCODE84 minus 1. */
    using JPEG_HUFFENC_AC1_42_HLEN84 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 85 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_42_HCODE85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 85 Number of bits in the Huffman code HCODE85 minus 1. */
    using JPEG_HUFFENC_AC1_42_HLEN85 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x688, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 86 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_43_HCODE86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 86 Number of bits in the Huffman code HCODE86 minus 1. */
    using JPEG_HUFFENC_AC1_43_HLEN86 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 87 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_43_HCODE87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 87 Number of bits in the Huffman code HCODE87 minus 1. */
    using JPEG_HUFFENC_AC1_43_HLEN87 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 88 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_44_HCODE88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 88 Number of bits in the Huffman code HCODE88 minus 1. */
    using JPEG_HUFFENC_AC1_44_HLEN88 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 89 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_44_HCODE89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 89 Number of bits in the Huffman code HCODE89 minus 1. */
    using JPEG_HUFFENC_AC1_44_HLEN89 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x690, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 90 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_45_HCODE90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 90 Number of bits in the Huffman code HCODE90 minus 1. */
    using JPEG_HUFFENC_AC1_45_HLEN90 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 91 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_45_HCODE91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 91 Number of bits in the Huffman code HCODE91 minus 1. */
    using JPEG_HUFFENC_AC1_45_HLEN91 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x694, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 92 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_46_HCODE92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 92 Number of bits in the Huffman code HCODE92 minus 1. */
    using JPEG_HUFFENC_AC1_46_HLEN92 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 93 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_46_HCODE93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 93 Number of bits in the Huffman code HCODE93 minus 1. */
    using JPEG_HUFFENC_AC1_46_HLEN93 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x698, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 94 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_47_HCODE94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 94 Number of bits in the Huffman code HCODE94 minus 1. */
    using JPEG_HUFFENC_AC1_47_HLEN94 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 95 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_47_HCODE95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 95 Number of bits in the Huffman code HCODE95 minus 1. */
    using JPEG_HUFFENC_AC1_47_HLEN95 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x69C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 96 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_48_HCODE96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 96 Number of bits in the Huffman code HCODE96 minus 1. */
    using JPEG_HUFFENC_AC1_48_HLEN96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 97 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_48_HCODE97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 97 Number of bits in the Huffman code HCODE97 minus 1. */
    using JPEG_HUFFENC_AC1_48_HLEN97 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 98 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_49_HCODE98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 98 Number of bits in the Huffman code HCODE98 minus 1. */
    using JPEG_HUFFENC_AC1_49_HLEN98 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 99 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_49_HCODE99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 99 Number of bits in the Huffman code HCODE99 minus 1. */
    using JPEG_HUFFENC_AC1_49_HLEN99 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 100 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_50_HCODE100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 100 Number of bits in the Huffman code HCODE100 minus 1. */
    using JPEG_HUFFENC_AC1_50_HLEN100 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 101 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_50_HCODE101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 101 Number of bits in the Huffman code HCODE101 minus 1. */
    using JPEG_HUFFENC_AC1_50_HLEN101 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 102 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_51_HCODE102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 102 Number of bits in the Huffman code HCODE102 minus 1. */
    using JPEG_HUFFENC_AC1_51_HLEN102 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 103 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_51_HCODE103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 103 Number of bits in the Huffman code HCODE103 minus 1. */
    using JPEG_HUFFENC_AC1_51_HLEN103 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 104 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_52_HCODE104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 104 Number of bits in the Huffman code HCODE104 minus 1. */
    using JPEG_HUFFENC_AC1_52_HLEN104 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 105 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_52_HCODE105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 105 Number of bits in the Huffman code HCODE105 minus 1. */
    using JPEG_HUFFENC_AC1_52_HLEN105 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 106 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_53_HCODE106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 106 Number of bits in the Huffman code HCODE106 minus 1. */
    using JPEG_HUFFENC_AC1_53_HLEN106 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 107 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_53_HCODE107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 107 Number of bits in the Huffman code HCODE107 minus 1. */
    using JPEG_HUFFENC_AC1_53_HLEN107 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 108 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_54_HCODE108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 108 Number of bits in the Huffman code HCODE108 minus 1. */
    using JPEG_HUFFENC_AC1_54_HLEN108 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 109 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_54_HCODE109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 109 Number of bits in the Huffman code HCODE109 minus 1. */
    using JPEG_HUFFENC_AC1_54_HLEN109 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 110 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_55_HCODE110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 110 Number of bits in the Huffman code HCODE110 minus 1. */
    using JPEG_HUFFENC_AC1_55_HLEN110 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 111 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_55_HCODE111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 111 Number of bits in the Huffman code HCODE111 minus 1. */
    using JPEG_HUFFENC_AC1_55_HLEN111 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 112 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_56_HCODE112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 112 Number of bits in the Huffman code HCODE112 minus 1. */
    using JPEG_HUFFENC_AC1_56_HLEN112 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 113 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_56_HCODE113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 113 Number of bits in the Huffman code HCODE113 minus 1. */
    using JPEG_HUFFENC_AC1_56_HLEN113 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 114 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_57_HCODE114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 114 Number of bits in the Huffman code HCODE114 minus 1. */
    using JPEG_HUFFENC_AC1_57_HLEN114 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 115 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_57_HCODE115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 115 Number of bits in the Huffman code HCODE115 minus 1. */
    using JPEG_HUFFENC_AC1_57_HLEN115 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 116 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_58_HCODE116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 116 Number of bits in the Huffman code HCODE116 minus 1. */
    using JPEG_HUFFENC_AC1_58_HLEN116 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 117 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_58_HCODE117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 117 Number of bits in the Huffman code HCODE117 minus 1. */
    using JPEG_HUFFENC_AC1_58_HLEN117 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 118 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_59_HCODE118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 118 Number of bits in the Huffman code HCODE118 minus 1. */
    using JPEG_HUFFENC_AC1_59_HLEN118 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 119 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_59_HCODE119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 119 Number of bits in the Huffman code HCODE119 minus 1. */
    using JPEG_HUFFENC_AC1_59_HLEN119 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 120 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_60_HCODE120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 120 Number of bits in the Huffman code HCODE120 minus 1. */
    using JPEG_HUFFENC_AC1_60_HLEN120 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 121 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_60_HCODE121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 121 Number of bits in the Huffman code HCODE121 minus 1. */
    using JPEG_HUFFENC_AC1_60_HLEN121 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 122 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_61_HCODE122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 122 Number of bits in the Huffman code HCODE122 minus 1. */
    using JPEG_HUFFENC_AC1_61_HLEN122 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 123 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_61_HCODE123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 123 Number of bits in the Huffman code HCODE123 minus 1. */
    using JPEG_HUFFENC_AC1_61_HLEN123 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 124 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_62_HCODE124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 124 Number of bits in the Huffman code HCODE124 minus 1. */
    using JPEG_HUFFENC_AC1_62_HLEN124 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 125 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_62_HCODE125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 125 Number of bits in the Huffman code HCODE125 minus 1. */
    using JPEG_HUFFENC_AC1_62_HLEN125 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 126 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_63_HCODE126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 126 Number of bits in the Huffman code HCODE126 minus 1. */
    using JPEG_HUFFENC_AC1_63_HLEN126 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 127 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_63_HCODE127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 127 Number of bits in the Huffman code HCODE127 minus 1. */
    using JPEG_HUFFENC_AC1_63_HLEN127 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 128 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_64_HCODE128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 128 Number of bits in the Huffman code HCODE128 minus 1. */
    using JPEG_HUFFENC_AC1_64_HLEN128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 129 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_64_HCODE129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 129 Number of bits in the Huffman code HCODE129 minus 1. */
    using JPEG_HUFFENC_AC1_64_HLEN129 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 130 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_65_HCODE130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 130 Number of bits in the Huffman code HCODE130 minus 1. */
    using JPEG_HUFFENC_AC1_65_HLEN130 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 131 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_65_HCODE131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 131 Number of bits in the Huffman code HCODE131 minus 1. */
    using JPEG_HUFFENC_AC1_65_HLEN131 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 132 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_66_HCODE132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 132 Number of bits in the Huffman code HCODE132 minus 1. */
    using JPEG_HUFFENC_AC1_66_HLEN132 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 133 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_66_HCODE133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 133 Number of bits in the Huffman code HCODE133 minus 1. */
    using JPEG_HUFFENC_AC1_66_HLEN133 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 134 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_67_HCODE134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 134 Number of bits in the Huffman code HCODE134 minus 1. */
    using JPEG_HUFFENC_AC1_67_HLEN134 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 135 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_67_HCODE135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 135 Number of bits in the Huffman code HCODE135 minus 1. */
    using JPEG_HUFFENC_AC1_67_HLEN135 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 136 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_68_HCODE136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 136 Number of bits in the Huffman code HCODE136 minus 1. */
    using JPEG_HUFFENC_AC1_68_HLEN136 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 137 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_68_HCODE137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 137 Number of bits in the Huffman code HCODE137 minus 1. */
    using JPEG_HUFFENC_AC1_68_HLEN137 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 138 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_69_HCODE138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 138 Number of bits in the Huffman code HCODE138 minus 1. */
    using JPEG_HUFFENC_AC1_69_HLEN138 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 139 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_69_HCODE139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 139 Number of bits in the Huffman code HCODE139 minus 1. */
    using JPEG_HUFFENC_AC1_69_HLEN139 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 140 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_70_HCODE140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 140 Number of bits in the Huffman code HCODE140 minus 1. */
    using JPEG_HUFFENC_AC1_70_HLEN140 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 141 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_70_HCODE141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 141 Number of bits in the Huffman code HCODE141 minus 1. */
    using JPEG_HUFFENC_AC1_70_HLEN141 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 142 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_71_HCODE142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 142 Number of bits in the Huffman code HCODE142 minus 1. */
    using JPEG_HUFFENC_AC1_71_HLEN142 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 143 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_71_HCODE143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 143 Number of bits in the Huffman code HCODE143 minus 1. */
    using JPEG_HUFFENC_AC1_71_HLEN143 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 144 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_72_HCODE144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 144 Number of bits in the Huffman code HCODE144 minus 1. */
    using JPEG_HUFFENC_AC1_72_HLEN144 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 145 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_72_HCODE145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 145 Number of bits in the Huffman code HCODE145 minus 1. */
    using JPEG_HUFFENC_AC1_72_HLEN145 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x700, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 146 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_73_HCODE146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 146 Number of bits in the Huffman code HCODE146 minus 1. */
    using JPEG_HUFFENC_AC1_73_HLEN146 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 147 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_73_HCODE147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 147 Number of bits in the Huffman code HCODE147 minus 1. */
    using JPEG_HUFFENC_AC1_73_HLEN147 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x704, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 148 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_74_HCODE148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 148 Number of bits in the Huffman code HCODE148 minus 1. */
    using JPEG_HUFFENC_AC1_74_HLEN148 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 149 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_74_HCODE149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 149 Number of bits in the Huffman code HCODE149 minus 1. */
    using JPEG_HUFFENC_AC1_74_HLEN149 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x708, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 150 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_75_HCODE150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 150 Number of bits in the Huffman code HCODE150 minus 1. */
    using JPEG_HUFFENC_AC1_75_HLEN150 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 151 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_75_HCODE151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 151 Number of bits in the Huffman code HCODE151 minus 1. */
    using JPEG_HUFFENC_AC1_75_HLEN151 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 152 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_76_HCODE152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 152 Number of bits in the Huffman code HCODE152 minus 1. */
    using JPEG_HUFFENC_AC1_76_HLEN152 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 153 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_76_HCODE153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 153 Number of bits in the Huffman code HCODE153 minus 1. */
    using JPEG_HUFFENC_AC1_76_HLEN153 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x710, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 154 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_77_HCODE154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 154 Number of bits in the Huffman code HCODE154 minus 1. */
    using JPEG_HUFFENC_AC1_77_HLEN154 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 155 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_77_HCODE155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 155 Number of bits in the Huffman code HCODE155 minus 1. */
    using JPEG_HUFFENC_AC1_77_HLEN155 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x714, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 156 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_78_HCODE156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 156 Number of bits in the Huffman code HCODE156 minus 1. */
    using JPEG_HUFFENC_AC1_78_HLEN156 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 157 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_78_HCODE157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 157 Number of bits in the Huffman code HCODE157 minus 1. */
    using JPEG_HUFFENC_AC1_78_HLEN157 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x718, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 158 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_79_HCODE158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 158 Number of bits in the Huffman code HCODE158 minus 1. */
    using JPEG_HUFFENC_AC1_79_HLEN158 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 159 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_79_HCODE159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 159 Number of bits in the Huffman code HCODE159 minus 1. */
    using JPEG_HUFFENC_AC1_79_HLEN159 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x71C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 160 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_80_HCODE160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 160 Number of bits in the Huffman code HCODE160 minus 1. */
    using JPEG_HUFFENC_AC1_80_HLEN160 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 161 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_80_HCODE161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 161 Number of bits in the Huffman code HCODE161 minus 1. */
    using JPEG_HUFFENC_AC1_80_HLEN161 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x720, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 162 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_81_HCODE162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 162 Number of bits in the Huffman code HCODE162 minus 1. */
    using JPEG_HUFFENC_AC1_81_HLEN162 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 163 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_81_HCODE163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 163 Number of bits in the Huffman code HCODE163 minus 1. */
    using JPEG_HUFFENC_AC1_81_HLEN163 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x724, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 164 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_82_HCODE164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 164 Number of bits in the Huffman code HCODE164 minus 1. */
    using JPEG_HUFFENC_AC1_82_HLEN164 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 165 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_82_HCODE165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 165 Number of bits in the Huffman code HCODE165 minus 1. */
    using JPEG_HUFFENC_AC1_82_HLEN165 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x728, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 166 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_83_HCODE166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 166 Number of bits in the Huffman code HCODE166 minus 1. */
    using JPEG_HUFFENC_AC1_83_HLEN166 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 167 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_83_HCODE167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 167 Number of bits in the Huffman code HCODE167 minus 1. */
    using JPEG_HUFFENC_AC1_83_HLEN167 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x72C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 168 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_84_HCODE168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 168 Number of bits in the Huffman code HCODE168 minus 1. */
    using JPEG_HUFFENC_AC1_84_HLEN168 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 169 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_84_HCODE169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 169 Number of bits in the Huffman code HCODE169 minus 1. */
    using JPEG_HUFFENC_AC1_84_HLEN169 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x730, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 170 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_85_HCODE170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 170 Number of bits in the Huffman code HCODE170 minus 1. */
    using JPEG_HUFFENC_AC1_85_HLEN170 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 171 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_85_HCODE171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 171 Number of bits in the Huffman code HCODE171 minus 1. */
    using JPEG_HUFFENC_AC1_85_HLEN171 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x734, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 172 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_86_HCODE172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 172 Number of bits in the Huffman code HCODE172 minus 1. */
    using JPEG_HUFFENC_AC1_86_HLEN172 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 173 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_86_HCODE173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 173 Number of bits in the Huffman code HCODE173 minus 1. */
    using JPEG_HUFFENC_AC1_86_HLEN173 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder AC1 */
    using JPEG_HUFFENC_AC1_87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x738, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 174 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_87_HCODE174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 174 Number of bits in the Huffman code HCODE174 minus 1. */
    using JPEG_HUFFENC_AC1_87_HLEN174 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 175 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_AC1_87_HCODE175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 175 Number of bits in the Huffman code HCODE175 minus 1. */
    using JPEG_HUFFENC_AC1_87_HLEN175 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC0 */
    using JPEG_HUFFENC_DC0_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 0 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_0_HCODE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 0 Number of bits in the Huffman code HCODE0 minus 1. */
    using JPEG_HUFFENC_DC0_0_HLEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 1 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_0_HCODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 1 Number of bits in the Huffman code HCODE1 minus 1. */
    using JPEG_HUFFENC_DC0_0_HLEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC0 */
    using JPEG_HUFFENC_DC0_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 2 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_1_HCODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 2 Number of bits in the Huffman code HCODE2 minus 1. */
    using JPEG_HUFFENC_DC0_1_HLEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 3 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_1_HCODE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 3 Number of bits in the Huffman code HCODE3 minus 1. */
    using JPEG_HUFFENC_DC0_1_HLEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC0 */
    using JPEG_HUFFENC_DC0_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 4 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_2_HCODE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 4 Number of bits in the Huffman code HCODE4 minus 1. */
    using JPEG_HUFFENC_DC0_2_HLEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 5 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_2_HCODE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 5 Number of bits in the Huffman code HCODE5 minus 1. */
    using JPEG_HUFFENC_DC0_2_HLEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC0 */
    using JPEG_HUFFENC_DC0_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 6 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_3_HCODE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 6 Number of bits in the Huffman code HCODE6 minus 1. */
    using JPEG_HUFFENC_DC0_3_HLEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 7 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_3_HCODE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 7 Number of bits in the Huffman code HCODE7 minus 1. */
    using JPEG_HUFFENC_DC0_3_HLEN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC0 */
    using JPEG_HUFFENC_DC0_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 8 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_4_HCODE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 8 Number of bits in the Huffman code HCODE8 minus 1. */
    using JPEG_HUFFENC_DC0_4_HLEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 9 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_4_HCODE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 9 Number of bits in the Huffman code HCODE9 minus 1. */
    using JPEG_HUFFENC_DC0_4_HLEN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC0 */
    using JPEG_HUFFENC_DC0_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 10 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_5_HCODE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 10 Number of bits in the Huffman code HCODE10 minus 1. */
    using JPEG_HUFFENC_DC0_5_HLEN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 11 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_5_HCODE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 11 Number of bits in the Huffman code HCODE11 minus 1. */
    using JPEG_HUFFENC_DC0_5_HLEN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC0 */
    using JPEG_HUFFENC_DC0_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 12 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_6_HCODE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 12 Number of bits in the Huffman code HCODE12 minus 1. */
    using JPEG_HUFFENC_DC0_6_HLEN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 13 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_6_HCODE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 13 Number of bits in the Huffman code HCODE13 minus 1. */
    using JPEG_HUFFENC_DC0_6_HLEN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC0 */
    using JPEG_HUFFENC_DC0_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 14 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_7_HCODE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 14 Number of bits in the Huffman code HCODE14 minus 1. */
    using JPEG_HUFFENC_DC0_7_HLEN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 15 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC0_7_HCODE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 15 Number of bits in the Huffman code HCODE15 minus 1. */
    using JPEG_HUFFENC_DC0_7_HLEN15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC1 */
    using JPEG_HUFFENC_DC1_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x89C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 0 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_0_HCODE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 0 Number of bits in the Huffman code HCODE0 minus 1. */
    using JPEG_HUFFENC_DC1_0_HLEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 1 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_0_HCODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 1 Number of bits in the Huffman code HCODE1 minus 1. */
    using JPEG_HUFFENC_DC1_0_HLEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC1 */
    using JPEG_HUFFENC_DC1_1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 2 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_1_HCODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 2 Number of bits in the Huffman code HCODE2 minus 1. */
    using JPEG_HUFFENC_DC1_1_HLEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 3 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_1_HCODE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 3 Number of bits in the Huffman code HCODE3 minus 1. */
    using JPEG_HUFFENC_DC1_1_HLEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC1 */
    using JPEG_HUFFENC_DC1_2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 4 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_2_HCODE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 4 Number of bits in the Huffman code HCODE4 minus 1. */
    using JPEG_HUFFENC_DC1_2_HLEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 5 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_2_HCODE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 5 Number of bits in the Huffman code HCODE5 minus 1. */
    using JPEG_HUFFENC_DC1_2_HLEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC1 */
    using JPEG_HUFFENC_DC1_3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 6 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_3_HCODE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 6 Number of bits in the Huffman code HCODE6 minus 1. */
    using JPEG_HUFFENC_DC1_3_HLEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 7 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_3_HCODE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 7 Number of bits in the Huffman code HCODE7 minus 1. */
    using JPEG_HUFFENC_DC1_3_HLEN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC1 */
    using JPEG_HUFFENC_DC1_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 8 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_4_HCODE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 8 Number of bits in the Huffman code HCODE8 minus 1. */
    using JPEG_HUFFENC_DC1_4_HLEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 9 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_4_HCODE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 9 Number of bits in the Huffman code HCODE9 minus 1. */
    using JPEG_HUFFENC_DC1_4_HLEN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC1 */
    using JPEG_HUFFENC_DC1_5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 10 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_5_HCODE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 10 Number of bits in the Huffman code HCODE10 minus 1. */
    using JPEG_HUFFENC_DC1_5_HLEN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 11 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_5_HCODE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 11 Number of bits in the Huffman code HCODE11 minus 1. */
    using JPEG_HUFFENC_DC1_5_HLEN11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC1 */
    using JPEG_HUFFENC_DC1_6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 12 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_6_HCODE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 12 Number of bits in the Huffman code HCODE12 minus 1. */
    using JPEG_HUFFENC_DC1_6_HLEN12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 13 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_6_HCODE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 13 Number of bits in the Huffman code HCODE13 minus 1. */
    using JPEG_HUFFENC_DC1_6_HLEN13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JPEG Huffman encoder DC1 */
    using JPEG_HUFFENC_DC1_7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 14 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_7_HCODE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 14 Number of bits in the Huffman code HCODE14 minus 1. */
    using JPEG_HUFFENC_DC1_7_HLEN14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman code 15 8 least significant bits of the Huffman code. If the Huffman code is less than 8 bits long, the unused bits must be 0. */
    using JPEG_HUFFENC_DC1_7_HCODE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Huffman length 15 Number of bits in the Huffman code HCODE15 minus 1. */
    using JPEG_HUFFENC_DC1_7_HLEN15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
