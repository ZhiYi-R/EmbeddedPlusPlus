/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_CEC_HPP
#define EMBEDDED_PP_STM32H7S_CEC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief HDMI-CEC controller */
namespace STM32H7S::CEC {

    /** @brief CEC control register */
    using CEC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CEC enable The CECEN bit is set and cleared by software. CECEN = 1 starts message reception and enables the TXSOM control. CECEN = 0 disables the CEC peripheral, clears all bits of CEC_CR register and aborts any on-going reception or transmission. */
    using CEC_CR_CECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CEC peripheral is off. (value: 0)
     *          - B_0x1: CEC peripheral is on. (value: 1)
     */
        /** @brief CEC peripheral is off. */
    constexpr std::uint32_t CEC_CR_CECEN_B_0x0 = 0;
        /** @brief CEC peripheral is on. */
    constexpr std::uint32_t CEC_CR_CECEN_B_0x1 = 1;

    /** @brief Tx start of message TXSOM is set by software to command transmission of the first byte of a CEC message. If the CEC message consists of only one byte, TXEOM must be set before of TXSOM. Start-bit is effectively started on the CEC line after SFT is counted. If TXSOM is set while a message reception is ongoing, transmission starts after the end of reception. TXSOM is cleared by hardware after the last byte of the message is sent with a positive acknowledge (TXEND = 1), in case of transmission underrun (TXUDR = 1), negative acknowledge (TXACKE = 1), and transmission error (TXERR = 1). It is also cleared by CECEN = 0. It is not cleared and transmission is automatically retried in case of arbitration lost (ARBLST = 1). TXSOM can be also used as a status bit informing application whether any transmission request is pending or under execution. The application can abort a transmission request at any time by clearing the CECEN bit. Note: TXSOM must be set when CECEN = 1. Note: TXSOM must be set when transmission data is available into TXDR. Note: HEADER first four bits containing own peripheral address are taken from TXDR[7:4], not from CEC_CFGR.OAR that is used only for reception. */
    using CEC_CR_TXSOM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No CEC transmission is on-going (value: 0)
     *          - B_0x1: CEC transmission command (value: 1)
     */
        /** @brief No CEC transmission is on-going */
    constexpr std::uint32_t CEC_CR_TXSOM_B_0x0 = 0;
        /** @brief CEC transmission command */
    constexpr std::uint32_t CEC_CR_TXSOM_B_0x1 = 1;

    /** @brief Tx end of message The TXEOM bit is set by software to command transmission of the last byte of a CEC message. TXEOM is cleared by hardware at the same time and under the same conditions as for TXSOM. Note: TXEOM must be set when CECEN = 1. Note: TXEOM must be set before writing transmission data to TXDR. Note: If TXEOM is set when TXSOM = 0, transmitted message consists of 1 byte (HEADER) only (PING message). */
    using CEC_CR_TXEOM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXDR data byte is transmitted with EOM = 0 (value: 0)
     *          - B_0x1: TXDR data byte is transmitted with EOM = 1 (value: 1)
     */
        /** @brief TXDR data byte is transmitted with EOM = 0 */
    constexpr std::uint32_t CEC_CR_TXEOM_B_0x0 = 0;
        /** @brief TXDR data byte is transmitted with EOM = 1 */
    constexpr std::uint32_t CEC_CR_TXEOM_B_0x1 = 1;

