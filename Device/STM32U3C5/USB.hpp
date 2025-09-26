/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3C5_USB_HPP
#define EMBEDDED_PP_STM32U3C5_USB_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USB Address block */
namespace STM32U3C5::USB {

    /** @brief USB endpoint/channel 0 register */
    using USB_CHEP0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode Software must write in this field the 4-bit address used to identify the transactions directed to this endpoint. A value must be written before enabling the corresponding endpoint. - Host mode Software must write in this field the 4-bit address used to identify the channel addressed by the host transaction. */
    using USB_CHEP0R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain the information about the endpoint status, listed in less than xe6 []/>. */
    using USB_CHEP0R_STATTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all transmission requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for transmission. (value: 3)
     */
        /** @brief DISABLED: all transmission requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP0R_STATTx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP0R_STATTx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. */
    constexpr std::uint32_t USB_CHEP0R_STATTx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for transmission. */
    constexpr std::uint32_t USB_CHEP0R_STATTx_B_0x3 = 3;

    /** @brief If the endpoint/channel is non-isochronous, this bit contains the required value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be transmitted. Hardware toggles this bit when the ACK handshake is received from the USB host, following a data packet transmission. If the endpoint/channel is defined as a control one, hardware sets this bit to 1 at the reception of a SETUP PID addressed to this endpoint (in device mode) or when a SETUP transaction is acknowledged by the device (in host mode). If the endpoint/channel is using the double buffer feature, this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used to support packet buffer swapping since no data toggling is used for this sort of endpoints and only DATA0 packet are transmitted (refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet transmission, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint/channel is not a control one) or to force a specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGTx remains unchanged, while writing 1 makes the bit value to toggle. This bit is read/write but it can only be toggled by writing 1. */
    using USB_CHEP0R_DTOGTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an IN transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in the USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written. - Host mode Same as VTRx behavior but for USB OUT and SETUP transactions. */
    using USB_CHEP0R_VTTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The meaning of this bit depends on the endpoint/channel type configured by the UTYPE bits. less than xe5 []/> summarizes the different meanings. DBL_BUF: This bit is set by the software to enable the double-buffering feature for this bulk endpoint. The usage of double-buffered bulk endpoints is explained in less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>. STATUS_OUT: This bit is set by the software to indicate that a status out transaction is expected: in this case all OUT transactions containing more than zero data bytes are answered 'STALL' instead of 'ACK'. This bit may be used to improve the robustness of the application to protocol errors during control transfers and its usage is intended for control endpoints only. When STATUS_OUT is reset, OUT transactions can have any number of bytes, as required. */
    using USB_CHEP0R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits configure the behavior of this endpoint/channel as described in less than xe4 []/>. Channel0/Endpoint0 must always be a control endpoint/channel and each USB function must have at least one control endpoint/channel which has address 0, but there may be other control channels/endpoints if required. Only control channels/endpoints handle SETUP transactions, which are ignored by endpoints of other kinds. SETUP transactions cannot be answered with NAK or STALL. If a control endpoint/channel is defined as NAK, the USB peripheral does not answer, simulating a receive error, in the receive direction when a SETUP transaction is received. If the control endpoint/channel is defined as STALL in the receive direction, then the SETUP packet is accepted anyway, transferring data and issuing the CTR interrupt. The reception of OUT transactions is handled in the normal way, even if the endpoint/channel is a control one. Bulk and interrupt endpoints have very similar behavior and they differ only in the special feature available using the EPKIND configuration bit. The usage of isochronous channels/endpoints is explained in less than xe2 [Isochronous_transfers_in_Device_mode]/> 00: BULK-EPKIND meaning : DBL_BUF 01: CONTROL-EPKIND meaning :STATUS_OUT 10: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint 11: INTERRUPT-EPKIND meaning : Not used */
    using USB_CHEP0R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BULK-EPKIND meaning : DBL_BUF (value: 0)
     *          - B_0x1: CONTROL-EPKIND meaning :STATUS_OUT (value: 1)
     *          - B_0x2: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint (value: 2)
     *          - B_0x3: INTERRUPT-EPKIND meaning : Not used (value: 3)
     */
        /** @brief BULK-EPKIND meaning : DBL_BUF */
    constexpr std::uint32_t USB_CHEP0R_UTYPE_B_0x0 = 0;
        /** @brief CONTROL-EPKIND meaning :STATUS_OUT */
    constexpr std::uint32_t USB_CHEP0R_UTYPE_B_0x1 = 1;
        /** @brief ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint */
    constexpr std::uint32_t USB_CHEP0R_UTYPE_B_0x2 = 2;
        /** @brief INTERRUPT-EPKIND meaning : Not used */
    constexpr std::uint32_t USB_CHEP0R_UTYPE_B_0x3 = 3;

    /** @brief - Device mode This bit is read-only and it is set by the hardware when the last completed transaction is a SETUP. This bit changes its value only for control endpoints. It must be examined, in the case of a successful receive transaction (VTRx event), to determine the type of transaction occurred. To protect the interrupt service routine from the changes in SETUP bits due to next incoming tokens, this bit is kept frozen while VTRx bit is at 1; its state changes when VTRx is at 0. This bit is read-only. - Host mode This bit is set by the software to send a SETUP transaction on a control endpoint. This bit changes its value only for control endpoints. It is cleared by hardware when the SETUP transaction is acknowledged and VTTx interrupt generated. */
    using USB_CHEP0R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain information about the endpoint status, which are listed in less than xe3 []/>. */
    using USB_CHEP0R_STATRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all reception requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for reception. (value: 3)
     */
        /** @brief DISABLED: all reception requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP0R_STATRx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP0R_STATRx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. */
    constexpr std::uint32_t USB_CHEP0R_STATRx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for reception. */
    constexpr std::uint32_t USB_CHEP0R_STATRx_B_0x3 = 3;

    /** @brief If the endpoint/channel is not isochronous, this bit contains the expected value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be received. Hardware toggles this bit, when the ACK handshake is sent following a data packet reception having a matching data PID value; if the endpoint is defined as a control one, hardware clears this bit at the reception of a SETUP PID received from host (in device mode), while it sets this bit to 1 when SETUP transaction is acknowledged by device (in host mode). If the endpoint/channel is using the double-buffering feature this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used only to support packet buffer swapping for data transmission since no data toggling is used for this kind of channels/endpoints and only DATA0 packet are transmitted (Refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet reception, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint is not a control one) or to force specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGRx remains unchanged, while writing 1 makes the bit value toggle. This bit is read/write but it can be only toggled by writing 1. - A transaction ended with a NAK sets this bit and NAK answer is reported to application reading the NAK state from the STATRx field of this register. One NAKed transaction keeps pending and is automatically retried by the host at the next frame, or the host can immediately retry by resetting STATRx state to VALID. - A transaction ended by STALL handshake sets this bit and the STALL answer is reported to application reading the STALL state from the STATRx field of this register. Host application should consequently disable the channel and re-enumerate. - A transaction ended with ACK handshake sets this bit - A transaction ended with error sets this bit. */
    using USB_CHEP0R_DTOGRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an OUT/SETUP transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. The type of occurred transaction, OUT or SETUP, can be determined from the SETUP bit described below. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written, writing 1 has no effect. - Host mode This bit is set by the hardware when an IN transaction is successfully completed on this channel. The software can only clear this bit. If the CTRM bit in USB_CNTR register is set a generic interrupt condition is generated together with the channel related flag, which is always activated. If double buffering is disabled, ACK answer is reported by application reading the DISABLE state from the STATRx field of this register. Host application should read received data from USBRAM and re-arm the channel by writing VALID to the STATRx field of this register. If double buffering is enabled, ACK answer is reported by application reading VALID state from the STATRx field of this register. Host application should read received data from USBRAM and toggle the DTOGTx bit of this register. Errors can be seen via the bits ERR_Rx (host mode only). This bit is read/write but only 0 can be written, writing 1 has no effect. */
    using USB_CHEP0R_VTRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode Device address assigned to the endpoint during the enumeration process. */
    using USB_CHEP0R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when a device responds with a NAK. Software can use this bit to monitor the number of NAKs received from a device. */
    using USB_CHEP0R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the software to send an LS transaction to the corresponding endpoint. 0: Full speed endpoint 1: Low speed endpoint */
    using USB_CHEP0R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP0R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP0R_LS_EP_B_0x1 = 1;

    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an OUT or SETUP transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP0R_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an IN transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP0R_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an OUT transaction. THREE_ERR_Tx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP0R_THREE_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_Tx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_Tx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_Tx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_Tx_B_0x3 = 3;

    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an IN transaction. THREE_ERR_Rx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP0R_THREE_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_Rx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_Rx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_Rx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP0R_THREE_ERR_Rx_B_0x3 = 3;

    /** @brief USB endpoint/channel 1 register */
    using USB_CHEP1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode Software must write in this field the 4-bit address used to identify the transactions directed to this endpoint. A value must be written before enabling the corresponding endpoint. - Host mode Software must write in this field the 4-bit address used to identify the channel addressed by the host transaction. */
    using USB_CHEP1R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain the information about the endpoint status, listed in less than xe6 []/>. */
    using USB_CHEP1R_STATTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all transmission requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for transmission. (value: 3)
     */
        /** @brief DISABLED: all transmission requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP1R_STATTx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP1R_STATTx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. */
    constexpr std::uint32_t USB_CHEP1R_STATTx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for transmission. */
    constexpr std::uint32_t USB_CHEP1R_STATTx_B_0x3 = 3;

    /** @brief If the endpoint/channel is non-isochronous, this bit contains the required value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be transmitted. Hardware toggles this bit when the ACK handshake is received from the USB host, following a data packet transmission. If the endpoint/channel is defined as a control one, hardware sets this bit to 1 at the reception of a SETUP PID addressed to this endpoint (in device mode) or when a SETUP transaction is acknowledged by the device (in host mode). If the endpoint/channel is using the double buffer feature, this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used to support packet buffer swapping since no data toggling is used for this sort of endpoints and only DATA0 packet are transmitted (refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet transmission, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint/channel is not a control one) or to force a specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGTx remains unchanged, while writing 1 makes the bit value to toggle. This bit is read/write but it can only be toggled by writing 1. */
    using USB_CHEP1R_DTOGTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an IN transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in the USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written. - Host mode Same as VTRx behavior but for USB OUT and SETUP transactions. */
    using USB_CHEP1R_VTTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The meaning of this bit depends on the endpoint/channel type configured by the UTYPE bits. less than xe5 []/> summarizes the different meanings. DBL_BUF: This bit is set by the software to enable the double-buffering feature for this bulk endpoint. The usage of double-buffered bulk endpoints is explained in less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>. STATUS_OUT: This bit is set by the software to indicate that a status out transaction is expected: in this case all OUT transactions containing more than zero data bytes are answered 'STALL' instead of 'ACK'. This bit may be used to improve the robustness of the application to protocol errors during control transfers and its usage is intended for control endpoints only. When STATUS_OUT is reset, OUT transactions can have any number of bytes, as required. */
    using USB_CHEP1R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits configure the behavior of this endpoint/channel as described in less than xe4 []/>. Channel0/Endpoint0 must always be a control endpoint/channel and each USB function must have at least one control endpoint/channel which has address 0, but there may be other control channels/endpoints if required. Only control channels/endpoints handle SETUP transactions, which are ignored by endpoints of other kinds. SETUP transactions cannot be answered with NAK or STALL. If a control endpoint/channel is defined as NAK, the USB peripheral does not answer, simulating a receive error, in the receive direction when a SETUP transaction is received. If the control endpoint/channel is defined as STALL in the receive direction, then the SETUP packet is accepted anyway, transferring data and issuing the CTR interrupt. The reception of OUT transactions is handled in the normal way, even if the endpoint/channel is a control one. Bulk and interrupt endpoints have very similar behavior and they differ only in the special feature available using the EPKIND configuration bit. The usage of isochronous channels/endpoints is explained in less than xe2 [Isochronous_transfers_in_Device_mode]/> 00: BULK-EPKIND meaning : DBL_BUF 01: CONTROL-EPKIND meaning :STATUS_OUT 10: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint 11: INTERRUPT-EPKIND meaning : Not used */
    using USB_CHEP1R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BULK-EPKIND meaning : DBL_BUF (value: 0)
     *          - B_0x1: CONTROL-EPKIND meaning :STATUS_OUT (value: 1)
     *          - B_0x2: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint (value: 2)
     *          - B_0x3: INTERRUPT-EPKIND meaning : Not used (value: 3)
     */
        /** @brief BULK-EPKIND meaning : DBL_BUF */
    constexpr std::uint32_t USB_CHEP1R_UTYPE_B_0x0 = 0;
        /** @brief CONTROL-EPKIND meaning :STATUS_OUT */
    constexpr std::uint32_t USB_CHEP1R_UTYPE_B_0x1 = 1;
        /** @brief ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint */
    constexpr std::uint32_t USB_CHEP1R_UTYPE_B_0x2 = 2;
        /** @brief INTERRUPT-EPKIND meaning : Not used */
    constexpr std::uint32_t USB_CHEP1R_UTYPE_B_0x3 = 3;

