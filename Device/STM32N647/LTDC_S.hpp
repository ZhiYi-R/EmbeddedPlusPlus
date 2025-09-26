/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N647_LTDC_S_HPP
#define EMBEDDED_PP_STM32N647_LTDC_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief LCD-TFT display controller */
namespace STM32N647::LTDC_S {

    /** @brief LTDC synchronization size configuration register */
    using LTDC_SSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief vertical synchronization height (in units of horizontal scan line) */
    using LTDC_SSCR_VSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief horizontal synchronization width (in units of pixel clock period) */
    using LTDC_SSCR_HSW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC back porch configuration register */
    using LTDC_BPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief accumulated Vertical back porch (in units of horizontal scan line) */
    using LTDC_BPCR_AVBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief accumulated horizontal back porch (in units of pixel clock period) */
    using LTDC_BPCR_AHBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC active width configuration register */
    using LTDC_AWCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief accumulated active height (in units of horizontal scan line) */
    using LTDC_AWCR_AAH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief accumulated active width (in units of pixel clock period) */
    using LTDC_AWCR_AAW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC total width configuration register */
    using LTDC_TWCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief total height (in units of horizontal scan line) */
    using LTDC_TWCR_TOTALH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief total width (in units of pixel clock period) */
    using LTDC_TWCR_TOTALW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC global control register */
    using LTDC_GCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC global enable */
    using LTDC_GCR_LTDCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC disabled (value: 0)
     *          - B_0x1: LTDC enabled (value: 1)
     */
        /** @brief LTDC disabled */
    constexpr std::uint32_t LTDC_GCR_LTDCEN_B_0x0 = 0;
        /** @brief LTDC enabled */
    constexpr std::uint32_t LTDC_GCR_LTDCEN_B_0x1 = 1;

    /** @brief Gamma correction enable */
    using LTDC_GCR_GAMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gamma correction disabled (pixels bypass the gamma operator) (value: 0)
     *          - B_0x1: Gamma correction enabled (value: 1)
     */
        /** @brief Gamma correction disabled (pixels bypass the gamma operator) */
    constexpr std::uint32_t LTDC_GCR_GAMEN_B_0x0 = 0;
        /** @brief Gamma correction enabled */
    constexpr std::uint32_t LTDC_GCR_GAMEN_B_0x1 = 1;

    /** @brief dither blue width */
    using LTDC_GCR_DBW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief dither green width */
    using LTDC_GCR_DGW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief dither red width */
    using LTDC_GCR_DRW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief dither enable */
    using LTDC_GCR_DEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: dither disabled (value: 0)
     *          - B_0x1: dither enabled (value: 1)
     */
        /** @brief dither disabled */
    constexpr std::uint32_t LTDC_GCR_DEN_B_0x0 = 0;
        /** @brief dither enabled */
    constexpr std::uint32_t LTDC_GCR_DEN_B_0x1 = 1;

    /** @brief CRC enable */
    using LTDC_GCR_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC disabled (value: 0)
     *          - B_0x1: CRC enabled (value: 1)
     */
        /** @brief CRC disabled */
    constexpr std::uint32_t LTDC_GCR_CRCEN_B_0x0 = 0;
        /** @brief CRC enabled */
    constexpr std::uint32_t LTDC_GCR_CRCEN_B_0x1 = 1;

    /** @brief single-frame mode: mode enable */
    using LTDC_GCR_SFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: single-frame disabled: a trigger (on SFSWTR) generates a continuous flow. (value: 0)
     *          - B_0x1: single-frame enabled: a trigger (on SFSWTR) generates a single frame. (value: 1)
     */
        /** @brief single-frame disabled: a trigger (on SFSWTR) generates a continuous flow. */
    constexpr std::uint32_t LTDC_GCR_SFEN_B_0x0 = 0;
        /** @brief single-frame enabled: a trigger (on SFSWTR) generates a single frame. */
    constexpr std::uint32_t LTDC_GCR_SFEN_B_0x1 = 1;

    /** @brief single-frame mode: software trigger */
    using LTDC_GCR_SFSWTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (value: 0)
     *          - B_0x1: triggers one frame (value: 1)
     */
        /** @brief no action */
    constexpr std::uint32_t LTDC_GCR_SFSWTR_B_0x0 = 0;
        /** @brief triggers one frame */
    constexpr std::uint32_t LTDC_GCR_SFSWTR_B_0x1 = 1;

    /** @brief pixel clock polarity */
    using LTDC_GCR_PCPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the pixel and sync data are generated at the rising-edge of the output LCD_CLK clock. (value: 0)
     *          - B_0x1: the pixel and sync data are generated at the falling-edge of the output LCD_CLK clock. (value: 1)
     */
        /** @brief the pixel and sync data are generated at the rising-edge of the output LCD_CLK clock. */
    constexpr std::uint32_t LTDC_GCR_PCPOL_B_0x0 = 0;
        /** @brief the pixel and sync data are generated at the falling-edge of the output LCD_CLK clock. */
    constexpr std::uint32_t LTDC_GCR_PCPOL_B_0x1 = 1;

    /** @brief blanking (no data/pixel) polarity */
    using LTDC_GCR_DEPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: blanking (no data/pixel) polarity is active low. (value: 0)
     *          - B_0x1: blanking (no data/pixel) polarity is active high. (value: 1)
     */
        /** @brief blanking (no data/pixel) polarity is active low. */
    constexpr std::uint32_t LTDC_GCR_DEPOL_B_0x0 = 0;
        /** @brief blanking (no data/pixel) polarity is active high. */
    constexpr std::uint32_t LTDC_GCR_DEPOL_B_0x1 = 1;

    /** @brief vertical synchronization polarity */
    using LTDC_GCR_VSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: vertical synchronization is active low. (value: 0)
     *          - B_0x1: vertical synchronization is active high. (value: 1)
     */
        /** @brief vertical synchronization is active low. */
    constexpr std::uint32_t LTDC_GCR_VSPOL_B_0x0 = 0;
        /** @brief vertical synchronization is active high. */
    constexpr std::uint32_t LTDC_GCR_VSPOL_B_0x1 = 1;

    /** @brief horizontal synchronization polarity */
    using LTDC_GCR_HSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: horizontal synchronization polarity is active low. (value: 0)
     *          - B_0x1: horizontal synchronization polarity is active high. (value: 1)
     */
        /** @brief horizontal synchronization polarity is active low. */
    constexpr std::uint32_t LTDC_GCR_HSPOL_B_0x0 = 0;
        /** @brief horizontal synchronization polarity is active high. */
    constexpr std::uint32_t LTDC_GCR_HSPOL_B_0x1 = 1;

    /** @brief LTDC global configuration 1 register */
    using LTDC_GC1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief width of blue channel output */
    using LTDC_GC1R_WBCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief width of green channel output */
    using LTDC_GC1R_WGCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief width of red channel output */
    using LTDC_GC1R_WRCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief precise blending ability */
    using LTDC_GC1R_PRBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief dithering technique implemented */
    using LTDC_GC1R_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no dithering (value: 0)
     *          - B_0x1: ordered 4x4 Bayer (value: 1)
     *          - B_0x3: pseudo-random LFSR (value: 3)
     */
        /** @brief no dithering */
    constexpr std::uint32_t LTDC_GC1R_DT_B_0x0 = 0;
        /** @brief ordered 4x4 Bayer */
    constexpr std::uint32_t LTDC_GC1R_DT_B_0x1 = 1;
        /** @brief pseudo-random LFSR */
    constexpr std::uint32_t LTDC_GC1R_DT_B_0x3 = 3;

    /** @brief gamma correction technique implemented */
    using LTDC_GC1R_GCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no gamma (value: 0)
     *          - B_0x1: gamma with 256 samples (value: 1)
     *          - B_0x2: gamma with 8 interpolated segments (value: 2)
     */
        /** @brief no gamma */
    constexpr std::uint32_t LTDC_GC1R_GCT_B_0x0 = 0;
        /** @brief gamma with 256 samples */
    constexpr std::uint32_t LTDC_GC1R_GCT_B_0x1 = 1;
        /** @brief gamma with 8 interpolated segments */
    constexpr std::uint32_t LTDC_GC1R_GCT_B_0x2 = 2;

    /** @brief shadow registers ability */
    using LTDC_GC1R_SHRA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief background color programmability (unique color blended as background) */
    using LTDC_GC1R_BCP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief background blending ability */
    using LTDC_GC1R_BBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line-IRQ: line position programmability */
    using LTDC_GC1R_LNIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief timing programmability */
    using LTDC_GC1R_TP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief sync polarity programmability */
    using LTDC_GC1R_SPP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief dither width programmability */
    using LTDC_GC1R_DWP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief status register ability */
    using LTDC_GC1R_STRA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configuration reading mode ability */
    using LTDC_GC1R_CRMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blind mode ability */
    using LTDC_GC1R_BMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC global configuration 2 register */
    using LTDC_GC2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief background layer ability (pixels of background layer are read from memory) */
    using LTDC_GC2R_BLA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief slave timings synchronization ability */
    using LTDC_GC2R_STSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief dual-view ability */
    using LTDC_GC2R_DVA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secondary RGB output port ability */
    using LTDC_GC2R_DPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief bus width (log2 of number of bytes) */
    using LTDC_GC2R_BW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: 32-bit bus (value: 2)
     *          - B_0x3: 64-bit bus (value: 3)
     *          - B_0x4: 128-bit bus (value: 4)
     */
        /** @brief 32-bit bus */
    constexpr std::uint32_t LTDC_GC2R_BW_B_0x2 = 2;
        /** @brief 64-bit bus */
    constexpr std::uint32_t LTDC_GC2R_BW_B_0x3 = 3;
        /** @brief 128-bit bus */
    constexpr std::uint32_t LTDC_GC2R_BW_B_0x4 = 4;

