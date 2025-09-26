/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB09_RADIO_HPP
#define EMBEDDED_PP_STM32WB09_RADIO_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RADIO peripheral */
namespace STM32WB09::RADIO {

    /** @brief AA0_DIG_USR register */
    using AA0_DIG_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Least significant byte of the Bluetooth LE Access Address code */
    using AA0_DIG_USR_AA_7_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AA1_DIG_USR register */
    using AA1_DIG_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Next byte of the Bluetooth LE Access Address code. */
    using AA1_DIG_USR_AA_15_8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AA2_DIG_USR register */
    using AA2_DIG_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Next byte of the Bluetooth LE Access Address code */
    using AA2_DIG_USR_AA_23_16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AA3_DIG_USR register */
    using AA3_DIG_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Most significant byte of the Bluetooth LE Access Address code. */
    using AA3_DIG_USR_AA_31_24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEM_MOD_DIG_USR register */
    using DEM_MOD_DIG_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Index for internal lock up table in which the synthesizer setup is contained. */
    using DEM_MOD_DIG_USR_CHANNEL_NUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RADIO_FSM_USR register */
    using RADIO_FSM_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CBP calibration enable bit. */
    using RADIO_FSM_USR_EN_CALIB_CBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNTH calibration enable bit. */
    using RADIO_FSM_USR_EN_CALIB_SYNTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA Power coefficient. */
    using RADIO_FSM_USR_PA_POWER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHYCTRL_DIG_USR register */
    using PHYCTRL_DIG_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXTXPHY selection. */
    using PHYCTRL_DIG_USR_RXTXPHY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFC1_DIG_ENG register */
    using AFC1_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set the decay factor of the AFC loop after Access Address detection */
    using AFC1_DIG_ENG_AFC_DELAY_AFTER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set the decay factor of the AFC loop before Access Address detection */
    using AFC1_DIG_ENG_AFC_DELAY_BEFORE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CR0_DIG_ENG register */
    using CR0_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set the gain of the clock recovery loop before Access Address detection to the value */
    using CR0_DIG_ENG_CR_GAIN_AFTER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set the gain of the clock recovery loop before Access Address detection to the value */
    using CR0_DIG_ENG_CR_GAIN_BEFORE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CR0_LR register */
    using CR0_LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set the gain of the clock recovery loop after Access Address detection to the value 2^(-CR_LR_GAIN_ AFTER) when the coded PHY is in use */
    using CR0_LR_CR_LR_GAIN_AFTER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set the gain of the clock recovery loop before Access Address detection to the value 2^(-CR_LR_GAIN_ BEFORE) when the coded PHY is in use */
    using CR0_LR_CR_LR_GAIN_BEFORE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VIT_CONF_DIG_ENG register */
    using VIT_CONF_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Viterbi enable */
    using VIT_CONF_DIG_ENG_VIT_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief spare */
    using VIT_CONF_DIG_ENG_SPARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LR_PD_THR_DIG_ENG register */
    using LR_PD_THR_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief preamble detect threshold value */
    using LR_PD_THR_DIG_ENG_LR_PD_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LR_RSSI_THR_DIG_ENG register */
    using LR_RSSI_THR_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSSI or peak threshold value */
    using LR_RSSI_THR_DIG_ENG_LR_RSSI_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LR_AAC_THR_DIG_ENG register */
    using LR_AAC_THR_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief address coded correlation threshold */
    using LR_AAC_THR_DIG_ENG_LR_AAC_THR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNTHCAL0_DIG_ENG register */
    using SYNTHCAL0_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief for Debug purpose */
    using SYNTHCAL0_DIG_ENG_SYNTHCAL_DEBUG_BUS_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Define the frequency applied on the PLL during calibration phase */
    using SYNTHCAL0_DIG_ENG_SYNTH_IF_FREQ_CAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTB5_DIG_ENG register */
    using DTB5_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable the possibility to control some signals by the other register bits instead of system design: */
    using DTB5_DIG_ENG_RXTX_START_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force TX_ACTIVE signal */
    using DTB5_DIG_ENG_TX_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force RX_ACTIVE signal */
    using DTB5_DIG_ENG_RX_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force INITIALIZE signal (emulate a token request of the IP_BLE) */
    using DTB5_DIG_ENG_INITIALIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable port selection */
    using DTB5_DIG_ENG_PORT_SELECTED_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief force port_selected[0] signal */
    using DTB5_DIG_ENG_PORT_SELECTED_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXADC_ANA_USR register */
    using RXADC_ANA_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC loop delay control bits for I channel to apply when SW overload is enabled */
    using RXADC_ANA_USR_RFD_RXADC_DELAYTRIM_I = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC loop delay control bits for Q channel to apply when SW overload is enabled */
    using RXADC_ANA_USR_RFD_RXADC_DELAYTRIM_Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the SW overload on RXADX delay trimming */
    using RXADC_ANA_USR_RXADC_DELAYTRIM_I_TST_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable the SW overload on RXADX delay trimming */
    using RXADC_ANA_USR_RXADC_DELAYTRIM_Q_TST_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LDO_ANA_ENG register */
    using LDO_ANA_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF_REG Bypass mode: */
    using LDO_ANA_ENG_RFD_RF_REG_BYPASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CBIAS0_ANA_ENG register */
    using CBIAS0_ANA_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief overloaded value for cbias current trimming (when CBIAS0_TRIM_TST_SEL = 1) */
    using CBIAS0_ANA_ENG_RFD_CBIAS_IBIAS_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief overloaded value for cbias current trimming (when CBIAS0_TRIM_TST_SEL = 1) */
    using CBIAS0_ANA_ENG_RFD_CBIAS_IPTAT_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CBIAS1_ANA_ENG register */
    using CBIAS1_ANA_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief When set, RFD_CBIAS_(IPTAT/IBIAS)_TRIM are used instead of HW trimmings */
    using CBIAS1_ANA_ENG_CBIAS0_TRIM_TST_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNTHCAL0_DIG_OUT register */
    using SYNTHCAL0_DIG_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCO CALAMP value */
    using SYNTHCAL0_DIG_OUT_VCO_CALAMP_OUT_6_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNTHCAL1_DIG_OUT register */
    using SYNTHCAL1_DIG_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCO CALAMP value */
    using SYNTHCAL1_DIG_OUT_VCO_CALAMP_OUT_10_7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNTHCAL2_DIG_OUT register */
    using SYNTHCAL2_DIG_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCO CALFREQ value */
    using SYNTHCAL2_DIG_OUT_VCO_CALFREQ_OUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNTHCAL3_DIG_OUT register */
    using SYNTHCAL3_DIG_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration debug bus. */
    using SYNTHCAL3_DIG_OUT_SYNTHCAL_DEBUG_BUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNTHCAL4_DIG_OUT register */
    using SYNTHCAL4_DIG_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration word */
    using SYNTHCAL4_DIG_OUT_MOD_REF_DAC_WORD_OUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNTHCAL5_DIG_OUT register */
    using SYNTHCAL5_DIG_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CBP Calibration word */
    using SYNTHCAL5_DIG_OUT_CBP_CALIB_WORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FSM_STATUS_DIG_OUT register */
    using FSM_STATUS_DIG_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RF FSM state: */
    using FSM_STATUS_DIG_OUT_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PLL calibration error */
    using FSM_STATUS_DIG_OUT_SYNTH_CAL_ERROR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSSI0_DIG_OUT register */
    using RSSI0_DIG_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Measure of the received signal strength. */
    using RSSI0_DIG_OUT_RSSI_MEAS_OUT_7_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RSSI1_DIG_OUT register */
    using RSSI1_DIG_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Measure of the received signal strength */
    using RSSI1_DIG_OUT_RSSI_MEAS_OUT_15_8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC_DIG_OUT register */
    using AGC_DIG_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC attenuation value */
    using AGC_DIG_OUT_AGC_ATT_OUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEMOD_DIG_OUT register */
    using DEMOD_DIG_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CI field */
    using DEMOD_DIG_OUT_CI_FIELD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief aac_found */
    using DEMOD_DIG_OUT_AAC_FOUND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pd_found */
    using DEMOD_DIG_OUT_PD_FOUND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief rx_end */
    using DEMOD_DIG_OUT_RX_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC2_ANA_TST register */
    using AGC2_ANA_TST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Selection: */
    using AGC2_ANA_TST_AGC2_ANA_TST_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief the AGC antenna trimming value ( when AGC2_ANA_TST_SEL = 1) */
    using AGC2_ANA_TST_AGC_ANTENNAE_USR_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC0_DIG_ENG register */
    using AGC0_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High AGC threshold */
    using AGC0_DIG_ENG_AGC_THR_HIGH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable AGC */
    using AGC0_DIG_ENG_AGC_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC1_DIG_ENG register */
    using AGC1_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low threshold for 6dB steps */
    using AGC1_DIG_ENG_AGC_THR_LOW_6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC locks when level is steady between high threshold and lock threshold */
    using AGC1_DIG_ENG_AGC_AUTOLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC locks when Access Address is detected (recommended) */
    using AGC1_DIG_ENG_AGC_LOCK_SYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC10_DIG_ENG register */
    using AGC10_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at IF Level for the AGC step 0: */
    using AGC10_DIG_ENG_ATT_IF_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at LNA Level for the AGC step 0: */
    using AGC10_DIG_ENG_ATT_LNA_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at Antenna Level for the AGC step 0: */
    using AGC10_DIG_ENG_ATT_ANT_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC11_DIG_ENG register */
    using AGC11_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at IF Level for the AGC step 1 */
    using AGC11_DIG_ENG_ATT_IF_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at LNA Level for the AGC step 1 */
    using AGC11_DIG_ENG_ATT_LNA_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at Antenna Level for the AGC step 1 */
    using AGC11_DIG_ENG_ATT_ANT_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC12_DIG_ENG register */
    using AGC12_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at IF Level for the AGC step 2 */
    using AGC12_DIG_ENG_ATT_IF_2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at LNA Level for the AGC step 2 */
    using AGC12_DIG_ENG_ATT_LNA_2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at Antenna Level for the AGC step 2 */
    using AGC12_DIG_ENG_ATT_ANT_2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC13_DIG_ENG register */
    using AGC13_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at IF Level for the AGC step 3 */
    using AGC13_DIG_ENG_ATT_IF_3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at LNA Level for the AGC step 3 */
    using AGC13_DIG_ENG_ATT_LNA_3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at Antenna Level for the AGC step 3 */
    using AGC13_DIG_ENG_ATT_ANT_3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC14_DIG_ENG register */
    using AGC14_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at IF Level for the AGC step 4 */
    using AGC14_DIG_ENG_ATT_IF_4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at LNA Level for the AGC step 4 */
    using AGC14_DIG_ENG_ATT_LNA_4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at Antenna Level for the AGC step 4 */
    using AGC14_DIG_ENG_ATT_ANT_4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC15_DIG_ENG register */
    using AGC15_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at IF Level for the AGC step 5 */
    using AGC15_DIG_ENG_ATT_IF_5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at LNA Level for the AGC step 5 */
    using AGC15_DIG_ENG_ATT_LNA_5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at Antenna Level for the AGC step 5 */
    using AGC15_DIG_ENG_ATT_ANT_5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC16_DIG_ENG register */
    using AGC16_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at IF Level for the AGC step 6 */
    using AGC16_DIG_ENG_ATT_IF_6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at LNA Level for the AGC step 6 */
    using AGC16_DIG_ENG_ATT_LNA_6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at Antenna Level for the AGC step 6 */
    using AGC16_DIG_ENG_ATT_ANT_6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC17_DIG_ENG register */
    using AGC17_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at IF Level for the AGC step 7 */
    using AGC17_DIG_ENG_ATT_IF_7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at LNA Level for the AGC step 7 */
    using AGC17_DIG_ENG_ATT_LNA_7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at Antenna Level for the AGC step 7 */
    using AGC17_DIG_ENG_ATT_ANT_7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC18_DIG_ENG register */
    using AGC18_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at IF Level for the AGC step 8 */
    using AGC18_DIG_ENG_ATT_IF_8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at LNA Level for the AGC step 8 */
    using AGC18_DIG_ENG_ATT_LNA_8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at Antenna Level for the AGC step 8 */
    using AGC18_DIG_ENG_ATT_ANT_8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC19_DIG_ENG register */
    using AGC19_DIG_ENG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at IF Level for the AGC step 9 */
    using AGC19_DIG_ENG_ATT_IF_9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at LNA Level for the AGC step 9 */
    using AGC19_DIG_ENG_ATT_LNA_9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attenuation at Antenna Level for the AGC step 9 */
    using AGC19_DIG_ENG_ATT_ANT_9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXADC_HW_TRIM_OUT register */
    using RXADC_HW_TRIM_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control bits of the RX ADC loop delay for I channel (provided by the HW trimming, automatically loaded on POR). */
    using RXADC_HW_TRIM_OUT_HW_RXADC_DELAYTRIM_I = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control bits of the RX ADC loop delay for Q channel (provided by the HW trimming, automatically loaded on POR). */
    using RXADC_HW_TRIM_OUT_HW_RXADC_DELAYTRIM_Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CBIAS0_HW_TRIM_OUT register */
    using CBIAS0_HW_TRIM_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CBIAS current (provided by the HW trimming, automatically loaded on POR). */
    using CBIAS0_HW_TRIM_OUT_HW_CBIAS_IBIAS_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CBIAS current (provided by the HW trimming, automatically loaded on POR). */
    using CBIAS0_HW_TRIM_OUT_HW_CBIAS_IPTAT_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC_HW_TRIM_OUT register */
    using AGC_HW_TRIM_OUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AGC trim value (provided by the HW trimming, automatically loaded on POR). */
    using AGC_HW_TRIM_OUT_HW_AGC_ANTENNAE_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEMOD_IQ2_DIG_TST register */
    using DEMOD_IQ2_DIG_TST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x23C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the sampling time, when extended configuration is enabled: */
    using DEMOD_IQ2_DIG_TST_EXTCFG_SAMPLING_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Defines the trigger/anchor point of the IQ sampling, when extended configuration is enabled: */
    using DEMOD_IQ2_DIG_TST_EXTCFG_TRIG_SELECTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ANTSW0_DIG_USR register */
    using ANTSW0_DIG_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief specifies the exact timing of the first I/Q sampling in the reference period. */
    using ANTSW0_DIG_USR_RX_TIME_TO_SAMPLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ANTSW1_DIG_USR register */
    using ANTSW1_DIG_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief specifies the exact timing of the antenna switching at receiver level (in AoA). */
    using ANTSW1_DIG_USR_RX_TIME_TO_SWITCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ANTSW2_DIG_USR register */
    using ANTSW2_DIG_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief specifies the exact timing of the antenna switching during transmission at LE_1M baud rate (in AoD). */
    using ANTSW2_DIG_USR_TX_TIME_TO_SWITCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ANTSW3_DIG_USR register */
    using ANTSW3_DIG_USR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief specifies the exact timing of the antenna switching during transmission at LE_2M baud rate (in AoD). */
    using ANTSW3_DIG_USR_TX_TIME_TO_SWITCH_2M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
