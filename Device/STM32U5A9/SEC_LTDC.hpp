/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U5A9_SEC_LTDC_HPP
#define EMBEDDED_PP_STM32U5A9_SEC_LTDC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief LTDC */
namespace STM32U5A9::SEC_LTDC {

    /** @brief LTDC synchronization size configuration register */
    using LTDC_SSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief vertical synchronization height (in units of horizontal scan line) */
    using LTDC_SSCR_VSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief horizontal synchronization width (in units of pixel clock period) */
    using LTDC_SSCR_HSW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC back porch configuration register */
    using LTDC_BPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief accumulated Vertical back porch (in units of horizontal scan line) */
    using LTDC_BPCR_AVBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief accumulated horizontal back porch (in units of pixel clock period) */
    using LTDC_BPCR_AHBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC active width configuration register */
    using LTDC_AWCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief accumulated active height (in units of horizontal scan line) */
    using LTDC_AWCR_AAH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief accumulated active width (in units of pixel clock period) */
    using LTDC_AWCR_AAW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC total width configuration register */
    using LTDC_TWCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief total height (in units of horizontal scan line) */
    using LTDC_TWCR_TOTALH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief total width (in units of pixel clock period) */
    using LTDC_TWCR_TOTALW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC global control register */
    using LTDC_GCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCD-TFT controller enable */
    using LTDC_GCR_LTDCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LTDC disabled (value: 0)
     *          - B_0x1: LTDC enabled (value: 1)
     */
        /** @brief LTDC disabled */
    constexpr std::uint32_t LTDC_GCR_LTDCEN_B_0x0 = 0;
        /** @brief LTDC enabled */
    constexpr std::uint32_t LTDC_GCR_LTDCEN_B_0x1 = 1;

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

    /** @brief pixel clock polarity */
    using LTDC_GCR_PCPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: pixel clock polarity is active low. (value: 0)
     *          - B_0x1: pixel clock is active high. (value: 1)
     */
        /** @brief pixel clock polarity is active low. */
    constexpr std::uint32_t LTDC_GCR_PCPOL_B_0x0 = 0;
        /** @brief pixel clock is active high. */
    constexpr std::uint32_t LTDC_GCR_PCPOL_B_0x1 = 1;

    /** @brief not data enable polarity */
    using LTDC_GCR_DEPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: not data enable polarity is active low. (value: 0)
     *          - B_0x1: not data enable polarity is active high. (value: 1)
     */
        /** @brief not data enable polarity is active low. */
    constexpr std::uint32_t LTDC_GCR_DEPOL_B_0x0 = 0;
        /** @brief not data enable polarity is active high. */
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

    /** @brief LTDC shadow reload configuration register */
    using LTDC_SRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief immediate reload */
    using LTDC_SRCR_IMR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: The shadow registers are reloaded immediately. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_SRCR_IMR_B_0x0 = 0;
        /** @brief The shadow registers are reloaded immediately. */
    constexpr std::uint32_t LTDC_SRCR_IMR_B_0x1 = 1;

