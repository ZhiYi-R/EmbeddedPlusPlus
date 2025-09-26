/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U599_GPDMA1_HPP
#define EMBEDDED_PP_STM32U599_GPDMA1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GPDMA1 */
namespace STM32U599::GPDMA1 {

    /** @brief GPDMA secure configuration register */
    using GPDMA_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC0 */
    using GPDMA_SECCFGR_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1 */
    using GPDMA_SECCFGR_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2 */
    using GPDMA_SECCFGR_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC3 */
    using GPDMA_SECCFGR_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC4 */
    using GPDMA_SECCFGR_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC5 */
    using GPDMA_SECCFGR_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC6 */
    using GPDMA_SECCFGR_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC7 */
    using GPDMA_SECCFGR_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC8 */
    using GPDMA_SECCFGR_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC9 */
    using GPDMA_SECCFGR_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC10 */
    using GPDMA_SECCFGR_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC11 */
    using GPDMA_SECCFGR_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC12 */
    using GPDMA_SECCFGR_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC13 */
    using GPDMA_SECCFGR_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC14 */
    using GPDMA_SECCFGR_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC15 */
    using GPDMA_SECCFGR_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA privileged configuration register */
    using GPDMA_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV0 */
    using GPDMA_PRIVCFGR_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1 */
    using GPDMA_PRIVCFGR_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2 */
    using GPDMA_PRIVCFGR_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV3 */
    using GPDMA_PRIVCFGR_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV4 */
    using GPDMA_PRIVCFGR_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV5 */
    using GPDMA_PRIVCFGR_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV6 */
    using GPDMA_PRIVCFGR_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV7 */
    using GPDMA_PRIVCFGR_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV8 */
    using GPDMA_PRIVCFGR_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV9 */
    using GPDMA_PRIVCFGR_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV10 */
    using GPDMA_PRIVCFGR_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV11 */
    using GPDMA_PRIVCFGR_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV12 */
    using GPDMA_PRIVCFGR_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV13 */
    using GPDMA_PRIVCFGR_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV14 */
    using GPDMA_PRIVCFGR_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV15 */
    using GPDMA_PRIVCFGR_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief non-secure masked interrupt status register */
    using MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS0 */
    using MISR_MIS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS1 */
    using MISR_MIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS2 */
    using MISR_MIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS3 */
    using MISR_MIS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS4 */
    using MISR_MIS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS5 */
    using MISR_MIS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS6 */
    using MISR_MIS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS7 */
    using MISR_MIS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS8 */
    using MISR_MIS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS9 */
    using MISR_MIS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS10 */
    using MISR_MIS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS11 */
    using MISR_MIS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS12 */
    using MISR_MIS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS13 */
    using MISR_MIS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS14 */
    using MISR_MIS14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS15 */
    using MISR_MIS15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure masked interrupt status register */
    using SMISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS0 */
    using SMISR_MIS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS1 */
    using SMISR_MIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS2 */
    using SMISR_MIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS3 */
    using SMISR_MIS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS4 */
    using SMISR_MIS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS5 */
    using SMISR_MIS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS6 */
    using SMISR_MIS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS7 */
    using SMISR_MIS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS8 */
    using SMISR_MIS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS9 */
    using SMISR_MIS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS10 */
    using SMISR_MIS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS11 */
    using SMISR_MIS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS12 */
    using SMISR_MIS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS13 */
    using SMISR_MIS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS14 */
    using SMISR_MIS14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS15 */
    using SMISR_MIS15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C0LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C0LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C0FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C0FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C0FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C0FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C0FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C0FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C0FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C0FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C0SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C0SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C0SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C0SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C0SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C0SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C0SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C0SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C0SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C0CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. */
    using GPDMA_C0CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C0CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C0CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C0CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C0CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C0CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C0CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C0CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C0CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C0CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C0CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 1 */
    using GPDMA_C0TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst, in bytes- 00: byte- 01: half-word (2 bytes)- 10: word (4 bytes)- 11: a user setting error is reported and no transfer is issued.Note: Setting a 8-byte data width is causing a user setting error to be reported and none transfer is issued.Note: a source block size must be a multiple of the source data width (c.f. GPDMA_CxBR1.BNDT[2:0] vs SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: A source burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxSAR[2:0] and address offset GPDMA_CxTR3.SAO[2:0] vs SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C0TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source incrementing burst- 0: fixed burst- 1: contiguously incremented burstThe source address, pointed by DMA_CxSAR, is either kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C0TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source burst length minus 1 , between 0 and 63.Burst length unit is one data a.k.a. beat within a burst.If SBL_1[5:0]=0, then burst can be named as single.Each data/beat has a width defined by the source data width i.e. SDW_LOG2[1:0].Note: A burst transfer must have an aligned address (c.f. start address GPDMA_CxSAR and address offset GPDMA_CxTR3.SAO) with its data width (byte, half-word or word). Else a user setting error is reported and none transfer is issued.Note: If a burst transfer would have crossed a 1kB address boundary on a AHB transfer, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the AHB protocol.Note: If a burst transfer is of length greater than the FIFO size of the channel x, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the FIFO size. Transfer performance is lower, with DMA re-arbitration between effective and lower burst(s)/singles, but data integrity is guaranteed. */
    using GPDMA_C0TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PAM */
    using GPDMA_C0TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source byte exchange within the unaligned half-word of each source wordIf source data width is shorter than a word, this bit is ignored.If source data width is a word:- 0: no byte-based exchange within the unaligned half-word of each source word- 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged */
    using GPDMA_C0TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source allocated portAllocate the master port to the source transfer.- 0: port 0 (AHB) is allocated to the source transfer- 1: port 1 (AHB) is allocated to the source transferNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C0TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security attribute of the DMA transfer from the sourceThis is a secure register bit.This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx=1. A secure write is ignored when GPDMA_SECCFGR.SECx=0.When is de-asserted GPDMA_SECCFGR.SECx, this bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the DMA transfer from the source is non-secure.If GPDMA_SECCFGR.SECx=1 (and a secure access):- 0: non-secure- 1: secure */
    using GPDMA_C0TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the destination data width of a burst, in bytes- 00: byte- 01: half-word (2 bytes)- 10: word (4 bytes)- 11: a user setting error is reported and no transfer is issued.Note: Setting a 8-byte data width is causing a user setting error to be reported and none transfer is issued.Note: A destination burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: When configured in packing mode (i.e. if PAM[1]=1 and destination data width different from source data width), a source block size must be a multiple of the destination data width (c.f. GPDMA_CxBR1.BNDT[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C0TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination incrementing burst- 0: fixed burst- 1: contiguously incremented burstThe destination address, pointed by DMA_CxDAR, is either kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C0TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination burst length minus 1 , between 0 and 63.Burst length unit is one data a.k.a. beat within a burst.If DBL_1[5:0]=0, then burst can be named as single.Each data/beat has a width defined by the destination data width i.e. DDW_LOG2[1:0].Note: A burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: If a burst transfer would have crossed a 1kB address boundary on a AHB transfer, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the AHB protocol.Note: If a burst transfer is of length greater than the FIFO size of the channel x, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the FIFO size. Transfer performance is lower, with DMA re-arbitration between effective and lower burst(s)/singles, but data integrity is guaranteed. */
    using GPDMA_C0TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchangeIf destination data size is a byte, this bit is ignored.If destination data size is not a byte:- 0: no byte-based exchange within half-word- 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word */
    using GPDMA_C0TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination half-word exchangeIf destination data size is shorter than a word, this bit is ignored.If destination data size is a word:- 0: no halfword-based exchange within word- 1: the two consecutive (post PAM) half-words are exchanged in each destination word */
    using GPDMA_C0TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination allocated portAllocate the master port to the destination transfer.- 0: port 0 (AHB) is allocated to the destination transfer- 1: port 1 (AHB) is allocated to the destination transferNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C0TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security attribute of the DMA transfer to the destinationThis is a secure register bit.This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx=1. A secure write is ignored when GPDMA_SECCFGR.SECx=0.When is de-asserted GPDMA_SECCFGR.SECx, this bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the DMA transfer to the destination is non-secure.If GPDMA_SECCFGR.SECx=1 (and a secure access):- 0: non-secure- 1: secure */
    using GPDMA_C0TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C0TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C0TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C0TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C0TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C0TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode */
    using GPDMA_C0TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C0TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C0TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C0TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C0BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C0BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C0SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C0SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C0DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C0DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C0LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C0LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C0LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C0LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C0LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C0LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C0LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C0LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C1LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C1LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C1FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C1FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C1FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C1FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C1FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C1FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C1FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C1FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C1SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C1SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C1SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C1SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C1SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C1SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C1SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C1SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C1SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C1CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset */
    using GPDMA_C1CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C1CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C1CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C1CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C1CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C1CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C1CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C1CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C1CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C1CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C1CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 1 */
    using GPDMA_C1TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst, in bytes- 00: byte- 01: half-word (2 bytes)- 10: word (4 bytes)- 11: a user setting error is reported and no transfer is issued.Note: Setting a 8-byte data width is causing a user setting error to be reported and none transfer is issued.Note: a source block size must be a multiple of the source data width (c.f. GPDMA_CxBR1.BNDT[2:0] vs SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: A source burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxSAR[2:0] and address offset GPDMA_CxTR3.SAO[2:0] vs SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C1TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source incrementing burst- 0: fixed burst- 1: contiguously incremented burstThe source address, pointed by DMA_CxSAR, is either kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C1TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source burst length minus 1 , between 0 and 63.Burst length unit is one data a.k.a. beat within a burst.If SBL_1[5:0]=0, then burst can be named as single.Each data/beat has a width defined by the source data width i.e. SDW_LOG2[1:0].Note: A burst transfer must have an aligned address (c.f. start address GPDMA_CxSAR and address offset GPDMA_CxTR3.SAO) with its data width (byte, half-word or word). Else a user setting error is reported and none transfer is issued.Note: If a burst transfer would have crossed a 1kB address boundary on a AHB transfer, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the AHB protocol.Note: If a burst transfer is of length greater than the FIFO size of the channel x, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the FIFO size. Transfer performance is lower, with DMA re-arbitration between effective and lower burst(s)/singles, but data integrity is guaranteed. */
    using GPDMA_C1TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PAM */
    using GPDMA_C1TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source byte exchange within the unaligned half-word of each source wordIf source data width is shorter than a word, this bit is ignored.If source data width is a word:- 0: no byte-based exchange within the unaligned half-word of each source word- 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged */
    using GPDMA_C1TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source allocated portAllocate the master port to the source transfer.- 0: port 0 (AHB) is allocated to the source transfer- 1: port 1 (AHB) is allocated to the source transferNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C1TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security attribute of the DMA transfer from the sourceThis is a secure register bit.This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx=1. A secure write is ignored when GPDMA_SECCFGR.SECx=0.When is de-asserted GPDMA_SECCFGR.SECx, this bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the DMA transfer from the source is non-secure.If GPDMA_SECCFGR.SECx=1 (and a secure access):- 0: non-secure- 1: secure */
    using GPDMA_C1TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the destination data width of a burst, in bytes- 00: byte- 01: half-word (2 bytes)- 10: word (4 bytes)- 11: a user setting error is reported and no transfer is issued.Note: Setting a 8-byte data width is causing a user setting error to be reported and none transfer is issued.Note: A destination burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: When configured in packing mode (i.e. if PAM[1]=1 and destination data width different from source data width), a source block size must be a multiple of the destination data width (c.f. GPDMA_CxBR1.BNDT[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C1TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination incrementing burst- 0: fixed burst- 1: contiguously incremented burstThe destination address, pointed by DMA_CxDAR, is either kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C1TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination burst length minus 1 , between 0 and 63.Burst length unit is one data a.k.a. beat within a burst.If DBL_1[5:0]=0, then burst can be named as single.Each data/beat has a width defined by the destination data width i.e. DDW_LOG2[1:0].Note: A burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: If a burst transfer would have crossed a 1kB address boundary on a AHB transfer, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the AHB protocol.Note: If a burst transfer is of length greater than the FIFO size of the channel x, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the FIFO size. Transfer performance is lower, with DMA re-arbitration between effective and lower burst(s)/singles, but data integrity is guaranteed. */
    using GPDMA_C1TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchangeIf destination data size is a byte, this bit is ignored.If destination data size is not a byte:- 0: no byte-based exchange within half-word- 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word */
    using GPDMA_C1TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination half-word exchangeIf destination data size is shorter than a word, this bit is ignored.If destination data size is a word:- 0: no halfword-based exchange within word- 1: the two consecutive (post PAM) half-words are exchanged in each destination word */
    using GPDMA_C1TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination allocated portAllocate the master port to the destination transfer.- 0: port 0 (AHB) is allocated to the destination transfer- 1: port 1 (AHB) is allocated to the destination transferNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C1TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security attribute of the DMA transfer to the destinationThis is a secure register bit.This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx=1. A secure write is ignored when GPDMA_SECCFGR.SECx=0.When is de-asserted GPDMA_SECCFGR.SECx, this bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the DMA transfer to the destination is non-secure.If GPDMA_SECCFGR.SECx=1 (and a secure access):- 0: non-secure- 1: secure */
    using GPDMA_C1TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C1TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C1TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C1TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C1TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C1TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIGM mode */
    using GPDMA_C1TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C1TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C1TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C1TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C1BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C1BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C1SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C1SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C1DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C1DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C1LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C1LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C1LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C1LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C1LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C1LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C1LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C1LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C2LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C2LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C2FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C2FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C2FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C2FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C2FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C2FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C2FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C2FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C2SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C2SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C2SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C2SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C2SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C2SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C2SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C2SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C2SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C2CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset */
    using GPDMA_C2CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C2CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C2CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C2CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C2CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C2CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C2CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C2CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C2CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C2CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C2CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 1 */
    using GPDMA_C2TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst, in bytes- 00: byte- 01: half-word (2 bytes)- 10: word (4 bytes)- 11: a user setting error is reported and no transfer is issued.Note: Setting a 8-byte data width is causing a user setting error to be reported and none transfer is issued.Note: a source block size must be a multiple of the source data width (c.f. GPDMA_CxBR1.BNDT[2:0] vs SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: A source burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxSAR[2:0] and address offset GPDMA_CxTR3.SAO[2:0] vs SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C2TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source incrementing burst- 0: fixed burst- 1: contiguously incremented burstThe source address, pointed by DMA_CxSAR, is either kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C2TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source burst length minus 1 , between 0 and 63.Burst length unit is one data a.k.a. beat within a burst.If SBL_1[5:0]=0, then burst can be named as single.Each data/beat has a width defined by the source data width i.e. SDW_LOG2[1:0].Note: A burst transfer must have an aligned address (c.f. start address GPDMA_CxSAR and address offset GPDMA_CxTR3.SAO) with its data width (byte, half-word or word). Else a user setting error is reported and none transfer is issued.Note: If a burst transfer would have crossed a 1kB address boundary on a AHB transfer, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the AHB protocol.Note: If a burst transfer is of length greater than the FIFO size of the channel x, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the FIFO size. Transfer performance is lower, with DMA re-arbitration between effective and lower burst(s)/singles, but data integrity is guaranteed. */
    using GPDMA_C2TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PAM */
    using GPDMA_C2TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source byte exchange within the unaligned half-word of each source wordIf source data width is shorter than a word, this bit is ignored.If source data width is a word:- 0: no byte-based exchange within the unaligned half-word of each source word- 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged */
    using GPDMA_C2TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source allocated portAllocate the master port to the source transfer.- 0: port 0 (AHB) is allocated to the source transfer- 1: port 1 (AHB) is allocated to the source transferNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C2TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security attribute of the DMA transfer from the sourceThis is a secure register bit.This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx=1. A secure write is ignored when GPDMA_SECCFGR.SECx=0.When is de-asserted GPDMA_SECCFGR.SECx, this bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the DMA transfer from the source is non-secure.If GPDMA_SECCFGR.SECx=1 (and a secure access):- 0: non-secure- 1: secure */
    using GPDMA_C2TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the destination data width of a burst, in bytes- 00: byte- 01: half-word (2 bytes)- 10: word (4 bytes)- 11: a user setting error is reported and no transfer is issued.Note: Setting a 8-byte data width is causing a user setting error to be reported and none transfer is issued.Note: A destination burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: When configured in packing mode (i.e. if PAM[1]=1 and destination data width different from source data width), a source block size must be a multiple of the destination data width (c.f. GPDMA_CxBR1.BNDT[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C2TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination incrementing burst- 0: fixed burst- 1: contiguously incremented burstThe destination address, pointed by DMA_CxDAR, is either kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C2TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination burst length minus 1 , between 0 and 63.Burst length unit is one data a.k.a. beat within a burst.If DBL_1[5:0]=0, then burst can be named as single.Each data/beat has a width defined by the destination data width i.e. DDW_LOG2[1:0].Note: A burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: If a burst transfer would have crossed a 1kB address boundary on a AHB transfer, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the AHB protocol.Note: If a burst transfer is of length greater than the FIFO size of the channel x, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the FIFO size. Transfer performance is lower, with DMA re-arbitration between effective and lower burst(s)/singles, but data integrity is guaranteed. */
    using GPDMA_C2TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchangeIf destination data size is a byte, this bit is ignored.If destination data size is not a byte:- 0: no byte-based exchange within half-word- 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word */
    using GPDMA_C2TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination half-word exchangeIf destination data size is shorter than a word, this bit is ignored.If destination data size is a word:- 0: no halfword-based exchange within word- 1: the two consecutive (post PAM) half-words are exchanged in each destination word */
    using GPDMA_C2TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination allocated portAllocate the master port to the destination transfer.- 0: port 0 (AHB) is allocated to the destination transfer- 1: port 1 (AHB) is allocated to the destination transferNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C2TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security attribute of the DMA transfer to the destinationThis is a secure register bit.This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx=1. A secure write is ignored when GPDMA_SECCFGR.SECx=0.When is de-asserted GPDMA_SECCFGR.SECx, this bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the DMA transfer to the destination is non-secure.If GPDMA_SECCFGR.SECx=1 (and a secure access):- 0: non-secure- 1: secure */
    using GPDMA_C2TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C2TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C2TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C2TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C2TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C2TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode */
    using GPDMA_C2TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C2TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C2TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C2TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C2BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C2BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C2SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C2SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C2DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C2DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C2LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C2LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C2LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C2LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C2LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C2LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C2LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C2LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C3LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C3LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C3FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C3FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C3FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C3FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C3FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C3FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C3FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C3FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C3SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C3SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C3SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C3SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C3SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C3SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C3SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C3SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C3SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C3CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. The reset is/will be effective when the channel. i.e. either i) the active channel is in suspended state (i.e. GPDMA_CxSR.SUSPF=1 and GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=1) or ii) the channel is in disabled state (i.e. GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=0). After writing a RESET, if the user wants to continue using this channel, the user should explicitly reconfigure the channel including the hardware-modified configuration registers GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR, before enabling again the channel. Following the programming sequence in Figure 4: DMA channel abort and restart sequence. */
    using GPDMA_C3CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C3CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C3CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C3CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C3CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C3CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C3CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C3CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C3CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C3CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C3CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 1 */
    using GPDMA_C3TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst, in bytes- 00: byte- 01: half-word (2 bytes)- 10: word (4 bytes)- 11: a user setting error is reported and no transfer is issued.Note: Setting a 8-byte data width is causing a user setting error to be reported and none transfer is issued.Note: a source block size must be a multiple of the source data width (c.f. GPDMA_CxBR1.BNDT[2:0] vs SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: A source burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxSAR[2:0] and address offset GPDMA_CxTR3.SAO[2:0] vs SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C3TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source incrementing burst- 0: fixed burst- 1: contiguously incremented burstThe source address, pointed by DMA_CxSAR, is either kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C3TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source burst length minus 1 , between 0 and 63.Burst length unit is one data a.k.a. beat within a burst.If SBL_1[5:0]=0, then burst can be named as single.Each data/beat has a width defined by the source data width i.e. SDW_LOG2[1:0].Note: A burst transfer must have an aligned address (c.f. start address GPDMA_CxSAR and address offset GPDMA_CxTR3.SAO) with its data width (byte, half-word or word). Else a user setting error is reported and none transfer is issued.Note: If a burst transfer would have crossed a 1kB address boundary on a AHB transfer, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the AHB protocol.Note: If a burst transfer is of length greater than the FIFO size of the channel x, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the FIFO size. Transfer performance is lower, with DMA re-arbitration between effective and lower burst(s)/singles, but data integrity is guaranteed. */
    using GPDMA_C3TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PAM */
    using GPDMA_C3TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source byte exchange within the unaligned half-word of each source wordIf source data width is shorter than a word, this bit is ignored.If source data width is a word:- 0: no byte-based exchange within the unaligned half-word of each source word- 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged */
    using GPDMA_C3TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source allocated portAllocate the master port to the source transfer.- 0: port 0 (AHB) is allocated to the source transfer- 1: port 1 (AHB) is allocated to the source transferNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C3TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security attribute of the DMA transfer from the sourceThis is a secure register bit.This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx=1. A secure write is ignored when GPDMA_SECCFGR.SECx=0.When is de-asserted GPDMA_SECCFGR.SECx, this bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the DMA transfer from the source is non-secure.If GPDMA_SECCFGR.SECx=1 (and a secure access):- 0: non-secure- 1: secure */
    using GPDMA_C3TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the destination data width of a burst, in bytes- 00: byte- 01: half-word (2 bytes)- 10: word (4 bytes)- 11: a user setting error is reported and no transfer is issued.Note: Setting a 8-byte data width is causing a user setting error to be reported and none transfer is issued.Note: A destination burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: When configured in packing mode (i.e. if PAM[1]=1 and destination data width different from source data width), a source block size must be a multiple of the destination data width (c.f. GPDMA_CxBR1.BNDT[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C3TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination incrementing burst- 0: fixed burst- 1: contiguously incremented burstThe destination address, pointed by DMA_CxDAR, is either kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C3TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination burst length minus 1 , between 0 and 63.Burst length unit is one data a.k.a. beat within a burst.If DBL_1[5:0]=0, then burst can be named as single.Each data/beat has a width defined by the destination data width i.e. DDW_LOG2[1:0].Note: A burst transfer must have an aligned address with its data width (c.f. start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0] vs DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued.Note: If a burst transfer would have crossed a 1kB address boundary on a AHB transfer, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the AHB protocol.Note: If a burst transfer is of length greater than the FIFO size of the channel x, internally DMA modifies and shortens the programmed burst into single(s) or burst(s) of lower length, to be compliant with the FIFO size. Transfer performance is lower, with DMA re-arbitration between effective and lower burst(s)/singles, but data integrity is guaranteed. */
    using GPDMA_C3TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchangeIf destination data size is a byte, this bit is ignored.If destination data size is not a byte:- 0: no byte-based exchange within half-word- 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word */
    using GPDMA_C3TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination half-word exchangeIf destination data size is shorter than a word, this bit is ignored.If destination data size is a word:- 0: no halfword-based exchange within word- 1: the two consecutive (post PAM) half-words are exchanged in each destination word */
    using GPDMA_C3TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination allocated portAllocate the master port to the destination transfer.- 0: port 0 (AHB) is allocated to the destination transfer- 1: port 1 (AHB) is allocated to the destination transferNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C3TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief security attribute of the DMA transfer to the destinationThis is a secure register bit.This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx=1. A secure write is ignored when GPDMA_SECCFGR.SECx=0.When is de-asserted GPDMA_SECCFGR.SECx, this bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the DMA transfer to the destination is non-secure.If GPDMA_SECCFGR.SECx=1 (and a secure access):- 0: non-secure- 1: secure */
    using GPDMA_C3TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C3TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C3TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C3TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C3TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C3TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode */
    using GPDMA_C3TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C3TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C3TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C3TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C4TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C4TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C4TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C4TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C4TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode: rst read of a/each block transfer is conditioned by one hit trigger. */
    using GPDMA_C4TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C4TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C4TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode */
    using GPDMA_C4TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C5TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C5TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C5TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C5TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C5TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode */
    using GPDMA_C5TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C5TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C5TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C5TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C6TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x394, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C6TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C6TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C6TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C6TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode: Defines the transfer granularity for its conditioning by the trigger. If the channel x is enabled (i.e. when GPDMA_CxCR.EN is asserted) with TRIGPOL[1:0]=00 or 11, these bits are ignored. Else, a DMA transfer is conditioned by (at least) one trigger hit, either at: - 00: at block level (for channel x=12 to 15: for each block if a 2D/repeated block is configured i.e. if GPDMA_CxBR1.BRC[10:0]! = 0): the first burst read of a/each block transfer is conditioned by one hit trigger. - 01: at 2D/repeated block level for channel x=12 to 15; same as 00 for channel x=0 to 11 */
    using GPDMA_C6TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C6TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C6TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C6TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C7TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C7TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C7TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C7TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C7TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode: Defines the transfer granularity for its conditioning by the trigger. If the channel x is enabled (i.e. when GPDMA_CxCR.EN is asserted) with TRIGPOL[1:0]=00 or 11, these bits are ignored. Else, a DMA transfer is conditioned by (at least) one trigger hit, either at: - 00: at block level (for channel x=12 to 15: for each block if a 2D/repeated block is configured i.e. if GPDMA_CxBR1.BRC[10:0]! = 0): the first burst read of a/each block transfer is conditioned by one hit trigger. - 01: at 2D/repeated block level for channel x=12 to 15; same as 00 for channel x=0 to 11: the first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. */
    using GPDMA_C7TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C7TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C7TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C7TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C8TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x494, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C8TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C8TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C8TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C8TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode: Defines the transfer granularity for its conditioning by the trigger. If the channel x is enabled (i.e. when GPDMA_CxCR.EN is asserted) with TRIGPOL[1:0]=00 or 11, these bits are ignored. Else, a DMA transfer is conditioned by (at least) one trigger hit, either at: - 00: at block level (for channel x=12 to 15: for each block if a 2D/repeated block is configured i.e. if GPDMA_CxBR1.BRC[10:0]! = 0): the first burst read of a/each block transfer is conditioned by one hit trigger. - 01: at 2D/repeated block level for channel x=12 to 15; same as 00 for channel x=0 to 11: the first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. */
    using GPDMA_C8TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C8TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C8TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C8TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C9TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x514, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C9TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C9TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C9TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C9TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode: Defines the transfer granularity for its conditioning by the trigger. If the channel x is enabled (i.e. when GPDMA_CxCR.EN is asserted) with TRIGPOL[1:0]=00 or 11, these bits are ignored. Else, a DMA transfer is conditioned by (at least) one trigger hit, either at: - 00: at block level (for channel x=12 to 15: for each block if a 2D/repeated block is configured i.e. if GPDMA_CxBR1.BRC[10:0]! = 0): the first burst read of a/each block transfer is conditioned by one hit trigger. - 01: at 2D/repeated block level for channel x=12 to 15; same as 00 for channel x=0 to 11: the first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. */
    using GPDMA_C9TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C9TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C9TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C9TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C10TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x594, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C10TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C10TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C10TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C10TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode: Defines the transfer granularity for its conditioning by the trigger. If the channel x is enabled (i.e. when GPDMA_CxCR.EN is asserted) with TRIGPOL[1:0]=00 or 11, these bits are ignored. Else, a DMA transfer is conditioned by (at least) one trigger hit, either at: - 00: at block level (for channel x=12 to 15: for each block if a 2D/repeated block is configured i.e. if GPDMA_CxBR1.BRC[10:0]! = 0): the first burst read of a/each block transfer is conditioned by one hit trigger. - 01: at 2D/repeated block level for channel x=12 to 15; same as 00 for channel x=0 to 11: the first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. */
    using GPDMA_C10TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C10TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C10TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C10TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C11TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x614, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C11TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C11TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C11TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C11TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode: enabled. Transferring a next LLIn+1 which updates the GPDMA_CxTR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0] resets the monitoring, trashing the (possible) memorized hit of the formerly defined LLIn trigger. After that a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, this new second trigger hitn+2 is lost and not memorized. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0]=11 and (SWREQ=1 or (SWREQ=0 and DREQ=0)), the shortened burst transfer (by single(s) or/and by burst(s) of lower length) is conditioned once by the trigger. Note: When the programmed destination burst is internally shortened by single(s) or/and by burst(s) of lower length (e.g. vs FIFO size, vs block size, 1kB/4kB boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0]=11 and SWREQ=0 and DREQ=1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C11TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C11TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C11TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C11TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C12TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x694, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C12TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C12TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C12TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C12TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode: enabled. Transferring a next LLIn+1 which updates the GPDMA_CxTR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0] resets the monitoring, trashing the (possible) memorized hit of the formerly defined LLIn trigger. After that a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, this new second trigger hitn+2 is lost and not memorized. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0]=11 and (SWREQ=1 or (SWREQ=0 and DREQ=0)), the shortened burst transfer (by single(s) or/and by burst(s) of lower length) is conditioned once by the trigger. Note: When the programmed destination burst is internally shortened by single(s) or/and by burst(s) of lower length (e.g. vs FIFO size, vs block size, 1kB/4kB boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0]=11 and SWREQ=0 and DREQ=1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C12TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C12TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C12TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C12TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C13TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x714, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C13TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C13TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C13TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C13TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode: enabled. Transferring a next LLIn+1 which updates the GPDMA_CxTR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0] resets the monitoring, trashing the (possible) memorized hit of the formerly defined LLIn trigger. After that a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, this new second trigger hitn+2 is lost and not memorized. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0]=11 and (SWREQ=1 or (SWREQ=0 and DREQ=0)), the shortened burst transfer (by single(s) or/and by burst(s) of lower length) is conditioned once by the trigger. Note: When the programmed destination burst is internally shortened by single(s) or/and by burst(s) of lower length (e.g. vs FIFO size, vs block size, 1kB/4kB boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0]=11 and SWREQ=0 and DREQ=1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C13TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C13TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C13TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C13TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C14TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x794, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C14TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C14TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C14TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C14TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode: enabled. Transferring a next LLIn+1 which updates the GPDMA_CxTR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0] resets the monitoring, trashing the (possible) memorized hit of the formerly defined LLIn trigger. After that a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, this new second trigger hitn+2 is lost and not memorized. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0]=11 and (SWREQ=1 or (SWREQ=0 and DREQ=0)), the shortened burst transfer (by single(s) or/and by burst(s) of lower length) is conditioned once by the trigger. Note: When the programmed destination burst is internally shortened by single(s) or/and by burst(s) of lower length (e.g. vs FIFO size, vs block size, 1kB/4kB boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0]=11 and SWREQ=0 and DREQ=1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C14TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C14TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C14TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C14TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 2 */
    using GPDMA_C15TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x814, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else, the selected hardware request as per Table 12 is internally taken into account. Note: The user must not assign a same input hardware request (i.e. a same REQSEL[6:0] value) to different active DMA channels (i.e. if GPDMA_CxCR.EN=1 and GPDMA_CxTR2.SWREQ=0 for the related x channels). In other words, DMA is not intended to hardware support the case of simultaneous enabled channels having been -incorrectly- configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C15TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software request When GPDMA_CxCR.EN is asserted, this field is internally taken into account: - 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. - 1: software request (for a memory-to-memory transfer). And the default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C15TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Destination hardware request If the channel x is activated (i.e. GPDMA_CxCR.EN is asserted) with SWREQ=1 (i.e. software request for a memory-to-memory transfer), this bit is ignored. Else: - 0: the selected hardware request is driven by a source peripheral (i.e. this request signal is taken into account by the DMA transfer scheduler over the source/read port) - 1: the selected hardware request is driven by a destination peripheral (.e. this request signal is taken into account by the DMA transfer scheduler over the destination/write port) */
    using GPDMA_C15TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BREQ */
    using GPDMA_C15TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger mode: enabled. Transferring a next LLIn+1 which updates the GPDMA_CxTR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0] resets the monitoring, trashing the (possible) memorized hit of the formerly defined LLIn trigger. After that a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, this new second trigger hitn+2 is lost and not memorized. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0]=11 and (SWREQ=1 or (SWREQ=0 and DREQ=0)), the shortened burst transfer (by single(s) or/and by burst(s) of lower length) is conditioned once by the trigger. Note: When the programmed destination burst is internally shortened by single(s) or/and by burst(s) of lower length (e.g. vs FIFO size, vs block size, 1kB/4kB boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0]=11 and SWREQ=0 and DREQ=1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C15TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event input selection Note: Selects the trigger event input as per Table 13 of the DMA transfer, with an active trigger event if TRIGPOL[1:0] !=00. */
    using GPDMA_C15TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger event polarity Defines the polarity of the selected trigger event input defined by TRIGSEL[5:0]. - 00: no trigger. Masked trigger event. - 01: trigger on the rising edge - 10: trigger on the falling edge - 11: same as 00 */
    using GPDMA_C15TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete event mode Defines the transfer granularity for the transfer complete (and half transfer complete) event generation. - 00: at block level (i.e. when GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 01: channel x=0 to 11: same as 00 ;channel x=12 to 15: at 2D/repeated block level (i.e. when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0): the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then neither the complete transfer event nor the half transfer event is generated. - 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block or a 2D/repeated block transfer), if any data transfer. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0]=0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. - 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI is the one that updates the link address GPDMA_CxLLR.LA[15:2] to zero and that clears all the update bits - UT1, UT2, UB1, USA, UDA, if present UT3, UB2 and ULL - of the GPDMA_CxLLR register. If the channel transfer is continuous/infinite, no event is generated. */
    using GPDMA_C15TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C3BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C3BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C4BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C4BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C5BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C5BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C6BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x398, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C6BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C7BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C7BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C8BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x498, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C8BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C9BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x518, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C9BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C10BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x598, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C10BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C11BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x618, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C11BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C12BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x698, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C12BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRC */
    using GPDMA_C12BR1_BRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDEC */
    using GPDMA_C12BR1_SDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DDEC */
    using GPDMA_C12BR1_DDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRSDEC */
    using GPDMA_C12BR1_BRSDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRDDEC */
    using GPDMA_C12BR1_BRDDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C13BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x718, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C13BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRC */
    using GPDMA_C13BR1_BRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDEC */
    using GPDMA_C13BR1_SDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DDEC */
    using GPDMA_C13BR1_DDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRSDEC */
    using GPDMA_C13BR1_BRSDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRDDEC */
    using GPDMA_C13BR1_BRDDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C14BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x798, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C14BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRC */
    using GPDMA_C14BR1_BRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDEC */
    using GPDMA_C14BR1_SDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DDEC */
    using GPDMA_C14BR1_DDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRSDEC */
    using GPDMA_C14BR1_BRSDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRDDEC */
    using GPDMA_C14BR1_BRDDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 1 */
    using GPDMA_C15BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x818, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C15BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRC */
    using GPDMA_C15BR1_BRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDEC */
    using GPDMA_C15BR1_SDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DDEC */
    using GPDMA_C15BR1_DDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRSDEC */
    using GPDMA_C15BR1_BRSDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRDDEC */
    using GPDMA_C15BR1_BRDDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C3SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C3SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C4SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C4SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C5SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C5SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C6SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x39C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C6SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C7SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C7SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C8SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x49C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C8SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C9SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x51C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C9SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C10SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x59C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C10SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C11SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x61C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C11SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C12SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x69C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C12SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C13SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x71C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C13SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C14SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x79C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C14SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x source address register */
    using GPDMA_C15SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x81C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C15SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C3DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C3DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C4DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C4DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C5DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C5DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C6DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C6DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C7DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C7DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C8DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C8DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C9DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x520, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C9DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C10DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C10DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C11DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x620, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C11DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C12DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C12DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C13DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x720, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C13DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C14DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C14DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x destination address register */
    using GPDMA_C15DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x820, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C15DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C3LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C3LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C3LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C3LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C3LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C3LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C3LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C3LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C4LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C4LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C4LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C4LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C4LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C4LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C4LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C4LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C5LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C5LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C5LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C5LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C5LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C5LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C5LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C5LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C6LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C6LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C6LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C6LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C6LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C6LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C6LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C6LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C7LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C7LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C7LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C7LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C7LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C7LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C7LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C7LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C8LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C8LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C8LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C8LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C8LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C8LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C8LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C8LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C9LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C9LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C9LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C9LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C9LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C9LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C9LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C9LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C10LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C10LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C10LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C10LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C10LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C10LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C10LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C10LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C11LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C11LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C11LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C11LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C11LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C11LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C11LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C11LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C12LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C12LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C12LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR2 from memory This bit controls the update of the GPDMA_CxBR2 register from the memory during the link transfer. - 0: no GPDMA_CxBR2 update - 1: GPDMA_CxBR2 update */
    using GPDMA_C12LLR_UB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR3 from memory This bit controls the update of the GPDMA_CxTR3 register from the memory during the link transfer. - 0: no GPDMA_CxTR3 update - 1: GPDMA_CxTR3 update */
    using GPDMA_C12LLR_UT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C12LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C12LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C12LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C12LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C12LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C13LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C13LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C13LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR2 from memory This bit controls the update of the GPDMA_CxBR2 register from the memory during the link transfer. - 0: no GPDMA_CxBR2 update - 1: GPDMA_CxBR2 update */
    using GPDMA_C13LLR_UB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR3 from memory This bit controls the update of the GPDMA_CxTR3 register from the memory during the link transfer. - 0: no GPDMA_CxTR3 update - 1: GPDMA_CxTR3 update */
    using GPDMA_C13LLR_UT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C13LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C13LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C13LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C13LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C13LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C14LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C14LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C14LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR2 from memory This bit controls the update of the GPDMA_CxBR2 register from the memory during the link transfer. - 0: no GPDMA_CxBR2 update - 1: GPDMA_CxBR2 update */
    using GPDMA_C14LLR_UB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR3 from memory This bit controls the update of the GPDMA_CxTR3 register from the memory during the link transfer. - 0: no GPDMA_CxTR3 update - 1: GPDMA_CxTR3 update */
    using GPDMA_C14LLR_UT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C14LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C14LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C14LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C14LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C14LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x linked-list address register */
    using GPDMA_C15LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low significant address) to the next linked-list data structure If UT1=UT2=UB1=USA=UDA=ULL=0 and if LA[15:2]=0: the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure will be automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file i.e. possibly GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR. Note: The user should program the pointer to be 32-bit aligned. The two low significant bits are write ignored. */
    using GPDMA_C15LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR from memory This bit controls the update of the GPDMA_CxLLR register from the memory during the link transfer. - 0: no GPDMA_CxLLR update - 1: GPDMA_CxLLR update */
    using GPDMA_C15LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR2 from memory This bit controls the update of the GPDMA_CxBR2 register from the memory during the link transfer. - 0: no GPDMA_CxBR2 update - 1: GPDMA_CxBR2 update */
    using GPDMA_C15LLR_UB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR3 from memory This bit controls the update of the GPDMA_CxTR3 register from the memory during the link transfer. - 0: no GPDMA_CxTR3 update - 1: GPDMA_CxTR3 update */
    using GPDMA_C15LLR_UT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxDAR from memory This bit controls the update of the GPDMA_CxDAR register from the memory during the link transfer. - 0: no GPDMA_CxDAR update - 1: GPDMA_CxDAR update */
    using GPDMA_C15LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxSAR from memory This bit controls the update of the GPDMA_CxSAR register from the memory during the link transfer. - 0: no GPDMA_CxSAR update - 1: GPDMA_CxSAR update */
    using GPDMA_C15LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of the GPDMA_CxBR1 register from the memory during the link transfer. If UB1=0 and if GPDMA_CxLLR != 0, the linked-list is not completed. Then GPDMA_CxBR1.BNDT[15:0] is restored to the programmed value after data transfer is completed and before the link transfer. - 0: no GPDMA_CxBR1 update (GPDMA_CxBR1.BNDT[15:0] is restored, if any link transfer) - 1: GPDMA_CxBR1 update */
    using GPDMA_C15LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of the GPDMA_CxTR2 register from the memory during the link transfer. - 0: no GPDMA_CxTR2 update - 1: GPDMA_CxTR2 update */
    using GPDMA_C15LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of the GPDMA_CxTR1 register from the memory during the link transfer. - 0: no GPDMA_CxTR1 update - 1: GPDMA_CxTR1 update */
    using GPDMA_C15LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C4LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C4LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C5LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C5LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C6LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x350, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C6LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C7LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C7LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C8LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x450, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C8LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C9LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C9LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C10LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x550, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C10LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C11LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C11LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C12LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x650, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C12LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C13LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C13LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C14LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x750, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C14LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x linked-list base address register */
    using GPDMA_C15LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of DMA channel x */
    using GPDMA_C15LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C4FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x25C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C4FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C4FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C4FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C4FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C4FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C4FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C4FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C5FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C5FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C5FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C5FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C5FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C5FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C5FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C5FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C6FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x35C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C6FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C6FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C6FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C6FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C6FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C6FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C6FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C7FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C7FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C7FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C7FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C7FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C7FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C7FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C7FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C8FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C8FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C8FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C8FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C8FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C8FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C8FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C8FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C9FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C9FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C9FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C9FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C9FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C9FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C9FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C9FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C10FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x55C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C10FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C10FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C10FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C10FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C10FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C10FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C10FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C11FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C11FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C11FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C11FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C11FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C11FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C11FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C11FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C12FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x65C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C12FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C12FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C12FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C12FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C12FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C12FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C12FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C13FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C13FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C13FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C13FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C13FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C13FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C13FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C13FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C14FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x75C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C14FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C14FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C14FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C14FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C14FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C14FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C14FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x flag clear register */
    using GPDMA_C15FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear - 0: no effect - 1: clears the corresponding TCF flag */
    using GPDMA_C15FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear - 0: no effect - 1: clears the corresponding HTF flag */
    using GPDMA_C15FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag clear - 0: no effect - 1: clears the corresponding DTEF flag */
    using GPDMA_C15FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag clear - 0: no effect - 1: clears the corresponding ULEF flag */
    using GPDMA_C15FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag clear - 0: no effect - 1: clears the corresponding USEF flag */
    using GPDMA_C15FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag clear - 0: no effect - 1: clears the corresponding SUSPF flag */
    using GPDMA_C15FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger overrun flag clear */
    using GPDMA_C15FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C4SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C4SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C4SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C4SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C4SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C4SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C4SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C4SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C4SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C5SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C5SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C5SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C5SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C5SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C5SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C5SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C5SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C5SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C6SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x360, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C6SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C6SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C6SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C6SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C6SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C6SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C6SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C6SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C7SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C7SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C7SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C7SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C7SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C7SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C7SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C7SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C7SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C8SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x460, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C8SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C8SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C8SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C8SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C8SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C8SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C8SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C8SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C9SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C9SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C9SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C9SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C9SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C9SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C9SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C9SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C9SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C10SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x560, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C10SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C10SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C10SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C10SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C10SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C10SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C10SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C10SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C11SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C11SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C11SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C11SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C11SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C11SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C11SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C11SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C11SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C12SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x660, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C12SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C12SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C12SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C12SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C12SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C12SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C12SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C12SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C13SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C13SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C13SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C13SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C13SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C13SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C13SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C13SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C13SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C14SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x760, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C14SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C14SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C14SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C14SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C14SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C14SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C14SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C14SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x status register */
    using GPDMA_C15SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag - 0: the channel is not in idle state - 1: the channel is in idle state This idle flag is de-asserted by hardware when the channel is enabled (i.e. is written 1 into GPDMA_CxCR.EN) with a valid channel configuration (i.e. no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (i.e. in suspended or disabled state). */
    using GPDMA_C15SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag - 0: no transfer complete event - 1: a transfer complete event occurred A transfer complete event is either a block transfer complete or a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. */
    using GPDMA_C15SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag - 0: no half transfer event - 1: an half transfer event occurred An half transfer event is either an half block transfer or an half 2D/repeated block transfer, depending on the transfer complete event mode i.e. GPDMA_CxTR2.TCEM[1:0]. An half block transfer occurs when half of the bytes of the source block size (i.e. rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. Half 2D/repeated block transfer occurs when half of the repeated blocks (i.e. rounded up integer of (GPDMA_CxBR1.BRC[10:0]+1)/2) have been transferred to the destination. */
    using GPDMA_C15SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error flag - 0: no data transfer error event - 1: a master bus error event occurred on a data transfer */
    using GPDMA_C15SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error flag - 0: no update link transfer error event - 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C15SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error flag - 0: no user setting error event - 1: a user setting error event occurred */
    using GPDMA_C15SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension flag - 0: no completed suspension event - 1: a completed suspension event occurred */
    using GPDMA_C15SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (c.f. GPDMA_CxTR1.DDW_LOG2[1:0], i.e. in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] and GPDMA_CxBR1.BRC[10:0] in order to know exactly how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be indeed suspended i.e. GPDMA_CxSR.SUSPF=1. */
    using GPDMA_C15SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C4CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset */
    using GPDMA_C4CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C4CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C4CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C4CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C4CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C4CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C4CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C4CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C4CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C4CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C4CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C5CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. The reset is/will be effective when the channel is in state i.e. either i) the active channel is in suspended state (i.e. GPDMA_CxSR.SUSPF=1 and GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=1) or ii) the channel is in disabled state (i.e. GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=0). After writing a RESET, if the user wants to continue using this channel, the user should explicitly reconfigure the channel including the hardware-modified configuration registers GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR, before enabling again the channel. Following the programming sequence in Figure 4: DMA channel abort and restart sequence. */
    using GPDMA_C5CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C5CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C5CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C5CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C5CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C5CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C5CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C5CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C5CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C5CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C5CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x364, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C6CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. The reset is/will be effective when the channel is in state i.e. either i) the active channel is in suspended state (i.e. GPDMA_CxSR.SUSPF=1 and GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=1) or ii) the channel is in disabled state (i.e. GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=0). After writing a RESET, if the user wants to continue using this channel, the user should explicitly reconfigure the channel including the hardware-modified configuration registers GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR, before enabling again the channel. Following the programming sequence in Figure 4: DMA channel abort and restart sequence. */
    using GPDMA_C6CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C6CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C6CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C6CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C6CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C6CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C6CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C6CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C6CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C6CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C6CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C7CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C7CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset */
    using GPDMA_C7CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C7CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C7CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C7CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C7CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C7CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C7CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C7CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C7CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C7CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C7CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C8CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x464, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C8CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. The reset is/will be effective when the channel is in state i.e. either i) the active channel is in suspended state (i.e. GPDMA_CxSR.SUSPF=1 and GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=1) or ii) the channel is in disabled state (i.e. GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=0). After writing a RESET, if the user wants to continue using this channel, the user should explicitly reconfigure the channel including the hardware-modified configuration registers GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR, before enabling again the channel. Following the programming sequence in Figure 4: DMA channel abort and restart sequence. */
    using GPDMA_C8CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C8CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C8CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C8CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C8CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C8CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C8CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C8CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C8CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C8CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C8CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C9CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C9CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. The reset is/will be effective when the channel is in state i.e. either i) the active channel is in suspended state (i.e. GPDMA_CxSR.SUSPF=1 and GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=1) or ii) the channel is in disabled state (i.e. GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=0). After writing a RESET, if the user wants to continue using this channel, the user should explicitly reconfigure the channel including the hardware-modified configuration registers GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR, before enabling again the channel. Following the programming sequence in Figure 4: DMA channel abort and restart sequence. */
    using GPDMA_C9CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C9CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C9CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C9CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C9CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C9CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C9CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C9CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C9CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C9CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C9CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C10CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x564, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C10CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. The reset is/will be effective when the channel is in state i.e. either i) the active channel is in suspended state (i.e. GPDMA_CxSR.SUSPF=1 and GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=1) or ii) the channel is in disabled state (i.e. GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=0). After writing a RESET, if the user wants to continue using this channel, the user should explicitly reconfigure the channel including the hardware-modified configuration registers GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR, before enabling again the channel. Following the programming sequence in Figure 4: DMA channel abort and restart sequence. */
    using GPDMA_C10CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C10CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C10CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C10CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C10CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C10CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C10CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C10CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C10CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C10CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C10CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C11CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C11CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. The reset is/will be effective when the channel is in state i.e. either i) the active channel is in suspended state (i.e. GPDMA_CxSR.SUSPF=1 and GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=1) or ii) the channel is in disabled state (i.e. GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=0). After writing a RESET, if the user wants to continue using this channel, the user should explicitly reconfigure the channel including the hardware-modified configuration registers GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR, before enabling again the channel. Following the programming sequence in Figure 4: DMA channel abort and restart sequence. */
    using GPDMA_C11CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C11CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C11CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C11CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C11CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C11CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C11CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C11CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C11CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C11CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C11CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C12CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x664, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C12CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. The reset is/will be effective when the channel is in state i.e. either i) the active channel is in suspended state (i.e. GPDMA_CxSR.SUSPF=1 and GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=1) or ii) the channel is in disabled state (i.e. GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=0). After writing a RESET, if the user wants to continue using this channel, the user should explicitly reconfigure the channel including the hardware-modified configuration registers GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR, before enabling again the channel. Following the programming sequence in Figure 4: DMA channel abort and restart sequence. */
    using GPDMA_C12CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C12CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C12CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C12CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C12CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C12CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C12CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C12CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C12CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C12CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C12CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C13CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C13CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. The reset is/will be effective when the channel is in state i.e. either i) the active channel is in suspended state (i.e. GPDMA_CxSR.SUSPF=1 and GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=1) or ii) the channel is in disabled state (i.e. GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=0). After writing a RESET, if the user wants to continue using this channel, the user should explicitly reconfigure the channel including the hardware-modified configuration registers GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR, before enabling again the channel. Following the programming sequence in Figure 4: DMA channel abort and restart sequence. */
    using GPDMA_C13CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C13CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C13CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C13CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C13CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C13CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C13CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C13CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C13CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C13CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C13CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C14CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x764, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C14CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. The reset is/will be effective when the channel is in state i.e. either i) the active channel is in suspended state (i.e. GPDMA_CxSR.SUSPF=1 and GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=1) or ii) the channel is in disabled state (i.e. GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=0). After writing a RESET, if the user wants to continue using this channel, the user should explicitly reconfigure the channel including the hardware-modified configuration registers GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR, before enabling again the channel. Following the programming sequence in Figure 4: DMA channel abort and restart sequence. */
    using GPDMA_C14CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C14CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C14CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C14CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C14CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C14CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C14CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C14CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C14CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C14CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C14CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel x control register */
    using GPDMA_C15CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable - 0: write: ignored, read: channel disabled - 1: write: enable channel, read: channel enabled Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: * this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). * Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C15CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reset - 0: no channel reset - 1: channel reset This bit is write only. Writing 0 has no impact. Writing 1 implies/will imply the reset of the FIFO, the reset of the channel internal state, and the reset of the SUSP and EN bits, whatever is written in respectively bit 2 and bit 0. The reset is/will be effective when the channel is in state i.e. either i) the active channel is in suspended state (i.e. GPDMA_CxSR.SUSPF=1 and GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=1) or ii) the channel is in disabled state (i.e. GPDMA_CxSR.IDLEF=1 and GPDMA_CxCR.EN=0). After writing a RESET, if the user wants to continue using this channel, the user should explicitly reconfigure the channel including the hardware-modified configuration registers GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR, before enabling again the channel. Following the programming sequence in Figure 4: DMA channel abort and restart sequence. */
    using GPDMA_C15CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief suspend - 0: write: resume channel, read: channel not suspended - 1: write: suspend channel, read: channel suspended Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. Software must write 0 in order to resume a suspended channel, following the programming sequence in Figure 3: DMA channel suspend and resume sequence. */
    using GPDMA_C15CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C15CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer complete interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C15CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C15CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief update link transfer error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C15CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user setting error interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C15CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief completed suspension interrupt enable - 0: interrupt disabled - 1: interrupt enabled */
    using GPDMA_C15CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Step mode:- 0: channel is executed for the full linked-list, and completed at the end (if any) of the last LLI i.e. when GPDMA_CxLLR=0: the 16 low significant bits of the link address are null (LA[15:0]=0) and all the update bits are null i.e. UT1=UB1=UT2=USA=UDA=UB2 =UT3=ULL=0. Then GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0.- 1: channel is executed once for the current LLI:* First the (possibly 2D/repeated) block transfer is executed as defined by the current internal register file until that (GPDMA_CxBR1.BRC[10:0]=0 and GPDMA_CxBR1.BNDT[15:0]=0).* Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR register. Then channel execution is completed.Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C15CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list allocated portAllocate the master port for the update of the DMA linked-list registers from the memory.- 0: port 0 (AHB) is allocated for the update of the DMA linked-list channel x registers- 1: port 1 (AHB) is allocated for the update of the DMA linked-list channel x registersNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C15CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief priority level of the DMA transfer of the channel x vs others- 00: low priority, low weight- 01: low priority, mid weight- 10: low priority, high weight- 11: high priorityNote: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C15CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 3 */
    using GPDMA_C12TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address offset increment The source address, pointed by GPDMA_CxSAR, is incremented or decremented (depending on GPDMA_CxBR1.SDEC) by this offset SAO[12:0] for each programmed source burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode i.e. if GPDMA_CxTR1.SINC=1. Note: A source address offset must be aligned with the programmed data width of a source burst (c.f. SAO[2:0] vs GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C12TR3_SAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address offset increment The destination address, pointed by GPDMA_CxDAR, is incremented or decremented (depending on GPDMA_CxBR1.DDEC) by this offset DAO[12:0] for each programmed destination burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode i.e. if GPDMA_CxTR1.DINC=1. Note: A destination address offset must be aligned with the programmed data width of a destination burst (c.f. DAO[2:0] vs GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. Note: When the source block size is not a multiple of the destination burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C12TR3_DAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 3 */
    using GPDMA_C13TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x724, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address offset increment The source address, pointed by GPDMA_CxSAR, is incremented or decremented (depending on GPDMA_CxBR1.SDEC) by this offset SAO[12:0] for each programmed source burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode i.e. if GPDMA_CxTR1.SINC=1. Note: A source address offset must be aligned with the programmed data width of a source burst (c.f. SAO[2:0] vs GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C13TR3_SAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address offset increment The destination address, pointed by GPDMA_CxDAR, is incremented or decremented (depending on GPDMA_CxBR1.DDEC) by this offset DAO[12:0] for each programmed destination burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode i.e. if GPDMA_CxTR1.DINC=1. Note: A destination address offset must be aligned with the programmed data width of a destination burst (c.f. DAO[2:0] vs GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. Note: When the source block size is not a multiple of the destination burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C13TR3_DAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 3 */
    using GPDMA_C14TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address offset increment The source address, pointed by GPDMA_CxSAR, is incremented or decremented (depending on GPDMA_CxBR1.SDEC) by this offset SAO[12:0] for each programmed source burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode i.e. if GPDMA_CxTR1.SINC=1. Note: A source address offset must be aligned with the programmed data width of a source burst (c.f. SAO[2:0] vs GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C14TR3_SAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address offset increment The destination address, pointed by GPDMA_CxDAR, is incremented or decremented (depending on GPDMA_CxBR1.DDEC) by this offset DAO[12:0] for each programmed destination burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode i.e. if GPDMA_CxTR1.DINC=1. Note: A destination address offset must be aligned with the programmed data width of a destination burst (c.f. DAO[2:0] vs GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. Note: When the source block size is not a multiple of the destination burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C14TR3_DAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x transfer register 3 */
    using GPDMA_C15TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x824, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address offset increment The source address, pointed by GPDMA_CxSAR, is incremented or decremented (depending on GPDMA_CxBR1.SDEC) by this offset SAO[12:0] for each programmed source burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode i.e. if GPDMA_CxTR1.SINC=1. Note: A source address offset must be aligned with the programmed data width of a source burst (c.f. SAO[2:0] vs GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C15TR3_SAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address offset increment The destination address, pointed by GPDMA_CxDAR, is incremented or decremented (depending on GPDMA_CxBR1.DDEC) by this offset DAO[12:0] for each programmed destination burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode i.e. if GPDMA_CxTR1.DINC=1. Note: A destination address offset must be aligned with the programmed data width of a destination burst (c.f. DAO[2:0] vs GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. Note: When the source block size is not a multiple of the destination burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C15TR3_DAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 2 */
    using GPDMA_C12BR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated source address offset For a channel with 2D addressing capability, this field BRSAO[15:0] is used to update (by addition or subtraction depending on GPDMA_CxBR1.BRSDEC) the current source address (i.e. GPDMA_CxSAR) at the end of a block transfer. Note: A block repeated source address offset must be aligned with the programmed data width of a source burst (c.f. BRSAO[2:0] vs GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C12BR2_BRSAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated destination address offset For a channel with 2D addressing capability, this field BRDAO[15:0] is used to update (by addition or subtraction depending on GPDMA_CxBR1.BRDDEC) the current destination address (i.e. GPDMA_CxDAR) at the end of a block transfer. Note: A block repeated destination address offset must be aligned with the programmed data width of a destination burst (c.f. BRDAO[2:0] vs GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C12BR2_BRDAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 2 */
    using GPDMA_C13BR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x728, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated source address offset For a channel with 2D addressing capability, this field BRSAO[15:0] is used to update (by addition or subtraction depending on GPDMA_CxBR1.BRSDEC) the current source address (i.e. GPDMA_CxSAR) at the end of a block transfer. Note: A block repeated source address offset must be aligned with the programmed data width of a source burst (c.f. BRSAO[2:0] vs GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C13BR2_BRSAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated destination address offset For a channel with 2D addressing capability, this field BRDAO[15:0] is used to update (by addition or subtraction depending on GPDMA_CxBR1.BRDDEC) the current destination address (i.e. GPDMA_CxDAR) at the end of a block transfer. Note: A block repeated destination address offset must be aligned with the programmed data width of a destination burst (c.f. BRDAO[2:0] vs GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C13BR2_BRDAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 2 */
    using GPDMA_C14BR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated source address offset For a channel with 2D addressing capability, this field BRSAO[15:0] is used to update (by addition or subtraction depending on GPDMA_CxBR1.BRSDEC) the current source address (i.e. GPDMA_CxSAR) at the end of a block transfer. Note: A block repeated source address offset must be aligned with the programmed data width of a source burst (c.f. BRSAO[2:0] vs GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C14BR2_BRSAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated destination address offset For a channel with 2D addressing capability, this field BRDAO[15:0] is used to update (by addition or subtraction depending on GPDMA_CxBR1.BRDDEC) the current destination address (i.e. GPDMA_CxDAR) at the end of a block transfer. Note: A block repeated destination address offset must be aligned with the programmed data width of a destination burst (c.f. BRDAO[2:0] vs GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C14BR2_BRDAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel x block register 2 */
    using GPDMA_C15BR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x828, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated source address offset For a channel with 2D addressing capability, this field BRSAO[15:0] is used to update (by addition or subtraction depending on GPDMA_CxBR1.BRSDEC) the current source address (i.e. GPDMA_CxSAR) at the end of a block transfer. Note: A block repeated source address offset must be aligned with the programmed data width of a source burst (c.f. BRSAO[2:0] vs GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C15BR2_BRSAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated destination address offset For a channel with 2D addressing capability, this field BRDAO[15:0] is used to update (by addition or subtraction depending on GPDMA_CxBR1.BRDDEC) the current destination address (i.e. GPDMA_CxDAR) at the end of a block transfer. Note: A block repeated destination address offset must be aligned with the programmed data width of a destination burst (c.f. BRDAO[2:0] vs GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using GPDMA_C15BR2_BRDAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