    /** @brief CEC configuration register */
    using CEC_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal free time SFT bits are set by software. In the SFT = 0x0 configuration, the number of nominal data bit periods waited before transmission is ruled by hardware according to the transmission history. In all the other configurations the SFT number is determined by software. 0x0 2.5 data-bit periods if CEC is the last bus initiator with unsuccessful transmission (ARBLST = 1, TXERR = 1, TXUDR = 1 or TXACKE = 1) 4 data-bit periods if CEC is the new bus initiator 6 data-bit periods if CEC is the last bus initiator with successful transmission (TXEOM = 1) */
    using CEC_CFGR_SFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 0.5 nominal data bit periods (value: 1)
     *          - B_0x2: 1.5 nominal data bit periods (value: 2)
     *          - B_0x3: 2.5 nominal data bit periods (value: 3)
     *          - B_0x4: 3.5 nominal data bit periods (value: 4)
     *          - B_0x5: 4.5 nominal data bit periods (value: 5)
     *          - B_0x6: 5.5 nominal data bit periods (value: 6)
     *          - B_0x7: 6.5 nominal data bit periods (value: 7)
     */
        /** @brief 0.5 nominal data bit periods */
    constexpr std::uint32_t CEC_CFGR_SFT_B_0x1 = 1;
        /** @brief 1.5 nominal data bit periods */
    constexpr std::uint32_t CEC_CFGR_SFT_B_0x2 = 2;
        /** @brief 2.5 nominal data bit periods */
    constexpr std::uint32_t CEC_CFGR_SFT_B_0x3 = 3;
        /** @brief 3.5 nominal data bit periods */
    constexpr std::uint32_t CEC_CFGR_SFT_B_0x4 = 4;
        /** @brief 4.5 nominal data bit periods */
    constexpr std::uint32_t CEC_CFGR_SFT_B_0x5 = 5;
        /** @brief 5.5 nominal data bit periods */
    constexpr std::uint32_t CEC_CFGR_SFT_B_0x6 = 6;
        /** @brief 6.5 nominal data bit periods */
    constexpr std::uint32_t CEC_CFGR_SFT_B_0x7 = 7;

    /** @brief Rx-tolerance The RXTOL bit is set and cleared by software. Start-bit, +/- 200 s rise, +/- 200 s fall Data-bit: +/- 200 s rise. +/- 350 s fall Start-bit: +/- 400 s rise, +/- 400 s fall Data-bit: +/-300 s rise, +/- 500 s fall */
    using CEC_CFGR_RXTOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard tolerance margin: (value: 0)
     *          - B_0x1: Extended tolerance (value: 1)
     */
        /** @brief Standard tolerance margin: */
    constexpr std::uint32_t CEC_CFGR_RXTOL_B_0x0 = 0;
        /** @brief Extended tolerance */
    constexpr std::uint32_t CEC_CFGR_RXTOL_B_0x1 = 1;

    /** @brief Rx-stop on bit rising error The BRESTP bit is set and cleared by software. */
    using CEC_CFGR_BRESTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BRE detection does not stop reception of the CEC message. Data bit is sampled at 1.05 ms. (value: 0)
     *          - B_0x1: BRE detection stops message reception. (value: 1)
     */
        /** @brief BRE detection does not stop reception of the CEC message. Data bit is sampled at 1.05 ms. */
    constexpr std::uint32_t CEC_CFGR_BRESTP_B_0x0 = 0;
        /** @brief BRE detection stops message reception. */
    constexpr std::uint32_t CEC_CFGR_BRESTP_B_0x1 = 1;

    /** @brief Generate error-bit on bit rising error The BREGEN bit is set and cleared by software. Note: If BRDNOGEN = 0, an error-bit is generated upon BRE detection with BRESTP = 1 in broadcast even if BREGEN = 0. */
    using CEC_CFGR_BREGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BRE detection does not generate an error-bit on the CEC line. (value: 0)
     *          - B_0x1: BRE detection generates an error-bit on the CEC line (if BRESTP is set). (value: 1)
     */
        /** @brief BRE detection does not generate an error-bit on the CEC line. */
    constexpr std::uint32_t CEC_CFGR_BREGEN_B_0x0 = 0;
        /** @brief BRE detection generates an error-bit on the CEC line (if BRESTP is set). */
    constexpr std::uint32_t CEC_CFGR_BREGEN_B_0x1 = 1;

