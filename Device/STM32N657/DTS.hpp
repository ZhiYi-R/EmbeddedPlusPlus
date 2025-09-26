/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N657_DTS_HPP
#define EMBEDDED_PP_STM32N657_DTS_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Digital temperature sensor */
namespace STM32N657::DTS {

    /** @brief DTS PVT register lock register */
    using DTS_PVTREG_LOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVT software lock register */
    using DTS_PVTREG_LOCKR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS PVT lock status register */
    using DTS_PVTLOCK_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software lock input status */
    using DTS_PVTLOCK_SR_SW_LOCK_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hardware lock input status */
    using DTS_PVTLOCK_SR_HW_LOCK_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS PVT timer control register */
    using DTS_PVTTMR_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer delay */
    using DTS_PVTTMR_CR_TMR_DELAY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer count enable bit */
    using DTS_PVTTMR_CR_TMR_RUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS PVT timer status register */
    using DTS_PVTTMR_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter busy flag */
    using DTS_PVTTMR_SR_TMR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter delay expiration flag */
    using DTS_PVTTMR_SR_TMR_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS PVT IRQ enable register */
    using DTS_PVT_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer IRQ source enable bit */
    using DTS_PVT_IER_TMR_IRQ_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS IRQ source enable bit */
    using DTS_PVT_IER_TS_IRQ_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS PVT IRQ timer mask register */
    using DTS_PVTIRQTRMASKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer IRQ source mask bit */
    using DTS_PVTIRQTRMASKR_TMR_IRQ_MASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS PVT IRQ TS mask register */
    using DTS_TS_MR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS0 IRQ source mask bit */
    using DTS_TS_MR_TS0_IRQ_MASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS1 IRQ source mask bit */
    using DTS_TS_MR_TS1_IRQ_MASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS PVT IRQ timer status register */
    using DTS_PVTTR_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer IRQ status bit after masking */
    using DTS_PVTTR_SR_TMR_IRQ_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS PVT IRQ TS status register */
    using DTS_TS_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS0 IRQ status bit after masking */
    using DTS_TS_ISR_TS0_IRQ_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS1 IRQ status bit after masking */
    using DTS_TS_ISR_TS1_IRQ_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS PVT IRQ timer raw status register */
    using DTS_PVTTMRRAW_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TMR IRQ status bit before masking */
    using DTS_PVTTMRRAW_ISR_TMR_IRQ_RAW_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS PVT IRQ TS raw status register */
    using DTS_TSRAW_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS0 IRQ status bit before masking */
    using DTS_TSRAW_ISR_TS0_IRQ_RAW_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS1 IRQ status bit before masking */
    using DTS_TSRAW_ISR_TS1_IRQ_RAW_STATUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TSC clock synthesizer register */
    using DTS_TSCCLKSYNTHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synthesized clk_ts low period */
    using DTS_TSCCLKSYNTHR_CLK_SYNTH_LO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synthesized clk_ts high period */
    using DTS_TSCCLKSYNTHR_CLK_SYNTH_HI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDA master-to-SDA slave output hold delay/SDA slave-to-SDA master input setup delay */
    using DTS_TSCCLKSYNTHR_CLK_SYNTH_HOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synthesized clk_ts enable bit */
    using DTS_TSCCLKSYNTHR_CLK_SYTH_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t DTS_TSCCLKSYNTHR_CLK_SYTH_EN_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t DTS_TSCCLKSYNTHR_CLK_SYTH_EN_B_0x1 = 1;

    /** @brief DTS TSC SDIF interface disable register */
    using DTS_TSCSDIFDISABLER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS0 serial data interface (SDIF) disable bit */
    using DTS_TSCSDIFDISABLER_TS0_SDIF_DISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enabled (value: 0)
     *          - B_0x1: Disabled (value: 1)
     */
        /** @brief Enabled */
    constexpr std::uint32_t DTS_TSCSDIFDISABLER_TS0_SDIF_DISABLE_B_0x0 = 0;
        /** @brief Disabled */
    constexpr std::uint32_t DTS_TSCSDIFDISABLER_TS0_SDIF_DISABLE_B_0x1 = 1;

