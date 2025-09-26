/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_DYNAMIC_REG_HPP
#define EMBEDDED_PP_STM32WL33_DYNAMIC_REG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DYNAMIC_REG peripheral */
namespace STM32WL33::DYNAMIC_REG {

    /** @brief PCKTLEN_CONFIG register */
    using PCKTLEN_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit field has different meanings/usages: */
    using PCKTLEN_CONFIG_PCKTLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MOD0_CONFIG register */
    using MOD0_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The mantissa of the specified data rate (default: 38. */
    using MOD0_CONFIG_DATARATE_M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The exponent of the specified data rate (default: 38. */
    using MOD0_CONFIG_DATARATE_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the modulation type */
    using MOD0_CONFIG_MOD_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Also known as FOUR_GFSK_CONST_MAP */
    using MOD0_CONFIG_CONST_MAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select BT value for GFSK */
    using MOD0_CONFIG_BT_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the clock on analog PA in LOCKONTX state */
    using MOD0_CONFIG_PA_CLKON_LOCKONTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MOD1_CONFIG register */
    using MOD1_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mantissa of the frequency deviation (default: 28. */
    using MOD1_CONFIG_FDEV_M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Exponent of the frequency deviation (default: 28. */
    using MOD1_CONFIG_FDEV_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mantissa of the channel filter BW (default: 100 kHz) */
    using MOD1_CONFIG_CHFLT_M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Exponent of the channel filter BW (default: 100 kHz) */
    using MOD1_CONFIG_CHFLT_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNYTH_FREQ register */
    using SNYTH_FREQ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fractional part of the PLL fractional divide factor (default: 868 MHz, XTAL: 48 MHz) */
    using SNYTH_FREQ_SYNTH_FRAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL integer divide factor (default: 868 MHz, XTAL: 48 MHz) */
    using SNYTH_FREQ_SYNTH_INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synthesizer band selector, i. */
    using SNYTH_FREQ_BS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCO_CAL_CONFIG register */
    using VCO_CAL_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCO magnitude calibration word in thermometric code */
    using VCO_CAL_CONFIG_VCO_CALAMP_EXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the mode to provide an external VCO amplitude calibration value through VCO_CALAMP_EXT bit field */
    using VCO_CAL_CONFIG_VCO_CALAMP_EXT_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCO Cbank frequency calibration word. */
    using VCO_CAL_CONFIG_VCO_CALFREQ_EXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the mode to provide an external VCO frequency calibration value through VCO_CALFREQ_EXT bit field */
    using VCO_CAL_CONFIG_VCO_CALFREQ_EXT_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Define if the Radio FSM must launch a VCO calibration request after VCO start-up */
    using VCO_CAL_CONFIG_VCO_CALIB_REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX_TIMER register */
    using RX_TIMER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX timer timeout (relative duration in interpolated absolute time unit) */
    using RX_TIMER_RX_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 23, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - 0: CS flag does not contribute to timeout disabling */
    using RX_TIMER_RX_CS_TIMEOUT_MASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - 0: PREAMBLE valid flag does not contribute to timeout disabling */
    using RX_TIMER_RX_PQI_TIMEOUT_MASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief - 0: SYNC valid flag does not contribute to timeout disabling */
    using RX_TIMER_RX_SQI_TIMEOUT_MASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select logical OR or logcial AND to apply on CS/PQI/SQI timeout mask */
    using RX_TIMER_RX_OR_nAND_SELECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATABUFFER_THR register */
    using DATABUFFER_THR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Almost Full threshold for RX Data Buffers */
    using DATABUFFER_THR_RX_ALMOST_FULL_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Almost Empty threshold for TX Data Buffers. */
    using DATABUFFER_THR_TX_ALMOST_EMPTY_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFSEQ_IRQ_ENABLE register */
    using RFSEQ_IRQ_ENABLE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on TX_DONE_F flag */
    using RFSEQ_IRQ_ENABLE_TX_DONE_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on RX_OK_F flag */
    using RFSEQ_IRQ_ENABLE_RX_OK_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on RX_TIMEOUT_F flag */
    using RFSEQ_IRQ_ENABLE_RX_TIMEOUT_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on RX_CRC_ERROR_F flag */
    using RFSEQ_IRQ_ENABLE_RX_CRC_ERROR_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on FAST_RX_TERM_F flag */
    using RFSEQ_IRQ_ENABLE_FAST_RX_TERM_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on RXTIMER_STOP_CDT_F flag */
    using RFSEQ_IRQ_ENABLE_RXTIMER_STOP_CDT_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on SABORT command treated and done flag */
    using RFSEQ_IRQ_ENABLE_SABORT_DONE_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on COMMAND_REJECTED flag */
    using RFSEQ_IRQ_ENABLE_COMMAND_REJECTED_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on CS_F flag */
    using RFSEQ_IRQ_ENABLE_CS_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on PREAMBLE_VALID_F flag */
    using RFSEQ_IRQ_ENABLE_PREAMBLE_VALID_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on SYNC_VALID_F flag */
    using RFSEQ_IRQ_ENABLE_SYNC_VALID_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on DATABUFFER0_USED_F flag */
    using RFSEQ_IRQ_ENABLE_DATABUFFER0_USED_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on DATABUFFER1_USED_F flag */
    using RFSEQ_IRQ_ENABLE_DATABUFFER1_USED_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on RX_ALMOST_FULL_0_F flag */
    using RFSEQ_IRQ_ENABLE_RX_ALMOST_FULL_0_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on RX_ALMOST_FULL_1_F flag */
    using RFSEQ_IRQ_ENABLE_RX_ALMOST_FULL_1_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on TX_ALMOST_EMPTY_0_F flag */
    using RFSEQ_IRQ_ENABLE_TX_ALMOST_EMPTY_0_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on TX_ALMOST_EMPTY_1_F flag */
    using RFSEQ_IRQ_ENABLE_TX_ALMOST_EMPTY_1_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on AHB_ACCESS_ERROR_F flag */
    using RFSEQ_IRQ_ENABLE_AHB_ACCESS_ERROR_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on HW_ANA_FAILURE_F flag */
    using RFSEQ_IRQ_ENABLE_HW_ANA_FAILURE_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on SEQ_F flag */
    using RFSEQ_IRQ_ENABLE_SEQ_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on RRM_CMD_END_F flag */
    using RFSEQ_IRQ_ENABLE_RRM_CMD_START_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on RRM_CMD_END_F flag */
    using RFSEQ_IRQ_ENABLE_RRM_CMD_END_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on SAFEASK_CALIB_DONE_F flag */
    using RFSEQ_IRQ_ENABLE_SAFEASK_CALIB_DONE_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt on AGC_CALIB_DONE_F flag */
    using RFSEQ_IRQ_ENABLE_AGC_CALIB_DONE_E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDITIONAL_CTRL register */
    using ADDITIONAL_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel number. */
    using ADDITIONAL_CTRL_CH_NUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel spacing. */
    using ADDITIONAL_CTRL_CH_SPACING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power control bandwidth selection according data rate */
    using ADDITIONAL_CTRL_PA_FC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the trigger event to capture the interpolated absolute time in the TIME_CAPTURE[31:0] register */
    using ADDITIONAL_CTRL_TIME_CAPTURESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the antenna switching feature. */
    using ADDITIONAL_CTRL_AS_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FAST_RX_TIMER register */
    using FAST_RX_TIMER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fast RX termination timer value (corresponding to the delay to measure the RSSI and to let the HW check CS flag information) */
    using FAST_RX_TIMER_FAST_RX_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the Fast RX Termination feature */
    using FAST_RX_TIMER_FAST_CS_TERM_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMMAND register */
    using COMMAND = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Opcode coresponding to a command: */
    using COMMAND_COMMAND_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the default/return state for the Radio FSM to be ACTIVE2 */
    using COMMAND_BACK2ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Request to the Radio FSM to stay in LOCKON state when exiting a RX or a TX */
    using COMMAND_BACK2LOCKON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