    /** @brief Generate error-bit on long bit period error The LBPEGEN bit is set and cleared by software. Note: If BRDNOGEN = 0, an error-bit is generated upon LBPE detection in broadcast even if LBPEGEN = 0. */
    using CEC_CFGR_LBPEGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LBPE detection does not generate an error-bit on the CEC line. (value: 0)
     *          - B_0x1: LBPE detection generates an error-bit on the CEC line. (value: 1)
     */
        /** @brief LBPE detection does not generate an error-bit on the CEC line. */
    constexpr std::uint32_t CEC_CFGR_LBPEGEN_B_0x0 = 0;
        /** @brief LBPE detection generates an error-bit on the CEC line. */
    constexpr std::uint32_t CEC_CFGR_LBPEGEN_B_0x1 = 1;

    /** @brief Avoid error-bit generation in broadcast The BRDNOGEN bit is set and cleared by software. error-bit on the CEC line. LBPE detection with LBPEGEN = 0 on a broadcast message generates an error-bit on the CEC line. */
    using CEC_CFGR_BRDNOGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BRE detection with BRESTP = 1 and BREGEN = 0 on a broadcast message generates an (value: 0)
     *          - B_0x1: Error-bit is not generated in the same condition as above. An error-bit is not generated even in case of an SBPE detection in a broadcast message if listen mode is set. (value: 1)
     */
        /** @brief BRE detection with BRESTP = 1 and BREGEN = 0 on a broadcast message generates an */
    constexpr std::uint32_t CEC_CFGR_BRDNOGEN_B_0x0 = 0;
        /** @brief Error-bit is not generated in the same condition as above. An error-bit is not generated even in case of an SBPE detection in a broadcast message if listen mode is set. */
    constexpr std::uint32_t CEC_CFGR_BRDNOGEN_B_0x1 = 1;

    /** @brief SFT option bit The SFTOPT bit is set and cleared by software. */
    using CEC_CFGR_SFTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SFT timer starts when TXSOM is set by software. (value: 0)
     *          - B_0x1: SFT timer starts automatically at the end of message transmission/reception. (value: 1)
     */
        /** @brief SFT timer starts when TXSOM is set by software. */
    constexpr std::uint32_t CEC_CFGR_SFTOP_B_0x0 = 0;
        /** @brief SFT timer starts automatically at the end of message transmission/reception. */
    constexpr std::uint32_t CEC_CFGR_SFTOP_B_0x1 = 1;

    /** @brief Own addresses configuration The OAR bits are set by software to select which destination logical addresses has to be considered in receive mode. Each bit, when set, enables the CEC logical address identified by the given bit position. At the end of HEADER reception, the received destination address is compared with the enabled addresses. In case of matching address, the incoming message is acknowledged and received. In case of non-matching address, the incoming message is received only in listen mode (LSTN = 1), but without acknowledge sent. Broadcast messages are always received. Example: OAR = 0b000 0000 0010 0001 means that CEC acknowledges addresses 0x0 and 0x5. Consequently, each message directed to one of these addresses is received. */
    using CEC_CFGR_OAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Listen mode LSTN bit is set and cleared by software. */
    using CEC_CFGR_LSTN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CEC peripheral receives only message addressed to its own address (OAR). Messages addressed to different destination are ignored. Broadcast messages are always received. (value: 0)
     *          - B_0x1: CEC peripheral receives messages addressed to its own address (OAR) with positive acknowledge. Messages addressed to different destination are received, but without interfering with the CEC bus: no acknowledge sent. (value: 1)
     */
        /** @brief CEC peripheral receives only message addressed to its own address (OAR). Messages addressed to different destination are ignored. Broadcast messages are always received. */
    constexpr std::uint32_t CEC_CFGR_LSTN_B_0x0 = 0;
        /** @brief CEC peripheral receives messages addressed to its own address (OAR) with positive acknowledge. Messages addressed to different destination are received, but without interfering with the CEC bus: no acknowledge sent. */
    constexpr std::uint32_t CEC_CFGR_LSTN_B_0x1 = 1;

