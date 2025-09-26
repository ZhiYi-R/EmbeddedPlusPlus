/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U545_USB_HPP
#define EMBEDDED_PP_STM32U545_USB_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USB full speed */
namespace STM32U545::USB {

    /** @brief USB endpoint/channel 0 register */
    using USB_CHEP0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel address */
    using USB_CHEP0R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using USB_CHEP0R_STATTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle, for transmission transfers */
    using USB_CHEP0R_DTOGTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Valid USB transaction transmitted */
    using USB_CHEP0R_VTTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel kind */
    using USB_CHEP0R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB type of transaction */
    using USB_CHEP0R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using USB_CHEP0R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using USB_CHEP0R_STATRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using USB_CHEP0R_DTOGRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB valid transaction received */
    using USB_CHEP0R_VTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP0R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP0R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low speed endpoint host with HUB only */
    using USB_CHEP0R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP0R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP0R_LS_EP_B_0x1 = 1;

    /** @brief Received error for an OUT/SETUP transaction */
    using USB_CHEP0R_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received error for an IN transaction */
    using USB_CHEP0R_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Three errors for an OUT or SETUP transaction */
    using USB_CHEP0R_THREE_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_TX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_TX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_TX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_TX_B_0x3 = 3;

    /** @brief Three errors for an IN transaction */
    using USB_CHEP0R_THREE_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_RX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_RX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_RX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_RX_B_0x3 = 3;

    /** @brief USB endpoint/channel 1 register */
    using USB_CHEP1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel address */
    using USB_CHEP1R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using USB_CHEP1R_STATTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle, for transmission transfers */
    using USB_CHEP1R_DTOGTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Valid USB transaction transmitted */
    using USB_CHEP1R_VTTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel kind */
    using USB_CHEP1R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB type of transaction */
    using USB_CHEP1R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using USB_CHEP1R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using USB_CHEP1R_STATRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using USB_CHEP1R_DTOGRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB valid transaction received */
    using USB_CHEP1R_VTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP1R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP1R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low speed endpoint host with HUB only */
    using USB_CHEP1R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP1R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP1R_LS_EP_B_0x1 = 1;

    /** @brief Received error for an OUT/SETUP transaction */
    using USB_CHEP1R_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received error for an IN transaction */
    using USB_CHEP1R_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Three errors for an OUT or SETUP transaction */
    using USB_CHEP1R_THREE_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_TX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_TX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_TX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_TX_B_0x3 = 3;

    /** @brief Three errors for an IN transaction */
    using USB_CHEP1R_THREE_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_RX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_RX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_RX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_RX_B_0x3 = 3;

    /** @brief USB endpoint/channel 2 register */
    using USB_CHEP2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel address */
    using USB_CHEP2R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using USB_CHEP2R_STATTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle, for transmission transfers */
    using USB_CHEP2R_DTOGTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Valid USB transaction transmitted */
    using USB_CHEP2R_VTTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel kind */
    using USB_CHEP2R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB type of transaction */
    using USB_CHEP2R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using USB_CHEP2R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using USB_CHEP2R_STATRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using USB_CHEP2R_DTOGRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB valid transaction received */
    using USB_CHEP2R_VTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP2R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP2R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low speed endpoint host with HUB only */
    using USB_CHEP2R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP2R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP2R_LS_EP_B_0x1 = 1;

    /** @brief Received error for an OUT/SETUP transaction */
    using USB_CHEP2R_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received error for an IN transaction */
    using USB_CHEP2R_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Three errors for an OUT or SETUP transaction */
    using USB_CHEP2R_THREE_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_TX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_TX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_TX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_TX_B_0x3 = 3;

    /** @brief Three errors for an IN transaction */
    using USB_CHEP2R_THREE_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_RX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_RX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_RX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_RX_B_0x3 = 3;

    /** @brief USB endpoint/channel 3 register */
    using USB_CHEP3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel address */
    using USB_CHEP3R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using USB_CHEP3R_STATTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle, for transmission transfers */
    using USB_CHEP3R_DTOGTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Valid USB transaction transmitted */
    using USB_CHEP3R_VTTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel kind */
    using USB_CHEP3R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB type of transaction */
    using USB_CHEP3R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using USB_CHEP3R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using USB_CHEP3R_STATRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using USB_CHEP3R_DTOGRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB valid transaction received */
    using USB_CHEP3R_VTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP3R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP3R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low speed endpoint host with HUB only */
    using USB_CHEP3R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP3R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP3R_LS_EP_B_0x1 = 1;