    /** @brief TS1 serial data interface (SDIF) disable bit */
    using DTS_TSCSDIFDISABLER_TS1_SDIF_DISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enabled (value: 0)
     *          - B_0x1: Disabled (value: 1)
     */
        /** @brief Enabled */
    constexpr std::uint32_t DTS_TSCSDIFDISABLER_TS1_SDIF_DISABLE_B_0x0 = 0;
        /** @brief Disabled */
    constexpr std::uint32_t DTS_TSCSDIFDISABLER_TS1_SDIF_DISABLE_B_0x1 = 1;

    /** @brief DTS TSC SDIF status register */
    using DTS_TSCSDIF_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDIF busy flag */
    using DTS_TSCSDIF_SR_SDIF_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDIF not busy/no clock synthesizer/disable SDIF state update ongoing (value: 0)
     *          - B_0x1: SDIF busy/clock synthesizer/disable SDIF state update ongoing (value: 1)
     */
        /** @brief SDIF not busy/no clock synthesizer/disable SDIF state update ongoing */
    constexpr std::uint32_t DTS_TSCSDIF_SR_SDIF_BUSY_B_0x0 = 0;
        /** @brief SDIF busy/clock synthesizer/disable SDIF state update ongoing */
    constexpr std::uint32_t DTS_TSCSDIF_SR_SDIF_BUSY_B_0x1 = 1;

    /** @brief SDIF locked flag */
    using DTS_TSCSDIF_SR_SDIF_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Unlocked (value: 0)
     *          - B_0x1: Locked (value: 1)
     */
        /** @brief Unlocked */
    constexpr std::uint32_t DTS_TSCSDIF_SR_SDIF_LOCK_B_0x0 = 0;
        /** @brief Locked */
    constexpr std::uint32_t DTS_TSCSDIF_SR_SDIF_LOCK_B_0x1 = 1;

    /** @brief DTS TSC SDIF register */
    using DTS_TSCSDIF_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface write data */
    using DTS_TSCSDIF_CR_SDIF_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface register address */
    using DTS_TSCSDIF_CR_SDIF_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface write/no read control bit */
    using DTS_TSCSDIF_CR_SDIF_WRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SDIF read (value: 0)
     *          - B_0x1: SDIF write (value: 1)
     */
        /** @brief SDIF read */
    constexpr std::uint32_t DTS_TSCSDIF_CR_SDIF_WRN_B_0x0 = 0;
        /** @brief SDIF write */
    constexpr std::uint32_t DTS_TSCSDIF_CR_SDIF_WRN_B_0x1 = 1;

    /** @brief Serial interface program request */
    using DTS_TSCSDIF_CR_SDIF_PROG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SDIF program request (value: 0)
     *          - B_0x1: SDIF program requested (value: 1)
     */
        /** @brief No SDIF program request */
    constexpr std::uint32_t DTS_TSCSDIF_CR_SDIF_PROG_B_0x0 = 0;
        /** @brief SDIF program requested */
    constexpr std::uint32_t DTS_TSCSDIF_CR_SDIF_PROG_B_0x1 = 1;

    /** @brief DTS TSC SDIF halt register */
    using DTS_TSCSDIFHALTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial data interface (SDIF) stop */
    using DTS_TSCSDIFHALTR_SDIF_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not stopped (value: 0)
     *          - B_0x1: Stopped (value: 1)
     */
        /** @brief Not stopped */
    constexpr std::uint32_t DTS_TSCSDIFHALTR_SDIF_STOP_B_0x0 = 0;
        /** @brief Stopped */
    constexpr std::uint32_t DTS_TSCSDIFHALTR_SDIF_STOP_B_0x1 = 1;