    /** @brief CEC Tx data register */
    using CEC_TXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx data TXD is a write-only register containing the data byte to be transmitted. */
    using CEC_TXDR_TXD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CEC Rx data register */
    using CEC_RXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx data RXD is read-only and contains the last data byte that has been received from the CEC line. */
    using CEC_RXDR_RXD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CEC interrupt and status register */
    using CEC_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx-byte received The RXBR bit is set by hardware to inform application that a new byte has been received from the CEC line and stored into the RXD buffer. RXBR is cleared by software write at 1. */
    using CEC_ISR_RXBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of reception RXEND is set by hardware to inform application that the last byte of a CEC message is received from the CEC line and stored into the RXD buffer. RXEND is set at the same time of RXBR. RXEND is cleared by software write at 1. */
    using CEC_ISR_RXEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx-overrun RXOVR is set by hardware if RXBR is not yet cleared at the time a new byte is received on the CEC line and stored into RXD. RXOVR assertion stops message reception so that no acknowledge is sent. In case of broadcast, a negative acknowledge is sent. RXOVR is cleared by software write at 1. */
    using CEC_ISR_RXOVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx-bit rising error BRE is set by hardware in case a data-bit waveform is detected with bit rising error. BRE is set either at the time the misplaced rising edge occurs, or at the end of the maximum BRE tolerance allowed by RXTOL, in case rising edge is still longing. BRE stops message reception if BRESTP = 1. BRE generates an error-bit on the CEC line if BREGEN = 1. BRE is cleared by software write at 1. */
    using CEC_ISR_BRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx-short bit period error SBPE is set by hardware in case a data-bit waveform is detected with short bit period error. SBPE is set at the time the anticipated falling edge occurs. SBPE generates an error-bit on the CEC line. SBPE is cleared by software write at 1. */
    using CEC_ISR_SBPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx-long bit period error LBPE is set by hardware in case a data-bit waveform is detected with long bit period error. LBPE is set at the end of the maximum bit-extension tolerance allowed by RXTOL, in case falling edge is still longing. LBPE always stops reception of the CEC message. LBPE generates an error-bit on the CEC line if LBPEGEN = 1. In case of broadcast, error-bit is generated even in case of LBPEGEN = 0. LBPE is cleared by software write at 1. */
    using CEC_ISR_LBPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx-missing acknowledge In receive mode, RXACKE is set by hardware to inform application that no acknowledge was seen on the CEC line. RXACKE applies only for broadcast messages and in listen mode also for not directly addressed messages (destination address not enabled in OAR). RXACKE aborts message reception. RXACKE is cleared by software write at 1. */
    using CEC_ISR_RXACKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Arbitration lost ARBLST is set by hardware to inform application that CEC device is switching to reception due to arbitration lost event following the TXSOM command. ARBLST can be due either to a contending CEC device starting earlier or starting at the same time but with higher HEADER priority. After ARBLST assertion TXSOM bit keeps pending for next transmission attempt. ARBLST is cleared by software write at 1. */
    using CEC_ISR_ARBLST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx-byte request TXBR is set by hardware to inform application that the next transmission data has to be written to TXDR. TXBR is set when the 4th bit of currently transmitted byte is sent. Application must write the next byte to TXDR within six nominal data-bit periods before transmission underrun error occurs (TXUDR). TXBR is cleared by software write at 1. */
    using CEC_ISR_TXBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of transmission TXEND is set by hardware to inform application that the last byte of the CEC message has been successfully transmitted. TXEND clears the TXSOM and TXEOM control bits. TXEND is cleared by software write at 1. */
    using CEC_ISR_TXEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx-buffer underrun In transmission mode, TXUDR is set by hardware if application was not in time to load TXDR before of next byte transmission. TXUDR aborts message transmission and clears TXSOM and TXEOM control bits. TXUDR is cleared by software write at 1 */
    using CEC_ISR_TXUDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx-error In transmission mode, TXERR is set by hardware if the CEC initiator detects low impedance on the CEC line while it is released. TXERR aborts message transmission and clears TXSOM and TXEOM controls. TXERR is cleared by software write at 1. */
    using CEC_ISR_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx-missing acknowledge error In transmission mode, TXACKE is set by hardware to inform application that no acknowledge was received. In case of broadcast transmission, TXACKE informs application that a negative acknowledge was received. TXACKE aborts message transmission and clears TXSOM and TXEOM controls. TXACKE is cleared by software write at 1. */
    using CEC_ISR_TXACKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CEC interrupt enable register */
    using CEC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx-byte received interrupt enable The RXBRIE bit is set and cleared by software. */
    using CEC_IER_RXBRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXBR interrupt disabled (value: 0)
     *          - B_0x1: RXBR interrupt enabled (value: 1)
     */
        /** @brief RXBR interrupt disabled */
    constexpr std::uint32_t CEC_IER_RXBRIE_B_0x0 = 0;
        /** @brief RXBR interrupt enabled */
    constexpr std::uint32_t CEC_IER_RXBRIE_B_0x1 = 1;

