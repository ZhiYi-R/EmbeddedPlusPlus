/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA6M_SEC_OTG_HPP
#define EMBEDDED_PP_STM32WBA6M_SEC_OTG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief OTG address block description */
namespace STM32WBA6M::SEC_OTG {

    /** @brief OTG control and status register */
    using OTG_GOTGCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vless thansub>BUSless than/sub> valid override enable */
    using OTG_GOTGCTL_VBVALOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Override is disabled and vbusvalid signal from the respective PHY selected is used internally by the core (value: 0)
     *          - B_0x1: Internally vbusvalid received from the PHY is overridden with VBVALOVAL bit value (value: 1)
     */
        /** @brief Override is disabled and vbusvalid signal from the respective PHY selected is used internally by the core */
    constexpr std::uint32_t OTG_GOTGCTL_VBVALOEN_B_0x0 = 0;
        /** @brief Internally vbusvalid received from the PHY is overridden with VBVALOVAL bit value */
    constexpr std::uint32_t OTG_GOTGCTL_VBVALOEN_B_0x1 = 1;

    /** @brief Vless thansub>BUSless than/sub> valid override value */
    using OTG_GOTGCTL_VBVALOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: vbusvalid value is '0' when VBVALOEN = 1 (value: 0)
     *          - B_0x1: vbusvalid value is '1' when VBVALOEN = 1 (value: 1)
     */
        /** @brief vbusvalid value is '0' when VBVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_VBVALOVAL_B_0x0 = 0;
        /** @brief vbusvalid value is '1' when VBVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_VBVALOVAL_B_0x1 = 1;

    /** @brief A-peripheral session valid override enable */
    using OTG_GOTGCTL_AVALOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Override is disabled and Avalid signal from the respective PHY selected is used internally by the core (value: 0)
     *          - B_0x1: Internally Avalid received from the PHY is overridden with AVALOVAL bit value (value: 1)
     */
        /** @brief Override is disabled and Avalid signal from the respective PHY selected is used internally by the core */
    constexpr std::uint32_t OTG_GOTGCTL_AVALOEN_B_0x0 = 0;
        /** @brief Internally Avalid received from the PHY is overridden with AVALOVAL bit value */
    constexpr std::uint32_t OTG_GOTGCTL_AVALOEN_B_0x1 = 1;

    /** @brief A-peripheral session valid override value */
    using OTG_GOTGCTL_AVALOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Avalid value is '0' when AVALOEN = 1 (value: 0)
     *          - B_0x1: Avalid value is '1' when AVALOEN = 1 (value: 1)
     */
        /** @brief Avalid value is '0' when AVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_AVALOVAL_B_0x0 = 0;
        /** @brief Avalid value is '1' when AVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_AVALOVAL_B_0x1 = 1;

    /** @brief B-peripheral session valid override enable */
    using OTG_GOTGCTL_BVALOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Override is disabled and Bvalid signal from the respective PHY selected is used internally by the core (value: 0)
     */
        /** @brief Override is disabled and Bvalid signal from the respective PHY selected is used internally by the core */
    constexpr std::uint32_t OTG_GOTGCTL_BVALOEN_B_0x0 = 0;

    /** @brief B-peripheral session valid override value */
    using OTG_GOTGCTL_BVALOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bvalid value is '0' when BVALOEN = 1 (value: 0)
     *          - B_0x1: Bvalid value is '1' when BVALOEN = 1 (value: 1)
     */
        /** @brief Bvalid value is '0' when BVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_BVALOVAL_B_0x0 = 0;
        /** @brief Bvalid value is '1' when BVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_BVALOVAL_B_0x1 = 1;

    /** @brief Embedded host enable */
    using OTG_GOTGCTL_EHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG A device state machine is selected (value: 0)
     *          - B_0x1: Embedded host state machine is selected (value: 1)
     */
        /** @brief OTG A device state machine is selected */
    constexpr std::uint32_t OTG_GOTGCTL_EHEN_B_0x0 = 0;
        /** @brief Embedded host state machine is selected */
    constexpr std::uint32_t OTG_GOTGCTL_EHEN_B_0x1 = 1;

    /** @brief Connector ID status */
    using OTG_GOTGCTL_CIDSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The OTG controller is in A-device mode (value: 0)
     *          - B_0x1: The OTG controller is in B-device mode (value: 1)
     */
        /** @brief The OTG controller is in A-device mode */
    constexpr std::uint32_t OTG_GOTGCTL_CIDSTS_B_0x0 = 0;
        /** @brief The OTG controller is in B-device mode */
    constexpr std::uint32_t OTG_GOTGCTL_CIDSTS_B_0x1 = 1;

