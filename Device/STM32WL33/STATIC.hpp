/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_STATIC_HPP
#define EMBEDDED_PP_STM32WL33_STATIC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief STATIC peripheral */
namespace STM32WL33::STATIC {

    /** @brief PCKT_CONFIG register */
    using PCKT_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC type (0, 8, 16, 16 802. */
    using PCKT_CONFIG_CRC_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief In TX mode: this bit selects which synchro word is sent on the frame between SYNC and SEC_SYNC */
    using PCKT_CONFIG_SECONDARY_SYNC_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of the SYNC (and secondary) SYNC word in 1-bit granularity */
    using PCKT_CONFIG_SYNC_LEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate if a SYNC word is present on the frame or not (null length) */
    using PCKT_CONFIG_SYNC_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicates if the LENGTH field is defined on 1 byte or 2 bytes */
    using PCKT_CONFIG_LEN_WIDTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the length mode */
    using PCKT_CONFIG_FIX_VAR_LEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of the PREAMBLE in pairs of bits (0 to 2046) */
    using PCKT_CONFIG_PREAMBLE_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the PREAMBLE pattern to be applied */
    using PCKT_CONFIG_PREAMBLE_SEQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of the POSTAMBLE in pair of bits (0 to 126 bits) */
    using PCKT_CONFIG_POSTAMBLE_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet postamble control: postamble bit sequence selection */
    using PCKT_CONFIG_POSTAMBLE_SEQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNC register */
    using SYNC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchro word. */
    using SYNC_SYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC_SYNC register */
    using SEC_SYNC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secondary Synchro word. */
    using SEC_SYNC_SEC_SYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC_INIT register */
    using CRC_INIT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC intialization value */
    using CRC_INIT_CRC_INIT_VAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PCKT_CTRL register */
    using PCKT_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet format */
    using PCKT_CTRL_PCKT_FORMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Invert MSB-LSB transmission order (bitendianess) */
    using PCKT_CTRL_BYTE_SWAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Invert bit to symbol mapping for 4-(G)FSK */
    using PCKT_CTRL_FOUR_FSK_SYM_SWAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX mode */
    using PCKT_CTRL_RX_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX mode */
    using PCKT_CTRL_TX_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Whitening before FEC feature */
    using PCKT_CTRL_WHIT_BF_FEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Whitening enable */
    using PCKT_CTRL_WHIT_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Whitening initialization value. */
    using PCKT_CTRL_WHIT_INIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coding / decoding selection */
    using PCKT_CTRL_CODING_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the Manchester encoding polarity */
    using PCKT_CTRL_MANCHESTER_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is used as Interleaving enable for 802. */
    using PCKT_CTRL_INT_EN_4G = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FEC type for 802. */
    using PCKT_CTRL_FEC_TYPE_4G = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FCS type value in header field for 802. */
    using PCKT_CTRL_FCS_TYPE_4G = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable frequency interpolator (for 2-GFSK and 4-GFSK) */
    using PCKT_CTRL_MOD_INTERP_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the Pseudo Random Binary Sequence (PRBS) polynomial to apply when the selected transmission mode is PN mode (TX_MODE = '11') */
    using PCKT_CTRL_PN_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force SYNC word to be formatted as a 2-(G)FSK bit steam instead of 4-(G)FSK */
    using PCKT_CTRL_FORCE_2FSK_SYNC_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATABUFFER0_PTR register */
    using DATABUFFER0_PTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start address to be used by the Data Buffer0 */
    using DATABUFFER0_PTR_DATABUFFER0_PTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATABUFFER1_PTR register */
    using DATABUFFER1_PTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start address to be used by the Data Buffer1 */
    using DATABUFFER1_PTR_DATABUFFER1_PTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DATABUFFER_SIZE register */
    using DATABUFFER_SIZE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Size of the Data Buffers (Data Buffer0 and Data Buffer1) expressed in byte unit. */
    using DATABUFFER_SIZE_DATABUFFER_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA_LEVEL_3_0 register */
    using PA_LEVEL_3_0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output power level for first step */
    using PA_LEVEL_3_0_PA_LEVEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output power level for second step */
    using PA_LEVEL_3_0_PA_LEVEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output power level for third step */
    using PA_LEVEL_3_0_PA_LEVEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output power level for fourth step */
    using PA_LEVEL_3_0_PA_LEVEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA_LEVEL_7_4 register */
    using PA_LEVEL_7_4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output power level for fifth step */
    using PA_LEVEL_7_4_PA_LEVEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output power level for sixth step */
    using PA_LEVEL_7_4_PA_LEVEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output power level for seventh step */
    using PA_LEVEL_7_4_PA_LEVEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output power level for eighth step */
    using PA_LEVEL_7_4_PA_LEVEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA_CONFIG register */
    using PA_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Step width (unit: 1/8 of bit period). */
    using PA_CONFIG_PA_RAMP_STEP_WIDTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Final level for power ramping (i. */
    using PA_CONFIG_PA_LEVEL_MAX_INDEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable power level interpolator. */
    using PA_CONFIG_PA_INTERP_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the generation of the internal TXDATA signal provided to the FIR. */
    using PA_CONFIG_ASK_OOK_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the PA topology */
    using PA_CONFIG_PA_DRV_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configure the Power Amplifier (PA) mode */
    using PA_CONFIG_PA_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable/disable the linear-to- log conversion of the PA code output from Safe-ASK calibrator */
    using PA_CONFIG_LIN_NLOG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the power ramping */
    using PA_CONFIG_PA_RAMP_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IF_CTRL register */
    using IF_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Intermediate frequency setting for the digital shift-to-baseband circuits (default: 300 kHz) */
    using IF_CTRL_IF_OFFSET_DIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Intermediate frequency setting for the synthesizer configuration (default: 300 kHz). */
    using IF_CTRL_IF_OFFSET_ANA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the cutoff frequency of the AAF for the analog RFSUBG IP */
    using IF_CTRL_IF_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AS_QI_CTRL register */
    using AS_QI_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal detect threshold in 1 dB resolution. */
    using AS_QI_CTRL_RSSI_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PQI threshold (if 0 then ). */
    using AS_QI_CTRL_PQI_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Carrier Sense mode selection */
    using AS_QI_CTRL_CS_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SQI enable */
    using AS_QI_CTRL_SQI_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SQI threshold defining the precision requested to detect the SYNC word. */
    using AS_QI_CTRL_SQI_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ISI cancellation equalizer */
    using AS_QI_CTRL_AS_EQU_CTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the RSSI measurement duration during Antenna switching procedure */
    using AS_QI_CTRL_AS_MEAS_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Blank received data if signal is below the CS threshold */
    using AS_QI_CTRL_AS_CS_BLANKING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IQC_CONFIG register */
    using IQC_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Correction value Input for the IQ compensation engine (to be used as starting point or when the engine is disabled). */
    using IQC_CONFIG_IQC_CORRECT_IN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Action bit to load the IQC_CORRECT_IN[23:0] bit field in the recirculation register when this bit is written to 1. */
    using IQC_CONFIG_LOAD_IQC_INIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reuse last correction value */
    using IQC_CONFIG_REUSE_CORRECTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable IQC */
    using IQC_CONFIG_IQC_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSSS_CTRL register */
    using DSSS_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSSS acquisition window */
    using DSSS_CTRL_ACQ_WINDOW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSSS spreading exponent */
    using DSSS_CTRL_SPREADING_EXP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSSS mode enable */
    using DSSS_CTRL_DSSS_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSSS acquisition hits */
    using DSSS_CTRL_ACQ_HITS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DSSS acquisition threshold */
    using DSSS_CTRL_ACQ_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