    /** @brief Received error for an OUT/SETUP transaction */
    using USB_CHEP3R_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received error for an IN transaction */
    using USB_CHEP3R_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Three errors for an OUT or SETUP transaction */
    using USB_CHEP3R_THREE_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_TX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_TX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_TX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_TX_B_0x3 = 3;

    /** @brief Three errors for an IN transaction */
    using USB_CHEP3R_THREE_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_RX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_RX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_RX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_RX_B_0x3 = 3;

    /** @brief USB endpoint/channel 4 register */
    using USB_CHEP4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel address */
    using USB_CHEP4R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using USB_CHEP4R_STATTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle, for transmission transfers */
    using USB_CHEP4R_DTOGTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Valid USB transaction transmitted */
    using USB_CHEP4R_VTTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel kind */
    using USB_CHEP4R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB type of transaction */
    using USB_CHEP4R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using USB_CHEP4R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using USB_CHEP4R_STATRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using USB_CHEP4R_DTOGRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB valid transaction received */
    using USB_CHEP4R_VTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP4R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP4R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low speed endpoint host with HUB only */
    using USB_CHEP4R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP4R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP4R_LS_EP_B_0x1 = 1;

    /** @brief Received error for an OUT/SETUP transaction */
    using USB_CHEP4R_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received error for an IN transaction */
    using USB_CHEP4R_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Three errors for an OUT or SETUP transaction */
    using USB_CHEP4R_THREE_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_TX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_TX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_TX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_TX_B_0x3 = 3;

    /** @brief Three errors for an IN transaction */
    using USB_CHEP4R_THREE_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_RX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_RX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_RX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_RX_B_0x3 = 3;

    /** @brief USB endpoint/channel 5 register */
    using USB_CHEP5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel address */
    using USB_CHEP5R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using USB_CHEP5R_STATTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle, for transmission transfers */
    using USB_CHEP5R_DTOGTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Valid USB transaction transmitted */
    using USB_CHEP5R_VTTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel kind */
    using USB_CHEP5R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB type of transaction */
    using USB_CHEP5R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using USB_CHEP5R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using USB_CHEP5R_STATRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using USB_CHEP5R_DTOGRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB valid transaction received */
    using USB_CHEP5R_VTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP5R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP5R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low speed endpoint host with HUB only */
    using USB_CHEP5R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP5R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP5R_LS_EP_B_0x1 = 1;

    /** @brief Received error for an OUT/SETUP transaction */
    using USB_CHEP5R_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received error for an IN transaction */
    using USB_CHEP5R_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Three errors for an OUT or SETUP transaction */
    using USB_CHEP5R_THREE_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_TX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_TX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_TX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_TX_B_0x3 = 3;

    /** @brief Three errors for an IN transaction */
    using USB_CHEP5R_THREE_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_RX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_RX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_RX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_RX_B_0x3 = 3;

    /** @brief USB endpoint/channel 6 register */
    using USB_CHEP6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel address */
    using USB_CHEP6R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using USB_CHEP6R_STATTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle, for transmission transfers */
    using USB_CHEP6R_DTOGTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Valid USB transaction transmitted */
    using USB_CHEP6R_VTTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel kind */
    using USB_CHEP6R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB type of transaction */
    using USB_CHEP6R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using USB_CHEP6R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using USB_CHEP6R_STATRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using USB_CHEP6R_DTOGRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB valid transaction received */
    using USB_CHEP6R_VTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP6R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP6R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low speed endpoint host with HUB only */
    using USB_CHEP6R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP6R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP6R_LS_EP_B_0x1 = 1;

    /** @brief Received error for an OUT/SETUP transaction */
    using USB_CHEP6R_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received error for an IN transaction */
    using USB_CHEP6R_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Three errors for an OUT or SETUP transaction */
    using USB_CHEP6R_THREE_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_TX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_TX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_TX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_TX_B_0x3 = 3;

    /** @brief Three errors for an IN transaction */
    using USB_CHEP6R_THREE_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_RX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_RX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_RX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_RX_B_0x3 = 3;