    /** @brief Long/short debounce time */
    using OTG_GOTGCTL_DBCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Long debounce time, used for physical connections (100 ms + 2. (value: 0)
     *          - B_0x1: Short debounce time, used for soft connections (2. (value: 1)
     */
        /** @brief Long debounce time, used for physical connections (100 ms + 2. */
    constexpr std::uint32_t OTG_GOTGCTL_DBCT_B_0x0 = 0;
        /** @brief Short debounce time, used for soft connections (2. */
    constexpr std::uint32_t OTG_GOTGCTL_DBCT_B_0x1 = 1;

    /** @brief A-session valid */
    using OTG_GOTGCTL_ASVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A-session is not valid (value: 0)
     *          - B_0x1: A-session is valid (value: 1)
     */
        /** @brief A-session is not valid */
    constexpr std::uint32_t OTG_GOTGCTL_ASVLD_B_0x0 = 0;
        /** @brief A-session is valid */
    constexpr std::uint32_t OTG_GOTGCTL_ASVLD_B_0x1 = 1;

    /** @brief B-session valid */
    using OTG_GOTGCTL_BSVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: B-session is not valid. (value: 0)
     *          - B_0x1: B-session is valid. (value: 1)
     */
        /** @brief B-session is not valid. */
    constexpr std::uint32_t OTG_GOTGCTL_BSVLD_B_0x0 = 0;
        /** @brief B-session is valid. */
    constexpr std::uint32_t OTG_GOTGCTL_BSVLD_B_0x1 = 1;

    /** @brief OTG version */
    using OTG_GOTGCTL_OTGVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG Version 1. (value: 0)
     *          - B_0x1: OTG Version 2. (value: 1)
     */
        /** @brief OTG Version 1. */
    constexpr std::uint32_t OTG_GOTGCTL_OTGVER_B_0x0 = 0;
        /** @brief OTG Version 2. */
    constexpr std::uint32_t OTG_GOTGCTL_OTGVER_B_0x1 = 1;

    /** @brief Current mode of operation */
    using OTG_GOTGCTL_CURMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device mode (value: 0)
     *          - B_0x1: Host mode (value: 1)
     */
        /** @brief Device mode */
    constexpr std::uint32_t OTG_GOTGCTL_CURMOD_B_0x0 = 0;
        /** @brief Host mode */
    constexpr std::uint32_t OTG_GOTGCTL_CURMOD_B_0x1 = 1;

    /** @brief OTG interrupt register */
    using OTG_GOTGINT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session end detected */
    using OTG_GOTGINT_SEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A-device timeout change */
    using OTG_GOTGINT_ADTOCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG AHB configuration register */
    using OTG_GAHBCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global interrupt mask */
    using OTG_GAHBCFG_GINTMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Mask the interrupt assertion to the application. (value: 0)
     *          - B_0x1: Unmask the interrupt assertion to the application. (value: 1)
     */
        /** @brief Mask the interrupt assertion to the application. */
    constexpr std::uint32_t OTG_GAHBCFG_GINTMSK_B_0x0 = 0;
        /** @brief Unmask the interrupt assertion to the application. */
    constexpr std::uint32_t OTG_GAHBCFG_GINTMSK_B_0x1 = 1;

    /** @brief Burst length/type */
    using OTG_GAHBCFG_HBSTLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA enabled */
    using OTG_GAHBCFG_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core operates in slave mode (value: 0)
     *          - B_0x1: The core operates in DMA mode (value: 1)
     */
        /** @brief The core operates in slave mode */
    constexpr std::uint32_t OTG_GAHBCFG_DMAEN_B_0x0 = 0;
        /** @brief The core operates in DMA mode */
    constexpr std::uint32_t OTG_GAHBCFG_DMAEN_B_0x1 = 1;

    /** @brief Tx FIFO empty level */
    using OTG_GAHBCFG_TXFELVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_DEVICE_MODE: The TXFE (in OTG_DIEPINTx) interrupt indicates that the IN endpoint Tx FIFO is half empty (value: 0)
     *          - B_0x1_DEVICE_MODE: The TXFE (in OTG_DIEPINTx) interrupt indicates that the IN endpoint Tx FIFO is completely empty (value: 1)
     */
        /** @brief The TXFE (in OTG_DIEPINTx) interrupt indicates that the IN endpoint Tx FIFO is half empty */
    constexpr std::uint32_t OTG_GAHBCFG_TXFELVL_B_0x0_DEVICE_MODE = 0;
        /** @brief The TXFE (in OTG_DIEPINTx) interrupt indicates that the IN endpoint Tx FIFO is completely empty */
    constexpr std::uint32_t OTG_GAHBCFG_TXFELVL_B_0x1_DEVICE_MODE = 1;

    /** @brief Periodic Tx FIFO empty level */
    using OTG_GAHBCFG_PTXFELVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PTXFE (in OTG_GINTSTS) interrupt indicates that the Periodic Tx FIFO is half empty (value: 0)
     *          - B_0x1: PTXFE (in OTG_GINTSTS) interrupt indicates that the Periodic Tx FIFO is completely empty (value: 1)
     */
        /** @brief PTXFE (in OTG_GINTSTS) interrupt indicates that the Periodic Tx FIFO is half empty */
    constexpr std::uint32_t OTG_GAHBCFG_PTXFELVL_B_0x0 = 0;
        /** @brief PTXFE (in OTG_GINTSTS) interrupt indicates that the Periodic Tx FIFO is completely empty */
    constexpr std::uint32_t OTG_GAHBCFG_PTXFELVL_B_0x1 = 1;

    /** @brief OTG USB configuration register */
    using OTG_GUSBCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FS timeout calibration */
    using OTG_GUSBCFG_TOCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB turnaround time */
    using OTG_GUSBCFG_TRDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Low-power clock select */
    using OTG_GUSBCFG_PHYLPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 480MHz internal PLL clock (value: 0)
     *          - B_0x1: 48MHz external clock (value: 1)
     */
        /** @brief 480MHz internal PLL clock */
    constexpr std::uint32_t OTG_GUSBCFG_PHYLPC_B_0x0 = 0;
        /** @brief 48MHz external clock */
    constexpr std::uint32_t OTG_GUSBCFG_PHYLPC_B_0x1 = 1;

    /** @brief TermSel DLine pulsing selection */
    using OTG_GUSBCFG_TSDPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data line pulsing using utmi_txvalid (default) (value: 0)
     *          - B_0x1: Data line pulsing using utmi_termsel (value: 1)
     */
        /** @brief Data line pulsing using utmi_txvalid (default) */
    constexpr std::uint32_t OTG_GUSBCFG_TSDPS_B_0x0 = 0;
        /** @brief Data line pulsing using utmi_termsel */
    constexpr std::uint32_t OTG_GUSBCFG_TSDPS_B_0x1 = 1;

    /** @brief Force host mode */
    using OTG_GUSBCFG_FHMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode (value: 0)
     *          - B_0x1: Force host mode (value: 1)
     */
        /** @brief Normal mode */
    constexpr std::uint32_t OTG_GUSBCFG_FHMOD_B_0x0 = 0;
        /** @brief Force host mode */
    constexpr std::uint32_t OTG_GUSBCFG_FHMOD_B_0x1 = 1;

    /** @brief Force device mode */
    using OTG_GUSBCFG_FDMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode (value: 0)
     *          - B_0x1: Force device mode (value: 1)
     */
        /** @brief Normal mode */
    constexpr std::uint32_t OTG_GUSBCFG_FDMOD_B_0x0 = 0;
        /** @brief Force device mode */
    constexpr std::uint32_t OTG_GUSBCFG_FDMOD_B_0x1 = 1;

    /** @brief OTG reset register */
    using OTG_GRSTCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Core soft reset */
    using OTG_GRSTCTL_CSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Partial soft reset */
    using OTG_GRSTCTL_PSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host frame counter reset */
    using OTG_GRSTCTL_FCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO flush */
    using OTG_GRSTCTL_RXFFLSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO flush */
    using OTG_GRSTCTL_TXFFLSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_GRSTCTL_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_HOST_MODE: Non-periodic Tx FIFO flush (value: 0)
     *          - B_0x1_HOST_MODE: Periodic Tx FIFO flush (value: 1)
     *          - B_0x10_HOST_MODE: Flush all the transmit FIFOs (value: 16)
     *          - B_0x2_DEVICE_MODE: Tx FIFO 2 flush (value: 2)
     *          - B_0xF_DEVICE_MODE: Tx FIFO 15 flush (value: 15)
     */
        /** @brief Non-periodic Tx FIFO flush */
    constexpr std::uint32_t OTG_GRSTCTL_TXFNUM_B_0x0_HOST_MODE = 0;
        /** @brief Periodic Tx FIFO flush */
    constexpr std::uint32_t OTG_GRSTCTL_TXFNUM_B_0x1_HOST_MODE = 1;
        /** @brief Flush all the transmit FIFOs */
    constexpr std::uint32_t OTG_GRSTCTL_TXFNUM_B_0x10_HOST_MODE = 16;
        /** @brief Tx FIFO 2 flush */
    constexpr std::uint32_t OTG_GRSTCTL_TXFNUM_B_0x2_DEVICE_MODE = 2;
        /** @brief Tx FIFO 15 flush */
    constexpr std::uint32_t OTG_GRSTCTL_TXFNUM_B_0xF_DEVICE_MODE = 15;

    /** @brief Core soft reset done */
    using OTG_GRSTCTL_CSRSTDONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Core reset not done (value: 0)
     *          - B_0x1: Core reset done (value: 1)
     */
        /** @brief Core reset not done */
    constexpr std::uint32_t OTG_GRSTCTL_CSRSTDONE_B_0x0 = 0;
        /** @brief Core reset done */
    constexpr std::uint32_t OTG_GRSTCTL_CSRSTDONE_B_0x1 = 1;

    /** @brief DMA request signal enabled */
    using OTG_GRSTCTL_DMAREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB master idle */
    using OTG_GRSTCTL_AHBIDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG core interrupt register [alternate] */
    using OTG_GINTSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current mode of operation */
    using OTG_GINTSTS_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device mode (value: 0)
     *          - B_0x1: Host mode (value: 1)
     */
        /** @brief Device mode */
    constexpr std::uint32_t OTG_GINTSTS_CMOD_B_0x0 = 0;
        /** @brief Host mode */
    constexpr std::uint32_t OTG_GINTSTS_CMOD_B_0x1 = 1;

    /** @brief Mode mismatch interrupt */
    using OTG_GINTSTS_MMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG interrupt */
    using OTG_GINTSTS_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame */
    using OTG_GINTSTS_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO non-empty */
    using OTG_GINTSTS_RXFLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic Tx FIFO empty */
    using OTG_GINTSTS_NPTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global IN non-periodic NAK effective */
    using OTG_GINTSTS_GINAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global OUT NAK effective */
    using OTG_GINTSTS_GONAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early suspend */
    using OTG_GINTSTS_ESUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB suspend */
    using OTG_GINTSTS_USBSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB reset */
    using OTG_GINTSTS_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumeration done */
    using OTG_GINTSTS_ENUMDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Isochronous OUT packet dropped interrupt */
    using OTG_GINTSTS_ISOODRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of periodic frame interrupt */
    using OTG_GINTSTS_EOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint interrupt */
    using OTG_GINTSTS_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoint interrupt */
    using OTG_GINTSTS_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete isochronous IN transfer */
    using OTG_GINTSTS_IISOIXFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete periodic transfer */
    using OTG_GINTSTS_IPXFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data fetch suspended */
    using OTG_GINTSTS_DATAFSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset detected interrupt */
    using OTG_GINTSTS_RSTDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host port interrupt */
    using OTG_GINTSTS_HPRTINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host channels interrupt */
    using OTG_GINTSTS_HCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic Tx FIFO empty */
    using OTG_GINTSTS_PTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM interrupt */
    using OTG_GINTSTS_LPMINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Connector ID status change */
    using OTG_GINTSTS_CIDSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disconnect detected interrupt */
    using OTG_GINTSTS_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request/new session detected interrupt */
    using OTG_GINTSTS_SRQINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Resume/remote wake-up detected interrupt */
    using OTG_GINTSTS_WKUPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG core interrupt register */
    using OTG_GINTSTS_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current mode of operation */
    using OTG_GINTSTS_ALTERNATE1_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device mode (value: 0)
     *          - B_0x1: Host mode (value: 1)
     */
        /** @brief Device mode */
    constexpr std::uint32_t OTG_GINTSTS_ALTERNATE1_CMOD_B_0x0 = 0;
        /** @brief Host mode */
    constexpr std::uint32_t OTG_GINTSTS_ALTERNATE1_CMOD_B_0x1 = 1;

    /** @brief Mode mismatch interrupt */
    using OTG_GINTSTS_ALTERNATE1_MMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG interrupt */
    using OTG_GINTSTS_ALTERNATE1_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame */
    using OTG_GINTSTS_ALTERNATE1_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO non-empty */
    using OTG_GINTSTS_ALTERNATE1_RXFLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic Tx FIFO empty */
    using OTG_GINTSTS_ALTERNATE1_NPTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global IN non-periodic NAK effective */
    using OTG_GINTSTS_ALTERNATE1_GINAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global OUT NAK effective */
    using OTG_GINTSTS_ALTERNATE1_GONAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early suspend */
    using OTG_GINTSTS_ALTERNATE1_ESUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB suspend */
    using OTG_GINTSTS_ALTERNATE1_USBSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB reset */
    using OTG_GINTSTS_ALTERNATE1_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumeration done */
    using OTG_GINTSTS_ALTERNATE1_ENUMDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Isochronous OUT packet dropped interrupt */
    using OTG_GINTSTS_ALTERNATE1_ISOODRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of periodic frame interrupt */
    using OTG_GINTSTS_ALTERNATE1_EOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint interrupt */
    using OTG_GINTSTS_ALTERNATE1_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoint interrupt */
    using OTG_GINTSTS_ALTERNATE1_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete isochronous IN transfer */
    using OTG_GINTSTS_ALTERNATE1_IISOIXFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete isochronous OUT transfer */
    using OTG_GINTSTS_ALTERNATE1_INCOMPISOOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data fetch suspended */
    using OTG_GINTSTS_ALTERNATE1_DATAFSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset detected interrupt */
    using OTG_GINTSTS_ALTERNATE1_RSTDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host port interrupt */
    using OTG_GINTSTS_ALTERNATE1_HPRTINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host channels interrupt */
    using OTG_GINTSTS_ALTERNATE1_HCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic Tx FIFO empty */
    using OTG_GINTSTS_ALTERNATE1_PTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM interrupt */
    using OTG_GINTSTS_ALTERNATE1_LPMINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Connector ID status change */
    using OTG_GINTSTS_ALTERNATE1_CIDSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disconnect detected interrupt */
    using OTG_GINTSTS_ALTERNATE1_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request/new session detected interrupt */
    using OTG_GINTSTS_ALTERNATE1_SRQINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Resume/remote wake-up detected interrupt */
    using OTG_GINTSTS_ALTERNATE1_WKUPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG interrupt mask register [alternate] */
    using OTG_GINTMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mode mismatch interrupt mask */
    using OTG_GINTMSK_MMISM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_MMISM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_MMISM_B_0x1 = 1;

    /** @brief OTG interrupt mask */
    using OTG_GINTMSK_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_OTGINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_OTGINT_B_0x1 = 1;

    /** @brief Start of frame mask */
    using OTG_GINTMSK_SOFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_SOFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_SOFM_B_0x1 = 1;

    /** @brief Receive FIFO non-empty mask */
    using OTG_GINTMSK_RXFLVLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_RXFLVLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_RXFLVLM_B_0x1 = 1;

    /** @brief Non-periodic Tx FIFO empty mask */
    using OTG_GINTMSK_NPTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_NPTXFEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_NPTXFEM_B_0x1 = 1;

    /** @brief Incomplete periodic transfer mask */
    using OTG_GINTMSK_IPXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_IPXFRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_IPXFRM_B_0x1 = 1;

    /** @brief Host port interrupt mask */
    using OTG_GINTMSK_PRTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_PRTIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_PRTIM_B_0x1 = 1;

    /** @brief Host channels interrupt mask */
    using OTG_GINTMSK_HCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HCIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HCIM_B_0x1 = 1;

    /** @brief Periodic Tx FIFO empty mask */
    using OTG_GINTMSK_PTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_PTXFEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_PTXFEM_B_0x1 = 1;

    /** @brief LPM interrupt mask */
    using OTG_GINTMSK_LPMINTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_LPMINTM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_LPMINTM_B_0x1 = 1;

    /** @brief Connector ID status change mask */
    using OTG_GINTMSK_CIDSCHGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_CIDSCHGM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_CIDSCHGM_B_0x1 = 1;

    /** @brief Disconnect detected interrupt mask */
    using OTG_GINTMSK_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DISCINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DISCINT_B_0x1 = 1;

    /** @brief Session request/new session detected interrupt mask */
    using OTG_GINTMSK_SRQIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_SRQIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_SRQIM_B_0x1 = 1;

    /** @brief Resume/remote wake-up detected interrupt mask */
    using OTG_GINTMSK_WUIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_WUIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_WUIM_B_0x1 = 1;

    /** @brief OTG interrupt mask register */
    using OTG_GINTMSK_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mode mismatch interrupt mask */
    using OTG_GINTMSK_ALTERNATE1_MMISM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_MMISM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_MMISM_B_0x1 = 1;

    /** @brief OTG interrupt mask */
    using OTG_GINTMSK_ALTERNATE1_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_OTGINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_OTGINT_B_0x1 = 1;

    /** @brief Start of frame mask */
    using OTG_GINTMSK_ALTERNATE1_SOFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_SOFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_SOFM_B_0x1 = 1;

    /** @brief Receive FIFO non-empty mask */
    using OTG_GINTMSK_ALTERNATE1_RXFLVLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_RXFLVLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_RXFLVLM_B_0x1 = 1;

    /** @brief Global non-periodic IN NAK effective mask */
    using OTG_GINTMSK_ALTERNATE1_GINAKEFFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_GINAKEFFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_GINAKEFFM_B_0x1 = 1;

    /** @brief Global OUT NAK effective mask */
    using OTG_GINTMSK_ALTERNATE1_GONAKEFFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_GONAKEFFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_GONAKEFFM_B_0x1 = 1;

    /** @brief Early suspend mask */
    using OTG_GINTMSK_ALTERNATE1_ESUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_ESUSPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_ESUSPM_B_0x1 = 1;

    /** @brief USB suspend mask */
    using OTG_GINTMSK_ALTERNATE1_USBSUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_USBSUSPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_USBSUSPM_B_0x1 = 1;

    /** @brief USB reset mask */
    using OTG_GINTMSK_ALTERNATE1_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_USBRST_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_USBRST_B_0x1 = 1;

    /** @brief Enumeration done mask */
    using OTG_GINTMSK_ALTERNATE1_ENUMDNEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_ENUMDNEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_ENUMDNEM_B_0x1 = 1;

    /** @brief Isochronous OUT packet dropped interrupt mask */
    using OTG_GINTMSK_ALTERNATE1_ISOODRPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_ISOODRPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_ISOODRPM_B_0x1 = 1;

    /** @brief End of periodic frame interrupt mask */
    using OTG_GINTMSK_ALTERNATE1_EOPFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_EOPFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_EOPFM_B_0x1 = 1;

    /** @brief IN endpoints interrupt mask */
    using OTG_GINTMSK_ALTERNATE1_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_IEPINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_IEPINT_B_0x1 = 1;

    /** @brief OUT endpoints interrupt mask */
    using OTG_GINTMSK_ALTERNATE1_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_OEPINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_OEPINT_B_0x1 = 1;

    /** @brief Incomplete isochronous IN transfer mask */
    using OTG_GINTMSK_ALTERNATE1_IISOIXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_IISOIXFRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_IISOIXFRM_B_0x1 = 1;

    /** @brief Incomplete isochronous OUT transfer mask */
    using OTG_GINTMSK_ALTERNATE1_IISOOXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_IISOOXFRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_IISOOXFRM_B_0x1 = 1;

    /** @brief Data fetch suspended mask */
    using OTG_GINTMSK_ALTERNATE1_FSUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_FSUSPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_FSUSPM_B_0x1 = 1;

    /** @brief Reset detected interrupt mask */
    using OTG_GINTMSK_ALTERNATE1_RSTDETM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_RSTDETM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_RSTDETM_B_0x1 = 1;

    /** @brief LPM interrupt mask */
    using OTG_GINTMSK_ALTERNATE1_LPMINTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_LPMINTM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_LPMINTM_B_0x1 = 1;

    /** @brief Connector ID status change mask */
    using OTG_GINTMSK_ALTERNATE1_CIDSCHGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_CIDSCHGM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_CIDSCHGM_B_0x1 = 1;

    /** @brief Session request/new session detected interrupt mask */
    using OTG_GINTMSK_ALTERNATE1_SRQIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_SRQIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_SRQIM_B_0x1 = 1;

    /** @brief Resume/remote wake-up detected interrupt mask */
    using OTG_GINTMSK_ALTERNATE1_WUIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_WUIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_ALTERNATE1_WUIM_B_0x1 = 1;

    /** @brief OTG receive status debug read register [alternate] */
    using OTG_GRXSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_GRXSTSR_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_GRXSTSR_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_GRXSTSR_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x3: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_GRXSTSR_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_GRXSTSR_DPID_B_0x2 = 2;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_GRXSTSR_DPID_B_0x1 = 1;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_GRXSTSR_DPID_B_0x3 = 3;

    /** @brief Packet status */
    using OTG_GRXSTSR_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Global OUT NAK (triggers an interrupt) (value: 1)
     *          - B_0x2: OUT data packet received (value: 2)
     *          - B_0x3: OUT transfer completed (triggers an interrupt) (value: 3)
     *          - B_0x4: SETUP transaction completed (triggers an interrupt) (value: 4)
     *          - B_0x6: SETUP data packet received (value: 6)
     */
        /** @brief Global OUT NAK (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_PKTSTS_B_0x1 = 1;
        /** @brief OUT data packet received */
    constexpr std::uint32_t OTG_GRXSTSR_PKTSTS_B_0x2 = 2;
        /** @brief OUT transfer completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_PKTSTS_B_0x3 = 3;
        /** @brief SETUP transaction completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_PKTSTS_B_0x4 = 4;
        /** @brief SETUP data packet received */
    constexpr std::uint32_t OTG_GRXSTSR_PKTSTS_B_0x6 = 6;

    /** @brief Frame number */
    using OTG_GRXSTSR_FRMNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase start */
    using OTG_GRXSTSR_STSPHST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG receive status debug read register */
    using OTG_GRXSTSR_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel number */
    using OTG_GRXSTSR_ALTERNATE1_CHNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_GRXSTSR_ALTERNATE1_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_GRXSTSR_ALTERNATE1_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x3: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_GRXSTSR_ALTERNATE1_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_GRXSTSR_ALTERNATE1_DPID_B_0x2 = 2;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_GRXSTSR_ALTERNATE1_DPID_B_0x1 = 1;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_GRXSTSR_ALTERNATE1_DPID_B_0x3 = 3;

    /** @brief Packet status */
    using OTG_GRXSTSR_ALTERNATE1_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: IN data packet received (value: 2)
     *          - B_0x3: IN transfer completed (triggers an interrupt) (value: 3)
     *          - B_0x5: Data toggle error (triggers an interrupt) (value: 5)
     *          - B_0x7: Channel halted (triggers an interrupt) (value: 7)
     */
        /** @brief IN data packet received */
    constexpr std::uint32_t OTG_GRXSTSR_ALTERNATE1_PKTSTS_B_0x2 = 2;
        /** @brief IN transfer completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_ALTERNATE1_PKTSTS_B_0x3 = 3;
        /** @brief Data toggle error (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_ALTERNATE1_PKTSTS_B_0x5 = 5;
        /** @brief Channel halted (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_ALTERNATE1_PKTSTS_B_0x7 = 7;

    /** @brief OTG status read and pop registers */
    using OTG_GRXSTSP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_GRXSTSP_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_GRXSTSP_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_GRXSTSP_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x3: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_GRXSTSP_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_GRXSTSP_DPID_B_0x2 = 2;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_GRXSTSP_DPID_B_0x1 = 1;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_GRXSTSP_DPID_B_0x3 = 3;

    /** @brief Packet status */
    using OTG_GRXSTSP_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Global OUT NAK (triggers an interrupt) (value: 1)
     *          - B_0x2: OUT data packet received (value: 2)
     *          - B_0x3: OUT transfer completed (triggers an interrupt) (value: 3)
     *          - B_0x4: SETUP transaction completed (triggers an interrupt) (value: 4)
     *          - B_0x6: SETUP data packet received (value: 6)
     */
        /** @brief Global OUT NAK (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_PKTSTS_B_0x1 = 1;
        /** @brief OUT data packet received */
    constexpr std::uint32_t OTG_GRXSTSP_PKTSTS_B_0x2 = 2;
        /** @brief OUT transfer completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_PKTSTS_B_0x3 = 3;
        /** @brief SETUP transaction completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_PKTSTS_B_0x4 = 4;
        /** @brief SETUP data packet received */
    constexpr std::uint32_t OTG_GRXSTSP_PKTSTS_B_0x6 = 6;

    /** @brief Frame number */
    using OTG_GRXSTSP_FRMNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase start */
    using OTG_GRXSTSP_STSPHST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG status read and pop registers */
    using OTG_GRXSTSP_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel number */
    using OTG_GRXSTSP_ALTERNATE1_CHNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_GRXSTSP_ALTERNATE1_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_GRXSTSP_ALTERNATE1_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x3: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_GRXSTSP_ALTERNATE1_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_GRXSTSP_ALTERNATE1_DPID_B_0x2 = 2;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_GRXSTSP_ALTERNATE1_DPID_B_0x1 = 1;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_GRXSTSP_ALTERNATE1_DPID_B_0x3 = 3;

    /** @brief Packet status */
    using OTG_GRXSTSP_ALTERNATE1_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: IN data packet received (value: 2)
     *          - B_0x3: IN transfer completed (triggers an interrupt) (value: 3)
     *          - B_0x5: Data toggle error (triggers an interrupt) (value: 5)
     *          - B_0x7: Channel halted (triggers an interrupt) (value: 7)
     */
        /** @brief IN data packet received */
    constexpr std::uint32_t OTG_GRXSTSP_ALTERNATE1_PKTSTS_B_0x2 = 2;
        /** @brief IN transfer completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_ALTERNATE1_PKTSTS_B_0x3 = 3;
        /** @brief Data toggle error (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_ALTERNATE1_PKTSTS_B_0x5 = 5;
        /** @brief Channel halted (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_ALTERNATE1_PKTSTS_B_0x7 = 7;

    /** @brief OTG receive FIFO size register */
    using OTG_GRXFSIZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO depth */
    using OTG_GRXFSIZ_RXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host non-periodic transmit FIFO size register [alternate] */
    using OTG_HNPTXFSIZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic transmit RAM start address */
    using OTG_HNPTXFSIZ_NPTXFSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic Tx FIFO depth */
    using OTG_HNPTXFSIZ_NPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 transmit FIFO size */
    using OTG_DIEPTXF0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 transmit RAM start address */
    using OTG_DIEPTXF0_TX0FSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 Tx FIFO depth */
    using OTG_DIEPTXF0_TX0FD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG non-periodic transmit FIFO/queue status register */
    using OTG_HNPTXSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic Tx FIFO space available */
    using OTG_HNPTXSTS_NPTXFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-periodic Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     */
        /** @brief Non-periodic Tx FIFO is full */
    constexpr std::uint32_t OTG_HNPTXSTS_NPTXFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_HNPTXSTS_NPTXFSAV_B_0x1 = 1;

    /** @brief Non-periodic transmit request queue space available */
    using OTG_HNPTXSTS_NPTQXSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-periodic transmit request queue is full (value: 0)
     *          - B_0x1: 1 location available (value: 1)
     */
        /** @brief Non-periodic transmit request queue is full */
    constexpr std::uint32_t OTG_HNPTXSTS_NPTQXSAV_B_0x0 = 0;
        /** @brief 1 location available */
    constexpr std::uint32_t OTG_HNPTXSTS_NPTQXSAV_B_0x1 = 1;

    /** @brief Top of the non-periodic transmit request queue */
    using OTG_HNPTXSTS_NPTXQTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG general core configuration register */
    using OTG_GCCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Charger detection, result of the current mode (primary or secondary). */
    using OTG_GCCFG_CHGDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low value on pin (value: 0)
     *          - B_0x1: High value on pin (value: 1)
     */
        /** @brief Low value on pin */
    constexpr std::uint32_t OTG_GCCFG_CHGDET_B_0x0 = 0;
        /** @brief High value on pin */
    constexpr std::uint32_t OTG_GCCFG_CHGDET_B_0x1 = 1;

    /** @brief Single-Ended DP indicator */
    using OTG_GCCFG_FSVPLUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DM voltage at low level (value: 0)
     *          - B_0x1: DM voltage at high level (value: 1)
     */
        /** @brief DM voltage at low level */
    constexpr std::uint32_t OTG_GCCFG_FSVPLUS_B_0x0 = 0;
        /** @brief DM voltage at high level */
    constexpr std::uint32_t OTG_GCCFG_FSVPLUS_B_0x1 = 1;

    /** @brief Single-Ended DM indicator */
    using OTG_GCCFG_FSVMINUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DM voltage at low level (value: 0)
     *          - B_0x1: DM voltage at high level (value: 1)
     */
        /** @brief DM voltage at low level */
    constexpr std::uint32_t OTG_GCCFG_FSVMINUS_B_0x0 = 0;
        /** @brief DM voltage at high level */
    constexpr std::uint32_t OTG_GCCFG_FSVMINUS_B_0x1 = 1;

    /** @brief VBUS session indicator */
    using OTG_GCCFG_SESSVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VBUS is below VBUS session threshold (value: 0)
     *          - B_0x1: VBUS is above VBUS session threshold (value: 1)
     */
        /** @brief VBUS is below VBUS session threshold */
    constexpr std::uint32_t OTG_GCCFG_SESSVLD_B_0x0 = 0;
        /** @brief VBUS is above VBUS session threshold */
    constexpr std::uint32_t OTG_GCCFG_SESSVLD_B_0x1 = 1;

    /** @brief Host CDP behavior enable */
    using OTG_GCCFG_HCDPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable CDP behavior (value: 0)
     *          - B_0x1: Enable CDP behavior (value: 1)
     */
        /** @brief Disable CDP behavior */
    constexpr std::uint32_t OTG_GCCFG_HCDPEN_B_0x0 = 0;
        /** @brief Enable CDP behavior */
    constexpr std::uint32_t OTG_GCCFG_HCDPEN_B_0x1 = 1;

    /** @brief Host CDP port voltage detector enable on DP */
    using OTG_GCCFG_HCDPDETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DP voltage detection disabled (value: 0)
     *          - B_0x1: DP voltage detection enabled (value: 1)
     */
        /** @brief DP voltage detection disabled */
    constexpr std::uint32_t OTG_GCCFG_HCDPDETEN_B_0x0 = 0;
        /** @brief DP voltage detection enabled */
    constexpr std::uint32_t OTG_GCCFG_HCDPDETEN_B_0x1 = 1;

    /** @brief Host CDP port Voltage source enable on DM */
    using OTG_GCCFG_HVDMSRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DM voltage source disabled (value: 0)
     *          - B_0x1: DM Voltage source enabled (value: 1)
     */
        /** @brief DM voltage source disabled */
    constexpr std::uint32_t OTG_GCCFG_HVDMSRCEN_B_0x0 = 0;
        /** @brief DM Voltage source enabled */
    constexpr std::uint32_t OTG_GCCFG_HVDMSRCEN_B_0x1 = 1;

    /** @brief Data Contact Detection enable */
    using OTG_GCCFG_DCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data Contact Detection disabled (value: 0)
     *          - B_0x1: Data Contact Detection enabled (value: 1)
     */
        /** @brief Data Contact Detection disabled */
    constexpr std::uint32_t OTG_GCCFG_DCDEN_B_0x0 = 0;
        /** @brief Data Contact Detection enabled */
    constexpr std::uint32_t OTG_GCCFG_DCDEN_B_0x1 = 1;

    /** @brief Primary detection enable */
    using OTG_GCCFG_PDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Primary detection disabled (value: 0)
     *          - B_0x1: Primary detection enabled (value: 1)
     */
        /** @brief Primary detection disabled */
    constexpr std::uint32_t OTG_GCCFG_PDEN_B_0x0 = 0;
        /** @brief Primary detection enabled */
    constexpr std::uint32_t OTG_GCCFG_PDEN_B_0x1 = 1;

    /** @brief VBUS detection enable */
    using OTG_GCCFG_VBDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VBUS detection disabled (value: 0)
     *          - B_0x1: VBUS detection enabled (value: 1)
     */
        /** @brief VBUS detection disabled */
    constexpr std::uint32_t OTG_GCCFG_VBDEN_B_0x0 = 0;
        /** @brief VBUS detection enabled */
    constexpr std::uint32_t OTG_GCCFG_VBDEN_B_0x1 = 1;

    /** @brief Secondary detection enable */
    using OTG_GCCFG_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secondary detection disabled (value: 0)
     *          - B_0x1: Secondary detection enabled (value: 1)
     */
        /** @brief Secondary detection disabled */
    constexpr std::uint32_t OTG_GCCFG_SDEN_B_0x0 = 0;
        /** @brief Secondary detection enabled */
    constexpr std::uint32_t OTG_GCCFG_SDEN_B_0x1 = 1;

    /** @brief Software override value of the VBUS B-session detection */
    using OTG_GCCFG_VBVALOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: B-session inactive (value: 0)
     *          - B_0x1: B-session active (value: 1)
     */
        /** @brief B-session inactive */
    constexpr std::uint32_t OTG_GCCFG_VBVALOVAL_B_0x0 = 0;
        /** @brief B-session active */
    constexpr std::uint32_t OTG_GCCFG_VBVALOVAL_B_0x1 = 1;

    /** @brief Enables a software override of the VBUS B-session detection. */
    using OTG_GCCFG_VBVALOVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Use hardware (value: 0)
     *          - B_0x1: Use VBVALOVAL to indicate B-session active (value: 1)
     */
        /** @brief Use hardware */
    constexpr std::uint32_t OTG_GCCFG_VBVALOVEN_B_0x0 = 0;
        /** @brief Use VBVALOVAL to indicate B-session active */
    constexpr std::uint32_t OTG_GCCFG_VBVALOVEN_B_0x1 = 1;

    /** @brief Force host mode pull-downs */
    using OTG_GCCFG_FORCEHOSTPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not force host mode pull-downs (value: 0)
     *          - B_0x1: Force host mode pull-downs (value: 1)
     */
        /** @brief Do not force host mode pull-downs */
    constexpr std::uint32_t OTG_GCCFG_FORCEHOSTPD_B_0x0 = 0;
        /** @brief Force host mode pull-downs */
    constexpr std::uint32_t OTG_GCCFG_FORCEHOSTPD_B_0x1 = 1;

    /** @brief OTG core ID register */
    using OTG_CID = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Product ID field */
    using OTG_CID_PRODUCT_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG core LPM configuration register */
    using OTG_GLPMCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM support enable */
    using OTG_GLPMCFG_LPMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPM capability is not enabled (value: 0)
     *          - B_0x1: LPM capability is enabled (value: 1)
     */
        /** @brief LPM capability is not enabled */
    constexpr std::uint32_t OTG_GLPMCFG_LPMEN_B_0x0 = 0;
        /** @brief LPM capability is enabled */
    constexpr std::uint32_t OTG_GLPMCFG_LPMEN_B_0x1 = 1;

    /** @brief LPM token acknowledge enable */
    using OTG_GLPMCFG_LPMACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ACK (value: 1)
     *          - B_0x0: NYET (value: 0)
     */
        /** @brief ACK */
    constexpr std::uint32_t OTG_GLPMCFG_LPMACK_B_0x1 = 1;
        /** @brief NYET */
    constexpr std::uint32_t OTG_GLPMCFG_LPMACK_B_0x0 = 0;

    /** @brief Best effort service latency */
    using OTG_GLPMCFG_BESL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 125 (value: 0)
     *          - B_0x1: 150 (value: 1)
     *          - B_0x2: 200 (value: 2)
     *          - B_0x3: 300 (value: 3)
     *          - B_0x4: 400 (value: 4)
     *          - B_0x5: 500 (value: 5)
     *          - B_0x6: 1000 (value: 6)
     *          - B_0x7: 2000 (value: 7)
     *          - B_0x8: 3000 (value: 8)
     *          - B_0x9: 4000 (value: 9)
     *          - B_0xA: 5000 (value: 10)
     *          - B_0xB: 6000 (value: 11)
     *          - B_0xC: 7000 (value: 12)
     *          - B_0xD: 8000 (value: 13)
     *          - B_0xE: 9000 (value: 14)
     *          - B_0xF: 10000 (value: 15)
     */
        /** @brief 125 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x0 = 0;
        /** @brief 150 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x1 = 1;
        /** @brief 200 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x2 = 2;
        /** @brief 300 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x3 = 3;
        /** @brief 400 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x4 = 4;
        /** @brief 500 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x5 = 5;
        /** @brief 1000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x6 = 6;
        /** @brief 2000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x7 = 7;
        /** @brief 3000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x8 = 8;
        /** @brief 4000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x9 = 9;
        /** @brief 5000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xA = 10;
        /** @brief 6000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xB = 11;
        /** @brief 7000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xC = 12;
        /** @brief 8000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xD = 13;
        /** @brief 9000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xE = 14;
        /** @brief 10000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xF = 15;

    /** @brief bRemoteWake value */
    using OTG_GLPMCFG_REMWAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L1 Shallow Sleep enable */
    using OTG_GLPMCFG_L1SSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BESL threshold */
    using OTG_GLPMCFG_BESLTHRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 75 (value: 0)
     *          - B_0x1: 100 (value: 1)
     *          - B_0x2: 150 (value: 2)
     *          - B_0x3: 250 (value: 3)
     *          - B_0x4: 350 (value: 4)
     *          - B_0x5: 450 (value: 5)
     *          - B_0x6: 950 (value: 6)
     */
        /** @brief 75 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x0 = 0;
        /** @brief 100 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x1 = 1;
        /** @brief 150 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x2 = 2;
        /** @brief 250 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x3 = 3;
        /** @brief 350 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x4 = 4;
        /** @brief 450 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x5 = 5;
        /** @brief 950 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x6 = 6;

    /** @brief L1 deep sleep enable */
    using OTG_GLPMCFG_L1DSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM response */
    using OTG_GLPMCFG_LPMRSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: ACK (value: 3)
     *          - B_0x2: NYET (value: 2)
     *          - B_0x1: STALL (value: 1)
     *          - B_0x0: ERROR (No handshake response) (value: 0)
     */
        /** @brief ACK */
    constexpr std::uint32_t OTG_GLPMCFG_LPMRSP_B_0x3 = 3;
        /** @brief NYET */
    constexpr std::uint32_t OTG_GLPMCFG_LPMRSP_B_0x2 = 2;
        /** @brief STALL */
    constexpr std::uint32_t OTG_GLPMCFG_LPMRSP_B_0x1 = 1;
        /** @brief ERROR (No handshake response) */
    constexpr std::uint32_t OTG_GLPMCFG_LPMRSP_B_0x0 = 0;

    /** @brief Port sleep status */
    using OTG_GLPMCFG_SLPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Core not in L1 (value: 0)
     *          - B_0x1: Core in L1 (value: 1)
     */
        /** @brief Core not in L1 */
    constexpr std::uint32_t OTG_GLPMCFG_SLPSTS_B_0x0 = 0;
        /** @brief Core in L1 */
    constexpr std::uint32_t OTG_GLPMCFG_SLPSTS_B_0x1 = 1;

    /** @brief Sleep state resume OK */
    using OTG_GLPMCFG_L1RSMOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The application or host can start resume from Sleep state (value: 1)
     *          - B_0x0: The application or host cannot start resume from Sleep state (value: 0)
     */
        /** @brief The application or host can start resume from Sleep state */
    constexpr std::uint32_t OTG_GLPMCFG_L1RSMOK_B_0x1 = 1;
        /** @brief The application or host cannot start resume from Sleep state */
    constexpr std::uint32_t OTG_GLPMCFG_L1RSMOK_B_0x0 = 0;

    /** @brief LPM Channel Index */
    using OTG_GLPMCFG_LPMCHIDX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM retry count */
    using OTG_GLPMCFG_LPMRCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Send LPM transaction */
    using OTG_GLPMCFG_SNDLPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM retry count status */
    using OTG_GLPMCFG_LPMRCNTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable best effort service latency */
    using OTG_GLPMCFG_ENBESL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core works as described in the following document: (value: 0)
     *          - B_0x1: The core works as described in the LPM Errata: (value: 1)
     */
        /** @brief The core works as described in the following document: */
    constexpr std::uint32_t OTG_GLPMCFG_ENBESL_B_0x0 = 0;
        /** @brief The core works as described in the LPM Errata: */
    constexpr std::uint32_t OTG_GLPMCFG_ENBESL_B_0x1 = 1;

    /** @brief OTG host periodic transmit FIFO size register */
    using OTG_HPTXFSIZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host periodic Tx FIFO start address */
    using OTG_HPTXFSIZ_PTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host periodic Tx FIFO depth */
    using OTG_HPTXFSIZ_PTXFSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 1 size register */
    using OTG_DIEPTXF1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_DIEPTXF1_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth */
    using OTG_DIEPTXF1_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 2 size register */
    using OTG_DIEPTXF2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_DIEPTXF2_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth */
    using OTG_DIEPTXF2_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 3 size register */
    using OTG_DIEPTXF3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_DIEPTXF3_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth */
    using OTG_DIEPTXF3_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 4 size register */
    using OTG_DIEPTXF4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_DIEPTXF4_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth */
    using OTG_DIEPTXF4_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 5 size register */
    using OTG_DIEPTXF5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_DIEPTXF5_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth */
    using OTG_DIEPTXF5_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 6 size register */
    using OTG_DIEPTXF6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_DIEPTXF6_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth */
    using OTG_DIEPTXF6_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 7 size register */
    using OTG_DIEPTXF7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_DIEPTXF7_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth */
    using OTG_DIEPTXF7_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 8 size register */
    using OTG_DIEPTXF8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_DIEPTXF8_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth */
    using OTG_DIEPTXF8_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host configuration register */
    using OTG_HCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FS/LS PHY clock select */
    using OTG_HCFG_FSLSPCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1_FS_HOST_MODE: PHY clock is running at 48 MHz (value: 1)
     *          - B_0x2_LS_HOST_MODE: Select 6 MHz PHY clock frequency (value: 2)
     */
        /** @brief PHY clock is running at 48 MHz */
    constexpr std::uint32_t OTG_HCFG_FSLSPCS_B_0x1_FS_HOST_MODE = 1;
        /** @brief Select 6 MHz PHY clock frequency */
    constexpr std::uint32_t OTG_HCFG_FSLSPCS_B_0x2_LS_HOST_MODE = 2;

    /** @brief FS- and LS-only support */
    using OTG_HCFG_FSLSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host frame interval register */
    using OTG_HFIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame interval */
    using OTG_HFIR_FRIVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reload control */
    using OTG_HFIR_RLDCTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The HFIR cannot be reloaded dynamically (value: 0)
     *          - B_0x1: The HFIR can be dynamically reloaded during run time. (value: 1)
     */
        /** @brief The HFIR cannot be reloaded dynamically */
    constexpr std::uint32_t OTG_HFIR_RLDCTRL_B_0x0 = 0;
        /** @brief The HFIR can be dynamically reloaded during run time. */
    constexpr std::uint32_t OTG_HFIR_RLDCTRL_B_0x1 = 1;

    /** @brief OTG host frame number/frame time remaining register */
    using OTG_HFNUM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x408, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using OTG_HFNUM_FRNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame time remaining */
    using OTG_HFNUM_FTREM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_Host periodic transmit FIFO/queue status register */
    using OTG_HPTXSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic transmit data FIFO space available */
    using OTG_HPTXSTS_PTXFSAVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Periodic Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     */
        /** @brief Periodic Tx FIFO is full */
    constexpr std::uint32_t OTG_HPTXSTS_PTXFSAVL_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_HPTXSTS_PTXFSAVL_B_0x1 = 1;

    /** @brief Periodic transmit request queue space available */
    using OTG_HPTXSTS_PTXQSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Periodic transmit request queue is full (value: 0)
     *          - B_0x1: 1 location available (value: 1)
     */
        /** @brief Periodic transmit request queue is full */
    constexpr std::uint32_t OTG_HPTXSTS_PTXQSAV_B_0x0 = 0;
        /** @brief 1 location available */
    constexpr std::uint32_t OTG_HPTXSTS_PTXQSAV_B_0x1 = 1;

    /** @brief Top of the periodic transmit request queue */
    using OTG_HPTXSTS_PTXQTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host all channels interrupt register */
    using OTG_HAINT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel interrupts */
    using OTG_HAINT_HAINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host all channels interrupt mask register */
    using OTG_HAINTMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel interrupt mask */
    using OTG_HAINTMSK_HAINTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HAINTMSK_HAINTM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HAINTMSK_HAINTM_B_0x1 = 1;

    /** @brief OTG host port control and status register */
    using OTG_HPRT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x440, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port connect status */
    using OTG_HPRT_PCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No device is attached to the port (value: 0)
     *          - B_0x1: A device is attached to the port (value: 1)
     */
        /** @brief No device is attached to the port */
    constexpr std::uint32_t OTG_HPRT_PCSTS_B_0x0 = 0;
        /** @brief A device is attached to the port */
    constexpr std::uint32_t OTG_HPRT_PCSTS_B_0x1 = 1;

    /** @brief Port connect detected */
    using OTG_HPRT_PCDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port enable */
    using OTG_HPRT_PENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port disabled (value: 0)
     *          - B_0x1: Port enabled (value: 1)
     */
        /** @brief Port disabled */
    constexpr std::uint32_t OTG_HPRT_PENA_B_0x0 = 0;
        /** @brief Port enabled */
    constexpr std::uint32_t OTG_HPRT_PENA_B_0x1 = 1;

    /** @brief Port enable/disable change */
    using OTG_HPRT_PENCHNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port overcurrent active */
    using OTG_HPRT_POCA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overcurrent condition (value: 0)
     *          - B_0x1: Overcurrent condition (value: 1)
     */
        /** @brief No overcurrent condition */
    constexpr std::uint32_t OTG_HPRT_POCA_B_0x0 = 0;
        /** @brief Overcurrent condition */
    constexpr std::uint32_t OTG_HPRT_POCA_B_0x1 = 1;

    /** @brief Port overcurrent change */
    using OTG_HPRT_POCCHNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port resume */
    using OTG_HPRT_PRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No resume driven (value: 0)
     *          - B_0x1: Resume driven (value: 1)
     */
        /** @brief No resume driven */
    constexpr std::uint32_t OTG_HPRT_PRES_B_0x0 = 0;
        /** @brief Resume driven */
    constexpr std::uint32_t OTG_HPRT_PRES_B_0x1 = 1;

    /** @brief Port suspend */
    using OTG_HPRT_PSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port not in suspend mode (value: 0)
     *          - B_0x1: Port in suspend mode (value: 1)
     */
        /** @brief Port not in suspend mode */
    constexpr std::uint32_t OTG_HPRT_PSUSP_B_0x0 = 0;
        /** @brief Port in suspend mode */
    constexpr std::uint32_t OTG_HPRT_PSUSP_B_0x1 = 1;

    /** @brief Port reset */
    using OTG_HPRT_PRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port not in reset (value: 0)
     *          - B_0x1: Port in reset (value: 1)
     */
        /** @brief Port not in reset */
    constexpr std::uint32_t OTG_HPRT_PRST_B_0x0 = 0;
        /** @brief Port in reset */
    constexpr std::uint32_t OTG_HPRT_PRST_B_0x1 = 1;

    /** @brief Port line status */
    using OTG_HPRT_PLSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port power */
    using OTG_HPRT_PPWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power off (value: 0)
     *          - B_0x1: Power on (value: 1)
     */
        /** @brief Power off */
    constexpr std::uint32_t OTG_HPRT_PPWR_B_0x0 = 0;
        /** @brief Power on */
    constexpr std::uint32_t OTG_HPRT_PPWR_B_0x1 = 1;

    /** @brief Port test control */
    using OTG_HPRT_PTCTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Test mode disabled (value: 0)
     *          - B_0x1: Test_J mode (value: 1)
     *          - B_0x2: Test_K mode (value: 2)
     *          - B_0x3: Test_SE0_NAK mode (value: 3)
     *          - B_0x4: Test_Packet mode (value: 4)
     *          - B_0x5: Test_Force_Enable (value: 5)
     */
        /** @brief Test mode disabled */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x0 = 0;
        /** @brief Test_J mode */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x1 = 1;
        /** @brief Test_K mode */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x2 = 2;
        /** @brief Test_SE0_NAK mode */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x3 = 3;
        /** @brief Test_Packet mode */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x4 = 4;
        /** @brief Test_Force_Enable */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x5 = 5;

    /** @brief Port speed */
    using OTG_HPRT_PSPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Full speed (value: 1)
     *          - B_0x2: Low speed (value: 2)
     *          - B_0x0: High speed (value: 0)
     */
        /** @brief Full speed */
    constexpr std::uint32_t OTG_HPRT_PSPD_B_0x1 = 1;
        /** @brief Low speed */
    constexpr std::uint32_t OTG_HPRT_PSPD_B_0x2 = 2;
        /** @brief High speed */
    constexpr std::uint32_t OTG_HPRT_PSPD_B_0x0 = 0;

    /** @brief OTG host channel 0 characteristics register */
    using OTG_HCCHAR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x500, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR0_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR0_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR0_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR0_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR0_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR0_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR0_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR0_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR0_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR0_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR0_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR0_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR0_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR0_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR0_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR0_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR0_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR0_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR0_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR0_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR0_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR0_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR0_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR0_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 0 split control register */
    using OTG_HCSPLT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x504, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT0_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT0_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT0_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT0_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT0_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT0_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT0_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT0_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT0_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 0 interrupt register */
    using OTG_HCINT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x508, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT0_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT0_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT0_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT0_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT0_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT0_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT0_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT0_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT0_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT0_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT0_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 0 interrupt mask register */
    using OTG_HCINTMSK0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK0_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK0_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK0_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK0_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK0_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK0_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK0_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK0_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK0_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK0_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK0_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 0 transfer size register */
    using OTG_HCTSIZ0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x510, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ0_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ0_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ0_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ0_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ0_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ0_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ0_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ0_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 0 DMA address register */
    using OTG_HCDMA0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x514, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA0_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 1 characteristics register */
    using OTG_HCCHAR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x520, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR1_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR1_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR1_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR1_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR1_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR1_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR1_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR1_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR1_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR1_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR1_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR1_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR1_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR1_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR1_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR1_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR1_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR1_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR1_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 1 split control register */
    using OTG_HCSPLT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x524, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT1_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT1_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT1_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT1_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT1_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT1_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT1_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT1_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT1_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 1 interrupt register */
    using OTG_HCINT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x528, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT1_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT1_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT1_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT1_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT1_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT1_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT1_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT1_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT1_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT1_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 1 interrupt mask register */
    using OTG_HCINTMSK1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x52C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK1_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK1_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK1_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK1_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK1_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK1_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK1_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK1_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK1_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK1_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK1_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 1 transfer size register */
    using OTG_HCTSIZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x530, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ1_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ1_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ1_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ1_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ1_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ1_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ1_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ1_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 1 DMA address register */
    using OTG_HCDMA1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x534, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA1_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 2 characteristics register */
    using OTG_HCCHAR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x540, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR2_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR2_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR2_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR2_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR2_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR2_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR2_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR2_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR2_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR2_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR2_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR2_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR2_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR2_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR2_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR2_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR2_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR2_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR2_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR2_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR2_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR2_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR2_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR2_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 2 split control register */
    using OTG_HCSPLT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x544, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT2_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT2_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT2_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT2_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT2_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT2_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT2_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT2_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT2_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 2 interrupt register */
    using OTG_HCINT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x548, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT2_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT2_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT2_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT2_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT2_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT2_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT2_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT2_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT2_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT2_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT2_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 2 interrupt mask register */
    using OTG_HCINTMSK2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK2_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK2_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK2_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK2_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK2_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK2_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK2_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK2_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK2_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK2_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK2_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 2 transfer size register */
    using OTG_HCTSIZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x550, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ2_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ2_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ2_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ2_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ2_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ2_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ2_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ2_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 2 DMA address register */
    using OTG_HCDMA2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x554, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA2_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 3 characteristics register */
    using OTG_HCCHAR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x560, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR3_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR3_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR3_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR3_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR3_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR3_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR3_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR3_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR3_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR3_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR3_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR3_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR3_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR3_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR3_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR3_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR3_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR3_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR3_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR3_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR3_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR3_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR3_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR3_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 3 split control register */
    using OTG_HCSPLT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x564, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT3_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT3_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT3_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT3_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT3_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT3_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT3_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT3_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT3_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 3 interrupt register */
    using OTG_HCINT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x568, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT3_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT3_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT3_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT3_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT3_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT3_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT3_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT3_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT3_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT3_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT3_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 3 interrupt mask register */
    using OTG_HCINTMSK3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x56C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK3_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK3_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK3_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK3_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK3_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK3_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK3_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK3_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK3_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK3_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK3_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 3 transfer size register */
    using OTG_HCTSIZ3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x570, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ3_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ3_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ3_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ3_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ3_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ3_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ3_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ3_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 3 DMA address register */
    using OTG_HCDMA3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x574, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA3_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 4 characteristics register */
    using OTG_HCCHAR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x580, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR4_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR4_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR4_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR4_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR4_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR4_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR4_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR4_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR4_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR4_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR4_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR4_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR4_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR4_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR4_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR4_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR4_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR4_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR4_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR4_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR4_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR4_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR4_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR4_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 4 split control register */
    using OTG_HCSPLT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x584, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT4_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT4_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT4_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT4_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT4_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT4_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT4_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT4_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT4_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 4 interrupt register */
    using OTG_HCINT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x588, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT4_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT4_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT4_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT4_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT4_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT4_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT4_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT4_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT4_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT4_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT4_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 4 interrupt mask register */
    using OTG_HCINTMSK4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK4_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK4_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK4_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK4_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK4_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK4_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK4_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK4_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK4_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK4_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK4_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 4 transfer size register */
    using OTG_HCTSIZ4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x590, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ4_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ4_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ4_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ4_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ4_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ4_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ4_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ4_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 4 DMA address register */
    using OTG_HCDMA4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x594, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA4_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 5 characteristics register */
    using OTG_HCCHAR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR5_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR5_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR5_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR5_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR5_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR5_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR5_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR5_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR5_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR5_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR5_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR5_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR5_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR5_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR5_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR5_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR5_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR5_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR5_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR5_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR5_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR5_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR5_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR5_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 5 split control register */
    using OTG_HCSPLT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT5_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT5_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT5_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT5_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT5_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT5_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT5_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT5_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT5_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 5 interrupt register */
    using OTG_HCINT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT5_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT5_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT5_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT5_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT5_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT5_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT5_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT5_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT5_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT5_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT5_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 5 interrupt mask register */
    using OTG_HCINTMSK5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK5_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK5_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK5_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK5_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK5_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK5_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK5_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK5_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK5_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK5_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK5_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 5 transfer size register */
    using OTG_HCTSIZ5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ5_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ5_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ5_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ5_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ5_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ5_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ5_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ5_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 5 DMA address register */
    using OTG_HCDMA5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA5_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 6 characteristics register */
    using OTG_HCCHAR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR6_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR6_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR6_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR6_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR6_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR6_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR6_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR6_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR6_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR6_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR6_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR6_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR6_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR6_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR6_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR6_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR6_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR6_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR6_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR6_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR6_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR6_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR6_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR6_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 6 split control register */
    using OTG_HCSPLT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT6_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT6_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT6_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT6_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT6_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT6_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT6_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT6_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT6_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 6 interrupt register */
    using OTG_HCINT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT6_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT6_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT6_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT6_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT6_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT6_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT6_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT6_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT6_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT6_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT6_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 6 interrupt mask register */
    using OTG_HCINTMSK6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK6_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK6_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK6_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK6_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK6_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK6_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK6_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK6_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK6_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK6_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK6_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 6 transfer size register */
    using OTG_HCTSIZ6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ6_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ6_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ6_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ6_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ6_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ6_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ6_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ6_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 6 DMA address register */
    using OTG_HCDMA6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA6_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 7 characteristics register */
    using OTG_HCCHAR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR7_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR7_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR7_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR7_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR7_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR7_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR7_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR7_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR7_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR7_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR7_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR7_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR7_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR7_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR7_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR7_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR7_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR7_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR7_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR7_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR7_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR7_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR7_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR7_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 7 split control register */
    using OTG_HCSPLT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT7_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT7_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT7_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT7_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT7_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT7_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT7_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT7_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT7_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 7 interrupt register */
    using OTG_HCINT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT7_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT7_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT7_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT7_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT7_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT7_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT7_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT7_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT7_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT7_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT7_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 7 interrupt mask register */
    using OTG_HCINTMSK7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK7_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK7_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK7_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK7_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK7_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK7_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK7_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK7_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK7_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK7_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK7_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 7 transfer size register */
    using OTG_HCTSIZ7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ7_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ7_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ7_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ7_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ7_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ7_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ7_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ7_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 7 DMA address register */
    using OTG_HCDMA7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA7_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 8 characteristics register */
    using OTG_HCCHAR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x600, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR8_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR8_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR8_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR8_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR8_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR8_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR8_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR8_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR8_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR8_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR8_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR8_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR8_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR8_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR8_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR8_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR8_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR8_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR8_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR8_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR8_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR8_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR8_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR8_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 8 split control register */
    using OTG_HCSPLT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x604, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT8_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT8_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT8_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT8_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT8_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT8_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT8_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT8_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT8_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 8 interrupt register */
    using OTG_HCINT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x608, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT8_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT8_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT8_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT8_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT8_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT8_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT8_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT8_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT8_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT8_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT8_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 8 interrupt mask register */
    using OTG_HCINTMSK8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK8_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK8_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK8_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK8_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK8_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK8_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK8_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK8_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK8_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK8_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK8_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 8 transfer size register */
    using OTG_HCTSIZ8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x610, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ8_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ8_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ8_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ8_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ8_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ8_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ8_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ8_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 8 DMA address register */
    using OTG_HCDMA8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x614, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA8_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 9 characteristics register */
    using OTG_HCCHAR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x620, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR9_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR9_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR9_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR9_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR9_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR9_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR9_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR9_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR9_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR9_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR9_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR9_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR9_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR9_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR9_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR9_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR9_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR9_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR9_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR9_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR9_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR9_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR9_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR9_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 9 split control register */
    using OTG_HCSPLT9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x624, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT9_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT9_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT9_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT9_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT9_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT9_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT9_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT9_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT9_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 9 interrupt register */
    using OTG_HCINT9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x628, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT9_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT9_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT9_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT9_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT9_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT9_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT9_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT9_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT9_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT9_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT9_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 9 interrupt mask register */
    using OTG_HCINTMSK9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x62C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK9_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK9_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK9_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK9_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK9_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK9_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK9_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK9_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK9_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK9_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK9_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 9 transfer size register */
    using OTG_HCTSIZ9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x630, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ9_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ9_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ9_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ9_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ9_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ9_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ9_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ9_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 9 DMA address register */
    using OTG_HCDMA9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x634, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA9_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 10 characteristics register */
    using OTG_HCCHAR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x640, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR10_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR10_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR10_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR10_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR10_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR10_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR10_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR10_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR10_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR10_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR10_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR10_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR10_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR10_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR10_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR10_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR10_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR10_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR10_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR10_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR10_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR10_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR10_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR10_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 10 split control register */
    using OTG_HCSPLT10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x644, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT10_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT10_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT10_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT10_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT10_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT10_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT10_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT10_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT10_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 10 interrupt register */
    using OTG_HCINT10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x648, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT10_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT10_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT10_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT10_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT10_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT10_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT10_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT10_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT10_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT10_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT10_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 10 interrupt mask register */
    using OTG_HCINTMSK10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK10_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK10_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK10_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK10_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK10_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK10_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK10_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK10_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK10_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK10_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK10_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 10 transfer size register */
    using OTG_HCTSIZ10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x650, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ10_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ10_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ10_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ10_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ10_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ10_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ10_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ10_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 10 DMA address register */
    using OTG_HCDMA10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x654, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA10_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 11 characteristics register */
    using OTG_HCCHAR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x660, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR11_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR11_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR11_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR11_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR11_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR11_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR11_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR11_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR11_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR11_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR11_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR11_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR11_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR11_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR11_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR11_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR11_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR11_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR11_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR11_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR11_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR11_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR11_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR11_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 11 split control register */
    using OTG_HCSPLT11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x664, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT11_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT11_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT11_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT11_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT11_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT11_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT11_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT11_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT11_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 11 interrupt register */
    using OTG_HCINT11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x668, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT11_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT11_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT11_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT11_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT11_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT11_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT11_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT11_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT11_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT11_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT11_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 11 interrupt mask register */
    using OTG_HCINTMSK11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x66C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK11_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK11_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK11_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK11_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK11_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK11_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK11_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK11_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK11_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK11_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK11_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 11 transfer size register */
    using OTG_HCTSIZ11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x670, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ11_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ11_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ11_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ11_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ11_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ11_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ11_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ11_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 11 DMA address register */
    using OTG_HCDMA11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x674, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA11_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 12 characteristics register */
    using OTG_HCCHAR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x680, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR12_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR12_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR12_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR12_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR12_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR12_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR12_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR12_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR12_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR12_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR12_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR12_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR12_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR12_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR12_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR12_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR12_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR12_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR12_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR12_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR12_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR12_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR12_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR12_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 12 split control register */
    using OTG_HCSPLT12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x684, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT12_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT12_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT12_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT12_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT12_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT12_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT12_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT12_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT12_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 12 interrupt register */
    using OTG_HCINT12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x688, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT12_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT12_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT12_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT12_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT12_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT12_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT12_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT12_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT12_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT12_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT12_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 12 interrupt mask register */
    using OTG_HCINTMSK12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK12_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK12_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK12_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK12_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK12_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK12_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK12_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK12_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK12_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK12_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK12_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 12 transfer size register */
    using OTG_HCTSIZ12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x690, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ12_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ12_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ12_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ12_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ12_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ12_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ12_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ12_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 12 DMA address register */
    using OTG_HCDMA12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x694, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA12_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 13 characteristics register */
    using OTG_HCCHAR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR13_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR13_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR13_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR13_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR13_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR13_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR13_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR13_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR13_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR13_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR13_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR13_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR13_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR13_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR13_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR13_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR13_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR13_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR13_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR13_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR13_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR13_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR13_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR13_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 13 split control register */
    using OTG_HCSPLT13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT13_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT13_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT13_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT13_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT13_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT13_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT13_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT13_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT13_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 13 interrupt register */
    using OTG_HCINT13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT13_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT13_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT13_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT13_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT13_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT13_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT13_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT13_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT13_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT13_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT13_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 13 interrupt mask register */
    using OTG_HCINTMSK13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK13_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK13_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK13_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK13_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK13_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK13_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK13_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK13_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK13_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK13_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK13_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 13 transfer size register */
    using OTG_HCTSIZ13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ13_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ13_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ13_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ13_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ13_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ13_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ13_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ13_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 13 DMA address register */
    using OTG_HCDMA13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA13_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 14 characteristics register */
    using OTG_HCCHAR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR14_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR14_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR14_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR14_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR14_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR14_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR14_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR14_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR14_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR14_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR14_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR14_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR14_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR14_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR14_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR14_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR14_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR14_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR14_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR14_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR14_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR14_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR14_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR14_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 14 split control register */
    using OTG_HCSPLT14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT14_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT14_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT14_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT14_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT14_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT14_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT14_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT14_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT14_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 14 interrupt register */
    using OTG_HCINT14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT14_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT14_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT14_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT14_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT14_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT14_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT14_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT14_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT14_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT14_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT14_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 14 interrupt mask register */
    using OTG_HCINTMSK14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK14_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK14_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK14_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK14_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK14_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK14_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK14_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK14_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK14_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK14_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK14_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 14 transfer size register */
    using OTG_HCTSIZ14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ14_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ14_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ14_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ14_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ14_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ14_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ14_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ14_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 14 DMA address register */
    using OTG_HCDMA14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA14_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 15 characteristics register */
    using OTG_HCCHAR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HCCHAR15_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HCCHAR15_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HCCHAR15_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR15_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR15_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device */
    using OTG_HCCHAR15_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HCCHAR15_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR15_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR15_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR15_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR15_EPTYP_B_0x3 = 3;

    /** @brief Multicount */
    using OTG_HCCHAR15_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. */
    constexpr std::uint32_t OTG_HCCHAR15_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR15_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR15_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR15_MCNT_B_0x3 = 3;

    /** @brief Device address */
    using OTG_HCCHAR15_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HCCHAR15_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR15_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR15_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable */
    using OTG_HCCHAR15_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HCCHAR15_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR15_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR15_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 15 split control register */
    using OTG_HCSPLT15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HCSPLT15_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HCSPLT15_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position */
    using OTG_HCSPLT15_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. (value: 3)
     *          - B_0x2: Begin. (value: 2)
     *          - B_0x0: Mid. (value: 0)
     *          - B_0x1: End. (value: 1)
     */
        /** @brief All. */
    constexpr std::uint32_t OTG_HCSPLT15_XACTPOS_B_0x3 = 3;
        /** @brief Begin. */
    constexpr std::uint32_t OTG_HCSPLT15_XACTPOS_B_0x2 = 2;
        /** @brief Mid. */
    constexpr std::uint32_t OTG_HCSPLT15_XACTPOS_B_0x0 = 0;
        /** @brief End. */
    constexpr std::uint32_t OTG_HCSPLT15_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split */
    using OTG_HCSPLT15_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HCSPLT15_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 15 interrupt register */
    using OTG_HCINT15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. */
    using OTG_HCINT15_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HCINT15_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HCINT15_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT15_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT15_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT15_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT15_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. */
    using OTG_HCINT15_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT15_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT15_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT15_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 15 interrupt mask register */
    using OTG_HCINTMSK15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK15_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK15_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK15_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK15_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK15_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK15_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK15_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK15_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK15_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK15_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK15_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 15 transfer size register */
    using OTG_HCTSIZ15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HCTSIZ15_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HCTSIZ15_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HCTSIZ15_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ15_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ15_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ15_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ15_DPID_B_0x3 = 3;

    /** @brief Do Ping */
    using OTG_HCTSIZ15_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 15 DMA address register */
    using OTG_HCDMA15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HCDMA15_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device configuration register */
    using OTG_DCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x800, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device speed */
    using OTG_DCFG_DSPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed (value: 0)
     *          - B_0x1: Full speed (value: 1)
     */
        /** @brief High speed */
    constexpr std::uint32_t OTG_DCFG_DSPD_B_0x0 = 0;
        /** @brief Full speed */
    constexpr std::uint32_t OTG_DCFG_DSPD_B_0x1 = 1;

    /** @brief Non-zero-length status OUT handshake */
    using OTG_DCFG_NZLSOHSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Send a STALL handshake on a nonzero-length status OUT transaction and do not send the received OUT packet to the application. (value: 1)
     *          - B_0x0: Send the received OUT packet to the application (zero-length or nonzero-length) and send a handshake based on the NAK and STALL bits for the endpoint in the device endpoint control register. (value: 0)
     */
        /** @brief Send a STALL handshake on a nonzero-length status OUT transaction and do not send the received OUT packet to the application. */
    constexpr std::uint32_t OTG_DCFG_NZLSOHSK_B_0x1 = 1;
        /** @brief Send the received OUT packet to the application (zero-length or nonzero-length) and send a handshake based on the NAK and STALL bits for the endpoint in the device endpoint control register. */
    constexpr std::uint32_t OTG_DCFG_NZLSOHSK_B_0x0 = 0;

    /** @brief Device address */
    using OTG_DCFG_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic frame interval */
    using OTG_DCFG_PFIVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 80% of the frame interval (value: 0)
     *          - B_0x1: 85% of the frame interval (value: 1)
     *          - B_0x2: 90% of the frame interval (value: 2)
     *          - B_0x3: 95% of the frame interval (value: 3)
     */
        /** @brief 80% of the frame interval */
    constexpr std::uint32_t OTG_DCFG_PFIVL_B_0x0 = 0;
        /** @brief 85% of the frame interval */
    constexpr std::uint32_t OTG_DCFG_PFIVL_B_0x1 = 1;
        /** @brief 90% of the frame interval */
    constexpr std::uint32_t OTG_DCFG_PFIVL_B_0x2 = 2;
        /** @brief 95% of the frame interval */
    constexpr std::uint32_t OTG_DCFG_PFIVL_B_0x3 = 3;

    /** @brief Erratic error interrupt mask */
    using OTG_DCFG_ERRATIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Mask early suspend interrupt on erratic error (value: 1)
     *          - B_0x0: Early suspend interrupt is generated on erratic error (value: 0)
     */
        /** @brief Mask early suspend interrupt on erratic error */
    constexpr std::uint32_t OTG_DCFG_ERRATIM_B_0x1 = 1;
        /** @brief Early suspend interrupt is generated on erratic error */
    constexpr std::uint32_t OTG_DCFG_ERRATIM_B_0x0 = 0;

    /** @brief Periodic schedule interval */
    using OTG_DCFG_PERSCHIVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 25% of (micro)frame (value: 0)
     *          - B_0x1: 50% of (micro)frame (value: 1)
     *          - B_0x2: 75% of (micro)frame (value: 2)
     */
        /** @brief 25% of (micro)frame */
    constexpr std::uint32_t OTG_DCFG_PERSCHIVL_B_0x0 = 0;
        /** @brief 50% of (micro)frame */
    constexpr std::uint32_t OTG_DCFG_PERSCHIVL_B_0x1 = 1;
        /** @brief 75% of (micro)frame */
    constexpr std::uint32_t OTG_DCFG_PERSCHIVL_B_0x2 = 2;

    /** @brief OTG device control register */
    using OTG_DCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x804, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wake-up signaling */
    using OTG_DCTL_RWUSIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Soft disconnect */
    using OTG_DCTL_SDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: The core generates a device disconnect event to the USB host. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t OTG_DCTL_SDIS_B_0x0 = 0;
        /** @brief The core generates a device disconnect event to the USB host. */
    constexpr std::uint32_t OTG_DCTL_SDIS_B_0x1 = 1;

    /** @brief Global IN NAK status */
    using OTG_DCTL_GINSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A handshake is sent out based on the data availability in the transmit FIFO. (value: 0)
     *          - B_0x1: A NAK handshake is sent out on all non-periodic IN endpoints, irrespective of the data availability in the transmit FIFO. (value: 1)
     */
        /** @brief A handshake is sent out based on the data availability in the transmit FIFO. */
    constexpr std::uint32_t OTG_DCTL_GINSTS_B_0x0 = 0;
        /** @brief A NAK handshake is sent out on all non-periodic IN endpoints, irrespective of the data availability in the transmit FIFO. */
    constexpr std::uint32_t OTG_DCTL_GINSTS_B_0x1 = 1;

    /** @brief Global OUT NAK status */
    using OTG_DCTL_GONSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A handshake is sent based on the FIFO status and the NAK and STALL bit settings. (value: 0)
     *          - B_0x1: No data is written to the Rx FIFO, irrespective of space availability. (value: 1)
     */
        /** @brief A handshake is sent based on the FIFO status and the NAK and STALL bit settings. */
    constexpr std::uint32_t OTG_DCTL_GONSTS_B_0x0 = 0;
        /** @brief No data is written to the Rx FIFO, irrespective of space availability. */
    constexpr std::uint32_t OTG_DCTL_GONSTS_B_0x1 = 1;

    /** @brief Test control */
    using OTG_DCTL_TCTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Test mode disabled (value: 0)
     *          - B_0x1: Test_J mode (value: 1)
     *          - B_0x2: Test_K mode (value: 2)
     *          - B_0x3: Test_SE0_NAK mode (value: 3)
     *          - B_0x4: Test_Packet mode (value: 4)
     *          - B_0x5: Test_Force_Enable (value: 5)
     */
        /** @brief Test mode disabled */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x0 = 0;
        /** @brief Test_J mode */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x1 = 1;
        /** @brief Test_K mode */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x2 = 2;
        /** @brief Test_SE0_NAK mode */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x3 = 3;
        /** @brief Test_Packet mode */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x4 = 4;
        /** @brief Test_Force_Enable */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x5 = 5;

    /** @brief Set global IN NAK */
    using OTG_DCTL_SGINAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear global IN NAK */
    using OTG_DCTL_CGINAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set global OUT NAK */
    using OTG_DCTL_SGONAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear global OUT NAK */
    using OTG_DCTL_CGONAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power-on programming done */
    using OTG_DCTL_POPRGDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Deep sleep BESL reject */
    using OTG_DCTL_DSBESLRJCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device status register */
    using OTG_DSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x808, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend status */
    using OTG_DSTS_SUSPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumerated speed */
    using OTG_DSTS_ENUMSPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High Speed (value: 0)
     *          - B_0x1: Full Speed (value: 1)
     */
        /** @brief High Speed */
    constexpr std::uint32_t OTG_DSTS_ENUMSPD_B_0x0 = 0;
        /** @brief Full Speed */
    constexpr std::uint32_t OTG_DSTS_ENUMSPD_B_0x1 = 1;

    /** @brief Erratic error */
    using OTG_DSTS_EERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number of the received SOF */
    using OTG_DSTS_FNSOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device line status */
    using OTG_DSTS_DEVLNSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint common interrupt mask register */
    using OTG_DIEPMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x810, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt mask */
    using OTG_DIEPMSK_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_XFRCM_B_0x1 = 1;

    /** @brief Endpoint disabled interrupt mask */
    using OTG_DIEPMSK_EPDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_EPDM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_EPDM_B_0x1 = 1;

    /** @brief AHB error mask */
    using OTG_DIEPMSK_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_AHBERRM_B_0x1 = 1;

    /** @brief Timeout condition mask (Non-isochronous endpoints) */
    using OTG_DIEPMSK_TOM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_TOM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_TOM_B_0x1 = 1;

    /** @brief IN token received when Tx FIFO empty mask */
    using OTG_DIEPMSK_ITTXFEMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_ITTXFEMSK_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_ITTXFEMSK_B_0x1 = 1;

    /** @brief IN token received with EP mismatch mask */
    using OTG_DIEPMSK_INEPNMM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_INEPNMM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_INEPNMM_B_0x1 = 1;

    /** @brief IN endpoint NAK effective mask */
    using OTG_DIEPMSK_INEPNEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_INEPNEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_INEPNEM_B_0x1 = 1;

    /** @brief FIFO underrun mask */
    using OTG_DIEPMSK_TXFURM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_TXFURM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_TXFURM_B_0x1 = 1;

    /** @brief NAK interrupt mask */
    using OTG_DIEPMSK_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_NAKM_B_0x1 = 1;

    /** @brief OTG device OUT endpoint common interrupt mask register */
    using OTG_DOEPMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x814, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt mask */
    using OTG_DOEPMSK_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_XFRCM_B_0x1 = 1;

    /** @brief Endpoint disabled interrupt mask */
    using OTG_DOEPMSK_EPDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_EPDM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_EPDM_B_0x1 = 1;

    /** @brief AHB error mask */
    using OTG_DOEPMSK_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_AHBERRM_B_0x1 = 1;

    /** @brief SETUP phase done mask. */
    using OTG_DOEPMSK_STUPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_STUPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_STUPM_B_0x1 = 1;

    /** @brief OUT token received when endpoint disabled mask. */
    using OTG_DOEPMSK_OTEPDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_OTEPDM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_OTEPDM_B_0x1 = 1;

    /** @brief Status phase received for control write mask */
    using OTG_DOEPMSK_STSPHSRXM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_STSPHSRXM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_STSPHSRXM_B_0x1 = 1;

    /** @brief Back-to-back SETUP packets received mask */
    using OTG_DOEPMSK_B2BSTUPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_B2BSTUPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_B2BSTUPM_B_0x1 = 1;

    /** @brief Out packet error mask */
    using OTG_DOEPMSK_OUTPKTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_OUTPKTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_OUTPKTERRM_B_0x1 = 1;

    /** @brief Babble error interrupt mask */
    using OTG_DOEPMSK_BERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_BERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_BERRM_B_0x1 = 1;

    /** @brief NAK interrupt mask */
    using OTG_DOEPMSK_NAKMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_NAKMSK_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_NAKMSK_B_0x1 = 1;

    /** @brief NYET interrupt mask */
    using OTG_DOEPMSK_NYETMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_NYETMSK_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_NYETMSK_B_0x1 = 1;

    /** @brief OTG device all endpoints interrupt register */
    using OTG_DAINT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x818, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint interrupt bits */
    using OTG_DAINT_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoint interrupt bits */
    using OTG_DAINT_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG all endpoints interrupt mask register */
    using OTG_DAINTMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x81C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN EP interrupt mask bits */
    using OTG_DAINTMSK_IEPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DAINTMSK_IEPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DAINTMSK_IEPM_B_0x1 = 1;

    /** @brief OUT EP interrupt mask bits */
    using OTG_DAINTMSK_OEPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DAINTMSK_OEPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DAINTMSK_OEPM_B_0x1 = 1;

    /** @brief OTG device threshold control register */
    using OTG_DTHRCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x830, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonisochronous IN endpoints threshold enable */
    using OTG_DTHRCTL_NONISOTHREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ISO IN endpoint threshold enable */
    using OTG_DTHRCTL_ISOTHREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit threshold length */
    using OTG_DTHRCTL_TXTHRLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive threshold enable */
    using OTG_DTHRCTL_RXTHREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive threshold length */
    using OTG_DTHRCTL_RXTHRLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Arbiter parking enable */
    using OTG_DTHRCTL_ARPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint FIFO empty interrupt mask register */
    using OTG_DIEPEMPMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x834, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN EP Tx FIFO empty interrupt mask bits */
    using OTG_DIEPEMPMSK_INEPTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPEMPMSK_INEPTXFEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPEMPMSK_INEPTXFEM_B_0x1 = 1;

    /** @brief OTG device IN endpoint 0 control register [alternate] */
    using OTG_DIEPCTL0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x900, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL0_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL0_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DIEPCTL0_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL0_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL0_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL0_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL0_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL0_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL0_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL0_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL0_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL0_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL0_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL0_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL0_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL0_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL0_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DIEPCTL0_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DIEPCTL0_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL0_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL0_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 0 control register */
    using OTG_DIEPCTL0_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x900, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL0_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL0_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DIEPCTL0_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL0_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL0_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL0_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL0_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL0_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL0_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL0_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL0_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL0_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL0_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL0_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL0_ALTERNATE1_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL0_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL0_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DIEPCTL0_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DIEPCTL0_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL0_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL0_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 0 interrupt register */
    using OTG_DIEPINT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x908, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DIEPINT0_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DIEPINT0_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DIEPINT0_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition */
    using OTG_DIEPINT0_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty */
    using OTG_DIEPINT0_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch */
    using OTG_DIEPINT0_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective */
    using OTG_DIEPINT0_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty */
    using OTG_DIEPINT0_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) */
    using OTG_DIEPINT0_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status */
    using OTG_DIEPINT0_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DIEPINT0_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 0 transfer size register */
    using OTG_DIEPTSIZ0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x910, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DIEPTSIZ0_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DIEPTSIZ0_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 0 DMA address register */
    using OTG_DIEPDMA0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x914, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DIEPDMA0_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x918, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available */
    using OTG_DTXFSTS0_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS0_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS0_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS0_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 1 control register [alternate] */
    using OTG_DIEPCTL1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x920, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DIEPCTL1_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL1_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL1_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL1_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL1_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DIEPCTL1_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DIEPCTL1_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 1 control register */
    using OTG_DIEPCTL1_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x920, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL1_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL1_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DIEPCTL1_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL1_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL1_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL1_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL1_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL1_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL1_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL1_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL1_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL1_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL1_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL1_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL1_ALTERNATE1_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL1_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL1_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DIEPCTL1_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DIEPCTL1_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL1_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL1_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 1 interrupt register */
    using OTG_DIEPINT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x928, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DIEPINT1_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DIEPINT1_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DIEPINT1_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition */
    using OTG_DIEPINT1_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty */
    using OTG_DIEPINT1_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch */
    using OTG_DIEPINT1_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective */
    using OTG_DIEPINT1_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty */
    using OTG_DIEPINT1_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) */
    using OTG_DIEPINT1_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status */
    using OTG_DIEPINT1_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DIEPINT1_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 1 transfer size register */
    using OTG_DIEPTSIZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x930, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DIEPTSIZ1_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DIEPTSIZ1_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_DIEPTSIZ1_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ1_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ1_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ1_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 1 DMA address register */
    using OTG_DIEPDMA1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x934, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DIEPDMA1_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x938, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available */
    using OTG_DTXFSTS1_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS1_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS1_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS1_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 2 control register [alternate] */
    using OTG_DIEPCTL2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x940, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL2_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL2_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DIEPCTL2_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL2_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL2_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL2_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL2_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL2_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL2_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL2_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL2_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL2_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL2_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL2_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL2_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL2_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL2_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DIEPCTL2_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DIEPCTL2_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL2_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL2_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 2 control register */
    using OTG_DIEPCTL2_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x940, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL2_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL2_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DIEPCTL2_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL2_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL2_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL2_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL2_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL2_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL2_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL2_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL2_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL2_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL2_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL2_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL2_ALTERNATE1_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL2_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL2_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DIEPCTL2_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DIEPCTL2_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL2_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL2_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 2 interrupt register */
    using OTG_DIEPINT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x948, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DIEPINT2_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DIEPINT2_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DIEPINT2_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition */
    using OTG_DIEPINT2_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty */
    using OTG_DIEPINT2_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch */
    using OTG_DIEPINT2_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective */
    using OTG_DIEPINT2_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty */
    using OTG_DIEPINT2_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) */
    using OTG_DIEPINT2_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status */
    using OTG_DIEPINT2_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DIEPINT2_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 2 transfer size register */
    using OTG_DIEPTSIZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x950, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DIEPTSIZ2_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DIEPTSIZ2_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_DIEPTSIZ2_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ2_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ2_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ2_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 2 DMA address register */
    using OTG_DIEPDMA2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x954, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DIEPDMA2_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x958, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available */
    using OTG_DTXFSTS2_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS2_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS2_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS2_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 3 control register [alternate] */
    using OTG_DIEPCTL3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x960, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL3_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL3_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DIEPCTL3_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL3_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL3_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL3_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL3_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL3_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL3_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL3_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL3_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL3_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL3_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL3_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL3_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL3_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL3_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DIEPCTL3_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DIEPCTL3_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL3_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL3_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 3 control register */
    using OTG_DIEPCTL3_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x960, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL3_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL3_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DIEPCTL3_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL3_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL3_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL3_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL3_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL3_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL3_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL3_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL3_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL3_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL3_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL3_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL3_ALTERNATE1_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL3_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL3_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DIEPCTL3_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DIEPCTL3_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL3_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL3_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 3 interrupt register */
    using OTG_DIEPINT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x968, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DIEPINT3_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DIEPINT3_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DIEPINT3_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition */
    using OTG_DIEPINT3_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty */
    using OTG_DIEPINT3_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch */
    using OTG_DIEPINT3_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective */
    using OTG_DIEPINT3_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty */
    using OTG_DIEPINT3_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) */
    using OTG_DIEPINT3_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status */
    using OTG_DIEPINT3_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DIEPINT3_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 3 transfer size register */
    using OTG_DIEPTSIZ3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x970, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DIEPTSIZ3_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DIEPTSIZ3_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_DIEPTSIZ3_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ3_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ3_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ3_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 3 DMA address register */
    using OTG_DIEPDMA3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x974, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DIEPDMA3_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x978, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available */
    using OTG_DTXFSTS3_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS3_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS3_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS3_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 4 control register [alternate] */
    using OTG_DIEPCTL4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x980, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL4_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL4_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DIEPCTL4_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL4_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL4_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL4_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL4_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL4_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL4_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL4_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL4_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL4_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL4_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL4_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL4_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL4_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL4_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DIEPCTL4_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DIEPCTL4_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL4_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL4_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 4 control register */
    using OTG_DIEPCTL4_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x980, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL4_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL4_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DIEPCTL4_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL4_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL4_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL4_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL4_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL4_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL4_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL4_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL4_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL4_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL4_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL4_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL4_ALTERNATE1_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL4_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL4_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DIEPCTL4_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DIEPCTL4_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL4_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL4_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 4 interrupt register */
    using OTG_DIEPINT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x988, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DIEPINT4_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DIEPINT4_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DIEPINT4_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition */
    using OTG_DIEPINT4_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty */
    using OTG_DIEPINT4_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch */
    using OTG_DIEPINT4_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective */
    using OTG_DIEPINT4_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty */
    using OTG_DIEPINT4_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) */
    using OTG_DIEPINT4_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status */
    using OTG_DIEPINT4_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DIEPINT4_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 4 transfer size register */
    using OTG_DIEPTSIZ4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x990, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DIEPTSIZ4_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DIEPTSIZ4_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_DIEPTSIZ4_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ4_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ4_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ4_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 4 DMA address register */
    using OTG_DIEPDMA4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x994, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DIEPDMA4_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x998, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available */
    using OTG_DTXFSTS4_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS4_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS4_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS4_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 5 control register [alternate] */
    using OTG_DIEPCTL5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL5_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL5_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DIEPCTL5_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL5_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL5_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL5_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL5_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL5_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL5_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL5_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL5_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL5_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL5_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL5_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL5_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL5_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL5_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DIEPCTL5_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DIEPCTL5_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL5_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL5_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 5 control register */
    using OTG_DIEPCTL5_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL5_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL5_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DIEPCTL5_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL5_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL5_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL5_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL5_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL5_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL5_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL5_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL5_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL5_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL5_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL5_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL5_ALTERNATE1_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL5_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL5_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DIEPCTL5_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DIEPCTL5_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL5_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL5_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 5 interrupt register */
    using OTG_DIEPINT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DIEPINT5_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DIEPINT5_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DIEPINT5_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition */
    using OTG_DIEPINT5_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty */
    using OTG_DIEPINT5_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch */
    using OTG_DIEPINT5_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective */
    using OTG_DIEPINT5_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty */
    using OTG_DIEPINT5_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) */
    using OTG_DIEPINT5_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status */
    using OTG_DIEPINT5_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DIEPINT5_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 5 transfer size register */
    using OTG_DIEPTSIZ5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DIEPTSIZ5_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DIEPTSIZ5_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_DIEPTSIZ5_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ5_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ5_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ5_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 5 DMA address register */
    using OTG_DIEPDMA5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DIEPDMA5_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available */
    using OTG_DTXFSTS5_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS5_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS5_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS5_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 6 control register [alternate] */
    using OTG_DIEPCTL6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL6_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL6_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DIEPCTL6_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL6_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL6_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL6_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL6_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL6_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL6_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL6_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL6_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL6_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL6_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL6_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL6_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL6_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL6_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DIEPCTL6_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DIEPCTL6_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL6_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL6_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 6 control register */
    using OTG_DIEPCTL6_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL6_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL6_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DIEPCTL6_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL6_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL6_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL6_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL6_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL6_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL6_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL6_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL6_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL6_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL6_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL6_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL6_ALTERNATE1_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL6_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL6_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DIEPCTL6_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DIEPCTL6_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL6_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL6_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 6 interrupt register */
    using OTG_DIEPINT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DIEPINT6_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DIEPINT6_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DIEPINT6_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition */
    using OTG_DIEPINT6_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty */
    using OTG_DIEPINT6_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch */
    using OTG_DIEPINT6_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective */
    using OTG_DIEPINT6_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty */
    using OTG_DIEPINT6_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) */
    using OTG_DIEPINT6_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status */
    using OTG_DIEPINT6_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DIEPINT6_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 6 transfer size register */
    using OTG_DIEPTSIZ6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DIEPTSIZ6_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DIEPTSIZ6_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_DIEPTSIZ6_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ6_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ6_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ6_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 6 DMA address register */
    using OTG_DIEPDMA6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DIEPDMA6_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available */
    using OTG_DTXFSTS6_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS6_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS6_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS6_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 7 control register [alternate] */
    using OTG_DIEPCTL7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL7_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL7_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DIEPCTL7_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL7_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL7_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL7_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL7_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL7_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL7_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL7_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL7_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL7_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL7_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL7_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL7_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL7_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL7_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DIEPCTL7_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DIEPCTL7_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL7_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL7_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 7 control register */
    using OTG_DIEPCTL7_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL7_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL7_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DIEPCTL7_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL7_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL7_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL7_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL7_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL7_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL7_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL7_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL7_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL7_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL7_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL7_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL7_ALTERNATE1_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL7_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL7_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DIEPCTL7_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DIEPCTL7_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL7_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL7_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 7 interrupt register */
    using OTG_DIEPINT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DIEPINT7_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DIEPINT7_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DIEPINT7_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition */
    using OTG_DIEPINT7_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty */
    using OTG_DIEPINT7_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch */
    using OTG_DIEPINT7_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective */
    using OTG_DIEPINT7_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty */
    using OTG_DIEPINT7_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) */
    using OTG_DIEPINT7_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status */
    using OTG_DIEPINT7_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DIEPINT7_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 7 transfer size register */
    using OTG_DIEPTSIZ7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DIEPTSIZ7_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DIEPTSIZ7_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_DIEPTSIZ7_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ7_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ7_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ7_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 7 DMA address register */
    using OTG_DIEPDMA7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DIEPDMA7_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available */
    using OTG_DTXFSTS7_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS7_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS7_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS7_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 8 control register [alternate] */
    using OTG_DIEPCTL8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL8_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL8_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DIEPCTL8_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL8_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL8_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL8_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL8_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL8_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL8_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL8_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL8_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL8_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL8_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL8_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL8_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL8_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL8_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DIEPCTL8_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DIEPCTL8_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL8_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL8_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 8 control register */
    using OTG_DIEPCTL8_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DIEPCTL8_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DIEPCTL8_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DIEPCTL8_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL8_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL8_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DIEPCTL8_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL8_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL8_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DIEPCTL8_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL8_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL8_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL8_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL8_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake */
    using OTG_DIEPCTL8_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number */
    using OTG_DIEPCTL8_ALTERNATE1_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DIEPCTL8_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DIEPCTL8_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DIEPCTL8_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DIEPCTL8_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DIEPCTL8_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DIEPCTL8_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 8 interrupt register */
    using OTG_DIEPINT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DIEPINT8_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DIEPINT8_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DIEPINT8_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition */
    using OTG_DIEPINT8_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty */
    using OTG_DIEPINT8_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch */
    using OTG_DIEPINT8_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective */
    using OTG_DIEPINT8_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty */
    using OTG_DIEPINT8_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) */
    using OTG_DIEPINT8_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status */
    using OTG_DIEPINT8_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DIEPINT8_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 8 transfer size register */
    using OTG_DIEPTSIZ8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DIEPTSIZ8_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DIEPTSIZ8_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_DIEPTSIZ8_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ8_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ8_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ8_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 8 DMA address register */
    using OTG_DIEPDMA8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DIEPDMA8_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available */
    using OTG_DTXFSTS8_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS8_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS8_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS8_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device control OUT endpoint 0 control register */
    using OTG_DOEPCTL0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL0_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 64 bytes (value: 0)
     *          - B_0x1: 32 bytes (value: 1)
     *          - B_0x2: 16 bytes (value: 2)
     *          - B_0x3: 8 bytes (value: 3)
     */
        /** @brief 64 bytes */
    constexpr std::uint32_t OTG_DOEPCTL0_MPSIZ_B_0x0 = 0;
        /** @brief 32 bytes */
    constexpr std::uint32_t OTG_DOEPCTL0_MPSIZ_B_0x1 = 1;
        /** @brief 16 bytes */
    constexpr std::uint32_t OTG_DOEPCTL0_MPSIZ_B_0x2 = 2;
        /** @brief 8 bytes */
    constexpr std::uint32_t OTG_DOEPCTL0_MPSIZ_B_0x3 = 3;

    /** @brief USB active endpoint */
    using OTG_DOEPCTL0_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK status */
    using OTG_DOEPCTL0_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL0_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL0_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL0_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Snoop mode */
    using OTG_DOEPCTL0_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL0_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL0_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL0_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL0_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL0_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 0 interrupt register */
    using OTG_DOEPINT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DOEPINT0_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DOEPINT0_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DOEPINT0_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done */
    using OTG_DOEPINT0_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled */
    using OTG_DOEPINT0_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write */
    using OTG_DOEPINT0_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received */
    using OTG_DOEPINT0_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error */
    using OTG_DOEPINT0_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt */
    using OTG_DOEPINT0_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DOEPINT0_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt */
    using OTG_DOEPINT0_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received */
    using OTG_DOEPINT0_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 0 transfer size register */
    using OTG_DOEPTSIZ0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DOEPTSIZ0_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DOEPTSIZ0_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP packet count */
    using OTG_DOEPTSIZ0_STUPCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DOEPTSIZ0_STUPCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DOEPTSIZ0_STUPCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DOEPTSIZ0_STUPCNT_B_0x3 = 3;

    /** @brief OTG device OUT endpoint 0 DMA address register */
    using OTG_DOEPDMA0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DOEPDMA0_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 1 control register [alternate] */
    using OTG_DOEPCTL1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DOEPCTL1_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL1_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL1_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL1_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL1_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DOEPCTL1_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DOEPCTL1_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 1 control register */
    using OTG_DOEPCTL1_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL1_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL1_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DOEPCTL1_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL1_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL1_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL1_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL1_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL1_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL1_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL1_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL1_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL1_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL1_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL1_ALTERNATE1_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL1_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL1_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL1_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DOEPCTL1_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DOEPCTL1_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL1_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL1_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 1 interrupt register */
    using OTG_DOEPINT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DOEPINT1_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DOEPINT1_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DOEPINT1_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done */
    using OTG_DOEPINT1_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled */
    using OTG_DOEPINT1_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write */
    using OTG_DOEPINT1_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received */
    using OTG_DOEPINT1_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error */
    using OTG_DOEPINT1_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt */
    using OTG_DOEPINT1_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DOEPINT1_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt */
    using OTG_DOEPINT1_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received */
    using OTG_DOEPINT1_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 1 transfer size register */
    using OTG_DOEPTSIZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DOEPTSIZ1_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DOEPTSIZ1_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID */
    using OTG_DOEPTSIZ1_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ1_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ1_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ1_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ1_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 1 DMA address register */
    using OTG_DOEPDMA1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DOEPDMA1_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 2 control register [alternate] */
    using OTG_DOEPCTL2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL2_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL2_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DOEPCTL2_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL2_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL2_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL2_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL2_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL2_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL2_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL2_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL2_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL2_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL2_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL2_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL2_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL2_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL2_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DOEPCTL2_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DOEPCTL2_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL2_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL2_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 2 control register */
    using OTG_DOEPCTL2_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL2_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL2_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DOEPCTL2_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL2_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL2_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL2_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL2_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL2_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL2_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL2_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL2_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL2_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL2_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL2_ALTERNATE1_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL2_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL2_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL2_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DOEPCTL2_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DOEPCTL2_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL2_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL2_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 2 interrupt register */
    using OTG_DOEPINT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DOEPINT2_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DOEPINT2_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DOEPINT2_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done */
    using OTG_DOEPINT2_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled */
    using OTG_DOEPINT2_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write */
    using OTG_DOEPINT2_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received */
    using OTG_DOEPINT2_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error */
    using OTG_DOEPINT2_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt */
    using OTG_DOEPINT2_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DOEPINT2_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt */
    using OTG_DOEPINT2_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received */
    using OTG_DOEPINT2_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 2 transfer size register */
    using OTG_DOEPTSIZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DOEPTSIZ2_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DOEPTSIZ2_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID */
    using OTG_DOEPTSIZ2_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ2_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ2_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ2_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ2_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 2 DMA address register */
    using OTG_DOEPDMA2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DOEPDMA2_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 3 control register [alternate] */
    using OTG_DOEPCTL3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL3_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL3_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DOEPCTL3_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL3_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL3_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL3_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL3_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL3_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL3_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL3_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL3_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL3_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL3_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL3_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL3_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL3_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL3_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DOEPCTL3_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DOEPCTL3_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL3_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL3_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 3 control register */
    using OTG_DOEPCTL3_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL3_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL3_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DOEPCTL3_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL3_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL3_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL3_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL3_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL3_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL3_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL3_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL3_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL3_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL3_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL3_ALTERNATE1_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL3_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL3_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL3_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DOEPCTL3_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DOEPCTL3_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL3_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL3_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 3 interrupt register */
    using OTG_DOEPINT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DOEPINT3_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DOEPINT3_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DOEPINT3_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done */
    using OTG_DOEPINT3_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled */
    using OTG_DOEPINT3_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write */
    using OTG_DOEPINT3_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received */
    using OTG_DOEPINT3_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error */
    using OTG_DOEPINT3_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt */
    using OTG_DOEPINT3_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DOEPINT3_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt */
    using OTG_DOEPINT3_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received */
    using OTG_DOEPINT3_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 3 transfer size register */
    using OTG_DOEPTSIZ3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DOEPTSIZ3_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DOEPTSIZ3_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID */
    using OTG_DOEPTSIZ3_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ3_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ3_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ3_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ3_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 3 DMA address register */
    using OTG_DOEPDMA3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DOEPDMA3_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 4 control register [alternate] */
    using OTG_DOEPCTL4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL4_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL4_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DOEPCTL4_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL4_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL4_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL4_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL4_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL4_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL4_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL4_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL4_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL4_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL4_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL4_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL4_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL4_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL4_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DOEPCTL4_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DOEPCTL4_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL4_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL4_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 4 control register */
    using OTG_DOEPCTL4_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL4_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL4_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DOEPCTL4_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL4_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL4_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL4_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL4_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL4_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL4_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL4_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL4_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL4_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL4_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL4_ALTERNATE1_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL4_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL4_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL4_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DOEPCTL4_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DOEPCTL4_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL4_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL4_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 4 interrupt register */
    using OTG_DOEPINT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DOEPINT4_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DOEPINT4_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DOEPINT4_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done */
    using OTG_DOEPINT4_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled */
    using OTG_DOEPINT4_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write */
    using OTG_DOEPINT4_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received */
    using OTG_DOEPINT4_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error */
    using OTG_DOEPINT4_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt */
    using OTG_DOEPINT4_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DOEPINT4_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt */
    using OTG_DOEPINT4_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received */
    using OTG_DOEPINT4_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 4 transfer size register */
    using OTG_DOEPTSIZ4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DOEPTSIZ4_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DOEPTSIZ4_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID */
    using OTG_DOEPTSIZ4_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ4_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ4_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ4_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ4_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 4 DMA address register */
    using OTG_DOEPDMA4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DOEPDMA4_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 5 control register [alternate] */
    using OTG_DOEPCTL5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL5_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL5_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DOEPCTL5_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL5_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL5_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL5_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL5_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL5_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL5_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL5_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL5_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL5_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL5_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL5_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL5_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL5_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL5_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DOEPCTL5_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DOEPCTL5_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL5_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL5_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 5 control register */
    using OTG_DOEPCTL5_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL5_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL5_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DOEPCTL5_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL5_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL5_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL5_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL5_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL5_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL5_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL5_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL5_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL5_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL5_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL5_ALTERNATE1_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL5_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL5_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL5_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DOEPCTL5_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DOEPCTL5_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL5_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL5_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 5 interrupt register */
    using OTG_DOEPINT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DOEPINT5_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DOEPINT5_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DOEPINT5_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done */
    using OTG_DOEPINT5_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled */
    using OTG_DOEPINT5_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write */
    using OTG_DOEPINT5_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received */
    using OTG_DOEPINT5_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error */
    using OTG_DOEPINT5_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt */
    using OTG_DOEPINT5_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DOEPINT5_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt */
    using OTG_DOEPINT5_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received */
    using OTG_DOEPINT5_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 5 transfer size register */
    using OTG_DOEPTSIZ5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DOEPTSIZ5_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DOEPTSIZ5_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID */
    using OTG_DOEPTSIZ5_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ5_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ5_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ5_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ5_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 5 DMA address register */
    using OTG_DOEPDMA5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DOEPDMA5_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 6 control register [alternate] */
    using OTG_DOEPCTL6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL6_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL6_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DOEPCTL6_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL6_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL6_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL6_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL6_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL6_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL6_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL6_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL6_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL6_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL6_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL6_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL6_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL6_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL6_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DOEPCTL6_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DOEPCTL6_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL6_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL6_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 6 control register */
    using OTG_DOEPCTL6_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL6_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL6_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DOEPCTL6_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL6_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL6_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL6_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL6_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL6_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL6_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL6_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL6_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL6_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL6_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL6_ALTERNATE1_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL6_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL6_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL6_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DOEPCTL6_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DOEPCTL6_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL6_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL6_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 6 interrupt register */
    using OTG_DOEPINT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DOEPINT6_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DOEPINT6_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DOEPINT6_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done */
    using OTG_DOEPINT6_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled */
    using OTG_DOEPINT6_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write */
    using OTG_DOEPINT6_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received */
    using OTG_DOEPINT6_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error */
    using OTG_DOEPINT6_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt */
    using OTG_DOEPINT6_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DOEPINT6_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt */
    using OTG_DOEPINT6_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received */
    using OTG_DOEPINT6_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 6 transfer size register */
    using OTG_DOEPTSIZ6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DOEPTSIZ6_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DOEPTSIZ6_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID */
    using OTG_DOEPTSIZ6_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ6_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ6_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ6_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ6_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 6 DMA address register */
    using OTG_DOEPDMA6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DOEPDMA6_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 7 control register [alternate] */
    using OTG_DOEPCTL7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL7_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL7_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DOEPCTL7_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL7_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL7_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL7_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL7_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL7_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL7_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL7_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL7_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL7_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL7_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL7_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL7_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL7_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL7_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DOEPCTL7_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DOEPCTL7_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL7_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL7_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 7 control register */
    using OTG_DOEPCTL7_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL7_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL7_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DOEPCTL7_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL7_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL7_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL7_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL7_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL7_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL7_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL7_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL7_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL7_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL7_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL7_ALTERNATE1_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL7_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL7_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL7_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DOEPCTL7_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DOEPCTL7_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL7_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL7_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 7 interrupt register */
    using OTG_DOEPINT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DOEPINT7_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DOEPINT7_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DOEPINT7_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done */
    using OTG_DOEPINT7_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled */
    using OTG_DOEPINT7_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write */
    using OTG_DOEPINT7_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received */
    using OTG_DOEPINT7_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error */
    using OTG_DOEPINT7_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt */
    using OTG_DOEPINT7_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DOEPINT7_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt */
    using OTG_DOEPINT7_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received */
    using OTG_DOEPINT7_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 7 transfer size register */
    using OTG_DOEPTSIZ7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DOEPTSIZ7_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DOEPTSIZ7_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID */
    using OTG_DOEPTSIZ7_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ7_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ7_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ7_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ7_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 7 DMA address register */
    using OTG_DOEPDMA7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DOEPDMA7_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 8 control register [alternate] */
    using OTG_DOEPCTL8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL8_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL8_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID */
    using OTG_DOEPCTL8_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL8_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL8_DPID_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL8_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL8_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL8_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL8_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL8_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL8_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL8_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL8_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL8_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL8_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL8_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL8_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID */
    using OTG_DOEPCTL8_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID */
    using OTG_DOEPCTL8_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL8_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL8_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 8 control register */
    using OTG_DOEPCTL8_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_DOEPCTL8_ALTERNATE1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_DOEPCTL8_ALTERNATE1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame */
    using OTG_DOEPCTL8_ALTERNATE1_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL8_ALTERNATE1_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL8_ALTERNATE1_EONUM_B_0x1 = 1;

    /** @brief NAK status */
    using OTG_DOEPCTL8_ALTERNATE1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL8_ALTERNATE1_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL8_ALTERNATE1_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type */
    using OTG_DOEPCTL8_ALTERNATE1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL8_ALTERNATE1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL8_ALTERNATE1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL8_ALTERNATE1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL8_ALTERNATE1_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode */
    using OTG_DOEPCTL8_ALTERNATE1_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_DOEPCTL8_ALTERNATE1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_DOEPCTL8_ALTERNATE1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_DOEPCTL8_ALTERNATE1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame */
    using OTG_DOEPCTL8_ALTERNATE1_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame */
    using OTG_DOEPCTL8_ALTERNATE1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_DOEPCTL8_ALTERNATE1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_DOEPCTL8_ALTERNATE1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 8 interrupt register */
    using OTG_DOEPINT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt */
    using OTG_DOEPINT8_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt */
    using OTG_DOEPINT8_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_DOEPINT8_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done */
    using OTG_DOEPINT8_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled */
    using OTG_DOEPINT8_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write */
    using OTG_DOEPINT8_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received */
    using OTG_DOEPINT8_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error */
    using OTG_DOEPINT8_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt */
    using OTG_DOEPINT8_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input */
    using OTG_DOEPINT8_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt */
    using OTG_DOEPINT8_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received */
    using OTG_DOEPINT8_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 8 transfer size register */
    using OTG_DOEPTSIZ8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_DOEPTSIZ8_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_DOEPTSIZ8_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID */
    using OTG_DOEPTSIZ8_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ8_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ8_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ8_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ8_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 8 DMA address register */
    using OTG_DOEPDMA8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address */
    using OTG_DOEPDMA8_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG power and clock gating control register */
    using OTG_PCGCCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop PHY clock */
    using OTG_PCGCCTL_STPPCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gate HCLK */
    using OTG_PCGCCTL_GATEHCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY suspended */
    using OTG_PCGCCTL_PHYSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable sleep clock gating */
    using OTG_PCGCCTL_ENL1GTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY in Sleep */
    using OTG_PCGCCTL_PHYSLEEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Deep Sleep */
    using OTG_PCGCCTL_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG power and clock gating control register 1 */
    using OTG_PCGCCTL1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable active clock gating */
    using OTG_PCGCCTL1_GATEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter for clock gating */
    using OTG_PCGCCTL1_CNTGATECLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 64 clocks (value: 0)
     *          - B_0x1: 128 clocks (value: 1)
     */
        /** @brief 64 clocks */
    constexpr std::uint32_t OTG_PCGCCTL1_CNTGATECLK_B_0x0 = 0;
        /** @brief 128 clocks */
    constexpr std::uint32_t OTG_PCGCCTL1_CNTGATECLK_B_0x1 = 1;

    /** @brief Enable RAM clock gating */
    using OTG_PCGCCTL1_RAMGATEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