    /** @brief End of reception interrupt enable The RXENDIE bit is set and cleared by software. */
    using CEC_IER_RXENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXEND interrupt disabled (value: 0)
     *          - B_0x1: RXEND interrupt enabled (value: 1)
     */
        /** @brief RXEND interrupt disabled */
    constexpr std::uint32_t CEC_IER_RXENDIE_B_0x0 = 0;
        /** @brief RXEND interrupt enabled */
    constexpr std::uint32_t CEC_IER_RXENDIE_B_0x1 = 1;

    /** @brief Rx-buffer overrun interrupt enable The RXOVRIE bit is set and cleared by software. */
    using CEC_IER_RXOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXOVR interrupt disabled (value: 0)
     *          - B_0x1: RXOVR interrupt enabled (value: 1)
     */
        /** @brief RXOVR interrupt disabled */
    constexpr std::uint32_t CEC_IER_RXOVRIE_B_0x0 = 0;
        /** @brief RXOVR interrupt enabled */
    constexpr std::uint32_t CEC_IER_RXOVRIE_B_0x1 = 1;

    /** @brief Bit rising error interrupt enable The BREIE bit is set and cleared by software. */
    using CEC_IER_BREIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BRE interrupt disabled (value: 0)
     *          - B_0x1: BRE interrupt enabled (value: 1)
     */
        /** @brief BRE interrupt disabled */
    constexpr std::uint32_t CEC_IER_BREIE_B_0x0 = 0;
        /** @brief BRE interrupt enabled */
    constexpr std::uint32_t CEC_IER_BREIE_B_0x1 = 1;

    /** @brief Short bit period error interrupt enable The SBPEIE bit is set and cleared by software. */
    using CEC_IER_SBPEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SBPE interrupt disabled (value: 0)
     *          - B_0x1: SBPE interrupt enabled (value: 1)
     */
        /** @brief SBPE interrupt disabled */
    constexpr std::uint32_t CEC_IER_SBPEIE_B_0x0 = 0;
        /** @brief SBPE interrupt enabled */
    constexpr std::uint32_t CEC_IER_SBPEIE_B_0x1 = 1;

    /** @brief Long bit period error interrupt enable The LBPEIE bit is set and cleared by software. */
    using CEC_IER_LBPEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LBPE interrupt disabled (value: 0)
     *          - B_0x1: LBPE interrupt enabled (value: 1)
     */
        /** @brief LBPE interrupt disabled */
    constexpr std::uint32_t CEC_IER_LBPEIE_B_0x0 = 0;
        /** @brief LBPE interrupt enabled */
    constexpr std::uint32_t CEC_IER_LBPEIE_B_0x1 = 1;