    /** @brief external display control ability */
    using LTDC_GC2R_EDCA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output conversion ability (RGB to YCbCr) */
    using LTDC_GC2R_OCA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXIID ability */
    using LTDC_GC2R_AXIIDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rotation support ability */
    using LTDC_GC2R_ROTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief second interrupt set ability */
    using LTDC_GC2R_SISA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: second interrupt set not available (value: 0)
     *          - B_0x1: second interrupt set available (value: 1)
     */
        /** @brief second interrupt set not available */
    constexpr std::uint32_t LTDC_GC2R_SISA_B_0x0 = 0;
        /** @brief second interrupt set available */
    constexpr std::uint32_t LTDC_GC2R_SISA_B_0x1 = 1;

    /** @brief single frame mode ability */
    using LTDC_GC2R_SFA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: single frame not available (value: 0)
     *          - B_0x1: single frame available (value: 1)
     */
        /** @brief single frame not available */
    constexpr std::uint32_t LTDC_GC2R_SFA_B_0x0 = 0;
        /** @brief single frame available */
    constexpr std::uint32_t LTDC_GC2R_SFA_B_0x1 = 1;

    /** @brief CRC ability */
    using LTDC_GC2R_CRCA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC no computation available (value: 0)
     *          - B_0x1: CRC computation available (value: 1)
     */
        /** @brief CRC no computation available */
    constexpr std::uint32_t LTDC_GC2R_CRCA_B_0x0 = 0;
        /** @brief CRC computation available */
    constexpr std::uint32_t LTDC_GC2R_CRCA_B_0x1 = 1;

    /** @brief blending order ability */
    using LTDC_GC2R_BOA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: blending order fixed (value: 0)
     *          - B_0x1: blending order configurable (value: 1)
     */
        /** @brief blending order fixed */
    constexpr std::uint32_t LTDC_GC2R_BOA_B_0x0 = 0;
        /** @brief blending order configurable */
    constexpr std::uint32_t LTDC_GC2R_BOA_B_0x1 = 1;

    /** @brief LTDC shadow reload configuration register */
    using LTDC_SRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief immediate reload trigger */
    using LTDC_SRCR_IMR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: The shadow registers are reloaded immediately. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_SRCR_IMR_B_0x0 = 0;
        /** @brief The shadow registers are reloaded immediately. */
    constexpr std::uint32_t LTDC_SRCR_IMR_B_0x1 = 1;

    /** @brief vertical blanking reload request */
    using LTDC_SRCR_VBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: The shadow registers are reloaded during the vertical blanking period (at the beginning of the first line after the active display area). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_SRCR_VBR_B_0x0 = 0;
        /** @brief The shadow registers are reloaded during the vertical blanking period (at the beginning of the first line after the active display area). */
    constexpr std::uint32_t LTDC_SRCR_VBR_B_0x1 = 1;

    /** @brief LTDC gamma correction configuration register */
    using LTDC_GCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief address of the R,G,B table where the COMP component is written */
    using LTDC_GCCR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color component to be written, in either (or all) the R,G,B tables */
    using LTDC_GCCR_COMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief write trigger to the blue table */
    using LTDC_GCCR_BEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action done (value: 0)
     *          - B_0x1: COMP is written at ADDR in the blue table. (value: 1)
     */
        /** @brief no action done */
    constexpr std::uint32_t LTDC_GCCR_BEN_B_0x0 = 0;
        /** @brief COMP is written at ADDR in the blue table. */
    constexpr std::uint32_t LTDC_GCCR_BEN_B_0x1 = 1;

    /** @brief write trigger to the green table */
    using LTDC_GCCR_GEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action done (value: 0)
     *          - B_0x1: COMP is written at ADDR in the green table. (value: 1)
     */
        /** @brief no action done */
    constexpr std::uint32_t LTDC_GCCR_GEN_B_0x0 = 0;
        /** @brief COMP is written at ADDR in the green table. */
    constexpr std::uint32_t LTDC_GCCR_GEN_B_0x1 = 1;

    /** @brief write trigger to the red table */
    using LTDC_GCCR_REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action done (value: 0)
     *          - B_0x1: COMP is written at ADDR in the red table. (value: 1)
     */
        /** @brief no action done */
    constexpr std::uint32_t LTDC_GCCR_REN_B_0x0 = 0;
        /** @brief COMP is written at ADDR in the red table. */
    constexpr std::uint32_t LTDC_GCCR_REN_B_0x1 = 1;

    /** @brief LTDC background color configuration register */
    using LTDC_BCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief background color blue value */
    using LTDC_BCCR_BCBLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief background color green value */
    using LTDC_BCCR_BCGREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief background color red value */
    using LTDC_BCCR_BCRED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC interrupt enable register */
    using LTDC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line interrupt enable */
    using LTDC_IER_LIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: line interrupt disabled (value: 0)
     *          - B_0x1: line interrupt enabled (value: 1)
     */
        /** @brief line interrupt disabled */
    constexpr std::uint32_t LTDC_IER_LIE_B_0x0 = 0;
        /** @brief line interrupt enabled */
    constexpr std::uint32_t LTDC_IER_LIE_B_0x1 = 1;

    /** @brief FIFO underrun warning interrupt enable */
    using LTDC_IER_FUWIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO underrun interrupt disabled (value: 0)
     *          - B_0x1: FIFO underrun Interrupt enabled (value: 1)
     */
        /** @brief FIFO underrun interrupt disabled */
    constexpr std::uint32_t LTDC_IER_FUWIE_B_0x0 = 0;
        /** @brief FIFO underrun Interrupt enabled */
    constexpr std::uint32_t LTDC_IER_FUWIE_B_0x1 = 1;

    /** @brief Transfer Error interrupt enable */
    using LTDC_IER_TERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: transfer error interrupt disabled (value: 0)
     *          - B_0x1: transfer error interrupt enabled (value: 1)
     */
        /** @brief transfer error interrupt disabled */
    constexpr std::uint32_t LTDC_IER_TERRIE_B_0x0 = 0;
        /** @brief transfer error interrupt enabled */
    constexpr std::uint32_t LTDC_IER_TERRIE_B_0x1 = 1;

    /** @brief Register reload interrupt enable */
    using LTDC_IER_RRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: register reload interrupt disabled (value: 0)
     *          - B_0x1: register reload interrupt enabled (value: 1)
     */
        /** @brief register reload interrupt disabled */
    constexpr std::uint32_t LTDC_IER_RRIE_B_0x0 = 0;
        /** @brief register reload interrupt enabled */
    constexpr std::uint32_t LTDC_IER_RRIE_B_0x1 = 1;

    /** @brief FIFO underrun interrupt enable */
    using LTDC_IER_FUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO underrun interrupt disabled (value: 0)
     *          - B_0x1: FIFO underrun Interrupt enabled (value: 1)
     */
        /** @brief FIFO underrun interrupt disabled */
    constexpr std::uint32_t LTDC_IER_FUIE_B_0x0 = 0;
        /** @brief FIFO underrun Interrupt enabled */
    constexpr std::uint32_t LTDC_IER_FUIE_B_0x1 = 1;

    /** @brief CRC error interrupt enable */
    using LTDC_IER_CRCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC error disabled (value: 0)
     *          - B_0x1: CRC error interrupt enabled (value: 1)
     */
        /** @brief CRC error disabled */
    constexpr std::uint32_t LTDC_IER_CRCIE_B_0x0 = 0;
        /** @brief CRC error interrupt enabled */
    constexpr std::uint32_t LTDC_IER_CRCIE_B_0x1 = 1;

    /** @brief LTDC interrupt status register */
    using LTDC_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line interrupt flag */
    using LTDC_ISR_LIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no line interrupt generated (value: 0)
     *          - B_0x1: line interrupt generated when a programmed line is reached (value: 1)
     */
        /** @brief no line interrupt generated */
    constexpr std::uint32_t LTDC_ISR_LIF_B_0x0 = 0;
        /** @brief line interrupt generated when a programmed line is reached */
    constexpr std::uint32_t LTDC_ISR_LIF_B_0x1 = 1;

    /** @brief FIFO underrun warning interrupt flag */
    using LTDC_ISR_FUWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no FIFO underrun warning interrupt generated (value: 0)
     *          - B_0x1: FIFO underrun warning interrupt generated, if one of the layer FIFO is empty and pixel data is read from the FIFO (value: 1)
     */
        /** @brief no FIFO underrun warning interrupt generated */
    constexpr std::uint32_t LTDC_ISR_FUWIF_B_0x0 = 0;
        /** @brief FIFO underrun warning interrupt generated, if one of the layer FIFO is empty and pixel data is read from the FIFO */
    constexpr std::uint32_t LTDC_ISR_FUWIF_B_0x1 = 1;

    /** @brief Transfer error interrupt flag */
    using LTDC_ISR_TERRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer error interrupt generated (value: 0)
     *          - B_0x1: transfer error interrupt generated when a bus error occurs (value: 1)
     */
        /** @brief no transfer error interrupt generated */
    constexpr std::uint32_t LTDC_ISR_TERRIF_B_0x0 = 0;
        /** @brief transfer error interrupt generated when a bus error occurs */
    constexpr std::uint32_t LTDC_ISR_TERRIF_B_0x1 = 1;