    /** @brief - Device mode This bit is read-only and it is set by the hardware when the last completed transaction is a SETUP. This bit changes its value only for control endpoints. It must be examined, in the case of a successful receive transaction (VTRx event), to determine the type of transaction occurred. To protect the interrupt service routine from the changes in SETUP bits due to next incoming tokens, this bit is kept frozen while VTRx bit is at 1; its state changes when VTRx is at 0. This bit is read-only. - Host mode This bit is set by the software to send a SETUP transaction on a control endpoint. This bit changes its value only for control endpoints. It is cleared by hardware when the SETUP transaction is acknowledged and VTTx interrupt generated. */
    using USB_CHEP1R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain information about the endpoint status, which are listed in less than xe3 []/>. */
    using USB_CHEP1R_STATRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all reception requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for reception. (value: 3)
     */
        /** @brief DISABLED: all reception requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP1R_STATRx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP1R_STATRx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. */
    constexpr std::uint32_t USB_CHEP1R_STATRx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for reception. */
    constexpr std::uint32_t USB_CHEP1R_STATRx_B_0x3 = 3;

    /** @brief If the endpoint/channel is not isochronous, this bit contains the expected value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be received. Hardware toggles this bit, when the ACK handshake is sent following a data packet reception having a matching data PID value; if the endpoint is defined as a control one, hardware clears this bit at the reception of a SETUP PID received from host (in device mode), while it sets this bit to 1 when SETUP transaction is acknowledged by device (in host mode). If the endpoint/channel is using the double-buffering feature this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used only to support packet buffer swapping for data transmission since no data toggling is used for this kind of channels/endpoints and only DATA0 packet are transmitted (Refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet reception, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint is not a control one) or to force specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGRx remains unchanged, while writing 1 makes the bit value toggle. This bit is read/write but it can be only toggled by writing 1. - A transaction ended with a NAK sets this bit and NAK answer is reported to application reading the NAK state from the STATRx field of this register. One NAKed transaction keeps pending and is automatically retried by the host at the next frame, or the host can immediately retry by resetting STATRx state to VALID. - A transaction ended by STALL handshake sets this bit and the STALL answer is reported to application reading the STALL state from the STATRx field of this register. Host application should consequently disable the channel and re-enumerate. - A transaction ended with ACK handshake sets this bit - A transaction ended with error sets this bit. */
    using USB_CHEP1R_DTOGRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an OUT/SETUP transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. The type of occurred transaction, OUT or SETUP, can be determined from the SETUP bit described below. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written, writing 1 has no effect. - Host mode This bit is set by the hardware when an IN transaction is successfully completed on this channel. The software can only clear this bit. If the CTRM bit in USB_CNTR register is set a generic interrupt condition is generated together with the channel related flag, which is always activated. If double buffering is disabled, ACK answer is reported by application reading the DISABLE state from the STATRx field of this register. Host application should read received data from USBRAM and re-arm the channel by writing VALID to the STATRx field of this register. If double buffering is enabled, ACK answer is reported by application reading VALID state from the STATRx field of this register. Host application should read received data from USBRAM and toggle the DTOGTx bit of this register. Errors can be seen via the bits ERR_Rx (host mode only). This bit is read/write but only 0 can be written, writing 1 has no effect. */
    using USB_CHEP1R_VTRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode Device address assigned to the endpoint during the enumeration process. */
    using USB_CHEP1R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when a device responds with a NAK. Software can use this bit to monitor the number of NAKs received from a device. */
    using USB_CHEP1R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the software to send an LS transaction to the corresponding endpoint. 0: Full speed endpoint 1: Low speed endpoint */
    using USB_CHEP1R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP1R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP1R_LS_EP_B_0x1 = 1;

    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an OUT or SETUP transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP1R_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an IN transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP1R_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an OUT transaction. THREE_ERR_Tx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP1R_THREE_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_Tx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_Tx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_Tx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_Tx_B_0x3 = 3;

    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an IN transaction. THREE_ERR_Rx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP1R_THREE_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_Rx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_Rx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_Rx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP1R_THREE_ERR_Rx_B_0x3 = 3;

    /** @brief USB endpoint/channel 2 register */
    using USB_CHEP2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode Software must write in this field the 4-bit address used to identify the transactions directed to this endpoint. A value must be written before enabling the corresponding endpoint. - Host mode Software must write in this field the 4-bit address used to identify the channel addressed by the host transaction. */
    using USB_CHEP2R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain the information about the endpoint status, listed in less than xe6 []/>. */
    using USB_CHEP2R_STATTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all transmission requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for transmission. (value: 3)
     */
        /** @brief DISABLED: all transmission requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP2R_STATTx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP2R_STATTx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. */
    constexpr std::uint32_t USB_CHEP2R_STATTx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for transmission. */
    constexpr std::uint32_t USB_CHEP2R_STATTx_B_0x3 = 3;

    /** @brief If the endpoint/channel is non-isochronous, this bit contains the required value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be transmitted. Hardware toggles this bit when the ACK handshake is received from the USB host, following a data packet transmission. If the endpoint/channel is defined as a control one, hardware sets this bit to 1 at the reception of a SETUP PID addressed to this endpoint (in device mode) or when a SETUP transaction is acknowledged by the device (in host mode). If the endpoint/channel is using the double buffer feature, this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used to support packet buffer swapping since no data toggling is used for this sort of endpoints and only DATA0 packet are transmitted (refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet transmission, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint/channel is not a control one) or to force a specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGTx remains unchanged, while writing 1 makes the bit value to toggle. This bit is read/write but it can only be toggled by writing 1. */
    using USB_CHEP2R_DTOGTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an IN transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in the USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written. - Host mode Same as VTRx behavior but for USB OUT and SETUP transactions. */
    using USB_CHEP2R_VTTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The meaning of this bit depends on the endpoint/channel type configured by the UTYPE bits. less than xe5 []/> summarizes the different meanings. DBL_BUF: This bit is set by the software to enable the double-buffering feature for this bulk endpoint. The usage of double-buffered bulk endpoints is explained in less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>. STATUS_OUT: This bit is set by the software to indicate that a status out transaction is expected: in this case all OUT transactions containing more than zero data bytes are answered 'STALL' instead of 'ACK'. This bit may be used to improve the robustness of the application to protocol errors during control transfers and its usage is intended for control endpoints only. When STATUS_OUT is reset, OUT transactions can have any number of bytes, as required. */
    using USB_CHEP2R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits configure the behavior of this endpoint/channel as described in less than xe4 []/>. Channel0/Endpoint0 must always be a control endpoint/channel and each USB function must have at least one control endpoint/channel which has address 0, but there may be other control channels/endpoints if required. Only control channels/endpoints handle SETUP transactions, which are ignored by endpoints of other kinds. SETUP transactions cannot be answered with NAK or STALL. If a control endpoint/channel is defined as NAK, the USB peripheral does not answer, simulating a receive error, in the receive direction when a SETUP transaction is received. If the control endpoint/channel is defined as STALL in the receive direction, then the SETUP packet is accepted anyway, transferring data and issuing the CTR interrupt. The reception of OUT transactions is handled in the normal way, even if the endpoint/channel is a control one. Bulk and interrupt endpoints have very similar behavior and they differ only in the special feature available using the EPKIND configuration bit. The usage of isochronous channels/endpoints is explained in less than xe2 [Isochronous_transfers_in_Device_mode]/> 00: BULK-EPKIND meaning : DBL_BUF 01: CONTROL-EPKIND meaning :STATUS_OUT 10: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint 11: INTERRUPT-EPKIND meaning : Not used */
    using USB_CHEP2R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BULK-EPKIND meaning : DBL_BUF (value: 0)
     *          - B_0x1: CONTROL-EPKIND meaning :STATUS_OUT (value: 1)
     *          - B_0x2: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint (value: 2)
     *          - B_0x3: INTERRUPT-EPKIND meaning : Not used (value: 3)
     */
        /** @brief BULK-EPKIND meaning : DBL_BUF */
    constexpr std::uint32_t USB_CHEP2R_UTYPE_B_0x0 = 0;
        /** @brief CONTROL-EPKIND meaning :STATUS_OUT */
    constexpr std::uint32_t USB_CHEP2R_UTYPE_B_0x1 = 1;
        /** @brief ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint */
    constexpr std::uint32_t USB_CHEP2R_UTYPE_B_0x2 = 2;
        /** @brief INTERRUPT-EPKIND meaning : Not used */
    constexpr std::uint32_t USB_CHEP2R_UTYPE_B_0x3 = 3;

    /** @brief - Device mode This bit is read-only and it is set by the hardware when the last completed transaction is a SETUP. This bit changes its value only for control endpoints. It must be examined, in the case of a successful receive transaction (VTRx event), to determine the type of transaction occurred. To protect the interrupt service routine from the changes in SETUP bits due to next incoming tokens, this bit is kept frozen while VTRx bit is at 1; its state changes when VTRx is at 0. This bit is read-only. - Host mode This bit is set by the software to send a SETUP transaction on a control endpoint. This bit changes its value only for control endpoints. It is cleared by hardware when the SETUP transaction is acknowledged and VTTx interrupt generated. */
    using USB_CHEP2R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain information about the endpoint status, which are listed in less than xe3 []/>. */
    using USB_CHEP2R_STATRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all reception requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for reception. (value: 3)
     */
        /** @brief DISABLED: all reception requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP2R_STATRx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP2R_STATRx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. */
    constexpr std::uint32_t USB_CHEP2R_STATRx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for reception. */
    constexpr std::uint32_t USB_CHEP2R_STATRx_B_0x3 = 3;

