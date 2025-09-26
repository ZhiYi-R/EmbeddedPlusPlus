/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBAXX_SEC_LPDMA1_HPP
#define EMBEDDED_PP_STM32WBAXX_SEC_LPDMA1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief LPDMA1 */
namespace STM32WBAxx::SEC_LPDMA1 {

    /** @brief LPDMA secure configuration register */
    using LPDMA_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC0 */
    using LPDMA_SECCFGR_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1 */
    using LPDMA_SECCFGR_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2 */
    using LPDMA_SECCFGR_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC3 */
    using LPDMA_SECCFGR_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA privileged configuration register */
    using LPDMA_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV0 */
    using LPDMA_PRIVCFGR_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1 */
    using LPDMA_PRIVCFGR_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2 */
    using LPDMA_PRIVCFGR_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV3 */
    using LPDMA_PRIVCFGR_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA configuration lock register */
    using LPDMA_RCFGLOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK0 */
    using LPDMA_RCFGLOCKR_LOCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK1 */
    using LPDMA_RCFGLOCKR_LOCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK2 */
    using LPDMA_RCFGLOCKR_LOCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK3 */
    using LPDMA_RCFGLOCKR_LOCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA non-secure masked interrupt status register */
    using LPDMA_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS0 */
    using LPDMA_MISR_MIS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS1 */
    using LPDMA_MISR_MIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS2 */
    using LPDMA_MISR_MIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS3 */
    using LPDMA_MISR_MIS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA secure masked interrupt status register */
    using LPDMA_SMISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS0 */
    using LPDMA_SMISR_MIS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS1 */
    using LPDMA_SMISR_MIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS2 */
    using LPDMA_SMISR_MIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS3 */
    using LPDMA_SMISR_MIS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 0 linked-list base address register */
    using LPDMA_C0LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of LPDMA channel x */
    using LPDMA_C0LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 0 flag clear register */
    using LPDMA_C0FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using LPDMA_C0FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C0FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t LPDMA_C0FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using LPDMA_C0FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C0FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t LPDMA_C0FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using LPDMA_C0FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C0FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t LPDMA_C0FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using LPDMA_C0FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C0FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t LPDMA_C0FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using LPDMA_C0FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C0FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t LPDMA_C0FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using LPDMA_C0FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C0FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t LPDMA_C0FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using LPDMA_C0FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the corresponding TOF flag (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C0FCR_TOF_B_0x0 = 0;
        /** @brief clears the corresponding TOF flag */
    constexpr std::uint32_t LPDMA_C0FCR_TOF_B_0x1 = 1;

    /** @brief LPDMA channel 0 status register */
    using LPDMA_C0SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is de-asserted by hardware when the channel is enabled (LPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using LPDMA_C0SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t LPDMA_C0SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t LPDMA_C0SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is a block transfer complete or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode LPDMA_CxTR2.TCEM[1:0]. */
    using LPDMA_C0SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t LPDMA_C0SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t LPDMA_C0SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag An half transfer event is an half block transfer that occurs when half of the bytes of the source block size (rounded-up integer of LPDMA_CxBR1.BNDT[15:0] / 2) has been transferred to the destination. */
    using LPDMA_C0SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t LPDMA_C0SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t LPDMA_C0SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using LPDMA_C0SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t LPDMA_C0SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t LPDMA_C0SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using LPDMA_C0SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t LPDMA_C0SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t LPDMA_C0SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using LPDMA_C0SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t LPDMA_C0SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t LPDMA_C0SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using LPDMA_C0SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t LPDMA_C0SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t LPDMA_C0SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using LPDMA_C0SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the corresponding TOF flag (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C0SR_TOF_B_0x0 = 0;
        /** @brief clears the corresponding TOF flag */
    constexpr std::uint32_t LPDMA_C0SR_TOF_B_0x1 = 1;

    /** @brief LPDMA channel 0 control register */
    using LPDMA_C0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using LPDMA_C0CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t LPDMA_C0CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t LPDMA_C0CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (LPDMA_CxSR.SUSPF = 1 and LPDMA_CxSR.IDLEF = LPDMA_CxCR.EN = 1) - channel in disabled state (LPDMA_CxSR.IDLEF = 1 and LPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (LPDMA_CxBR1, LPDMA_CxSAR and LPDMA_CxDAR) before enabling again the channel (see the programming sequence in ). */
    using LPDMA_C0CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t LPDMA_C0CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t LPDMA_C0CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in sequence. */
    using LPDMA_C0CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t LPDMA_C0CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t LPDMA_C0CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using LPDMA_C0CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C0CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C0CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using LPDMA_C0CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C0CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C0CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using LPDMA_C0CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C0CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C0CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using LPDMA_C0CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C0CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C0CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using LPDMA_C0CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C0CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C0CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using LPDMA_C0CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C0CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C0CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using LPDMA_C0CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C0CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C0CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the block transfer is executed as defined by the current internal register file until LPDMA_CxBR1.BNDT[15:0 ] =0). Secondly the next linked-list data structure is conditionally uploaded from memory as defined by LPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using LPDMA_C0CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then LPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then LPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t LPDMA_C0CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t LPDMA_C0CR_LSM_B_0x1 = 1;

    /** @brief priority level of the channel x LPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using LPDMA_C0CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t LPDMA_C0CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t LPDMA_C0CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t LPDMA_C0CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t LPDMA_C0CR_PRIO_B_0x3 = 3;

    /** @brief LPDMA channel 0 transfer register 1 */
    using LPDMA_C0TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. a source block size must be a multiple of the source data width (LPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. A source single transfer must have an aligned address with its data width (start address LPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using LPDMA_C0TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t LPDMA_C0TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t LPDMA_C0TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t LPDMA_C0TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t LPDMA_C0TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing single The source address, pointed by LPDMA_CxSAR, is kept constant after a single transfer or is incremented by the offset value corresponding to a contiguous data after a single transfer. */
    using LPDMA_C0TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C0TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C0TR1_SINC_B_0x1 = 1;

    /** @brief padding/alignment mode If DDW_LOG2[1:0]=SDW_LOG2[1:0]: if the data width of a single destination transfer is equal to the data width of a single source transfer, this bit is ignored. Else: Case 1: If destination data width > source data width Case 2: If destination data width < source data width */
    using LPDMA_C0TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x0: source data is transferred as right aligned, left-truncated down to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as left-aligned, right-truncated down to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t LPDMA_C0TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t LPDMA_C0TR1_PAM_B_0x1 = 1;
        /** @brief source data is transferred as right aligned, left-truncated down to the destination data width */
    constexpr std::uint32_t LPDMA_C0TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as left-aligned, right-truncated down to the destination data width */
    constexpr std::uint32_t LPDMA_C0TR1_PAM_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer from the source If LPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx =1 . A secure write is ignored when LPDMA_SECCFGR.SECx = 0. When LPDMA_SECCFGR.SECx is de-asserted, this SSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer from the source is non-secure. */
    using LPDMA_C0TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C0TR1_SSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C0TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. A destination single transfer must have an aligned address with its data width (start address LPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and none transfer is issued. */
    using LPDMA_C0TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t LPDMA_C0TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t LPDMA_C0TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t LPDMA_C0TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t LPDMA_C0TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing single The destination address, pointed by LPDMA_CxDAR, is kept constant after a single transfer, or is incremented by the offset value corresponding to a contiguous data after a single transfer. */
    using LPDMA_C0TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C0TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C0TR1_DINC_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer to the destination If LPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx = 1. A secure write is ignored when LPDMA_SECCFGR.SECx = 0. When LPDMA_SECCFGR.SECx is de-asserted, this DSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer to the destination is non-secure. */
    using LPDMA_C0TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C0TR1_DSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C0TR1_DSEC_B_0x1 = 1;

    /** @brief LPDMA channel 0 transfer register 2 */
    using LPDMA_C0TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection These bits are ignored if channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per request. Note: The user must not assign a same input hardware request (same REQSEL[4:0] value) to different active DMA channels (LPDMA_CxCR.EN = 1 and LPDMA_CxTR2.SWREQ = 0 for these channels). DMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using LPDMA_C0TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when LPDMA_CxCR.EN is asserted. */
    using LPDMA_C0TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[4:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[4:0] is taken into account. */
    constexpr std::uint32_t LPDMA_C0TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. */
    constexpr std::uint32_t LPDMA_C0TR2_SWREQ_B_0x1 = 1;

    /** @brief block hardware request If the channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using LPDMA_C0TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. */
    constexpr std::uint32_t LPDMA_C0TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). */
    constexpr std::uint32_t LPDMA_C0TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. If the channel x is enabled (LPDMA_CxCR.EN asserted) with TRIGPOL[1:0] = 0b00 or 0b11, these TRIGM[1:0] bits are ignored. Else, a DMA transfer is conditioned by at least one trigger hit: The LPDMA monitoring of a trigger for channel x is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 0b01 or respectively TRIGPOL[1:0] = 0b10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[4:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the LPDMA_CxTR2 with a new value for any of TRIGSEL[4:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized, and a trigger overrun flag is reported (LPDMA_CxSR.TOF = 1), an interrupt is generated if enabled (LPDMA_CxCR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. */
    using LPDMA_C0TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first single read of each block transfer is conditioned by one hit trigger. (value: 0)
     *          - B_0x1: same as 00 (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed single level: each programmed single read is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first single read of each block transfer is conditioned by one hit trigger. */
    constexpr std::uint32_t LPDMA_C0TR2_TRIGM_B_0x0 = 0;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C0TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t LPDMA_C0TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed single level: each programmed single read is conditioned by one hit trigger. */
    constexpr std::uint32_t LPDMA_C0TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the LPDMA transfer (as per Programmed LPDMA1 trigger), with an active trigger event if TRIGPOL[1:0] = 00. */
    using LPDMA_C0TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using LPDMA_C0TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t LPDMA_C0TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t LPDMA_C0TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t LPDMA_C0TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C0TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using LPDMA_C0TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when LPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address LPDMA_CxLLR.LA[15:2] to zero and clears all the LPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when LPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t LPDMA_C0TR2_TCEM_B_0x0 = 0;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C0TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer), if any data transfer. */
    constexpr std::uint32_t LPDMA_C0TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address LPDMA_CxLLR.LA[15:2] to zero and clears all the LPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t LPDMA_C0TR2_TCEM_B_0x3 = 3;

    /** @brief LPDMA channel 0 block register 1 */
    using LPDMA_C0BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if LPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if LPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all LPDMA_CxLLR.Uxx = 0 and if LPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if LPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using LPDMA_C0BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 0 source address register */
    using LPDMA_C0SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (LPDMA_CxTR1.SINC), this field is either kept fixed or incremented by the data width (LPDMA_CxTR1.SDW_LOG2[1:0]) after each single source data, reflecting the next address from which data is read. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by LPDMA from the memory, provided the LLI is set with LPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source single (SA[32:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using LPDMA_C0SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 0 destination address register */
    using LPDMA_C0DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (LPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (LPDMA_CxTR1.DDW_LOG2[21:0]) after each single destination data, reflecting the next address from which data is written. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by DMA from the memory, provided the LLI is set with LPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination single (DA[2:0] versus LPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using LPDMA_C0DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 0 linked-list address register */
    using LPDMA_C0LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file (LPDMA_CxCTR1, LPDMA_CxTR2, LPDMA_CxBR1, LPDMA_CxSAR, LPDMA_CxDAR and LPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using LPDMA_C0LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update LPDMA_CxLLR register from memory This bit is used to control the update of the LPDMA_CxLLR register from the memory during the link transfer. */
    using LPDMA_C0LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxLLR update (value: 0)
     *          - B_0x1: LPDMA_CxLLR update (value: 1)
     */
        /** @brief no LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C0LLR_ULL_B_0x0 = 0;
        /** @brief LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C0LLR_ULL_B_0x1 = 1;

    /** @brief Update LPDMA_CxDAR register from memory This bit is used to control the update of the LPDMA_CxDAR register from the memory during the link transfer. */
    using LPDMA_C0LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxDAR update (value: 0)
     *          - B_0x1: LPDMA_CxDAR update (value: 1)
     */
        /** @brief no LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C0LLR_UDA_B_0x0 = 0;
        /** @brief LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C0LLR_UDA_B_0x1 = 1;

    /** @brief update LPDMA_CxSAR from memory This bit controls the update of the LPDMA_CxSAR register from the memory during the link transfer. */
    using LPDMA_C0LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxSAR update (value: 0)
     *          - B_0x1: LPDMA_CxSAR update (value: 1)
     */
        /** @brief no LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C0LLR_USA_B_0x0 = 0;
        /** @brief LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C0LLR_USA_B_0x1 = 1;

    /** @brief Update LPDMA_CxBR1 from memory This bit controls the update of the LPDMA_CxBR1 register from the memory during the link transfer. */
    using LPDMA_C0LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value (value: 0)
     *          - B_0x1: LPDMA_CxBR1 update (value: 1)
     */
        /** @brief no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value */
    constexpr std::uint32_t LPDMA_C0LLR_UB1_B_0x0 = 0;
        /** @brief LPDMA_CxBR1 update */
    constexpr std::uint32_t LPDMA_C0LLR_UB1_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR2 from memory This bit controls the update of the LPDMA_CxTR2 register from the memory during the link transfer. */
    using LPDMA_C0LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR2 update (value: 0)
     *          - B_0x1: LPDMA_CxTR2 update (value: 1)
     */
        /** @brief no LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C0LLR_UT2_B_0x0 = 0;
        /** @brief LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C0LLR_UT2_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR1 from memory This bit controls the update of the LPDMA_CxTR1 register from the memory during the link transfer. */
    using LPDMA_C0LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR1 update (value: 0)
     *          - B_0x1: LPDMA_CxTR1 update (value: 1)
     */
        /** @brief no LPDMA_CxTR1 update */
    constexpr std::uint32_t LPDMA_C0LLR_UT1_B_0x0 = 0;
        /** @brief LPDMA_CxTR1 update */
    constexpr std::uint32_t LPDMA_C0LLR_UT1_B_0x1 = 1;

    /** @brief LPDMA channel 1 linked-list base address register */
    using LPDMA_C1LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of LPDMA channel x */
    using LPDMA_C1LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 1 flag clear register */
    using LPDMA_C1FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using LPDMA_C1FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C1FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t LPDMA_C1FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using LPDMA_C1FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C1FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t LPDMA_C1FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using LPDMA_C1FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C1FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t LPDMA_C1FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using LPDMA_C1FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C1FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t LPDMA_C1FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using LPDMA_C1FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C1FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t LPDMA_C1FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using LPDMA_C1FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C1FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t LPDMA_C1FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using LPDMA_C1FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the corresponding TOF flag (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C1FCR_TOF_B_0x0 = 0;
        /** @brief clears the corresponding TOF flag */
    constexpr std::uint32_t LPDMA_C1FCR_TOF_B_0x1 = 1;

    /** @brief LPDMA channel 1 status register */
    using LPDMA_C1SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is de-asserted by hardware when the channel is enabled (LPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using LPDMA_C1SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t LPDMA_C1SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t LPDMA_C1SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is a block transfer complete or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode LPDMA_CxTR2.TCEM[1:0]. */
    using LPDMA_C1SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t LPDMA_C1SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t LPDMA_C1SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag An half transfer event is an half block transfer that occurs when half of the bytes of the source block size (rounded-up integer of LPDMA_CxBR1.BNDT[15:0] / 2) has been transferred to the destination. */
    using LPDMA_C1SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t LPDMA_C1SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t LPDMA_C1SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using LPDMA_C1SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t LPDMA_C1SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t LPDMA_C1SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using LPDMA_C1SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t LPDMA_C1SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t LPDMA_C1SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using LPDMA_C1SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t LPDMA_C1SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t LPDMA_C1SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using LPDMA_C1SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t LPDMA_C1SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t LPDMA_C1SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using LPDMA_C1SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the corresponding TOF flag (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C1SR_TOF_B_0x0 = 0;
        /** @brief clears the corresponding TOF flag */
    constexpr std::uint32_t LPDMA_C1SR_TOF_B_0x1 = 1;

    /** @brief LPDMA channel 1 control register */
    using LPDMA_C1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using LPDMA_C1CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t LPDMA_C1CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t LPDMA_C1CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (LPDMA_CxSR.SUSPF = 1 and LPDMA_CxSR.IDLEF = LPDMA_CxCR.EN = 1) - channel in disabled state (LPDMA_CxSR.IDLEF = 1 and LPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (LPDMA_CxBR1, LPDMA_CxSAR and LPDMA_CxDAR) before enabling again the channel (see the programming sequence in ). */
    using LPDMA_C1CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t LPDMA_C1CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t LPDMA_C1CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in sequence. */
    using LPDMA_C1CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t LPDMA_C1CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t LPDMA_C1CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using LPDMA_C1CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C1CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C1CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using LPDMA_C1CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C1CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C1CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using LPDMA_C1CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C1CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C1CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using LPDMA_C1CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C1CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C1CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using LPDMA_C1CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C1CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C1CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using LPDMA_C1CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C1CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C1CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using LPDMA_C1CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C1CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C1CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the block transfer is executed as defined by the current internal register file until LPDMA_CxBR1.BNDT[15:0 ] =0). Secondly the next linked-list data structure is conditionally uploaded from memory as defined by LPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using LPDMA_C1CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then LPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then LPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t LPDMA_C1CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t LPDMA_C1CR_LSM_B_0x1 = 1;

    /** @brief priority level of the channel x LPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using LPDMA_C1CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t LPDMA_C1CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t LPDMA_C1CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t LPDMA_C1CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t LPDMA_C1CR_PRIO_B_0x3 = 3;

    /** @brief LPDMA channel 1 transfer register 1 */
    using LPDMA_C1TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. a source block size must be a multiple of the source data width (LPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. A source single transfer must have an aligned address with its data width (start address LPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using LPDMA_C1TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t LPDMA_C1TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t LPDMA_C1TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t LPDMA_C1TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t LPDMA_C1TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing single The source address, pointed by LPDMA_CxSAR, is kept constant after a single transfer or is incremented by the offset value corresponding to a contiguous data after a single transfer. */
    using LPDMA_C1TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C1TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C1TR1_SINC_B_0x1 = 1;

    /** @brief padding/alignment mode If DDW_LOG2[1:0]=SDW_LOG2[1:0]: if the data width of a single destination transfer is equal to the data width of a single source transfer, this bit is ignored. Else: Case 1: If destination data width > source data width Case 2: If destination data width < source data width */
    using LPDMA_C1TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x0: source data is transferred as right aligned, left-truncated down to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as left-aligned, right-truncated down to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t LPDMA_C1TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t LPDMA_C1TR1_PAM_B_0x1 = 1;
        /** @brief source data is transferred as right aligned, left-truncated down to the destination data width */
    constexpr std::uint32_t LPDMA_C1TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as left-aligned, right-truncated down to the destination data width */
    constexpr std::uint32_t LPDMA_C1TR1_PAM_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer from the source If LPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx =1 . A secure write is ignored when LPDMA_SECCFGR.SECx = 0. When LPDMA_SECCFGR.SECx is de-asserted, this SSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer from the source is non-secure. */
    using LPDMA_C1TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C1TR1_SSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C1TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. A destination single transfer must have an aligned address with its data width (start address LPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and none transfer is issued. */
    using LPDMA_C1TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t LPDMA_C1TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t LPDMA_C1TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t LPDMA_C1TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t LPDMA_C1TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing single The destination address, pointed by LPDMA_CxDAR, is kept constant after a single transfer, or is incremented by the offset value corresponding to a contiguous data after a single transfer. */
    using LPDMA_C1TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C1TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C1TR1_DINC_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer to the destination If LPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx = 1. A secure write is ignored when LPDMA_SECCFGR.SECx = 0. When LPDMA_SECCFGR.SECx is de-asserted, this DSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer to the destination is non-secure. */
    using LPDMA_C1TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C1TR1_DSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C1TR1_DSEC_B_0x1 = 1;

    /** @brief LPDMA channel 1 transfer register 2 */
    using LPDMA_C1TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection These bits are ignored if channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per request. Note: The user must not assign a same input hardware request (same REQSEL[4:0] value) to different active DMA channels (LPDMA_CxCR.EN = 1 and LPDMA_CxTR2.SWREQ = 0 for these channels). DMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using LPDMA_C1TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when LPDMA_CxCR.EN is asserted. */
    using LPDMA_C1TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[4:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[4:0] is taken into account. */
    constexpr std::uint32_t LPDMA_C1TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. */
    constexpr std::uint32_t LPDMA_C1TR2_SWREQ_B_0x1 = 1;

    /** @brief block hardware request If the channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using LPDMA_C1TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. */
    constexpr std::uint32_t LPDMA_C1TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). */
    constexpr std::uint32_t LPDMA_C1TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. If the channel x is enabled (LPDMA_CxCR.EN asserted) with TRIGPOL[1:0] = 0b00 or 0b11, these TRIGM[1:0] bits are ignored. Else, a DMA transfer is conditioned by at least one trigger hit: The LPDMA monitoring of a trigger for channel x is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 0b01 or respectively TRIGPOL[1:0] = 0b10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[4:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the LPDMA_CxTR2 with a new value for any of TRIGSEL[4:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized, and a trigger overrun flag is reported (LPDMA_CxSR.TOF = 1), an interrupt is generated if enabled (LPDMA_CxCR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. */
    using LPDMA_C1TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first single read of each block transfer is conditioned by one hit trigger. (value: 0)
     *          - B_0x1: same as 00 (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed single level: each programmed single read is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first single read of each block transfer is conditioned by one hit trigger. */
    constexpr std::uint32_t LPDMA_C1TR2_TRIGM_B_0x0 = 0;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C1TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t LPDMA_C1TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed single level: each programmed single read is conditioned by one hit trigger. */
    constexpr std::uint32_t LPDMA_C1TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the LPDMA transfer (as per Programmed LPDMA1 trigger), with an active trigger event if TRIGPOL[1:0] = 00. */
    using LPDMA_C1TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using LPDMA_C1TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t LPDMA_C1TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t LPDMA_C1TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t LPDMA_C1TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C1TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using LPDMA_C1TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when LPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address LPDMA_CxLLR.LA[15:2] to zero and clears all the LPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when LPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t LPDMA_C1TR2_TCEM_B_0x0 = 0;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C1TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer), if any data transfer. */
    constexpr std::uint32_t LPDMA_C1TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address LPDMA_CxLLR.LA[15:2] to zero and clears all the LPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t LPDMA_C1TR2_TCEM_B_0x3 = 3;

    /** @brief LPDMA channel 1 block register 1 */
    using LPDMA_C1BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if LPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if LPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all LPDMA_CxLLR.Uxx = 0 and if LPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if LPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using LPDMA_C1BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 1 source address register */
    using LPDMA_C1SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (LPDMA_CxTR1.SINC), this field is either kept fixed or incremented by the data width (LPDMA_CxTR1.SDW_LOG2[1:0]) after each single source data, reflecting the next address from which data is read. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by LPDMA from the memory, provided the LLI is set with LPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source single (SA[32:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using LPDMA_C1SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 1 destination address register */
    using LPDMA_C1DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (LPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (LPDMA_CxTR1.DDW_LOG2[21:0]) after each single destination data, reflecting the next address from which data is written. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by DMA from the memory, provided the LLI is set with LPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination single (DA[2:0] versus LPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using LPDMA_C1DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 1 linked-list address register */
    using LPDMA_C1LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file (LPDMA_CxCTR1, LPDMA_CxTR2, LPDMA_CxBR1, LPDMA_CxSAR, LPDMA_CxDAR and LPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using LPDMA_C1LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update LPDMA_CxLLR register from memory This bit is used to control the update of the LPDMA_CxLLR register from the memory during the link transfer. */
    using LPDMA_C1LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxLLR update (value: 0)
     *          - B_0x1: LPDMA_CxLLR update (value: 1)
     */
        /** @brief no LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C1LLR_ULL_B_0x0 = 0;
        /** @brief LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C1LLR_ULL_B_0x1 = 1;

    /** @brief Update LPDMA_CxDAR register from memory This bit is used to control the update of the LPDMA_CxDAR register from the memory during the link transfer. */
    using LPDMA_C1LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxDAR update (value: 0)
     *          - B_0x1: LPDMA_CxDAR update (value: 1)
     */
        /** @brief no LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C1LLR_UDA_B_0x0 = 0;
        /** @brief LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C1LLR_UDA_B_0x1 = 1;

    /** @brief update LPDMA_CxSAR from memory This bit controls the update of the LPDMA_CxSAR register from the memory during the link transfer. */
    using LPDMA_C1LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxSAR update (value: 0)
     *          - B_0x1: LPDMA_CxSAR update (value: 1)
     */
        /** @brief no LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C1LLR_USA_B_0x0 = 0;
        /** @brief LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C1LLR_USA_B_0x1 = 1;

    /** @brief Update LPDMA_CxBR1 from memory This bit controls the update of the LPDMA_CxBR1 register from the memory during the link transfer. */
    using LPDMA_C1LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value (value: 0)
     *          - B_0x1: LPDMA_CxBR1 update (value: 1)
     */
        /** @brief no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value */
    constexpr std::uint32_t LPDMA_C1LLR_UB1_B_0x0 = 0;
        /** @brief LPDMA_CxBR1 update */
    constexpr std::uint32_t LPDMA_C1LLR_UB1_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR2 from memory This bit controls the update of the LPDMA_CxTR2 register from the memory during the link transfer. */
    using LPDMA_C1LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR2 update (value: 0)
     *          - B_0x1: LPDMA_CxTR2 update (value: 1)
     */
        /** @brief no LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C1LLR_UT2_B_0x0 = 0;
        /** @brief LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C1LLR_UT2_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR1 from memory This bit controls the update of the LPDMA_CxTR1 register from the memory during the link transfer. */
    using LPDMA_C1LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR1 update (value: 0)
     *          - B_0x1: LPDMA_CxTR1 update (value: 1)
     */
        /** @brief no LPDMA_CxTR1 update */
    constexpr std::uint32_t LPDMA_C1LLR_UT1_B_0x0 = 0;
        /** @brief LPDMA_CxTR1 update */
    constexpr std::uint32_t LPDMA_C1LLR_UT1_B_0x1 = 1;

    /** @brief LPDMA channel 2 linked-list base address register */
    using LPDMA_C2LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of LPDMA channel x */
    using LPDMA_C2LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 2 flag clear register */
    using LPDMA_C2FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using LPDMA_C2FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C2FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t LPDMA_C2FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using LPDMA_C2FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C2FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t LPDMA_C2FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using LPDMA_C2FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C2FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t LPDMA_C2FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using LPDMA_C2FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C2FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t LPDMA_C2FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using LPDMA_C2FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C2FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t LPDMA_C2FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using LPDMA_C2FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C2FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t LPDMA_C2FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using LPDMA_C2FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the corresponding TOF flag (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C2FCR_TOF_B_0x0 = 0;
        /** @brief clears the corresponding TOF flag */
    constexpr std::uint32_t LPDMA_C2FCR_TOF_B_0x1 = 1;

    /** @brief LPDMA channel 2 status register */
    using LPDMA_C2SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is de-asserted by hardware when the channel is enabled (LPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using LPDMA_C2SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t LPDMA_C2SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t LPDMA_C2SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is a block transfer complete or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode LPDMA_CxTR2.TCEM[1:0]. */
    using LPDMA_C2SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t LPDMA_C2SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t LPDMA_C2SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag An half transfer event is an half block transfer that occurs when half of the bytes of the source block size (rounded-up integer of LPDMA_CxBR1.BNDT[15:0] / 2) has been transferred to the destination. */
    using LPDMA_C2SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t LPDMA_C2SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t LPDMA_C2SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using LPDMA_C2SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t LPDMA_C2SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t LPDMA_C2SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using LPDMA_C2SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t LPDMA_C2SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t LPDMA_C2SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using LPDMA_C2SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t LPDMA_C2SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t LPDMA_C2SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using LPDMA_C2SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t LPDMA_C2SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t LPDMA_C2SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using LPDMA_C2SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the corresponding TOF flag (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C2SR_TOF_B_0x0 = 0;
        /** @brief clears the corresponding TOF flag */
    constexpr std::uint32_t LPDMA_C2SR_TOF_B_0x1 = 1;

    /** @brief LPDMA channel 2 control register */
    using LPDMA_C2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using LPDMA_C2CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t LPDMA_C2CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t LPDMA_C2CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (LPDMA_CxSR.SUSPF = 1 and LPDMA_CxSR.IDLEF = LPDMA_CxCR.EN = 1) - channel in disabled state (LPDMA_CxSR.IDLEF = 1 and LPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (LPDMA_CxBR1, LPDMA_CxSAR and LPDMA_CxDAR) before enabling again the channel (see the programming sequence in ). */
    using LPDMA_C2CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t LPDMA_C2CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t LPDMA_C2CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in sequence. */
    using LPDMA_C2CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t LPDMA_C2CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t LPDMA_C2CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using LPDMA_C2CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C2CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C2CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using LPDMA_C2CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C2CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C2CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using LPDMA_C2CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C2CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C2CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using LPDMA_C2CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C2CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C2CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using LPDMA_C2CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C2CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C2CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using LPDMA_C2CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C2CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C2CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using LPDMA_C2CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C2CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C2CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the block transfer is executed as defined by the current internal register file until LPDMA_CxBR1.BNDT[15:0 ] =0). Secondly the next linked-list data structure is conditionally uploaded from memory as defined by LPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using LPDMA_C2CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then LPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then LPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t LPDMA_C2CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t LPDMA_C2CR_LSM_B_0x1 = 1;

    /** @brief priority level of the channel x LPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using LPDMA_C2CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t LPDMA_C2CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t LPDMA_C2CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t LPDMA_C2CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t LPDMA_C2CR_PRIO_B_0x3 = 3;

    /** @brief LPDMA channel 2 transfer register 1 */
    using LPDMA_C2TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. a source block size must be a multiple of the source data width (LPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. A source single transfer must have an aligned address with its data width (start address LPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using LPDMA_C2TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t LPDMA_C2TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t LPDMA_C2TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t LPDMA_C2TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t LPDMA_C2TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing single The source address, pointed by LPDMA_CxSAR, is kept constant after a single transfer or is incremented by the offset value corresponding to a contiguous data after a single transfer. */
    using LPDMA_C2TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C2TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C2TR1_SINC_B_0x1 = 1;

    /** @brief padding/alignment mode If DDW_LOG2[1:0]=SDW_LOG2[1:0]: if the data width of a single destination transfer is equal to the data width of a single source transfer, this bit is ignored. Else: Case 1: If destination data width > source data width Case 2: If destination data width < source data width */
    using LPDMA_C2TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x0: source data is transferred as right aligned, left-truncated down to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as left-aligned, right-truncated down to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t LPDMA_C2TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t LPDMA_C2TR1_PAM_B_0x1 = 1;
        /** @brief source data is transferred as right aligned, left-truncated down to the destination data width */
    constexpr std::uint32_t LPDMA_C2TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as left-aligned, right-truncated down to the destination data width */
    constexpr std::uint32_t LPDMA_C2TR1_PAM_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer from the source If LPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx =1 . A secure write is ignored when LPDMA_SECCFGR.SECx = 0. When LPDMA_SECCFGR.SECx is de-asserted, this SSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer from the source is non-secure. */
    using LPDMA_C2TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C2TR1_SSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C2TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. A destination single transfer must have an aligned address with its data width (start address LPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and none transfer is issued. */
    using LPDMA_C2TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t LPDMA_C2TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t LPDMA_C2TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t LPDMA_C2TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t LPDMA_C2TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing single The destination address, pointed by LPDMA_CxDAR, is kept constant after a single transfer, or is incremented by the offset value corresponding to a contiguous data after a single transfer. */
    using LPDMA_C2TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C2TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C2TR1_DINC_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer to the destination If LPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx = 1. A secure write is ignored when LPDMA_SECCFGR.SECx = 0. When LPDMA_SECCFGR.SECx is de-asserted, this DSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer to the destination is non-secure. */
    using LPDMA_C2TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C2TR1_DSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C2TR1_DSEC_B_0x1 = 1;

    /** @brief LPDMA channel 2 transfer register 2 */
    using LPDMA_C2TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection These bits are ignored if channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per request. Note: The user must not assign a same input hardware request (same REQSEL[4:0] value) to different active DMA channels (LPDMA_CxCR.EN = 1 and LPDMA_CxTR2.SWREQ = 0 for these channels). DMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using LPDMA_C2TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when LPDMA_CxCR.EN is asserted. */
    using LPDMA_C2TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[4:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[4:0] is taken into account. */
    constexpr std::uint32_t LPDMA_C2TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. */
    constexpr std::uint32_t LPDMA_C2TR2_SWREQ_B_0x1 = 1;

    /** @brief block hardware request If the channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using LPDMA_C2TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. */
    constexpr std::uint32_t LPDMA_C2TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). */
    constexpr std::uint32_t LPDMA_C2TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. If the channel x is enabled (LPDMA_CxCR.EN asserted) with TRIGPOL[1:0] = 0b00 or 0b11, these TRIGM[1:0] bits are ignored. Else, a DMA transfer is conditioned by at least one trigger hit: The LPDMA monitoring of a trigger for channel x is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 0b01 or respectively TRIGPOL[1:0] = 0b10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[4:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the LPDMA_CxTR2 with a new value for any of TRIGSEL[4:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized, and a trigger overrun flag is reported (LPDMA_CxSR.TOF = 1), an interrupt is generated if enabled (LPDMA_CxCR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. */
    using LPDMA_C2TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first single read of each block transfer is conditioned by one hit trigger. (value: 0)
     *          - B_0x1: same as 00 (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed single level: each programmed single read is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first single read of each block transfer is conditioned by one hit trigger. */
    constexpr std::uint32_t LPDMA_C2TR2_TRIGM_B_0x0 = 0;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C2TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t LPDMA_C2TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed single level: each programmed single read is conditioned by one hit trigger. */
    constexpr std::uint32_t LPDMA_C2TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the LPDMA transfer (as per Programmed LPDMA1 trigger), with an active trigger event if TRIGPOL[1:0] = 00. */
    using LPDMA_C2TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using LPDMA_C2TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t LPDMA_C2TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t LPDMA_C2TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t LPDMA_C2TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C2TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using LPDMA_C2TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when LPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address LPDMA_CxLLR.LA[15:2] to zero and clears all the LPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when LPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t LPDMA_C2TR2_TCEM_B_0x0 = 0;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C2TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer), if any data transfer. */
    constexpr std::uint32_t LPDMA_C2TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address LPDMA_CxLLR.LA[15:2] to zero and clears all the LPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t LPDMA_C2TR2_TCEM_B_0x3 = 3;

    /** @brief LPDMA channel 2 block register 1 */
    using LPDMA_C2BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if LPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if LPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all LPDMA_CxLLR.Uxx = 0 and if LPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if LPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using LPDMA_C2BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 2 source address register */
    using LPDMA_C2SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (LPDMA_CxTR1.SINC), this field is either kept fixed or incremented by the data width (LPDMA_CxTR1.SDW_LOG2[1:0]) after each single source data, reflecting the next address from which data is read. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by LPDMA from the memory, provided the LLI is set with LPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source single (SA[32:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using LPDMA_C2SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 2 destination address register */
    using LPDMA_C2DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (LPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (LPDMA_CxTR1.DDW_LOG2[21:0]) after each single destination data, reflecting the next address from which data is written. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by DMA from the memory, provided the LLI is set with LPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination single (DA[2:0] versus LPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using LPDMA_C2DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 2 linked-list address register */
    using LPDMA_C2LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file (LPDMA_CxCTR1, LPDMA_CxTR2, LPDMA_CxBR1, LPDMA_CxSAR, LPDMA_CxDAR and LPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using LPDMA_C2LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update LPDMA_CxLLR register from memory This bit is used to control the update of the LPDMA_CxLLR register from the memory during the link transfer. */
    using LPDMA_C2LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxLLR update (value: 0)
     *          - B_0x1: LPDMA_CxLLR update (value: 1)
     */
        /** @brief no LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C2LLR_ULL_B_0x0 = 0;
        /** @brief LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C2LLR_ULL_B_0x1 = 1;

    /** @brief Update LPDMA_CxDAR register from memory This bit is used to control the update of the LPDMA_CxDAR register from the memory during the link transfer. */
    using LPDMA_C2LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxDAR update (value: 0)
     *          - B_0x1: LPDMA_CxDAR update (value: 1)
     */
        /** @brief no LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C2LLR_UDA_B_0x0 = 0;
        /** @brief LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C2LLR_UDA_B_0x1 = 1;

    /** @brief update LPDMA_CxSAR from memory This bit controls the update of the LPDMA_CxSAR register from the memory during the link transfer. */
    using LPDMA_C2LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxSAR update (value: 0)
     *          - B_0x1: LPDMA_CxSAR update (value: 1)
     */
        /** @brief no LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C2LLR_USA_B_0x0 = 0;
        /** @brief LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C2LLR_USA_B_0x1 = 1;

    /** @brief Update LPDMA_CxBR1 from memory This bit controls the update of the LPDMA_CxBR1 register from the memory during the link transfer. */
    using LPDMA_C2LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value (value: 0)
     *          - B_0x1: LPDMA_CxBR1 update (value: 1)
     */
        /** @brief no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value */
    constexpr std::uint32_t LPDMA_C2LLR_UB1_B_0x0 = 0;
        /** @brief LPDMA_CxBR1 update */
    constexpr std::uint32_t LPDMA_C2LLR_UB1_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR2 from memory This bit controls the update of the LPDMA_CxTR2 register from the memory during the link transfer. */
    using LPDMA_C2LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR2 update (value: 0)
     *          - B_0x1: LPDMA_CxTR2 update (value: 1)
     */
        /** @brief no LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C2LLR_UT2_B_0x0 = 0;
        /** @brief LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C2LLR_UT2_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR1 from memory This bit controls the update of the LPDMA_CxTR1 register from the memory during the link transfer. */
    using LPDMA_C2LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR1 update (value: 0)
     *          - B_0x1: LPDMA_CxTR1 update (value: 1)
     */
        /** @brief no LPDMA_CxTR1 update */
    constexpr std::uint32_t LPDMA_C2LLR_UT1_B_0x0 = 0;
        /** @brief LPDMA_CxTR1 update */
    constexpr std::uint32_t LPDMA_C2LLR_UT1_B_0x1 = 1;

    /** @brief LPDMA channel 3 linked-list base address register */
    using LPDMA_C3LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of LPDMA channel x */
    using LPDMA_C3LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 3 flag clear register */
    using LPDMA_C3FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using LPDMA_C3FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C3FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t LPDMA_C3FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using LPDMA_C3FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C3FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t LPDMA_C3FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using LPDMA_C3FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C3FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t LPDMA_C3FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using LPDMA_C3FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C3FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t LPDMA_C3FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using LPDMA_C3FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C3FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t LPDMA_C3FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using LPDMA_C3FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C3FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t LPDMA_C3FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using LPDMA_C3FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the corresponding TOF flag (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C3FCR_TOF_B_0x0 = 0;
        /** @brief clears the corresponding TOF flag */
    constexpr std::uint32_t LPDMA_C3FCR_TOF_B_0x1 = 1;

    /** @brief LPDMA channel 3 status register */
    using LPDMA_C3SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is de-asserted by hardware when the channel is enabled (LPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using LPDMA_C3SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t LPDMA_C3SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t LPDMA_C3SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is a block transfer complete or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode LPDMA_CxTR2.TCEM[1:0]. */
    using LPDMA_C3SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t LPDMA_C3SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t LPDMA_C3SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag An half transfer event is an half block transfer that occurs when half of the bytes of the source block size (rounded-up integer of LPDMA_CxBR1.BNDT[15:0] / 2) has been transferred to the destination. */
    using LPDMA_C3SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t LPDMA_C3SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t LPDMA_C3SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using LPDMA_C3SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t LPDMA_C3SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t LPDMA_C3SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using LPDMA_C3SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t LPDMA_C3SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t LPDMA_C3SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using LPDMA_C3SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t LPDMA_C3SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t LPDMA_C3SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using LPDMA_C3SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t LPDMA_C3SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t LPDMA_C3SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using LPDMA_C3SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears the corresponding TOF flag (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t LPDMA_C3SR_TOF_B_0x0 = 0;
        /** @brief clears the corresponding TOF flag */
    constexpr std::uint32_t LPDMA_C3SR_TOF_B_0x1 = 1;

    /** @brief LPDMA channel 3 control register */
    using LPDMA_C3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is de-asserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, e.g. if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using LPDMA_C3CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t LPDMA_C3CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t LPDMA_C3CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (LPDMA_CxSR.SUSPF = 1 and LPDMA_CxSR.IDLEF = LPDMA_CxCR.EN = 1) - channel in disabled state (LPDMA_CxSR.IDLEF = 1 and LPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (LPDMA_CxBR1, LPDMA_CxSAR and LPDMA_CxDAR) before enabling again the channel (see the programming sequence in ). */
    using LPDMA_C3CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t LPDMA_C3CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t LPDMA_C3CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel i.e. a channel with an on-going DMA transfer over its master ports. The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in sequence. */
    using LPDMA_C3CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t LPDMA_C3CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t LPDMA_C3CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using LPDMA_C3CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C3CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C3CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using LPDMA_C3CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C3CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C3CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using LPDMA_C3CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C3CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C3CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using LPDMA_C3CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C3CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C3CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using LPDMA_C3CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C3CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C3CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using LPDMA_C3CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C3CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C3CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using LPDMA_C3CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t LPDMA_C3CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t LPDMA_C3CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the block transfer is executed as defined by the current internal register file until LPDMA_CxBR1.BNDT[15:0 ] =0). Secondly the next linked-list data structure is conditionally uploaded from memory as defined by LPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using LPDMA_C3CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then LPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then LPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t LPDMA_C3CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t LPDMA_C3CR_LSM_B_0x1 = 1;

    /** @brief priority level of the channel x LPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using LPDMA_C3CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t LPDMA_C3CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t LPDMA_C3CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t LPDMA_C3CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t LPDMA_C3CR_PRIO_B_0x3 = 3;

    /** @brief LPDMA channel 3 transfer register 1 */
    using LPDMA_C3TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. a source block size must be a multiple of the source data width (LPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. A source single transfer must have an aligned address with its data width (start address LPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using LPDMA_C3TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t LPDMA_C3TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t LPDMA_C3TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t LPDMA_C3TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t LPDMA_C3TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing single The source address, pointed by LPDMA_CxSAR, is kept constant after a single transfer or is incremented by the offset value corresponding to a contiguous data after a single transfer. */
    using LPDMA_C3TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C3TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C3TR1_SINC_B_0x1 = 1;

    /** @brief padding/alignment mode If DDW_LOG2[1:0]=SDW_LOG2[1:0]: if the data width of a single destination transfer is equal to the data width of a single source transfer, this bit is ignored. Else: Case 1: If destination data width > source data width Case 2: If destination data width < source data width */
    using LPDMA_C3TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x0: source data is transferred as right aligned, left-truncated down to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as left-aligned, right-truncated down to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t LPDMA_C3TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t LPDMA_C3TR1_PAM_B_0x1 = 1;
        /** @brief source data is transferred as right aligned, left-truncated down to the destination data width */
    constexpr std::uint32_t LPDMA_C3TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as left-aligned, right-truncated down to the destination data width */
    constexpr std::uint32_t LPDMA_C3TR1_PAM_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer from the source If LPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx =1 . A secure write is ignored when LPDMA_SECCFGR.SECx = 0. When LPDMA_SECCFGR.SECx is de-asserted, this SSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer from the source is non-secure. */
    using LPDMA_C3TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C3TR1_SSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C3TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a single in bytes Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. A destination single transfer must have an aligned address with its data width (start address LPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and none transfer is issued. */
    using LPDMA_C3TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t LPDMA_C3TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t LPDMA_C3TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t LPDMA_C3TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t LPDMA_C3TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing single The destination address, pointed by LPDMA_CxDAR, is kept constant after a single transfer, or is incremented by the offset value corresponding to a contiguous data after a single transfer. */
    using LPDMA_C3TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C3TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C3TR1_DINC_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer to the destination If LPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when LPDMA_SECCFGR.SECx = 1. A secure write is ignored when LPDMA_SECCFGR.SECx = 0. When LPDMA_SECCFGR.SECx is de-asserted, this DSEC bit is also de-asserted by hardware (on a secure reconfiguration of the channel as non-secure), and the LPDMA transfer to the destination is non-secure. */
    using LPDMA_C3TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C3TR1_DSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C3TR1_DSEC_B_0x1 = 1;

    /** @brief LPDMA channel 3 transfer register 2 */
    using LPDMA_C3TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA hardware request selection These bits are ignored if channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per request. Note: The user must not assign a same input hardware request (same REQSEL[4:0] value) to different active DMA channels (LPDMA_CxCR.EN = 1 and LPDMA_CxTR2.SWREQ = 0 for these channels). DMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using LPDMA_C3TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when LPDMA_CxCR.EN is asserted. */
    using LPDMA_C3TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[4:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[4:0] is taken into account. */
    constexpr std::uint32_t LPDMA_C3TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. */
    constexpr std::uint32_t LPDMA_C3TR2_SWREQ_B_0x1 = 1;

    /** @brief block hardware request If the channel x is activated (LPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using LPDMA_C3TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. */
    constexpr std::uint32_t LPDMA_C3TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). */
    constexpr std::uint32_t LPDMA_C3TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. If the channel x is enabled (LPDMA_CxCR.EN asserted) with TRIGPOL[1:0] = 0b00 or 0b11, these TRIGM[1:0] bits are ignored. Else, a DMA transfer is conditioned by at least one trigger hit: The LPDMA monitoring of a trigger for channel x is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 0b01 or respectively TRIGPOL[1:0] = 0b10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[4:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the LPDMA_CxTR2 with a new value for any of TRIGSEL[4:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized, and a trigger overrun flag is reported (LPDMA_CxSR.TOF = 1), an interrupt is generated if enabled (LPDMA_CxCR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. */
    using LPDMA_C3TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first single read of each block transfer is conditioned by one hit trigger. (value: 0)
     *          - B_0x1: same as 00 (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed single level: each programmed single read is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first single read of each block transfer is conditioned by one hit trigger. */
    constexpr std::uint32_t LPDMA_C3TR2_TRIGM_B_0x0 = 0;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C3TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t LPDMA_C3TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed single level: each programmed single read is conditioned by one hit trigger. */
    constexpr std::uint32_t LPDMA_C3TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the LPDMA transfer (as per Programmed LPDMA1 trigger), with an active trigger event if TRIGPOL[1:0] = 00. */
    using LPDMA_C3TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using LPDMA_C3TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t LPDMA_C3TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t LPDMA_C3TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t LPDMA_C3TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C3TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLI0 data transfer is null/void (i.e. directly programmed by the internal register file with LPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using LPDMA_C3TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when LPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address LPDMA_CxLLR.LA[15:2] to zero and clears all the LPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when LPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t LPDMA_C3TR2_TCEM_B_0x0 = 0;
        /** @brief same as 00 */
    constexpr std::uint32_t LPDMA_C3TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer), if any data transfer. */
    constexpr std::uint32_t LPDMA_C3TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address LPDMA_CxLLR.LA[15:2] to zero and clears all the LPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t LPDMA_C3TR2_TCEM_B_0x3 = 3;

    /** @brief LPDMA channel 3 block register 1 */
    using LPDMA_C3BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if LPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if LPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all LPDMA_CxLLR.Uxx = 0 and if LPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if LPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. */
    using LPDMA_C3BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 3 source address register */
    using LPDMA_C3SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (LPDMA_CxTR1.SINC), this field is either kept fixed or incremented by the data width (LPDMA_CxTR1.SDW_LOG2[1:0]) after each single source data, reflecting the next address from which data is read. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by LPDMA from the memory, provided the LLI is set with LPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source single (SA[32:0] versus LPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using LPDMA_C3SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 3 destination address register */
    using LPDMA_C3DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (LPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (LPDMA_CxTR1.DDW_LOG2[21:0]) after each single destination data, reflecting the next address from which data is written. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by DMA from the memory, provided the LLI is set with LPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination single (DA[2:0] versus LPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using LPDMA_C3DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 3 linked-list address register */
    using LPDMA_C3LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list DMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list DMA internal register file (LPDMA_CxCTR1, LPDMA_CxTR2, LPDMA_CxBR1, LPDMA_CxSAR, LPDMA_CxDAR and LPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using LPDMA_C3LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update LPDMA_CxLLR register from memory This bit is used to control the update of the LPDMA_CxLLR register from the memory during the link transfer. */
    using LPDMA_C3LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxLLR update (value: 0)
     *          - B_0x1: LPDMA_CxLLR update (value: 1)
     */
        /** @brief no LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C3LLR_ULL_B_0x0 = 0;
        /** @brief LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C3LLR_ULL_B_0x1 = 1;

    /** @brief Update LPDMA_CxDAR register from memory This bit is used to control the update of the LPDMA_CxDAR register from the memory during the link transfer. */
    using LPDMA_C3LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxDAR update (value: 0)
     *          - B_0x1: LPDMA_CxDAR update (value: 1)
     */
        /** @brief no LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C3LLR_UDA_B_0x0 = 0;
        /** @brief LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C3LLR_UDA_B_0x1 = 1;

    /** @brief update LPDMA_CxSAR from memory This bit controls the update of the LPDMA_CxSAR register from the memory during the link transfer. */
    using LPDMA_C3LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxSAR update (value: 0)
     *          - B_0x1: LPDMA_CxSAR update (value: 1)
     */
        /** @brief no LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C3LLR_USA_B_0x0 = 0;
        /** @brief LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C3LLR_USA_B_0x1 = 1;

    /** @brief Update LPDMA_CxBR1 from memory This bit controls the update of the LPDMA_CxBR1 register from the memory during the link transfer. */
    using LPDMA_C3LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value (value: 0)
     *          - B_0x1: LPDMA_CxBR1 update (value: 1)
     */
        /** @brief no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value */
    constexpr std::uint32_t LPDMA_C3LLR_UB1_B_0x0 = 0;
        /** @brief LPDMA_CxBR1 update */
    constexpr std::uint32_t LPDMA_C3LLR_UB1_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR2 from memory This bit controls the update of the LPDMA_CxTR2 register from the memory during the link transfer. */
    using LPDMA_C3LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR2 update (value: 0)
     *          - B_0x1: LPDMA_CxTR2 update (value: 1)
     */
        /** @brief no LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C3LLR_UT2_B_0x0 = 0;
        /** @brief LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C3LLR_UT2_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR1 from memory This bit controls the update of the LPDMA_CxTR1 register from the memory during the link transfer. */
    using LPDMA_C3LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR1 update (value: 0)
     *          - B_0x1: LPDMA_CxTR1 update (value: 1)
     */
        /** @brief no LPDMA_CxTR1 update */
    constexpr std::uint32_t LPDMA_C3LLR_UT1_B_0x0 = 0;
        /** @brief LPDMA_CxTR1 update */
    constexpr std::uint32_t LPDMA_C3LLR_UT1_B_0x1 = 1;

}

#endif
