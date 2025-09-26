/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N657_DMA2D_S_HPP
#define EMBEDDED_PP_STM32N657_DMA2D_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Chrom-ART Accelerator controller */
namespace STM32N657::DMA2D_S {

    /** @brief DMA2D control register */
    using DMA2D_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start */
    using DMA2D_CR_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend */
    using DMA2D_CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transfer not suspended (value: 0)
     *          - B_0x1: Transfer suspended (value: 1)
     */
        /** @brief Transfer not suspended */
    constexpr std::uint32_t DMA2D_CR_SUSP_B_0x0 = 0;
        /** @brief Transfer suspended */
    constexpr std::uint32_t DMA2D_CR_SUSP_B_0x1 = 1;

    /** @brief Abort */
    using DMA2D_CR_ABORT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transfer abort requested (value: 0)
     *          - B_0x1: Transfer abort requested (value: 1)
     */
        /** @brief No transfer abort requested */
    constexpr std::uint32_t DMA2D_CR_ABORT_B_0x0 = 0;
        /** @brief Transfer abort requested */
    constexpr std::uint32_t DMA2D_CR_ABORT_B_0x1 = 1;

    /** @brief Line offset mode */
    using DMA2D_CR_LOM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line offsets expressed in pixels (value: 0)
     *          - B_0x1: Line offsets expressed in bytes (value: 1)
     */
        /** @brief Line offsets expressed in pixels */
    constexpr std::uint32_t DMA2D_CR_LOM_B_0x0 = 0;
        /** @brief Line offsets expressed in bytes */
    constexpr std::uint32_t DMA2D_CR_LOM_B_0x1 = 1;

    /** @brief Transfer error (TE) interrupt enable */
    using DMA2D_CR_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TE interrupt disabled (value: 0)
     *          - B_0x1: TE interrupt enabled (value: 1)
     */
        /** @brief TE interrupt disabled */
    constexpr std::uint32_t DMA2D_CR_TEIE_B_0x0 = 0;
        /** @brief TE interrupt enabled */
    constexpr std::uint32_t DMA2D_CR_TEIE_B_0x1 = 1;

    /** @brief Transfer complete (TC) interrupt enable */
    using DMA2D_CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TC interrupt disabled (value: 0)
     *          - B_0x1: TC interrupt enabled (value: 1)
     */
        /** @brief TC interrupt disabled */
    constexpr std::uint32_t DMA2D_CR_TCIE_B_0x0 = 0;
        /** @brief TC interrupt enabled */
    constexpr std::uint32_t DMA2D_CR_TCIE_B_0x1 = 1;

    /** @brief Transfer watermark (TW) interrupt enable */
    using DMA2D_CR_TWIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TW interrupt disabled (value: 0)
     *          - B_0x1: TW interrupt enabled (value: 1)
     */
        /** @brief TW interrupt disabled */
    constexpr std::uint32_t DMA2D_CR_TWIE_B_0x0 = 0;
        /** @brief TW interrupt enabled */
    constexpr std::uint32_t DMA2D_CR_TWIE_B_0x1 = 1;

    /** @brief CLUT access error (CAE) interrupt enable */
    using DMA2D_CR_CAEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CAE interrupt disabled (value: 0)
     *          - B_0x1: CAE interrupt enabled (value: 1)
     */
        /** @brief CAE interrupt disabled */
    constexpr std::uint32_t DMA2D_CR_CAEIE_B_0x0 = 0;
        /** @brief CAE interrupt enabled */
    constexpr std::uint32_t DMA2D_CR_CAEIE_B_0x1 = 1;

    /** @brief CLUT transfer complete (CTC) interrupt enable */
    using DMA2D_CR_CTCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTC interrupt disabled (value: 0)
     *          - B_0x1: CTC interrupt enabled (value: 1)
     */
        /** @brief CTC interrupt disabled */
    constexpr std::uint32_t DMA2D_CR_CTCIE_B_0x0 = 0;
        /** @brief CTC interrupt enabled */
    constexpr std::uint32_t DMA2D_CR_CTCIE_B_0x1 = 1;

    /** @brief Configuration error (CE) interrupt enable */
    using DMA2D_CR_CEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CE interrupt disabled (value: 0)
     *          - B_0x1: CE interrupt enabled (value: 1)
     */
        /** @brief CE interrupt disabled */
    constexpr std::uint32_t DMA2D_CR_CEIE_B_0x0 = 0;
        /** @brief CE interrupt enabled */
    constexpr std::uint32_t DMA2D_CR_CEIE_B_0x1 = 1;

    /** @brief DMA2D mode */
    using DMA2D_CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Memory-to-memory (FG fetch only) (value: 0)
     *          - B_0x1: Memory-to-memory with PFC (FG fetch only with FG PFC active) (value: 1)
     *          - B_0x2: Memory-to-memory with blending (FG and BG fetch with PFC and blending) (value: 2)
     *          - B_0x3: Register-to-memory (no FG nor BG, only output stage active) (value: 3)
     *          - B_0x4: Memory-to-memory with blending and fixed color FG (BG fetch only with FG and BG PFC active) (value: 4)
     *          - B_0x5: Memory-to-memory with blending and fixed color BG (FG fetch only with FG and BG PFC active) (value: 5)
     */
        /** @brief Memory-to-memory (FG fetch only) */
    constexpr std::uint32_t DMA2D_CR_MODE_B_0x0 = 0;
        /** @brief Memory-to-memory with PFC (FG fetch only with FG PFC active) */
    constexpr std::uint32_t DMA2D_CR_MODE_B_0x1 = 1;
        /** @brief Memory-to-memory with blending (FG and BG fetch with PFC and blending) */
    constexpr std::uint32_t DMA2D_CR_MODE_B_0x2 = 2;
        /** @brief Register-to-memory (no FG nor BG, only output stage active) */
    constexpr std::uint32_t DMA2D_CR_MODE_B_0x3 = 3;
        /** @brief Memory-to-memory with blending and fixed color FG (BG fetch only with FG and BG PFC active) */
    constexpr std::uint32_t DMA2D_CR_MODE_B_0x4 = 4;
        /** @brief Memory-to-memory with blending and fixed color BG (FG fetch only with FG and BG PFC active) */
    constexpr std::uint32_t DMA2D_CR_MODE_B_0x5 = 5;