    /** @brief Register reload interrupt flag */
    using LTDC_ISR_RRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no register reload interrupt generated (value: 0)
     *          - B_0x1: register reload interrupt generated when a vertical blanking reload occurs (and the first line after the active area is reached) (value: 1)
     */
        /** @brief no register reload interrupt generated */
    constexpr std::uint32_t LTDC_ISR_RRIF_B_0x0 = 0;
        /** @brief register reload interrupt generated when a vertical blanking reload occurs (and the first line after the active area is reached) */
    constexpr std::uint32_t LTDC_ISR_RRIF_B_0x1 = 1;

    /** @brief FIFO underrun interrupt flag */
    using LTDC_ISR_FUIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no FIFO underrun interrupt generated (value: 0)
     *          - B_0x1: FIFO underrun interrupt generated, if one of the layer FIFOs is empty and many pixel data are read from the FIFO (value: 1)
     */
        /** @brief no FIFO underrun interrupt generated */
    constexpr std::uint32_t LTDC_ISR_FUIF_B_0x0 = 0;
        /** @brief FIFO underrun interrupt generated, if one of the layer FIFOs is empty and many pixel data are read from the FIFO */
    constexpr std::uint32_t LTDC_ISR_FUIF_B_0x1 = 1;

    /** @brief CRC error interrupt flag */
    using LTDC_ISR_CRCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no CRC error interrupt generated (value: 0)
     *          - B_0x1: CRC error interrupt generated when a bus error occurs (value: 1)
     */
        /** @brief no CRC error interrupt generated */
    constexpr std::uint32_t LTDC_ISR_CRCIF_B_0x0 = 0;
        /** @brief CRC error interrupt generated when a bus error occurs */
    constexpr std::uint32_t LTDC_ISR_CRCIF_B_0x1 = 1;

    /** @brief LTDC interrupt clear register */
    using LTDC_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clears the line interrupt flag */
    using LTDC_ICR_CLIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the LIF flag in LTDC_ISR. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR_CLIF_B_0x0 = 0;
        /** @brief clears the LIF flag in LTDC_ISR. */
    constexpr std::uint32_t LTDC_ICR_CLIF_B_0x1 = 1;

    /** @brief clears the FIFO underrun warning interrupt flag */
    using LTDC_ICR_CFUWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the FUWIF flag in LTDC_ISR. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR_CFUWIF_B_0x0 = 0;
        /** @brief clears the FUWIF flag in LTDC_ISR. */
    constexpr std::uint32_t LTDC_ICR_CFUWIF_B_0x1 = 1;

    /** @brief clears the transfer error interrupt flag */
    using LTDC_ICR_CTERRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the TERRIF flag in LTDC_ISR. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR_CTERRIF_B_0x0 = 0;
        /** @brief clears the TERRIF flag in LTDC_ISR. */
    constexpr std::uint32_t LTDC_ICR_CTERRIF_B_0x1 = 1;

    /** @brief clears register reload interrupt flag */
    using LTDC_ICR_CRRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the RRIF flag in LTDC_ISR. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR_CRRIF_B_0x0 = 0;
        /** @brief clears the RRIF flag in LTDC_ISR. */
    constexpr std::uint32_t LTDC_ICR_CRRIF_B_0x1 = 1;

    /** @brief clears the FIFO underrun interrupt flag */
    using LTDC_ICR_CFUIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the FUIF flag in LTDC_ISR. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR_CFUIF_B_0x0 = 0;
        /** @brief clears the FUIF flag in LTDC_ISR. */
    constexpr std::uint32_t LTDC_ICR_CFUIF_B_0x1 = 1;

    /** @brief clears the CRC error interrupt flag */
    using LTDC_ICR_CCRCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the CRCIF flag in LTDC_ISR. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR_CCRCIF_B_0x0 = 0;
        /** @brief clears the CRCIF flag in LTDC_ISR. */
    constexpr std::uint32_t LTDC_ICR_CCRCIF_B_0x1 = 1;

    /** @brief LTDC line interrupt position configuration register */
    using LTDC_LIPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line interrupt position */
    using LTDC_LIPCR_LIPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC current position status register */
    using LTDC_CPSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief current Y position */
    using LTDC_CPSR_CYPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief current X position */
    using LTDC_CPSR_CXPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC current display status register */
    using LTDC_CDSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief vertical data enable display status */
    using LTDC_CDSR_VDES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: active low (value: 0)
     *          - B_0x1: active high (value: 1)
     */
        /** @brief active low */
    constexpr std::uint32_t LTDC_CDSR_VDES_B_0x0 = 0;
        /** @brief active high */
    constexpr std::uint32_t LTDC_CDSR_VDES_B_0x1 = 1;

    /** @brief horizontal data enable display status */
    using LTDC_CDSR_HDES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: active low (value: 0)
     *          - B_0x1: active high (value: 1)
     */
        /** @brief active low */
    constexpr std::uint32_t LTDC_CDSR_HDES_B_0x0 = 0;
        /** @brief active high */
    constexpr std::uint32_t LTDC_CDSR_HDES_B_0x1 = 1;

    /** @brief vertical synchronization display status */
    using LTDC_CDSR_VSYNCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: active low (value: 0)
     *          - B_0x1: active high (value: 1)
     */
        /** @brief active low */
    constexpr std::uint32_t LTDC_CDSR_VSYNCS_B_0x0 = 0;
        /** @brief active high */
    constexpr std::uint32_t LTDC_CDSR_VSYNCS_B_0x1 = 1;

    /** @brief horizontal synchronization display status */
    using LTDC_CDSR_HSYNCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: active low (value: 0)
     *          - B_0x1: active high (value: 1)
     */
        /** @brief active low */
    constexpr std::uint32_t LTDC_CDSR_HSYNCS_B_0x0 = 0;
        /** @brief active high */
    constexpr std::uint32_t LTDC_CDSR_HSYNCS_B_0x1 = 1;

    /** @brief LTDC external display control register */
    using LTDC_EDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output conversion to YCbCr 422 enable */
    using LTDC_EDCR_OCYEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: conversion disabled (value: 0)
     *          - B_0x1: conversion enabled (value: 1)
     */
        /** @brief conversion disabled */
    constexpr std::uint32_t LTDC_EDCR_OCYEN_B_0x0 = 0;
        /** @brief conversion enabled */
    constexpr std::uint32_t LTDC_EDCR_OCYEN_B_0x1 = 1;

    /** @brief output conversion to YCbCr 422 */
    using LTDC_EDCR_OCYSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: use ITU-R BT.601 set (for typically SDTV analog-like displays) (value: 0)
     *          - B_0x1: use ITU-R BT.709 set (for typically HDTV digital-like displays) (value: 1)
     */
        /** @brief use ITU-R BT.601 set (for typically SDTV analog-like displays) */
    constexpr std::uint32_t LTDC_EDCR_OCYSEL_B_0x0 = 0;
        /** @brief use ITU-R BT.709 set (for typically HDTV digital-like displays) */
    constexpr std::uint32_t LTDC_EDCR_OCYSEL_B_0x1 = 1;

    /** @brief output conversion to YCbCr 422 */
    using LTDC_EDCR_OCYCO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cb is output first (Y0Cb, then Y1Cr, Y2Cb and so on). (value: 0)
     *          - B_0x1: Cr is output first (Y0Cr, then Y1Cb, Y2Cr and so on). (value: 1)
     */
        /** @brief Cb is output first (Y0Cb, then Y1Cr, Y2Cb and so on). */
    constexpr std::uint32_t LTDC_EDCR_OCYCO_B_0x0 = 0;
        /** @brief Cr is output first (Y0Cr, then Y1Cb, Y2Cr and so on). */
    constexpr std::uint32_t LTDC_EDCR_OCYCO_B_0x1 = 1;

    /** @brief LTDC interrupt enable register 2 */
    using LTDC_IER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line interrupt enable */
    using LTDC_IER2_LIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: line interrupt disabled (value: 0)
     *          - B_0x1: line interrupt enabled (value: 1)
     */
        /** @brief line interrupt disabled */
    constexpr std::uint32_t LTDC_IER2_LIE_B_0x0 = 0;
        /** @brief line interrupt enabled */
    constexpr std::uint32_t LTDC_IER2_LIE_B_0x1 = 1;

    /** @brief FIFO underrun warning interrupt enable */
    using LTDC_IER2_FUWIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO underrun interrupt disabled (value: 0)
     *          - B_0x1: FIFO underrun Interrupt enabled (value: 1)
     */
        /** @brief FIFO underrun interrupt disabled */
    constexpr std::uint32_t LTDC_IER2_FUWIE_B_0x0 = 0;
        /** @brief FIFO underrun Interrupt enabled */
    constexpr std::uint32_t LTDC_IER2_FUWIE_B_0x1 = 1;

    /** @brief Transfer error interrupt enable */
    using LTDC_IER2_TERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: transfer error interrupt disabled (value: 0)
     *          - B_0x1: transfer error interrupt enabled (value: 1)
     */
        /** @brief transfer error interrupt disabled */
    constexpr std::uint32_t LTDC_IER2_TERRIE_B_0x0 = 0;
        /** @brief transfer error interrupt enabled */
    constexpr std::uint32_t LTDC_IER2_TERRIE_B_0x1 = 1;

    /** @brief Register reload interrupt enable */
    using LTDC_IER2_RRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: register reload interrupt disabled (value: 0)
     *          - B_0x1: register reload interrupt enabled (value: 1)
     */
        /** @brief register reload interrupt disabled */
    constexpr std::uint32_t LTDC_IER2_RRIE_B_0x0 = 0;
        /** @brief register reload interrupt enabled */
    constexpr std::uint32_t LTDC_IER2_RRIE_B_0x1 = 1;