    /** @brief vertical blanking reload */
    using LTDC_SRCR_VBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: The shadow registers are reloaded during the vertical blanking period (at the beginning of the first line after the active display area). (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_SRCR_VBR_B_0x0 = 0;
        /** @brief The shadow registers are reloaded during the vertical blanking period (at the beginning of the first line after the active display area). */
    constexpr std::uint32_t LTDC_SRCR_VBR_B_0x1 = 1;

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
    /** @brief line interrupt enable */
    using LTDC_IER_LIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: line interrupt disable (value: 0)
     *          - B_0x1: line interrupt enable (value: 1)
     */
        /** @brief line interrupt disable */
    constexpr std::uint32_t LTDC_IER_LIE_B_0x0 = 0;
        /** @brief line interrupt enable */
    constexpr std::uint32_t LTDC_IER_LIE_B_0x1 = 1;

    /** @brief FIFO underrun interrupt enable */
    using LTDC_IER_FUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO underrun interrupt disable (value: 0)
     *          - B_0x1: FIFO underrun Interrupt enable (value: 1)
     */
        /** @brief FIFO underrun interrupt disable */
    constexpr std::uint32_t LTDC_IER_FUIE_B_0x0 = 0;
        /** @brief FIFO underrun Interrupt enable */
    constexpr std::uint32_t LTDC_IER_FUIE_B_0x1 = 1;

    /** @brief transfer error interrupt enable */
    using LTDC_IER_TERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: transfer error interrupt disable (value: 0)
     *          - B_0x1: transfer error interrupt enable (value: 1)
     */
        /** @brief transfer error interrupt disable */
    constexpr std::uint32_t LTDC_IER_TERRIE_B_0x0 = 0;
        /** @brief transfer error interrupt enable */
    constexpr std::uint32_t LTDC_IER_TERRIE_B_0x1 = 1;

    /** @brief register reload interrupt enable */
    using LTDC_IER_RRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: register reload interrupt disable (value: 0)
     *          - B_0x1: register reload interrupt enable (value: 1)
     */
        /** @brief register reload interrupt disable */
    constexpr std::uint32_t LTDC_IER_RRIE_B_0x0 = 0;
        /** @brief register reload interrupt enable */
    constexpr std::uint32_t LTDC_IER_RRIE_B_0x1 = 1;

    /** @brief LTDC interrupt status register */
    using LTDC_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line interrupt flag */
    using LTDC_ISR_LIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no line interrupt generated (value: 0)
     *          - B_0x1: line interrupt generated when a programmed line is reached (value: 1)
     */
        /** @brief no line interrupt generated */
    constexpr std::uint32_t LTDC_ISR_LIF_B_0x0 = 0;
        /** @brief line interrupt generated when a programmed line is reached */
    constexpr std::uint32_t LTDC_ISR_LIF_B_0x1 = 1;

    /** @brief FIFO underrun interrupt flag */
    using LTDC_ISR_FUIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no FIFO underrun interrupt generated. (value: 0)
     *          - B_0x1: FIFO underrun interrupt generated, if one of the layer FIFOs is empty and pixel data is read from the FIFO (value: 1)
     */
        /** @brief no FIFO underrun interrupt generated. */
    constexpr std::uint32_t LTDC_ISR_FUIF_B_0x0 = 0;
        /** @brief FIFO underrun interrupt generated, if one of the layer FIFOs is empty and pixel data is read from the FIFO */
    constexpr std::uint32_t LTDC_ISR_FUIF_B_0x1 = 1;

    /** @brief transfer error interrupt flag */
    using LTDC_ISR_TERRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer error interrupt generated (value: 0)
     *          - B_0x1: transfer error interrupt generated when a bus error occurs (value: 1)
     */
        /** @brief no transfer error interrupt generated */
    constexpr std::uint32_t LTDC_ISR_TERRIF_B_0x0 = 0;
        /** @brief transfer error interrupt generated when a bus error occurs */
    constexpr std::uint32_t LTDC_ISR_TERRIF_B_0x1 = 1;

    /** @brief register reload interrupt flag */
    using LTDC_ISR_RRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no register reload interrupt generated (value: 0)
     *          - B_0x1: register reload interrupt generated when a vertical blanking reload occurs (and the first line after the active area is reached) (value: 1)
     */
        /** @brief no register reload interrupt generated */
    constexpr std::uint32_t LTDC_ISR_RRIF_B_0x0 = 0;
        /** @brief register reload interrupt generated when a vertical blanking reload occurs (and the first line after the active area is reached) */
    constexpr std::uint32_t LTDC_ISR_RRIF_B_0x1 = 1;

    /** @brief LTDC_ICR register */
    using LTDC_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clears the line interrupt flag */
    using LTDC_ICR_CLIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the LIF flag in the LTDC_ISR register. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR_CLIF_B_0x0 = 0;
        /** @brief clears the LIF flag in the LTDC_ISR register. */
    constexpr std::uint32_t LTDC_ICR_CLIF_B_0x1 = 1;

    /** @brief clears the FIFO underrun interrupt flag */
    using LTDC_ICR_CFUIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the FUDERRIF flag in the LTDC_ISR register. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR_CFUIF_B_0x0 = 0;
        /** @brief clears the FUDERRIF flag in the LTDC_ISR register. */
    constexpr std::uint32_t LTDC_ICR_CFUIF_B_0x1 = 1;

    /** @brief clears the transfer error interrupt flag */
    using LTDC_ICR_CTERRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the TERRIF flag in the LTDC_ISR register. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR_CTERRIF_B_0x0 = 0;
        /** @brief clears the TERRIF flag in the LTDC_ISR register. */
    constexpr std::uint32_t LTDC_ICR_CTERRIF_B_0x1 = 1;

    /** @brief clears register reload interrupt flag */
    using LTDC_ICR_CRRIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the RRIF flag in the LTDC_ISR register (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LTDC_ICR_CRRIF_B_0x0 = 0;
        /** @brief clears the RRIF flag in the LTDC_ISR register */
    constexpr std::uint32_t LTDC_ICR_CRRIF_B_0x1 = 1;

    /** @brief LTDC line interrupt position configuration register */
    using LTDC_LIPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief line interrupt position */
    using LTDC_LIPCR_LIPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC_CPSR register */
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

    /** @brief LTDC_L1CR register */
    using LTDC_L1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief layer enable */
    using LTDC_L1CR_LEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: layer disable (value: 0)
     *          - B_0x1: layer enable (value: 1)
     */
        /** @brief layer disable */
    constexpr std::uint32_t LTDC_L1CR_LEN_B_0x0 = 0;
        /** @brief layer enable */
    constexpr std::uint32_t LTDC_L1CR_LEN_B_0x1 = 1;

    /** @brief color keying enable */
    using LTDC_L1CR_COLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: color keying disable (value: 0)
     *          - B_0x1: color keying enable (value: 1)
     */
        /** @brief color keying disable */
    constexpr std::uint32_t LTDC_L1CR_COLKEN_B_0x0 = 0;
        /** @brief color keying enable */
    constexpr std::uint32_t LTDC_L1CR_COLKEN_B_0x1 = 1;

    /** @brief color look-up table enable */
    using LTDC_L1CR_CLUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: color look-up table disable (value: 0)
     *          - B_0x1: color look-up table enable (value: 1)
     */
        /** @brief color look-up table disable */
    constexpr std::uint32_t LTDC_L1CR_CLUTEN_B_0x0 = 0;
        /** @brief color look-up table enable */
    constexpr std::uint32_t LTDC_L1CR_CLUTEN_B_0x1 = 1;

    /** @brief LTDC layer 1 window horizontal position configuration register */
    using LTDC_L1WHPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window horizontal start position */
    using LTDC_L1WHPCR_WHSTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window horizontal stop position */
    using LTDC_L1WHPCR_WHSPPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 1 window vertical position configuration register */
    using LTDC_L1WVPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window vertical start position */
    using LTDC_L1WVPCR_WVSTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window vertical stop position */
    using LTDC_L1WVPCR_WVSPPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 1 color keying configuration register */
    using LTDC_L1CKCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key blue value */
    using LTDC_L1CKCR_CKBLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key green value */
    using LTDC_L1CKCR_CKGREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key red value */
    using LTDC_L1CKCR_CKRED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 1 pixel format configuration register */
    using LTDC_L1PFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format */
    using LTDC_L1PFCR_PF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARGB8888 (value: 0)
     *          - B_0x1: RGB888 (value: 1)
     *          - B_0x2: RGB565 (value: 2)
     *          - B_0x3: ARGB1555 (value: 3)
     *          - B_0x4: ARGB4444 (value: 4)
     *          - B_0x5: L8 (8-bit luminance) (value: 5)
     *          - B_0x6: AL44 (4-bit alpha, 4-bit luminance) (value: 6)
     *          - B_0x7: AL88 (8-bit alpha, 8-bit luminance) (value: 7)
     */
        /** @brief ARGB8888 */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x0 = 0;
        /** @brief RGB888 */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x1 = 1;
        /** @brief RGB565 */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x2 = 2;
        /** @brief ARGB1555 */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x3 = 3;
        /** @brief ARGB4444 */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x4 = 4;
        /** @brief L8 (8-bit luminance) */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x5 = 5;
        /** @brief AL44 (4-bit alpha, 4-bit luminance) */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x6 = 6;
        /** @brief AL88 (8-bit alpha, 8-bit luminance) */
    constexpr std::uint32_t LTDC_L1PFCR_PF_B_0x7 = 7;

    /** @brief LTDC layer 1 constant alpha configuration register */
    using LTDC_L1CACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief constant alpha */
    using LTDC_L1CACR_CONSTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 1 default color configuration register */
    using LTDC_L1DCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color blue */
    using LTDC_L1DCCR_DCBLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color green */
    using LTDC_L1DCCR_DCGREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color red */
    using LTDC_L1DCCR_DCRED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color alpha */
    using LTDC_L1DCCR_DCALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 1 blending factors configuration register */
    using LTDC_L1BFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief LTDC layer 1 color frame buffer address register */
    using LTDC_L1CFBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer start address */
    using LTDC_L1CFBAR_CFBADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 1 color frame buffer length register */
    using LTDC_L1CFBLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer line length */
    using LTDC_L1CFBLR_CFBLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer pitch in bytes */
    using LTDC_L1CFBLR_CFBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 1 color frame buffer line number register */
    using LTDC_L1CFBLNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame buffer line number */
    using LTDC_L1CFBLNR_CFBLNBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 1 CLUT write register */
    using LTDC_L1CLUTWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blue value */
    using LTDC_L1CLUTWR_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief green value */
    using LTDC_L1CLUTWR_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief red value */
    using LTDC_L1CLUTWR_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT address */
    using LTDC_L1CLUTWR_CLUTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC_L2CR register */
    using LTDC_L2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief layer enable */
    using LTDC_L2CR_LEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: layer disable (value: 0)
     *          - B_0x1: layer enable (value: 1)
     */
        /** @brief layer disable */
    constexpr std::uint32_t LTDC_L2CR_LEN_B_0x0 = 0;
        /** @brief layer enable */
    constexpr std::uint32_t LTDC_L2CR_LEN_B_0x1 = 1;

    /** @brief color keying enable */
    using LTDC_L2CR_COLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: color keying disable (value: 0)
     *          - B_0x1: color keying enable (value: 1)
     */
        /** @brief color keying disable */
    constexpr std::uint32_t LTDC_L2CR_COLKEN_B_0x0 = 0;
        /** @brief color keying enable */
    constexpr std::uint32_t LTDC_L2CR_COLKEN_B_0x1 = 1;

    /** @brief color look-up table enable */
    using LTDC_L2CR_CLUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: color look-up table disable (value: 0)
     *          - B_0x1: color look-up table enable (value: 1)
     */
        /** @brief color look-up table disable */
    constexpr std::uint32_t LTDC_L2CR_CLUTEN_B_0x0 = 0;
        /** @brief color look-up table enable */
    constexpr std::uint32_t LTDC_L2CR_CLUTEN_B_0x1 = 1;

    /** @brief LTDC layer 2 window horizontal position configuration register */
    using LTDC_L2WHPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window horizontal start position */
    using LTDC_L2WHPCR_WHSTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window horizontal stop position */
    using LTDC_L2WHPCR_WHSPPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 2 window vertical position configuration register */
    using LTDC_L2WVPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window vertical start position */
    using LTDC_L2WVPCR_WVSTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief window vertical stop position */
    using LTDC_L2WVPCR_WVSPPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 2 color keying configuration register */
    using LTDC_L2CKCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key blue value */
    using LTDC_L2CKCR_CKBLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key green value */
    using LTDC_L2CKCR_CKGREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color key red value */
    using LTDC_L2CKCR_CKRED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 2 pixel format configuration register */
    using LTDC_L2PFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pixel format */
    using LTDC_L2PFCR_PF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARGB8888 (value: 0)
     *          - B_0x1: RGB888 (value: 1)
     *          - B_0x2: RGB565 (value: 2)
     *          - B_0x3: ARGB1555 (value: 3)
     *          - B_0x4: ARGB4444 (value: 4)
     *          - B_0x5: L8 (8-bit luminance) (value: 5)
     *          - B_0x6: AL44 (4-bit alpha, 4-bit luminance) (value: 6)
     *          - B_0x7: AL88 (8-bit alpha, 8-bit luminance) (value: 7)
     */
        /** @brief ARGB8888 */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x0 = 0;
        /** @brief RGB888 */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x1 = 1;
        /** @brief RGB565 */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x2 = 2;
        /** @brief ARGB1555 */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x3 = 3;
        /** @brief ARGB4444 */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x4 = 4;
        /** @brief L8 (8-bit luminance) */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x5 = 5;
        /** @brief AL44 (4-bit alpha, 4-bit luminance) */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x6 = 6;
        /** @brief AL88 (8-bit alpha, 8-bit luminance) */
    constexpr std::uint32_t LTDC_L2PFCR_PF_B_0x7 = 7;

    /** @brief LTDC layer 2 constant alpha configuration register */
    using LTDC_L2CACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief constant alpha */
    using LTDC_L2CACR_CONSTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 2 default color configuration register */
    using LTDC_L2DCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color blue */
    using LTDC_L2DCCR_DCBLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color green */
    using LTDC_L2DCCR_DCGREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color red */
    using LTDC_L2DCCR_DCRED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief default color alpha */
    using LTDC_L2DCCR_DCALPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 2 blending factors configuration register */
    using LTDC_L2BFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief LTDC layer 2 color frame buffer address register */
    using LTDC_L2CFBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer start address */
    using LTDC_L2CFBAR_CFBADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 2 color frame buffer length register */
    using LTDC_L2CFBLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer line length */
    using LTDC_L2CFBLR_CFBLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief color frame buffer pitch in bytes */
    using LTDC_L2CFBLR_CFBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 2 color frame buffer line number register */
    using LTDC_L2CFBLNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief frame buffer line number */
    using LTDC_L2CFBLNR_CFBLNBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LTDC layer 2 CLUT write register */
    using LTDC_L2CLUTWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief blue value */
    using LTDC_L2CLUTWR_BLUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief green value */
    using LTDC_L2CLUTWR_GREEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief red value */
    using LTDC_L2CLUTWR_RED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLUT address */
    using LTDC_L2CLUTWR_CLUTADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