    /** @brief DTS TSC SDIF control register */
    using DTS_TSCSDIF_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial data interface (SDIF) programming inhibit */
    using DTS_TSCSDIF_CFGR_SDIF_INHIBIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Inhibition (value: 0)
     *          - B_0x1: TS0 inhibited/TS1 serial programming activated (SPA) (value: 1)
     *          - B_0x2: TS1 inhibited/TS0 serial programming activated (SPA) (value: 2)
     *          - B_0x3: TS1 and TS0 inhibited (value: 3)
     */
        /** @brief No Inhibition */
    constexpr std::uint32_t DTS_TSCSDIF_CFGR_SDIF_INHIBIT_B_0x0 = 0;
        /** @brief TS0 inhibited/TS1 serial programming activated (SPA) */
    constexpr std::uint32_t DTS_TSCSDIF_CFGR_SDIF_INHIBIT_B_0x1 = 1;
        /** @brief TS1 inhibited/TS0 serial programming activated (SPA) */
    constexpr std::uint32_t DTS_TSCSDIF_CFGR_SDIF_INHIBIT_B_0x2 = 2;
        /** @brief TS1 and TS0 inhibited */
    constexpr std::uint32_t DTS_TSCSDIF_CFGR_SDIF_INHIBIT_B_0x3 = 3;

    /** @brief DTS TSC sample control register */
    using DTS_TSCSMPL_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample counter disable bit */
    using DTS_TSCSMPL_CR_SMPL_CTR_DISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sample counter enabled (value: 0)
     *          - B_0x1: Sample counter disabled (value: 1)
     */
        /** @brief Sample counter enabled */
    constexpr std::uint32_t DTS_TSCSMPL_CR_SMPL_CTR_DISABLE_B_0x0 = 0;
        /** @brief Sample counter disabled */
    constexpr std::uint32_t DTS_TSCSMPL_CR_SMPL_CTR_DISABLE_B_0x1 = 1;

    /** @brief Sample counter hold bit */
    using DTS_TSCSMPL_CR_SMPL_CTR_HOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter not on hold (value: 0)
     *          - B_0x1: Counter on hold (value: 1)
     */
        /** @brief Counter not on hold */
    constexpr std::uint32_t DTS_TSCSMPL_CR_SMPL_CTR_HOLD_B_0x0 = 0;
        /** @brief Counter on hold */
    constexpr std::uint32_t DTS_TSCSMPL_CR_SMPL_CTR_HOLD_B_0x1 = 1;

    /** @brief Sample discard bit */
    using DTS_TSCSMPL_CR_SMPL_DISCARD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data samples not discarded (value: 0)
     *          - B_0x1: Data samples discarded (value: 1)
     */
        /** @brief Data samples not discarded */
    constexpr std::uint32_t DTS_TSCSMPL_CR_SMPL_DISCARD_B_0x0 = 0;
        /** @brief Data samples discarded */
    constexpr std::uint32_t DTS_TSCSMPL_CR_SMPL_DISCARD_B_0x1 = 1;

    /** @brief DTS TSC sample clear register */
    using DTS_TSCSDIFSMPLCLRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample counter clear bit */
    using DTS_TSCSDIFSMPLCLRR_SMPL_CNTER_CLEAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter value not cleared (value: 0)
     *          - B_0x1: Counter value cleared (value: 1)
     */
        /** @brief Counter value not cleared */
    constexpr std::uint32_t DTS_TSCSDIFSMPLCLRR_SMPL_CNTER_CLEAR_B_0x0 = 0;
        /** @brief Counter value cleared */
    constexpr std::uint32_t DTS_TSCSDIFSMPLCLRR_SMPL_CNTER_CLEAR_B_0x1 = 1;

