/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U585_SEC_LPDMA1_HPP
#define EMBEDDED_PP_STM32U585_SEC_LPDMA1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief LPDMA1 */
namespace STM32U585::SEC_LPDMA1 {

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
    /** @brief idle flag */
    using LPDMA_C0SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t LPDMA_C0SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t LPDMA_C0SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using LPDMA_C0SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t LPDMA_C0SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t LPDMA_C0SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
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
    /** @brief enable */
    using LPDMA_C0CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t LPDMA_C0CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t LPDMA_C0CR_EN_B_0x1 = 1;

    /** @brief reset */
    using LPDMA_C0CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t LPDMA_C0CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t LPDMA_C0CR_RESET_B_0x1 = 1;

    /** @brief suspend */
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

    /** @brief Link step mode */
    using LPDMA_C0CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0). Then LPDMA_CxBR1.BNDT[15:0]=0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0). Then LPDMA_CxBR1.BNDT[15:0]=0. */
    constexpr std::uint32_t LPDMA_C0CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t LPDMA_C0CR_LSM_B_0x1 = 1;

    /** @brief priority level of the channel x LPDMA transfer versus others */
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
    /** @brief binary logarithm of the source data width of a single in bytes */
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

    /** @brief source incrementing single */
    using LPDMA_C0TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C0TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C0TR1_SINC_B_0x1 = 1;

    /** @brief padding/alignment mode */
    using LPDMA_C0TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t LPDMA_C0TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t LPDMA_C0TR1_PAM_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer from the source */
    using LPDMA_C0TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C0TR1_SSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C0TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a single in bytes */
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

    /** @brief destination incrementing single */
    using LPDMA_C0TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C0TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C0TR1_DINC_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer to the destination */
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
    /** @brief DMA hardware request selection */
    using LPDMA_C0TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using LPDMA_C0TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[4:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[4:0] is taken into account. */
    constexpr std::uint32_t LPDMA_C0TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. */
    constexpr std::uint32_t LPDMA_C0TR2_SWREQ_B_0x1 = 1;

    /** @brief block hardware request */
    using LPDMA_C0TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. */
    constexpr std::uint32_t LPDMA_C0TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). */
    constexpr std::uint32_t LPDMA_C0TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
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

    /** @brief trigger event input selection */
    using LPDMA_C0TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
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

    /** @brief transfer complete event mode */
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
    /** @brief block number of data bytes to transfer from the source */
    using LPDMA_C0BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 0 source address register */
    using LPDMA_C0SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using LPDMA_C0SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 0 destination address register */
    using LPDMA_C0DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using LPDMA_C0DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 0 linked-list address register */
    using LPDMA_C0LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using LPDMA_C0LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update LPDMA_CxLLR register from memory */
    using LPDMA_C0LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxLLR update (value: 0)
     *          - B_0x1: LPDMA_CxLLR update (value: 1)
     */
        /** @brief no LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C0LLR_ULL_B_0x0 = 0;
        /** @brief LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C0LLR_ULL_B_0x1 = 1;

    /** @brief Update LPDMA_CxDAR register from memory */
    using LPDMA_C0LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxDAR update (value: 0)
     *          - B_0x1: LPDMA_CxDAR update (value: 1)
     */
        /** @brief no LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C0LLR_UDA_B_0x0 = 0;
        /** @brief LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C0LLR_UDA_B_0x1 = 1;

    /** @brief update LPDMA_CxSAR from memory */
    using LPDMA_C0LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxSAR update (value: 0)
     *          - B_0x1: LPDMA_CxSAR update (value: 1)
     */
        /** @brief no LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C0LLR_USA_B_0x0 = 0;
        /** @brief LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C0LLR_USA_B_0x1 = 1;

    /** @brief Update LPDMA_CxBR1 from memory */
    using LPDMA_C0LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value (value: 0)
     *          - B_0x1: LPDMA_CxBR1 update (value: 1)
     */
        /** @brief no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value */
    constexpr std::uint32_t LPDMA_C0LLR_UB1_B_0x0 = 0;
        /** @brief LPDMA_CxBR1 update */
    constexpr std::uint32_t LPDMA_C0LLR_UB1_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR2 from memory */
    using LPDMA_C0LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR2 update (value: 0)
     *          - B_0x1: LPDMA_CxTR2 update (value: 1)
     */
        /** @brief no LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C0LLR_UT2_B_0x0 = 0;
        /** @brief LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C0LLR_UT2_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR1 from memory */
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
    /** @brief idle flag */
    using LPDMA_C1SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t LPDMA_C1SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t LPDMA_C1SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using LPDMA_C1SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t LPDMA_C1SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t LPDMA_C1SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
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
    /** @brief enable */
    using LPDMA_C1CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t LPDMA_C1CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t LPDMA_C1CR_EN_B_0x1 = 1;

    /** @brief reset */
    using LPDMA_C1CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t LPDMA_C1CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t LPDMA_C1CR_RESET_B_0x1 = 1;

    /** @brief suspend */
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

    /** @brief Link step mode */
    using LPDMA_C1CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0). Then LPDMA_CxBR1.BNDT[15:0]=0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0). Then LPDMA_CxBR1.BNDT[15:0]=0. */
    constexpr std::uint32_t LPDMA_C1CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t LPDMA_C1CR_LSM_B_0x1 = 1;

    /** @brief priority level of the channel x LPDMA transfer versus others */
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
    /** @brief binary logarithm of the source data width of a single in bytes */
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

    /** @brief source incrementing single */
    using LPDMA_C1TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C1TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C1TR1_SINC_B_0x1 = 1;

    /** @brief padding/alignment mode */
    using LPDMA_C1TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t LPDMA_C1TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t LPDMA_C1TR1_PAM_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer from the source */
    using LPDMA_C1TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C1TR1_SSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C1TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a single in bytes */
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

    /** @brief destination incrementing single */
    using LPDMA_C1TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C1TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C1TR1_DINC_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer to the destination */
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
    /** @brief DMA hardware request selection */
    using LPDMA_C1TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using LPDMA_C1TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[4:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[4:0] is taken into account. */
    constexpr std::uint32_t LPDMA_C1TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. */
    constexpr std::uint32_t LPDMA_C1TR2_SWREQ_B_0x1 = 1;

    /** @brief block hardware request */
    using LPDMA_C1TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. */
    constexpr std::uint32_t LPDMA_C1TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). */
    constexpr std::uint32_t LPDMA_C1TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
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

    /** @brief trigger event input selection */
    using LPDMA_C1TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
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

    /** @brief transfer complete event mode */
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
    /** @brief block number of data bytes to transfer from the source */
    using LPDMA_C1BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 1 source address register */
    using LPDMA_C1SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using LPDMA_C1SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 1 destination address register */
    using LPDMA_C1DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using LPDMA_C1DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 1 linked-list address register */
    using LPDMA_C1LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using LPDMA_C1LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update LPDMA_CxLLR register from memory */
    using LPDMA_C1LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxLLR update (value: 0)
     *          - B_0x1: LPDMA_CxLLR update (value: 1)
     */
        /** @brief no LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C1LLR_ULL_B_0x0 = 0;
        /** @brief LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C1LLR_ULL_B_0x1 = 1;

    /** @brief Update LPDMA_CxDAR register from memory */
    using LPDMA_C1LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxDAR update (value: 0)
     *          - B_0x1: LPDMA_CxDAR update (value: 1)
     */
        /** @brief no LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C1LLR_UDA_B_0x0 = 0;
        /** @brief LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C1LLR_UDA_B_0x1 = 1;

    /** @brief update LPDMA_CxSAR from memory */
    using LPDMA_C1LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxSAR update (value: 0)
     *          - B_0x1: LPDMA_CxSAR update (value: 1)
     */
        /** @brief no LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C1LLR_USA_B_0x0 = 0;
        /** @brief LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C1LLR_USA_B_0x1 = 1;

    /** @brief Update LPDMA_CxBR1 from memory */
    using LPDMA_C1LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value (value: 0)
     *          - B_0x1: LPDMA_CxBR1 update (value: 1)
     */
        /** @brief no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value */
    constexpr std::uint32_t LPDMA_C1LLR_UB1_B_0x0 = 0;
        /** @brief LPDMA_CxBR1 update */
    constexpr std::uint32_t LPDMA_C1LLR_UB1_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR2 from memory */
    using LPDMA_C1LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR2 update (value: 0)
     *          - B_0x1: LPDMA_CxTR2 update (value: 1)
     */
        /** @brief no LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C1LLR_UT2_B_0x0 = 0;
        /** @brief LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C1LLR_UT2_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR1 from memory */
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
    /** @brief idle flag */
    using LPDMA_C2SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t LPDMA_C2SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t LPDMA_C2SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using LPDMA_C2SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t LPDMA_C2SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t LPDMA_C2SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
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
    /** @brief enable */
    using LPDMA_C2CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t LPDMA_C2CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t LPDMA_C2CR_EN_B_0x1 = 1;

    /** @brief reset */
    using LPDMA_C2CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t LPDMA_C2CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t LPDMA_C2CR_RESET_B_0x1 = 1;

    /** @brief suspend */
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

    /** @brief Link step mode */
    using LPDMA_C2CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0). Then LPDMA_CxBR1.BNDT[15:0]=0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0). Then LPDMA_CxBR1.BNDT[15:0]=0. */
    constexpr std::uint32_t LPDMA_C2CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t LPDMA_C2CR_LSM_B_0x1 = 1;

    /** @brief priority level of the channel x LPDMA transfer versus others */
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
    /** @brief binary logarithm of the source data width of a single in bytes */
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

    /** @brief source incrementing single */
    using LPDMA_C2TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C2TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C2TR1_SINC_B_0x1 = 1;

    /** @brief padding/alignment mode */
    using LPDMA_C2TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t LPDMA_C2TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t LPDMA_C2TR1_PAM_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer from the source */
    using LPDMA_C2TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C2TR1_SSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C2TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a single in bytes */
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

    /** @brief destination incrementing single */
    using LPDMA_C2TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C2TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C2TR1_DINC_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer to the destination */
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
    /** @brief DMA hardware request selection */
    using LPDMA_C2TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using LPDMA_C2TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[4:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[4:0] is taken into account. */
    constexpr std::uint32_t LPDMA_C2TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. */
    constexpr std::uint32_t LPDMA_C2TR2_SWREQ_B_0x1 = 1;

    /** @brief block hardware request */
    using LPDMA_C2TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. */
    constexpr std::uint32_t LPDMA_C2TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). */
    constexpr std::uint32_t LPDMA_C2TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
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

    /** @brief trigger event input selection */
    using LPDMA_C2TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
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

    /** @brief transfer complete event mode */
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
    /** @brief block number of data bytes to transfer from the source */
    using LPDMA_C2BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 2 source address register */
    using LPDMA_C2SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using LPDMA_C2SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 2 destination address register */
    using LPDMA_C2DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using LPDMA_C2DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 2 linked-list address register */
    using LPDMA_C2LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using LPDMA_C2LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update LPDMA_CxLLR register from memory */
    using LPDMA_C2LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxLLR update (value: 0)
     *          - B_0x1: LPDMA_CxLLR update (value: 1)
     */
        /** @brief no LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C2LLR_ULL_B_0x0 = 0;
        /** @brief LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C2LLR_ULL_B_0x1 = 1;

    /** @brief Update LPDMA_CxDAR register from memory */
    using LPDMA_C2LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxDAR update (value: 0)
     *          - B_0x1: LPDMA_CxDAR update (value: 1)
     */
        /** @brief no LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C2LLR_UDA_B_0x0 = 0;
        /** @brief LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C2LLR_UDA_B_0x1 = 1;

    /** @brief update LPDMA_CxSAR from memory */
    using LPDMA_C2LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxSAR update (value: 0)
     *          - B_0x1: LPDMA_CxSAR update (value: 1)
     */
        /** @brief no LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C2LLR_USA_B_0x0 = 0;
        /** @brief LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C2LLR_USA_B_0x1 = 1;

    /** @brief Update LPDMA_CxBR1 from memory */
    using LPDMA_C2LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value (value: 0)
     *          - B_0x1: LPDMA_CxBR1 update (value: 1)
     */
        /** @brief no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value */
    constexpr std::uint32_t LPDMA_C2LLR_UB1_B_0x0 = 0;
        /** @brief LPDMA_CxBR1 update */
    constexpr std::uint32_t LPDMA_C2LLR_UB1_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR2 from memory */
    using LPDMA_C2LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR2 update (value: 0)
     *          - B_0x1: LPDMA_CxTR2 update (value: 1)
     */
        /** @brief no LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C2LLR_UT2_B_0x0 = 0;
        /** @brief LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C2LLR_UT2_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR1 from memory */
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
    /** @brief idle flag */
    using LPDMA_C3SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t LPDMA_C3SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t LPDMA_C3SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using LPDMA_C3SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t LPDMA_C3SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t LPDMA_C3SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
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
    /** @brief enable */
    using LPDMA_C3CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t LPDMA_C3CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t LPDMA_C3CR_EN_B_0x1 = 1;

    /** @brief reset */
    using LPDMA_C3CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t LPDMA_C3CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t LPDMA_C3CR_RESET_B_0x1 = 1;

    /** @brief suspend */
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

    /** @brief Link step mode */
    using LPDMA_C3CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0). Then LPDMA_CxBR1.BNDT[15:0]=0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (LPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0). Then LPDMA_CxBR1.BNDT[15:0]=0. */
    constexpr std::uint32_t LPDMA_C3CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t LPDMA_C3CR_LSM_B_0x1 = 1;

    /** @brief priority level of the channel x LPDMA transfer versus others */
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
    /** @brief binary logarithm of the source data width of a single in bytes */
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

    /** @brief source incrementing single */
    using LPDMA_C3TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C3TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C3TR1_SINC_B_0x1 = 1;

    /** @brief padding/alignment mode */
    using LPDMA_C3TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t LPDMA_C3TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t LPDMA_C3TR1_PAM_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer from the source */
    using LPDMA_C3TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPDMA transfer non-secure (value: 0)
     *          - B_0x1: LPDMA transfer secure (value: 1)
     */
        /** @brief LPDMA transfer non-secure */
    constexpr std::uint32_t LPDMA_C3TR1_SSEC_B_0x0 = 0;
        /** @brief LPDMA transfer secure */
    constexpr std::uint32_t LPDMA_C3TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a single in bytes */
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

    /** @brief destination incrementing single */
    using LPDMA_C3TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed single (value: 0)
     *          - B_0x1: contiguously incremented single (value: 1)
     */
        /** @brief fixed single */
    constexpr std::uint32_t LPDMA_C3TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented single */
    constexpr std::uint32_t LPDMA_C3TR1_DINC_B_0x1 = 1;

    /** @brief security attribute of the LPDMA transfer to the destination */
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
    /** @brief DMA hardware request selection */
    using LPDMA_C3TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using LPDMA_C3TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[4:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[4:0] is taken into account. */
    constexpr std::uint32_t LPDMA_C3TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[4:0] is ignored. */
    constexpr std::uint32_t LPDMA_C3TR2_SWREQ_B_0x1 = 1;

    /** @brief block hardware request */
    using LPDMA_C3TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a single level. */
    constexpr std::uint32_t LPDMA_C3TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see request as a block request). */
    constexpr std::uint32_t LPDMA_C3TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
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

    /** @brief trigger event input selection */
    using LPDMA_C3TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
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

    /** @brief transfer complete event mode */
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
    /** @brief block number of data bytes to transfer from the source */
    using LPDMA_C3BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 3 source address register */
    using LPDMA_C3SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using LPDMA_C3SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 3 destination address register */
    using LPDMA_C3DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using LPDMA_C3DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPDMA channel 3 linked-list address register */
    using LPDMA_C3LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using LPDMA_C3LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update LPDMA_CxLLR register from memory */
    using LPDMA_C3LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxLLR update (value: 0)
     *          - B_0x1: LPDMA_CxLLR update (value: 1)
     */
        /** @brief no LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C3LLR_ULL_B_0x0 = 0;
        /** @brief LPDMA_CxLLR update */
    constexpr std::uint32_t LPDMA_C3LLR_ULL_B_0x1 = 1;

    /** @brief Update LPDMA_CxDAR register from memory */
    using LPDMA_C3LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxDAR update (value: 0)
     *          - B_0x1: LPDMA_CxDAR update (value: 1)
     */
        /** @brief no LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C3LLR_UDA_B_0x0 = 0;
        /** @brief LPDMA_CxDAR update */
    constexpr std::uint32_t LPDMA_C3LLR_UDA_B_0x1 = 1;

    /** @brief update LPDMA_CxSAR from memory */
    using LPDMA_C3LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxSAR update (value: 0)
     *          - B_0x1: LPDMA_CxSAR update (value: 1)
     */
        /** @brief no LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C3LLR_USA_B_0x0 = 0;
        /** @brief LPDMA_CxSAR update */
    constexpr std::uint32_t LPDMA_C3LLR_USA_B_0x1 = 1;

    /** @brief Update LPDMA_CxBR1 from memory */
    using LPDMA_C3LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value (value: 0)
     *          - B_0x1: LPDMA_CxBR1 update (value: 1)
     */
        /** @brief no LPDMA_CxBR1 update from memory and internally restored to the previous programmed value */
    constexpr std::uint32_t LPDMA_C3LLR_UB1_B_0x0 = 0;
        /** @brief LPDMA_CxBR1 update */
    constexpr std::uint32_t LPDMA_C3LLR_UB1_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR2 from memory */
    using LPDMA_C3LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no LPDMA_CxTR2 update (value: 0)
     *          - B_0x1: LPDMA_CxTR2 update (value: 1)
     */
        /** @brief no LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C3LLR_UT2_B_0x0 = 0;
        /** @brief LPDMA_CxTR2 update */
    constexpr std::uint32_t LPDMA_C3LLR_UT2_B_0x1 = 1;

    /** @brief Update LPDMA_CxTR1 from memory */
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