    /** @brief DMA2D interrupt status register */
    using DMA2D_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer error interrupt flag */
    using DMA2D_ISR_TEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete interrupt flag */
    using DMA2D_ISR_TCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer watermark interrupt flag */
    using DMA2D_ISR_TWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT access error interrupt flag */
    using DMA2D_ISR_CAEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT transfer complete interrupt flag */
    using DMA2D_ISR_CTCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configuration error interrupt flag */
    using DMA2D_ISR_CEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D interrupt flag clear register */
    using DMA2D_IFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear transfer error interrupt flag */
    using DMA2D_IFCR_CTEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear transfer complete interrupt flag */
    using DMA2D_IFCR_CTCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear transfer watermark interrupt flag */
    using DMA2D_IFCR_CTWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear CLUT access error interrupt flag */
    using DMA2D_IFCR_CAECIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear CLUT transfer complete interrupt flag */
    using DMA2D_IFCR_CCTCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear configuration error interrupt flag */
    using DMA2D_IFCR_CCEIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground memory address register */
    using DMA2D_FGMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory address, address of the data used for the foreground image */
    using DMA2D_FGMAR_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground offset register */
    using DMA2D_FGOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line offset */
    using DMA2D_FGOR_LO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background memory address register */
    using DMA2D_BGMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory address, address of the data used for the background image */
    using DMA2D_BGMAR_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background offset register */
    using DMA2D_BGOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line offset */
    using DMA2D_BGOR_LO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground PFC control register */
    using DMA2D_FGPFCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color mode */
    using DMA2D_FGPFCCR_CM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARGB8888 (value: 0)
     *          - B_0x1: RGB888 (value: 1)
     *          - B_0x2: RGB565 (value: 2)
     *          - B_0x3: ARGB1555 (value: 3)
     *          - B_0x4: ARGB4444 (value: 4)
     *          - B_0x5: L8 (value: 5)
     *          - B_0x6: AL44 (value: 6)
     *          - B_0x7: AL88 (value: 7)
     *          - B_0x8: L4 (value: 8)
     *          - B_0x9: A8 (value: 9)
     *          - B_0xA: A4 (value: 10)
     *          - B_0xB: YCbCr (value: 11)
     */
        /** @brief ARGB8888 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0x0 = 0;
        /** @brief RGB888 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0x1 = 1;
        /** @brief RGB565 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0x2 = 2;
        /** @brief ARGB1555 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0x3 = 3;
        /** @brief ARGB4444 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0x4 = 4;
        /** @brief L8 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0x5 = 5;
        /** @brief AL44 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0x6 = 6;
        /** @brief AL88 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0x7 = 7;
        /** @brief L4 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0x8 = 8;
        /** @brief A8 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0x9 = 9;
        /** @brief A4 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0xA = 10;
        /** @brief YCbCr */
    constexpr std::uint32_t DMA2D_FGPFCCR_CM_B_0xB = 11;

    /** @brief CLUT color mode */
    using DMA2D_FGPFCCR_CCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARGB8888 (value: 0)
     *          - B_0x1: RGB888 (value: 1)
     */
        /** @brief ARGB8888 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CCM_B_0x0 = 0;
        /** @brief RGB888 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CCM_B_0x1 = 1;

    /** @brief Start */
    using DMA2D_FGPFCCR_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT size */
    using DMA2D_FGPFCCR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha mode */
    using DMA2D_FGPFCCR_AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No modification of the foreground image alpha channel value (value: 0)
     *          - B_0x1: Replace original foreground image alpha channel value by ALPHA[7: 0] (value: 1)
     *          - B_0x2: Replace original foreground image alpha channel value by ALPHA[7:0] multiplied with original alpha channel value (value: 2)
     */
        /** @brief No modification of the foreground image alpha channel value */
    constexpr std::uint32_t DMA2D_FGPFCCR_AM_B_0x0 = 0;
        /** @brief Replace original foreground image alpha channel value by ALPHA[7: 0] */
    constexpr std::uint32_t DMA2D_FGPFCCR_AM_B_0x1 = 1;
        /** @brief Replace original foreground image alpha channel value by ALPHA[7:0] multiplied with original alpha channel value */
    constexpr std::uint32_t DMA2D_FGPFCCR_AM_B_0x2 = 2;

    /** @brief Chroma subsampling */
    using DMA2D_FGPFCCR_CSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 4:4:4 (no chroma subsampling) (value: 0)
     *          - B_0x1: 4:2:2 (value: 1)
     *          - B_0x2: 4:2:0 (value: 2)
     */
        /** @brief 4:4:4 (no chroma subsampling) */
    constexpr std::uint32_t DMA2D_FGPFCCR_CSS_B_0x0 = 0;
        /** @brief 4:2:2 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CSS_B_0x1 = 1;
        /** @brief 4:2:0 */
    constexpr std::uint32_t DMA2D_FGPFCCR_CSS_B_0x2 = 2;

    /** @brief Alpha inverted */
    using DMA2D_FGPFCCR_AI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular alpha (value: 0)
     *          - B_0x1: Inverted alpha (value: 1)
     */
        /** @brief Regular alpha */
    constexpr std::uint32_t DMA2D_FGPFCCR_AI_B_0x0 = 0;
        /** @brief Inverted alpha */
    constexpr std::uint32_t DMA2D_FGPFCCR_AI_B_0x1 = 1;

    /** @brief Red/Blue swap */
    using DMA2D_FGPFCCR_RBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular mode (RGB or ARGB) (value: 0)
     *          - B_0x1: Swap mode (BGR or ABGR) (value: 1)
     */
        /** @brief Regular mode (RGB or ARGB) */
    constexpr std::uint32_t DMA2D_FGPFCCR_RBS_B_0x0 = 0;
        /** @brief Swap mode (BGR or ABGR) */
    constexpr std::uint32_t DMA2D_FGPFCCR_RBS_B_0x1 = 1;