    /** @brief DTS TSC sample count register */
    using DTS_TSCSMPLCNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample counter */
    using DTS_TSCSMPLCNTR_SMPL_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS0 IRQ enable register */
    using DTS_TS0_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fault IRQ enable bit */
    using DTS_TS0_IER_IRQ_EN_FAULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample done IRQ enable bit */
    using DTS_TS0_IER_IRQ_EN_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A IRQ enable bit */
    using DTS_TS0_IER_IRQ_EN_ALARMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B IRQ enable bit */
    using DTS_TS0_IER_IRQ_EN_ALARMB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS0 IRQ status register */
    using DTS_TS0_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fault IRQ status bit */
    using DTS_TS0_ISR_IRQ_STATUS_FAULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample done IRQ status bit */
    using DTS_TS0_ISR_IRQ_STATUS_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A IRQ status bit */
    using DTS_TS0_ISR_IRQ_STATUS_ALARMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B IRQ status bit */
    using DTS_TS0_ISR_IRQ_STATUS_ALARMB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS0 IRQ clear register */
    using DTS_TS0_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fault IRQ clear bit */
    using DTS_TS0_ICR_IRQ_CLEAR_FAULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample done IRQ clear bit */
    using DTS_TS0_ICR_IRQ_CLEAR_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A IRQ clear bit */
    using DTS_TS0_ICR_IRQ_CLEAR_ALARMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B IRQ clear bit */
    using DTS_TS0_ICR_IRQ_CLEAR_ALARMB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS0 IRQ test register */
    using DTS_TS0IRQTESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fault IRQ test bit */
    using DTS_TS0IRQTESTR_IRQ_TEST_FAULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample done IRQ test bit */
    using DTS_TS0IRQTESTR_IRQ_TEST_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A IRQ test bit */
    using DTS_TS0IRQTESTR_IRQ_TEST_ALARMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B IRQ test bit */
    using DTS_TS0IRQTESTR_IRQ_TEST_ALARMB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS0 SDIF RDATA register */
    using DTS_TS0SDIFRDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDIF read data */
    using DTS_TS0SDIFRDATAR_SDIF_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS0 SDIF done register */
    using DTS_TS0SDIFDONER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample done flag */
    using DTS_TS0SDIFDONER_SDIF_SMPL_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new data sample available (value: 0)
     *          - B_0x1: New data sample available (value: 1)
     */
        /** @brief No new data sample available */
    constexpr std::uint32_t DTS_TS0SDIFDONER_SDIF_SMPL_DONE_B_0x0 = 0;
        /** @brief New data sample available */
    constexpr std::uint32_t DTS_TS0SDIFDONER_SDIF_SMPL_DONE_B_0x1 = 1;

    /** @brief DTS TS0 SDIF data register */
    using DTS_TS0SDIFDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample data. */
    using DTS_TS0SDIFDATAR_SAMPLE_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS sample type */
    using DTS_TS0SDIFDATAR_SAMPLE_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Indicates valid data (value: 0)
     *          - B_0x1: Indicates either analog access, signature select or fault debug mode (value: 1)
     */
        /** @brief Indicates valid data */
    constexpr std::uint32_t DTS_TS0SDIFDATAR_SAMPLE_TYPE_B_0x0 = 0;
        /** @brief Indicates either analog access, signature select or fault debug mode */
    constexpr std::uint32_t DTS_TS0SDIFDATAR_SAMPLE_TYPE_B_0x1 = 1;