    /** @brief Rx-missing acknowledge error interrupt enable The RXACKIE bit is set and cleared by software. */
    using CEC_IER_RXACKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXACKE interrupt disabled (value: 0)
     *          - B_0x1: RXACKE interrupt enabled (value: 1)
     */
        /** @brief RXACKE interrupt disabled */
    constexpr std::uint32_t CEC_IER_RXACKIE_B_0x0 = 0;
        /** @brief RXACKE interrupt enabled */
    constexpr std::uint32_t CEC_IER_RXACKIE_B_0x1 = 1;

    /** @brief Arbitration lost interrupt enable The ARBLSTIE bit is set and cleared by software. */
    using CEC_IER_ARBLSTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARBLST interrupt disabled (value: 0)
     *          - B_0x1: ARBLST interrupt enabled (value: 1)
     */
        /** @brief ARBLST interrupt disabled */
    constexpr std::uint32_t CEC_IER_ARBLSTIE_B_0x0 = 0;
        /** @brief ARBLST interrupt enabled */
    constexpr std::uint32_t CEC_IER_ARBLSTIE_B_0x1 = 1;

    /** @brief Tx-byte request interrupt enable The TXBRIE bit is set and cleared by software. */
    using CEC_IER_TXBRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXBR interrupt disabled (value: 0)
     *          - B_0x1: TXBR interrupt enabled (value: 1)
     */
        /** @brief TXBR interrupt disabled */
    constexpr std::uint32_t CEC_IER_TXBRIE_B_0x0 = 0;
        /** @brief TXBR interrupt enabled */
    constexpr std::uint32_t CEC_IER_TXBRIE_B_0x1 = 1;

    /** @brief Tx-end of message interrupt enable The TXENDIE bit is set and cleared by software. */
    using CEC_IER_TXENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXEND interrupt disabled (value: 0)
     *          - B_0x1: TXEND interrupt enabled (value: 1)
     */
        /** @brief TXEND interrupt disabled */
    constexpr std::uint32_t CEC_IER_TXENDIE_B_0x0 = 0;
        /** @brief TXEND interrupt enabled */
    constexpr std::uint32_t CEC_IER_TXENDIE_B_0x1 = 1;

    /** @brief Tx-underrun interrupt enable The TXUDRIE bit is set and cleared by software. */
    using CEC_IER_TXUDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXUDR interrupt disabled (value: 0)
     *          - B_0x1: TXUDR interrupt enabled (value: 1)
     */
        /** @brief TXUDR interrupt disabled */
    constexpr std::uint32_t CEC_IER_TXUDRIE_B_0x0 = 0;
        /** @brief TXUDR interrupt enabled */
    constexpr std::uint32_t CEC_IER_TXUDRIE_B_0x1 = 1;

    /** @brief Tx-error interrupt enable The TXERRIE bit is set and cleared by software. */
    using CEC_IER_TXERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXERR interrupt disabled (value: 0)
     *          - B_0x1: TXERR interrupt enabled (value: 1)
     */
        /** @brief TXERR interrupt disabled */
    constexpr std::uint32_t CEC_IER_TXERRIE_B_0x0 = 0;
        /** @brief TXERR interrupt enabled */
    constexpr std::uint32_t CEC_IER_TXERRIE_B_0x1 = 1;

    /** @brief Tx-missing acknowledge error interrupt enable The TXACKEIE bit is set and cleared by software. */
    using CEC_IER_TXACKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXACKE interrupt disabled (value: 0)
     *          - B_0x1: TXACKE interrupt enabled (value: 1)
     */
        /** @brief TXACKE interrupt disabled */
    constexpr std::uint32_t CEC_IER_TXACKIE_B_0x0 = 0;
        /** @brief TXACKE interrupt enabled */
    constexpr std::uint32_t CEC_IER_TXACKIE_B_0x1 = 1;

}

#endif