    /** @brief If the endpoint/channel is not isochronous, this bit contains the expected value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be received. Hardware toggles this bit, when the ACK handshake is sent following a data packet reception having a matching data PID value; if the endpoint is defined as a control one, hardware clears this bit at the reception of a SETUP PID received from host (in device mode), while it sets this bit to 1 when SETUP transaction is acknowledged by device (in host mode). If the endpoint/channel is using the double-buffering feature this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used only to support packet buffer swapping for data transmission since no data toggling is used for this kind of channels/endpoints and only DATA0 packet are transmitted (Refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet reception, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint is not a control one) or to force specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGRx remains unchanged, while writing 1 makes the bit value toggle. This bit is read/write but it can be only toggled by writing 1. - A transaction ended with a NAK sets this bit and NAK answer is reported to application reading the NAK state from the STATRx field of this register. One NAKed transaction keeps pending and is automatically retried by the host at the next frame, or the host can immediately retry by resetting STATRx state to VALID. - A transaction ended by STALL handshake sets this bit and the STALL answer is reported to application reading the STALL state from the STATRx field of this register. Host application should consequently disable the channel and re-enumerate. - A transaction ended with ACK handshake sets this bit - A transaction ended with error sets this bit. */
    using USB_CHEP2R_DTOGRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an OUT/SETUP transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. The type of occurred transaction, OUT or SETUP, can be determined from the SETUP bit described below. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written, writing 1 has no effect. - Host mode This bit is set by the hardware when an IN transaction is successfully completed on this channel. The software can only clear this bit. If the CTRM bit in USB_CNTR register is set a generic interrupt condition is generated together with the channel related flag, which is always activated. If double buffering is disabled, ACK answer is reported by application reading the DISABLE state from the STATRx field of this register. Host application should read received data from USBRAM and re-arm the channel by writing VALID to the STATRx field of this register. If double buffering is enabled, ACK answer is reported by application reading VALID state from the STATRx field of this register. Host application should read received data from USBRAM and toggle the DTOGTx bit of this register. Errors can be seen via the bits ERR_Rx (host mode only). This bit is read/write but only 0 can be written, writing 1 has no effect. */
    using USB_CHEP2R_VTRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode Device address assigned to the endpoint during the enumeration process. */
    using USB_CHEP2R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when a device responds with a NAK. Software can use this bit to monitor the number of NAKs received from a device. */
    using USB_CHEP2R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the software to send an LS transaction to the corresponding endpoint. 0: Full speed endpoint 1: Low speed endpoint */
    using USB_CHEP2R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP2R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP2R_LS_EP_B_0x1 = 1;

    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an OUT or SETUP transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP2R_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an IN transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP2R_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an OUT transaction. THREE_ERR_Tx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP2R_THREE_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_Tx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_Tx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_Tx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_Tx_B_0x3 = 3;

    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an IN transaction. THREE_ERR_Rx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP2R_THREE_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_Rx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_Rx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_Rx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP2R_THREE_ERR_Rx_B_0x3 = 3;

    /** @brief USB endpoint/channel 3 register */
    using USB_CHEP3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode Software must write in this field the 4-bit address used to identify the transactions directed to this endpoint. A value must be written before enabling the corresponding endpoint. - Host mode Software must write in this field the 4-bit address used to identify the channel addressed by the host transaction. */
    using USB_CHEP3R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain the information about the endpoint status, listed in less than xe6 []/>. */
    using USB_CHEP3R_STATTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all transmission requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for transmission. (value: 3)
     */
        /** @brief DISABLED: all transmission requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP3R_STATTx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP3R_STATTx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. */
    constexpr std::uint32_t USB_CHEP3R_STATTx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for transmission. */
    constexpr std::uint32_t USB_CHEP3R_STATTx_B_0x3 = 3;

    /** @brief If the endpoint/channel is non-isochronous, this bit contains the required value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be transmitted. Hardware toggles this bit when the ACK handshake is received from the USB host, following a data packet transmission. If the endpoint/channel is defined as a control one, hardware sets this bit to 1 at the reception of a SETUP PID addressed to this endpoint (in device mode) or when a SETUP transaction is acknowledged by the device (in host mode). If the endpoint/channel is using the double buffer feature, this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used to support packet buffer swapping since no data toggling is used for this sort of endpoints and only DATA0 packet are transmitted (refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet transmission, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint/channel is not a control one) or to force a specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGTx remains unchanged, while writing 1 makes the bit value to toggle. This bit is read/write but it can only be toggled by writing 1. */
    using USB_CHEP3R_DTOGTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an IN transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in the USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written. - Host mode Same as VTRx behavior but for USB OUT and SETUP transactions. */
    using USB_CHEP3R_VTTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The meaning of this bit depends on the endpoint/channel type configured by the UTYPE bits. less than xe5 []/> summarizes the different meanings. DBL_BUF: This bit is set by the software to enable the double-buffering feature for this bulk endpoint. The usage of double-buffered bulk endpoints is explained in less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>. STATUS_OUT: This bit is set by the software to indicate that a status out transaction is expected: in this case all OUT transactions containing more than zero data bytes are answered 'STALL' instead of 'ACK'. This bit may be used to improve the robustness of the application to protocol errors during control transfers and its usage is intended for control endpoints only. When STATUS_OUT is reset, OUT transactions can have any number of bytes, as required. */
    using USB_CHEP3R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits configure the behavior of this endpoint/channel as described in less than xe4 []/>. Channel0/Endpoint0 must always be a control endpoint/channel and each USB function must have at least one control endpoint/channel which has address 0, but there may be other control channels/endpoints if required. Only control channels/endpoints handle SETUP transactions, which are ignored by endpoints of other kinds. SETUP transactions cannot be answered with NAK or STALL. If a control endpoint/channel is defined as NAK, the USB peripheral does not answer, simulating a receive error, in the receive direction when a SETUP transaction is received. If the control endpoint/channel is defined as STALL in the receive direction, then the SETUP packet is accepted anyway, transferring data and issuing the CTR interrupt. The reception of OUT transactions is handled in the normal way, even if the endpoint/channel is a control one. Bulk and interrupt endpoints have very similar behavior and they differ only in the special feature available using the EPKIND configuration bit. The usage of isochronous channels/endpoints is explained in less than xe2 [Isochronous_transfers_in_Device_mode]/> 00: BULK-EPKIND meaning : DBL_BUF 01: CONTROL-EPKIND meaning :STATUS_OUT 10: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint 11: INTERRUPT-EPKIND meaning : Not used */
    using USB_CHEP3R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BULK-EPKIND meaning : DBL_BUF (value: 0)
     *          - B_0x1: CONTROL-EPKIND meaning :STATUS_OUT (value: 1)
     *          - B_0x2: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint (value: 2)
     *          - B_0x3: INTERRUPT-EPKIND meaning : Not used (value: 3)
     */
        /** @brief BULK-EPKIND meaning : DBL_BUF */
    constexpr std::uint32_t USB_CHEP3R_UTYPE_B_0x0 = 0;
        /** @brief CONTROL-EPKIND meaning :STATUS_OUT */
    constexpr std::uint32_t USB_CHEP3R_UTYPE_B_0x1 = 1;
        /** @brief ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint */
    constexpr std::uint32_t USB_CHEP3R_UTYPE_B_0x2 = 2;
        /** @brief INTERRUPT-EPKIND meaning : Not used */
    constexpr std::uint32_t USB_CHEP3R_UTYPE_B_0x3 = 3;

    /** @brief - Device mode This bit is read-only and it is set by the hardware when the last completed transaction is a SETUP. This bit changes its value only for control endpoints. It must be examined, in the case of a successful receive transaction (VTRx event), to determine the type of transaction occurred. To protect the interrupt service routine from the changes in SETUP bits due to next incoming tokens, this bit is kept frozen while VTRx bit is at 1; its state changes when VTRx is at 0. This bit is read-only. - Host mode This bit is set by the software to send a SETUP transaction on a control endpoint. This bit changes its value only for control endpoints. It is cleared by hardware when the SETUP transaction is acknowledged and VTTx interrupt generated. */
    using USB_CHEP3R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain information about the endpoint status, which are listed in less than xe3 []/>. */
    using USB_CHEP3R_STATRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all reception requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for reception. (value: 3)
     */
        /** @brief DISABLED: all reception requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP3R_STATRx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP3R_STATRx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. */
    constexpr std::uint32_t USB_CHEP3R_STATRx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for reception. */
    constexpr std::uint32_t USB_CHEP3R_STATRx_B_0x3 = 3;

    /** @brief If the endpoint/channel is not isochronous, this bit contains the expected value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be received. Hardware toggles this bit, when the ACK handshake is sent following a data packet reception having a matching data PID value; if the endpoint is defined as a control one, hardware clears this bit at the reception of a SETUP PID received from host (in device mode), while it sets this bit to 1 when SETUP transaction is acknowledged by device (in host mode). If the endpoint/channel is using the double-buffering feature this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used only to support packet buffer swapping for data transmission since no data toggling is used for this kind of channels/endpoints and only DATA0 packet are transmitted (Refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet reception, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint is not a control one) or to force specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGRx remains unchanged, while writing 1 makes the bit value toggle. This bit is read/write but it can be only toggled by writing 1. - A transaction ended with a NAK sets this bit and NAK answer is reported to application reading the NAK state from the STATRx field of this register. One NAKed transaction keeps pending and is automatically retried by the host at the next frame, or the host can immediately retry by resetting STATRx state to VALID. - A transaction ended by STALL handshake sets this bit and the STALL answer is reported to application reading the STALL state from the STATRx field of this register. Host application should consequently disable the channel and re-enumerate. - A transaction ended with ACK handshake sets this bit - A transaction ended with error sets this bit. */
    using USB_CHEP3R_DTOGRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an OUT/SETUP transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. The type of occurred transaction, OUT or SETUP, can be determined from the SETUP bit described below. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written, writing 1 has no effect. - Host mode This bit is set by the hardware when an IN transaction is successfully completed on this channel. The software can only clear this bit. If the CTRM bit in USB_CNTR register is set a generic interrupt condition is generated together with the channel related flag, which is always activated. If double buffering is disabled, ACK answer is reported by application reading the DISABLE state from the STATRx field of this register. Host application should read received data from USBRAM and re-arm the channel by writing VALID to the STATRx field of this register. If double buffering is enabled, ACK answer is reported by application reading VALID state from the STATRx field of this register. Host application should read received data from USBRAM and toggle the DTOGTx bit of this register. Errors can be seen via the bits ERR_Rx (host mode only). This bit is read/write but only 0 can be written, writing 1 has no effect. */
    using USB_CHEP3R_VTRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode Device address assigned to the endpoint during the enumeration process. */
    using USB_CHEP3R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when a device responds with a NAK. Software can use this bit to monitor the number of NAKs received from a device. */
    using USB_CHEP3R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the software to send an LS transaction to the corresponding endpoint. 0: Full speed endpoint 1: Low speed endpoint */
    using USB_CHEP3R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP3R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP3R_LS_EP_B_0x1 = 1;

    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an OUT or SETUP transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP3R_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an IN transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP3R_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an OUT transaction. THREE_ERR_Tx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP3R_THREE_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_Tx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_Tx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_Tx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_Tx_B_0x3 = 3;

    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an IN transaction. THREE_ERR_Rx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP3R_THREE_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_Rx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_Rx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_Rx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP3R_THREE_ERR_Rx_B_0x3 = 3;

    /** @brief USB endpoint/channel 4 register */
    using USB_CHEP4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode Software must write in this field the 4-bit address used to identify the transactions directed to this endpoint. A value must be written before enabling the corresponding endpoint. - Host mode Software must write in this field the 4-bit address used to identify the channel addressed by the host transaction. */
    using USB_CHEP4R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain the information about the endpoint status, listed in less than xe6 []/>. */
    using USB_CHEP4R_STATTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all transmission requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for transmission. (value: 3)
     */
        /** @brief DISABLED: all transmission requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP4R_STATTx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP4R_STATTx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. */
    constexpr std::uint32_t USB_CHEP4R_STATTx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for transmission. */
    constexpr std::uint32_t USB_CHEP4R_STATTx_B_0x3 = 3;