    /** @brief Sample fault */
    using DTS_TS0SDIFDATAR_SAMPLE_FAULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS0 alarm A configuration register */
    using DTS_TS0ALARMA_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A hysteresis threshold */
    using DTS_TS0ALARMA_CFGR_HYSTA_THRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A threshold */
    using DTS_TS0ALARMA_CFGR_ALARMA_THRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS0 alarm B configuration register */
    using DTS_TS0ALARMB_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B hysteresis threshold */
    using DTS_TS0ALARMB_CFGR_HYSTB_THRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B threshold */
    using DTS_TS0ALARMB_CFGR_ALARMB_THRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS0 high/low sample register */
    using DTS_TS0HLSAMPLER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lowest valid data sample value received */
    using DTS_TS0HLSAMPLER_SMPL_LO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Highest valid data sample value received */
    using DTS_TS0HLSAMPLER_SMPL_HI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS0 high/low reset register */
    using DTS_TS0HILORESETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample Low Set */
    using DTS_TS0HILORESETR_SMPL_LO_SET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample high clear 0 */
    using DTS_TS0HILORESETR_SMPL_HI_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS1 IRQ enable register */
    using DTS_TS1_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fault IRQ enable bit */
    using DTS_TS1_IER_IRQ_EN_FAULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample done IRQ enable bit */
    using DTS_TS1_IER_IRQ_EN_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A IRQ enable bit */
    using DTS_TS1_IER_IRQ_EN_ALARMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B IRQ enable bit */
    using DTS_TS1_IER_IRQ_EN_ALARMB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS1 IRQ status register */
    using DTS_TS1_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fault IRQ status bit */
    using DTS_TS1_ISR_IRQ_STATUS_FAULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample done IRQ status bit */
    using DTS_TS1_ISR_IRQ_STATUS_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A IRQ status bit */
    using DTS_TS1_ISR_IRQ_STATUS_ALARMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B IRQ status bit */
    using DTS_TS1_ISR_IRQ_STATUS_ALARMB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS1 IRQ clear register */
    using DTS_TS1_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fault IRQ clear bit */
    using DTS_TS1_ICR_IRQ_CLEAR_FAULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample done IRQ clear bit */
    using DTS_TS1_ICR_IRQ_CLEAR_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A IRQ clear bit */
    using DTS_TS1_ICR_IRQ_CLEAR_ALARMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B IRQ clear bit */
    using DTS_TS1_ICR_IRQ_CLEAR_ALARMB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS1 IRQ test register */
    using DTS_TS1IRQTESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fault IRQ test bit */
    using DTS_TS1IRQTESTR_IRQ_TEST_FAULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample done IRQ test bit */
    using DTS_TS1IRQTESTR_IRQ_TEST_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A IRQ test bit */
    using DTS_TS1IRQTESTR_IRQ_TEST_ALARMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B IRQ test bit */
    using DTS_TS1IRQTESTR_IRQ_TEST_ALARMB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS1 SDIF RDATA register */
    using DTS_TS1SDIFRDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDIF read data */
    using DTS_TS1SDIFRDATAR_SDIF_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS1 SDIF done register */
    using DTS_TS1SDIFDONER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample done flag */
    using DTS_TS1SDIFDONER_SDIF_SMPL_DONE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new data sample available (value: 0)
     *          - B_0x1: New data sample available (value: 1)
     */
        /** @brief No new data sample available */
    constexpr std::uint32_t DTS_TS1SDIFDONER_SDIF_SMPL_DONE_B_0x0 = 0;
        /** @brief New data sample available */
    constexpr std::uint32_t DTS_TS1SDIFDONER_SDIF_SMPL_DONE_B_0x1 = 1;

    /** @brief DTS TS1 SDIF data register */
    using DTS_TS1SDIFDATAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample data. */
    using DTS_TS1SDIFDATAR_SAMPLE_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS sample type */
    using DTS_TS1SDIFDATAR_SAMPLE_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Indicates valid data (value: 0)
     *          - B_0x1: Indicates either analog access, signature select or fault debug mode (value: 1)
     */
        /** @brief Indicates valid data */
    constexpr std::uint32_t DTS_TS1SDIFDATAR_SAMPLE_TYPE_B_0x0 = 0;
        /** @brief Indicates either analog access, signature select or fault debug mode */
    constexpr std::uint32_t DTS_TS1SDIFDATAR_SAMPLE_TYPE_B_0x1 = 1;

    /** @brief Sample fault */
    using DTS_TS1SDIFDATAR_SAMPLE_FAULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS1 alarm A configuration register */
    using DTS_TS1ALARMA_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A hysteresis threshold */
    using DTS_TS1ALARMA_CFGR_HYSTA_THRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A threshold */
    using DTS_TS1ALARMA_CFGR_ALARMA_THRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS1 alarm B configuration register */
    using DTS_TS1ALARMB_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B hysteresis threshold */
    using DTS_TS1ALARMB_CFGR_HYSTB_THRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B threshold */
    using DTS_TS1ALARMB_CFGR_ALARMB_THRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS1 high/low sample register */
    using DTS_TS1HLSAMPLER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lowest valid data sample value received */
    using DTS_TS1HLSAMPLER_SMPL_LO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Highest valid data sample value received */
    using DTS_TS1HLSAMPLER_SMPL_HI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DTS TS1 high/low reset register */
    using DTS_TS1HILORESETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample Low Set */
    using DTS_TS1HILORESETR_SMPL_LO_SET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample high clear 0 */
    using DTS_TS1HILORESETR_SMPL_HI_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