    /** @brief FIFO underrun interrupt enable */
    using LTDC_IER2_FUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO underrun interrupt disabled (value: 0)
     *          - B_0x1: FIFO underrun Interrupt enabled (value: 1)
     */
        /** @brief FIFO underrun interrupt disabled */
    constexpr std::uint32_t LTDC_IER2_FUIE_B_0x0 = 0;
        /** @brief FIFO underrun Interrupt enabled */
    constexpr std::uint32_t LTDC_IER2_FUIE_B_0x1 = 1;

    /** @brief CRC error interrupt enable */
    using LTDC_IER2_CRCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC error disabled (value: 0)
     *          - B_0x1: CRC error interrupt enabled (value: 1)
     */
        /** @brief CRC error disabled */
    constexpr std::uint32_t LTDC_IER2_CRCIE_B_0x0 = 0;
        /** @brief CRC error interrupt enabled */
    constexpr std::uint32_t LTDC_IER2_CRCIE_B_0x1 = 1;

    /** @brief LTDC interrupt status register 2 */
    using LTDC_ISR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line interrupt flag */
    using LTDC_ISR2_LIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no line interrupt generated (value: 0)
     *          - B_0x1: line interrupt generated when a programmed line is reached (value: 1)
     */
        /** @brief no line interrupt generated */
    constexpr std::uint32_t LTDC_ISR2_LIF_B_0x0 = 0;
        /** @brief line interrupt generated when a programmed line is reached */
    constexpr std::uint32_t LTDC_ISR2_LIF_B_0x1 = 1;

    /** @brief FIFO underrun warning interrupt flag */
    using LTDC_ISR2_FUWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no FIFO underrun warning interrupt generated. (value: 0)
     *          - B_0x1: FIFO underrun warning interrupt generated, if one of the layer FIFO is empty and pixel data is read from the FIFO (value: 1)
     */
        /** @brief no FIFO underrun warning interrupt generated. */
    constexpr std::uint32_t LTDC_ISR2_FUWIF_B_0x0 = 0;
        /** @brief FIFO underrun warning interrupt generated, if one of the layer FIFO is empty and pixel data is read from the FIFO */
    constexpr std::uint32_t LTDC_ISR2_FUWIF_B_0x1 = 1;

    /** @brief Transfer error interrupt flag */
    using LTDC_ISR2_TERRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer error interrupt generated (value: 0)
     *          - B_0x1: transfer error interrupt generated when a bus error occurs (value: 1)
     */
        /** @brief no transfer error interrupt generated */
    constexpr std::uint32_t LTDC_ISR2_TERRIF_B_0x0 = 0;
        /** @brief transfer error interrupt generated when a bus error occurs */
    constexpr std::uint32_t LTDC_ISR2_TERRIF_B_0x1 = 1;

    /** @brief Register reload interrupt flag */
    using LTDC_ISR2_RRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no register reload interrupt generated (value: 0)
     *          - B_0x1: register reload interrupt generated when a vertical blanking reload occurs (and the first line after the active area is reached) (value: 1)
     */
        /** @brief no register reload interrupt generated */
    constexpr std::uint32_t LTDC_ISR2_RRIF_B_0x0 = 0;
        /** @brief register reload interrupt generated when a vertical blanking reload occurs (and the first line after the active area is reached) */
    constexpr std::uint32_t LTDC_ISR2_RRIF_B_0x1 = 1;

    /** @brief FIFO underrun interrupt flag */
    using LTDC_ISR2_FUIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no FIFO underrun interrupt generated. (value: 0)
     *          - B_0x1: FIFO underrun interrupt generated, if one of the layer FIFO is empty and many pixel data are read from the FIFO (value: 1)
     */
        /** @brief no FIFO underrun interrupt generated. */
    constexpr std::uint32_t LTDC_ISR2_FUIF_B_0x0 = 0;
        /** @brief FIFO underrun interrupt generated, if one of the layer FIFO is empty and many pixel data are read from the FIFO */
    constexpr std::uint32_t LTDC_ISR2_FUIF_B_0x1 = 1;

    /** @brief CRC Error interrupt flag */
    using LTDC_ISR2_CRCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no CRC error interrupt generated (value: 0)
     *          - B_0x1: CRC error interrupt generated when a bus error occurs (value: 1)
     */
        /** @brief no CRC error interrupt generated */
    constexpr std::uint32_t LTDC_ISR2_CRCIF_B_0x0 = 0;
        /** @brief CRC error interrupt generated when a bus error occurs */
    constexpr std::uint32_t LTDC_ISR2_CRCIF_B_0x1 = 1;

    /** @brief LTDC interrupt clear register 2 */
    using LTDC_ICR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clears the Line interrupt flag */
    using LTDC_ICR2_CLIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the LIF flag in LTDC_ISR2. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR2_CLIF_B_0x0 = 0;
        /** @brief clears the LIF flag in LTDC_ISR2. */
    constexpr std::uint32_t LTDC_ICR2_CLIF_B_0x1 = 1;

    /** @brief clears the FIFO underrun warning interrupt flag */
    using LTDC_ICR2_CFUWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the FUWIF flag in LTDC_ISR2. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR2_CFUWIF_B_0x0 = 0;
        /** @brief clears the FUWIF flag in LTDC_ISR2. */
    constexpr std::uint32_t LTDC_ICR2_CFUWIF_B_0x1 = 1;

    /** @brief clears the Transfer Error interrupt flag */
    using LTDC_ICR2_CTERRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the TERRIF flag in LTDC_ISR2. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR2_CTERRIF_B_0x0 = 0;
        /** @brief clears the TERRIF flag in LTDC_ISR2. */
    constexpr std::uint32_t LTDC_ICR2_CTERRIF_B_0x1 = 1;

    /** @brief clears register reload interrupt flag */
    using LTDC_ICR2_CRRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the RRIF flag in LTDC_ISR2. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR2_CRRIF_B_0x0 = 0;
        /** @brief clears the RRIF flag in LTDC_ISR2. */
    constexpr std::uint32_t LTDC_ICR2_CRRIF_B_0x1 = 1;

    /** @brief clears the FIFO underrun interrupt flag */
    using LTDC_ICR2_CFUIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the FUIF flag in LTDC_ISR2. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR2_CFUIF_B_0x0 = 0;
        /** @brief clears the FUIF flag in LTDC_ISR2. */
    constexpr std::uint32_t LTDC_ICR2_CFUIF_B_0x1 = 1;

    /** @brief clears the CRC error interrupt flag */
    using LTDC_ICR2_CCRCIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the CRCIF flag in LTDC_ISR2. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR2_CCRCIF_B_0x0 = 0;
        /** @brief clears the CRCIF flag in LTDC_ISR2. */
    constexpr std::uint32_t LTDC_ICR2_CCRCIF_B_0x1 = 1;

    /** @brief LTDC line interrupt position configuration register 2 */
    using LTDC_LIPCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line interrupt position */
    using LTDC_LIPCR2_LIPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC expected CRC register */
    using LTDC_ECRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief expected CRC of frame */
    using LTDC_ECRCR_ECRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC computed CRC register */
    using LTDC_CCRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief computed CRC of frame */
    using LTDC_CCRCR_CCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC FIFO underrun threshold register */
    using LTDC_FUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief threshold to trigger a FIFO underrun interrupt (per FIFO word, 64 bits) */
    using LTDC_FUTR_THRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx configuration 0 register */
    using LTDC_L1C0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key transparency ability */
    using LTDC_L1C0R_CKTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer duplication ability */
    using LTDC_L1C0R_CFBDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer pitch ability */
    using LTDC_L1C0R_CFBPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief alpha plane ability */
    using LTDC_L1C0R_APA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color programmability */
    using LTDC_L1C0R_DCP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief windowing ability */
    using LTDC_L1C0R_WINA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT ability */
    using LTDC_L1C0R_CLUTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key replace ability */
    using LTDC_L1C0R_CKRA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: 1.0 */
    using LTDC_L1C0R_F21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: 0.0 */
    using LTDC_L1C0R_F20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: pixel_alpha */
    using LTDC_L1C0R_F2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: 1.0 - pixel_alpha */
    using LTDC_L1C0R_F21P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: constant_alpha */
    using LTDC_L1C0R_F2C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: 1.0 - constant_alpha */
    using LTDC_L1C0R_F21C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: pixel_alpha * constant_alpha */
    using LTDC_L1C0R_F2PC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: 1.0 - (pixel_alpha * constant_alpha) */
    using LTDC_L1C0R_F21PC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: 1.0 */
    using LTDC_L1C0R_F11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1,ability for: 0.0 */
    using LTDC_L1C0R_F10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: pixel_alpha */
    using LTDC_L1C0R_F1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: 1.0 - pixel_alpha */
    using LTDC_L1C0R_F11P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: constant_alpha */
    using LTDC_L1C0R_F1C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: 1.0 - constant_alpha */
    using LTDC_L1C0R_F11C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: pixel_alpha * constant_alpha */
    using LTDC_L1C0R_F1PC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: 1.0 - (pixel_alpha * constant_alpha) */
    using LTDC_L1C0R_F11PC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief flexible pixel format, ability */
    using LTDC_L1C0R_FF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for rgb888 */
    using LTDC_L1C0R_RGB888 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for bgr565 */
    using LTDC_L1C0R_BGR565 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for rgb565 */
    using LTDC_L1C0R_RGB565 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for bgra8888 */
    using LTDC_L1C0R_BGRA888 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for rgba8888 */
    using LTDC_L1C0R_RGBA8888 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for abgr8888 */
    using LTDC_L1C0R_ABGR8888 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for argb8888 */
    using LTDC_L1C0R_ARGB8888 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx configuration 1 register */
    using LTDC_L1C1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief YCbCr 422 interleaved ability for that layer */
    using LTDC_L1C1R_YIA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interleaved not available (value: 0)
     *          - B_0x1: interleaved available (value: 1)
     */
        /** @brief interleaved not available */
    constexpr std::uint32_t LTDC_L1C1R_YIA_B_0x0 = 0;
        /** @brief interleaved available */
    constexpr std::uint32_t LTDC_L1C1R_YIA_B_0x1 = 1;

