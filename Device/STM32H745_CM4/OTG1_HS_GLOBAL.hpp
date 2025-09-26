/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H745_CM4_OTG1_HS_GLOBAL_HPP
#define EMBEDDED_PP_STM32H745_CM4_OTG1_HS_GLOBAL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USB 1 on the go high speed */
namespace STM32H745_CM4::OTG1_HS_GLOBAL {

    /** @brief OTG_HS control and status register */
    using OTG_HS_GOTGCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request success */
    using OTG_HS_GOTGCTL_SRQSCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request */
    using OTG_HS_GOTGCTL_SRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host negotiation success */
    using OTG_HS_GOTGCTL_HNGSCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HNP request */
    using OTG_HS_GOTGCTL_HNPRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host set HNP enable */
    using OTG_HS_GOTGCTL_HSHNPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device HNP enabled */
    using OTG_HS_GOTGCTL_DHNPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Connector ID status */
    using OTG_HS_GOTGCTL_CIDSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Long/short debounce time */
    using OTG_HS_GOTGCTL_DBCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A-session valid */
    using OTG_HS_GOTGCTL_ASVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B-session valid */
    using OTG_HS_GOTGCTL_BSVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Embedded host enable */
    using OTG_HS_GOTGCTL_EHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS interrupt register */
    using OTG_HS_GOTGINT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session end detected */
    using OTG_HS_GOTGINT_SEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request success status change */
    using OTG_HS_GOTGINT_SRSSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host negotiation success status change */
    using OTG_HS_GOTGINT_HNSSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host negotiation detected */
    using OTG_HS_GOTGINT_HNGDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A-device timeout change */
    using OTG_HS_GOTGINT_ADTOCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debounce done */
    using OTG_HS_GOTGINT_DBCDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID input pin changed */
    using OTG_HS_GOTGINT_IDCHNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS AHB configuration register */
    using OTG_HS_GAHBCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global interrupt mask */
    using OTG_HS_GAHBCFG_GINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Burst length/type */
    using OTG_HS_GAHBCFG_HBSTLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA enable */
    using OTG_HS_GAHBCFG_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TxFIFO empty level */
    using OTG_HS_GAHBCFG_TXFELVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic TxFIFO empty level */
    using OTG_HS_GAHBCFG_PTXFELVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS USB configuration register */
    using OTG_HS_GUSBCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FS timeout calibration */
    using OTG_HS_GUSBCFG_TOCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB 2.0 high-speed ULPI PHY or USB 1.1 full-speed serial transceiver select */
    using OTG_HS_GUSBCFG_PHYSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRP-capable */
    using OTG_HS_GUSBCFG_SRPCAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HNP-capable */
    using OTG_HS_GUSBCFG_HNPCAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB turnaround time */
    using OTG_HS_GUSBCFG_TRDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Low-power clock select */
    using OTG_HS_GUSBCFG_PHYLPCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI FS/LS select */
    using OTG_HS_GUSBCFG_ULPIFSLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI Auto-resume */
    using OTG_HS_GUSBCFG_ULPIAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI Clock SuspendM */
    using OTG_HS_GUSBCFG_ULPICSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI External VBUS Drive */
    using OTG_HS_GUSBCFG_ULPIEVBUSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI external VBUS indicator */
    using OTG_HS_GUSBCFG_ULPIEVBUSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TermSel DLine pulsing selection */
    using OTG_HS_GUSBCFG_TSDPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicator complement */
    using OTG_HS_GUSBCFG_PCCI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicator pass through */
    using OTG_HS_GUSBCFG_PTCI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI interface protect disable */
    using OTG_HS_GUSBCFG_ULPIIPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Forced host mode */
    using OTG_HS_GUSBCFG_FHMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Forced peripheral mode */
    using OTG_HS_GUSBCFG_FDMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS reset register */
    using OTG_HS_GRSTCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Core soft reset */
    using OTG_HS_GRSTCTL_CSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HCLK soft reset */
    using OTG_HS_GRSTCTL_HSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host frame counter reset */
    using OTG_HS_GRSTCTL_FCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RxFIFO flush */
    using OTG_HS_GRSTCTL_RXFFLSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TxFIFO flush */
    using OTG_HS_GRSTCTL_TXFFLSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TxFIFO number */
    using OTG_HS_GRSTCTL_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB master idle */
    using OTG_HS_GRSTCTL_AHBIDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request signal enabled for USB OTG HS */
    using OTG_HS_GRSTCTL_DMAREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS core interrupt register */
    using OTG_HS_GINTSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current mode of operation */
    using OTG_HS_GINTSTS_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mode mismatch interrupt */
    using OTG_HS_GINTSTS_MMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG interrupt */
    using OTG_HS_GINTSTS_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame */
    using OTG_HS_GINTSTS_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RxFIFO nonempty */
    using OTG_HS_GINTSTS_RXFLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonperiodic TxFIFO empty */
    using OTG_HS_GINTSTS_NPTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global IN nonperiodic NAK effective */
    using OTG_HS_GINTSTS_GINAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global OUT NAK effective */
    using OTG_HS_GINTSTS_BOUTNAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early suspend */
    using OTG_HS_GINTSTS_ESUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB suspend */
    using OTG_HS_GINTSTS_USBSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB reset */
    using OTG_HS_GINTSTS_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumeration done */
    using OTG_HS_GINTSTS_ENUMDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Isochronous OUT packet dropped interrupt */
    using OTG_HS_GINTSTS_ISOODRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of periodic frame interrupt */
    using OTG_HS_GINTSTS_EOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint interrupt */
    using OTG_HS_GINTSTS_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoint interrupt */
    using OTG_HS_GINTSTS_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete isochronous IN transfer */
    using OTG_HS_GINTSTS_IISOIXFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete periodic transfer */
    using OTG_HS_GINTSTS_PXFR_INCOMPISOOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data fetch suspended */
    using OTG_HS_GINTSTS_DATAFSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host port interrupt */
    using OTG_HS_GINTSTS_HPRTINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host channels interrupt */
    using OTG_HS_GINTSTS_HCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic TxFIFO empty */
    using OTG_HS_GINTSTS_PTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Connector ID status change */
    using OTG_HS_GINTSTS_CIDSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disconnect detected interrupt */
    using OTG_HS_GINTSTS_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request/new session detected interrupt */
    using OTG_HS_GINTSTS_SRQINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Resume/remote wakeup detected interrupt */
    using OTG_HS_GINTSTS_WKUINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS interrupt mask register */
    using OTG_HS_GINTMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mode mismatch interrupt mask */
    using OTG_HS_GINTMSK_MMISM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG interrupt mask */
    using OTG_HS_GINTMSK_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame mask */
    using OTG_HS_GINTMSK_SOFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive FIFO nonempty mask */
    using OTG_HS_GINTMSK_RXFLVLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonperiodic TxFIFO empty mask */
    using OTG_HS_GINTMSK_NPTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global nonperiodic IN NAK effective mask */
    using OTG_HS_GINTMSK_GINAKEFFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global OUT NAK effective mask */
    using OTG_HS_GINTMSK_GONAKEFFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early suspend mask */
    using OTG_HS_GINTMSK_ESUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB suspend mask */
    using OTG_HS_GINTMSK_USBSUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB reset mask */
    using OTG_HS_GINTMSK_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumeration done mask */
    using OTG_HS_GINTMSK_ENUMDNEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Isochronous OUT packet dropped interrupt mask */
    using OTG_HS_GINTMSK_ISOODRPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of periodic frame interrupt mask */
    using OTG_HS_GINTMSK_EOPFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoints interrupt mask */
    using OTG_HS_GINTMSK_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoints interrupt mask */
    using OTG_HS_GINTMSK_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete isochronous IN transfer mask */
    using OTG_HS_GINTMSK_IISOIXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete periodic transfer mask */
    using OTG_HS_GINTMSK_PXFRM_IISOOXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data fetch suspended mask */
    using OTG_HS_GINTMSK_FSUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host port interrupt mask */
    using OTG_HS_GINTMSK_PRTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host channels interrupt mask */
    using OTG_HS_GINTMSK_HCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic TxFIFO empty mask */
    using OTG_HS_GINTMSK_PTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Connector ID status change mask */
    using OTG_HS_GINTMSK_CIDSCHGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disconnect detected interrupt mask */
    using OTG_HS_GINTMSK_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request/new session detected interrupt mask */
    using OTG_HS_GINTMSK_SRQIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Resume/remote wakeup detected interrupt mask */
    using OTG_HS_GINTMSK_WUIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset detected interrupt mask */
    using OTG_HS_GINTMSK_RSTDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM interrupt mask */
    using OTG_HS_GINTMSK_LPMINTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS Receive status debug read register (host mode) */
    using OTG_HS_GRXSTSR_Host = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel number */
    using OTG_HS_GRXSTSR_Host_CHNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_HS_GRXSTSR_Host_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_GRXSTSR_Host_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet status */
    using OTG_HS_GRXSTSR_Host_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS status read and pop register (host mode) */
    using OTG_HS_GRXSTSP_Host = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel number */
    using OTG_HS_GRXSTSP_Host_CHNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_HS_GRXSTSP_Host_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_GRXSTSP_Host_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet status */
    using OTG_HS_GRXSTSP_Host_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS Receive FIFO size register */
    using OTG_HS_GRXFSIZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RxFIFO depth */
    using OTG_HS_GRXFSIZ_RXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS nonperiodic transmit FIFO size register (host mode) */
    using OTG_HS_HNPTXFSIZ_Host = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonperiodic transmit RAM start address */
    using OTG_HS_HNPTXFSIZ_Host_NPTXFSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonperiodic TxFIFO depth */
    using OTG_HS_HNPTXFSIZ_Host_NPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 transmit FIFO size (peripheral mode) */
    using OTG_HS_DIEPTXF0_Device = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 transmit RAM start address */
    using OTG_HS_DIEPTXF0_Device_TX0FSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 TxFIFO depth */
    using OTG_HS_DIEPTXF0_Device_TX0FD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS nonperiodic transmit FIFO/queue status register */
    using OTG_HS_GNPTXSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonperiodic TxFIFO space available */
    using OTG_HS_GNPTXSTS_NPTXFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonperiodic transmit request queue space available */
    using OTG_HS_GNPTXSTS_NPTQXSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Top of the nonperiodic transmit request queue */
    using OTG_HS_GNPTXSTS_NPTXQTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS general core configuration register */
    using OTG_HS_GCCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power down */
    using OTG_HS_GCCFG_PWRDWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Battery charging detector (BCD) enable */
    using OTG_HS_GCCFG_BCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data contact detection (DCD) mode enable */
    using OTG_HS_GCCFG_DCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Primary detection (PD) mode enable */
    using OTG_HS_GCCFG_PDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secondary detection (SD) mode enable */
    using OTG_HS_GCCFG_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB VBUS detection enable */
    using OTG_HS_GCCFG_VBDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data contact detection (DCD) status */
    using OTG_HS_GCCFG_DCDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Primary detection (PD) status */
    using OTG_HS_GCCFG_PDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secondary detection (SD) status */
    using OTG_HS_GCCFG_SDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DM pull-up detection status */
    using OTG_HS_GCCFG_PS2DET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS core ID register */
    using OTG_HS_CID = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Product ID field */
    using OTG_HS_CID_PRODUCT_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS Host periodic transmit FIFO size register */
    using OTG_HS_HPTXFSIZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host periodic TxFIFO start address */
    using OTG_HS_HPTXFSIZ_PTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host periodic TxFIFO depth */
    using OTG_HS_HPTXFSIZ_PTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF1_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF1_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF2_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF2_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF3_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF3_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF4_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF4_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF5_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF5_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF6_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF6_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF7_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF7_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_DIEPTXF8 register */
    using OTG_DIEPTXF8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address This field contains the memory start address for IN endpoint transmit FIFOx. The address must be aligned with a 32-bit memory location. */
    using OTG_DIEPTXF8_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 */
    using OTG_DIEPTXF8_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS Receive status debug read register (peripheral mode mode) */
    using OTG_HS_GRXSTSR_Device = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_GRXSTSR_Device_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_HS_GRXSTSR_Device_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_GRXSTSR_Device_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet status */
    using OTG_HS_GRXSTSR_Device_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using OTG_HS_GRXSTSR_Device_FRMNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS status read and pop register (peripheral mode) */
    using OTG_HS_GRXSTSP_Device = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_GRXSTSP_Device_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_HS_GRXSTSP_Device_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_GRXSTSP_Device_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet status */
    using OTG_HS_GRXSTSP_Device_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using OTG_HS_GRXSTSP_Device_FRMNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG core LPM configuration register */
    using OTG_HS_GLPMCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM support enable */
    using OTG_HS_GLPMCFG_LPMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM token acknowledge enable */
    using OTG_HS_GLPMCFG_LPMACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Best effort service latency */
    using OTG_HS_GLPMCFG_BESL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief bRemoteWake value */
    using OTG_HS_GLPMCFG_REMWAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L1 Shallow Sleep enable */
    using OTG_HS_GLPMCFG_L1SSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BESL threshold */
    using OTG_HS_GLPMCFG_BESLTHRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L1 deep sleep enable */
    using OTG_HS_GLPMCFG_L1DSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM response */
    using OTG_HS_GLPMCFG_LPMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port sleep status */
    using OTG_HS_GLPMCFG_SLPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sleep State Resume OK */
    using OTG_HS_GLPMCFG_L1RSMOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM Channel Index */
    using OTG_HS_GLPMCFG_LPMCHIDX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM retry count */
    using OTG_HS_GLPMCFG_LPMRCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Send LPM transaction */
    using OTG_HS_GLPMCFG_SNDLPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM retry count status */
    using OTG_HS_GLPMCFG_LPMRCNTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable best effort service latency */
    using OTG_HS_GLPMCFG_ENBESL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
