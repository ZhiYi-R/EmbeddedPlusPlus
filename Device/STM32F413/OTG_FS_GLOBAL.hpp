/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F413_OTG_FS_GLOBAL_HPP
#define EMBEDDED_PP_STM32F413_OTG_FS_GLOBAL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USB on the go full speed */
namespace STM32F413::OTG_FS_GLOBAL {

    /** @brief OTG_FS control and status register (OTG_FS_GOTGCTL) */
    using FS_GOTGCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request success */
    using FS_GOTGCTL_SRQSCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request */
    using FS_GOTGCTL_SRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host negotiation success */
    using FS_GOTGCTL_HNGSCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HNP request */
    using FS_GOTGCTL_HNPRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host set HNP enable */
    using FS_GOTGCTL_HSHNPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device HNP enabled */
    using FS_GOTGCTL_DHNPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Connector ID status */
    using FS_GOTGCTL_CIDSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Long/short debounce time */
    using FS_GOTGCTL_DBCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A-session valid */
    using FS_GOTGCTL_ASVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B-session valid */
    using FS_GOTGCTL_BSVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS interrupt register (OTG_FS_GOTGINT) */
    using FS_GOTGINT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session end detected */
    using FS_GOTGINT_SEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request success status change */
    using FS_GOTGINT_SRSSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host negotiation success status change */
    using FS_GOTGINT_HNSSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host negotiation detected */
    using FS_GOTGINT_HNGDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A-device timeout change */
    using FS_GOTGINT_ADTOCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debounce done */
    using FS_GOTGINT_DBCDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS AHB configuration register (OTG_FS_GAHBCFG) */
    using FS_GAHBCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global interrupt mask */
    using FS_GAHBCFG_GINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TxFIFO empty level */
    using FS_GAHBCFG_TXFELVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic TxFIFO empty level */
    using FS_GAHBCFG_PTXFELVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS USB configuration register (OTG_FS_GUSBCFG) */
    using FS_GUSBCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FS timeout calibration */
    using FS_GUSBCFG_TOCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Full Speed serial transceiver select */
    using FS_GUSBCFG_PHYSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRP-capable */
    using FS_GUSBCFG_SRPCAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HNP-capable */
    using FS_GUSBCFG_HNPCAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB turnaround time */
    using FS_GUSBCFG_TRDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force host mode */
    using FS_GUSBCFG_FHMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force device mode */
    using FS_GUSBCFG_FDMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Corrupt Tx packet */
    using FS_GUSBCFG_CTXPKT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS reset register (OTG_FS_GRSTCTL) */
    using FS_GRSTCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Core soft reset */
    using FS_GRSTCTL_CSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HCLK soft reset */
    using FS_GRSTCTL_HSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host frame counter reset */
    using FS_GRSTCTL_FCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RxFIFO flush */
    using FS_GRSTCTL_RXFFLSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TxFIFO flush */
    using FS_GRSTCTL_TXFFLSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TxFIFO number */
    using FS_GRSTCTL_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB master idle */
    using FS_GRSTCTL_AHBIDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS core interrupt register (OTG_FS_GINTSTS) */
    using FS_GINTSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current mode of operation */
    using FS_GINTSTS_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mode mismatch interrupt */
    using FS_GINTSTS_MMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG interrupt */
    using FS_GINTSTS_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame */
    using FS_GINTSTS_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RxFIFO non-empty */
    using FS_GINTSTS_RXFLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic TxFIFO empty */
    using FS_GINTSTS_NPTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global IN non-periodic NAK effective */
    using FS_GINTSTS_GINAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global OUT NAK effective */
    using FS_GINTSTS_GOUTNAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early suspend */
    using FS_GINTSTS_ESUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB suspend */
    using FS_GINTSTS_USBSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB reset */
    using FS_GINTSTS_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumeration done */
    using FS_GINTSTS_ENUMDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Isochronous OUT packet dropped interrupt */
    using FS_GINTSTS_ISOODRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of periodic frame interrupt */
    using FS_GINTSTS_EOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint interrupt */
    using FS_GINTSTS_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoint interrupt */
    using FS_GINTSTS_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete isochronous IN transfer */
    using FS_GINTSTS_IISOIXFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode) */
    using FS_GINTSTS_IPXFR_INCOMPISOOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host port interrupt */
    using FS_GINTSTS_HPRTINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host channels interrupt */
    using FS_GINTSTS_HCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic TxFIFO empty */
    using FS_GINTSTS_PTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Connector ID status change */
    using FS_GINTSTS_CIDSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disconnect detected interrupt */
    using FS_GINTSTS_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request/new session detected interrupt */
    using FS_GINTSTS_SRQINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Resume/remote wakeup detected interrupt */
    using FS_GINTSTS_WKUPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS interrupt mask register (OTG_FS_GINTMSK) */
    using FS_GINTMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mode mismatch interrupt mask */
    using FS_GINTMSK_MMISM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG interrupt mask */
    using FS_GINTMSK_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame mask */
    using FS_GINTMSK_SOFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive FIFO non-empty mask */
    using FS_GINTMSK_RXFLVLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic TxFIFO empty mask */
    using FS_GINTMSK_NPTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global non-periodic IN NAK effective mask */
    using FS_GINTMSK_GINAKEFFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global OUT NAK effective mask */
    using FS_GINTMSK_GONAKEFFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early suspend mask */
    using FS_GINTMSK_ESUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB suspend mask */
    using FS_GINTMSK_USBSUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB reset mask */
    using FS_GINTMSK_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumeration done mask */
    using FS_GINTMSK_ENUMDNEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Isochronous OUT packet dropped interrupt mask */
    using FS_GINTMSK_ISOODRPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of periodic frame interrupt mask */
    using FS_GINTMSK_EOPFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint mismatch interrupt mask */
    using FS_GINTMSK_EPMISM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoints interrupt mask */
    using FS_GINTMSK_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoints interrupt mask */
    using FS_GINTMSK_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete isochronous IN transfer mask */
    using FS_GINTMSK_IISOIXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode) */
    using FS_GINTMSK_IPXFRM_IISOOXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host port interrupt mask */
    using FS_GINTMSK_PRTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host channels interrupt mask */
    using FS_GINTMSK_HCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic TxFIFO empty mask */
    using FS_GINTMSK_PTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Connector ID status change mask */
    using FS_GINTMSK_CIDSCHGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disconnect detected interrupt mask */
    using FS_GINTMSK_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request/new session detected interrupt mask */
    using FS_GINTMSK_SRQIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Resume/remote wakeup detected interrupt mask */
    using FS_GINTMSK_WUIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS Receive status debug read(Device mode) */
    using FS_GRXSTSR_Device = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using FS_GRXSTSR_Device_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using FS_GRXSTSR_Device_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using FS_GRXSTSR_Device_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet status */
    using FS_GRXSTSR_Device_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using FS_GRXSTSR_Device_FRMNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS Receive status debug read(Host mode) */
    using FS_GRXSTSR_Host = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using FS_GRXSTSR_Host_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using FS_GRXSTSR_Host_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using FS_GRXSTSR_Host_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet status */
    using FS_GRXSTSR_Host_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using FS_GRXSTSR_Host_FRMNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ) */
    using FS_GRXFSIZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RxFIFO depth */
    using FS_GRXFSIZ_RXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS non-periodic transmit FIFO size register (Device mode) */
    using FS_GNPTXFSIZ_Device = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 transmit RAM start address */
    using FS_GNPTXFSIZ_Device_TX0FSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 TxFIFO depth */
    using FS_GNPTXFSIZ_Device_TX0FD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS non-periodic transmit FIFO size register (Host mode) */
    using FS_GNPTXFSIZ_Host = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic transmit RAM start address */
    using FS_GNPTXFSIZ_Host_NPTXFSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic TxFIFO depth */
    using FS_GNPTXFSIZ_Host_NPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS) */
    using FS_GNPTXSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic TxFIFO space available */
    using FS_GNPTXSTS_NPTXFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic transmit request queue space available */
    using FS_GNPTXSTS_NPTQXSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Top of the non-periodic transmit request queue */
    using FS_GNPTXSTS_NPTXQTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS general core configuration register (OTG_FS_GCCFG) */
    using FS_GCCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCDET */
    using FS_GCCFG_DCDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PDET */
    using FS_GCCFG_PDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDET */
    using FS_GCCFG_SDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PS2DET */
    using FS_GCCFG_PS2DET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWRDWN */
    using FS_GCCFG_PWRDWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BCDEN */
    using FS_GCCFG_BCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCDEN */
    using FS_GCCFG_DCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PDEN */
    using FS_GCCFG_PDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDEN */
    using FS_GCCFG_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VBDEN */
    using FS_GCCFG_VBDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief core ID register */
    using FS_CID = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Product ID field */
    using FS_CID_PRODUCT_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ) */
    using FS_HPTXFSIZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host periodic TxFIFO start address */
    using FS_HPTXFSIZ_PTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host periodic TxFIFO depth */
    using FS_HPTXFSIZ_PTXFSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2) */
    using FS_DIEPTXF1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFO2 transmit RAM start address */
    using FS_DIEPTXF1_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using FS_DIEPTXF1_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3) */
    using FS_DIEPTXF2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFO3 transmit RAM start address */
    using FS_DIEPTXF2_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using FS_DIEPTXF2_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4) */
    using FS_DIEPTXF3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFO4 transmit RAM start address */
    using FS_DIEPTXF3_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using FS_DIEPTXF3_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