    /** @brief YCbCr 420 semi-planar ability for that layer */
    using LTDC_L1C1R_YSPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: semi-planar not available (value: 0)
     *          - B_0x1: semi-planar available (value: 1)
     */
        /** @brief semi-planar not available */
    constexpr std::uint32_t LTDC_L1C1R_YSPA_B_0x0 = 0;
        /** @brief semi-planar available */
    constexpr std::uint32_t LTDC_L1C1R_YSPA_B_0x1 = 1;

    /** @brief YCbCr 420 full-planar ability for that layer */
    using LTDC_L1C1R_YFPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: full planar not available (value: 0)
     *          - B_0x1: full planar available (value: 1)
     */
        /** @brief full planar not available */
    constexpr std::uint32_t LTDC_L1C1R_YFPA_B_0x0 = 0;
        /** @brief full planar available */
    constexpr std::uint32_t LTDC_L1C1R_YFPA_B_0x1 = 1;

    /** @brief scaling ability for that layer */
    using LTDC_L1C1R_SCA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: scaling not available (value: 0)
     *          - B_0x1: scaling available (value: 1)
     */
        /** @brief scaling not available */
    constexpr std::uint32_t LTDC_L1C1R_SCA_B_0x0 = 0;
        /** @brief scaling available */
    constexpr std::uint32_t LTDC_L1C1R_SCA_B_0x1 = 1;

    /** @brief LTDC layerx reload control register */
    using LTDC_L1RCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief immediate reload trigger */
    using LTDC_L1RCR_IMR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: The shadow registers are reloaded immediately. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_L1RCR_IMR_B_0x0 = 0;
        /** @brief The shadow registers are reloaded immediately. */
    constexpr std::uint32_t LTDC_L1RCR_IMR_B_0x1 = 1;

    /** @brief vertical blanking reload request */
    using LTDC_L1RCR_VBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: The shadow registers are reloaded during the vertical blanking period (at the beginning of the first line after the active display area). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_L1RCR_VBR_B_0x0 = 0;
        /** @brief The shadow registers are reloaded during the vertical blanking period (at the beginning of the first line after the active display area). */
    constexpr std::uint32_t LTDC_L1RCR_VBR_B_0x1 = 1;

    /** @brief shadow reload control, global (centralized) reload masked */
    using LTDC_L1RCR_GRMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: global reload active for this layer (control from LTDC_SRCR enabled) (value: 0)
     *          - B_0x1: global reload masked for this layer (control from LTDC_SRCR disabled) (value: 1)
     */
        /** @brief global reload active for this layer (control from LTDC_SRCR enabled) */
    constexpr std::uint32_t LTDC_L1RCR_GRMSK_B_0x0 = 0;
        /** @brief global reload masked for this layer (control from LTDC_SRCR disabled) */
    constexpr std::uint32_t LTDC_L1RCR_GRMSK_B_0x1 = 1;

    /** @brief LTDC layerx control register */
    using LTDC_L1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief layer enable */
    using LTDC_L1CR_LEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: layer disabled (value: 0)
     *          - B_0x1: layer enabled (value: 1)
     */
        /** @brief layer disabled */
    constexpr std::uint32_t LTDC_L1CR_LEN_B_0x0 = 0;
        /** @brief layer enabled */
    constexpr std::uint32_t LTDC_L1CR_LEN_B_0x1 = 1;

    /** @brief color keying enable */
    using LTDC_L1CR_CKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: color keying disabled (value: 0)
     *          - B_0x1: color keying enabled: if RGB matches, then the ARGB are set to 0. (value: 1)
     */
        /** @brief color keying disabled */
    constexpr std::uint32_t LTDC_L1CR_CKEN_B_0x0 = 0;
        /** @brief color keying enabled: if RGB matches, then the ARGB are set to 0. */
    constexpr std::uint32_t LTDC_L1CR_CKEN_B_0x1 = 1;

    /** @brief color look-up table enable */
    using LTDC_L1CR_CLUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: color look-up table disabled (value: 0)
     *          - B_0x1: color look-up table enabled (value: 1)
     */
        /** @brief color look-up table disabled */
    constexpr std::uint32_t LTDC_L1CR_CLUTEN_B_0x0 = 0;
        /** @brief color look-up table enabled */
    constexpr std::uint32_t LTDC_L1CR_CLUTEN_B_0x1 = 1;

    /** @brief horizontal mirroring enable */
    using LTDC_L1CR_HMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: mirror disabled (value: 0)
     *          - B_0x1: mirror enabled (if so, the color frame buffer start address has to be set to the last byte of the first line, so for instance: if line is 100 pixels, 24 bpp, then address is set to 299) (value: 1)
     */
        /** @brief mirror disabled */
    constexpr std::uint32_t LTDC_L1CR_HMEN_B_0x0 = 0;
        /** @brief mirror enabled (if so, the color frame buffer start address has to be set to the last byte of the first line, so for instance: if line is 100 pixels, 24 bpp, then address is set to 299) */
    constexpr std::uint32_t LTDC_L1CR_HMEN_B_0x1 = 1;

    /** @brief default color blending enable */
    using LTDC_L1CR_DCBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: blending disabled (value: 0)
     *          - B_0x1: blending enabled (value: 1)
     */
        /** @brief blending disabled */
    constexpr std::uint32_t LTDC_L1CR_DCBEN_B_0x0 = 0;
        /** @brief blending enabled */
    constexpr std::uint32_t LTDC_L1CR_DCBEN_B_0x1 = 1;

    /** @brief LTDC layerx window horizontal position configuration register */
    using LTDC_L1WHPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window horizontal start position */
    using LTDC_L1WHPCR_WHSTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window horizontal stop position */
    using LTDC_L1WHPCR_WHSPPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx window vertical position configuration register */
    using LTDC_L1WVPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window vertical start position */
    using LTDC_L1WVPCR_WVSTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window vertical stop position */
    using LTDC_L1WVPCR_WVSPPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx color keying configuration register */
    using LTDC_L1CKCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key blue value */
    using LTDC_L1CKCR_CKBLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key green value */
    using LTDC_L1CKCR_CKGREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key red value */
    using LTDC_L1CKCR_CKRED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx pixel format configuration register */
    using LTDC_L1PFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format */
    using LTDC_L1PFCR_PF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARGB8888 (32 bpp) (value: 0)
     *          - B_0x1: ABGR888 (32 bpp) (value: 1)
     *          - B_0x2: RGBA888 (32 bpp) (value: 2)
     *          - B_0x3: BGRA8888 (32 bpp) (value: 3)
     *          - B_0x4: RGB565 (16 bpp, A = 255) (value: 4)
     *          - B_0x5: BGR565 (16 bpp, A = 255) (value: 5)
     *          - B_0x6: RGB888 (24 bpp packed, A = 255) (value: 6)
     *          - B_0x7: Flexible pixel format selected (see Section 38.7.50 and Section 38.7.51) (value: 7)
     */
        /** @brief ARGB8888 (32 bpp) */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x0 = 0;
        /** @brief ABGR888 (32 bpp) */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x1 = 1;
        /** @brief RGBA888 (32 bpp) */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x2 = 2;
        /** @brief BGRA8888 (32 bpp) */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x3 = 3;
        /** @brief RGB565 (16 bpp, A = 255) */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x4 = 4;
        /** @brief BGR565 (16 bpp, A = 255) */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x5 = 5;
        /** @brief RGB888 (24 bpp packed, A = 255) */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x6 = 6;
        /** @brief Flexible pixel format selected (see Section 38.7.50 and Section 38.7.51) */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x7 = 7;

    /** @brief LTDC layerx constant alpha configuration register */
    using LTDC_L1CACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief constant alpha */
    using LTDC_L1CACR_CONSTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx default color configuration register */
    using LTDC_L1DCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color blue */
    using LTDC_L1DCCR_DCBLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color green */
    using LTDC_L1DCCR_DCGREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color red */
    using LTDC_L1DCCR_DCRED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color alpha */
    using LTDC_L1DCCR_DCALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx blending factors configuration register */
    using LTDC_L1BFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2 */
    using LTDC_L1BFCR_BF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x5: 1 - constant alpha (value: 5)
     *          - B_0x7: 1 - (pixel alpha x constant alpha) (value: 7)
     */
        /** @brief 1 - constant alpha */
    constexpr std::uint32_t LTDC_L1BFCR_BF2_B_0x5 = 5;
        /** @brief 1 - (pixel alpha x constant alpha) */
    constexpr std::uint32_t LTDC_L1BFCR_BF2_B_0x7 = 7;

    /** @brief blending factor 1 */
    using LTDC_L1BFCR_BF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: constant alpha (value: 4)
     *          - B_0x6: pixel alpha x constant alpha (value: 6)
     */
        /** @brief constant alpha */
    constexpr std::uint32_t LTDC_L1BFCR_BF1_B_0x4 = 4;
        /** @brief pixel alpha x constant alpha */
    constexpr std::uint32_t LTDC_L1BFCR_BF1_B_0x6 = 6;