    /** @brief If the endpoint/channel is non-isochronous, this bit contains the required value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be transmitted. Hardware toggles this bit when the ACK handshake is received from the USB host, following a data packet transmission. If the endpoint/channel is defined as a control one, hardware sets this bit to 1 at the reception of a SETUP PID addressed to this endpoint (in device mode) or when a SETUP transaction is acknowledged by the device (in host mode). If the endpoint/channel is using the double buffer feature, this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used to support packet buffer swapping since no data toggling is used for this sort of endpoints and only DATA0 packet are transmitted (refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet transmission, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint/channel is not a control one) or to force a specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGTx remains unchanged, while writing 1 makes the bit value to toggle. This bit is read/write but it can only be toggled by writing 1. */
    using USB_CHEP4R_DTOGTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an IN transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in the USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written. - Host mode Same as VTRx behavior but for USB OUT and SETUP transactions. */
    using USB_CHEP4R_VTTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The meaning of this bit depends on the endpoint/channel type configured by the UTYPE bits. less than xe5 []/> summarizes the different meanings. DBL_BUF: This bit is set by the software to enable the double-buffering feature for this bulk endpoint. The usage of double-buffered bulk endpoints is explained in less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>. STATUS_OUT: This bit is set by the software to indicate that a status out transaction is expected: in this case all OUT transactions containing more than zero data bytes are answered 'STALL' instead of 'ACK'. This bit may be used to improve the robustness of the application to protocol errors during control transfers and its usage is intended for control endpoints only. When STATUS_OUT is reset, OUT transactions can have any number of bytes, as required. */
    using USB_CHEP4R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits configure the behavior of this endpoint/channel as described in less than xe4 []/>. Channel0/Endpoint0 must always be a control endpoint/channel and each USB function must have at least one control endpoint/channel which has address 0, but there may be other control channels/endpoints if required. Only control channels/endpoints handle SETUP transactions, which are ignored by endpoints of other kinds. SETUP transactions cannot be answered with NAK or STALL. If a control endpoint/channel is defined as NAK, the USB peripheral does not answer, simulating a receive error, in the receive direction when a SETUP transaction is received. If the control endpoint/channel is defined as STALL in the receive direction, then the SETUP packet is accepted anyway, transferring data and issuing the CTR interrupt. The reception of OUT transactions is handled in the normal way, even if the endpoint/channel is a control one. Bulk and interrupt endpoints have very similar behavior and they differ only in the special feature available using the EPKIND configuration bit. The usage of isochronous channels/endpoints is explained in less than xe2 [Isochronous_transfers_in_Device_mode]/> 00: BULK-EPKIND meaning : DBL_BUF 01: CONTROL-EPKIND meaning :STATUS_OUT 10: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint 11: INTERRUPT-EPKIND meaning : Not used */
    using USB_CHEP4R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BULK-EPKIND meaning : DBL_BUF (value: 0)
     *          - B_0x1: CONTROL-EPKIND meaning :STATUS_OUT (value: 1)
     *          - B_0x2: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint (value: 2)
     *          - B_0x3: INTERRUPT-EPKIND meaning : Not used (value: 3)
     */
        /** @brief BULK-EPKIND meaning : DBL_BUF */
    constexpr std::uint32_t USB_CHEP4R_UTYPE_B_0x0 = 0;
        /** @brief CONTROL-EPKIND meaning :STATUS_OUT */
    constexpr std::uint32_t USB_CHEP4R_UTYPE_B_0x1 = 1;
        /** @brief ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint */
    constexpr std::uint32_t USB_CHEP4R_UTYPE_B_0x2 = 2;
        /** @brief INTERRUPT-EPKIND meaning : Not used */
    constexpr std::uint32_t USB_CHEP4R_UTYPE_B_0x3 = 3;

    /** @brief - Device mode This bit is read-only and it is set by the hardware when the last completed transaction is a SETUP. This bit changes its value only for control endpoints. It must be examined, in the case of a successful receive transaction (VTRx event), to determine the type of transaction occurred. To protect the interrupt service routine from the changes in SETUP bits due to next incoming tokens, this bit is kept frozen while VTRx bit is at 1; its state changes when VTRx is at 0. This bit is read-only. - Host mode This bit is set by the software to send a SETUP transaction on a control endpoint. This bit changes its value only for control endpoints. It is cleared by hardware when the SETUP transaction is acknowledged and VTTx interrupt generated. */
    using USB_CHEP4R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain information about the endpoint status, which are listed in less than xe3 []/>. */
    using USB_CHEP4R_STATRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all reception requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for reception. (value: 3)
     */
        /** @brief DISABLED: all reception requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP4R_STATRx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP4R_STATRx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. */
    constexpr std::uint32_t USB_CHEP4R_STATRx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for reception. */
    constexpr std::uint32_t USB_CHEP4R_STATRx_B_0x3 = 3;

    /** @brief If the endpoint/channel is not isochronous, this bit contains the expected value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be received. Hardware toggles this bit, when the ACK handshake is sent following a data packet reception having a matching data PID value; if the endpoint is defined as a control one, hardware clears this bit at the reception of a SETUP PID received from host (in device mode), while it sets this bit to 1 when SETUP transaction is acknowledged by device (in host mode). If the endpoint/channel is using the double-buffering feature this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used only to support packet buffer swapping for data transmission since no data toggling is used for this kind of channels/endpoints and only DATA0 packet are transmitted (Refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet reception, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint is not a control one) or to force specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGRx remains unchanged, while writing 1 makes the bit value toggle. This bit is read/write but it can be only toggled by writing 1. - A transaction ended with a NAK sets this bit and NAK answer is reported to application reading the NAK state from the STATRx field of this register. One NAKed transaction keeps pending and is automatically retried by the host at the next frame, or the host can immediately retry by resetting STATRx state to VALID. - A transaction ended by STALL handshake sets this bit and the STALL answer is reported to application reading the STALL state from the STATRx field of this register. Host application should consequently disable the channel and re-enumerate. - A transaction ended with ACK handshake sets this bit - A transaction ended with error sets this bit. */
    using USB_CHEP4R_DTOGRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an OUT/SETUP transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. The type of occurred transaction, OUT or SETUP, can be determined from the SETUP bit described below. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written, writing 1 has no effect. - Host mode This bit is set by the hardware when an IN transaction is successfully completed on this channel. The software can only clear this bit. If the CTRM bit in USB_CNTR register is set a generic interrupt condition is generated together with the channel related flag, which is always activated. If double buffering is disabled, ACK answer is reported by application reading the DISABLE state from the STATRx field of this register. Host application should read received data from USBRAM and re-arm the channel by writing VALID to the STATRx field of this register. If double buffering is enabled, ACK answer is reported by application reading VALID state from the STATRx field of this register. Host application should read received data from USBRAM and toggle the DTOGTx bit of this register. Errors can be seen via the bits ERR_Rx (host mode only). This bit is read/write but only 0 can be written, writing 1 has no effect. */
    using USB_CHEP4R_VTRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode Device address assigned to the endpoint during the enumeration process. */
    using USB_CHEP4R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when a device responds with a NAK. Software can use this bit to monitor the number of NAKs received from a device. */
    using USB_CHEP4R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the software to send an LS transaction to the corresponding endpoint. 0: Full speed endpoint 1: Low speed endpoint */
    using USB_CHEP4R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP4R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP4R_LS_EP_B_0x1 = 1;

    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an OUT or SETUP transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP4R_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an IN transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP4R_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an OUT transaction. THREE_ERR_Tx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP4R_THREE_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_Tx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_Tx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_Tx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_Tx_B_0x3 = 3;

    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an IN transaction. THREE_ERR_Rx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP4R_THREE_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_Rx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_Rx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_Rx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP4R_THREE_ERR_Rx_B_0x3 = 3;

    /** @brief USB endpoint/channel 5 register */
    using USB_CHEP5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode Software must write in this field the 4-bit address used to identify the transactions directed to this endpoint. A value must be written before enabling the corresponding endpoint. - Host mode Software must write in this field the 4-bit address used to identify the channel addressed by the host transaction. */
    using USB_CHEP5R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain the information about the endpoint status, listed in less than xe6 []/>. */
    using USB_CHEP5R_STATTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all transmission requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for transmission. (value: 3)
     */
        /** @brief DISABLED: all transmission requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP5R_STATTx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP5R_STATTx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. */
    constexpr std::uint32_t USB_CHEP5R_STATTx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for transmission. */
    constexpr std::uint32_t USB_CHEP5R_STATTx_B_0x3 = 3;

    /** @brief If the endpoint/channel is non-isochronous, this bit contains the required value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be transmitted. Hardware toggles this bit when the ACK handshake is received from the USB host, following a data packet transmission. If the endpoint/channel is defined as a control one, hardware sets this bit to 1 at the reception of a SETUP PID addressed to this endpoint (in device mode) or when a SETUP transaction is acknowledged by the device (in host mode). If the endpoint/channel is using the double buffer feature, this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used to support packet buffer swapping since no data toggling is used for this sort of endpoints and only DATA0 packet are transmitted (refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet transmission, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint/channel is not a control one) or to force a specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGTx remains unchanged, while writing 1 makes the bit value to toggle. This bit is read/write but it can only be toggled by writing 1. */
    using USB_CHEP5R_DTOGTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an IN transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in the USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written. - Host mode Same as VTRx behavior but for USB OUT and SETUP transactions. */
    using USB_CHEP5R_VTTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The meaning of this bit depends on the endpoint/channel type configured by the UTYPE bits. less than xe5 []/> summarizes the different meanings. DBL_BUF: This bit is set by the software to enable the double-buffering feature for this bulk endpoint. The usage of double-buffered bulk endpoints is explained in less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>. STATUS_OUT: This bit is set by the software to indicate that a status out transaction is expected: in this case all OUT transactions containing more than zero data bytes are answered 'STALL' instead of 'ACK'. This bit may be used to improve the robustness of the application to protocol errors during control transfers and its usage is intended for control endpoints only. When STATUS_OUT is reset, OUT transactions can have any number of bytes, as required. */
    using USB_CHEP5R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits configure the behavior of this endpoint/channel as described in less than xe4 []/>. Channel0/Endpoint0 must always be a control endpoint/channel and each USB function must have at least one control endpoint/channel which has address 0, but there may be other control channels/endpoints if required. Only control channels/endpoints handle SETUP transactions, which are ignored by endpoints of other kinds. SETUP transactions cannot be answered with NAK or STALL. If a control endpoint/channel is defined as NAK, the USB peripheral does not answer, simulating a receive error, in the receive direction when a SETUP transaction is received. If the control endpoint/channel is defined as STALL in the receive direction, then the SETUP packet is accepted anyway, transferring data and issuing the CTR interrupt. The reception of OUT transactions is handled in the normal way, even if the endpoint/channel is a control one. Bulk and interrupt endpoints have very similar behavior and they differ only in the special feature available using the EPKIND configuration bit. The usage of isochronous channels/endpoints is explained in less than xe2 [Isochronous_transfers_in_Device_mode]/> 00: BULK-EPKIND meaning : DBL_BUF 01: CONTROL-EPKIND meaning :STATUS_OUT 10: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint 11: INTERRUPT-EPKIND meaning : Not used */
    using USB_CHEP5R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BULK-EPKIND meaning : DBL_BUF (value: 0)
     *          - B_0x1: CONTROL-EPKIND meaning :STATUS_OUT (value: 1)
     *          - B_0x2: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint (value: 2)
     *          - B_0x3: INTERRUPT-EPKIND meaning : Not used (value: 3)
     */
        /** @brief BULK-EPKIND meaning : DBL_BUF */
    constexpr std::uint32_t USB_CHEP5R_UTYPE_B_0x0 = 0;
        /** @brief CONTROL-EPKIND meaning :STATUS_OUT */
    constexpr std::uint32_t USB_CHEP5R_UTYPE_B_0x1 = 1;
        /** @brief ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint */
    constexpr std::uint32_t USB_CHEP5R_UTYPE_B_0x2 = 2;
        /** @brief INTERRUPT-EPKIND meaning : Not used */
    constexpr std::uint32_t USB_CHEP5R_UTYPE_B_0x3 = 3;

    /** @brief - Device mode This bit is read-only and it is set by the hardware when the last completed transaction is a SETUP. This bit changes its value only for control endpoints. It must be examined, in the case of a successful receive transaction (VTRx event), to determine the type of transaction occurred. To protect the interrupt service routine from the changes in SETUP bits due to next incoming tokens, this bit is kept frozen while VTRx bit is at 1; its state changes when VTRx is at 0. This bit is read-only. - Host mode This bit is set by the software to send a SETUP transaction on a control endpoint. This bit changes its value only for control endpoints. It is cleared by hardware when the SETUP transaction is acknowledged and VTTx interrupt generated. */
    using USB_CHEP5R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain information about the endpoint status, which are listed in less than xe3 []/>. */
    using USB_CHEP5R_STATRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all reception requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for reception. (value: 3)
     */
        /** @brief DISABLED: all reception requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP5R_STATRx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP5R_STATRx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. */
    constexpr std::uint32_t USB_CHEP5R_STATRx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for reception. */
    constexpr std::uint32_t USB_CHEP5R_STATRx_B_0x3 = 3;

