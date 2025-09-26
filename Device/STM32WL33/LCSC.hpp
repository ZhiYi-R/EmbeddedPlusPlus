/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_LCSC_HPP
#define EMBEDDED_PP_STM32WL33_LCSC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief LCSC peripheral */
namespace STM32WL33::LCSC {

    /** @brief LCSC_CR0 register */
    using LCSC_CR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Measurement Time */
    using LCSC_CR0_TMEAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture Time */
    using LCSC_CR0_TCAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Inter Capture Time */
    using LCSC_CR0_TICAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC_CR1 register */
    using LCSC_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCAB_DAMP_THRES[7:0]: Damping threshold for LCA and LCB */
    using LCSC_CR1_LCAB_DAMP_THRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCMBUFF Recovery Time */
    using LCSC_CR1_TREC_VCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCMBUFF Starting Time */
    using LCSC_CR1_TSTART_VCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC_CR2 register */
    using LCSC_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper measurement interval. */
    using LCSC_CR2_TAMP_PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Damping threshold for LCT */
    using LCSC_CR2_LCT_DAMP_THRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC_PULSE_CR register */
    using LCSC_PULSE_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low Pulse Width for LCA and LCB */
    using LCSC_PULSE_CR_LCAB_PULSE_WIDTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low Pulse Width for LCT */
    using LCSC_PULSE_CR_LCT_PULSE_WIDTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC_ENR register */
    using LCSC_ENR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock Wise Interrupt and Wakeup Enable */
    using LCSC_ENR_CLKWISE_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Anti Clock Wise Interrupt and Wakeup Enable */
    using LCSC_ENR_ACLKWISE_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper Interrupt and Wakeup Enable */
    using LCSC_ENR_TAMP_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCAB Counter Out Of Bound wakeup enable */
    using LCSC_ENR_CNT_OFB_WKP_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC Enable */
    using LCSC_ENR_LCSC_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC_WHEEL_SR register */
    using LCSC_WHEEL_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Clock Wise revolutions */
    using LCSC_WHEEL_SR_CLKWISE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Anti Clock Wise revolutions */
    using LCSC_WHEEL_SR_ACLKWISE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC_CONFR register */
    using LCSC_CONFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Clock Wise revolutions target */
    using LCSC_CONFR_CLKWISE_THRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Anti Clock Wise revolutions target */
    using LCSC_CONFR_ACLKWISE_THRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC_COMP_CTN register */
    using LCSC_COMP_CTN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCA Comparator last damping count */
    using LCSC_COMP_CTN_CMP_LCA_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCB Comparator last damping count */
    using LCSC_COMP_CTN_CMP_LCB_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCT Comparator last damping count */
    using LCSC_COMP_CTN_CMP_LCT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC_SR register */
    using LCSC_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The current state of the LCSC clockwise FSM: */
    using LCSC_SR_CLKWISE_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The current state of the LCSC anti clockwise FSM: */
    using LCSC_SR_ACLKWISE_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The last direction detected: */
    using LCSC_SR_LAST_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC_STAT register */
    using LCSC_STAT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The Minimum of CMP_LCA_CNT, CMP_LCB_CNT reached during the */
    using LCSC_STAT_MIN_LCAB_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The Maximum of CMP_LCA_CNT, CMP_LCB_CNT reached during */
    using LCSC_STAT_MAX_LCAB_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The Minimum bound of CMP_LCA_COUNT, */
    using LCSC_STAT_MIN_LCAB_CNT_BOUND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The Maximum bound of CMP_LCA_COUNT, */
    using LCSC_STAT_MAX_LCAB_CNT_BOUND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC Test Configuration Register */
    using LCSC_TST_CFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Test Enable */
    using LCSC_TST_CFG_TST_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTB output selection */
    using LCSC_TST_CFG_TST_CFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC ANA Test Configuration Register */
    using LCSC_ANATST_CFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Selection of the signal to be used to supply the DAC in the LCSC */
    using LCSC_ANATST_CFG_VCMBUFF_ENOUT_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCMBUFFER output buffer enable pin */
    using LCSC_ANATST_CFG_VCMBUFF_ENOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Selection of the signal to be used to supply the DAC in the LCSC */
    using LCSC_ANATST_CFG_VCMBUFF_PWDN_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCMBUFF power-down pin */
    using LCSC_ANATST_CFG_VCMBUFF_PWDN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Selection of the signal to be used to supply the COMP in the LCSC Analog part */
    using LCSC_ANATST_CFG_COMP_PWDN_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP power-down pin */
    using LCSC_ANATST_CFG_COMP_PWDN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Selection of the signal to be used to supply the DAC in the LCSC Analog part */
    using LCSC_ANATST_CFG_DAC_PWDN_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC power-down pin */
    using LCSC_ANATST_CFG_DAC_PWDN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC_VER register */
    using LCSC_VER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision of the RFIP to be used for metal fixes) */
    using LCSC_VER_REV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version of the RFIP (to be used for cut upgrades) */
    using LCSC_VER_VER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Used for major upgrades (new protocols support / new features) */
    using LCSC_VER_PROD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCSC_ISR register */
    using LCSC_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock Wise Flag: */
    using LCSC_ISR_CLKWISE_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Anti Clock Wise Flag: */
    using LCSC_ISR_ACLKWISE_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper Flag */
    using LCSC_ISR_TAMP_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Out of Bound Counter Flag */
    using LCSC_ISR_CNT_OFB_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
