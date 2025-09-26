/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H750_DMA2D_HPP
#define EMBEDDED_PP_STM32H750_DMA2D_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DMA2D */
namespace STM32H750::DMA2D {

    /** @brief DMA2D control register */
    using DMA2D_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start This bit can be used to launch the DMA2D according to the parameters loaded in the various configuration registers */
    using DMA2D_CR_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend This bit can be used to suspend the current transfer. This bit is set and reset by software. It is automatically reset by hardware when the START bit is reset. */
    using DMA2D_CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Abort This bit can be used to abort the current transfer. This bit is set by software and is automatically reset by hardware when the START bit is reset. */
    using DMA2D_CR_ABORT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer error interrupt enable This bit is set and cleared by software. */
    using DMA2D_CR_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete interrupt enable This bit is set and cleared by software. */
    using DMA2D_CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer watermark interrupt enable This bit is set and cleared by software. */
    using DMA2D_CR_TWIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT access error interrupt enable This bit is set and cleared by software. */
    using DMA2D_CR_CAEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT transfer complete interrupt enable This bit is set and cleared by software. */
    using DMA2D_CR_CTCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configuration Error Interrupt Enable This bit is set and cleared by software. */
    using DMA2D_CR_CEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D mode This bit is set and cleared by software. It cannot be modified while a transfer is ongoing. */
    using DMA2D_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D Interrupt Status Register */
    using DMA2D_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer error interrupt flag This bit is set when an error occurs during a DMA transfer (data transfer or automatic CLUT loading). */
    using DMA2D_ISR_TEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete interrupt flag This bit is set when a DMA2D transfer operation is complete (data transfer only). */
    using DMA2D_ISR_TCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer watermark interrupt flag This bit is set when the last pixel of the watermarked line has been transferred. */
    using DMA2D_ISR_TWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT access error interrupt flag This bit is set when the CPU accesses the CLUT while the CLUT is being automatically copied from a system memory to the internal DMA2D. */
    using DMA2D_ISR_CAEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT transfer complete interrupt flag This bit is set when the CLUT copy from a system memory area to the internal DMA2D memory is complete. */
    using DMA2D_ISR_CTCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configuration error interrupt flag This bit is set when the START bit of DMA2D_CR, DMA2DFGPFCCR or DMA2D_BGPFCCR is set and a wrong configuration has been programmed. */
    using DMA2D_ISR_CEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D interrupt flag clear register */
    using DMA2D_IFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Transfer error interrupt flag Programming this bit to 1 clears the TEIF flag in the DMA2D_ISR register */
    using DMA2D_IFCR_CTEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear transfer complete interrupt flag Programming this bit to 1 clears the TCIF flag in the DMA2D_ISR register */
    using DMA2D_IFCR_CTCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear transfer watermark interrupt flag Programming this bit to 1 clears the TWIF flag in the DMA2D_ISR register */
    using DMA2D_IFCR_CTWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear CLUT access error interrupt flag Programming this bit to 1 clears the CAEIF flag in the DMA2D_ISR register */
    using DMA2D_IFCR_CAECIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear CLUT transfer complete interrupt flag Programming this bit to 1 clears the CTCIF flag in the DMA2D_ISR register */
    using DMA2D_IFCR_CCTCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear configuration error interrupt flag Programming this bit to 1 clears the CEIF flag in the DMA2D_ISR register */
    using DMA2D_IFCR_CCEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground memory address register */
    using DMA2D_FGMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory address Address of the data used for the foreground image. This register can only be written when data transfers are disabled. Once the data transfer has started, this register is read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned, a 16-bit per pixel format must be 16-bit aligned and a 4-bit per pixel format must be 8-bit aligned. */
    using DMA2D_FGMAR_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground offset register */
    using DMA2D_FGOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line offset Line offset used for the foreground expressed in pixel. This value is used to generate the address. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once a data transfer has started, they become read-only. If the image format is 4-bit per pixel, the line offset must be even. */
    using DMA2D_FGOR_LO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background memory address register */
    using DMA2D_BGMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory address Address of the data used for the background image. This register can only be written when data transfers are disabled. Once a data transfer has started, this register is read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned, a 16-bit per pixel format must be 16-bit aligned and a 4-bit per pixel format must be 8-bit aligned. */
    using DMA2D_BGMAR_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background offset register */
    using DMA2D_BGOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line offset Line offset used for the background image (expressed in pixel). This value is used for the address generation. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once data transfer has started, they become read-only. If the image format is 4-bit per pixel, the line offset must be even. */
    using DMA2D_BGOR_LO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground PFC control register */
    using DMA2D_FGPFCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color mode These bits defines the color format of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless */
    using DMA2D_FGPFCCR_CM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT color mode This bit defines the color format of the CLUT. It can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only. */
    using DMA2D_FGPFCCR_CCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start This bit can be set to start the automatic loading of the CLUT. It is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already ongoing (data transfer or automatic background CLUT transfer). */
    using DMA2D_FGPFCCR_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT size These bits define the size of the CLUT used for the foreground image. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1. */
    using DMA2D_FGPFCCR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha mode These bits select the alpha channel value to be used for the foreground image. They can only be written data the transfer are disabled. Once the transfer has started, they become read-only. other configurations are meaningless */
    using DMA2D_FGPFCCR_AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Chroma Sub-Sampling These bits define the chroma sub-sampling mode for YCbCr color mode. Once the transfer has started, these bits are read-only. others: meaningless */
    using DMA2D_FGPFCCR_CSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only. */
    using DMA2D_FGPFCCR_AI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red Blue Swap This bit allows to swap the R &amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only. */
    using DMA2D_FGPFCCR_RBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied by the original alpha value according to the alpha mode selected through the AM[1:0] bits. These bits can only be written when data transfers are disabled. Once a transfer has started, they become read-only. */
    using DMA2D_FGPFCCR_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground color register */
    using DMA2D_FGCOLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue Value These bits defines the blue value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only. */
    using DMA2D_FGCOLR_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green Value These bits defines the green value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only. */
    using DMA2D_FGCOLR_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red Value These bits defines the red value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_FGCOLR_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background PFC control register */
    using DMA2D_BGPFCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color mode These bits define the color format of the foreground image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless */
    using DMA2D_BGPFCCR_CM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT Color mode These bits define the color format of the CLUT. This register can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only. */
    using DMA2D_BGPFCCR_CCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start This bit is set to start the automatic loading of the CLUT. This bit is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in the DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already on going (data transfer or automatic BackGround CLUT transfer). */
    using DMA2D_BGPFCCR_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT size These bits define the size of the CLUT used for the BG. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1. */
    using DMA2D_BGPFCCR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha mode These bits define which alpha channel value to be used for the background image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless */
    using DMA2D_BGPFCCR_AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only. */
    using DMA2D_BGPFCCR_AI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red Blue Swap This bit allows to swap the R &amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only. */
    using DMA2D_BGPFCCR_RBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied with the original alpha value according to the alpha mode selected with bits AM[1: 0]. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_BGPFCCR_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background color register */
    using DMA2D_BGCOLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue Value These bits define the blue value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_BGCOLR_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green Value These bits define the green value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_BGCOLR_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red Value These bits define the red value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_BGCOLR_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT memory address register */
    using DMA2D_FGCMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory Address Address of the data used for the CLUT address dedicated to the foreground image. This register can only be written when no transfer is ongoing. Once the CLUT transfer has started, this register is read-only. If the foreground CLUT format is 32-bit, the address must be 32-bit aligned. */
    using DMA2D_FGCMAR_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT memory address register */
    using DMA2D_BGCMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory address Address of the data used for the CLUT address dedicated to the background image. This register can only be written when no transfer is on going. Once the CLUT transfer has started, this register is read-only. If the background CLUT format is 32-bit, the address must be 32-bit aligned. */
    using DMA2D_BGCMAR_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D output PFC control register */
    using DMA2D_OPFCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color mode These bits define the color format of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless */
    using DMA2D_OPFCCR_CM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only. */
    using DMA2D_OPFCCR_AI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red Blue Swap This bit allows to swap the R &amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only. */
    using DMA2D_OPFCCR_RBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D output color register */
    using DMA2D_OCOLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue Value These bits define the blue value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_OCOLR_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green Value These bits define the green value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_OCOLR_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red Value These bits define the red value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_OCOLR_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha Channel Value These bits define the alpha channel of the output color. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_OCOLR_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D output memory address register */
    using DMA2D_OMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory Address Address of the data used for the output FIFO. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned and a 16-bit per pixel format must be 16-bit aligned. */
    using DMA2D_OMAR_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D output offset register */
    using DMA2D_OOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line Offset Line offset used for the output (expressed in pixels). This value is used for the address generation. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_OOR_LO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D number of line register */
    using DMA2D_NLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of lines Number of lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_NLR_NL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pixel per lines Number of pixels per lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. If any of the input image format is 4-bit per pixel, pixel per lines must be even. */
    using DMA2D_NLR_PL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D line watermark register */
    using DMA2D_LWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line watermark These bits allow to configure the line watermark for interrupt generation. An interrupt is raised when the last pixel of the watermarked line has been transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. */
    using DMA2D_LWR_LW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D AXI master timer configuration register */
    using DMA2D_AMTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Enables the dead time functionality. */
    using DMA2D_AMTCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dead Time Dead time value in the AXI clock cycle inserted between two consecutive accesses on the AXI master port. These bits represent the minimum guaranteed number of cycles between two consecutive AXI accesses. */
    using DMA2D_AMTCR_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