    /** @brief If the endpoint/channel is not isochronous, this bit contains the expected value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be received. Hardware toggles this bit, when the ACK handshake is sent following a data packet reception having a matching data PID value; if the endpoint is defined as a control one, hardware clears this bit at the reception of a SETUP PID received from host (in device mode), while it sets this bit to 1 when SETUP transaction is acknowledged by device (in host mode). If the endpoint/channel is using the double-buffering feature this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used only to support packet buffer swapping for data transmission since no data toggling is used for this kind of channels/endpoints and only DATA0 packet are transmitted (Refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet reception, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint is not a control one) or to force specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGRx remains unchanged, while writing 1 makes the bit value toggle. This bit is read/write but it can be only toggled by writing 1. - A transaction ended with a NAK sets this bit and NAK answer is reported to application reading the NAK state from the STATRx field of this register. One NAKed transaction keeps pending and is automatically retried by the host at the next frame, or the host can immediately retry by resetting STATRx state to VALID. - A transaction ended by STALL handshake sets this bit and the STALL answer is reported to application reading the STALL state from the STATRx field of this register. Host application should consequently disable the channel and re-enumerate. - A transaction ended with ACK handshake sets this bit - A transaction ended with error sets this bit. */
    using USB_CHEP5R_DTOGRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an OUT/SETUP transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. The type of occurred transaction, OUT or SETUP, can be determined from the SETUP bit described below. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written, writing 1 has no effect. - Host mode This bit is set by the hardware when an IN transaction is successfully completed on this channel. The software can only clear this bit. If the CTRM bit in USB_CNTR register is set a generic interrupt condition is generated together with the channel related flag, which is always activated. If double buffering is disabled, ACK answer is reported by application reading the DISABLE state from the STATRx field of this register. Host application should read received data from USBRAM and re-arm the channel by writing VALID to the STATRx field of this register. If double buffering is enabled, ACK answer is reported by application reading VALID state from the STATRx field of this register. Host application should read received data from USBRAM and toggle the DTOGTx bit of this register. Errors can be seen via the bits ERR_Rx (host mode only). This bit is read/write but only 0 can be written, writing 1 has no effect. */
    using USB_CHEP5R_VTRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode Device address assigned to the endpoint during the enumeration process. */
    using USB_CHEP5R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when a device responds with a NAK. Software can use this bit to monitor the number of NAKs received from a device. */
    using USB_CHEP5R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the software to send an LS transaction to the corresponding endpoint. 0: Full speed endpoint 1: Low speed endpoint */
    using USB_CHEP5R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP5R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP5R_LS_EP_B_0x1 = 1;

    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an OUT or SETUP transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP5R_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an IN transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP5R_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an OUT transaction. THREE_ERR_Tx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP5R_THREE_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_Tx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_Tx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_Tx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_Tx_B_0x3 = 3;

    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an IN transaction. THREE_ERR_Rx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP5R_THREE_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_Rx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_Rx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_Rx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP5R_THREE_ERR_Rx_B_0x3 = 3;

    /** @brief USB endpoint/channel 6 register */
    using USB_CHEP6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode Software must write in this field the 4-bit address used to identify the transactions directed to this endpoint. A value must be written before enabling the corresponding endpoint. - Host mode Software must write in this field the 4-bit address used to identify the channel addressed by the host transaction. */
    using USB_CHEP6R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain the information about the endpoint status, listed in less than xe6 []/>. */
    using USB_CHEP6R_STATTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all transmission requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for transmission. (value: 3)
     */
        /** @brief DISABLED: all transmission requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP6R_STATTx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP6R_STATTx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. */
    constexpr std::uint32_t USB_CHEP6R_STATTx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for transmission. */
    constexpr std::uint32_t USB_CHEP6R_STATTx_B_0x3 = 3;

    /** @brief If the endpoint/channel is non-isochronous, this bit contains the required value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be transmitted. Hardware toggles this bit when the ACK handshake is received from the USB host, following a data packet transmission. If the endpoint/channel is defined as a control one, hardware sets this bit to 1 at the reception of a SETUP PID addressed to this endpoint (in device mode) or when a SETUP transaction is acknowledged by the device (in host mode). If the endpoint/channel is using the double buffer feature, this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used to support packet buffer swapping since no data toggling is used for this sort of endpoints and only DATA0 packet are transmitted (refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet transmission, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint/channel is not a control one) or to force a specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGTx remains unchanged, while writing 1 makes the bit value to toggle. This bit is read/write but it can only be toggled by writing 1. */
    using USB_CHEP6R_DTOGTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an IN transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in the USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written. - Host mode Same as VTRx behavior but for USB OUT and SETUP transactions. */
    using USB_CHEP6R_VTTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The meaning of this bit depends on the endpoint/channel type configured by the UTYPE bits. less than xe5 []/> summarizes the different meanings. DBL_BUF: This bit is set by the software to enable the double-buffering feature for this bulk endpoint. The usage of double-buffered bulk endpoints is explained in less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>. STATUS_OUT: This bit is set by the software to indicate that a status out transaction is expected: in this case all OUT transactions containing more than zero data bytes are answered 'STALL' instead of 'ACK'. This bit may be used to improve the robustness of the application to protocol errors during control transfers and its usage is intended for control endpoints only. When STATUS_OUT is reset, OUT transactions can have any number of bytes, as required. */
    using USB_CHEP6R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits configure the behavior of this endpoint/channel as described in less than xe4 []/>. Channel0/Endpoint0 must always be a control endpoint/channel and each USB function must have at least one control endpoint/channel which has address 0, but there may be other control channels/endpoints if required. Only control channels/endpoints handle SETUP transactions, which are ignored by endpoints of other kinds. SETUP transactions cannot be answered with NAK or STALL. If a control endpoint/channel is defined as NAK, the USB peripheral does not answer, simulating a receive error, in the receive direction when a SETUP transaction is received. If the control endpoint/channel is defined as STALL in the receive direction, then the SETUP packet is accepted anyway, transferring data and issuing the CTR interrupt. The reception of OUT transactions is handled in the normal way, even if the endpoint/channel is a control one. Bulk and interrupt endpoints have very similar behavior and they differ only in the special feature available using the EPKIND configuration bit. The usage of isochronous channels/endpoints is explained in less than xe2 [Isochronous_transfers_in_Device_mode]/> 00: BULK-EPKIND meaning : DBL_BUF 01: CONTROL-EPKIND meaning :STATUS_OUT 10: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint 11: INTERRUPT-EPKIND meaning : Not used */
    using USB_CHEP6R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BULK-EPKIND meaning : DBL_BUF (value: 0)
     *          - B_0x1: CONTROL-EPKIND meaning :STATUS_OUT (value: 1)
     *          - B_0x2: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint (value: 2)
     *          - B_0x3: INTERRUPT-EPKIND meaning : Not used (value: 3)
     */
        /** @brief BULK-EPKIND meaning : DBL_BUF */
    constexpr std::uint32_t USB_CHEP6R_UTYPE_B_0x0 = 0;
        /** @brief CONTROL-EPKIND meaning :STATUS_OUT */
    constexpr std::uint32_t USB_CHEP6R_UTYPE_B_0x1 = 1;
        /** @brief ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint */
    constexpr std::uint32_t USB_CHEP6R_UTYPE_B_0x2 = 2;
        /** @brief INTERRUPT-EPKIND meaning : Not used */
    constexpr std::uint32_t USB_CHEP6R_UTYPE_B_0x3 = 3;

    /** @brief - Device mode This bit is read-only and it is set by the hardware when the last completed transaction is a SETUP. This bit changes its value only for control endpoints. It must be examined, in the case of a successful receive transaction (VTRx event), to determine the type of transaction occurred. To protect the interrupt service routine from the changes in SETUP bits due to next incoming tokens, this bit is kept frozen while VTRx bit is at 1; its state changes when VTRx is at 0. This bit is read-only. - Host mode This bit is set by the software to send a SETUP transaction on a control endpoint. This bit changes its value only for control endpoints. It is cleared by hardware when the SETUP transaction is acknowledged and VTTx interrupt generated. */
    using USB_CHEP6R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain information about the endpoint status, which are listed in less than xe3 []/>. */
    using USB_CHEP6R_STATRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all reception requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for reception. (value: 3)
     */
        /** @brief DISABLED: all reception requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP6R_STATRx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP6R_STATRx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. */
    constexpr std::uint32_t USB_CHEP6R_STATRx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for reception. */
    constexpr std::uint32_t USB_CHEP6R_STATRx_B_0x3 = 3;

    /** @brief If the endpoint/channel is not isochronous, this bit contains the expected value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be received. Hardware toggles this bit, when the ACK handshake is sent following a data packet reception having a matching data PID value; if the endpoint is defined as a control one, hardware clears this bit at the reception of a SETUP PID received from host (in device mode), while it sets this bit to 1 when SETUP transaction is acknowledged by device (in host mode). If the endpoint/channel is using the double-buffering feature this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used only to support packet buffer swapping for data transmission since no data toggling is used for this kind of channels/endpoints and only DATA0 packet are transmitted (Refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet reception, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint is not a control one) or to force specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGRx remains unchanged, while writing 1 makes the bit value toggle. This bit is read/write but it can be only toggled by writing 1. - A transaction ended with a NAK sets this bit and NAK answer is reported to application reading the NAK state from the STATRx field of this register. One NAKed transaction keeps pending and is automatically retried by the host at the next frame, or the host can immediately retry by resetting STATRx state to VALID. - A transaction ended by STALL handshake sets this bit and the STALL answer is reported to application reading the STALL state from the STATRx field of this register. Host application should consequently disable the channel and re-enumerate. - A transaction ended with ACK handshake sets this bit - A transaction ended with error sets this bit. */
    using USB_CHEP6R_DTOGRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an OUT/SETUP transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. The type of occurred transaction, OUT or SETUP, can be determined from the SETUP bit described below. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written, writing 1 has no effect. - Host mode This bit is set by the hardware when an IN transaction is successfully completed on this channel. The software can only clear this bit. If the CTRM bit in USB_CNTR register is set a generic interrupt condition is generated together with the channel related flag, which is always activated. If double buffering is disabled, ACK answer is reported by application reading the DISABLE state from the STATRx field of this register. Host application should read received data from USBRAM and re-arm the channel by writing VALID to the STATRx field of this register. If double buffering is enabled, ACK answer is reported by application reading VALID state from the STATRx field of this register. Host application should read received data from USBRAM and toggle the DTOGTx bit of this register. Errors can be seen via the bits ERR_Rx (host mode only). This bit is read/write but only 0 can be written, writing 1 has no effect. */
    using USB_CHEP6R_VTRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode Device address assigned to the endpoint during the enumeration process. */
    using USB_CHEP6R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when a device responds with a NAK. Software can use this bit to monitor the number of NAKs received from a device. */
    using USB_CHEP6R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the software to send an LS transaction to the corresponding endpoint. 0: Full speed endpoint 1: Low speed endpoint */
    using USB_CHEP6R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP6R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP6R_LS_EP_B_0x1 = 1;

    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an OUT or SETUP transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP6R_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an IN transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP6R_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an OUT transaction. THREE_ERR_Tx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP6R_THREE_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_Tx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_Tx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_Tx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_Tx_B_0x3 = 3;

    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an IN transaction. THREE_ERR_Rx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP6R_THREE_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_Rx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_Rx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_Rx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP6R_THREE_ERR_Rx_B_0x3 = 3;

