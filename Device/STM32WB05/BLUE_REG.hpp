/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB05_BLUE_REG_HPP
#define EMBEDDED_PP_STM32WB05_BLUE_REG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief BLUE_REG peripheral */
namespace STM32WB05::BLUE_REG {

    /** @brief INTERRUPT1REG register */
    using INTERRUPT1REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address Pointer Error. */
    using INTERRUPT1REG_ADDPOINTERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Overflow error. */
    using INTERRUPT1REG_RXOVERFLOWERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sequencer end of task. */
    using INTERRUPT1REG_SEQDONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 0: transmit block missing data error. */
    using INTERRUPT1REG_TXERROR_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 1: a TX skip happened during an on-going transmission. */
    using INTERRUPT1REG_TXERROR_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 2: channel index is greater than 39. */
    using INTERRUPT1REG_TXERROR_2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 3: error while waiting for the confirmation the Radio FSM is in TX state. */
    using INTERRUPT1REG_TXERROR_3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 4: a CTE issue occurred. */
    using INTERRUPT1REG_TXERROR_4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Encryption error on reception. */
    using INTERRUPT1REG_ENCERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief All RAM Table not ready on time. */
    using INTERRUPT1REG_ALLTABLEREADYERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data pack not ready error */
    using INTERRUPT1REG_TXDATAREADYERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GlobalStatMach. */
    using INTERRUPT1REG_NOACTIVELERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive length error. */
    using INTERRUPT1REG_RCVLENGTHERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore timeout error */
    using INTERRUPT1REG_SEMATIMEOUTERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission/Reception skip. */
    using INTERRUPT1REG_TXRXSKIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active2 Radio state error. */
    using INTERRUPT1REG_ACTIVE2ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data pointer configuration error. */
    using INTERRUPT1REG_CONFIGERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Previous transmitted packet received OK by the peer device. */
    using INTERRUPT1REG_TXOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive/Transmit done. */
    using INTERRUPT1REG_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive timeout (no preamble found). */
    using INTERRUPT1REG_RCVTIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received low MD bit. */
    using INTERRUPT1REG_RCVNOMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received command */
    using INTERRUPT1REG_RCVCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A time has been captured in TIMERCAPTUREREG. */
    using INTERRUPT1REG_TIMECAPTURETRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data fail */
    using INTERRUPT1REG_RCVCRCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data OK. */
    using INTERRUPT1REG_RCVOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INTERRUPT2REG register */
    using INTERRUPT2REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES manual encryption. */
    using INTERRUPT2REG_AESMANENCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES LE privacy engine. */
    using INTERRUPT2REG_AESLEPRIVINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMEOUTDESTREG register */
    using TIMEOUTDESTREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout timer Destination */
    using TIMEOUTDESTREG_DESTINATION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMEOUTREG register */
    using TIMEOUTREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer1 or Timer2 Timeout value (depending on Destination register) */
    using TIMEOUTREG_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMERCAPTUREREG register */
    using TIMERCAPTUREREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interpolated absolute time capture register */
    using TIMERCAPTUREREG_TIMERCAPTURE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CMDREG register */
    using CMDREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission/Reception skip command. */
    using CMDREG_TXRXSKIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore Clear command. */
    using CMDREG_CLEARSEMAREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STATUSREG register */
    using STATUSREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES on the fligh encryption busy status */
    using STATUSREG_AESONFLYBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief indicates the SW requests an unsupported feature. */
    using STATUSREG_NOTSUPPORTED_FUNCTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address Pointer Error status */
    using STATUSREG_ADDPOINTERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB arbiter is full and there is no more storage capability available in RX datapath */
    using STATUSREG_RXOVERFLOWERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Previous event was a Transmission (1) or Reception (0) status */
    using STATUSREG_PREVTRANSMIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sequencer end of task status. */
    using STATUSREG_SEQDONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 0 status: Transmit block missing data error. */
    using STATUSREG_TXERROR_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 1 status */
    using STATUSREG_TXERROR_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 2 status. */
    using STATUSREG_TXERROR_2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 3: error while waiting for the confirmation the Radio FSM is in TX state (timeout defined in GlobalStatMach. */
    using STATUSREG_TXERROR_3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 4 status */
    using STATUSREG_TXERROR_4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Encryption error on receive status */
    using STATUSREG_ENCERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief All RAM Table not ready status */
    using STATUSREG_ALLTABLEREADYERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data pack not ready status. */
    using STATUSREG_TXDATAREADYERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GlobalStatMach. */
    using STATUSREG_NOACTIVELERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive length error status */
    using STATUSREG_RCVLENGTHERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore timeout error status */
    using STATUSREG_SEMATIMEOUTERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission/Reception skip status. */
    using STATUSREG_TXRXSKIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicates the Radio FSM was not in ACTIVE2 state when the Sequencer reaches the end of 1st INIT step. */
    using STATUSREG_ACTIVE2ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data pointer configuration error status */
    using STATUSREG_CONFIGERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Previous transmitted packet received OK by the peer device status. */
    using STATUSREG_TXOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive/Transmit done status. */
    using STATUSREG_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive timeout status (no access address found) */
    using STATUSREG_RCVTIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received MD bit status (valid only on Data Physical Channel PDU reception) */
    using STATUSREG_RCVNOMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received command status (valid only on Data Physical Channel PDU reception). */
    using STATUSREG_RCVCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief indicates a time has been captured in TIMERCAPTUREREG when set. */
    using STATUSREG_TIMECAPTURETRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data fail (CRC error or invalid CI field) status. */
    using STATUSREG_RCVCRCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data OK status */
    using STATUSREG_RCVOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INTERRUPT1ENABLEREG register */
    using INTERRUPT1ENABLEREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address Pointer Error enable interruption */
    using INTERRUPT1ENABLEREG_ADDPOINTERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Overflow Error enable interruption */
    using INTERRUPT1ENABLEREG_RXOVERFLOWERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sequencer end of task enable interruption */
    using INTERRUPT1ENABLEREG_SEQDONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 0 enable interruption */
    using INTERRUPT1ENABLEREG_TXERROR_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 1 enable interruption */
    using INTERRUPT1ENABLEREG_TXERROR_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 2 enable interruption */
    using INTERRUPT1ENABLEREG_TXERROR_2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 3 enable interruption */
    using INTERRUPT1ENABLEREG_TXERROR_3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission error 4 enable interruption */
    using INTERRUPT1ENABLEREG_TXERROR_4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Encryption error on receive enable interruption */
    using INTERRUPT1ENABLEREG_ENCERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief All RAM Table not ready enable interruption */
    using INTERRUPT1ENABLEREG_ALLTABLEREADYERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data pack not ready enable interruption */
    using INTERRUPT1ENABLEREG_TXDATAREADYERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief active bit error enable interruption */
    using INTERRUPT1ENABLEREG_NOACTIVELERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive length error enable interruption */
    using INTERRUPT1ENABLEREG_RCVLENGTHERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore timeout error enable interruption */
    using INTERRUPT1ENABLEREG_SEMATIMEOUTERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission/Reception skip enable interruption */
    using INTERRUPT1ENABLEREG_TXRXSKIP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active2 Radio state error enable interruption */
    using INTERRUPT1ENABLEREG_ACTIVE2ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data pointer configuration error enable interruption */
    using INTERRUPT1ENABLEREG_CONFIGERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Previous transmitted packet received OK enable interruption */
    using INTERRUPT1ENABLEREG_TXOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive/Transmit done interruption */
    using INTERRUPT1ENABLEREG_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive timeout enable interruption (no preamble found) */
    using INTERRUPT1ENABLEREG_RCVTIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received MD bit embedded in the PDU data packet header was zero enable interruption */
    using INTERRUPT1ENABLEREG_RCVNOMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received command enable interruption */
    using INTERRUPT1ENABLEREG_RCVCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TimerCaptureReg time capture enable interruption */
    using INTERRUPT1ENABLEREG_TIMECAPTURETRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data fail enable interruption */
    using INTERRUPT1ENABLEREG_RCVCRCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data OK enable interruption */
    using INTERRUPT1ENABLEREG_RCVOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INTERRUPT1LATENCYREG register */
    using INTERRUPT1LATENCYREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief relative time counter started on irq_BLE_int1 (BLE_TXRX) occurrence. */
    using INTERRUPT1LATENCYREG_INTERRUPT1LATENCY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESKEY0REG register */
    using MANAESKEY0REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual mode AES key */
    using MANAESKEY0REG_MANAESKEY_31_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESKEY1REG register */
    using MANAESKEY1REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual mode AES key */
    using MANAESKEY1REG_MANAESKEY_63_32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESKEY2REG register */
    using MANAESKEY2REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual mode AES key */
    using MANAESKEY2REG_MANAESKEY_95_64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESKEY3REG register */
    using MANAESKEY3REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual mode AES key */
    using MANAESKEY3REG_MANAESKEY_127_96 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESCLEARTEXT0REG register */
    using MANAESCLEARTEXT0REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual Aes Clear Text */
    using MANAESCLEARTEXT0REG_AES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESCLEARTEXT1REG register */
    using MANAESCLEARTEXT1REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual Aes Clear Text */
    using MANAESCLEARTEXT1REG_AES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESCLEARTEXT2REG register */
    using MANAESCLEARTEXT2REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual Aes Clear Text */
    using MANAESCLEARTEXT2REG_AES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESCLEARTEXT3REG register */
    using MANAESCLEARTEXT3REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual Aes Clear Text */
    using MANAESCLEARTEXT3REG_AES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESCIPHERTEXT0REG register */
    using MANAESCIPHERTEXT0REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual AES Cipher Text */
    using MANAESCIPHERTEXT0REG_AES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESCIPHERTEXT1REG register */
    using MANAESCIPHERTEXT1REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual AES Cipher Text */
    using MANAESCIPHERTEXT1REG_AES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESCIPHERTEXT2REG register */
    using MANAESCIPHERTEXT2REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual AES Cipher Text */
    using MANAESCIPHERTEXT2REG_AES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESCIPHERTEXT3REG register */
    using MANAESCIPHERTEXT3REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manual AES Cipher Text */
    using MANAESCIPHERTEXT3REG_AES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESCMDREG register */
    using MANAESCMDREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Manual encryption Start command. */
    using MANAESCMDREG_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Manual encryption interrupt enable on Interrupt2Reg */
    using MANAESCMDREG_INTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MANAESSTATREG register */
    using MANAESSTATREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES manual encryption busy status */
    using MANAESSTATREG_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AESLEPRIVPOINTERREG register */
    using AESLEPRIVPOINTERREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Le privacy pointer */
    using AESLEPRIVPOINTERREG_POINTER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AESLEPRIVHASHREG register */
    using AESLEPRIVHASHREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Le privacy Reference Hash */
    using AESLEPRIVHASHREG_HASH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AESLEPRIVPRANDREG register */
    using AESLEPRIVPRANDREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Le privacy Prand */
    using AESLEPRIVPRANDREG_PRAND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AESLEPRIVCMDREG register */
    using AESLEPRIVCMDREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Le privacy Start command. */
    using AESLEPRIVCMDREG_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Le privacy interrupt enable on Interrupt2Reg */
    using AESLEPRIVCMDREG_INTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Le privacy number of keys pointed by AesLePrivPointerReg (points to the resolution key list. */
    using AESLEPRIVCMDREG_NBKEYS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AESLEPRIVSTATREG register */
    using AESLEPRIVSTATREG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Le privacy busy status */
    using AESLEPRIVSTATREG_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Le privacy key finding status */
    using AESLEPRIVSTATREG_KEYFND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AES Le privacy index of the key found in the resolution key list. */
    using AESLEPRIVSTATREG_KEYFNDINDEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STATUS2REG register */
    using STATUS2REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief indicates if IQ samples have been received on the last reception. */
    using STATUS2REG_IQSAMPLESREADY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief indicate the number of IQ samples stored in the RAM buffer addressed by StatMach. */
    using STATUS2REG_IQSAMPLESNUMBER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IQ sample internal buffer overflow error flag. */
    using STATUS2REG_IQSAMPLESMISSINGERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief timing error flag related to Antenna Pattern not read on-time. */
    using STATUS2REG_ANTENNASWITCHINGPATTERNACCESSERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB access error flag. */
    using STATUS2REG_ANTENNA_SWITCHING_PATTERN_ADDRESS_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
