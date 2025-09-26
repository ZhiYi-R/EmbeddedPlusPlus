/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F405_OTG_HS_HOST_HPP
#define EMBEDDED_PP_STM32F405_OTG_HS_HOST_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USB on the go high speed */
namespace STM32F405::OTG_HS_HOST {

    /** @brief OTG_HS host configuration register */
    using OTG_HS_HCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FS/LS PHY clock select */
    using OTG_HS_HCFG_FSLSPCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FS- and LS-only support */
    using OTG_HS_HCFG_FSLSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS Host frame interval register */
    using OTG_HS_HFIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame interval */
    using OTG_HS_HFIR_FRIVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reload control */
    using OTG_HS_HFIR_RLDCTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host frame number/frame time remaining register */
    using OTG_HS_HFNUM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using OTG_HS_HFNUM_FRNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame time remaining */
    using OTG_HS_HFNUM_FTREM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS_Host periodic transmit FIFO/queue status register */
    using OTG_HS_HPTXSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic transmit data FIFO space available */
    using OTG_HS_HPTXSTS_PTXFSAVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic transmit request queue space available */
    using OTG_HS_HPTXSTS_PTXQSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Top of the periodic transmit request queue */
    using OTG_HS_HPTXSTS_PTXQTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS Host all channels interrupt register */
    using OTG_HS_HAINT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel interrupts */
    using OTG_HS_HAINT_HAINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host all channels interrupt mask register */
    using OTG_HS_HAINTMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel interrupt mask */
    using OTG_HS_HAINTMSK_HAINTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host port control and status register */
    using OTG_HS_HPRT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port connect status */
    using OTG_HS_HPRT_PCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port connect detected */
    using OTG_HS_HPRT_PCDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port enable */
    using OTG_HS_HPRT_PENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port enable/disable change */
    using OTG_HS_HPRT_PENCHNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port overcurrent active */
    using OTG_HS_HPRT_POCA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port overcurrent change */
    using OTG_HS_HPRT_POCCHNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port resume */
    using OTG_HS_HPRT_PRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port suspend */
    using OTG_HS_HPRT_PSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port reset */
    using OTG_HS_HPRT_PRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port line status */
    using OTG_HS_HPRT_PLSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port power */
    using OTG_HS_HPRT_PPWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port test control */
    using OTG_HS_HPRT_PTCTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port speed */
    using OTG_HS_HPRT_PSPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-0 characteristics register */
    using OTG_HS_HCCHAR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR0_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR0_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR0_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR0_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR0_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR0_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR0_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR0_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR0_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR0_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-1 characteristics register */
    using OTG_HS_HCCHAR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR1_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR1_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR1_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR1_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR1_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR1_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR1_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR1_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-2 characteristics register */
    using OTG_HS_HCCHAR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR2_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR2_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR2_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR2_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR2_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR2_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR2_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR2_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR2_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR2_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-3 characteristics register */
    using OTG_HS_HCCHAR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR3_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR3_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR3_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR3_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR3_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR3_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR3_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR3_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR3_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR3_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-4 characteristics register */
    using OTG_HS_HCCHAR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR4_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR4_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR4_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR4_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR4_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR4_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR4_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR4_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR4_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR4_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-5 characteristics register */
    using OTG_HS_HCCHAR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR5_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR5_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR5_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR5_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR5_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR5_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR5_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR5_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR5_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR5_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-6 characteristics register */
    using OTG_HS_HCCHAR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR6_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR6_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR6_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR6_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR6_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR6_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR6_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR6_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR6_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR6_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-7 characteristics register */
    using OTG_HS_HCCHAR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR7_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR7_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR7_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR7_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR7_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR7_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR7_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR7_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR7_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR7_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-8 characteristics register */
    using OTG_HS_HCCHAR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR8_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR8_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR8_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR8_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR8_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR8_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR8_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR8_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR8_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR8_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-9 characteristics register */
    using OTG_HS_HCCHAR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR9_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR9_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR9_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR9_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR9_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR9_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR9_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR9_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR9_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR9_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-10 characteristics register */
    using OTG_HS_HCCHAR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR10_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR10_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR10_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR10_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR10_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR10_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR10_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR10_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR10_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR10_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-11 characteristics register */
    using OTG_HS_HCCHAR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR11_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR11_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR11_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR11_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR11_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR11_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR11_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR11_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR11_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR11_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-12 characteristics register */
    using OTG_HS_HCCHAR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR12_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR12_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR12_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR12_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR12_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR12_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR12_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR12_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR12_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR12_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-13 characteristics register */
    using OTG_HS_HCCHAR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR13_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR13_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR13_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR13_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR13_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR13_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR13_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR13_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR13_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR13_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-14 characteristics register */
    using OTG_HS_HCCHAR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR14_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR14_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR14_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR14_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR14_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR14_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR14_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR14_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR14_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR14_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-15 characteristics register */
    using OTG_HS_HCCHAR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size */
    using OTG_HS_HCCHAR15_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_HCCHAR15_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction */
    using OTG_HS_HCCHAR15_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-speed device */
    using OTG_HS_HCCHAR15_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type */
    using OTG_HS_HCCHAR15_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi Count (MC) / Error Count (EC) */
    using OTG_HS_HCCHAR15_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using OTG_HS_HCCHAR15_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame */
    using OTG_HS_HCCHAR15_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel disable */
    using OTG_HS_HCCHAR15_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable */
    using OTG_HS_HCCHAR15_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-0 split control register */
    using OTG_HS_HCSPLT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT0_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT0_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT0_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT0_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT0_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-1 split control register */
    using OTG_HS_HCSPLT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT1_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT1_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT1_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT1_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT1_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-2 split control register */
    using OTG_HS_HCSPLT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT2_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT2_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT2_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT2_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT2_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-3 split control register */
    using OTG_HS_HCSPLT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT3_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT3_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT3_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT3_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT3_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-4 split control register */
    using OTG_HS_HCSPLT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT4_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT4_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT4_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT4_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT4_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-5 split control register */
    using OTG_HS_HCSPLT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT5_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT5_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT5_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT5_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT5_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-6 split control register */
    using OTG_HS_HCSPLT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT6_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT6_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT6_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT6_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT6_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-7 split control register */
    using OTG_HS_HCSPLT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT7_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT7_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT7_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT7_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT7_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-8 split control register */
    using OTG_HS_HCSPLT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT8_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT8_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT8_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT8_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT8_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-9 split control register */
    using OTG_HS_HCSPLT9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT9_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT9_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT9_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT9_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT9_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-10 split control register */
    using OTG_HS_HCSPLT10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT10_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT10_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT10_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT10_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT10_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-11 split control register */
    using OTG_HS_HCSPLT11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT11_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT11_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT11_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT11_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT11_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-12 split control register */
    using OTG_HS_HCSPLT12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT12_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT12_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT12_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT12_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT12_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-13 split control register */
    using OTG_HS_HCSPLT13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT13_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT13_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT13_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT13_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT13_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-14 split control register */
    using OTG_HS_HCSPLT14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT14_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT14_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT14_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT14_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT14_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-15 split control register */
    using OTG_HS_HCSPLT15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address */
    using OTG_HS_HCSPLT15_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address */
    using OTG_HS_HCSPLT15_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XACTPOS */
    using OTG_HS_HCSPLT15_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do complete split */
    using OTG_HS_HCSPLT15_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable */
    using OTG_HS_HCSPLT15_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-11 interrupt register */
    using OTG_HS_HCINT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT0_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT0_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT0_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT0_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT0_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT0_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT0_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT0_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT0_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-1 interrupt register */
    using OTG_HS_HCINT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT1_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT1_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT1_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT1_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT1_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT1_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT1_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT1_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT1_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT1_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-2 interrupt register */
    using OTG_HS_HCINT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT2_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT2_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT2_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT2_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT2_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT2_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT2_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT2_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT2_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT2_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT2_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-3 interrupt register */
    using OTG_HS_HCINT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT3_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT3_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT3_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT3_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT3_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT3_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT3_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT3_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT3_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT3_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT3_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-4 interrupt register */
    using OTG_HS_HCINT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT4_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT4_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT4_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT4_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT4_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT4_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT4_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT4_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT4_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT4_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT4_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-5 interrupt register */
    using OTG_HS_HCINT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT5_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT5_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT5_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT5_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT5_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT5_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT5_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT5_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT5_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT5_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT5_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-6 interrupt register */
    using OTG_HS_HCINT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT6_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT6_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT6_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT6_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT6_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT6_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT6_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT6_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT6_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT6_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT6_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-7 interrupt register */
    using OTG_HS_HCINT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT7_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT7_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT7_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT7_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT7_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT7_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT7_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT7_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT7_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT7_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT7_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-8 interrupt register */
    using OTG_HS_HCINT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT8_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT8_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT8_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT8_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT8_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT8_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT8_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT8_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT8_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT8_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT8_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-9 interrupt register */
    using OTG_HS_HCINT9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT9_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT9_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT9_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT9_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT9_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT9_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT9_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT9_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT9_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT9_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT9_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-10 interrupt register */
    using OTG_HS_HCINT10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT10_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT10_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT10_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT10_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT10_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT10_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT10_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT10_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT10_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT10_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT10_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-11 interrupt register */
    using OTG_HS_HCINT11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x268, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT11_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT11_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT11_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT11_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT11_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT11_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT11_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT11_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT11_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT11_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT11_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-12 interrupt register */
    using OTG_HS_HCINT12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT12_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT12_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT12_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT12_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT12_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT12_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT12_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT12_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT12_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT12_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT12_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-13 interrupt register */
    using OTG_HS_HCINT13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT13_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT13_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT13_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT13_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT13_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT13_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT13_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT13_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT13_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT13_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT13_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-14 interrupt register */
    using OTG_HS_HCINT14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT14_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT14_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT14_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT14_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT14_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT14_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT14_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT14_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT14_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT14_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT14_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-15 interrupt register */
    using OTG_HS_HCINT15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed */
    using OTG_HS_HCINT15_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted */
    using OTG_HS_HCINT15_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINT15_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt */
    using OTG_HS_HCINT15_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt */
    using OTG_HS_HCINT15_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt */
    using OTG_HS_HCINT15_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Response received interrupt */
    using OTG_HS_HCINT15_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error */
    using OTG_HS_HCINT15_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error */
    using OTG_HS_HCINT15_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun */
    using OTG_HS_HCINT15_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error */
    using OTG_HS_HCINT15_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-11 interrupt mask register */
    using OTG_HS_HCINTMSK0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK0_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK0_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK0_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK0_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK0_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK0_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK0_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK0_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK0_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK0_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK0_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-1 interrupt mask register */
    using OTG_HS_HCINTMSK1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK1_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK1_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK1_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK1_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK1_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK1_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK1_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK1_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK1_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK1_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK1_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-2 interrupt mask register */
    using OTG_HS_HCINTMSK2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK2_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK2_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK2_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK2_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK2_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK2_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK2_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK2_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK2_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK2_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK2_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-3 interrupt mask register */
    using OTG_HS_HCINTMSK3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK3_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK3_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK3_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK3_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK3_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK3_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK3_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK3_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK3_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK3_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK3_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-4 interrupt mask register */
    using OTG_HS_HCINTMSK4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK4_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK4_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK4_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK4_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK4_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK4_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK4_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK4_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK4_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK4_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK4_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-5 interrupt mask register */
    using OTG_HS_HCINTMSK5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK5_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK5_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK5_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK5_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK5_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK5_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK5_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK5_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK5_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK5_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK5_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-6 interrupt mask register */
    using OTG_HS_HCINTMSK6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK6_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK6_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK6_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK6_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK6_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK6_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK6_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK6_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK6_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK6_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK6_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-7 interrupt mask register */
    using OTG_HS_HCINTMSK7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK7_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK7_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK7_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK7_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK7_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK7_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK7_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK7_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK7_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK7_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK7_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-8 interrupt mask register */
    using OTG_HS_HCINTMSK8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK8_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK8_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK8_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK8_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK8_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK8_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK8_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK8_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK8_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK8_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK8_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-9 interrupt mask register */
    using OTG_HS_HCINTMSK9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK9_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK9_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK9_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK9_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK9_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK9_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK9_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK9_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK9_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK9_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK9_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-10 interrupt mask register */
    using OTG_HS_HCINTMSK10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK10_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK10_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK10_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK10_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK10_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK10_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK10_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK10_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK10_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK10_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK10_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-11 interrupt mask register */
    using OTG_HS_HCINTMSK11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK11_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK11_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK11_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK11_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK11_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK11_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK11_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK11_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK11_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK11_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK11_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-12 interrupt mask register */
    using OTG_HS_HCINTMSK12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK12_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK12_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK12_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK12_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK12_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK12_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK12_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK12_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK12_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK12_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK12_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-13 interrupt mask register */
    using OTG_HS_HCINTMSK13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK13_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK13_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK13_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK13_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK13_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK13_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK13_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK13_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK13_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK13_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK13_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-14 interrupt mask register */
    using OTG_HS_HCINTMSK14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK14_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK14_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK14_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK14_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK14_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK14_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK14_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK14_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK14_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK14_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK14_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-15 interrupt mask register */
    using OTG_HS_HCINTMSK15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HS_HCINTMSK15_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted mask */
    using OTG_HS_HCINTMSK15_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error */
    using OTG_HS_HCINTMSK15_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt mask */
    using OTG_HS_HCINTMSK15_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt mask */
    using OTG_HS_HCINTMSK15_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt mask */
    using OTG_HS_HCINTMSK15_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief response received interrupt mask */
    using OTG_HS_HCINTMSK15_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error mask */
    using OTG_HS_HCINTMSK15_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error mask */
    using OTG_HS_HCINTMSK15_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun mask */
    using OTG_HS_HCINTMSK15_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error mask */
    using OTG_HS_HCINTMSK15_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-11 transfer size register */
    using OTG_HS_HCTSIZ0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ0_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ0_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ0_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-1 transfer size register */
    using OTG_HS_HCTSIZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ1_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ1_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ1_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-2 transfer size register */
    using OTG_HS_HCTSIZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ2_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ2_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ2_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-3 transfer size register */
    using OTG_HS_HCTSIZ3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ3_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ3_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ3_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-4 transfer size register */
    using OTG_HS_HCTSIZ4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ4_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ4_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ4_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-5 transfer size register */
    using OTG_HS_HCTSIZ5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ5_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ5_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ5_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-6 transfer size register */
    using OTG_HS_HCTSIZ6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ6_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ6_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ6_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-7 transfer size register */
    using OTG_HS_HCTSIZ7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ7_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ7_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ7_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-8 transfer size register */
    using OTG_HS_HCTSIZ8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ8_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ8_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ8_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-9 transfer size register */
    using OTG_HS_HCTSIZ9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ9_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ9_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ9_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-10 transfer size register */
    using OTG_HS_HCTSIZ10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ10_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ10_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ10_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-11 transfer size register */
    using OTG_HS_HCTSIZ11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ11_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ11_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ11_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-12 transfer size register */
    using OTG_HS_HCTSIZ12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ12_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ12_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ12_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-13 transfer size register */
    using OTG_HS_HCTSIZ13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ13_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ13_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ13_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-14 transfer size register */
    using OTG_HS_HCTSIZ14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ14_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ14_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ14_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-15 transfer size register */
    using OTG_HS_HCTSIZ15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size */
    using OTG_HS_HCTSIZ15_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count */
    using OTG_HS_HCTSIZ15_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_HCTSIZ15_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-0 DMA address register */
    using OTG_HS_HCDMA0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA0_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-1 DMA address register */
    using OTG_HS_HCDMA1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA1_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-2 DMA address register */
    using OTG_HS_HCDMA2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA2_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-3 DMA address register */
    using OTG_HS_HCDMA3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA3_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-4 DMA address register */
    using OTG_HS_HCDMA4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA4_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-5 DMA address register */
    using OTG_HS_HCDMA5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA5_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-6 DMA address register */
    using OTG_HS_HCDMA6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA6_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-7 DMA address register */
    using OTG_HS_HCDMA7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA7_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-8 DMA address register */
    using OTG_HS_HCDMA8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA8_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-9 DMA address register */
    using OTG_HS_HCDMA9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA9_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-10 DMA address register */
    using OTG_HS_HCDMA10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA10_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-11 DMA address register */
    using OTG_HS_HCDMA11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x274, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA11_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-12 DMA address register */
    using OTG_HS_HCDMA12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA12_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-13 DMA address register */
    using OTG_HS_HCDMA13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA13_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-14 DMA address register */
    using OTG_HS_HCDMA14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA14_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS host channel-15 DMA address register */
    using OTG_HS_HCDMA15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address */
    using OTG_HS_HCDMA15_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
