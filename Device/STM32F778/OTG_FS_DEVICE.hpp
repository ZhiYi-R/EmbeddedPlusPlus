/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F778_OTG_FS_DEVICE_HPP
#define EMBEDDED_PP_STM32F778_OTG_FS_DEVICE_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USB on the go full speed */
namespace STM32F778::OTG_FS_DEVICE {

    /** @brief OTG_FS device configuration register (OTG_FS_DCFG) */
    using OTG_FS_DCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device speed */
    using OTG_FS_DCFG_DSPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-zero-length status OUT handshake */
    using OTG_FS_DCFG_NZLSOHSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_FS_DCFG_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic frame interval */
    using OTG_FS_DCFG_PFIVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device control register (OTG_FS_DCTL) */
    using OTG_FS_DCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wakeup signaling */
    using OTG_FS_DCTL_RWUSIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Soft disconnect */
    using OTG_FS_DCTL_SDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global IN NAK status */
    using OTG_FS_DCTL_GINSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global OUT NAK status */
    using OTG_FS_DCTL_GONSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Test control */
    using OTG_FS_DCTL_TCTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set global IN NAK */
    using OTG_FS_DCTL_SGINAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear global IN NAK */
    using OTG_FS_DCTL_CGINAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set global OUT NAK */
    using OTG_FS_DCTL_SGONAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear global OUT NAK */
    using OTG_FS_DCTL_CGONAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power-on programming done */
    using OTG_FS_DCTL_POPRGDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device status register (OTG_FS_DSTS) */
    using OTG_FS_DSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend status */
    using OTG_FS_DSTS_SUSPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumerated speed */
    using OTG_FS_DSTS_ENUMSPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erratic error */
    using OTG_FS_DSTS_EERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number of the received SOF */
    using OTG_FS_DSTS_FNSOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK) */
    using OTG_FS_DIEPMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt mask */
    using OTG_FS_DIEPMSK_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt mask */
    using OTG_FS_DIEPMSK_EPDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition mask (Non-isochronous endpoints) */
    using OTG_FS_DIEPMSK_TOM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when TxFIFO empty mask */
    using OTG_FS_DIEPMSK_ITTXFEMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch mask */
    using OTG_FS_DIEPMSK_INEPNMM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective mask */
    using OTG_FS_DIEPMSK_INEPNEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK) */
    using OTG_FS_DOEPMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt mask */
    using OTG_FS_DOEPMSK_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt mask */
    using OTG_FS_DOEPMSK_EPDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done mask */
    using OTG_FS_DOEPMSK_STUPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled mask */
    using OTG_FS_DOEPMSK_OTEPDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device all endpoints interrupt register (OTG_FS_DAINT) */
    using OTG_FS_DAINT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint interrupt bits */
    using OTG_FS_DAINT_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoint interrupt bits */
    using OTG_FS_DAINT_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK) */
    using OTG_FS_DAINTMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN EP interrupt mask bits */
    using OTG_FS_DAINTMSK_IEPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoint interrupt bits */
    using OTG_FS_DAINTMSK_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device VBUS discharge time register */
    using OTG_FS_DVBUSDIS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device VBUS discharge time */
    using OTG_FS_DVBUSDIS_VBUSDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device VBUS pulsing time register */
    using OTG_FS_DVBUSPULSE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device VBUS pulsing time */
    using OTG_FS_DVBUSPULSE_DVBUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device IN endpoint FIFO empty interrupt mask register */
    using OTG_FS_DIEPEMPMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN EP Tx FIFO empty interrupt mask bits */
    using OTG_FS_DIEPEMPMSK_INEPTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) */
    using OTG_FS_DIEPCTL0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_FS_DIEPCTL0_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint */
    using OTG_FS_DIEPCTL0_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK status */
    using OTG_FS_DIEPCTL0_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_FS_DIEPCTL0_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake */
    using OTG_FS_DIEPCTL0_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TxFIFO number */
    using OTG_FS_DIEPCTL0_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK */
    using OTG_FS_DIEPCTL0_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK */
    using OTG_FS_DIEPCTL0_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable */
    using OTG_FS_DIEPCTL0_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable */
    using OTG_FS_DIEPCTL0_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device endpoint-1 control register */
    using OTG_FS_DIEPCTL1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPENA */
    using OTG_FS_DIEPCTL1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDIS */
    using OTG_FS_DIEPCTL1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SODDFRM/SD1PID */
    using OTG_FS_DIEPCTL1_SODDFRM_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SD0PID/SEVNFRM */
    using OTG_FS_DIEPCTL1_SD0PID_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAK */
    using OTG_FS_DIEPCTL1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNAK */
    using OTG_FS_DIEPCTL1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFNUM */
    using OTG_FS_DIEPCTL1_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stall */
    using OTG_FS_DIEPCTL1_Stall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPTYP */
    using OTG_FS_DIEPCTL1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAKSTS */
    using OTG_FS_DIEPCTL1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EONUM/DPID */
    using OTG_FS_DIEPCTL1_EONUM_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBAEP */
    using OTG_FS_DIEPCTL1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPSIZ */
    using OTG_FS_DIEPCTL1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device endpoint-2 control register */
    using OTG_FS_DIEPCTL2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPENA */
    using OTG_FS_DIEPCTL2_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDIS */
    using OTG_FS_DIEPCTL2_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SODDFRM */
    using OTG_FS_DIEPCTL2_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SD0PID/SEVNFRM */
    using OTG_FS_DIEPCTL2_SD0PID_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAK */
    using OTG_FS_DIEPCTL2_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNAK */
    using OTG_FS_DIEPCTL2_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFNUM */
    using OTG_FS_DIEPCTL2_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stall */
    using OTG_FS_DIEPCTL2_Stall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPTYP */
    using OTG_FS_DIEPCTL2_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAKSTS */
    using OTG_FS_DIEPCTL2_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EONUM/DPID */
    using OTG_FS_DIEPCTL2_EONUM_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBAEP */
    using OTG_FS_DIEPCTL2_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPSIZ */
    using OTG_FS_DIEPCTL2_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device endpoint-3 control register */
    using OTG_FS_DIEPCTL3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPENA */
    using OTG_FS_DIEPCTL3_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDIS */
    using OTG_FS_DIEPCTL3_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SODDFRM */
    using OTG_FS_DIEPCTL3_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SD0PID/SEVNFRM */
    using OTG_FS_DIEPCTL3_SD0PID_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAK */
    using OTG_FS_DIEPCTL3_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNAK */
    using OTG_FS_DIEPCTL3_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFNUM */
    using OTG_FS_DIEPCTL3_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stall */
    using OTG_FS_DIEPCTL3_Stall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPTYP */
    using OTG_FS_DIEPCTL3_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAKSTS */
    using OTG_FS_DIEPCTL3_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EONUM/DPID */
    using OTG_FS_DIEPCTL3_EONUM_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBAEP */
    using OTG_FS_DIEPCTL3_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPSIZ */
    using OTG_FS_DIEPCTL3_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-0 control register */
    using OTG_FS_DOEPCTL0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPENA */
    using OTG_FS_DOEPCTL0_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDIS */
    using OTG_FS_DOEPCTL0_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAK */
    using OTG_FS_DOEPCTL0_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNAK */
    using OTG_FS_DOEPCTL0_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stall */
    using OTG_FS_DOEPCTL0_Stall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNPM */
    using OTG_FS_DOEPCTL0_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPTYP */
    using OTG_FS_DOEPCTL0_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAKSTS */
    using OTG_FS_DOEPCTL0_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBAEP */
    using OTG_FS_DOEPCTL0_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPSIZ */
    using OTG_FS_DOEPCTL0_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-1 control register */
    using OTG_FS_DOEPCTL1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPENA */
    using OTG_FS_DOEPCTL1_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDIS */
    using OTG_FS_DOEPCTL1_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SODDFRM */
    using OTG_FS_DOEPCTL1_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SD0PID/SEVNFRM */
    using OTG_FS_DOEPCTL1_SD0PID_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAK */
    using OTG_FS_DOEPCTL1_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNAK */
    using OTG_FS_DOEPCTL1_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stall */
    using OTG_FS_DOEPCTL1_Stall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNPM */
    using OTG_FS_DOEPCTL1_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPTYP */
    using OTG_FS_DOEPCTL1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAKSTS */
    using OTG_FS_DOEPCTL1_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EONUM/DPID */
    using OTG_FS_DOEPCTL1_EONUM_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBAEP */
    using OTG_FS_DOEPCTL1_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPSIZ */
    using OTG_FS_DOEPCTL1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-2 control register */
    using OTG_FS_DOEPCTL2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x340, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPENA */
    using OTG_FS_DOEPCTL2_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDIS */
    using OTG_FS_DOEPCTL2_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SODDFRM */
    using OTG_FS_DOEPCTL2_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SD0PID/SEVNFRM */
    using OTG_FS_DOEPCTL2_SD0PID_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAK */
    using OTG_FS_DOEPCTL2_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNAK */
    using OTG_FS_DOEPCTL2_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stall */
    using OTG_FS_DOEPCTL2_Stall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNPM */
    using OTG_FS_DOEPCTL2_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPTYP */
    using OTG_FS_DOEPCTL2_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAKSTS */
    using OTG_FS_DOEPCTL2_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EONUM/DPID */
    using OTG_FS_DOEPCTL2_EONUM_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBAEP */
    using OTG_FS_DOEPCTL2_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPSIZ */
    using OTG_FS_DOEPCTL2_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-3 control register */
    using OTG_FS_DOEPCTL3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x360, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPENA */
    using OTG_FS_DOEPCTL3_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDIS */
    using OTG_FS_DOEPCTL3_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SODDFRM */
    using OTG_FS_DOEPCTL3_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SD0PID/SEVNFRM */
    using OTG_FS_DOEPCTL3_SD0PID_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAK */
    using OTG_FS_DOEPCTL3_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNAK */
    using OTG_FS_DOEPCTL3_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stall */
    using OTG_FS_DOEPCTL3_Stall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNPM */
    using OTG_FS_DOEPCTL3_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPTYP */
    using OTG_FS_DOEPCTL3_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAKSTS */
    using OTG_FS_DOEPCTL3_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EONUM/DPID */
    using OTG_FS_DOEPCTL3_EONUM_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBAEP */
    using OTG_FS_DOEPCTL3_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPSIZ */
    using OTG_FS_DOEPCTL3_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-x interrupt register */
    using OTG_FS_DIEPINT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFE */
    using OTG_FS_DIEPINT0_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INEPNE */
    using OTG_FS_DIEPINT0_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITTXFE */
    using OTG_FS_DIEPINT0_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TOC */
    using OTG_FS_DIEPINT0_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DIEPINT0_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DIEPINT0_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-1 interrupt register */
    using OTG_FS_DIEPINT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFE */
    using OTG_FS_DIEPINT1_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INEPNE */
    using OTG_FS_DIEPINT1_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITTXFE */
    using OTG_FS_DIEPINT1_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TOC */
    using OTG_FS_DIEPINT1_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DIEPINT1_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DIEPINT1_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-2 interrupt register */
    using OTG_FS_DIEPINT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFE */
    using OTG_FS_DIEPINT2_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INEPNE */
    using OTG_FS_DIEPINT2_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITTXFE */
    using OTG_FS_DIEPINT2_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TOC */
    using OTG_FS_DIEPINT2_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DIEPINT2_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DIEPINT2_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-3 interrupt register */
    using OTG_FS_DIEPINT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFE */
    using OTG_FS_DIEPINT3_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INEPNE */
    using OTG_FS_DIEPINT3_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITTXFE */
    using OTG_FS_DIEPINT3_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TOC */
    using OTG_FS_DIEPINT3_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DIEPINT3_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DIEPINT3_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-0 interrupt register */
    using OTG_FS_DOEPINT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B2BSTUP */
    using OTG_FS_DOEPINT0_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTEPDIS */
    using OTG_FS_DOEPINT0_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STUP */
    using OTG_FS_DOEPINT0_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DOEPINT0_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DOEPINT0_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-1 interrupt register */
    using OTG_FS_DOEPINT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x328, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B2BSTUP */
    using OTG_FS_DOEPINT1_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTEPDIS */
    using OTG_FS_DOEPINT1_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STUP */
    using OTG_FS_DOEPINT1_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DOEPINT1_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DOEPINT1_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-2 interrupt register */
    using OTG_FS_DOEPINT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x348, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B2BSTUP */
    using OTG_FS_DOEPINT2_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTEPDIS */
    using OTG_FS_DOEPINT2_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STUP */
    using OTG_FS_DOEPINT2_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DOEPINT2_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DOEPINT2_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-3 interrupt register */
    using OTG_FS_DOEPINT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x368, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B2BSTUP */
    using OTG_FS_DOEPINT3_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTEPDIS */
    using OTG_FS_DOEPINT3_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STUP */
    using OTG_FS_DOEPINT3_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DOEPINT3_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DOEPINT3_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-0 transfer size register */
    using OTG_FS_DIEPTSIZ0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DIEPTSIZ0_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DIEPTSIZ0_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device OUT endpoint-0 transfer size register */
    using OTG_FS_DOEPTSIZ0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP packet count */
    using OTG_FS_DOEPTSIZ0_STUPCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DOEPTSIZ0_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DOEPTSIZ0_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-1 transfer size register */
    using OTG_FS_DIEPTSIZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_FS_DIEPTSIZ1_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DIEPTSIZ1_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DIEPTSIZ1_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-2 transfer size register */
    using OTG_FS_DIEPTSIZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_FS_DIEPTSIZ2_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DIEPTSIZ2_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DIEPTSIZ2_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-3 transfer size register */
    using OTG_FS_DIEPTSIZ3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_FS_DIEPTSIZ3_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DIEPTSIZ3_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DIEPTSIZ3_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device IN endpoint transmit FIFO status register */
    using OTG_FS_DTXFSTS0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO space available */
    using OTG_FS_DTXFSTS0_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device IN endpoint transmit FIFO status register */
    using OTG_FS_DTXFSTS1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO space available */
    using OTG_FS_DTXFSTS1_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device IN endpoint transmit FIFO status register */
    using OTG_FS_DTXFSTS2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO space available */
    using OTG_FS_DTXFSTS2_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device IN endpoint transmit FIFO status register */
    using OTG_FS_DTXFSTS3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO space available */
    using OTG_FS_DTXFSTS3_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device OUT endpoint-1 transfer size register */
    using OTG_FS_DOEPTSIZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x330, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID/SETUP packet count */
    using OTG_FS_DOEPTSIZ1_RXDPID_STUPCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DOEPTSIZ1_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DOEPTSIZ1_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device OUT endpoint-2 transfer size register */
    using OTG_FS_DOEPTSIZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x350, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID/SETUP packet count */
    using OTG_FS_DOEPTSIZ2_RXDPID_STUPCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DOEPTSIZ2_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DOEPTSIZ2_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device OUT endpoint-3 transfer size register */
    using OTG_FS_DOEPTSIZ3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x370, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID/SETUP packet count */
    using OTG_FS_DOEPTSIZ3_RXDPID_STUPCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DOEPTSIZ3_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DOEPTSIZ3_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device endpoint-4 control register */
    using OTG_FS_DIEPCTL4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPENA */
    using OTG_FS_DIEPCTL4_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDIS */
    using OTG_FS_DIEPCTL4_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SODDFRM */
    using OTG_FS_DIEPCTL4_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SD0PID/SEVNFRM */
    using OTG_FS_DIEPCTL4_SD0PID_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAK */
    using OTG_FS_DIEPCTL4_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNAK */
    using OTG_FS_DIEPCTL4_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFNUM */
    using OTG_FS_DIEPCTL4_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stall */
    using OTG_FS_DIEPCTL4_Stall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPTYP */
    using OTG_FS_DIEPCTL4_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAKSTS */
    using OTG_FS_DIEPCTL4_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EONUM/DPID */
    using OTG_FS_DIEPCTL4_EONUM_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBAEP */
    using OTG_FS_DIEPCTL4_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPSIZ */
    using OTG_FS_DIEPCTL4_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-4 interrupt register */
    using OTG_FS_DIEPINT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFE */
    using OTG_FS_DIEPINT4_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INEPNE */
    using OTG_FS_DIEPINT4_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITTXFE */
    using OTG_FS_DIEPINT4_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TOC */
    using OTG_FS_DIEPINT4_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DIEPINT4_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DIEPINT4_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-4 transfer size register */
    using OTG_FS_DIEPTSIZ4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_FS_DIEPTSIZ4_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DIEPTSIZ4_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DIEPTSIZ4_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device IN endpoint transmit FIFO status register */
    using OTG_FS_DTXFSTS4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO space available */
    using OTG_FS_DTXFSTS4_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device endpoint-5 control register */
    using OTG_FS_DIEPCTL5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPENA */
    using OTG_FS_DIEPCTL5_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDIS */
    using OTG_FS_DIEPCTL5_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SODDFRM */
    using OTG_FS_DIEPCTL5_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SD0PID/SEVNFRM */
    using OTG_FS_DIEPCTL5_SD0PID_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAK */
    using OTG_FS_DIEPCTL5_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNAK */
    using OTG_FS_DIEPCTL5_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFNUM */
    using OTG_FS_DIEPCTL5_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stall */
    using OTG_FS_DIEPCTL5_Stall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPTYP */
    using OTG_FS_DIEPCTL5_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAKSTS */
    using OTG_FS_DIEPCTL5_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EONUM/DPID */
    using OTG_FS_DIEPCTL5_EONUM_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBAEP */
    using OTG_FS_DIEPCTL5_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPSIZ */
    using OTG_FS_DIEPCTL5_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-5 interrupt register */
    using OTG_FS_DIEPINT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFE */
    using OTG_FS_DIEPINT5_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INEPNE */
    using OTG_FS_DIEPINT5_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITTXFE */
    using OTG_FS_DIEPINT5_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TOC */
    using OTG_FS_DIEPINT5_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DIEPINT5_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DIEPINT5_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-5 transfer size register */
    using OTG_FS_DIEPTSIZ55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count */
    using OTG_FS_DIEPTSIZ55_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DIEPTSIZ55_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DIEPTSIZ55_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_FS device IN endpoint transmit FIFO status register */
    using OTG_FS_DTXFSTS55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO space available */
    using OTG_FS_DTXFSTS55_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-4 control register */
    using OTG_FS_DOEPCTL4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x378, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPENA */
    using OTG_FS_DOEPCTL4_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDIS */
    using OTG_FS_DOEPCTL4_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SODDFRM */
    using OTG_FS_DOEPCTL4_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SD0PID/SEVNFRM */
    using OTG_FS_DOEPCTL4_SD0PID_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAK */
    using OTG_FS_DOEPCTL4_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNAK */
    using OTG_FS_DOEPCTL4_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stall */
    using OTG_FS_DOEPCTL4_Stall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNPM */
    using OTG_FS_DOEPCTL4_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPTYP */
    using OTG_FS_DOEPCTL4_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAKSTS */
    using OTG_FS_DOEPCTL4_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EONUM/DPID */
    using OTG_FS_DOEPCTL4_EONUM_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBAEP */
    using OTG_FS_DOEPCTL4_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPSIZ */
    using OTG_FS_DOEPCTL4_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-4 interrupt register */
    using OTG_FS_DOEPINT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x380, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B2BSTUP */
    using OTG_FS_DOEPINT4_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTEPDIS */
    using OTG_FS_DOEPINT4_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STUP */
    using OTG_FS_DOEPINT4_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DOEPINT4_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DOEPINT4_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device OUT endpoint-4 transfer size register */
    using OTG_FS_DOEPTSIZ4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x388, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID/SETUP packet count */
    using OTG_FS_DOEPTSIZ4_RXDPID_STUPCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DOEPTSIZ4_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DOEPTSIZ4_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-5 control register */
    using OTG_FS_DOEPCTL5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x390, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPENA */
    using OTG_FS_DOEPCTL5_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDIS */
    using OTG_FS_DOEPCTL5_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SODDFRM */
    using OTG_FS_DOEPCTL5_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SD0PID/SEVNFRM */
    using OTG_FS_DOEPCTL5_SD0PID_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNAK */
    using OTG_FS_DOEPCTL5_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CNAK */
    using OTG_FS_DOEPCTL5_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stall */
    using OTG_FS_DOEPCTL5_Stall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNPM */
    using OTG_FS_DOEPCTL5_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPTYP */
    using OTG_FS_DOEPCTL5_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAKSTS */
    using OTG_FS_DOEPCTL5_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EONUM/DPID */
    using OTG_FS_DOEPCTL5_EONUM_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USBAEP */
    using OTG_FS_DOEPCTL5_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPSIZ */
    using OTG_FS_DOEPCTL5_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device endpoint-5 interrupt register */
    using OTG_FS_DOEPINT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x398, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B2BSTUP */
    using OTG_FS_DOEPINT5_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTEPDIS */
    using OTG_FS_DOEPINT5_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STUP */
    using OTG_FS_DOEPINT5_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPDISD */
    using OTG_FS_DOEPINT5_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XFRC */
    using OTG_FS_DOEPINT5_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device OUT endpoint-5 transfer size register */
    using OTG_FS_DOEPTSIZ5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID/SETUP packet count */
    using OTG_FS_DOEPTSIZ5_RXDPID_STUPCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_FS_DOEPTSIZ5_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_FS_DOEPTSIZ5_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
