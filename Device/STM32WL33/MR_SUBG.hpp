/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_MR_SUBG_HPP
#define EMBEDDED_PP_STM32WL33_MR_SUBG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief MR_SUBG peripheral */
namespace STM32WL33::MR_SUBG {

    /** @brief RF_FSM0_TIMEOUT register */
    using RF_FSM0_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout for the RF regulator startup (duration in ENA_RF_REG state) */
    using RF_FSM0_TIMEOUT_ENA_RFREG_TIMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_FSM1_TIMEOUT register */
    using RF_FSM1_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout management for the RF regulator to stabilize after RF PLL power on */
    using RF_FSM1_TIMEOUT_SYNTH_SETUP_TIMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_FSM2_TIMEOUT register */
    using RF_FSM2_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout for the RF PLL calibration + RF PLL lock (duration in CALIB_VCO+LOCKRXTX state) */
    using RF_FSM2_TIMEOUT_VCO_CALIB_LOCK_TIMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_FSM3_TIMEOUT register */
    using RF_FSM3_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout for the RF PLL lock event when no calibration is requested (duration in LOCKRXTX state) */
    using RF_FSM3_TIMEOUT_VCO_LOCK_TIMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_FSM4_TIMEOUT register */
    using RF_FSM4_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout for the analog RX chain setup (duration in EN_RX state) */
    using RF_FSM4_TIMEOUT_EN_RX_TIMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_FSM5_TIMEOUT register */
    using RF_FSM5_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout for the analog PA (DAC) setup (duration in EN_PA state) */
    using RF_FSM5_TIMEOUT_EN_PA_TIMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_FSM6_TIMEOUT register */
    using RF_FSM6_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout for the analog PA (DAC) ramp down (duration in PA_DWN_ANA state) */
    using RF_FSM6_TIMEOUT_PA_DWN_ANA_TIMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_FSM7_TIMEOUT register */
    using RF_FSM7_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout for the analog RX chain signals settlement once PGA precharge is shut down (duration in EN_LNA state) */
    using RF_FSM7_TIMEOUT_EN_LNA_TIMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFC0_CONFIG register */
    using AFC0_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFC loop gain in slow mode (2's log) */
    using AFC0_CONFIG_AFC_SLOW_GAIN_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFC loop gain in fast mode (2's log) */
    using AFC0_CONFIG_AFC_FAST_GAIN_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFC1_CONFIG register */
    using AFC1_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Length of the AFC fast period (in number of samples unit) */
    using AFC1_CONFIG_AFC_FAST_PERIOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFC2_CONFIG register */
    using AFC2_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFC Peak Detection leakage. */
    using AFC2_CONFIG_AFC_PD_LEAKAGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select AFC mode: */
    using AFC2_CONFIG_AFC_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable AFC. */
    using AFC2_CONFIG_AFC_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Freeze AFC correction upon SYNC word detection */
    using AFC2_CONFIG_AFC_FREEZE_ON_SYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFC3_CONFIG register */
    using AFC3_CONFIG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Control the initialization phase of the AFC and clock recovery algorithms: */
    using AFC3_CONFIG_AFC_INIT_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the check of sign permanence of AFC corrected signal. */
    using AFC3_CONFIG_AFC_SIGN_PERM_CHECK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Threshold of chech sign permanence mechanism. */
    using AFC3_CONFIG_AFC_TH_SIGN_PERM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the AFC reinitialization option: */
    using AFC3_CONFIG_AFC_REINIT_OPTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLKREC_CTRL0 register */
    using CLKREC_CTRL0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integral fast gain for the clock recovery loop (PLL mode only) */
    using CLKREC_CTRL0_CLKREC_I_GAIN_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock recovery fast loop gain (log2) */
    using CLKREC_CTRL0_CLKREC_P_GAIN_FAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Control the length of the demodulator post-filter */
    using CLKREC_CTRL0_PSTFLT_LEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLKREC_CTRL1 register */
    using CLKREC_CTRL1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integral slow gain for the clock recovery loop (PLL mode only) */
    using CLKREC_CTRL1_CLKREC_I_GAIN_SLOW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock recovery slow loop gain (log2) */
    using CLKREC_CTRL1_CLKREC_P_GAIN_SLOW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Symbol timing recovery algorithm selection */
    using CLKREC_CTRL1_CLKREC_ALGO_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCREM_CTRL0 register */
    using DCREM_CTRL0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Filter gain in start mode for the DC removal block. */
    using DCREM_CTRL0_START_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Filter gain in track mode for the DC removal block. */
    using DCREM_CTRL0_TRACK_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IQC_CTRL0 register */
    using IQC_CTRL0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gain of the correction loop in fast mode. */
    using IQC_CTRL0_FAST_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gain of the correction loop in slow mode. */
    using IQC_CTRL0_SLOW_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IQC_CTRL1 register */
    using IQC_CTRL1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attack coefficient for QPD: */
    using IQC_CTRL1_QPD_ATTACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IQC_CTRL2 register */
    using IQC_CTRL2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Decay coefficient for QPD: */
    using IQC_CTRL2_QPD_DECAY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IQC_CTRL3 register */
    using IQC_CTRL3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Duration of the fast mode. */
    using IQC_CTRL3_FAST_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC_ANA_ENG register */
    using AGC_ANA_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the mode for AGC analog part: */
    using AGC_ANA_ENG_FORCE_AGC_GAINS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at LNA level by step of 6dB with thermometric code: */
    using AGC_ANA_ENG_RFD_RX_ATTEN_AGCGAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at PGA level by step of 6dB with binary code: */
    using AGC_ANA_ENG_RFD_RX_PGA_AGCGAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC0_CTRL register */
    using AGC0_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC hold time. */
    using AGC0_CTRL_AGC_HOLD_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start the AGC with a hold phase. */
    using AGC0_CTRL_AGC_START_ONHOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the AGC */
    using AGC0_CTRL_AGC_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC1_CTRL register */
    using AGC1_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum signal threshold. */
    using AGC1_CTRL_AGC_MIN_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum signal threshold. */
    using AGC1_CTRL_AGC_MAX_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC2_CTRL register */
    using AGC2_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Measure time. */
    using AGC2_CTRL_AGC_MEAS_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start the AGC with maximum attenuation. */
    using AGC2_CTRL_AGC_START_MAX_ATTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the freeze on SYNC detection feature */
    using AGC2_CTRL_AGC_FREEZE_ON_SYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the autofreeze feature */
    using AGC2_CTRL_AGC_FREEZE_ON_STEADY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the high attenuation mode. */
    using AGC2_CTRL_AGC_HIGH_ATTEN_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC3_CTRL register */
    using AGC3_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minimum AGC attenuation. */
    using AGC3_CTRL_AGC_MIN_ATTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum AGC attenuation. */
    using AGC3_CTRL_AGC_MAX_ATTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC4_CTRL register */
    using AGC4_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal threshold for the autofreeze feature. */
    using AGC4_CTRL_AGC_FREEZE_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC_PGA_HWTRIM_OUT register */
    using AGC_PGA_HWTRIM_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC PGA calibration information loaded by HW from the SoC flash. */
    using AGC_PGA_HWTRIM_OUT_AGC_HW_PGA_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA_REG register */
    using PA_REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIR configuration: */
    using PA_REG_CFG_FILT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable a 'degeneration' mode, which introduces a pre-distortion to linearize the power control curve. */
    using PA_REG_PA_DEGEN_ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA_HWTRIM_OUT register */
    using PA_HWTRIM_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSB part meaning: */
    using PA_HWTRIM_OUT_PA_HW_DEGEN_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSSI_FLT register */
    using RSSI_FLT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peak decay control for OOK: 3 slow decay; 0 fast decay */
    using RSSI_FLT_OOK_PEAK_DECAY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gain of the RSSI filter */
    using RSSI_FLT_RSSI_FLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNTH2_ANA_ENG register */
    using SYNTH2_ANA_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the level of max VCO amplitude in amplitude level control loop. */
    using SYNTH2_ANA_ENG_RFD_PLL_VCO_ALC_AMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the PLL lock detector window selection: */
    using SYNTH2_ANA_ENG_RFD_PLL_LD_WIN_ACC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXADC_HWDELAYTRIM_OUT register */
    using RXADC_HWDELAYTRIM_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Control bits of the RX ADC loop delay for I channel (from SoC Flash). */
    using RXADC_HWDELAYTRIM_OUT_RXADC_HW_DELAYTRIM_I = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Control bits of the RX ADC loop delay for Q channel (from SoC Flash). */
    using RXADC_HWDELAYTRIM_OUT_RXADC_HW_DELAYTRIM_Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX_AAF_HWTRIM_OUT register */
    using RX_AAF_HWTRIM_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AAF calibration information loaded by HW. */
    using RX_AAF_HWTRIM_OUT_AAF_HW_FCTRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SINGEN_ANA_ENG register */
    using SINGEN_ANA_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable SINGEN signal for the RFSUBGanalog IP. */
    using SINGEN_ANA_ENG_RFD_SINGEN_ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit value is directly connected to the RFSUBG analog IP pin. */
    using SINGEN_ANA_ENG_RFD_SINGEN_DIV2_PUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit value is directly connected to the RFSUBG analog IP pin. */
    using SINGEN_ANA_ENG_RFD_SINGEN_LBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_INFO_OUT register */
    using RF_INFO_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FQCY_BAND_ID[3:0]: Indicates the version of the RFSUBG IP embedded in the device */
    using RF_INFO_OUT_FQCY_BAND_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate the version of the analog RFSUBG IP embedded in the device */
    using RF_INFO_OUT_RFSUBG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_FSM8_TIMEOUT register */
    using RF_FSM8_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout management for the RF regulator to stabilize after PLL shut down */
    using RF_FSM8_TIMEOUT_SYNTH_PDWN_TIMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_FSM9_TIMEOUT register */
    using RF_FSM9_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout management for the RF regulator to stabilize after analog RX chain shut down */
    using RF_FSM9_TIMEOUT_END_RX_TIMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_FSM10_TIMEOUT register */
    using RF_FSM10_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout management for the RF regulator to stabilize after clock stops on the analog PA block */
    using RF_FSM10_TIMEOUT_END_TX_TIMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SUBG_DIG_CTRL0 register */
    using SUBG_DIG_CTRL0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option for the direct GPIO signal output */
    using SUBG_DIG_CTRL0_FORCE_GPIO_OUTPUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX_CHAIN_ENG register */
    using RX_CHAIN_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option for LNA during the EN_RX state of the Radio FSM: */
    using RX_CHAIN_ENG_LNA_ISOL_ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Option for PGA precharge during the EN_RX state of the Radio FSM: */
    using RX_CHAIN_ENG_PGA_PRECH_ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEMOD_DIG_ENG register */
    using DEMOD_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of data samples at RX start for which the signal at the output of the channel filter is kept forced to zero: */
    using DEMOD_DIG_ENG_RX_BLANKING_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