    /** @brief Alpha value */
    using DMA2D_FGPFCCR_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground color register */
    using DMA2D_FGCOLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue value for the A4 or A8 mode of the foreground image */
    using DMA2D_FGCOLR_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green value for the A4 or A8 mode of the foreground image */
    using DMA2D_FGCOLR_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red value for the A4 or A8 mode of the foreground image */
    using DMA2D_FGCOLR_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background PFC control register */
    using DMA2D_BGPFCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color mode */
    using DMA2D_BGPFCCR_CM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARGB8888 (value: 0)
     *          - B_0x1: RGB888 (value: 1)
     *          - B_0x2: RGB565 (value: 2)
     *          - B_0x3: ARGB1555 (value: 3)
     *          - B_0x4: ARGB4444 (value: 4)
     *          - B_0x5: L8 (value: 5)
     *          - B_0x6: AL44 (value: 6)
     *          - B_0x7: AL88 (value: 7)
     *          - B_0x8: L4 (value: 8)
     *          - B_0x9: A8 (value: 9)
     *          - B_0xA: A4 (value: 10)
     */
        /** @brief ARGB8888 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CM_B_0x0 = 0;
        /** @brief RGB888 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CM_B_0x1 = 1;
        /** @brief RGB565 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CM_B_0x2 = 2;
        /** @brief ARGB1555 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CM_B_0x3 = 3;
        /** @brief ARGB4444 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CM_B_0x4 = 4;
        /** @brief L8 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CM_B_0x5 = 5;
        /** @brief AL44 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CM_B_0x6 = 6;
        /** @brief AL88 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CM_B_0x7 = 7;
        /** @brief L4 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CM_B_0x8 = 8;
        /** @brief A8 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CM_B_0x9 = 9;
        /** @brief A4 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CM_B_0xA = 10;

    /** @brief CLUT color mode */
    using DMA2D_BGPFCCR_CCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARGB8888 (value: 0)
     *          - B_0x1: RGB888 (value: 1)
     */
        /** @brief ARGB8888 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CCM_B_0x0 = 0;
        /** @brief RGB888 */
    constexpr std::uint32_t DMA2D_BGPFCCR_CCM_B_0x1 = 1;

    /** @brief Start */
    using DMA2D_BGPFCCR_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT size */
    using DMA2D_BGPFCCR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha mode */
    using DMA2D_BGPFCCR_AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No modification of the foreground image alpha channel value (value: 0)
     *          - B_0x1: Replace original background image alpha channel value by ALPHA[7: 0] (value: 1)
     *          - B_0x2: Replace original background image alpha channel value by ALPHA[7:0] multiplied with original alpha channel value (value: 2)
     */
        /** @brief No modification of the foreground image alpha channel value */
    constexpr std::uint32_t DMA2D_BGPFCCR_AM_B_0x0 = 0;
        /** @brief Replace original background image alpha channel value by ALPHA[7: 0] */
    constexpr std::uint32_t DMA2D_BGPFCCR_AM_B_0x1 = 1;
        /** @brief Replace original background image alpha channel value by ALPHA[7:0] multiplied with original alpha channel value */
    constexpr std::uint32_t DMA2D_BGPFCCR_AM_B_0x2 = 2;

    /** @brief Alpha Inverted */
    using DMA2D_BGPFCCR_AI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular alpha (value: 0)
     *          - B_0x1: Inverted alpha (value: 1)
     */
        /** @brief Regular alpha */
    constexpr std::uint32_t DMA2D_BGPFCCR_AI_B_0x0 = 0;
        /** @brief Inverted alpha */
    constexpr std::uint32_t DMA2D_BGPFCCR_AI_B_0x1 = 1;

    /** @brief Red/Blue swap */
    using DMA2D_BGPFCCR_RBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular mode (RGB or ARGB) (value: 0)
     *          - B_0x1: Swap mode (BGR or ABGR) (value: 1)
     */
        /** @brief Regular mode (RGB or ARGB) */
    constexpr std::uint32_t DMA2D_BGPFCCR_RBS_B_0x0 = 0;
        /** @brief Swap mode (BGR or ABGR) */
    constexpr std::uint32_t DMA2D_BGPFCCR_RBS_B_0x1 = 1;

    /** @brief Alpha value */
    using DMA2D_BGPFCCR_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background color register */
    using DMA2D_BGCOLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue value for the A4 or A8 mode of the background */
    using DMA2D_BGCOLR_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green value for the A4 or A8 mode of the background */
    using DMA2D_BGCOLR_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red value for the A4 or A8 mode of the background */
    using DMA2D_BGCOLR_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT memory address register */
    using DMA2D_FGCMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory address */
    using DMA2D_FGCMAR_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT memory address register */
    using DMA2D_BGCMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory address */
    using DMA2D_BGCMAR_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D output PFC control register */
    using DMA2D_OPFCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color mode */
    using DMA2D_OPFCCR_CM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARGB8888 (value: 0)
     *          - B_0x1: RGB888 (value: 1)
     *          - B_0x2: RGB565 (value: 2)
     *          - B_0x3: ARGB1555 (value: 3)
     *          - B_0x4: ARGB4444 (value: 4)
     */
        /** @brief ARGB8888 */
    constexpr std::uint32_t DMA2D_OPFCCR_CM_B_0x0 = 0;
        /** @brief RGB888 */
    constexpr std::uint32_t DMA2D_OPFCCR_CM_B_0x1 = 1;
        /** @brief RGB565 */
    constexpr std::uint32_t DMA2D_OPFCCR_CM_B_0x2 = 2;
        /** @brief ARGB1555 */
    constexpr std::uint32_t DMA2D_OPFCCR_CM_B_0x3 = 3;
        /** @brief ARGB4444 */
    constexpr std::uint32_t DMA2D_OPFCCR_CM_B_0x4 = 4;