    /** @brief USB endpoint/channel 7 register */
    using USB_CHEP7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode Software must write in this field the 4-bit address used to identify the transactions directed to this endpoint. A value must be written before enabling the corresponding endpoint. - Host mode Software must write in this field the 4-bit address used to identify the channel addressed by the host transaction. */
    using USB_CHEP7R_EA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain the information about the endpoint status, listed in less than xe6 []/>. */
    using USB_CHEP7R_STATTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all transmission requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for transmission. (value: 3)
     */
        /** @brief DISABLED: all transmission requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP7R_STATTx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all transmission requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP7R_STATTx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all transmission requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the transmission request. */
    constexpr std::uint32_t USB_CHEP7R_STATTx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for transmission. */
    constexpr std::uint32_t USB_CHEP7R_STATTx_B_0x3 = 3;

    /** @brief If the endpoint/channel is non-isochronous, this bit contains the required value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be transmitted. Hardware toggles this bit when the ACK handshake is received from the USB host, following a data packet transmission. If the endpoint/channel is defined as a control one, hardware sets this bit to 1 at the reception of a SETUP PID addressed to this endpoint (in device mode) or when a SETUP transaction is acknowledged by the device (in host mode). If the endpoint/channel is using the double buffer feature, this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used to support packet buffer swapping since no data toggling is used for this sort of endpoints and only DATA0 packet are transmitted (refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet transmission, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint/channel is not a control one) or to force a specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGTx remains unchanged, while writing 1 makes the bit value to toggle. This bit is read/write but it can only be toggled by writing 1. */
    using USB_CHEP7R_DTOGTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an IN transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in the USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written. - Host mode Same as VTRx behavior but for USB OUT and SETUP transactions. */
    using USB_CHEP7R_VTTx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The meaning of this bit depends on the endpoint/channel type configured by the UTYPE bits. less than xe5 []/> summarizes the different meanings. DBL_BUF: This bit is set by the software to enable the double-buffering feature for this bulk endpoint. The usage of double-buffered bulk endpoints is explained in less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>. STATUS_OUT: This bit is set by the software to indicate that a status out transaction is expected: in this case all OUT transactions containing more than zero data bytes are answered 'STALL' instead of 'ACK'. This bit may be used to improve the robustness of the application to protocol errors during control transfers and its usage is intended for control endpoints only. When STATUS_OUT is reset, OUT transactions can have any number of bytes, as required. */
    using USB_CHEP7R_EPKIND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits configure the behavior of this endpoint/channel as described in less than xe4 []/>. Channel0/Endpoint0 must always be a control endpoint/channel and each USB function must have at least one control endpoint/channel which has address 0, but there may be other control channels/endpoints if required. Only control channels/endpoints handle SETUP transactions, which are ignored by endpoints of other kinds. SETUP transactions cannot be answered with NAK or STALL. If a control endpoint/channel is defined as NAK, the USB peripheral does not answer, simulating a receive error, in the receive direction when a SETUP transaction is received. If the control endpoint/channel is defined as STALL in the receive direction, then the SETUP packet is accepted anyway, transferring data and issuing the CTR interrupt. The reception of OUT transactions is handled in the normal way, even if the endpoint/channel is a control one. Bulk and interrupt endpoints have very similar behavior and they differ only in the special feature available using the EPKIND configuration bit. The usage of isochronous channels/endpoints is explained in less than xe2 [Isochronous_transfers_in_Device_mode]/> 00: BULK-EPKIND meaning : DBL_BUF 01: CONTROL-EPKIND meaning :STATUS_OUT 10: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint 11: INTERRUPT-EPKIND meaning : Not used */
    using USB_CHEP7R_UTYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BULK-EPKIND meaning : DBL_BUF (value: 0)
     *          - B_0x1: CONTROL-EPKIND meaning :STATUS_OUT (value: 1)
     *          - B_0x2: ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint (value: 2)
     *          - B_0x3: INTERRUPT-EPKIND meaning : Not used (value: 3)
     */
        /** @brief BULK-EPKIND meaning : DBL_BUF */
    constexpr std::uint32_t USB_CHEP7R_UTYPE_B_0x0 = 0;
        /** @brief CONTROL-EPKIND meaning :STATUS_OUT */
    constexpr std::uint32_t USB_CHEP7R_UTYPE_B_0x1 = 1;
        /** @brief ISO-EPKIND meaning SBUF_ISO: This bit is set by the software to enable the single-buffering feature for isochronous endpoint */
    constexpr std::uint32_t USB_CHEP7R_UTYPE_B_0x2 = 2;
        /** @brief INTERRUPT-EPKIND meaning : Not used */
    constexpr std::uint32_t USB_CHEP7R_UTYPE_B_0x3 = 3;

    /** @brief - Device mode This bit is read-only and it is set by the hardware when the last completed transaction is a SETUP. This bit changes its value only for control endpoints. It must be examined, in the case of a successful receive transaction (VTRx event), to determine the type of transaction occurred. To protect the interrupt service routine from the changes in SETUP bits due to next incoming tokens, this bit is kept frozen while VTRx bit is at 1; its state changes when VTRx is at 0. This bit is read-only. - Host mode This bit is set by the software to send a SETUP transaction on a control endpoint. This bit changes its value only for control endpoints. It is cleared by hardware when the SETUP transaction is acknowledged and VTTx interrupt generated. */
    using USB_CHEP7R_SETUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain information about the endpoint status, which are listed in less than xe3 []/>. */
    using USB_CHEP7R_STATRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DISABLED: all reception requests addressed to this endpoint/channel are ignored. (value: 0)
     *          - B_0x1: STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. (value: 1)
     *          - B_0x2: NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. (value: 2)
     *          - B_0x3: VALID: this endpoint/channel is enabled for reception. (value: 3)
     */
        /** @brief DISABLED: all reception requests addressed to this endpoint/channel are ignored. */
    constexpr std::uint32_t USB_CHEP7R_STATRx_B_0x0 = 0;
        /** @brief STALL: Device mode: the endpoint is stalled and all reception requests result in a STALL handshake. Host mode: this indicates that the device has STALLed the channel. */
    constexpr std::uint32_t USB_CHEP7R_STATRx_B_0x1 = 1;
        /** @brief NAK: Device mode: the endpoint is NAKed and all reception requests result in a NAK handshake. Host mode: this indicates that the device has NAKed the reception request. */
    constexpr std::uint32_t USB_CHEP7R_STATRx_B_0x2 = 2;
        /** @brief VALID: this endpoint/channel is enabled for reception. */
    constexpr std::uint32_t USB_CHEP7R_STATRx_B_0x3 = 3;

    /** @brief If the endpoint/channel is not isochronous, this bit contains the expected value of the data toggle bit (0 = DATA0, 1 = DATA1) for the next data packet to be received. Hardware toggles this bit, when the ACK handshake is sent following a data packet reception having a matching data PID value; if the endpoint is defined as a control one, hardware clears this bit at the reception of a SETUP PID received from host (in device mode), while it sets this bit to 1 when SETUP transaction is acknowledged by device (in host mode). If the endpoint/channel is using the double-buffering feature this bit is used to support packet buffer swapping too (Refer to less than xe1 [Double-buffered_endpoints_and_usage_in_Device_mode]/>). If the endpoint/channel is isochronous, this bit is used only to support packet buffer swapping for data transmission since no data toggling is used for this kind of channels/endpoints and only DATA0 packet are transmitted (Refer to less than xe2 [Isochronous_transfers_in_Device_mode]/>). Hardware toggles this bit just after the end of data packet reception, since no handshake is used for isochronous transfers. This bit can also be toggled by the software to initialize its value (mandatory when the endpoint is not a control one) or to force specific data toggle/packet buffer usage. When the application software writes 0, the value of DTOGRx remains unchanged, while writing 1 makes the bit value toggle. This bit is read/write but it can be only toggled by writing 1. - A transaction ended with a NAK sets this bit and NAK answer is reported to application reading the NAK state from the STATRx field of this register. One NAKed transaction keeps pending and is automatically retried by the host at the next frame, or the host can immediately retry by resetting STATRx state to VALID. - A transaction ended by STALL handshake sets this bit and the STALL answer is reported to application reading the STALL state from the STATRx field of this register. Host application should consequently disable the channel and re-enumerate. - A transaction ended with ACK handshake sets this bit - A transaction ended with error sets this bit. */
    using USB_CHEP7R_DTOGRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an OUT/SETUP transaction is successfully completed on this endpoint; the software can only clear this bit. If the CTRM bit in USB_CNTR register is set accordingly, a generic interrupt condition is generated together with the endpoint related interrupt condition, which is always activated. The type of occurred transaction, OUT or SETUP, can be determined from the SETUP bit described below. A transaction ended with a NAK or STALL handshake does not set this bit, since no data is actually transferred, as in the case of protocol errors or data toggle mismatches. This bit is read/write but only 0 can be written, writing 1 has no effect. - Host mode This bit is set by the hardware when an IN transaction is successfully completed on this channel. The software can only clear this bit. If the CTRM bit in USB_CNTR register is set a generic interrupt condition is generated together with the channel related flag, which is always activated. If double buffering is disabled, ACK answer is reported by application reading the DISABLE state from the STATRx field of this register. Host application should read received data from USBRAM and re-arm the channel by writing VALID to the STATRx field of this register. If double buffering is enabled, ACK answer is reported by application reading VALID state from the STATRx field of this register. Host application should read received data from USBRAM and toggle the DTOGTx bit of this register. Errors can be seen via the bits ERR_Rx (host mode only). This bit is read/write but only 0 can be written, writing 1 has no effect. */
    using USB_CHEP7R_VTRx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode Device address assigned to the endpoint during the enumeration process. */
    using USB_CHEP7R_DEVADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when a device responds with a NAK. Software can use this bit to monitor the number of NAKs received from a device. */
    using USB_CHEP7R_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the software to send an LS transaction to the corresponding endpoint. 0: Full speed endpoint 1: Low speed endpoint */
    using USB_CHEP7R_LS_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full speed endpoint (value: 0)
     *          - B_0x1: Low speed endpoint (value: 1)
     */
        /** @brief Full speed endpoint */
    constexpr std::uint32_t USB_CHEP7R_LS_EP_B_0x0 = 0;
        /** @brief Low speed endpoint */
    constexpr std::uint32_t USB_CHEP7R_LS_EP_B_0x1 = 1;

    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an OUT or SETUP transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP7R_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when an error (for example no answer by the device, CRC error, bit stuffing error, framing format violation, etc.) has occurred during an IN transaction on this channel. The software can only clear this bit. If the ERRM bit in USB_CNTR register is set, a generic interrupt condition is generated together with the channel related flag, which is always activated. */
    using USB_CHEP7R_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an OUT transaction. THREE_ERR_Tx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP7R_THREE_ERR_Tx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_Tx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_Tx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_Tx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_Tx_B_0x3 = 3;

    /** @brief - Host mode This bit is set by the hardware when 3 consecutive transaction errors occurred on the USB bus for an IN transaction. THREE_ERR_Rx is not generated for isochronous transactions. The software can only clear this bit. Coding of the received error: 00: Less than 3 errors received. 01: More than 3 errors received, last error is timeout error. 10: More than 3 errors received, last error is data error (CRC error). 11: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    using USB_CHEP7R_THREE_ERR_Rx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Less than 3 errors received. (value: 0)
     *          - B_0x1: More than 3 errors received, last error is timeout error. (value: 1)
     *          - B_0x2: More than 3 errors received, last error is data error (CRC error). (value: 2)
     *          - B_0x3: More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). (value: 3)
     */
        /** @brief Less than 3 errors received. */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_Rx_B_0x0 = 0;
        /** @brief More than 3 errors received, last error is timeout error. */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_Rx_B_0x1 = 1;
        /** @brief More than 3 errors received, last error is data error (CRC error). */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_Rx_B_0x2 = 2;
        /** @brief More than 3 errors received, last error is protocol error (invalid PID, false EOP, bitstuffing error, SYNC error). */
    constexpr std::uint32_t USB_CHEP7R_THREE_ERR_Rx_B_0x3 = 3;