    /** @brief USB endpoint/channel 7 register */
    using USB_CHEP7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel address */
    using USB_CHEP7R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for transmission transfers */
    using USB_CHEP7R_STATTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle, for transmission transfers */
    using USB_CHEP7R_DTOGTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Valid USB transaction transmitted */
    using USB_CHEP7R_VTTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief endpoint/channel kind */
    using USB_CHEP7R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB type of transaction */
    using USB_CHEP7R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup transaction completed */
    using USB_CHEP7R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status bits, for reception transfers */
    using USB_CHEP7R_STATRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Toggle, for reception transfers */
    using USB_CHEP7R_DTOGRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB valid transaction received */
    using USB_CHEP7R_VTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP7R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host mode */
    using USB_CHEP7R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low speed endpoint host with HUB only */
    using USB_CHEP7R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP7R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP7R_LS_EP_B_0x1 = 1;

    /** @brief Received error for an OUT/SETUP transaction */
    using USB_CHEP7R_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received error for an IN transaction */
    using USB_CHEP7R_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Three errors for an OUT or SETUP transaction */
    using USB_CHEP7R_THREE_ERR_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_TX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_TX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_TX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_TX_B_0x3 = 3;

    /** @brief Three errors for an IN transaction */
    using USB_CHEP7R_THREE_ERR_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_RX_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_RX_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_RX_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_RX_B_0x3 = 3;