    /** @brief Swap bytes */
    using DMA2D_OPFCCR_SB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bytes in regular order in the output FIFO (value: 0)
     *          - B_0x1: Bytes swapped two by two in the output FIFO (value: 1)
     */
        /** @brief Bytes in regular order in the output FIFO */
    constexpr std::uint32_t DMA2D_OPFCCR_SB_B_0x0 = 0;
        /** @brief Bytes swapped two by two in the output FIFO */
    constexpr std::uint32_t DMA2D_OPFCCR_SB_B_0x1 = 1;

    /** @brief Alpha Inverted */
    using DMA2D_OPFCCR_AI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular alpha (value: 0)
     *          - B_0x1: Inverted alpha (value: 1)
     */
        /** @brief Regular alpha */
    constexpr std::uint32_t DMA2D_OPFCCR_AI_B_0x0 = 0;
        /** @brief Inverted alpha */
    constexpr std::uint32_t DMA2D_OPFCCR_AI_B_0x1 = 1;

    /** @brief Red/Blue swap */
    using DMA2D_OPFCCR_RBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Regular mode (RGB or ARGB) (value: 0)
     *          - B_0x1: Swap mode (BGR or ABGR) (value: 1)
     */
        /** @brief Regular mode (RGB or ARGB) */
    constexpr std::uint32_t DMA2D_OPFCCR_RBS_B_0x0 = 0;
        /** @brief Swap mode (BGR or ABGR) */
    constexpr std::uint32_t DMA2D_OPFCCR_RBS_B_0x1 = 1;