    /** @brief USB control register */
    using USB_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Condition: Device mode Software can set this bit to reset the USB core, exactly as it happens when receiving a RESET signaling on the USB.The USB peripheral, in response to a RESET, resets its internal protocol state machine. Reception and transmission are disabled until the RST_DCON bit is cleared. All configuration registers do not reset: the microcontroller must explicitly clear these registers (this is to ensure that the RST_DCON interrupt can be safely delivered, and any transaction immediately followed by a RESET can be completed). The function address and endpoint registers are reset by an USB reset event. Software sets this bit to drive USB reset state on the bus and initialize the device. USB reset terminates as soon as this bit is cleared by software. Condition: Device mode 0: No effect 1: USB core is under reset Condition: Host mode 0: No effect 1: USB reset driven */
    using USB_CNTR_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [Device mode] No effect (value: 0)
     *          - B_0x1_COND1: COND1 is [Device mode] USB core is under reset (value: 1)
     */
        /** @brief COND1 is [Device mode] No effect */
    constexpr std::uint32_t USB_CNTR_USBRST_B_0x0_COND1 = 0;
        /** @brief COND1 is [Device mode] USB core is under reset */
    constexpr std::uint32_t USB_CNTR_USBRST_B_0x1_COND1 = 1;

    /** @brief This bit is used to completely switch off all USB-related analog parts if it is required to completely disable the USB peripheral for any reason. When this bit is set, the USB peripheral is disconnected from the transceivers and it cannot be used. 0: Exit power down 1: Enter power down mode */
    using USB_CNTR_PDWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Exit power down (value: 0)
     *          - B_0x1: Enter power down mode (value: 1)
     */
        /** @brief Exit power down */
    constexpr std::uint32_t USB_CNTR_PDWN_B_0x0 = 0;
        /** @brief Enter power down mode */
    constexpr std::uint32_t USB_CNTR_PDWN_B_0x1 = 1;

    /** @brief This bit is set by hardware as soon as the suspend state entered through the SUSPEN control gets internally effective. In this state USB activity is suspended, USB clock is gated, transceiver is set in low power mode by disabling the differential receiver. Only asynchronous wakeup logic and single ended receiver is kept alive to detect remote wakeup or resume events. Software must poll this bit to confirm it to be set before any STOP mode entry. This bit is cleared by hardware simultaneously to the WAKEUP flag being set. 0: Normal operation 1: Suspend state */
    using USB_CNTR_SUSPRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation (value: 0)
     *          - B_0x1: Suspend state (value: 1)
     */
        /** @brief Normal operation */
    constexpr std::uint32_t USB_CNTR_SUSPRDY_B_0x0 = 0;
        /** @brief Suspend state */
    constexpr std::uint32_t USB_CNTR_SUSPRDY_B_0x1 = 1;

    /** @brief - Condition: Device mode Software can set this bit when the SUSP interrupt is received, which is issued when no traffic is received by the USB peripheral for 3 ms. Software can also set this bit when the L1REQ interrupt is received with positive acknowledge sent. As soon as the suspend state is propagated internally all device activity is stopped, USB clock is gated, USB transceiver is set into low power mode and the SUSPRDY bit is set by hardware. In the case that device application wants to pursue more aggressive power saving by stopping the USB clock source and by moving the microcontroller to stop mode, as in the case of bus powered device application, it must first wait few cycles to see the SUSPRDY = 1 acknowledge the suspend request. This bit is cleared by hardware simultaneous with the WAKEUP flag set. Software can set this bit when host application has nothing scheduled for the next frames and wants to enter long term power saving. When set, it stops immediately SOF generation and any other host activity, gates the USB clock and sets the transceiver in low power mode. If any USB transaction is on-going at the time SUSPEN is set, suspend is entered at the end of the current transaction. As soon as suspend state is propagated internally and gets effective the SUSPRDY bit is set. In the case that host application wants to pursue more aggressive power saving by stopping the USB clock source and by moving the micro-controller to STOP mode, it must first wait few cycles to see SUSPRDY=1 acknowledge to the suspend request. This bit is cleared by hardware simultaneous with the WAKEUP flag set. Condition: Device mode 0: No effect 1: Enter L1/L2 suspend Condition: Host mode 0: No effect 1: Enter L1/L2 suspend */
    using USB_CNTR_SUSPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [Device mode] No effect (value: 0)
     *          - B_0x1_COND1: COND1 is [Device mode] Enter L1/L2 suspend (value: 1)
     */
        /** @brief COND1 is [Device mode] No effect */
    constexpr std::uint32_t USB_CNTR_SUSPEN_B_0x0_COND1 = 0;
        /** @brief COND1 is [Device mode] Enter L1/L2 suspend */
    constexpr std::uint32_t USB_CNTR_SUSPEN_B_0x1_COND1 = 1;