    /** @brief blending order */
    using LTDC_L1BFCR_BOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: layer set in background (value: 0)
     *          - B_0x1: layer set in foreground (value: 1)
     */
        /** @brief layer set in background */
    constexpr std::uint32_t LTDC_L1BFCR_BOR_B_0x0 = 0;
        /** @brief layer set in foreground */
    constexpr std::uint32_t LTDC_L1BFCR_BOR_B_0x1 = 1;

    /** @brief LTDC layerx burst length configuration register */
    using LTDC_L1BLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief burst length */
    using LTDC_L1BLCR_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: maximum burst length (16 words 64 bits, thus 128 Bytes) (value: 0)
     *          - B_0x01: 1 word (of 64 bits) per burst (value: 1)
     *          - B_0x10: 16 words (of 64 bits) per burst (value: 16)
     */
        /** @brief maximum burst length (16 words 64 bits, thus 128 Bytes) */
    constexpr std::uint32_t LTDC_L1BLCR_BL_B_0x00 = 0;
        /** @brief 1 word (of 64 bits) per burst */
    constexpr std::uint32_t LTDC_L1BLCR_BL_B_0x01 = 1;
        /** @brief 16 words (of 64 bits) per burst */
    constexpr std::uint32_t LTDC_L1BLCR_BL_B_0x10 = 16;

    /** @brief LTDC layerx planar configuration register */
    using LTDC_L1PCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief YCbCr-to-RGB conversion enable */
    using LTDC_L1PCR_YCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: conversion disabled (value: 0)
     *          - B_0x1: YCbCr conversion enabled, using the YCM setting above (value: 1)
     */
        /** @brief conversion disabled */
    constexpr std::uint32_t LTDC_L1PCR_YCEN_B_0x0 = 0;
        /** @brief YCbCr conversion enabled, using the YCM setting above */
    constexpr std::uint32_t LTDC_L1PCR_YCEN_B_0x1 = 1;

    /** @brief YCbCr conversion mode */
    using LTDC_L1PCR_YCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interleaved 422 (Cb and Cr component are replicated horizontally for pixels P and P+1) (value: 0)
     *          - B_0x1: semi-Planar 420: (Cb and Cr component are replicated horizontally and vertically.The layer main configuration defines the access to the Y buffer, and auxiliary registers define the access to the Cb and Cr buffers). (value: 1)
     *          - B_0x2: full-Planar 420: (Cb and Cr component are replicated horizontally and vertically. The layer main configuration defines the access to the Y buffer, and auxiliary registers define the access to the Cb and Cr buffers). (value: 2)
     */
        /** @brief interleaved 422 (Cb and Cr component are replicated horizontally for pixels P and P+1) */
    constexpr std::uint32_t LTDC_L1PCR_YCM_B_0x0 = 0;
        /** @brief semi-Planar 420: (Cb and Cr component are replicated horizontally and vertically.The layer main configuration defines the access to the Y buffer, and auxiliary registers define the access to the Cb and Cr buffers). */
    constexpr std::uint32_t LTDC_L1PCR_YCM_B_0x1 = 1;
        /** @brief full-Planar 420: (Cb and Cr component are replicated horizontally and vertically. The layer main configuration defines the access to the Y buffer, and auxiliary registers define the access to the Cb and Cr buffers). */
    constexpr std::uint32_t LTDC_L1PCR_YCM_B_0x2 = 2;

    /** @brief Y component first */
    using LTDC_L1PCR_YF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Y component disabled (thus Cr or Cb component is on byte 0) (value: 0)
     *          - B_0x1: Y component enabled (thus Y component is on byte 0) (value: 1)
     */
        /** @brief Y component disabled (thus Cr or Cb component is on byte 0) */
    constexpr std::uint32_t LTDC_L1PCR_YF_B_0x0 = 0;
        /** @brief Y component enabled (thus Y component is on byte 0) */
    constexpr std::uint32_t LTDC_L1PCR_YF_B_0x1 = 1;

    /** @brief Cb component first */
    using LTDC_L1PCR_CBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cb disabled (thus Cr component is on byte 0 and 1) (value: 0)
     *          - B_0x1: Cb enabled (thus Cb component is on byte 0 and 1) (value: 1)
     */
        /** @brief Cb disabled (thus Cr component is on byte 0 and 1) */
    constexpr std::uint32_t LTDC_L1PCR_CBF_B_0x0 = 0;
        /** @brief Cb enabled (thus Cb component is on byte 0 and 1) */
    constexpr std::uint32_t LTDC_L1PCR_CBF_B_0x1 = 1;

    /** @brief Odd pixel first */
    using LTDC_L1PCR_OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: odd pixel disabled (thus even pixel on byte 0) (value: 0)
     *          - B_0x1: odd pixel enabled (thus odd pixel on byte 0) (value: 1)
     */
        /** @brief odd pixel disabled (thus even pixel on byte 0) */
    constexpr std::uint32_t LTDC_L1PCR_OF_B_0x0 = 0;
        /** @brief odd pixel enabled (thus odd pixel on byte 0) */
    constexpr std::uint32_t LTDC_L1PCR_OF_B_0x1 = 1;

    /** @brief Y rescale enable for the color dynamic range */
    using LTDC_L1PCR_YREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rescaling disabled (input component thus assumed provided in 0 to 255) (value: 0)
     *          - B_0x1: rescaling enabled (input component thus assumed provided in 16 to 235). (value: 1)
     */
        /** @brief rescaling disabled (input component thus assumed provided in 0 to 255) */
    constexpr std::uint32_t LTDC_L1PCR_YREN_B_0x0 = 0;
        /** @brief rescaling enabled (input component thus assumed provided in 16 to 235). */
    constexpr std::uint32_t LTDC_L1PCR_YREN_B_0x1 = 1;

    /** @brief LTDC layerx color frame buffer address register */
    using LTDC_L1CFBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer start address */
    using LTDC_L1CFBAR_CFBADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx color frame buffer length register */
    using LTDC_L1CFBLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer line length */
    using LTDC_L1CFBLR_CFBLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer pitch in bytes */
    using LTDC_L1CFBLR_CFBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx color frame buffer line number register */
    using LTDC_L1CFBLNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame buffer line number */
    using LTDC_L1CFBLNR_CFBLNBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer1 auxiliary frame buffer address 0 register */
    using LTDC_L1AFBA0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame buffer start address */
    using LTDC_L1AFBA0R_AFBADD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer1 auxiliary frame buffer address 1 register */
    using LTDC_L1AFBA1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief auxiliary frame buffer start address */
    using LTDC_L1AFBA1R_AFBADD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer1 auxiliary frame buffer length register */
    using LTDC_L1AFBLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief auxiliary frame buffer line length */
    using LTDC_L1AFBLR_AFBLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief auxiliary frame buffer pitch in bytes */
    using LTDC_L1AFBLR_AFBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer1 auxiliary frame buffer line number register */
    using LTDC_L1AFBLNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief auxiliary frame buffer line number */
    using LTDC_L1AFBLNR_AFBLNBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx CLUT write register */
    using LTDC_L1CLUTWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blue value */
    using LTDC_L1CLUTWR_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief green value */
    using LTDC_L1CLUTWR_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief red value */
    using LTDC_L1CLUTWR_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT address */
    using LTDC_L1CLUTWR_CLUTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx conversion YCbCr RGB 0 register */
    using LTDC_L1CYR0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cr-to-Red coefficient, with bits 9:8 as positive integer and 7:0 as decimals. */
    using LTDC_L1CYR0R_CR2R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cb-to-Blue coefficient, with bits 9:8 as positive integer and 7:0 as decimals. */
    using LTDC_L1CYR0R_CB2B = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx conversion YCbCr RGB 1 register */
    using LTDC_L1CYR1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cr-to-Green coefficient, with bits 9:8 as positive integer and 7:0 as decimals. */
    using LTDC_L1CYR1R_CR2G = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cb-to-Green coefficient, with bits 9:8 as positive integer and 7:0 as decimals. */
    using LTDC_L1CYR1R_CB2G = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx flexible pixel format 0 register */
    using LTDC_L1FPF0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Location of the Alpha component inside the pixel memory word (in bits) */
    using LTDC_L1FPF0R_APOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Width of the Alpha component (in bits) */
    using LTDC_L1FPF0R_ALEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Location of the Red component inside the pixel memory word (in bits) */
    using LTDC_L1FPF0R_RPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Width of the Red component (in bits) */
    using LTDC_L1FPF0R_RLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx flexible pixel format 1 register */
    using LTDC_L1FPF1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Location of the Green component inside the pixel memory word (in bits) */
    using LTDC_L1FPF1R_GPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Width of the Green component (in bits) */
    using LTDC_L1FPF1R_GLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Location of the Blue component inside the pixel memory word (in bits) */
    using LTDC_L1FPF1R_BPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Width of the Blue component (in bits) */
    using LTDC_L1FPF1R_BLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pixel size (in bytes) */
    using LTDC_L1FPF1R_PSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx configuration 0 register */
    using LTDC_L2C0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key transparency ability */
    using LTDC_L2C0R_CKTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer duplication ability */
    using LTDC_L2C0R_CFBDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer pitch ability */
    using LTDC_L2C0R_CFBPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief alpha plane ability */
    using LTDC_L2C0R_APA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color programmability */
    using LTDC_L2C0R_DCP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief windowing ability */
    using LTDC_L2C0R_WINA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT ability */
    using LTDC_L2C0R_CLUTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key replace ability */
    using LTDC_L2C0R_CKRA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: 1.0 */
    using LTDC_L2C0R_F21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: 0.0 */
    using LTDC_L2C0R_F20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: pixel_alpha */
    using LTDC_L2C0R_F2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: 1.0 - pixel_alpha */
    using LTDC_L2C0R_F21P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: constant_alpha */
    using LTDC_L2C0R_F2C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: 1.0 - constant_alpha */
    using LTDC_L2C0R_F21C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: pixel_alpha * constant_alpha */
    using LTDC_L2C0R_F2PC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2, ability for: 1.0 - (pixel_alpha * constant_alpha) */
    using LTDC_L2C0R_F21PC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: 1.0 */
    using LTDC_L2C0R_F11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1,ability for: 0.0 */
    using LTDC_L2C0R_F10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: pixel_alpha */
    using LTDC_L2C0R_F1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: 1.0 - pixel_alpha */
    using LTDC_L2C0R_F11P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: constant_alpha */
    using LTDC_L2C0R_F1C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: 1.0 - constant_alpha */
    using LTDC_L2C0R_F11C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: pixel_alpha * constant_alpha */
    using LTDC_L2C0R_F1PC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 1, ability for: 1.0 - (pixel_alpha * constant_alpha) */
    using LTDC_L2C0R_F11PC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief flexible pixel format, ability */
    using LTDC_L2C0R_FF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for rgb888 */
    using LTDC_L2C0R_RGB888 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for bgr565 */
    using LTDC_L2C0R_BGR565 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for rgb565 */
    using LTDC_L2C0R_RGB565 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for bgra8888 */
    using LTDC_L2C0R_BGRA888 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for rgba8888 */
    using LTDC_L2C0R_RGBA8888 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for abgr8888 */
    using LTDC_L2C0R_ABGR8888 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format, ability for argb8888 */
    using LTDC_L2C0R_ARGB8888 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx configuration 1 register */
    using LTDC_L2C1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief YCbCr 422 interleaved ability for that layer */
    using LTDC_L2C1R_YIA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interleaved not available (value: 0)
     *          - B_0x1: interleaved available (value: 1)
     */
        /** @brief interleaved not available */
    constexpr std::uint32_t LTDC_L2C1R_YIA_B_0x0 = 0;
        /** @brief interleaved available */
    constexpr std::uint32_t LTDC_L2C1R_YIA_B_0x1 = 1;

