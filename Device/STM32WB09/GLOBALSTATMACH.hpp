/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB09_GLOBALSTATMACH_HPP
#define EMBEDDED_PP_STM32WB09_GLOBALSTATMACH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GLOBALSTATMACH peripheral */
namespace STM32WB09::GLOBALSTATMACH {

    /** @brief WORD0 register */
    using WORD0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Radio Configuration address Pointer. */
    using WORD0_RadioConfigPtr = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WORD1 register */
    using WORD1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief current connection machine number. */
    using WORD1_CurStMachNum = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Must be at '1' when the trig event (Wakeup Timer, Timer1 or Timer2) occurs to starts a Bluetooth LE link layer sequence. */
    using WORD1_Active = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay between wakeup timer trig event on Sequencer and RX/TX request sending to the Radio FSM. */
    using WORD1_WakeupInitDelay = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay between Timer1 or Timer2 trig event on Sequencer and RX/TX request sending to the Radio FSM. */
    using WORD1_Timer12InitDelayCal = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay between Timer2 trig event on Sequencer and RX/TX request sending to the Radio FSM. */
    using WORD1_Timer2InitDelayNoCal = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WORD2 register */
    using WORD2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay between TX request sent to the Radio FSM and the start pulse sent to the transmit block. */
    using WORD2_TransmitCalDelayChk = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay between TX request sent to the Radio FSM and the start pulse to the transmit block. */
    using WORD2_TransmitNoCalDelayChk = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay between RX request sent to the Radio FSM and the start pulse sent to the receive block. */
    using WORD2_ReceiveCalDelayChk = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay between RX request sent to the Radio FSM and the start pulse to the receive block. */
    using WORD2_ReceiveNoCalDelayChk = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WORD3 register */
    using WORD3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Duration for the Sequencer to execute the final configuration. */
    using WORD3_ConfigEndDuration = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Duration for the Sequencer to get the TxDataReady and DataPtr information in TxRxPack table. */
    using WORD3_TxdataReadyCheck = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay added between the moment the Radio FSM is in TX mode (PA ramp up done and power present on the antenna) and the first bit transmission to the modulator. */
    using WORD3_TxdelayStart = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay added between the last bit transmission to the modulator and the end of transmission information for the Sequencer. */
    using WORD3_TxdelayEnd = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - 0: the captured time (absolute time) corresponds to the end of 1st INIT step in the sequence (InitDelay timeout event). */
    using WORD3_TimeCaptureSel = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - 0: No capture is requested to monitor the Bluetooth LE sequence. */
    using WORD3_TimeCapture = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WORD4 register */
    using WORD4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission ready timeout. */
    using WORD4_TxReadyTimeout = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive window timeout. */
    using WORD4_RcvTimeout = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WORD5 register */
    using WORD5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic transfer (TX or RX) skip enable. */
    using WORD5_AutoTxRxskipEn = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active bit Auto Clear Enable. */
    using WORD5_ChkFlagAutoClearEna = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address pointer error interrupt enable. */
    using WORD5_IntAddPointError = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief All table ready error interrupt enable. */
    using WORD5_IntAllTableReadyError = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission data payload ready error interrupt enable. */
    using WORD5_IntTxDataReadyError = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active bit low value reading interrupt enable. */
    using WORD5_IntNoActiveLError = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Too long received payload length interrupt enable. */
    using WORD5_IntRcvLengthError = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Semaphore timeout error interrupt enable. */
    using WORD5_IntSemaTimeoutError = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sequencer end of task interrupt enable. */
    using WORD5_IntSeqDone = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission or reception skip interrupt enable. */
    using WORD5_intTxRxSkip = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief not in ACTIVE2 information from Radio FSM received on time interrupt enable. */
    using WORD5_IntActive2Err = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configuration error interrupt enable. */
    using WORD5_IntConfigError = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WORD6 register */
    using WORD6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Default Antenna ID corresponding to the number of the antenna used to receive/transmit: */
    using WORD6_DefaultAntennaID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