    /** @brief - Device mode The microcontroller can set this bit to send remote wake-up signaling to the host. It must be activated, according to USB specifications, for no less than 1 ms and no more than 15 ms after which the host PC is ready to drive the resume sequence up to its end. - Host mode Software sets this bit to send resume signaling to the device. Software clears this bit to send end of resume to device and restart SOF generation. In the context of remote wake up, this bit is to be set following the WAKEUP interrupt. 0: No effect 1: Send L2 resume signaling to device */
    using USB_CNTR_L2RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Send L2 resume signaling to device (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t USB_CNTR_L2RES_B_0x0 = 0;
        /** @brief Send L2 resume signaling to device */
    constexpr std::uint32_t USB_CNTR_L2RES_B_0x1 = 1;

    /** @brief - Device mode Software sets this bit to send a LPM L1 50 us remote wakeup signaling to the host. After the signaling ends, this bit is cleared by hardware. 0: No effect 1: Send 50 us remote-wakeup signaling to host */
    using USB_CNTR_L1RES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Send 50 us remote-wakeup signaling to host (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t USB_CNTR_L1RES_B_0x0 = 0;
        /** @brief Send 50 us remote-wakeup signaling to host */
    constexpr std::uint32_t USB_CNTR_L1RES_B_0x1 = 1;

    /** @brief None 0: LPM L1 state request (L1REQ) interrupt disabled. 1: L1REQ interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    using USB_CNTR_L1REQM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPM L1 state request (L1REQ) interrupt disabled. (value: 0)
     *          - B_0x1: L1REQ interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief LPM L1 state request (L1REQ) interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_L1REQM_B_0x0 = 0;
        /** @brief L1REQ interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_L1REQM_B_0x1 = 1;

    /** @brief None 0: Expected start of frame (ESOF) interrupt disabled. 1: ESOF interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    using USB_CNTR_ESOFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Expected start of frame (ESOF) interrupt disabled. (value: 0)
     *          - B_0x1: ESOF interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief Expected start of frame (ESOF) interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_ESOFM_B_0x0 = 0;
        /** @brief ESOF interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_ESOFM_B_0x1 = 1;

    /** @brief None 0: SOF interrupt disabled. 1: SOF interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    using USB_CNTR_SOFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SOF interrupt disabled. (value: 0)
     *          - B_0x1: SOF interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief SOF interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_SOFM_B_0x0 = 0;
        /** @brief SOF interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_SOFM_B_0x1 = 1;

    /** @brief None 0: RESET interrupt disabled. 1: RESET interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    using USB_CNTR_RST_DCONM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RESET interrupt disabled. (value: 0)
     *          - B_0x1: RESET interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief RESET interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_RST_DCONM_B_0x0 = 0;
        /** @brief RESET interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_RST_DCONM_B_0x1 = 1;

    /** @brief None 0: Suspend mode request (SUSP) interrupt disabled. 1: SUSP interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    using USB_CNTR_SUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Suspend mode request (SUSP) interrupt disabled. (value: 0)
     *          - B_0x1: SUSP interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief Suspend mode request (SUSP) interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_SUSPM_B_0x0 = 0;
        /** @brief SUSP interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_SUSPM_B_0x1 = 1;

    /** @brief None 0: WKUP interrupt disabled. 1: WKUP interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    using USB_CNTR_WKUPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP interrupt disabled. (value: 0)
     *          - B_0x1: WKUP interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief WKUP interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_WKUPM_B_0x0 = 0;
        /** @brief WKUP interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_WKUPM_B_0x1 = 1;

    /** @brief None 0: ERR interrupt disabled. 1: ERR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    using USB_CNTR_ERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ERR interrupt disabled. (value: 0)
     *          - B_0x1: ERR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief ERR interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_ERRM_B_0x0 = 0;
        /** @brief ERR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_ERRM_B_0x1 = 1;

    /** @brief None 0: PMAOVR interrupt disabled. 1: PMAOVR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    using USB_CNTR_PMAOVRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PMAOVR interrupt disabled. (value: 0)
     *          - B_0x1: PMAOVR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief PMAOVR interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_PMAOVRM_B_0x0 = 0;
        /** @brief PMAOVR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_PMAOVRM_B_0x1 = 1;

    /** @brief None 0: Correct transfer (CTR) interrupt disabled. 1: CTR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    using USB_CNTR_CTRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Correct transfer (CTR) interrupt disabled. (value: 0)
     *          - B_0x1: CTR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. (value: 1)
     */
        /** @brief Correct transfer (CTR) interrupt disabled. */
    constexpr std::uint32_t USB_CNTR_CTRM_B_0x0 = 0;
        /** @brief CTR interrupt enabled, an interrupt request is generated when the corresponding bit in the USB_ISTR register is set. */
    constexpr std::uint32_t USB_CNTR_CTRM_B_0x1 = 1;

    /** @brief None 0: 512 byte threshold interrupt disabled 1: 512 byte threshold interrupt enabled */
    using USB_CNTR_THR512M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 512 byte threshold interrupt disabled (value: 0)
     *          - B_0x1: 512 byte threshold interrupt enabled (value: 1)
     */
        /** @brief 512 byte threshold interrupt disabled */
    constexpr std::uint32_t USB_CNTR_THR512M_B_0x0 = 0;
        /** @brief 512 byte threshold interrupt enabled */
    constexpr std::uint32_t USB_CNTR_THR512M_B_0x1 = 1;

    /** @brief - Host mode 0: Device disconnection interrupt disabled 1: Device disconnection interrupt enabled */
    using USB_CNTR_DDISCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device disconnection interrupt disabled (value: 0)
     *          - B_0x1: Device disconnection interrupt enabled (value: 1)
     */
        /** @brief Device disconnection interrupt disabled */
    constexpr std::uint32_t USB_CNTR_DDISCM_B_0x0 = 0;
        /** @brief Device disconnection interrupt enabled */
    constexpr std::uint32_t USB_CNTR_DDISCM_B_0x1 = 1;

    /** @brief HOST bit selects betweens host or device USB mode of operation. It must be set before enabling the USB peripheral by the function enable bit. 0: USB Device function 1: USB host function */
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
    /** @brief These bits are written by the hardware according to the host channel or device endpoint number, which generated the interrupt request. If several endpoint/channel transactions are pending, the hardware writes the identification number related to the endpoint/channel having the highest priority defined in the following way: two levels are defined, in order of priority: isochronous and double-buffered bulk channels/endpoints are considered first and then the others are examined. If more than one endpoint/channel from the same set is requesting an interrupt, the IDN bits in USB_ISTR register are assigned according to the lowest requesting register, CHEP0R having the highest priority followed by CHEP1R and so on. The application software can assign a register to each endpoint/channel according to this priority scheme, so as to order the concurring endpoint/channel requests in a suitable way. These bits are read only. */
    using USB_ISTR_IDN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is written by the hardware according to the direction of the successful transaction, which generated the interrupt request. If DIR bit = 0, VTTx bit is set in the USB_CHEPnR register related to the interrupting endpoint. The interrupting transaction is of IN type (data transmitted by the USB peripheral to the host PC). If DIR bit = 1, VTRx bit or both VTTx/VTRx are set in the USB_CHEPnR register related to the interrupting endpoint. The interrupting transaction is of OUT type (data received by the USB peripheral from the host PC) or two pending transactions are waiting to be processed. This information can be used by the application software to access the USB_CHEPnR bits related to the triggering transaction since it represents the direction having the interrupt pending. This bit is read-only. */
    using USB_ISTR_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when LPM command to enter the L1 state is successfully received and acknowledged. This bit is read/write but only 0 can be written and writing 1 has no effect. */
    using USB_ISTR_L1REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when an SOF packet is expected but not received. The host sends an SOF packet each 1 ms, but if the device does not receive it properly, the suspend timer issues this interrupt. If three consecutive ESOF interrupts are generated (for example three SOF packets are lost) without any traffic occurring in between, a SUSP interrupt is generated. This bit is set even when the missing SOF packets occur while the suspend timer is not yet locked. This bit is read/write but only 0 can be written and writing 1 has no effect. */
    using USB_ISTR_ESOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit signals the beginning of a new USB frame and it is set when a SOF packet arrives through the USB bus. The interrupt service routine may monitor the SOF events to have a 1 ms synchronization event to the USB host and to safely read the USB_FNR register which is updated at the SOF packet reception (this could be useful for isochronous applications). This bit is read/write but only 0 can be written and writing 1 has no effect. */
    using USB_ISTR_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by hardware when an USB reset is released by the host and the bus returns to idle. USB reset state is internally detected after the sampling of 60 consecutive SE0 cycles. - Host mode This bit is set by hardware when device connection or device disconnection is detected. Device connection is signaled after J state is sampled for 22 cycles consecutively from unconnected state. Device disconnection is signaled after SE0 state is seen for 22 bit times consecutively from connected state. */
    using USB_ISTR_RST_DCON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when no traffic has been received for 3 ms, indicating a suspend mode request from the USB bus. The suspend condition check is enabled immediately after any USB reset and it is disabled by the hardware when the suspend mode is active (SUSPEN=1) until the end of resume sequence. This bit is read/write but only 0 can be written and writing 1 has no effect. */
    using USB_ISTR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is set to 1 by the hardware when, during suspend mode, activity is detected that wakes up the USB peripheral. This event asynchronously clears the SUSPRDY bit in the CTLR register and activates the USB_WAKEUP line, which can be used to notify the rest of the device (for example wakeup unit) about the start of the resume process. This bit is read/write but only 0 can be written and writing 1 has no effect. */
    using USB_ISTR_WKUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This flag is set whenever one of the errors listed below has occurred: NANS:No ANSwer. The timeout for a host response has expired. CRC:Cyclic redundancy check error. One of the received CRCs, either in the token or in the data, was wrong. BST:Bit stuffing error. A bit stuffing error was detected anywhere in the PID, data, and/or CRC. FVIO:Framing format violation. A non-standard frame was received (EOP not in the right place, wrong token sequence, etc.). The USB software can usually ignore errors, since the USB peripheral and the PC host manage retransmission in case of errors in a fully transparent way. This interrupt can be useful during the software development phase, or to monitor the quality of transmission over the USB bus, to flag possible problems to the user (for example loose connector, too noisy environment, broken conductor in the USB cable and so on). This bit is read/write but only 0 can be written and writing 1 has no effect. */
    using USB_ISTR_ERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is set if the microcontroller has not been able to respond in time to an USB memory request. The USB peripheral handles this event in the following way: During reception an ACK handshake packet is not sent, during transmission a bit-stuff error is forced on the transmitted stream; in both cases the host retries the transaction. The PMAOVR interrupt should never occur during normal operations. Since the failed transaction is retried by the host, the application software has the chance to speed-up device operations during this interrupt handling, to be ready for the next transaction retry; however this does not happen during isochronous transfers (no isochronous transaction is anyway retried) leading to a loss of data in this case. This bit is read/write but only 0 can be written and writing 1 has no effect. */
    using USB_ISTR_PMAOVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is set by the hardware to indicate that an endpoint/channel has successfully completed a transaction; using DIR and IDN bits software can determine which endpoint/channel requested the interrupt. This bit is read-only. */
    using USB_ISTR_CTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is set to 1 by the hardware when 512 bytes have been transmitted or received during isochronous transfers. This bit is read/write but only 0 can be written and writing 1 has no effect. Note that no information is available to indicate the associated channel/endpoint, however in practice only one ISO endpoint/channel with such large packets can be supported, so that channel. */
    using USB_ISTR_THR512 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode This bit is set when a device connection is detected. This bit is read/write but only 0 can be written and writing 1 has no effect. */
    using USB_ISTR_DDISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Host mode: This bit contains information about device connection status. It is set by hardware when a LS/FS device is attached to the host while it is reset when the device is disconnected. 0: No device connected 1: FS or LS device connected to the host */
    using USB_ISTR_DCON_STAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No device connected (value: 0)
     *          - B_0x1: FS or LS device connected to the host (value: 1)
     */
        /** @brief No device connected */
    constexpr std::uint32_t USB_ISTR_DCON_STAT_B_0x0 = 0;
        /** @brief FS or LS device connected to the host */
    constexpr std::uint32_t USB_ISTR_DCON_STAT_B_0x1 = 1;

    /** @brief - Host mode: This bit is set by hardware when an LS device connection is detected. Device connection is signaled after LS J-state is sampled for 22 consecutive cycles of the USB clock (48 MHz) from the unconnected state. */
    using USB_ISTR_LS_DCON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB frame number register */
    using USB_FNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit field contains the 11-bits frame number contained in the last received SOF packet. The frame number is incremented for every frame sent by the host and it is useful for isochronous transfers. This bit field is updated on the generation of an SOF interrupt. */
    using USB_FNR_FN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits are written by the hardware when an ESOF interrupt is generated, counting the number of consecutive SOF packets lost. At the reception of an SOF packet, these bits are cleared. */
    using USB_FNR_LSOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the hardware when at least two consecutive SOF packets have been received after the end of an USB reset condition or after the end of an USB resume sequence. Once locked, the frame timer remains in this state until an USB reset or USB suspend event occurs. */
    using USB_FNR_LCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit can be used to observe the status of received data minus upstream port data line. It can be used during end-of-suspend routines to help determining the wakeup event. */
    using USB_FNR_RxDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit can be used to observe the status of received data plus upstream port data line. It can be used during end-of-suspend routines to help determining the wakeup event. */
    using USB_FNR_RxDP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB Device address */
    using USB_DADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain the USB function address assigned by the host PC during the enumeration process. Both this field and the endpoint/channel address (EA) field in the associated USB_CHEPnR register must match with the information contained in a USB token in order to handle a transaction to the required endpoint. - Host mode These bits contain the address transmitted with the LPM transaction */
    using USB_DADDR_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is set by the software to enable the USB Device. The address of this device is contained in the following ADD[6:0] bits. If this bit is at 0 no transactions are handled, irrespective of the settings of USB_CHEPnR registers. */
    using USB_DADDR_EF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM control and status register */
    using USB_LPMCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the software to enable the LPM support within the USB Device. If this bit is at 0 no LPM transactions are handled. */
    using USB_LPMCSR_LPMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode: The NYET/ACK is returned only on a successful LPM transaction: No errors in both the ExT token and the LPM token (else ERROR) A valid bLinkState = 0001B (L1) is received (else STALL) 0: the valid LPM token is NYET. 1: the valid LPM token is ACK. */
    using USB_LPMCSR_LPMACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the valid LPM token is NYET. (value: 0)
     *          - B_0x1: the valid LPM token is ACK. (value: 1)
     */
        /** @brief the valid LPM token is NYET. */
    constexpr std::uint32_t USB_LPMCSR_LPMACK_B_0x0 = 0;
        /** @brief the valid LPM token is ACK. */
    constexpr std::uint32_t USB_LPMCSR_LPMACK_B_0x1 = 1;

    /** @brief - Device mode This bit contains the bRemoteWake value received with last ACKed LPM Token */
    using USB_LPMCSR_REMWAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode These bits contain the BESL value received with last ACKed LPM Token */
    using USB_LPMCSR_BESL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Battery charging detector */
    using USB_BCDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the software to enable the BCD support within the USB Device. When enabled, the USB PHY is fully controlled by BCD and cannot be used for normal communication. Once the BCD discovery is finished, the BCD should be placed in OFF mode by clearing this bit to 0 in order to allow the normal USB operation. */
    using USB_BCDR_BCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the software to put the BCD into DCD mode. Only one detection mode (DCD, PD, SD or OFF) should be selected to work correctly. */
    using USB_BCDR_DCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the software to put the BCD into PD mode. Only one detection mode (DCD, PD, SD or OFF) should be selected to work correctly. */
    using USB_BCDR_PDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit is set by the software to put the BCD into SD mode. Only one detection mode (DCD, PD, SD or OFF) should be selected to work correctly. */
    using USB_BCDR_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - Device mode This bit gives the result of DCD. 0: data lines contact not detected. 1: data lines contact detected. */
    using USB_BCDR_DCDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data lines contact not detected. (value: 0)
     *          - B_0x1: data lines contact detected. (value: 1)
     */
        /** @brief data lines contact not detected. */
    constexpr std::uint32_t USB_BCDR_DCDET_B_0x0 = 0;
        /** @brief data lines contact detected. */
    constexpr std::uint32_t USB_BCDR_DCDET_B_0x1 = 1;

    /** @brief - Device mode This bit gives the result of PD. 0: no BCD support detected (connected to SDP or proprietary device). 1: BCD support detected (connected to ACA, CDP or DCP). */
    using USB_BCDR_PDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no BCD support detected (connected to SDP or proprietary device). (value: 0)
     *          - B_0x1: BCD support detected (connected to ACA, CDP or DCP). (value: 1)
     */
        /** @brief no BCD support detected (connected to SDP or proprietary device). */
    constexpr std::uint32_t USB_BCDR_PDET_B_0x0 = 0;
        /** @brief BCD support detected (connected to ACA, CDP or DCP). */
    constexpr std::uint32_t USB_BCDR_PDET_B_0x1 = 1;

    /** @brief - Device mode This bit gives the result of SD. 0: CDP detected. 1: DCP detected. */
    using USB_BCDR_SDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CDP detected. (value: 0)
     *          - B_0x1: DCP detected. (value: 1)
     */
        /** @brief CDP detected. */
    constexpr std::uint32_t USB_BCDR_SDET_B_0x0 = 0;
        /** @brief DCP detected. */
    constexpr std::uint32_t USB_BCDR_SDET_B_0x1 = 1;

    /** @brief - Device mode This bit is active only during PD and gives the result of comparison between DM voltage level and VLGC threshold. In normal situation, the DM level should be below this threshold. If it is above, it means that the DM is externally pulled high. This can be caused by connection to a PS2 port (which pulls-up both DP and DM lines) or to some proprietary charger not following the BCD specification. 0: Normal port detected (connected to SDP, ACA, CDP or DCP). 1: PS2 port or proprietary charger detected. */
    using USB_BCDR_PS2DET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal port detected (connected to SDP, ACA, CDP or DCP). (value: 0)
     *          - B_0x1: PS2 port or proprietary charger detected. (value: 1)
     */
        /** @brief Normal port detected (connected to SDP, ACA, CDP or DCP). */
    constexpr std::uint32_t USB_BCDR_PS2DET_B_0x0 = 0;
        /** @brief PS2 port or proprietary charger detected. */
    constexpr std::uint32_t USB_BCDR_PS2DET_B_0x1 = 1;

    /** @brief - Device mode This bit is set by software to enable the embedded pull-up on DP line. Clearing it to 0 can be used to signal disconnect to the host when needed by the user software. - Host mode This bit is set by software to enable the embedded pull-down on DP and DM lines. */
    using USB_BCDR_DPPU_DPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