    /** @brief USB_CNTR register */
    using USB_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB Reset */
    using USB_CNTR_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_DEVICE_MODE: No effect (value: 0)
     *          - B_0x1_DEVICE_MODE: USB core is under reset (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t USB_CNTR_USBRST_B_0x0_DEVICE_MODE = 0;
        /** @brief USB core is under reset */
    constexpr std::uint32_t USB_CNTR_USBRST_B_0x1_DEVICE_MODE = 1;

    /** @brief Power down */
    using USB_CNTR_PDWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Exit power down. (value: 0)
     *          - B_0x1: Enter power down mode. (value: 1)
     */
        /** @brief Exit power down. */
    constexpr std::uint32_t USB_CNTR_PDWN_B_0x0 = 0;
        /** @brief Enter power down mode. */
    constexpr std::uint32_t USB_CNTR_PDWN_B_0x1 = 1;

    /** @brief Suspend state effective */
    using USB_CNTR_SUSPRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation (value: 0)
     *          - B_0x1: Suspend state (value: 1)
     */
        /** @brief Normal operation */
    constexpr std::uint32_t USB_CNTR_SUSPRDY_B_0x0 = 0;
        /** @brief Suspend state */
    constexpr std::uint32_t USB_CNTR_SUSPRDY_B_0x1 = 1;

    /** @brief Suspend state enable */
    using USB_CNTR_SUSPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_DEVICE_MODE: No effect. (value: 0)
     *          - B_0x1_DEVICE_MODE: Enter L1/L2 suspend (value: 1)
     */
        /** @brief No effect. */
    constexpr std::uint32_t USB_CNTR_SUSPEN_B_0x0_DEVICE_MODE = 0;
        /** @brief Enter L1/L2 suspend */
    constexpr std::uint32_t USB_CNTR_SUSPEN_B_0x1_DEVICE_MODE = 1;

    /** @brief L2 remote wakeup / resume driver */
    using USB_CNTR_L2RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Send L2 resume signaling to device (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t USB_CNTR_L2RES_B_0x0 = 0;
        /** @brief Send L2 resume signaling to device */
    constexpr std::uint32_t USB_CNTR_L2RES_B_0x1 = 1;

    /** @brief L1 remote wakeup / resume driver */
    using USB_CNTR_L1RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Send 50 us remote-wakeup signaling to host (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t USB_CNTR_L1RES_B_0x0 = 0;
        /** @brief Send 50 us remote-wakeup signaling to host */
    constexpr std::uint32_t USB_CNTR_L1RES_B_0x1 = 1;

    /** @brief LPM L1 state request interrupt mask */
    using USB_CNTR_L1REQM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPM L1 state request (L1REQ) interrupt disabled. (value: 0)
     *          - B_0x1: L1REQ interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief LPM L1 state request (L1REQ) interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_L1REQM_B_0x0 = 0;
        /** @brief L1REQ interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_L1REQM_B_0x1 = 1;

    /** @brief Expected start of frame interrupt mask */
    using USB_CNTR_ESOFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Expected start of frame (ESOF) interrupt disabled. (value: 0)
     *          - B_0x1: ESOF interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief Expected start of frame (ESOF) interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_ESOFM_B_0x0 = 0;
        /** @brief ESOF interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_ESOFM_B_0x1 = 1;

    /** @brief Start of frame interrupt mask */
    using USB_CNTR_SOFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SOF interrupt disabled. (value: 0)
     *          - B_0x1: SOF interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief SOF interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_SOFM_B_0x0 = 0;
        /** @brief SOF interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_SOFM_B_0x1 = 1;

    /** @brief USB reset request (Device mode) or device connect/disconnect (Host mode) interrupt mask */
    using USB_CNTR_RST_DCONM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RESET interrupt disabled. (value: 0)
     *          - B_0x1: RESET interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief RESET interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_RST_DCONM_B_0x0 = 0;
        /** @brief RESET interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_RST_DCONM_B_0x1 = 1;

    /** @brief Suspend mode interrupt mask */
    using USB_CNTR_SUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Suspend mode request (SUSP) interrupt disabled. (value: 0)
     *          - B_0x1: SUSP interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief Suspend mode request (SUSP) interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_SUSPM_B_0x0 = 0;
        /** @brief SUSP interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_SUSPM_B_0x1 = 1;

    /** @brief Wakeup interrupt mask */
    using USB_CNTR_WKUPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP interrupt disabled. (value: 0)
     *          - B_0x1: WKUP interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief WKUP interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_WKUPM_B_0x0 = 0;
        /** @brief WKUP interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_WKUPM_B_0x1 = 1;

    /** @brief Error interrupt mask */
    using USB_CNTR_ERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ERR interrupt disabled. (value: 0)
     *          - B_0x1: ERR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief ERR interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_ERRM_B_0x0 = 0;
        /** @brief ERR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_ERRM_B_0x1 = 1;

    /** @brief Packet memory area over / underrun interrupt mask */
    using USB_CNTR_PMAOVRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PMAOVR interrupt disabled. (value: 0)
     *          - B_0x1: PMAOVR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief PMAOVR interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_PMAOVRM_B_0x0 = 0;
        /** @brief PMAOVR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_PMAOVRM_B_0x1 = 1;

    /** @brief Correct transfer interrupt mask */
    using USB_CNTR_CTRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Correct transfer (CTR) interrupt disabled. (value: 0)
     *          - B_0x1: CTR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief Correct transfer (CTR) interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_CTRM_B_0x0 = 0;
        /** @brief CTR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_CTRM_B_0x1 = 1;

    /** @brief 512 byte threshold interrupt mask */
    using USB_CNTR_THR512M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 512 byte threshold interrupt disabled (value: 0)
     *          - B_0x1: 512 byte threshold interrupt enabled (value: 1)
     */
        /** @brief 512 byte threshold interrupt disabled */
    constexpr std::uint32_t USB_CNTR_THR512M_B_0x0 = 0;
        /** @brief 512 byte threshold interrupt enabled */
    constexpr std::uint32_t USB_CNTR_THR512M_B_0x1 = 1;

    /** @brief Device disconnection mask */
    using USB_CNTR_DDISCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device disconnection interrupt disabled (value: 0)
     *          - B_0x1: Device disconnection interrupt enabled (value: 1)
     */
        /** @brief Device disconnection interrupt disabled */
    constexpr std::uint32_t USB_CNTR_DDISCM_B_0x0 = 0;
        /** @brief Device disconnection interrupt enabled */
    constexpr std::uint32_t USB_CNTR_DDISCM_B_0x1 = 1;

    /** @brief HOST mode */
    using USB_CNTR_HOST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB Device function (value: 0)
     *          - B_0x1: USB host function (value: 1)
     */
        /** @brief USB Device function */
    constexpr std::uint32_t USB_CNTR_HOST_B_0x0 = 0;
        /** @brief USB host function */
    constexpr std::uint32_t USB_CNTR_HOST_B_0x1 = 1;

    /** @brief USB interrupt status register */
    using USB_ISTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device Endpoint / host channel identification number */
    using USB_ISTR_IDN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction of transaction */
    using USB_ISTR_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM L1 state request */
    using USB_ISTR_L1REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Expected start of frame */
    using USB_ISTR_ESOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame */
    using USB_ISTR_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB reset request (Device mode) or device connect/disconnect (Host mode) */
    using USB_ISTR_RST_DCON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend mode request */
    using USB_ISTR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup */
    using USB_ISTR_WKUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error */
    using USB_ISTR_ERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet memory area over / underrun */
    using USB_ISTR_PMAOVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Completed transfer in host mode */
    using USB_ISTR_CTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 512 byte threshold interrupt */
    using USB_ISTR_THR512 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device connection */
    using USB_ISTR_DDISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device connection status */
    using USB_ISTR_DCON_STAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No device connected (value: 0)
     *          - B_0x1: FS or LS device connected to the host (value: 1)
     */
        /** @brief No device connected */
    constexpr std::uint32_t USB_ISTR_DCON_STAT_B_0x0 = 0;
        /** @brief FS or LS device connected to the host */
    constexpr std::uint32_t USB_ISTR_DCON_STAT_B_0x1 = 1;

    /** @brief Low speed device connected */
    using USB_ISTR_LS_DCON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB frame number register */
    using USB_FNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using USB_FNR_FN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lost SOF */
    using USB_FNR_LSOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Locked */
    using USB_FNR_LCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive dataline status */
    using USB_FNR_RXDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data + line status */
    using USB_FNR_RXDP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB_DADDR */
    using USB_DADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device address */
    using USB_DADDR_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable function */
    using USB_DADDR_EF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB_LPMCSR */
    using USB_LPMCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM support enable */
    using USB_LPMCSR_LPMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM token acknowledge enable */
    using USB_LPMCSR_LPMACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the valid LPM token is NYET. (value: 0)
     *          - B_0x1: the valid LPM token is ACK. (value: 1)
     */
        /** @brief the valid LPM token is NYET. */
    constexpr std::uint32_t USB_LPMCSR_LPMACK_B_0x0 = 0;
        /** @brief the valid LPM token is ACK. */
    constexpr std::uint32_t USB_LPMCSR_LPMACK_B_0x1 = 1;

    /** @brief bRemoteWake value */
    using USB_LPMCSR_REMWAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BESL value */
    using USB_LPMCSR_BESL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB_BCDR */
    using USB_BCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Battery charging detector (BCD) enable */
    using USB_BCDR_BCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data contact detection (DCD) mode enable */
    using USB_BCDR_DCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Primary detection (PD) mode enable */
    using USB_BCDR_PDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secondary detection (SD) mode enable */
    using USB_BCDR_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data contact detection (DCD) status */
    using USB_BCDR_DCDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data lines contact not detected. (value: 0)
     *          - B_0x1: data lines contact detected. (value: 1)
     */
        /** @brief data lines contact not detected. */
    constexpr std::uint32_t USB_BCDR_DCDET_B_0x0 = 0;
        /** @brief data lines contact detected. */
    constexpr std::uint32_t USB_BCDR_DCDET_B_0x1 = 1;

    /** @brief Primary detection (PD) status */
    using USB_BCDR_PDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no BCD support detected (connected to SDP or proprietary device). (value: 0)
     *          - B_0x1: BCD support detected (connected to ACA, CDP or DCP). (value: 1)
     */
        /** @brief no BCD support detected (connected to SDP or proprietary device). */
    constexpr std::uint32_t USB_BCDR_PDET_B_0x0 = 0;
        /** @brief BCD support detected (connected to ACA, CDP or DCP). */
    constexpr std::uint32_t USB_BCDR_PDET_B_0x1 = 1;

    /** @brief Secondary detection (SD) status */
    using USB_BCDR_SDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CDP detected. (value: 0)
     *          - B_0x1: DCP detected. (value: 1)
     */
        /** @brief CDP detected. */
    constexpr std::uint32_t USB_BCDR_SDET_B_0x0 = 0;
        /** @brief DCP detected. */
    constexpr std::uint32_t USB_BCDR_SDET_B_0x1 = 1;

    /** @brief DM pull-up detection status */
    using USB_BCDR_PS2DET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal port detected (connected to SDP, ACA, CDP or DCP). (value: 0)
     *          - B_0x1: PS2 port or proprietary charger detected. (value: 1)
     */
        /** @brief Normal port detected (connected to SDP, ACA, CDP or DCP). */
    constexpr std::uint32_t USB_BCDR_PS2DET_B_0x0 = 0;
        /** @brief PS2 port or proprietary charger detected. */
    constexpr std::uint32_t USB_BCDR_PS2DET_B_0x1 = 1;

    /** @brief DP pull-up / DPDM pull-down */
    using USB_BCDR_DPPU_DPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
