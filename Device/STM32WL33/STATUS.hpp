/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_STATUS_HPP
#define EMBEDDED_PP_STM32WL33_STATUS_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief STATUS peripheral */
namespace STM32WL33::STATUS {

    /** @brief RFSEQ_IRQ_STATUS register */
    using RFSEQ_IRQ_STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission done flag */
    using RFSEQ_IRQ_STATUS_TX_DONE_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception ended and OK flag */
    using RFSEQ_IRQ_STATUS_RX_OK_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception timeout flag */
    using RFSEQ_IRQ_STATUS_RX_TIMEOUT_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reception with CRC error flag */
    using RFSEQ_IRQ_STATUS_RX_CRC_FRROR_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast RX Termination flag */
    using RFSEQ_IRQ_STATUS_FAST_RX_TERM_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on RXTIMER_STOP_CDT_F flag */
    using RFSEQ_IRQ_STATUS_RXTIMER_STOP_CDT_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SABORT command treated and done flag */
    using RFSEQ_IRQ_STATUS_SABORT_DONE_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command rejection flag. */
    using RFSEQ_IRQ_STATUS_COMMAND_REJECTED_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Carrier Sense (RSSI over threshold) flag */
    using RFSEQ_IRQ_STATUS_CS_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Valid PREAMBLE detection flag. */
    using RFSEQ_IRQ_STATUS_PREAMBLE_VALID_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Valid SYNC word detection flag. */
    using RFSEQ_IRQ_STATUS_SYNC_VALID_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Buffer 0 fully read in TX or fully written in RX flag */
    using RFSEQ_IRQ_STATUS_DATABUFFER0_USED_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Buffer 1 fully read in TX or fully written in RX flag */
    using RFSEQ_IRQ_STATUS_DATABUFFER1_USED_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Buffer0 used (written during a RX) up to programmed thresold flag */
    using RFSEQ_IRQ_STATUS_RX_ALMOST_FULL_0_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Buffer1 used (written during a RX) up to programmed thresold flag */
    using RFSEQ_IRQ_STATUS_RX_ALMOST_FULL_1_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Buffer0 used (read during a TX) up to programmed thresold flag */
    using RFSEQ_IRQ_STATUS_TX_ALMOST_EMPTY_0_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Buffer1 used (read during a TX) up to programmed thresold flag */
    using RFSEQ_IRQ_STATUS_TX_ALMOST_EMPTY_1_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief An AHB transfer issue occurred for one of the AHB masters (RRM, Data Buffer Manager, Sequencer). */
    using RFSEQ_IRQ_STATUS_AHB_ACCESS_ERROR_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog HW failure flag (PLL lock / unlock error, calibration error) */
    using RFSEQ_IRQ_STATUS_HW_ANA_FAILURE_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sequencer completion flag. */
    using RFSEQ_IRQ_STATUS_SEQ_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RRM-UDRA command list execution started flag. */
    using RFSEQ_IRQ_STATUS_RRM_CMD_START_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RRM-UDRA command list execution ended flag. */
    using RFSEQ_IRQ_STATUS_RRM_CMD_END_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Safe-ASK PA calibration flag. */
    using RFSEQ_IRQ_STATUS_SAFEASK_CALIB_DONE_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Valid RSSI value available in the RSSI_RUNNING bit field flag. */
    using RFSEQ_IRQ_STATUS_AGC_CALIB_DONE_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFSEQ_STATUS_DETAIL register */
    using RFSEQ_STATUS_DETAIL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Buffer Manager internal FIFO overflow/underflow flag. */
    using RFSEQ_STATUS_DETAIL_DBM_FIFO_ERROR_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL lock fail status flag */
    using RFSEQ_STATUS_DETAIL_PLL_LOCK_FAIL_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL unlock event flag */
    using RFSEQ_STATUS_DETAIL_PLL_UNLOCK_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCO frequency calibration error flag */
    using RFSEQ_STATUS_DETAIL_PLL_CALFREQ_ERROR_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCO amplitude calibration error flag */
    using RFSEQ_STATUS_DETAIL_PLL_CALAMP_ERROR_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The Sequencer has ended because the current SeqAction reached its ActionTimeout. */
    using RFSEQ_STATUS_DETAIL_SEQ_ACTIONTIMEOUT_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The Sequencer has ended the last defined SeqAction properly( NextAction math or null pointer) */
    using RFSEQ_STATUS_DETAIL_SEQ_COMPLETE_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RADIO_FSM_INFO register */
    using RADIO_FSM_INFO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief State of the Radio FSM */
    using RADIO_FSM_INFO_RADIO_FSM_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX_INDICATOR register */
    using RX_INDICATOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSSI level captured at the end of the SYNC word detection of the received packet. */
    using RX_INDICATOR_RSSI_LEVEL_ON_SYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Continuous level of the output of the measured RSSI value */
    using RX_INDICATOR_RSSI_LEVEL_RUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC word of the received packet. */
    using RX_INDICATOR_AGC_WORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Currently selected antenna */
    using RX_INDICATOR_ANT_SELECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX_INFO_REG register */
    using RX_INFO_REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicates received packet length in bytes: */
    using RX_INFO_REG_RX_PCKTLEN_OUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX_CRC_REG register */
    using RX_CRC_REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC field of the received packet (read-only info) */
    using RX_CRC_REG_RX_CRC_OUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief QI_INFO register */
    using QI_INFO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble Quality Indicator (PQI) value of the received packet. */
    using QI_INFO_PQI_INFO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNC Quality Indicator (SQI) value of the received packet. */
    using QI_INFO_SQI_INFO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate if measured SQI refers to SYNC word or secondary SYNC word */
    using QI_INFO_SQI_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFC value frozen at sync reception. */
    using QI_INFO_AFC_CORRECTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATABUFFER_INFO register */
    using DATABUFFER_INFO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicates the number of bytes used in the last used DATA BUFFER. */
    using DATABUFFER_INFO_CURRENT_DATABUFFER_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Provides the number of data buffers which have been fully used */
    using DATABUFFER_INFO_NB_DATABUFFER_USED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicates which Data Buffer is currently used by the HW */
    using DATABUFFER_INFO_CURRENT_DATABUFFER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIME_CAPTURE register */
    using TIME_CAPTURE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interpolated absolute time value captured on specific programmable event through TIME_CAPTURESEL[2:0] bit field. */
    using TIME_CAPTURE_TIME_CAPTURE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IQC_CORRECTION_OUT register */
    using IQC_CORRECTION_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Final correction value output from IQC (compensation engine). */
    using IQC_CORRECTION_OUT_IQC_CORRECT_OUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA_SAFEASK_OUT register */
    using PA_SAFEASK_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Safe ASK level (provided after a CALIB_SAFEASK command), indicating the maximum PA Power to program before reaching ohmic saturation. */
    using PA_SAFEASK_OUT_PA_CODEMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCO_CALIB_OUT register */
    using VCO_CALIB_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCO frequency calibration value currently output by the VCO calibration block (and applied on the VCO when ON) */
    using VCO_CALIB_OUT_VCO_CALFREQ_OUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCO amplitude calibration value currently output by the VCO calibration block (and applied on the VCO when ON) */
    using VCO_CALIB_OUT_VCO_CALAMP_OUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEQ_INFO register */
    using SEQ_INFO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current state of the Sequencer */
    using SEQ_INFO_SEQ_FSM_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEQ_EVENT_STATUS register */
    using SEQ_EVENT_STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current value of the seq_event_status used by the Sequencer for next action mask comparison. */
    using SEQ_EVENT_STATUS_SEQ_EVENT_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