    /** @brief YCbCr 420 semi-planar ability for that layer */
    using LTDC_L2C1R_YSPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: semi-planar not available (value: 0)
     *          - B_0x1: semi-planar available (value: 1)
     */
        /** @brief semi-planar not available */
    constexpr std::uint32_t LTDC_L2C1R_YSPA_B_0x0 = 0;
        /** @brief semi-planar available */
    constexpr std::uint32_t LTDC_L2C1R_YSPA_B_0x1 = 1;

    /** @brief YCbCr 420 full-planar ability for that layer */
    using LTDC_L2C1R_YFPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: full planar not available (value: 0)
     *          - B_0x1: full planar available (value: 1)
     */
        /** @brief full planar not available */
    constexpr std::uint32_t LTDC_L2C1R_YFPA_B_0x0 = 0;
        /** @brief full planar available */
    constexpr std::uint32_t LTDC_L2C1R_YFPA_B_0x1 = 1;

    /** @brief scaling ability for that layer */
    using LTDC_L2C1R_SCA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: scaling not available (value: 0)
     *          - B_0x1: scaling available (value: 1)
     */
        /** @brief scaling not available */
    constexpr std::uint32_t LTDC_L2C1R_SCA_B_0x0 = 0;
        /** @brief scaling available */
    constexpr std::uint32_t LTDC_L2C1R_SCA_B_0x1 = 1;

    /** @brief LTDC layerx reload control register */
    using LTDC_L2RCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief immediate reload trigger */
    using LTDC_L2RCR_IMR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: The shadow registers are reloaded immediately. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_L2RCR_IMR_B_0x0 = 0;
        /** @brief The shadow registers are reloaded immediately. */
    constexpr std::uint32_t LTDC_L2RCR_IMR_B_0x1 = 1;

    /** @brief vertical blanking reload request */
    using LTDC_L2RCR_VBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: The shadow registers are reloaded during the vertical blanking period (at the beginning of the first line after the active display area). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_L2RCR_VBR_B_0x0 = 0;
        /** @brief The shadow registers are reloaded during the vertical blanking period (at the beginning of the first line after the active display area). */
    constexpr std::uint32_t LTDC_L2RCR_VBR_B_0x1 = 1;

    /** @brief shadow reload control, global (centralized) reload masked */
    using LTDC_L2RCR_GRMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: global reload active for this layer (control from LTDC_SRCR enabled) (value: 0)
     *          - B_0x1: global reload masked for this layer (control from LTDC_SRCR disabled) (value: 1)
     */
        /** @brief global reload active for this layer (control from LTDC_SRCR enabled) */
    constexpr std::uint32_t LTDC_L2RCR_GRMSK_B_0x0 = 0;
        /** @brief global reload masked for this layer (control from LTDC_SRCR disabled) */
    constexpr std::uint32_t LTDC_L2RCR_GRMSK_B_0x1 = 1;

    /** @brief LTDC layerx control register */
    using LTDC_L2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief layer enable */
    using LTDC_L2CR_LEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: layer disabled (value: 0)
     *          - B_0x1: layer enabled (value: 1)
     */
        /** @brief layer disabled */
    constexpr std::uint32_t LTDC_L2CR_LEN_B_0x0 = 0;
        /** @brief layer enabled */
    constexpr std::uint32_t LTDC_L2CR_LEN_B_0x1 = 1;

    /** @brief color keying enable */
    using LTDC_L2CR_CKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: color keying disabled (value: 0)
     *          - B_0x1: color keying enabled: if RGB matches, then the ARGB are set to 0. (value: 1)
     */
        /** @brief color keying disabled */
    constexpr std::uint32_t LTDC_L2CR_CKEN_B_0x0 = 0;
        /** @brief color keying enabled: if RGB matches, then the ARGB are set to 0. */
    constexpr std::uint32_t LTDC_L2CR_CKEN_B_0x1 = 1;

    /** @brief color look-up table enable */
    using LTDC_L2CR_CLUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: color look-up table disabled (value: 0)
     *          - B_0x1: color look-up table enabled (value: 1)
     */
        /** @brief color look-up table disabled */
    constexpr std::uint32_t LTDC_L2CR_CLUTEN_B_0x0 = 0;
        /** @brief color look-up table enabled */
    constexpr std::uint32_t LTDC_L2CR_CLUTEN_B_0x1 = 1;

    /** @brief horizontal mirroring enable */
    using LTDC_L2CR_HMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: mirror disabled (value: 0)
     *          - B_0x1: mirror enabled (if so, the color frame buffer start address has to be set to the last byte of the first line, so for instance: if line is 100 pixels, 24 bpp, then address is set to 299) (value: 1)
     */
        /** @brief mirror disabled */
    constexpr std::uint32_t LTDC_L2CR_HMEN_B_0x0 = 0;
        /** @brief mirror enabled (if so, the color frame buffer start address has to be set to the last byte of the first line, so for instance: if line is 100 pixels, 24 bpp, then address is set to 299) */
    constexpr std::uint32_t LTDC_L2CR_HMEN_B_0x1 = 1;

    /** @brief default color blending enable */
    using LTDC_L2CR_DCBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: blending disabled (value: 0)
     *          - B_0x1: blending enabled (value: 1)
     */
        /** @brief blending disabled */
    constexpr std::uint32_t LTDC_L2CR_DCBEN_B_0x0 = 0;
        /** @brief blending enabled */
    constexpr std::uint32_t LTDC_L2CR_DCBEN_B_0x1 = 1;

    /** @brief LTDC layerx window horizontal position configuration register */
    using LTDC_L2WHPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window horizontal start position */
    using LTDC_L2WHPCR_WHSTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window horizontal stop position */
    using LTDC_L2WHPCR_WHSPPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx window vertical position configuration register */
    using LTDC_L2WVPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window vertical start position */
    using LTDC_L2WVPCR_WVSTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window vertical stop position */
    using LTDC_L2WVPCR_WVSPPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx color keying configuration register */
    using LTDC_L2CKCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key blue value */
    using LTDC_L2CKCR_CKBLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key green value */
    using LTDC_L2CKCR_CKGREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key red value */
    using LTDC_L2CKCR_CKRED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx pixel format configuration register */
    using LTDC_L2PFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format */
    using LTDC_L2PFCR_PF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARGB8888 (32 bpp) (value: 0)
     *          - B_0x1: ABGR888 (32 bpp) (value: 1)
     *          - B_0x2: RGBA888 (32 bpp) (value: 2)
     *          - B_0x3: BGRA8888 (32 bpp) (value: 3)
     *          - B_0x4: RGB565 (16 bpp, A = 255) (value: 4)
     *          - B_0x5: BGR565 (16 bpp, A = 255) (value: 5)
     *          - B_0x6: RGB888 (24 bpp packed, A = 255) (value: 6)
     *          - B_0x7: Flexible pixel format selected (see Section 38.7.50 and Section 38.7.51) (value: 7)
     */
        /** @brief ARGB8888 (32 bpp) */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x0 = 0;
        /** @brief ABGR888 (32 bpp) */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x1 = 1;
        /** @brief RGBA888 (32 bpp) */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x2 = 2;
        /** @brief BGRA8888 (32 bpp) */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x3 = 3;
        /** @brief RGB565 (16 bpp, A = 255) */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x4 = 4;
        /** @brief BGR565 (16 bpp, A = 255) */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x5 = 5;
        /** @brief RGB888 (24 bpp packed, A = 255) */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x6 = 6;
        /** @brief Flexible pixel format selected (see Section 38.7.50 and Section 38.7.51) */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x7 = 7;