    /** @brief DMA2D output color register */
    using DMA2D_OCOLR_RGB888 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue value of the output image in ARGB8888 or RGB888 */
    using DMA2D_OCOLR_RGB888_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green value of the output image in ARGB8888 or RGB888 */
    using DMA2D_OCOLR_RGB888_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red value of the output image in ARGB8888 or RGB888 mode */
    using DMA2D_OCOLR_RGB888_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha channel value of the output color in ARGB8888 mode (otherwise reserved) */
    using DMA2D_OCOLR_RGB888_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D output color register */
    using DMA2D_OCOLR_RGB565 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue value of the output image in RGB565 mode */
    using DMA2D_OCOLR_RGB565_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green value of the output image in RGB565 mode */
    using DMA2D_OCOLR_RGB565_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red value of the output image in RGB565 mode */
    using DMA2D_OCOLR_RGB565_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D output color register */
    using DMA2D_OCOLR_ARGB1555 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue value of the output image in ARGB1555 mode */
    using DMA2D_OCOLR_ARGB1555_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green value of the output image in ARGB1555 mode */
    using DMA2D_OCOLR_ARGB1555_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red value of the output image in ARGB1555 mode */
    using DMA2D_OCOLR_ARGB1555_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha channel value of the output color in ARGB1555 mode */
    using DMA2D_OCOLR_ARGB1555_A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D output color register */
    using DMA2D_OCOLR_ARGB4444 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue value of the output image in ARGB4444 mode */
    using DMA2D_OCOLR_ARGB4444_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green value of the output image in ARGB4444 mode */
    using DMA2D_OCOLR_ARGB4444_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red value of the output image in ARGB4444 mode */
    using DMA2D_OCOLR_ARGB4444_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha channel of the output color value in ARGB4444 */
    using DMA2D_OCOLR_ARGB4444_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D output memory address register */
    using DMA2D_OMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory address */
    using DMA2D_OMAR_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D output offset register */
    using DMA2D_OOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line offset */
    using DMA2D_OOR_LO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D number of line register */
    using DMA2D_NLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of lines of the area to be transferred. */
    using DMA2D_NLR_NL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pixel per lines per lines of the area to be transferred */
    using DMA2D_NLR_PL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D line watermark register */
    using DMA2D_LWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line watermark for interrupt generation */
    using DMA2D_LWR_LW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D AXI master timer configuration register */
    using DMA2D_AMTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dead-time functionality enable */
    using DMA2D_AMTCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dead time */
    using DMA2D_AMTCR_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT0_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT0_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT0_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT0_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT1_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT1_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT1_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT1_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x408, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT2_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT2_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT2_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT2_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT3_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT3_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT3_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT3_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT4_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT4_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT4_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT4_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT5_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT5_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT5_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT5_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT6_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT6_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT6_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT6_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT7_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT7_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT7_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT7_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT8_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT8_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT8_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT8_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x424, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT9_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT9_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT9_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT9_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x428, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT10_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT10_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT10_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT10_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT11_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT11_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT11_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT11_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x430, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT12_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT12_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT12_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT12_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x434, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT13_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT13_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT13_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT13_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x438, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT14_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT14_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT14_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT14_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x43C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT15_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT15_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT15_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT15_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x440, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT16_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT16_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT16_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT16_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x444, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT17_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT17_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT17_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT17_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x448, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT18_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT18_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT18_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT18_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT19_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT19_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT19_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT19_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x450, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT20_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT20_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT20_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT20_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x454, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT21_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT21_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT21_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT21_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x458, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT22_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT22_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT22_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT22_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT23_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT23_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT23_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT23_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x460, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT24_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT24_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT24_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT24_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x464, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT25_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT25_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT25_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT25_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x468, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT26_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT26_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT26_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT26_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x46C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT27_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT27_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT27_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT27_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x470, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT28_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT28_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT28_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT28_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x474, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT29_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT29_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT29_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT29_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x478, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT30_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT30_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT30_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT30_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x47C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT31_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT31_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT31_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT31_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x480, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT32_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT32_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT32_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT32_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x484, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT33_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT33_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT33_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT33_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x488, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT34_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT34_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT34_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT34_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT35_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT35_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT35_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT35_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x490, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT36_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT36_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT36_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT36_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x494, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT37_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT37_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT37_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT37_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x498, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT38_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT38_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT38_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT38_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x49C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT39_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT39_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT39_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT39_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT40_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT40_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT40_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT40_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT41_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT41_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT41_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT41_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT42_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT42_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT42_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT42_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT43_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT43_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT43_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT43_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT44_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT44_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT44_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT44_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT45_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT45_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT45_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT45_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT46_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT46_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT46_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT46_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT47_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT47_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT47_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT47_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT48_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT48_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT48_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT48_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT49_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT49_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT49_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT49_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT50_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT50_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT50_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT50_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT51_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT51_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT51_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT51_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT52_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT52_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT52_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT52_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT53_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT53_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT53_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT53_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT54_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT54_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT54_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT54_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT55_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT55_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT55_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT55_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT56_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT56_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT56_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT56_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT57_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT57_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT57_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT57_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT58_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT58_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT58_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT58_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT59_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT59_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT59_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT59_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT60_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT60_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT60_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT60_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT61_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT61_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT61_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT61_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT62_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT62_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT62_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT62_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT63_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT63_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT63_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT63_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x500, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT64_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT64_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT64_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT64_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x504, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT65_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT65_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT65_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT65_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x508, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT66_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT66_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT66_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT66_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT67_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT67_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT67_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT67_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x510, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT68_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT68_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT68_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT68_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x514, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT69_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT69_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT69_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT69_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x518, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT70_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT70_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT70_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT70_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x51C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT71_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT71_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT71_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT71_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x520, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT72_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT72_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT72_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT72_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x524, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT73_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT73_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT73_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT73_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x528, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT74_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT74_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT74_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT74_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x52C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT75_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT75_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT75_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT75_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x530, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT76_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT76_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT76_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT76_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x534, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT77_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT77_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT77_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT77_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x538, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT78_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT78_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT78_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT78_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x53C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT79_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT79_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT79_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT79_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x540, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT80_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT80_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT80_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT80_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x544, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT81_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT81_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT81_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT81_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x548, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT82_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT82_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT82_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT82_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT83_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT83_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT83_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT83_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x550, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT84_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT84_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT84_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT84_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x554, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT85_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT85_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT85_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT85_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x558, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT86_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT86_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT86_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT86_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x55C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT87_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT87_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT87_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT87_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT88 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x560, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT88_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT88_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT88_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT88_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT89 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x564, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT89_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT89_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT89_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT89_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT90 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x568, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT90_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT90_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT90_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT90_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT91 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x56C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT91_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT91_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT91_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT91_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT92 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x570, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT92_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT92_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT92_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT92_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT93 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x574, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT93_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT93_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT93_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT93_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT94 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x578, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT94_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT94_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT94_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT94_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT95 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x57C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT95_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT95_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT95_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT95_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT96 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x580, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT96_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT96_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT96_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT96_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT97 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x584, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT97_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT97_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT97_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT97_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT98 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x588, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT98_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT98_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT98_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT98_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT99 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT99_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT99_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT99_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT99_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT100 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x590, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT100_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT100_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT100_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT100_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT101 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x594, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT101_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT101_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT101_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT101_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT102 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x598, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT102_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT102_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT102_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT102_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT103 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x59C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT103_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT103_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT103_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT103_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT104 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT104_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT104_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT104_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT104_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT105 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT105_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT105_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT105_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT105_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT106 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT106_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT106_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT106_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT106_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT107 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT107_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT107_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT107_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT107_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT108 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT108_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT108_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT108_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT108_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT109 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT109_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT109_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT109_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT109_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT110 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT110_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT110_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT110_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT110_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT111 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT111_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT111_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT111_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT111_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT112 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT112_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT112_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT112_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT112_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT113 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT113_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT113_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT113_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT113_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT114 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT114_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT114_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT114_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT114_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT115 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT115_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT115_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT115_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT115_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT116 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT116_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT116_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT116_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT116_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT117 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT117_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT117_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT117_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT117_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT118 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT118_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT118_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT118_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT118_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT119 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT119_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT119_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT119_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT119_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT120 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT120_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT120_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT120_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT120_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT121 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT121_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT121_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT121_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT121_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT122 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT122_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT122_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT122_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT122_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT123 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT123_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT123_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT123_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT123_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT124 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT124_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT124_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT124_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT124_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT125 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT125_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT125_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT125_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT125_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT126 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT126_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT126_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT126_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT126_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT127 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT127_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT127_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT127_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT127_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT128 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x600, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT128_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT128_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT128_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT128_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT129 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x604, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT129_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT129_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT129_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT129_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT130 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x608, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT130_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT130_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT130_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT130_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT131 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT131_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT131_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT131_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT131_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT132 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x610, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT132_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT132_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT132_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT132_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT133 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x614, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT133_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT133_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT133_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT133_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT134 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x618, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT134_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT134_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT134_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT134_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT135 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x61C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT135_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT135_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT135_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT135_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT136 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x620, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT136_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT136_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT136_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT136_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT137 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x624, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT137_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT137_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT137_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT137_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT138 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x628, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT138_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT138_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT138_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT138_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT139 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x62C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT139_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT139_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT139_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT139_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT140 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x630, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT140_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT140_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT140_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT140_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT141 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x634, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT141_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT141_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT141_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT141_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT142 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x638, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT142_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT142_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT142_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT142_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT143 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x63C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT143_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT143_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT143_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT143_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT144 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x640, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT144_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT144_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT144_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT144_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT145 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x644, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT145_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT145_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT145_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT145_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT146 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x648, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT146_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT146_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT146_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT146_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT147 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT147_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT147_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT147_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT147_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT148 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x650, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT148_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT148_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT148_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT148_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT149 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x654, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT149_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT149_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT149_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT149_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT150 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x658, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT150_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT150_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT150_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT150_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT151 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x65C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT151_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT151_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT151_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT151_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT152 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x660, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT152_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT152_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT152_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT152_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT153 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x664, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT153_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT153_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT153_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT153_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT154 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x668, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT154_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT154_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT154_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT154_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT155 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x66C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT155_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT155_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT155_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT155_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT156 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x670, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT156_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT156_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT156_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT156_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT157 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x674, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT157_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT157_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT157_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT157_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT158 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x678, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT158_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT158_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT158_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT158_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT159 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x67C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT159_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT159_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT159_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT159_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT160 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x680, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT160_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT160_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT160_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT160_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT161 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x684, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT161_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT161_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT161_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT161_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT162 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x688, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT162_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT162_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT162_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT162_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT163 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT163_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT163_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT163_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT163_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT164 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x690, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT164_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT164_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT164_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT164_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT165 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x694, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT165_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT165_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT165_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT165_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT166 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x698, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT166_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT166_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT166_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT166_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT167 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x69C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT167_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT167_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT167_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT167_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT168 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT168_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT168_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT168_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT168_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT169 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT169_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT169_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT169_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT169_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT170 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT170_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT170_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT170_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT170_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT171 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT171_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT171_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT171_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT171_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT172 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT172_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT172_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT172_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT172_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT173 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT173_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT173_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT173_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT173_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT174 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT174_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT174_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT174_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT174_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT175 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT175_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT175_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT175_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT175_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT176 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT176_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT176_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT176_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT176_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT177 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT177_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT177_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT177_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT177_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT178 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT178_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT178_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT178_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT178_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT179 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT179_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT179_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT179_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT179_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT180 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT180_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT180_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT180_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT180_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT181 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT181_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT181_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT181_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT181_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT182 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT182_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT182_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT182_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT182_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT183 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT183_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT183_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT183_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT183_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT184 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT184_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT184_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT184_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT184_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT185 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT185_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT185_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT185_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT185_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT186 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT186_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT186_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT186_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT186_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT187 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT187_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT187_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT187_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT187_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT188 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT188_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT188_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT188_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT188_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT189 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT189_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT189_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT189_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT189_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT190 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT190_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT190_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT190_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT190_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT191 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT191_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT191_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT191_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT191_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT192 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x700, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT192_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT192_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT192_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT192_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT193 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x704, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT193_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT193_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT193_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT193_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT194 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x708, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT194_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT194_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT194_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT194_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT195 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT195_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT195_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT195_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT195_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT196 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x710, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT196_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT196_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT196_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT196_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT197 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x714, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT197_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT197_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT197_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT197_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT198 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x718, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT198_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT198_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT198_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT198_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT199 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x71C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT199_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT199_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT199_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT199_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT200 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x720, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT200_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT200_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT200_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT200_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT201 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x724, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT201_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT201_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT201_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT201_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT202 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x728, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT202_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT202_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT202_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT202_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT203 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x72C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT203_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT203_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT203_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT203_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT204 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x730, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT204_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT204_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT204_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT204_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT205 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x734, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT205_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT205_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT205_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT205_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT206 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x738, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT206_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT206_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT206_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT206_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT207 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x73C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT207_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT207_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT207_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT207_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT208 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x740, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT208_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT208_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT208_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT208_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT209 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x744, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT209_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT209_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT209_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT209_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT210 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x748, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT210_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT210_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT210_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT210_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT211 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT211_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT211_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT211_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT211_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT212 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x750, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT212_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT212_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT212_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT212_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT213 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x754, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT213_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT213_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT213_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT213_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT214 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x758, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT214_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT214_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT214_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT214_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT215 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x75C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT215_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT215_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT215_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT215_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT216 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x760, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT216_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT216_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT216_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT216_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT217 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x764, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT217_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT217_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT217_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT217_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT218 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x768, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT218_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT218_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT218_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT218_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT219 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x76C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT219_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT219_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT219_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT219_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT220 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x770, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT220_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT220_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT220_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT220_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT221 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x774, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT221_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT221_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT221_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT221_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT222 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x778, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT222_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT222_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT222_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT222_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT223 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x77C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT223_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT223_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT223_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT223_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT224 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x780, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT224_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT224_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT224_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT224_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT225 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x784, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT225_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT225_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT225_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT225_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT226 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x788, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT226_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT226_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT226_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT226_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT227 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT227_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT227_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT227_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT227_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT228 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x790, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT228_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT228_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT228_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT228_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT229 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x794, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT229_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT229_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT229_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT229_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT230 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x798, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT230_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT230_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT230_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT230_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT231 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x79C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT231_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT231_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT231_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT231_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT232 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT232_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT232_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT232_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT232_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT233 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT233_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT233_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT233_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT233_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT234 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT234_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT234_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT234_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT234_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT235 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT235_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT235_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT235_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT235_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT236 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT236_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT236_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT236_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT236_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT237 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT237_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT237_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT237_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT237_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT238 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT238_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT238_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT238_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT238_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT239 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT239_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT239_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT239_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT239_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT240 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT240_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT240_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT240_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT240_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT241 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT241_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT241_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT241_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT241_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT242 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT242_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT242_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT242_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT242_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT243 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT243_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT243_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT243_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT243_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT244 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT244_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT244_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT244_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT244_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT245 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT245_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT245_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT245_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT245_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT246 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT246_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT246_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT246_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT246_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT247 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT247_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT247_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT247_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT247_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT248 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT248_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT248_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT248_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT248_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT249 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT249_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT249_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT249_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT249_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT250 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT250_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT250_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT250_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT250_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT251 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT251_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT251_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT251_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT251_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT252 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT252_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT252_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT252_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT252_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT253 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT253_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT253_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT253_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT253_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT254 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT254_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT254_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT254_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT254_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D foreground CLUT */
    using DMA2D_FGCLUT255 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_FGCLUT255_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_FGCLUT255_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_FGCLUT255_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_FGCLUT255_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x800, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT0_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT0_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT0_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT0_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x804, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT1_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT1_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT1_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT1_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x808, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT2_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT2_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT2_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT2_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT3_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT3_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT3_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT3_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x810, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT4_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT4_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT4_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT4_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x814, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT5_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT5_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT5_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT5_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x818, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT6_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT6_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT6_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT6_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x81C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT7_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT7_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT7_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT7_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x820, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT8_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT8_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT8_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT8_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x824, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT9_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT9_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT9_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT9_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x828, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT10_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT10_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT10_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT10_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x82C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT11_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT11_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT11_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT11_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x830, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT12_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT12_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT12_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT12_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x834, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT13_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT13_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT13_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT13_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x838, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT14_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT14_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT14_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT14_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x83C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT15_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT15_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT15_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT15_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x840, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT16_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT16_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT16_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT16_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x844, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT17_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT17_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT17_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT17_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x848, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT18_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT18_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT18_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT18_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT19_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT19_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT19_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT19_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x850, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT20_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT20_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT20_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT20_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x854, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT21_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT21_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT21_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT21_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x858, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT22_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT22_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT22_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT22_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x85C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT23_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT23_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT23_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT23_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x860, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT24_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT24_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT24_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT24_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x864, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT25_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT25_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT25_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT25_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x868, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT26_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT26_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT26_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT26_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x86C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT27_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT27_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT27_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT27_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x870, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT28_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT28_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT28_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT28_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x874, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT29_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT29_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT29_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT29_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x878, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT30_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT30_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT30_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT30_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x87C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT31_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT31_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT31_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT31_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x880, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT32_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT32_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT32_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT32_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x884, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT33_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT33_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT33_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT33_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x888, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT34_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT34_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT34_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT34_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT35_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT35_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT35_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT35_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x890, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT36_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT36_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT36_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT36_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x894, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT37_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT37_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT37_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT37_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x898, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT38_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT38_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT38_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT38_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x89C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT39_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT39_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT39_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT39_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT40_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT40_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT40_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT40_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT41_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT41_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT41_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT41_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT42_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT42_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT42_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT42_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT43_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT43_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT43_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT43_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT44_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT44_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT44_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT44_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT45_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT45_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT45_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT45_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT46_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT46_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT46_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT46_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT47_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT47_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT47_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT47_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT48_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT48_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT48_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT48_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT49_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT49_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT49_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT49_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT50_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT50_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT50_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT50_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT51_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT51_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT51_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT51_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT52_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT52_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT52_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT52_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT53_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT53_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT53_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT53_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT54_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT54_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT54_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT54_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT55_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT55_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT55_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT55_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT56_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT56_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT56_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT56_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT57_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT57_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT57_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT57_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT58_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT58_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT58_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT58_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT59_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT59_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT59_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT59_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT60_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT60_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT60_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT60_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT61_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT61_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT61_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT61_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT62_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT62_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT62_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT62_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT63_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT63_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT63_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT63_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x900, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT64_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT64_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT64_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT64_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x904, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT65_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT65_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT65_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT65_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x908, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT66_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT66_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT66_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT66_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT67_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT67_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT67_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT67_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x910, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT68_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT68_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT68_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT68_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x914, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT69_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT69_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT69_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT69_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x918, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT70_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT70_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT70_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT70_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x91C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT71_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT71_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT71_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT71_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x920, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT72_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT72_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT72_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT72_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x924, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT73_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT73_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT73_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT73_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x928, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT74_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT74_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT74_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT74_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x92C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT75_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT75_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT75_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT75_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x930, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT76_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT76_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT76_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT76_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x934, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT77_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT77_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT77_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT77_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x938, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT78_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT78_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT78_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT78_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x93C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT79_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT79_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT79_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT79_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x940, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT80_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT80_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT80_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT80_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x944, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT81_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT81_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT81_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT81_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x948, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT82_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT82_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT82_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT82_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT83_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT83_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT83_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT83_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x950, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT84_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT84_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT84_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT84_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x954, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT85_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT85_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT85_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT85_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x958, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT86_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT86_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT86_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT86_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x95C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT87_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT87_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT87_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT87_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT88 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x960, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT88_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT88_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT88_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT88_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT89 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x964, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT89_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT89_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT89_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT89_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT90 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x968, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT90_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT90_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT90_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT90_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT91 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x96C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT91_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT91_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT91_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT91_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT92 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x970, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT92_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT92_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT92_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT92_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT93 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x974, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT93_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT93_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT93_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT93_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT94 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x978, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT94_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT94_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT94_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT94_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT95 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x97C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT95_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT95_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT95_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT95_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT96 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x980, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT96_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT96_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT96_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT96_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT97 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x984, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT97_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT97_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT97_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT97_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT98 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x988, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT98_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT98_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT98_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT98_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT99 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT99_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT99_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT99_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT99_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT100 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x990, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT100_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT100_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT100_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT100_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT101 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x994, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT101_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT101_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT101_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT101_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT102 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x998, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT102_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT102_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT102_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT102_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT103 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x99C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT103_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT103_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT103_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT103_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT104 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT104_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT104_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT104_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT104_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT105 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT105_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT105_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT105_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT105_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT106 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT106_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT106_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT106_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT106_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT107 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT107_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT107_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT107_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT107_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT108 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT108_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT108_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT108_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT108_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT109 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT109_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT109_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT109_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT109_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT110 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT110_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT110_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT110_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT110_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT111 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT111_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT111_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT111_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT111_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT112 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT112_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT112_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT112_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT112_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT113 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT113_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT113_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT113_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT113_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT114 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT114_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT114_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT114_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT114_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT115 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT115_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT115_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT115_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT115_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT116 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT116_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT116_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT116_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT116_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT117 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT117_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT117_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT117_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT117_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT118 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT118_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT118_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT118_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT118_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT119 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT119_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT119_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT119_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT119_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT120 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT120_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT120_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT120_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT120_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT121 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT121_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT121_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT121_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT121_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT122 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT122_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT122_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT122_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT122_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT123 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT123_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT123_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT123_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT123_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT124 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT124_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT124_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT124_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT124_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT125 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT125_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT125_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT125_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT125_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT126 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT126_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT126_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT126_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT126_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT127 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT127_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT127_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT127_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT127_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT128 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT128_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT128_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT128_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT128_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT129 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT129_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT129_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT129_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT129_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT130 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT130_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT130_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT130_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT130_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT131 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT131_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT131_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT131_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT131_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT132 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT132_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT132_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT132_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT132_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT133 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT133_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT133_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT133_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT133_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT134 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT134_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT134_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT134_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT134_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT135 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT135_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT135_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT135_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT135_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT136 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT136_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT136_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT136_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT136_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT137 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT137_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT137_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT137_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT137_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT138 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT138_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT138_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT138_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT138_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT139 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT139_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT139_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT139_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT139_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT140 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT140_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT140_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT140_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT140_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT141 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT141_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT141_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT141_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT141_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT142 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT142_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT142_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT142_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT142_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT143 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT143_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT143_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT143_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT143_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT144 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT144_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT144_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT144_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT144_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT145 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT145_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT145_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT145_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT145_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT146 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT146_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT146_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT146_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT146_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT147 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT147_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT147_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT147_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT147_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT148 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT148_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT148_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT148_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT148_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT149 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT149_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT149_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT149_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT149_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT150 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT150_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT150_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT150_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT150_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT151 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT151_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT151_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT151_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT151_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT152 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT152_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT152_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT152_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT152_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT153 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT153_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT153_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT153_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT153_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT154 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT154_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT154_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT154_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT154_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT155 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT155_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT155_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT155_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT155_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT156 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT156_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT156_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT156_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT156_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT157 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT157_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT157_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT157_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT157_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT158 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT158_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT158_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT158_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT158_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT159 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT159_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT159_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT159_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT159_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT160 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT160_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT160_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT160_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT160_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT161 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT161_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT161_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT161_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT161_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT162 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT162_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT162_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT162_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT162_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT163 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT163_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT163_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT163_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT163_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT164 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT164_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT164_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT164_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT164_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT165 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT165_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT165_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT165_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT165_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT166 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT166_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT166_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT166_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT166_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT167 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT167_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT167_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT167_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT167_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT168 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT168_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT168_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT168_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT168_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT169 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT169_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT169_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT169_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT169_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT170 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT170_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT170_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT170_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT170_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT171 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT171_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT171_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT171_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT171_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT172 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT172_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT172_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT172_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT172_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT173 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT173_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT173_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT173_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT173_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT174 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT174_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT174_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT174_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT174_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT175 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xABC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT175_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT175_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT175_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT175_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT176 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT176_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT176_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT176_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT176_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT177 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT177_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT177_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT177_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT177_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT178 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT178_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT178_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT178_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT178_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT179 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xACC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT179_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT179_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT179_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT179_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT180 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT180_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT180_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT180_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT180_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT181 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT181_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT181_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT181_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT181_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT182 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT182_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT182_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT182_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT182_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT183 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xADC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT183_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT183_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT183_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT183_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT184 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT184_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT184_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT184_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT184_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT185 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT185_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT185_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT185_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT185_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT186 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT186_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT186_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT186_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT186_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT187 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT187_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT187_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT187_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT187_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT188 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT188_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT188_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT188_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT188_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT189 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT189_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT189_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT189_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT189_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT190 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT190_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT190_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT190_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT190_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT191 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT191_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT191_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT191_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT191_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT192 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT192_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT192_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT192_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT192_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT193 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT193_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT193_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT193_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT193_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT194 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT194_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT194_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT194_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT194_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT195 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT195_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT195_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT195_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT195_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT196 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT196_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT196_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT196_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT196_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT197 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT197_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT197_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT197_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT197_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT198 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT198_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT198_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT198_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT198_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT199 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT199_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT199_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT199_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT199_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT200 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT200_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT200_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT200_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT200_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT201 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT201_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT201_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT201_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT201_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT202 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT202_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT202_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT202_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT202_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT203 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT203_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT203_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT203_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT203_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT204 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT204_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT204_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT204_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT204_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT205 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT205_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT205_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT205_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT205_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT206 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT206_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT206_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT206_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT206_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT207 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT207_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT207_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT207_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT207_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT208 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT208_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT208_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT208_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT208_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT209 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT209_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT209_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT209_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT209_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT210 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT210_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT210_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT210_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT210_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT211 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT211_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT211_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT211_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT211_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT212 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT212_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT212_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT212_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT212_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT213 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT213_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT213_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT213_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT213_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT214 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT214_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT214_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT214_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT214_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT215 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT215_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT215_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT215_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT215_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT216 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT216_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT216_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT216_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT216_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT217 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT217_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT217_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT217_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT217_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT218 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT218_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT218_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT218_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT218_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT219 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT219_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT219_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT219_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT219_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT220 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT220_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT220_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT220_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT220_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT221 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT221_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT221_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT221_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT221_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT222 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT222_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT222_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT222_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT222_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT223 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT223_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT223_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT223_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT223_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT224 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT224_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT224_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT224_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT224_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT225 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT225_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT225_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT225_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT225_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT226 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT226_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT226_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT226_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT226_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT227 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT227_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT227_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT227_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT227_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT228 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT228_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT228_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT228_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT228_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT229 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT229_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT229_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT229_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT229_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT230 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT230_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT230_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT230_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT230_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT231 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT231_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT231_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT231_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT231_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT232 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT232_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT232_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT232_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT232_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT233 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT233_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT233_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT233_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT233_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT234 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT234_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT234_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT234_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT234_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT235 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT235_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT235_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT235_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT235_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT236 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT236_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT236_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT236_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT236_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT237 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT237_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT237_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT237_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT237_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT238 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT238_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT238_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT238_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT238_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT239 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT239_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT239_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT239_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT239_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT240 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT240_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT240_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT240_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT240_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT241 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT241_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT241_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT241_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT241_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT242 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT242_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT242_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT242_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT242_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT243 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT243_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT243_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT243_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT243_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT244 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT244_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT244_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT244_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT244_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT245 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT245_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT245_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT245_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT245_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT246 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT246_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT246_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT246_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT246_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT247 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT247_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT247_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT247_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT247_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT248 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT248_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT248_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT248_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT248_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT249 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT249_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT249_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT249_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT249_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT250 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT250_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT250_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT250_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT250_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT251 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT251_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT251_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT251_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT251_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT252 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT252_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT252_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT252_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT252_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT253 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT253_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT253_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT253_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT253_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT254 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT254_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT254_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT254_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT254_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA2D background CLUT */
    using DMA2D_BGCLUT255 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blue */
    using DMA2D_BGCLUT255_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Green */
    using DMA2D_BGCLUT255_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Red */
    using DMA2D_BGCLUT255_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alpha */
    using DMA2D_BGCLUT255_ALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
