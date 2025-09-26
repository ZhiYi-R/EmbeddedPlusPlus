/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H523_TIM3_S_HPP
#define EMBEDDED_PP_STM32H523_TIM3_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief TIM3 address block description */
namespace STM32H523::TIM3_S {

    /** @brief TIM3 control register 1 */
    using TIM3_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter enable */
    using TIM3_CR1_CEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: Counter enabled (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint16_t TIM3_CR1_CEN_B_0x0 = 0;
        /** @brief Counter enabled */
    constexpr std::uint16_t TIM3_CR1_CEN_B_0x1 = 1;

    /** @brief Update disable */
    using TIM3_CR1_UDIS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UEV enabled. (value: 0)
     *          - B_0x1: UEV disabled. (value: 1)
     */
        /** @brief UEV enabled. */
    constexpr std::uint16_t TIM3_CR1_UDIS_B_0x0 = 0;
        /** @brief UEV disabled. */
    constexpr std::uint16_t TIM3_CR1_UDIS_B_0x1 = 1;

    /** @brief Update request source */
    using TIM3_CR1_URS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any of the following events generate an update interrupt or DMA request if enabled. (value: 0)
     *          - B_0x1: Only counter overflow/underflow generates an update interrupt or DMA request if enabled. (value: 1)
     */
        /** @brief Any of the following events generate an update interrupt or DMA request if enabled. */
    constexpr std::uint16_t TIM3_CR1_URS_B_0x0 = 0;
        /** @brief Only counter overflow/underflow generates an update interrupt or DMA request if enabled. */
    constexpr std::uint16_t TIM3_CR1_URS_B_0x1 = 1;

    /** @brief One-pulse mode */
    using TIM3_CR1_OPM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter is not stopped at update event (value: 0)
     *          - B_0x1: Counter stops counting at the next update event (clearing the bit CEN) (value: 1)
     */
        /** @brief Counter is not stopped at update event */
    constexpr std::uint16_t TIM3_CR1_OPM_B_0x0 = 0;
        /** @brief Counter stops counting at the next update event (clearing the bit CEN) */
    constexpr std::uint16_t TIM3_CR1_OPM_B_0x1 = 1;

    /** @brief Direction */
    using TIM3_CR1_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter used as upcounter (value: 0)
     *          - B_0x1: Counter used as downcounter (value: 1)
     */
        /** @brief Counter used as upcounter */
    constexpr std::uint16_t TIM3_CR1_DIR_B_0x0 = 0;
        /** @brief Counter used as downcounter */
    constexpr std::uint16_t TIM3_CR1_DIR_B_0x1 = 1;

    /** @brief Center-aligned mode selection */
    using TIM3_CR1_CMS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Edge-aligned mode. (value: 0)
     *          - B_0x1: Center-aligned mode 1. (value: 1)
     *          - B_0x2: Center-aligned mode 2. (value: 2)
     *          - B_0x3: Center-aligned mode 3. (value: 3)
     */
        /** @brief Edge-aligned mode. */
    constexpr std::uint16_t TIM3_CR1_CMS_B_0x0 = 0;
        /** @brief Center-aligned mode 1. */
    constexpr std::uint16_t TIM3_CR1_CMS_B_0x1 = 1;
        /** @brief Center-aligned mode 2. */
    constexpr std::uint16_t TIM3_CR1_CMS_B_0x2 = 2;
        /** @brief Center-aligned mode 3. */
    constexpr std::uint16_t TIM3_CR1_CMS_B_0x3 = 3;

    /** @brief Auto-reload preload enable */
    using TIM3_CR1_ARPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_ARR register is not buffered (value: 0)
     *          - B_0x1: TIMx_ARR register is buffered (value: 1)
     */
        /** @brief TIMx_ARR register is not buffered */
    constexpr std::uint16_t TIM3_CR1_ARPE_B_0x0 = 0;
        /** @brief TIMx_ARR register is buffered */
    constexpr std::uint16_t TIM3_CR1_ARPE_B_0x1 = 1;

    /** @brief Clock division */
    using TIM3_CR1_CKD = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tless thansub>DTSless than/sub> = tless thansub>tim_ker_ckless than/sub> (value: 0)
     *          - B_0x1: tless thansub>DTSless than/sub> = 2 tless thansub>tim_ker_ckless than/sub> (value: 1)
     *          - B_0x2: tless thansub>DTSless than/sub> = 4 tless thansub>tim_ker_ckless than/sub> (value: 2)
     */
        /** @brief tless thansub>DTSless than/sub> = tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM3_CR1_CKD_B_0x0 = 0;
        /** @brief tless thansub>DTSless than/sub> = 2 tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM3_CR1_CKD_B_0x1 = 1;
        /** @brief tless thansub>DTSless than/sub> = 4 tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM3_CR1_CKD_B_0x2 = 2;

    /** @brief UIF status bit remapping */
    using TIM3_CR1_UIFREMAP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No remapping. (value: 0)
     *          - B_0x1: Remapping enabled. (value: 1)
     */
        /** @brief No remapping. */
    constexpr std::uint16_t TIM3_CR1_UIFREMAP_B_0x0 = 0;
        /** @brief Remapping enabled. */
    constexpr std::uint16_t TIM3_CR1_UIFREMAP_B_0x1 = 1;

    /** @brief Dithering Enable */
    using TIM3_CR1_DITHEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dithering disabled (value: 0)
     *          - B_0x1: Dithering enabled (value: 1)
     */
        /** @brief Dithering disabled */
    constexpr std::uint16_t TIM3_CR1_DITHEN_B_0x0 = 0;
        /** @brief Dithering enabled */
    constexpr std::uint16_t TIM3_CR1_DITHEN_B_0x1 = 1;

    /** @brief TIM3 control register 2 */
    using TIM3_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare DMA selection */
    using TIM3_CR2_CCDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCx DMA request sent when CCx event occurs (value: 0)
     *          - B_0x1: CCx DMA requests sent when update event occurs (value: 1)
     */
        /** @brief CCx DMA request sent when CCx event occurs */
    constexpr std::uint32_t TIM3_CR2_CCDS_B_0x0 = 0;
        /** @brief CCx DMA requests sent when update event occurs */
    constexpr std::uint32_t TIM3_CR2_CCDS_B_0x1 = 1;

    /** @brief MMS[2:0]: Master mode selection */
    using TIM3_CR2_MMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset - the UG bit from the TIMx_EGR register is used as trigger output (tim_trgo). (value: 0)
     *          - B_0x1: Enable - the Counter enable signal, CNT_EN, is used as trigger output (tim_trgo). (value: 1)
     *          - B_0x2: Update - The update event is selected as trigger output (tim_trgo). (value: 2)
     *          - B_0x3: Compare Pulse - The trigger output send a positive pulse when the CC1IF flag is to be set (even if it was already high), as soon as a capture or a compare match occurred (tim_trgo). (value: 3)
     *          - B_0x4: Compare - tim_oc1refc signal is used as trigger output (tim_trgo) (value: 4)
     *          - B_0x5: Compare - tim_oc2refc signal is used as trigger output (tim_trgo) (value: 5)
     *          - B_0x6: Compare - tim_oc3refc signal is used as trigger output (tim_trgo) (value: 6)
     *          - B_0x7: Compare - tim_oc4refc signal is used as trigger output (tim_trgo) (value: 7)
     */
        /** @brief Reset - the UG bit from the TIMx_EGR register is used as trigger output (tim_trgo). */
    constexpr std::uint32_t TIM3_CR2_MMS_B_0x0 = 0;
        /** @brief Enable - the Counter enable signal, CNT_EN, is used as trigger output (tim_trgo). */
    constexpr std::uint32_t TIM3_CR2_MMS_B_0x1 = 1;
        /** @brief Update - The update event is selected as trigger output (tim_trgo). */
    constexpr std::uint32_t TIM3_CR2_MMS_B_0x2 = 2;
        /** @brief Compare Pulse - The trigger output send a positive pulse when the CC1IF flag is to be set (even if it was already high), as soon as a capture or a compare match occurred (tim_trgo). */
    constexpr std::uint32_t TIM3_CR2_MMS_B_0x3 = 3;
        /** @brief Compare - tim_oc1refc signal is used as trigger output (tim_trgo) */
    constexpr std::uint32_t TIM3_CR2_MMS_B_0x4 = 4;
        /** @brief Compare - tim_oc2refc signal is used as trigger output (tim_trgo) */
    constexpr std::uint32_t TIM3_CR2_MMS_B_0x5 = 5;
        /** @brief Compare - tim_oc3refc signal is used as trigger output (tim_trgo) */
    constexpr std::uint32_t TIM3_CR2_MMS_B_0x6 = 6;
        /** @brief Compare - tim_oc4refc signal is used as trigger output (tim_trgo) */
    constexpr std::uint32_t TIM3_CR2_MMS_B_0x7 = 7;

    /** @brief tim_ti1 selection */
    using TIM3_CR2_TI1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The tim_ti1_in[15:0] multiplexer output is to tim_ti1 input (value: 0)
     *          - B_0x1: The tim_ti1_in[15:0], tim_ti2_in[15:0] and tim_ti3_in[15:0] multiplexers outputs are XORed and connected to the tim_ti1 input. (value: 1)
     */
        /** @brief The tim_ti1_in[15:0] multiplexer output is to tim_ti1 input */
    constexpr std::uint32_t TIM3_CR2_TI1S_B_0x0 = 0;
        /** @brief The tim_ti1_in[15:0], tim_ti2_in[15:0] and tim_ti3_in[15:0] multiplexers outputs are XORed and connected to the tim_ti1 input. */
    constexpr std::uint32_t TIM3_CR2_TI1S_B_0x1 = 1;

    /** @brief MMS[3] */
    using TIM3_CR2_MMS_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 slave mode control register */
    using TIM3_SMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMS[2:0]: Slave mode selection */
    using TIM3_SMCR_SMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Slave mode disabled - if CEN = 1 then the prescaler is clocked directly by the internal clock. (value: 0)
     *          - B_0x1: Encoder mode 1 - Counter counts up/down on tim_ti1fp1 edge depending on tim_ti2fp2 level. (value: 1)
     *          - B_0x2: Encoder mode 2 - Counter counts up/down on tim_ti2fp2 edge depending on tim_ti1fp1 level. (value: 2)
     *          - B_0x3: Encoder mode 3 - Counter counts up/down on both tim_ti1fp1 and tim_ti2fp2 edges depending on the level of the other input. (value: 3)
     *          - B_0x4: Reset Mode - Rising edge of the selected trigger input (tim_trgi) reinitializes the counter and generates an update of the registers. (value: 4)
     *          - B_0x5: Gated Mode - The counter clock is enabled when the trigger input (tim_trgi) is high. (value: 5)
     *          - B_0x6: Trigger Mode - The counter starts at a rising edge of the trigger tim_trgi (but it is not reset). (value: 6)
     *          - B_0x7: External Clock Mode 1 - Rising edges of the selected trigger (tim_trgi) clock the counter. (value: 7)
     */
        /** @brief Slave mode disabled - if CEN = 1 then the prescaler is clocked directly by the internal clock. */
    constexpr std::uint32_t TIM3_SMCR_SMS_B_0x0 = 0;
        /** @brief Encoder mode 1 - Counter counts up/down on tim_ti1fp1 edge depending on tim_ti2fp2 level. */
    constexpr std::uint32_t TIM3_SMCR_SMS_B_0x1 = 1;
        /** @brief Encoder mode 2 - Counter counts up/down on tim_ti2fp2 edge depending on tim_ti1fp1 level. */
    constexpr std::uint32_t TIM3_SMCR_SMS_B_0x2 = 2;
        /** @brief Encoder mode 3 - Counter counts up/down on both tim_ti1fp1 and tim_ti2fp2 edges depending on the level of the other input. */
    constexpr std::uint32_t TIM3_SMCR_SMS_B_0x3 = 3;
        /** @brief Reset Mode - Rising edge of the selected trigger input (tim_trgi) reinitializes the counter and generates an update of the registers. */
    constexpr std::uint32_t TIM3_SMCR_SMS_B_0x4 = 4;
        /** @brief Gated Mode - The counter clock is enabled when the trigger input (tim_trgi) is high. */
    constexpr std::uint32_t TIM3_SMCR_SMS_B_0x5 = 5;
        /** @brief Trigger Mode - The counter starts at a rising edge of the trigger tim_trgi (but it is not reset). */
    constexpr std::uint32_t TIM3_SMCR_SMS_B_0x6 = 6;
        /** @brief External Clock Mode 1 - Rising edges of the selected trigger (tim_trgi) clock the counter. */
    constexpr std::uint32_t TIM3_SMCR_SMS_B_0x7 = 7;

    /** @brief OCREF clear selection */
    using TIM3_SMCR_OCCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ocref_clr_int is connected to the tim_ocref_clr input (value: 0)
     *          - B_0x1: tim_ocref_clr_int is connected to tim_etrf (value: 1)
     */
        /** @brief tim_ocref_clr_int is connected to the tim_ocref_clr input */
    constexpr std::uint32_t TIM3_SMCR_OCCS_B_0x0 = 0;
        /** @brief tim_ocref_clr_int is connected to tim_etrf */
    constexpr std::uint32_t TIM3_SMCR_OCCS_B_0x1 = 1;

    /** @brief TS[2:0]: Trigger selection */
    using TIM3_SMCR_TS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal trigger 0 (tim_itr0) (value: 0)
     *          - B_0x1: Internal trigger 1 (tim_itr1) (value: 1)
     *          - B_0x2: Internal trigger 2 (tim_itr2) (value: 2)
     *          - B_0x3: Internal trigger 3 (tim_itr3) (value: 3)
     *          - B_0x4: tim_ti1 edge detector (tim_ti1f_ed) (value: 4)
     *          - B_0x5: Filtered timer input 1 (tim_ti1fp1) (value: 5)
     *          - B_0x6: Filtered timer input 2 (tim_ti2fp2) (value: 6)
     *          - B_0x7: External trigger input (tim_etrf) (value: 7)
     */
        /** @brief Internal trigger 0 (tim_itr0) */
    constexpr std::uint32_t TIM3_SMCR_TS_B_0x0 = 0;
        /** @brief Internal trigger 1 (tim_itr1) */
    constexpr std::uint32_t TIM3_SMCR_TS_B_0x1 = 1;
        /** @brief Internal trigger 2 (tim_itr2) */
    constexpr std::uint32_t TIM3_SMCR_TS_B_0x2 = 2;
        /** @brief Internal trigger 3 (tim_itr3) */
    constexpr std::uint32_t TIM3_SMCR_TS_B_0x3 = 3;
        /** @brief tim_ti1 edge detector (tim_ti1f_ed) */
    constexpr std::uint32_t TIM3_SMCR_TS_B_0x4 = 4;
        /** @brief Filtered timer input 1 (tim_ti1fp1) */
    constexpr std::uint32_t TIM3_SMCR_TS_B_0x5 = 5;
        /** @brief Filtered timer input 2 (tim_ti2fp2) */
    constexpr std::uint32_t TIM3_SMCR_TS_B_0x6 = 6;
        /** @brief External trigger input (tim_etrf) */
    constexpr std::uint32_t TIM3_SMCR_TS_B_0x7 = 7;

    /** @brief Master/Slave mode */
    using TIM3_SMCR_MSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: The effect of an event on the trigger input (tim_trgi) is delayed to allow a perfect synchronization between the current timer and its slaves (through tim_trgo). (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t TIM3_SMCR_MSM_B_0x0 = 0;
        /** @brief The effect of an event on the trigger input (tim_trgi) is delayed to allow a perfect synchronization between the current timer and its slaves (through tim_trgo). */
    constexpr std::uint32_t TIM3_SMCR_MSM_B_0x1 = 1;

    /** @brief External trigger filter */
    using TIM3_SMCR_ETF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No filter, sampling is done at fless thansub>DTSless than/sub> (value: 0)
     *          - B_0x1: fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=2 (value: 1)
     *          - B_0x2: fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=4 (value: 2)
     *          - B_0x3: fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=8 (value: 3)
     *          - B_0x4: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=6 (value: 4)
     *          - B_0x5: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 (value: 5)
     *          - B_0x6: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 (value: 6)
     *          - B_0x7: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 (value: 7)
     *          - B_0x8: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 (value: 8)
     *          - B_0x9: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 (value: 9)
     *          - B_0xA: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 (value: 10)
     *          - B_0xB: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 (value: 11)
     *          - B_0xC: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 (value: 12)
     *          - B_0xD: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 (value: 13)
     *          - B_0xE: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 (value: 14)
     *          - B_0xF: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 (value: 15)
     */
        /** @brief No filter, sampling is done at fless thansub>DTSless than/sub> */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0x0 = 0;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=2 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0x1 = 1;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=4 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0x2 = 2;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=8 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0x3 = 3;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=6 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0x4 = 4;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0x5 = 5;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0x6 = 6;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0x7 = 7;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0x8 = 8;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0x9 = 9;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0xA = 10;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0xB = 11;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0xC = 12;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0xD = 13;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0xE = 14;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 */
    constexpr std::uint32_t TIM3_SMCR_ETF_B_0xF = 15;

    /** @brief External trigger prescaler */
    using TIM3_SMCR_ETPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Prescaler OFF (value: 0)
     *          - B_0x1: tim_etrp frequency divided by 2 (value: 1)
     *          - B_0x2: tim_etrp frequency divided by 4 (value: 2)
     *          - B_0x3: tim_etrp frequency divided by 8 (value: 3)
     */
        /** @brief Prescaler OFF */
    constexpr std::uint32_t TIM3_SMCR_ETPS_B_0x0 = 0;
        /** @brief tim_etrp frequency divided by 2 */
    constexpr std::uint32_t TIM3_SMCR_ETPS_B_0x1 = 1;
        /** @brief tim_etrp frequency divided by 4 */
    constexpr std::uint32_t TIM3_SMCR_ETPS_B_0x2 = 2;
        /** @brief tim_etrp frequency divided by 8 */
    constexpr std::uint32_t TIM3_SMCR_ETPS_B_0x3 = 3;

    /** @brief External clock enable */
    using TIM3_SMCR_ECE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External clock mode 2 disabled (value: 0)
     *          - B_0x1: External clock mode 2 enabled. (value: 1)
     */
        /** @brief External clock mode 2 disabled */
    constexpr std::uint32_t TIM3_SMCR_ECE_B_0x0 = 0;
        /** @brief External clock mode 2 enabled. */
    constexpr std::uint32_t TIM3_SMCR_ECE_B_0x1 = 1;

    /** @brief External trigger polarity */
    using TIM3_SMCR_ETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_etr_in is non-inverted, active at high level or rising edge (value: 0)
     *          - B_0x1: tim_etr_in is inverted, active at low level or falling edge (value: 1)
     */
        /** @brief tim_etr_in is non-inverted, active at high level or rising edge */
    constexpr std::uint32_t TIM3_SMCR_ETP_B_0x0 = 0;
        /** @brief tim_etr_in is inverted, active at low level or falling edge */
    constexpr std::uint32_t TIM3_SMCR_ETP_B_0x1 = 1;

    /** @brief Slave mode selection When external signals are selected the active edge of the trigger signal (tim_trgi) is linked to the polarity selected on the external input (see Input Control register and Control Register description. Note: The gated mode must not be used if tim_ti1f_ed is selected as the trigger input (TS=00100). Indeed, tim_ti1f_ed outputs 1 pulse for each transition on tim_ti1f, whereas the gated mode checks the level of the trigger signal. Note: The clock of the slave peripherals (timer, ADC, ...) receiving the tim_trgo signal must be enabled prior to receive events from the master timer, and the clock frequency (prescaler) must not be changed on-the-fly while triggers are received from the master timer. */
    using TIM3_SMCR_SMS_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Slave mode disabled - if CEN = '1 then the prescaler is clocked directly by the internal clock. (value: 0)
     *          - B_0x1: Encoder mode 1 - Counter counts up/down on tim_ti1fp1 edge depending on tim_ti2fp2 level. (value: 1)
     */
        /** @brief Slave mode disabled - if CEN = '1 then the prescaler is clocked directly by the internal clock. */
    constexpr std::uint32_t TIM3_SMCR_SMS_1_B_0x0 = 0;
        /** @brief Encoder mode 1 - Counter counts up/down on tim_ti1fp1 edge depending on tim_ti2fp2 level. */
    constexpr std::uint32_t TIM3_SMCR_SMS_1_B_0x1 = 1;

    /** @brief Trigger selection This bit-field selects the trigger input to be used to synchronize the counter. Others: Reserved See for product specific implementation details. Note: These bits must be changed only when they are not used (e.g. when SMS=000) to avoid wrong edge detections at the transition. */
    using TIM3_SMCR_TS_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal trigger 0 (tim_itr0) (value: 0)
     *          - B_0x1: Internal trigger 1 (tim_itr1) (value: 1)
     *          - B_0x2: Internal trigger 2 (tim_itr2) (value: 2)
     *          - B_0x3: Internal trigger 3 (tim_itr3) (value: 3)
     */
        /** @brief Internal trigger 0 (tim_itr0) */
    constexpr std::uint32_t TIM3_SMCR_TS_1_B_0x0 = 0;
        /** @brief Internal trigger 1 (tim_itr1) */
    constexpr std::uint32_t TIM3_SMCR_TS_1_B_0x1 = 1;
        /** @brief Internal trigger 2 (tim_itr2) */
    constexpr std::uint32_t TIM3_SMCR_TS_1_B_0x2 = 2;
        /** @brief Internal trigger 3 (tim_itr3) */
    constexpr std::uint32_t TIM3_SMCR_TS_1_B_0x3 = 3;

    /** @brief SMS preload enable */
    using TIM3_SMCR_SMSPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SMS[3:0] bitfield is not preloaded (value: 0)
     *          - B_0x1: SMS[3:0] preload is enabled (value: 1)
     */
        /** @brief SMS[3:0] bitfield is not preloaded */
    constexpr std::uint32_t TIM3_SMCR_SMSPE_B_0x0 = 0;
        /** @brief SMS[3:0] preload is enabled */
    constexpr std::uint32_t TIM3_SMCR_SMSPE_B_0x1 = 1;

    /** @brief SMS preload source */
    using TIM3_SMCR_SMSPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The transfer is triggered by the Timer's Update event (value: 0)
     *          - B_0x1: The transfer is triggered by the Index event (value: 1)
     */
        /** @brief The transfer is triggered by the Timer's Update event */
    constexpr std::uint32_t TIM3_SMCR_SMSPS_B_0x0 = 0;
        /** @brief The transfer is triggered by the Index event */
    constexpr std::uint32_t TIM3_SMCR_SMSPS_B_0x1 = 1;

    /** @brief TIM3 DMA/Interrupt enable register */
    using TIM3_DIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt enable */
    using TIM3_DIER_UIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update interrupt disabled. (value: 0)
     *          - B_0x1: Update interrupt enabled. (value: 1)
     */
        /** @brief Update interrupt disabled. */
    constexpr std::uint32_t TIM3_DIER_UIE_B_0x0 = 0;
        /** @brief Update interrupt enabled. */
    constexpr std::uint32_t TIM3_DIER_UIE_B_0x1 = 1;

    /** @brief Capture/Compare 1 interrupt enable */
    using TIM3_DIER_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 interrupt disabled. (value: 0)
     *          - B_0x1: CC1 interrupt enabled. (value: 1)
     */
        /** @brief CC1 interrupt disabled. */
    constexpr std::uint32_t TIM3_DIER_CC1IE_B_0x0 = 0;
        /** @brief CC1 interrupt enabled. */
    constexpr std::uint32_t TIM3_DIER_CC1IE_B_0x1 = 1;

    /** @brief Capture/Compare 2 interrupt enable */
    using TIM3_DIER_CC2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 interrupt disabled. (value: 0)
     *          - B_0x1: CC2 interrupt enabled. (value: 1)
     */
        /** @brief CC2 interrupt disabled. */
    constexpr std::uint32_t TIM3_DIER_CC2IE_B_0x0 = 0;
        /** @brief CC2 interrupt enabled. */
    constexpr std::uint32_t TIM3_DIER_CC2IE_B_0x1 = 1;

    /** @brief Capture/Compare 3 interrupt enable */
    using TIM3_DIER_CC3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC3 interrupt disabled. (value: 0)
     *          - B_0x1: CC3 interrupt enabled. (value: 1)
     */
        /** @brief CC3 interrupt disabled. */
    constexpr std::uint32_t TIM3_DIER_CC3IE_B_0x0 = 0;
        /** @brief CC3 interrupt enabled. */
    constexpr std::uint32_t TIM3_DIER_CC3IE_B_0x1 = 1;

    /** @brief Capture/Compare 4 interrupt enable */
    using TIM3_DIER_CC4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC4 interrupt disabled. (value: 0)
     *          - B_0x1: CC4 interrupt enabled. (value: 1)
     */
        /** @brief CC4 interrupt disabled. */
    constexpr std::uint32_t TIM3_DIER_CC4IE_B_0x0 = 0;
        /** @brief CC4 interrupt enabled. */
    constexpr std::uint32_t TIM3_DIER_CC4IE_B_0x1 = 1;

    /** @brief Trigger interrupt enable */
    using TIM3_DIER_TIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger interrupt disabled. (value: 0)
     *          - B_0x1: Trigger interrupt enabled. (value: 1)
     */
        /** @brief Trigger interrupt disabled. */
    constexpr std::uint32_t TIM3_DIER_TIE_B_0x0 = 0;
        /** @brief Trigger interrupt enabled. */
    constexpr std::uint32_t TIM3_DIER_TIE_B_0x1 = 1;

    /** @brief Update DMA request enable */
    using TIM3_DIER_UDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update DMA request disabled. (value: 0)
     *          - B_0x1: Update DMA request enabled. (value: 1)
     */
        /** @brief Update DMA request disabled. */
    constexpr std::uint32_t TIM3_DIER_UDE_B_0x0 = 0;
        /** @brief Update DMA request enabled. */
    constexpr std::uint32_t TIM3_DIER_UDE_B_0x1 = 1;

    /** @brief Capture/Compare 1 DMA request enable */
    using TIM3_DIER_CC1DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 DMA request disabled. (value: 0)
     *          - B_0x1: CC1 DMA request enabled. (value: 1)
     */
        /** @brief CC1 DMA request disabled. */
    constexpr std::uint32_t TIM3_DIER_CC1DE_B_0x0 = 0;
        /** @brief CC1 DMA request enabled. */
    constexpr std::uint32_t TIM3_DIER_CC1DE_B_0x1 = 1;

    /** @brief Capture/Compare 2 DMA request enable */
    using TIM3_DIER_CC2DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 DMA request disabled. (value: 0)
     *          - B_0x1: CC2 DMA request enabled. (value: 1)
     */
        /** @brief CC2 DMA request disabled. */
    constexpr std::uint32_t TIM3_DIER_CC2DE_B_0x0 = 0;
        /** @brief CC2 DMA request enabled. */
    constexpr std::uint32_t TIM3_DIER_CC2DE_B_0x1 = 1;

    /** @brief Capture/Compare 3 DMA request enable */
    using TIM3_DIER_CC3DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC3 DMA request disabled. (value: 0)
     *          - B_0x1: CC3 DMA request enabled. (value: 1)
     */
        /** @brief CC3 DMA request disabled. */
    constexpr std::uint32_t TIM3_DIER_CC3DE_B_0x0 = 0;
        /** @brief CC3 DMA request enabled. */
    constexpr std::uint32_t TIM3_DIER_CC3DE_B_0x1 = 1;

    /** @brief Capture/Compare 4 DMA request enable */
    using TIM3_DIER_CC4DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC4 DMA request disabled. (value: 0)
     *          - B_0x1: CC4 DMA request enabled. (value: 1)
     */
        /** @brief CC4 DMA request disabled. */
    constexpr std::uint32_t TIM3_DIER_CC4DE_B_0x0 = 0;
        /** @brief CC4 DMA request enabled. */
    constexpr std::uint32_t TIM3_DIER_CC4DE_B_0x1 = 1;

    /** @brief Trigger DMA request enable */
    using TIM3_DIER_TDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger DMA request disabled. (value: 0)
     *          - B_0x1: Trigger DMA request enabled. (value: 1)
     */
        /** @brief Trigger DMA request disabled. */
    constexpr std::uint32_t TIM3_DIER_TDE_B_0x0 = 0;
        /** @brief Trigger DMA request enabled. */
    constexpr std::uint32_t TIM3_DIER_TDE_B_0x1 = 1;

    /** @brief Index interrupt enable */
    using TIM3_DIER_IDXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index interrupt disabled (value: 0)
     *          - B_0x1: Index interrupt enabled (value: 1)
     */
        /** @brief Index interrupt disabled */
    constexpr std::uint32_t TIM3_DIER_IDXIE_B_0x0 = 0;
        /** @brief Index interrupt enabled */
    constexpr std::uint32_t TIM3_DIER_IDXIE_B_0x1 = 1;

    /** @brief Direction change interrupt enable */
    using TIM3_DIER_DIRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Direction change interrupt disabled (value: 0)
     *          - B_0x1: Direction change interrupt enabled (value: 1)
     */
        /** @brief Direction change interrupt disabled */
    constexpr std::uint32_t TIM3_DIER_DIRIE_B_0x0 = 0;
        /** @brief Direction change interrupt enabled */
    constexpr std::uint32_t TIM3_DIER_DIRIE_B_0x1 = 1;

    /** @brief Index error interrupt enable */
    using TIM3_DIER_IERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index error interrupt disabled (value: 0)
     *          - B_0x1: Index error interrupt enabled (value: 1)
     */
        /** @brief Index error interrupt disabled */
    constexpr std::uint32_t TIM3_DIER_IERRIE_B_0x0 = 0;
        /** @brief Index error interrupt enabled */
    constexpr std::uint32_t TIM3_DIER_IERRIE_B_0x1 = 1;

    /** @brief Transition error interrupt enable */
    using TIM3_DIER_TERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transition error interrupt disabled (value: 0)
     *          - B_0x1: Transition error interrupt enabled (value: 1)
     */
        /** @brief Transition error interrupt disabled */
    constexpr std::uint32_t TIM3_DIER_TERRIE_B_0x0 = 0;
        /** @brief Transition error interrupt enabled */
    constexpr std::uint32_t TIM3_DIER_TERRIE_B_0x1 = 1;

    /** @brief TIM3 status register */
    using TIM3_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt flag */
    using TIM3_SR_UIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No update occurred (value: 0)
     *          - B_0x1: Update interrupt pending. (value: 1)
     */
        /** @brief No update occurred */
    constexpr std::uint32_t TIM3_SR_UIF_B_0x0 = 0;
        /** @brief Update interrupt pending. */
    constexpr std::uint32_t TIM3_SR_UIF_B_0x1 = 1;

    /** @brief Capture/compare 1 interrupt flag */
    using TIM3_SR_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No compare match / No input capture occurred (value: 0)
     *          - B_0x1: A compare match or an input capture occurred (value: 1)
     */
        /** @brief No compare match / No input capture occurred */
    constexpr std::uint32_t TIM3_SR_CC1IF_B_0x0 = 0;
        /** @brief A compare match or an input capture occurred */
    constexpr std::uint32_t TIM3_SR_CC1IF_B_0x1 = 1;

    /** @brief Capture/Compare 2 interrupt flag */
    using TIM3_SR_CC2IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 3 interrupt flag */
    using TIM3_SR_CC3IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 4 interrupt flag */
    using TIM3_SR_CC4IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger interrupt flag */
    using TIM3_SR_TIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger event occurred. (value: 0)
     *          - B_0x1: Trigger interrupt pending. (value: 1)
     */
        /** @brief No trigger event occurred. */
    constexpr std::uint32_t TIM3_SR_TIF_B_0x0 = 0;
        /** @brief Trigger interrupt pending. */
    constexpr std::uint32_t TIM3_SR_TIF_B_0x1 = 1;

    /** @brief Capture/Compare 1 overcapture flag */
    using TIM3_SR_CC1OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overcapture has been detected. (value: 0)
     *          - B_0x1: The counter value has been captured in TIMx_CCR1 register while CC1IF flag was already set (value: 1)
     */
        /** @brief No overcapture has been detected. */
    constexpr std::uint32_t TIM3_SR_CC1OF_B_0x0 = 0;
        /** @brief The counter value has been captured in TIMx_CCR1 register while CC1IF flag was already set */
    constexpr std::uint32_t TIM3_SR_CC1OF_B_0x1 = 1;

    /** @brief Capture/compare 2 overcapture flag */
    using TIM3_SR_CC2OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 3 overcapture flag */
    using TIM3_SR_CC3OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 4 overcapture flag */
    using TIM3_SR_CC4OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Index interrupt flag */
    using TIM3_SR_IDXF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No index event occurred. (value: 0)
     *          - B_0x1: An index event has occurred (value: 1)
     */
        /** @brief No index event occurred. */
    constexpr std::uint32_t TIM3_SR_IDXF_B_0x0 = 0;
        /** @brief An index event has occurred */
    constexpr std::uint32_t TIM3_SR_IDXF_B_0x1 = 1;

    /** @brief Direction change interrupt flag */
    using TIM3_SR_DIRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No direction change (value: 0)
     *          - B_0x1: Direction change (value: 1)
     */
        /** @brief No direction change */
    constexpr std::uint32_t TIM3_SR_DIRF_B_0x0 = 0;
        /** @brief Direction change */
    constexpr std::uint32_t TIM3_SR_DIRF_B_0x1 = 1;

    /** @brief Index error interrupt flag */
    using TIM3_SR_IERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No index error has been detected. (value: 0)
     *          - B_0x1: An index error has been detected (value: 1)
     */
        /** @brief No index error has been detected. */
    constexpr std::uint32_t TIM3_SR_IERRF_B_0x0 = 0;
        /** @brief An index error has been detected */
    constexpr std::uint32_t TIM3_SR_IERRF_B_0x1 = 1;

    /** @brief Transition error interrupt flag */
    using TIM3_SR_TERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No encoder transition error has been detected. (value: 0)
     *          - B_0x1: An encoder transition error has been detected (value: 1)
     */
        /** @brief No encoder transition error has been detected. */
    constexpr std::uint32_t TIM3_SR_TERRF_B_0x0 = 0;
        /** @brief An encoder transition error has been detected */
    constexpr std::uint32_t TIM3_SR_TERRF_B_0x1 = 1;

    /** @brief TIM3 event generation register */
    using TIM3_EGR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update generation */
    using TIM3_EGR_UG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Re-initialize the counter and generates an update of the registers. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM3_EGR_UG_B_0x0 = 0;
        /** @brief Re-initialize the counter and generates an update of the registers. */
    constexpr std::uint16_t TIM3_EGR_UG_B_0x1 = 1;

    /** @brief Capture/compare 1 generation */
    using TIM3_EGR_CC1G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: A capture/compare event is generated on channel 1: (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM3_EGR_CC1G_B_0x0 = 0;
        /** @brief A capture/compare event is generated on channel 1: */
    constexpr std::uint16_t TIM3_EGR_CC1G_B_0x1 = 1;

    /** @brief Capture/compare 2 generation */
    using TIM3_EGR_CC2G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 3 generation */
    using TIM3_EGR_CC3G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 4 generation */
    using TIM3_EGR_CC4G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger generation */
    using TIM3_EGR_TG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: The TIF flag is set in TIMx_SR register. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM3_EGR_TG_B_0x0 = 0;
        /** @brief The TIF flag is set in TIMx_SR register. */
    constexpr std::uint16_t TIM3_EGR_TG_B_0x1 = 1;

    /** @brief TIM3 capture/compare mode register 1 */
    using TIM3_CCMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 selection */
    using TIM3_CCMR1_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured as output (value: 0)
     *          - B_0x1: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 (value: 1)
     *          - B_0x2: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2 (value: 2)
     *          - B_0x3: CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC1 channel is configured as output */
    constexpr std::uint32_t TIM3_CCMR1_CC1S_B_0x0 = 0;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM3_CCMR1_CC1S_B_0x1 = 1;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2 */
    constexpr std::uint32_t TIM3_CCMR1_CC1S_B_0x2 = 2;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. */
    constexpr std::uint32_t TIM3_CCMR1_CC1S_B_0x3 = 3;

    /** @brief Input capture 1 prescaler */
    using TIM3_CCMR1_IC1PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no prescaler, capture is done each time an edge is detected on the capture input (value: 0)
     *          - B_0x1: capture is done once every 2 events (value: 1)
     *          - B_0x2: capture is done once every 4 events (value: 2)
     *          - B_0x3: capture is done once every 8 events (value: 3)
     */
        /** @brief no prescaler, capture is done each time an edge is detected on the capture input */
    constexpr std::uint32_t TIM3_CCMR1_IC1PSC_B_0x0 = 0;
        /** @brief capture is done once every 2 events */
    constexpr std::uint32_t TIM3_CCMR1_IC1PSC_B_0x1 = 1;
        /** @brief capture is done once every 4 events */
    constexpr std::uint32_t TIM3_CCMR1_IC1PSC_B_0x2 = 2;
        /** @brief capture is done once every 8 events */
    constexpr std::uint32_t TIM3_CCMR1_IC1PSC_B_0x3 = 3;

    /** @brief Input capture 1 filter */
    using TIM3_CCMR1_IC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No filter, sampling is done at fless thansub>DTSless than/sub> (value: 0)
     *          - B_0x1: fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=2 (value: 1)
     *          - B_0x2: fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=4 (value: 2)
     *          - B_0x3: fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=8 (value: 3)
     *          - B_0x4: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=6 (value: 4)
     *          - B_0x5: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 (value: 5)
     *          - B_0x6: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 (value: 6)
     *          - B_0x7: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 (value: 7)
     *          - B_0x8: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 (value: 8)
     *          - B_0x9: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 (value: 9)
     *          - B_0xA: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 (value: 10)
     *          - B_0xB: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 (value: 11)
     *          - B_0xC: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 (value: 12)
     *          - B_0xD: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 (value: 13)
     *          - B_0xE: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 (value: 14)
     *          - B_0xF: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 (value: 15)
     */
        /** @brief No filter, sampling is done at fless thansub>DTSless than/sub> */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0x0 = 0;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=2 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0x1 = 1;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=4 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0x2 = 2;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=8 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0x3 = 3;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=6 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0x4 = 4;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0x5 = 5;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0x6 = 6;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0x7 = 7;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0x8 = 8;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0x9 = 9;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0xA = 10;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0xB = 11;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0xC = 12;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0xD = 13;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0xE = 14;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 */
    constexpr std::uint32_t TIM3_CCMR1_IC1F_B_0xF = 15;

    /** @brief Capture/compare 2 selection */
    using TIM3_CCMR1_CC2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 channel is configured as output. (value: 0)
     *          - B_0x1: CC2 channel is configured as input, tim_ic2 is mapped on tim_ti2. (value: 1)
     *          - B_0x2: CC2 channel is configured as input, tim_ic2 is mapped on tim_ti1. (value: 2)
     *          - B_0x3: CC2 channel is configured as input, tim_ic2 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC2 channel is configured as output. */
    constexpr std::uint32_t TIM3_CCMR1_CC2S_B_0x0 = 0;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_ti2. */
    constexpr std::uint32_t TIM3_CCMR1_CC2S_B_0x1 = 1;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_ti1. */
    constexpr std::uint32_t TIM3_CCMR1_CC2S_B_0x2 = 2;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_trc. */
    constexpr std::uint32_t TIM3_CCMR1_CC2S_B_0x3 = 3;

    /** @brief Input capture 2 prescaler */
    using TIM3_CCMR1_IC2PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 2 filter */
    using TIM3_CCMR1_IC2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 capture/compare mode register 1 */
    using TIM3_CCMR1_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 selection */
    using TIM3_CCMR1_ALTERNATE1_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured as output. (value: 0)
     *          - B_0x1: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1. (value: 1)
     *          - B_0x2: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2. (value: 2)
     *          - B_0x3: CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC1 channel is configured as output. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_CC1S_B_0x0 = 0;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_CC1S_B_0x1 = 1;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_CC1S_B_0x2 = 2;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_CC1S_B_0x3 = 3;

    /** @brief Output compare 1 fast enable */
    using TIM3_CCMR1_ALTERNATE1_OC1FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 behaves normally depending on counter and CCR1 values even when the trigger is ON. (value: 0)
     *          - B_0x1: An active edge on the trigger input acts like a compare match on CC1 output. (value: 1)
     */
        /** @brief CC1 behaves normally depending on counter and CCR1 values even when the trigger is ON. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1FE_B_0x0 = 0;
        /** @brief An active edge on the trigger input acts like a compare match on CC1 output. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1FE_B_0x1 = 1;

    /** @brief Output compare 1 preload enable */
    using TIM3_CCMR1_ALTERNATE1_OC1PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Preload register on TIMx_CCR1 disabled. (value: 0)
     *          - B_0x1: Preload register on TIMx_CCR1 enabled. (value: 1)
     */
        /** @brief Preload register on TIMx_CCR1 disabled. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1PE_B_0x0 = 0;
        /** @brief Preload register on TIMx_CCR1 enabled. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1PE_B_0x1 = 1;

    /** @brief OC1M[2:0]: Output compare 1 mode */
    using TIM3_CCMR1_ALTERNATE1_OC1M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Frozen - The comparison between the output compare register TIMx_CCR1 and the counter TIMx_CNT has no effect on the outputs. (value: 0)
     *          - B_0x1: Set channel 1 to active level on match. (value: 1)
     *          - B_0x2: Set channel 1 to inactive level on match. (value: 2)
     *          - B_0x3: Toggle - tim_oc1ref toggles when TIMx_CNT=TIMx_CCR1. (value: 3)
     *          - B_0x4: Force inactive level - tim_oc1ref is forced low. (value: 4)
     *          - B_0x5: Force active level - tim_oc1ref is forced high. (value: 5)
     *          - B_0x6: PWM mode 1 - In upcounting, channel 1 is active as long as TIMx_CNTless thanTIMx_CCR1 else inactive. (value: 6)
     *          - B_0x7: PWM mode 2 - In upcounting, channel 1 is inactive as long as TIMx_CNTless thanTIMx_CCR1 else active. (value: 7)
     */
        /** @brief Frozen - The comparison between the output compare register TIMx_CCR1 and the counter TIMx_CNT has no effect on the outputs. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1M_B_0x0 = 0;
        /** @brief Set channel 1 to active level on match. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1M_B_0x1 = 1;
        /** @brief Set channel 1 to inactive level on match. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1M_B_0x2 = 2;
        /** @brief Toggle - tim_oc1ref toggles when TIMx_CNT=TIMx_CCR1. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1M_B_0x3 = 3;
        /** @brief Force inactive level - tim_oc1ref is forced low. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1M_B_0x4 = 4;
        /** @brief Force active level - tim_oc1ref is forced high. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1M_B_0x5 = 5;
        /** @brief PWM mode 1 - In upcounting, channel 1 is active as long as TIMx_CNTless thanTIMx_CCR1 else inactive. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1M_B_0x6 = 6;
        /** @brief PWM mode 2 - In upcounting, channel 1 is inactive as long as TIMx_CNTless thanTIMx_CCR1 else active. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1M_B_0x7 = 7;

    /** @brief Output compare 1 clear enable */
    using TIM3_CCMR1_ALTERNATE1_OC1CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_oc1ref is not affected by the tim_ocref_clr_int input (value: 0)
     *          - B_0x1: tim_oc1ref is cleared as soon as a High level is detected on tim_ocref_clr_int input (value: 1)
     */
        /** @brief tim_oc1ref is not affected by the tim_ocref_clr_int input */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1CE_B_0x0 = 0;
        /** @brief tim_oc1ref is cleared as soon as a High level is detected on tim_ocref_clr_int input */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_OC1CE_B_0x1 = 1;

    /** @brief Capture/Compare 2 selection */
    using TIM3_CCMR1_ALTERNATE1_CC2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 channel is configured as output (value: 0)
     *          - B_0x1: CC2 channel is configured as input, tim_ic2 is mapped on tim_ti2 (value: 1)
     *          - B_0x2: CC2 channel is configured as input, tim_ic2 is mapped on tim_ti1 (value: 2)
     *          - B_0x3: CC2 channel is configured as input, tim_ic2 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC2 channel is configured as output */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_CC2S_B_0x0 = 0;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_ti2 */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_CC2S_B_0x1 = 1;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_CC2S_B_0x2 = 2;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_trc. */
    constexpr std::uint32_t TIM3_CCMR1_ALTERNATE1_CC2S_B_0x3 = 3;

    /** @brief Output compare 2 fast enable */
    using TIM3_CCMR1_ALTERNATE1_OC2FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 2 preload enable */
    using TIM3_CCMR1_ALTERNATE1_OC2PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC2M[2:0]: Output compare 2 mode */
    using TIM3_CCMR1_ALTERNATE1_OC2M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 2 clear enable */
    using TIM3_CCMR1_ALTERNATE1_OC2CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC1M[3] */
    using TIM3_CCMR1_ALTERNATE1_OC1M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC2M[3] */
    using TIM3_CCMR1_ALTERNATE1_OC2M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 capture/compare mode register 2 */
    using TIM3_CCMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 3 selection */
    using TIM3_CCMR2_CC3S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC3 channel is configured as output (value: 0)
     *          - B_0x1: CC3 channel is configured as input, tim_ic3 is mapped on tim_ti3 (value: 1)
     *          - B_0x2: CC3 channel is configured as input, tim_ic3 is mapped on tim_ti4 (value: 2)
     *          - B_0x3: CC3 channel is configured as input, tim_ic3 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC3 channel is configured as output */
    constexpr std::uint32_t TIM3_CCMR2_CC3S_B_0x0 = 0;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_ti3 */
    constexpr std::uint32_t TIM3_CCMR2_CC3S_B_0x1 = 1;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_ti4 */
    constexpr std::uint32_t TIM3_CCMR2_CC3S_B_0x2 = 2;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_trc. */
    constexpr std::uint32_t TIM3_CCMR2_CC3S_B_0x3 = 3;

    /** @brief Input capture 3 prescaler */
    using TIM3_CCMR2_IC3PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 3 filter */
    using TIM3_CCMR2_IC3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 4 selection */
    using TIM3_CCMR2_CC4S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC4 channel is configured as output (value: 0)
     *          - B_0x1: CC4 channel is configured as input, tim_ic4 is mapped on tim_ti4 (value: 1)
     *          - B_0x2: CC4 channel is configured as input, tim_ic4 is mapped on tim_ti3 (value: 2)
     *          - B_0x3: CC4 channel is configured as input, tim_ic4 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC4 channel is configured as output */
    constexpr std::uint32_t TIM3_CCMR2_CC4S_B_0x0 = 0;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_ti4 */
    constexpr std::uint32_t TIM3_CCMR2_CC4S_B_0x1 = 1;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_ti3 */
    constexpr std::uint32_t TIM3_CCMR2_CC4S_B_0x2 = 2;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_trc. */
    constexpr std::uint32_t TIM3_CCMR2_CC4S_B_0x3 = 3;

    /** @brief Input capture 4 prescaler */
    using TIM3_CCMR2_IC4PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 4 filter */
    using TIM3_CCMR2_IC4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 capture/compare mode register 2 */
    using TIM3_CCMR2_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 3 selection */
    using TIM3_CCMR2_ALTERNATE1_CC3S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC3 channel is configured as output (value: 0)
     *          - B_0x1: CC3 channel is configured as input, tim_ic3 is mapped on tim_ti3 (value: 1)
     *          - B_0x2: CC3 channel is configured as input, tim_ic3 is mapped on tim_ti4 (value: 2)
     *          - B_0x3: CC3 channel is configured as input, tim_ic3 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC3 channel is configured as output */
    constexpr std::uint32_t TIM3_CCMR2_ALTERNATE1_CC3S_B_0x0 = 0;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_ti3 */
    constexpr std::uint32_t TIM3_CCMR2_ALTERNATE1_CC3S_B_0x1 = 1;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_ti4 */
    constexpr std::uint32_t TIM3_CCMR2_ALTERNATE1_CC3S_B_0x2 = 2;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_trc. */
    constexpr std::uint32_t TIM3_CCMR2_ALTERNATE1_CC3S_B_0x3 = 3;

    /** @brief Output compare 3 fast enable */
    using TIM3_CCMR2_ALTERNATE1_OC3FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 3 preload enable */
    using TIM3_CCMR2_ALTERNATE1_OC3PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC3M[2:0]: Output compare 3 mode */
    using TIM3_CCMR2_ALTERNATE1_OC3M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 3 clear enable */
    using TIM3_CCMR2_ALTERNATE1_OC3CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 4 selection */
    using TIM3_CCMR2_ALTERNATE1_CC4S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC4 channel is configured as output (value: 0)
     *          - B_0x1: CC4 channel is configured as input, tim_ic4 is mapped on tim_ti4 (value: 1)
     *          - B_0x2: CC4 channel is configured as input, tim_ic4 is mapped on tim_ti3 (value: 2)
     *          - B_0x3: CC4 channel is configured as input, tim_ic4 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC4 channel is configured as output */
    constexpr std::uint32_t TIM3_CCMR2_ALTERNATE1_CC4S_B_0x0 = 0;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_ti4 */
    constexpr std::uint32_t TIM3_CCMR2_ALTERNATE1_CC4S_B_0x1 = 1;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_ti3 */
    constexpr std::uint32_t TIM3_CCMR2_ALTERNATE1_CC4S_B_0x2 = 2;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_trc. */
    constexpr std::uint32_t TIM3_CCMR2_ALTERNATE1_CC4S_B_0x3 = 3;

    /** @brief Output compare 4 fast enable */
    using TIM3_CCMR2_ALTERNATE1_OC4FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 4 preload enable */
    using TIM3_CCMR2_ALTERNATE1_OC4PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC4M[2:0]: Output compare 4 mode */
    using TIM3_CCMR2_ALTERNATE1_OC4M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 4 clear enable */
    using TIM3_CCMR2_ALTERNATE1_OC4CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC3M[3] */
    using TIM3_CCMR2_ALTERNATE1_OC3M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC4M[3] */
    using TIM3_CCMR2_ALTERNATE1_OC4M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 capture/compare enable register */
    using TIM3_CCER = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 output enable. */
    using TIM3_CCER_CC1E = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture mode disabled / OC1 is not active (value: 0)
     *          - B_0x1: Capture mode enabled / OC1 signal is output on the corresponding output pin (value: 1)
     */
        /** @brief Capture mode disabled / OC1 is not active */
    constexpr std::uint16_t TIM3_CCER_CC1E_B_0x0 = 0;
        /** @brief Capture mode enabled / OC1 signal is output on the corresponding output pin */
    constexpr std::uint16_t TIM3_CCER_CC1E_B_0x1 = 1;

    /** @brief Capture/Compare 1 output Polarity. */
    using TIM3_CCER_CC1P = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OC1 active high (output mode) / Edge sensitivity selection (input mode, see below) (value: 0)
     *          - B_0x1: OC1 active low (output mode) / Edge sensitivity selection (input mode, see below) (value: 1)
     */
        /** @brief OC1 active high (output mode) / Edge sensitivity selection (input mode, see below) */
    constexpr std::uint16_t TIM3_CCER_CC1P_B_0x0 = 0;
        /** @brief OC1 active low (output mode) / Edge sensitivity selection (input mode, see below) */
    constexpr std::uint16_t TIM3_CCER_CC1P_B_0x1 = 1;

    /** @brief Capture/Compare 1 output Polarity. */
    using TIM3_CCER_CC1NP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 output enable. */
    using TIM3_CCER_CC2E = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 output Polarity. */
    using TIM3_CCER_CC2P = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 output Polarity. */
    using TIM3_CCER_CC2NP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 3 output enable. */
    using TIM3_CCER_CC3E = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 3 output Polarity. */
    using TIM3_CCER_CC3P = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 3 output Polarity. */
    using TIM3_CCER_CC3NP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 4 output enable. */
    using TIM3_CCER_CC4E = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 4 output Polarity. */
    using TIM3_CCER_CC4P = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 4 output Polarity. */
    using TIM3_CCER_CC4NP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 counter */
    using TIM3_CNT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TIM3_CNT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Value depends on IUFREMAP in TIMx_CR1. */
    using TIM3_CNT_UIFCPY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 prescaler */
    using TIM3_PSC = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler value */
    using TIM3_PSC_PSC = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 auto-reload register */
    using TIM3_ARR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low Auto-reload value */
    using TIM3_ARR_ARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 capture/compare register 1 */
    using TIM3_CCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 value */
    using TIM3_CCR1_CCR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 capture/compare register 2 */
    using TIM3_CCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 value */
    using TIM3_CCR2_CCR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 capture/compare register 3 */
    using TIM3_CCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 3 value */
    using TIM3_CCR3_CCR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 capture/compare register 4 */
    using TIM3_CCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 4 value */
    using TIM3_CCR4_CCR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 timer encoder control register */
    using TIM3_ECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Index enable */
    using TIM3_ECR_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index disabled (value: 0)
     *          - B_0x1: Index enabled (value: 1)
     */
        /** @brief Index disabled */
    constexpr std::uint32_t TIM3_ECR_IE_B_0x0 = 0;
        /** @brief Index enabled */
    constexpr std::uint32_t TIM3_ECR_IE_B_0x1 = 1;

    /** @brief Index direction */
    using TIM3_ECR_IDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index resets the counter whatever the direction (value: 0)
     *          - B_0x1: Index resets the counter when up-counting only (value: 1)
     *          - B_0x2: Index resets the counter when down-counting only (value: 2)
     */
        /** @brief Index resets the counter whatever the direction */
    constexpr std::uint32_t TIM3_ECR_IDIR_B_0x0 = 0;
        /** @brief Index resets the counter when up-counting only */
    constexpr std::uint32_t TIM3_ECR_IDIR_B_0x1 = 1;
        /** @brief Index resets the counter when down-counting only */
    constexpr std::uint32_t TIM3_ECR_IDIR_B_0x2 = 2;

    /** @brief Index blanking */
    using TIM3_ECR_IBLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index always active (value: 0)
     *          - B_0x1: Index disabled hen tim_ti3 input is active, as per CC3P bitfield (value: 1)
     *          - B_0x2: Index disabled when tim_ti4 input is active, as per CC4P bitfield (value: 2)
     */
        /** @brief Index always active */
    constexpr std::uint32_t TIM3_ECR_IBLK_B_0x0 = 0;
        /** @brief Index disabled hen tim_ti3 input is active, as per CC3P bitfield */
    constexpr std::uint32_t TIM3_ECR_IBLK_B_0x1 = 1;
        /** @brief Index disabled when tim_ti4 input is active, as per CC4P bitfield */
    constexpr std::uint32_t TIM3_ECR_IBLK_B_0x2 = 2;

    /** @brief First index */
    using TIM3_ECR_FIDX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index is always active (value: 0)
     *          - B_0x1: the first Index only resets the counter (value: 1)
     */
        /** @brief Index is always active */
    constexpr std::uint32_t TIM3_ECR_FIDX_B_0x0 = 0;
        /** @brief the first Index only resets the counter */
    constexpr std::uint32_t TIM3_ECR_FIDX_B_0x1 = 1;

    /** @brief Index positioning */
    using TIM3_ECR_IPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index resets the counter when AB = 00 (value: 0)
     *          - B_0x1: Index resets the counter when AB = 01 (value: 1)
     *          - B_0x2: Index resets the counter when AB = 10 (value: 2)
     *          - B_0x3: Index resets the counter when AB = 11 (value: 3)
     */
        /** @brief Index resets the counter when AB = 00 */
    constexpr std::uint32_t TIM3_ECR_IPOS_B_0x0 = 0;
        /** @brief Index resets the counter when AB = 01 */
    constexpr std::uint32_t TIM3_ECR_IPOS_B_0x1 = 1;
        /** @brief Index resets the counter when AB = 10 */
    constexpr std::uint32_t TIM3_ECR_IPOS_B_0x2 = 2;
        /** @brief Index resets the counter when AB = 11 */
    constexpr std::uint32_t TIM3_ECR_IPOS_B_0x3 = 3;

    /** @brief Pulse width */
    using TIM3_ECR_PW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pulse width prescaler */
    using TIM3_ECR_PWPRSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 timer input selection register */
    using TIM3_TISEL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Selects tim_ti1[15:0] input */
    using TIM3_TISEL_TI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ti1_in0: TIMx_CH1 (value: 0)
     *          - B_0x1: tim_ti1_in1 (value: 1)
     *          - B_0xF: tim_ti1_in15 (value: 15)
     */
        /** @brief tim_ti1_in0: TIMx_CH1 */
    constexpr std::uint32_t TIM3_TISEL_TI1SEL_B_0x0 = 0;
        /** @brief tim_ti1_in1 */
    constexpr std::uint32_t TIM3_TISEL_TI1SEL_B_0x1 = 1;
        /** @brief tim_ti1_in15 */
    constexpr std::uint32_t TIM3_TISEL_TI1SEL_B_0xF = 15;

    /** @brief Selects tim_ti2[15:0] input */
    using TIM3_TISEL_TI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ti2_in0: TIMx_CH2 (value: 0)
     *          - B_0x1: tim_ti2_in1 (value: 1)
     *          - B_0xF: tim_ti2_in15 (value: 15)
     */
        /** @brief tim_ti2_in0: TIMx_CH2 */
    constexpr std::uint32_t TIM3_TISEL_TI2SEL_B_0x0 = 0;
        /** @brief tim_ti2_in1 */
    constexpr std::uint32_t TIM3_TISEL_TI2SEL_B_0x1 = 1;
        /** @brief tim_ti2_in15 */
    constexpr std::uint32_t TIM3_TISEL_TI2SEL_B_0xF = 15;

    /** @brief Selects tim_ti3[15:0] input */
    using TIM3_TISEL_TI3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ti3_in0: TIMx_CH3 (value: 0)
     *          - B_0x1: tim_ti3_in1 (value: 1)
     *          - B_0xF: tim_ti3_in15 (value: 15)
     */
        /** @brief tim_ti3_in0: TIMx_CH3 */
    constexpr std::uint32_t TIM3_TISEL_TI3SEL_B_0x0 = 0;
        /** @brief tim_ti3_in1 */
    constexpr std::uint32_t TIM3_TISEL_TI3SEL_B_0x1 = 1;
        /** @brief tim_ti3_in15 */
    constexpr std::uint32_t TIM3_TISEL_TI3SEL_B_0xF = 15;

    /** @brief Selects tim_ti4[15:0] input */
    using TIM3_TISEL_TI4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ti4_in0: TIMx_CH4 (value: 0)
     *          - B_0x1: tim_ti4_in1 (value: 1)
     *          - B_0xF: tim_ti4_in15 (value: 15)
     */
        /** @brief tim_ti4_in0: TIMx_CH4 */
    constexpr std::uint32_t TIM3_TISEL_TI4SEL_B_0x0 = 0;
        /** @brief tim_ti4_in1 */
    constexpr std::uint32_t TIM3_TISEL_TI4SEL_B_0x1 = 1;
        /** @brief tim_ti4_in15 */
    constexpr std::uint32_t TIM3_TISEL_TI4SEL_B_0xF = 15;

    /** @brief TIM3 alternate function register 1 */
    using TIM3_AF1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief etr_in source selection */
    using TIM3_AF1_ETRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_etr0: TIMx_ETR input (value: 0)
     *          - B_0x1: tim_etr1 (value: 1)
     *          - B_0xF: tim_etr15 (value: 15)
     */
        /** @brief tim_etr0: TIMx_ETR input */
    constexpr std::uint32_t TIM3_AF1_ETRSEL_B_0x0 = 0;
        /** @brief tim_etr1 */
    constexpr std::uint32_t TIM3_AF1_ETRSEL_B_0x1 = 1;
        /** @brief tim_etr15 */
    constexpr std::uint32_t TIM3_AF1_ETRSEL_B_0xF = 15;

    /** @brief TIM3 alternate function register 2 */
    using TIM3_AF2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ocref_clr source selection */
    using TIM3_AF2_OCRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ocref_clr0 (value: 0)
     *          - B_0x1: tim_ocref_clr1 (value: 1)
     *          - B_0x7: tim_ocref_clr7 (value: 7)
     */
        /** @brief tim_ocref_clr0 */
    constexpr std::uint32_t TIM3_AF2_OCRSEL_B_0x0 = 0;
        /** @brief tim_ocref_clr1 */
    constexpr std::uint32_t TIM3_AF2_OCRSEL_B_0x1 = 1;
        /** @brief tim_ocref_clr7 */
    constexpr std::uint32_t TIM3_AF2_OCRSEL_B_0x7 = 7;

    /** @brief TIM3 DMA control register */
    using TIM3_DCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA base address */
    using TIM3_DCR_DBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_CR1, (value: 0)
     *          - B_0x1: TIMx_CR2, (value: 1)
     *          - B_0x2: TIMx_SMCR, (value: 2)
     */
        /** @brief TIMx_CR1, */
    constexpr std::uint32_t TIM3_DCR_DBA_B_0x0 = 0;
        /** @brief TIMx_CR2, */
    constexpr std::uint32_t TIM3_DCR_DBA_B_0x1 = 1;
        /** @brief TIMx_SMCR, */
    constexpr std::uint32_t TIM3_DCR_DBA_B_0x2 = 2;

    /** @brief DMA burst length */
    using TIM3_DCR_DBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 transfer (value: 0)
     *          - B_0x1: 2 transfers (value: 1)
     *          - B_0x2: 3 transfers (value: 2)
     *          - B_0x1A: 26 transfers (value: 26)
     */
        /** @brief 1 transfer */
    constexpr std::uint32_t TIM3_DCR_DBL_B_0x0 = 0;
        /** @brief 2 transfers */
    constexpr std::uint32_t TIM3_DCR_DBL_B_0x1 = 1;
        /** @brief 3 transfers */
    constexpr std::uint32_t TIM3_DCR_DBL_B_0x2 = 2;
        /** @brief 26 transfers */
    constexpr std::uint32_t TIM3_DCR_DBL_B_0x1A = 26;

    /** @brief DMA burst source selection */
    using TIM3_DCR_DBSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Update (value: 1)
     *          - B_0x2: CC1 (value: 2)
     *          - B_0x3: CC2 (value: 3)
     *          - B_0x4: CC3 (value: 4)
     *          - B_0x5: CC4 (value: 5)
     *          - B_0x6: COM (value: 6)
     *          - B_0x7: Trigger (value: 7)
     */
        /** @brief Update */
    constexpr std::uint32_t TIM3_DCR_DBSS_B_0x1 = 1;
        /** @brief CC1 */
    constexpr std::uint32_t TIM3_DCR_DBSS_B_0x2 = 2;
        /** @brief CC2 */
    constexpr std::uint32_t TIM3_DCR_DBSS_B_0x3 = 3;
        /** @brief CC3 */
    constexpr std::uint32_t TIM3_DCR_DBSS_B_0x4 = 4;
        /** @brief CC4 */
    constexpr std::uint32_t TIM3_DCR_DBSS_B_0x5 = 5;
        /** @brief COM */
    constexpr std::uint32_t TIM3_DCR_DBSS_B_0x6 = 6;
        /** @brief Trigger */
    constexpr std::uint32_t TIM3_DCR_DBSS_B_0x7 = 7;

    /** @brief TIM3 DMA address for full transfer */
    using TIM3_DMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA register for burst accesses */
    using TIM3_DMAR_DMAB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