    /** @brief LTDC layerx constant alpha configuration register */
    using LTDC_L2CACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief constant alpha */
    using LTDC_L2CACR_CONSTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx default color configuration register */
    using LTDC_L2DCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color blue */
    using LTDC_L2DCCR_DCBLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color green */
    using LTDC_L2DCCR_DCGREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color red */
    using LTDC_L2DCCR_DCRED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color alpha */
    using LTDC_L2DCCR_DCALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx blending factors configuration register */
    using LTDC_L2BFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blending factor 2 */
    using LTDC_L2BFCR_BF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x5: 1 - constant alpha (value: 5)
     *          - B_0x7: 1 - (pixel alpha x constant alpha) (value: 7)
     */
        /** @brief 1 - constant alpha */
    constexpr std::uint32_t LTDC_L2BFCR_BF2_B_0x5 = 5;
        /** @brief 1 - (pixel alpha x constant alpha) */
    constexpr std::uint32_t LTDC_L2BFCR_BF2_B_0x7 = 7;

    /** @brief blending factor 1 */
    using LTDC_L2BFCR_BF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: constant alpha (value: 4)
     *          - B_0x6: pixel alpha x constant alpha (value: 6)
     */
        /** @brief constant alpha */
    constexpr std::uint32_t LTDC_L2BFCR_BF1_B_0x4 = 4;
        /** @brief pixel alpha x constant alpha */
    constexpr std::uint32_t LTDC_L2BFCR_BF1_B_0x6 = 6;

    /** @brief blending order */
    using LTDC_L2BFCR_BOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: layer set in background (value: 0)
     *          - B_0x1: layer set in foreground (value: 1)
     */
        /** @brief layer set in background */
    constexpr std::uint32_t LTDC_L2BFCR_BOR_B_0x0 = 0;
        /** @brief layer set in foreground */
    constexpr std::uint32_t LTDC_L2BFCR_BOR_B_0x1 = 1;

    /** @brief LTDC layerx burst length configuration register */
    using LTDC_L2BLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief burst length */
    using LTDC_L2BLCR_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: maximum burst length (16 words 64 bits, thus 128 Bytes) (value: 0)
     *          - B_0x01: 1 word (of 64 bits) per burst (value: 1)
     *          - B_0x10: 16 words (of 64 bits) per burst (value: 16)
     */
        /** @brief maximum burst length (16 words 64 bits, thus 128 Bytes) */
    constexpr std::uint32_t LTDC_L2BLCR_BL_B_0x00 = 0;
        /** @brief 1 word (of 64 bits) per burst */
    constexpr std::uint32_t LTDC_L2BLCR_BL_B_0x01 = 1;
        /** @brief 16 words (of 64 bits) per burst */
    constexpr std::uint32_t LTDC_L2BLCR_BL_B_0x10 = 16;

    /** @brief LTDC layerx planar configuration register */
    using LTDC_L2PCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief YCbCr-to-RGB conversion enable */
    using LTDC_L2PCR_YCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: conversion disabled (value: 0)
     *          - B_0x1: YCbCr conversion enabled, using the YCM setting above (value: 1)
     */
        /** @brief conversion disabled */
    constexpr std::uint32_t LTDC_L2PCR_YCEN_B_0x0 = 0;
        /** @brief YCbCr conversion enabled, using the YCM setting above */
    constexpr std::uint32_t LTDC_L2PCR_YCEN_B_0x1 = 1;

    /** @brief YCbCr conversion mode */
    using LTDC_L2PCR_YCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interleaved 422 (Cb and Cr component are replicated horizontally for pixels P and P+1) (value: 0)
     *          - B_0x1: semi-Planar 420: (Cb and Cr component are replicated horizontally and vertically.The layer main configuration defines the access to the Y buffer, and auxiliary registers define the access to the Cb and Cr buffers). (value: 1)
     *          - B_0x2: full-Planar 420: (Cb and Cr component are replicated horizontally and vertically. The layer main configuration defines the access to the Y buffer, and auxiliary registers define the access to the Cb and Cr buffers). (value: 2)
     */
        /** @brief interleaved 422 (Cb and Cr component are replicated horizontally for pixels P and P+1) */
    constexpr std::uint32_t LTDC_L2PCR_YCM_B_0x0 = 0;
        /** @brief semi-Planar 420: (Cb and Cr component are replicated horizontally and vertically.The layer main configuration defines the access to the Y buffer, and auxiliary registers define the access to the Cb and Cr buffers). */
    constexpr std::uint32_t LTDC_L2PCR_YCM_B_0x1 = 1;
        /** @brief full-Planar 420: (Cb and Cr component are replicated horizontally and vertically. The layer main configuration defines the access to the Y buffer, and auxiliary registers define the access to the Cb and Cr buffers). */
    constexpr std::uint32_t LTDC_L2PCR_YCM_B_0x2 = 2;

    /** @brief Y component first */
    using LTDC_L2PCR_YF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Y component disabled (thus Cr or Cb component is on byte 0) (value: 0)
     *          - B_0x1: Y component enabled (thus Y component is on byte 0) (value: 1)
     */
        /** @brief Y component disabled (thus Cr or Cb component is on byte 0) */
    constexpr std::uint32_t LTDC_L2PCR_YF_B_0x0 = 0;
        /** @brief Y component enabled (thus Y component is on byte 0) */
    constexpr std::uint32_t LTDC_L2PCR_YF_B_0x1 = 1;

    /** @brief Cb component first */
    using LTDC_L2PCR_CBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cb disabled (thus Cr component is on byte 0 and 1) (value: 0)
     *          - B_0x1: Cb enabled (thus Cb component is on byte 0 and 1) (value: 1)
     */
        /** @brief Cb disabled (thus Cr component is on byte 0 and 1) */
    constexpr std::uint32_t LTDC_L2PCR_CBF_B_0x0 = 0;
        /** @brief Cb enabled (thus Cb component is on byte 0 and 1) */
    constexpr std::uint32_t LTDC_L2PCR_CBF_B_0x1 = 1;

    /** @brief Odd pixel first */
    using LTDC_L2PCR_OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: odd pixel disabled (thus even pixel on byte 0) (value: 0)
     *          - B_0x1: odd pixel enabled (thus odd pixel on byte 0) (value: 1)
     */
        /** @brief odd pixel disabled (thus even pixel on byte 0) */
    constexpr std::uint32_t LTDC_L2PCR_OF_B_0x0 = 0;
        /** @brief odd pixel enabled (thus odd pixel on byte 0) */
    constexpr std::uint32_t LTDC_L2PCR_OF_B_0x1 = 1;

    /** @brief Y rescale enable for the color dynamic range */
    using LTDC_L2PCR_YREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rescaling disabled (input component thus assumed provided in 0 to 255) (value: 0)
     *          - B_0x1: rescaling enabled (input component thus assumed provided in 16 to 235). (value: 1)
     */
        /** @brief rescaling disabled (input component thus assumed provided in 0 to 255) */
    constexpr std::uint32_t LTDC_L2PCR_YREN_B_0x0 = 0;
        /** @brief rescaling enabled (input component thus assumed provided in 16 to 235). */
    constexpr std::uint32_t LTDC_L2PCR_YREN_B_0x1 = 1;

    /** @brief LTDC layerx color frame buffer address register */
    using LTDC_L2CFBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer start address */
    using LTDC_L2CFBAR_CFBADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx color frame buffer length register */
    using LTDC_L2CFBLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer line length */
    using LTDC_L2CFBLR_CFBLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer pitch in bytes */
    using LTDC_L2CFBLR_CFBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx color frame buffer line number register */
    using LTDC_L2CFBLNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x23C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame buffer line number */
    using LTDC_L2CFBLNR_CFBLNBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx CLUT write register */
    using LTDC_L2CLUTWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blue value */
    using LTDC_L2CLUTWR_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief green value */
    using LTDC_L2CLUTWR_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief red value */
    using LTDC_L2CLUTWR_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT address */
    using LTDC_L2CLUTWR_CLUTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx conversion YCbCr RGB 0 register */
    using LTDC_L2CYR0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cr-to-Red coefficient, with bits 9:8 as positive integer and 7:0 as decimals. */
    using LTDC_L2CYR0R_CR2R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cb-to-Blue coefficient, with bits 9:8 as positive integer and 7:0 as decimals. */
    using LTDC_L2CYR0R_CB2B = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx conversion YCbCr RGB 1 register */
    using LTDC_L2CYR1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cr-to-Green coefficient, with bits 9:8 as positive integer and 7:0 as decimals. */
    using LTDC_L2CYR1R_CR2G = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cb-to-Green coefficient, with bits 9:8 as positive integer and 7:0 as decimals. */
    using LTDC_L2CYR1R_CB2G = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx flexible pixel format 0 register */
    using LTDC_L2FPF0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x274, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Location of the Alpha component inside the pixel memory word (in bits) */
    using LTDC_L2FPF0R_APOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Width of the Alpha component (in bits) */
    using LTDC_L2FPF0R_ALEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Location of the Red component inside the pixel memory word (in bits) */
    using LTDC_L2FPF0R_RPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Width of the Red component (in bits) */
    using LTDC_L2FPF0R_RLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layerx flexible pixel format 1 register */
    using LTDC_L2FPF1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x278, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Location of the Green component inside the pixel memory word (in bits) */
    using LTDC_L2FPF1R_GPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Width of the Green component (in bits) */
    using LTDC_L2FPF1R_GLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Location of the Blue component inside the pixel memory word (in bits) */
    using LTDC_L2FPF1R_BPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Width of the Blue component (in bits) */
    using LTDC_L2FPF1R_BLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pixel size (in bytes) */
    using LTDC_L2FPF1R_PSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
