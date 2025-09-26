/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_TIM12_HPP
#define EMBEDDED_PP_STM32U3B5_TIM12_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief TIM12 address block description */
namespace STM32U3B5::TIM12 {

    /** @brief TIM12 control register 1 */
    using TIM12_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter enable */
    using TIM12_CR1_CEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: Counter enabled (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint16_t TIM12_CR1_CEN_B_0x0 = 0;
        /** @brief Counter enabled */
    constexpr std::uint16_t TIM12_CR1_CEN_B_0x1 = 1;

    /** @brief Update disable */
    using TIM12_CR1_UDIS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UEV enabled. (value: 0)
     *          - B_0x1: UEV disabled. (value: 1)
     */
        /** @brief UEV enabled. */
    constexpr std::uint16_t TIM12_CR1_UDIS_B_0x0 = 0;
        /** @brief UEV disabled. */
    constexpr std::uint16_t TIM12_CR1_UDIS_B_0x1 = 1;

    /** @brief Update request source */
    using TIM12_CR1_URS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any of the following events generates an update interrupt if enabled. (value: 0)
     *          - B_0x1: Only counter overflow generates an update interrupt if enabled. (value: 1)
     */
        /** @brief Any of the following events generates an update interrupt if enabled. */
    constexpr std::uint16_t TIM12_CR1_URS_B_0x0 = 0;
        /** @brief Only counter overflow generates an update interrupt if enabled. */
    constexpr std::uint16_t TIM12_CR1_URS_B_0x1 = 1;

    /** @brief One-pulse mode */
    using TIM12_CR1_OPM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter is not stopped on the update event (value: 0)
     *          - B_0x1: Counter stops counting on the next update event (clearing the CEN bit). (value: 1)
     */
        /** @brief Counter is not stopped on the update event */
    constexpr std::uint16_t TIM12_CR1_OPM_B_0x0 = 0;
        /** @brief Counter stops counting on the next update event (clearing the CEN bit). */
    constexpr std::uint16_t TIM12_CR1_OPM_B_0x1 = 1;

    /** @brief Auto-reload preload enable */
    using TIM12_CR1_ARPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_ARR register is not buffered. (value: 0)
     *          - B_0x1: TIMx_ARR register is buffered. (value: 1)
     */
        /** @brief TIMx_ARR register is not buffered. */
    constexpr std::uint16_t TIM12_CR1_ARPE_B_0x0 = 0;
        /** @brief TIMx_ARR register is buffered. */
    constexpr std::uint16_t TIM12_CR1_ARPE_B_0x1 = 1;

    /** @brief Clock division */
    using TIM12_CR1_CKD = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tless thansub>DTSless than/sub> = tless thansub>tim_ker_ckless than/sub> (value: 0)
     *          - B_0x1: tless thansub>DTSless than/sub> = 2 x tless thansub>tim_ker_ckless than/sub> (value: 1)
     *          - B_0x2: tless thansub>DTSless than/sub> = 4 x tless thansub>tim_ker_ckless than/sub> (value: 2)
     */
        /** @brief tless thansub>DTSless than/sub> = tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM12_CR1_CKD_B_0x0 = 0;
        /** @brief tless thansub>DTSless than/sub> = 2 x tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM12_CR1_CKD_B_0x1 = 1;
        /** @brief tless thansub>DTSless than/sub> = 4 x tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM12_CR1_CKD_B_0x2 = 2;

    /** @brief UIF status bit remapping */
    using TIM12_CR1_UIFREMAP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No remapping. (value: 0)
     *          - B_0x1: Remapping enabled. (value: 1)
     */
        /** @brief No remapping. */
    constexpr std::uint16_t TIM12_CR1_UIFREMAP_B_0x0 = 0;
        /** @brief Remapping enabled. */
    constexpr std::uint16_t TIM12_CR1_UIFREMAP_B_0x1 = 1;

    /** @brief Dithering enable */
    using TIM12_CR1_DITHEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dithering disabled (value: 0)
     *          - B_0x1: Dithering enabled (value: 1)
     */
        /** @brief Dithering disabled */
    constexpr std::uint16_t TIM12_CR1_DITHEN_B_0x0 = 0;
        /** @brief Dithering enabled */
    constexpr std::uint16_t TIM12_CR1_DITHEN_B_0x1 = 1;

    /** @brief TIM12 control register 2 */
    using TIM12_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master mode selection */
    using TIM12_CR2_MMS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset - the UG bit from the TIMx_EGR register is used as trigger output (tim_trgo). (value: 0)
     *          - B_0x1: Enable - the Counter Enable signal CNT_EN is used as trigger output (tim_trgo). (value: 1)
     *          - B_0x2: Update - The update event is selected as trigger output (tim_trgo). (value: 2)
     *          - B_0x3: Compare Pulse - The trigger output send a positive pulse when the CC1IF flag is to be set (even if it was already high), as soon as a capture or a compare match occurred (tim_trgo). (value: 3)
     *          - B_0x4: Compare - tim_oc1refc signal is used as trigger output (tim_trgo). (value: 4)
     *          - B_0x5: Compare - tim_oc2refc signal is used as trigger output (tim_trgo). (value: 5)
     */
        /** @brief Reset - the UG bit from the TIMx_EGR register is used as trigger output (tim_trgo). */
    constexpr std::uint16_t TIM12_CR2_MMS_B_0x0 = 0;
        /** @brief Enable - the Counter Enable signal CNT_EN is used as trigger output (tim_trgo). */
    constexpr std::uint16_t TIM12_CR2_MMS_B_0x1 = 1;
        /** @brief Update - The update event is selected as trigger output (tim_trgo). */
    constexpr std::uint16_t TIM12_CR2_MMS_B_0x2 = 2;
        /** @brief Compare Pulse - The trigger output send a positive pulse when the CC1IF flag is to be set (even if it was already high), as soon as a capture or a compare match occurred (tim_trgo). */
    constexpr std::uint16_t TIM12_CR2_MMS_B_0x3 = 3;
        /** @brief Compare - tim_oc1refc signal is used as trigger output (tim_trgo). */
    constexpr std::uint16_t TIM12_CR2_MMS_B_0x4 = 4;
        /** @brief Compare - tim_oc2refc signal is used as trigger output (tim_trgo). */
    constexpr std::uint16_t TIM12_CR2_MMS_B_0x5 = 5;

    /** @brief tim_ti1 selection */
    using TIM12_CR2_TI1S = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The tim_ti1_in[15:0] multiplexer output is connected to tim_ti1 input (value: 0)
     *          - B_0x1: The tim_ti1_in[15:0] and tim_ti2_in[15:0] multiplexers output are connected to the tim_ti1 input (XOR combination) (value: 1)
     */
        /** @brief The tim_ti1_in[15:0] multiplexer output is connected to tim_ti1 input */
    constexpr std::uint16_t TIM12_CR2_TI1S_B_0x0 = 0;
        /** @brief The tim_ti1_in[15:0] and tim_ti2_in[15:0] multiplexers output are connected to the tim_ti1 input (XOR combination) */
    constexpr std::uint16_t TIM12_CR2_TI1S_B_0x1 = 1;

    /** @brief TIM12 slave mode control register */
    using TIM12_SMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMS[2:0]: Slave mode selection */
    using TIM12_SMCR_SMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Slave mode disabled - if CEN = 1 then the prescaler is clocked directly by the internal clock. (value: 0)
     *          - B_0x4: Reset mode - Rising edge of the selected trigger input (tim_trgi) reinitializes the counter and generates an update of the registers. (value: 4)
     *          - B_0x5: Gated mode - The counter clock is enabled when the trigger input (tim_trgi) is high. (value: 5)
     *          - B_0x6: Trigger mode - The counter starts at a rising edge of the trigger tim_trgi (but it is not reset). (value: 6)
     *          - B_0x7: External clock mode 1 - Rising edges of the selected trigger (tim_trgi) clock the counter. (value: 7)
     */
        /** @brief Slave mode disabled - if CEN = 1 then the prescaler is clocked directly by the internal clock. */
    constexpr std::uint32_t TIM12_SMCR_SMS_B_0x0 = 0;
        /** @brief Reset mode - Rising edge of the selected trigger input (tim_trgi) reinitializes the counter and generates an update of the registers. */
    constexpr std::uint32_t TIM12_SMCR_SMS_B_0x4 = 4;
        /** @brief Gated mode - The counter clock is enabled when the trigger input (tim_trgi) is high. */
    constexpr std::uint32_t TIM12_SMCR_SMS_B_0x5 = 5;
        /** @brief Trigger mode - The counter starts at a rising edge of the trigger tim_trgi (but it is not reset). */
    constexpr std::uint32_t TIM12_SMCR_SMS_B_0x6 = 6;
        /** @brief External clock mode 1 - Rising edges of the selected trigger (tim_trgi) clock the counter. */
    constexpr std::uint32_t TIM12_SMCR_SMS_B_0x7 = 7;

    /** @brief TS[2:0]: Trigger selection */
    using TIM12_SMCR_TS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Trigger 0 (tim_itr0) (value: 0)
     *          - B_0x1: Internal Trigger 1 (tim_itr1) (value: 1)
     *          - B_0x2: Internal Trigger 2 (tim_itr2) (value: 2)
     *          - B_0x3: Internal Trigger 3 (tim_itr3) (value: 3)
     *          - B_0x4: tim_ti1 Edge Detector (tim_ti1f_ed) (value: 4)
     *          - B_0x5: Filtered Timer Input 1 (tim_ti1fp1) (value: 5)
     *          - B_0x6: Filtered Timer Input 2 (tim_ti2fp2) (value: 6)
     */
        /** @brief Internal Trigger 0 (tim_itr0) */
    constexpr std::uint32_t TIM12_SMCR_TS_B_0x0 = 0;
        /** @brief Internal Trigger 1 (tim_itr1) */
    constexpr std::uint32_t TIM12_SMCR_TS_B_0x1 = 1;
        /** @brief Internal Trigger 2 (tim_itr2) */
    constexpr std::uint32_t TIM12_SMCR_TS_B_0x2 = 2;
        /** @brief Internal Trigger 3 (tim_itr3) */
    constexpr std::uint32_t TIM12_SMCR_TS_B_0x3 = 3;
        /** @brief tim_ti1 Edge Detector (tim_ti1f_ed) */
    constexpr std::uint32_t TIM12_SMCR_TS_B_0x4 = 4;
        /** @brief Filtered Timer Input 1 (tim_ti1fp1) */
    constexpr std::uint32_t TIM12_SMCR_TS_B_0x5 = 5;
        /** @brief Filtered Timer Input 2 (tim_ti2fp2) */
    constexpr std::uint32_t TIM12_SMCR_TS_B_0x6 = 6;

    /** @brief Master/Slave mode */
    using TIM12_SMCR_MSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: The effect of an event on the trigger input (tim_trgi) is delayed to allow a perfect synchronization between the current timer and its slaves (through tim_trgo). (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t TIM12_SMCR_MSM_B_0x0 = 0;
        /** @brief The effect of an event on the trigger input (tim_trgi) is delayed to allow a perfect synchronization between the current timer and its slaves (through tim_trgo). */
    constexpr std::uint32_t TIM12_SMCR_MSM_B_0x1 = 1;

    /** @brief SMS[3] */
    using TIM12_SMCR_SMS_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS[4:3] */
    using TIM12_SMCR_TS_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 interrupt enable register */
    using TIM12_DIER = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt enable */
    using TIM12_DIER_UIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update interrupt disabled. (value: 0)
     *          - B_0x1: Update interrupt enabled. (value: 1)
     */
        /** @brief Update interrupt disabled. */
    constexpr std::uint16_t TIM12_DIER_UIE_B_0x0 = 0;
        /** @brief Update interrupt enabled. */
    constexpr std::uint16_t TIM12_DIER_UIE_B_0x1 = 1;

    /** @brief Capture/Compare 1 interrupt enable */
    using TIM12_DIER_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 interrupt disabled. (value: 0)
     *          - B_0x1: CC1 interrupt enabled. (value: 1)
     */
        /** @brief CC1 interrupt disabled. */
    constexpr std::uint16_t TIM12_DIER_CC1IE_B_0x0 = 0;
        /** @brief CC1 interrupt enabled. */
    constexpr std::uint16_t TIM12_DIER_CC1IE_B_0x1 = 1;

    /** @brief Capture/Compare 2 interrupt enable */
    using TIM12_DIER_CC2IE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 interrupt disabled. (value: 0)
     *          - B_0x1: CC2 interrupt enabled. (value: 1)
     */
        /** @brief CC2 interrupt disabled. */
    constexpr std::uint16_t TIM12_DIER_CC2IE_B_0x0 = 0;
        /** @brief CC2 interrupt enabled. */
    constexpr std::uint16_t TIM12_DIER_CC2IE_B_0x1 = 1;

    /** @brief Trigger interrupt enable */
    using TIM12_DIER_TIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger interrupt disabled. (value: 0)
     *          - B_0x1: Trigger interrupt enabled. (value: 1)
     */
        /** @brief Trigger interrupt disabled. */
    constexpr std::uint16_t TIM12_DIER_TIE_B_0x0 = 0;
        /** @brief Trigger interrupt enabled. */
    constexpr std::uint16_t TIM12_DIER_TIE_B_0x1 = 1;

    /** @brief TIM12 status register */
    using TIM12_SR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt flag */
    using TIM12_SR_UIF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No update occurred. (value: 0)
     *          - B_0x1: Update interrupt pending. (value: 1)
     */
        /** @brief No update occurred. */
    constexpr std::uint16_t TIM12_SR_UIF_B_0x0 = 0;
        /** @brief Update interrupt pending. */
    constexpr std::uint16_t TIM12_SR_UIF_B_0x1 = 1;

    /** @brief Capture/compare 1 interrupt flag */
    using TIM12_SR_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No compare match / No input capture occurred (value: 0)
     *          - B_0x1: A compare match or an input capture occurred. (value: 1)
     */
        /** @brief No compare match / No input capture occurred */
    constexpr std::uint16_t TIM12_SR_CC1IF_B_0x0 = 0;
        /** @brief A compare match or an input capture occurred. */
    constexpr std::uint16_t TIM12_SR_CC1IF_B_0x1 = 1;

    /** @brief Capture/Compare 2 interrupt flag */
    using TIM12_SR_CC2IF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger interrupt flag */
    using TIM12_SR_TIF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger event occurred. (value: 0)
     *          - B_0x1: Trigger interrupt pending. (value: 1)
     */
        /** @brief No trigger event occurred. */
    constexpr std::uint16_t TIM12_SR_TIF_B_0x0 = 0;
        /** @brief Trigger interrupt pending. */
    constexpr std::uint16_t TIM12_SR_TIF_B_0x1 = 1;

    /** @brief Capture/Compare 1 overcapture flag */
    using TIM12_SR_CC1OF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overcapture has been detected. (value: 0)
     *          - B_0x1: The counter value has been captured in TIMx_CCR1 register while CC1IF flag was already set (value: 1)
     */
        /** @brief No overcapture has been detected. */
    constexpr std::uint16_t TIM12_SR_CC1OF_B_0x0 = 0;
        /** @brief The counter value has been captured in TIMx_CCR1 register while CC1IF flag was already set */
    constexpr std::uint16_t TIM12_SR_CC1OF_B_0x1 = 1;

    /** @brief Capture/compare 2 overcapture flag */
    using TIM12_SR_CC2OF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 event generation register */
    using TIM12_EGR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update generation */
    using TIM12_EGR_UG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Re-initializes the counter and generates an update of the registers. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM12_EGR_UG_B_0x0 = 0;
        /** @brief Re-initializes the counter and generates an update of the registers. */
    constexpr std::uint16_t TIM12_EGR_UG_B_0x1 = 1;

    /** @brief Capture/compare 1 generation */
    using TIM12_EGR_CC1G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: A capture/compare event is generated on channel 1: (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM12_EGR_CC1G_B_0x0 = 0;
        /** @brief A capture/compare event is generated on channel 1: */
    constexpr std::uint16_t TIM12_EGR_CC1G_B_0x1 = 1;

    /** @brief Capture/compare 2 generation */
    using TIM12_EGR_CC2G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger generation */
    using TIM12_EGR_TG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: The TIF flag is set in the TIMx_SR register. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM12_EGR_TG_B_0x0 = 0;
        /** @brief The TIF flag is set in the TIMx_SR register. */
    constexpr std::uint16_t TIM12_EGR_TG_B_0x1 = 1;

    /** @brief TIM12 capture/compare mode register 1 */
    using TIM12_CCMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 selection */
    using TIM12_CCMR1_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured as output (value: 0)
     *          - B_0x1: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 (value: 1)
     *          - B_0x2: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2 (value: 2)
     *          - B_0x3: CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC1 channel is configured as output */
    constexpr std::uint32_t TIM12_CCMR1_CC1S_B_0x0 = 0;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM12_CCMR1_CC1S_B_0x1 = 1;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2 */
    constexpr std::uint32_t TIM12_CCMR1_CC1S_B_0x2 = 2;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. */
    constexpr std::uint32_t TIM12_CCMR1_CC1S_B_0x3 = 3;

    /** @brief Input capture 1 prescaler */
    using TIM12_CCMR1_IC1PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no prescaler, capture is done each time an edge is detected on the capture input (value: 0)
     *          - B_0x1: capture is done once every 2 events (value: 1)
     *          - B_0x2: capture is done once every 4 events (value: 2)
     *          - B_0x3: capture is done once every 8 events (value: 3)
     */
        /** @brief no prescaler, capture is done each time an edge is detected on the capture input */
    constexpr std::uint32_t TIM12_CCMR1_IC1PSC_B_0x0 = 0;
        /** @brief capture is done once every 2 events */
    constexpr std::uint32_t TIM12_CCMR1_IC1PSC_B_0x1 = 1;
        /** @brief capture is done once every 4 events */
    constexpr std::uint32_t TIM12_CCMR1_IC1PSC_B_0x2 = 2;
        /** @brief capture is done once every 8 events */
    constexpr std::uint32_t TIM12_CCMR1_IC1PSC_B_0x3 = 3;

    /** @brief Input capture 1 filter */
    using TIM12_CCMR1_IC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No filter, sampling is done at fless thansub>DTSless than/sub> (value: 0)
     *          - B_0x1: fless thansub>SAMPLINGless than/sub> = fless thansub>tim_ker_ckless than/sub>, N = 2 (value: 1)
     *          - B_0x2: fless thansub>SAMPLINGless than/sub> = fless thansub>tim_ker_ckless than/sub>, N = 4 (value: 2)
     *          - B_0x3: fless thansub>SAMPLINGless than/sub> = fless thansub>tim_ker_ckless than/sub>, N = 8 (value: 3)
     *          - B_0x4: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/2, N = 6 (value: 4)
     *          - B_0x5: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/2, N = 8 (value: 5)
     *          - B_0x6: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/4, N = 6 (value: 6)
     *          - B_0x7: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/4, N = 8 (value: 7)
     *          - B_0x8: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/8, N = 6 (value: 8)
     *          - B_0x9: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/8, N = 8 (value: 9)
     *          - B_0xA: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/16, N = 5 (value: 10)
     *          - B_0xB: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/16, N = 6 (value: 11)
     *          - B_0xC: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/16, N = 8 (value: 12)
     *          - B_0xD: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/32, N = 5 (value: 13)
     *          - B_0xE: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/32, N = 6 (value: 14)
     *          - B_0xF: fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/32, N = 8 (value: 15)
     */
        /** @brief No filter, sampling is done at fless thansub>DTSless than/sub> */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0x0 = 0;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>tim_ker_ckless than/sub>, N = 2 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0x1 = 1;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>tim_ker_ckless than/sub>, N = 4 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0x2 = 2;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>tim_ker_ckless than/sub>, N = 8 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0x3 = 3;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/2, N = 6 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0x4 = 4;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/2, N = 8 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0x5 = 5;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/4, N = 6 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0x6 = 6;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/4, N = 8 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0x7 = 7;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/8, N = 6 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0x8 = 8;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/8, N = 8 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0x9 = 9;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/16, N = 5 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0xA = 10;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/16, N = 6 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0xB = 11;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/16, N = 8 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0xC = 12;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/32, N = 5 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0xD = 13;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/32, N = 6 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0xE = 14;
        /** @brief fless thansub>SAMPLINGless than/sub> = fless thansub>DTSless than/sub>/32, N = 8 */
    constexpr std::uint32_t TIM12_CCMR1_IC1F_B_0xF = 15;

    /** @brief Capture/compare 2 selection */
    using TIM12_CCMR1_CC2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 channel is configured as output (value: 0)
     *          - B_0x1: CC2 channel is configured as input, IC2 is mapped on tim_ti2 (value: 1)
     *          - B_0x2: CC2 channel is configured as input, IC2 is mapped on tim_ti1 (value: 2)
     *          - B_0x3: CC2 channel is configured as input, IC2 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC2 channel is configured as output */
    constexpr std::uint32_t TIM12_CCMR1_CC2S_B_0x0 = 0;
        /** @brief CC2 channel is configured as input, IC2 is mapped on tim_ti2 */
    constexpr std::uint32_t TIM12_CCMR1_CC2S_B_0x1 = 1;
        /** @brief CC2 channel is configured as input, IC2 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM12_CCMR1_CC2S_B_0x2 = 2;
        /** @brief CC2 channel is configured as input, IC2 is mapped on tim_trc. */
    constexpr std::uint32_t TIM12_CCMR1_CC2S_B_0x3 = 3;

    /** @brief Input capture 2 prescaler */
    using TIM12_CCMR1_IC2PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 2 filter */
    using TIM12_CCMR1_IC2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 capture/compare mode register 1 */
    using TIM12_CCMR1_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 selection */
    using TIM12_CCMR1_ALTERNATE1_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured as output (value: 0)
     *          - B_0x1: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 (value: 1)
     *          - B_0x2: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2 (value: 2)
     *          - B_0x3: CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC1 channel is configured as output */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_CC1S_B_0x0 = 0;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_CC1S_B_0x1 = 1;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2 */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_CC1S_B_0x2 = 2;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_CC1S_B_0x3 = 3;

    /** @brief Output compare 1 fast enable */
    using TIM12_CCMR1_ALTERNATE1_OC1FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 behaves normally depending on the counter and CCR1 values even when the trigger is ON. (value: 0)
     *          - B_0x1: An active edge on the trigger input acts like a compare match on the CC1 output. (value: 1)
     */
        /** @brief CC1 behaves normally depending on the counter and CCR1 values even when the trigger is ON. */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1FE_B_0x0 = 0;
        /** @brief An active edge on the trigger input acts like a compare match on the CC1 output. */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1FE_B_0x1 = 1;

    /** @brief Output compare 1 preload enable */
    using TIM12_CCMR1_ALTERNATE1_OC1PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Preload register on TIMx_CCR1 disabled. (value: 0)
     *          - B_0x1: Preload register on TIMx_CCR1 enabled. (value: 1)
     */
        /** @brief Preload register on TIMx_CCR1 disabled. */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1PE_B_0x0 = 0;
        /** @brief Preload register on TIMx_CCR1 enabled. */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1PE_B_0x1 = 1;

    /** @brief OC1M[2:0]: Output compare 1 mode (refer to bit 16 for OC1M[3]) */
    using TIM12_CCMR1_ALTERNATE1_OC1M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Frozen - The comparison between the output compare register TIMx_CCR1 and the counter TIMx_CNT has no effect on the outputs. (value: 0)
     *          - B_0x1: Set channel 1 to active level on match. (value: 1)
     *          - B_0x2: Set channel 1 to inactive level on match. (value: 2)
     *          - B_0x3: Toggle - tim_oc1ref toggles when TIMx_CNT = TIMx_CCR1 (value: 3)
     *          - B_0x4: Force inactive level - tim_oc1ref is forced low (value: 4)
     *          - B_0x5: Force active level - tim_oc1ref is forced high (value: 5)
     *          - B_0x6: PWM mode 1 - channel 1 is active as long as TIMx_CNTless thanTIMx_CCR1 else it is inactive (value: 6)
     *          - B_0x7: PWM mode 2 - channel 1 is inactive as long as TIMx_CNTless thanTIMx_CCR1 else it is active (value: 7)
     */
        /** @brief Frozen - The comparison between the output compare register TIMx_CCR1 and the counter TIMx_CNT has no effect on the outputs. */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1M_B_0x0 = 0;
        /** @brief Set channel 1 to active level on match. */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1M_B_0x1 = 1;
        /** @brief Set channel 1 to inactive level on match. */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1M_B_0x2 = 2;
        /** @brief Toggle - tim_oc1ref toggles when TIMx_CNT = TIMx_CCR1 */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1M_B_0x3 = 3;
        /** @brief Force inactive level - tim_oc1ref is forced low */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1M_B_0x4 = 4;
        /** @brief Force active level - tim_oc1ref is forced high */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1M_B_0x5 = 5;
        /** @brief PWM mode 1 - channel 1 is active as long as TIMx_CNTless thanTIMx_CCR1 else it is inactive */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1M_B_0x6 = 6;
        /** @brief PWM mode 2 - channel 1 is inactive as long as TIMx_CNTless thanTIMx_CCR1 else it is active */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_OC1M_B_0x7 = 7;

    /** @brief Capture/Compare 2 selection */
    using TIM12_CCMR1_ALTERNATE1_CC2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 channel is configured as output (value: 0)
     *          - B_0x1: CC2 channel is configured as input, IC2 is mapped on tim_ti2 (value: 1)
     *          - B_0x2: CC2 channel is configured as input, IC2 is mapped on tim_ti1 (value: 2)
     *          - B_0x3: CC2 channel is configured as input, IC2 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC2 channel is configured as output */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_CC2S_B_0x0 = 0;
        /** @brief CC2 channel is configured as input, IC2 is mapped on tim_ti2 */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_CC2S_B_0x1 = 1;
        /** @brief CC2 channel is configured as input, IC2 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_CC2S_B_0x2 = 2;
        /** @brief CC2 channel is configured as input, IC2 is mapped on tim_trc. */
    constexpr std::uint32_t TIM12_CCMR1_ALTERNATE1_CC2S_B_0x3 = 3;

    /** @brief Output compare 2 fast enable */
    using TIM12_CCMR1_ALTERNATE1_OC2FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 2 preload enable */
    using TIM12_CCMR1_ALTERNATE1_OC2PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC2M[2:0]: Output compare 2 mode */
    using TIM12_CCMR1_ALTERNATE1_OC2M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC1M[3] */
    using TIM12_CCMR1_ALTERNATE1_OC1M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC2M[3] */
    using TIM12_CCMR1_ALTERNATE1_OC2M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 capture/compare enable register */
    using TIM12_CCER = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 output enable. */
    using TIM12_CCER_CC1E = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture mode disabled / tim_oc1 is not active (value: 0)
     *          - B_0x1: Capture mode enabled / tim_oc1 signal is output on the corresponding output pin (value: 1)
     */
        /** @brief Capture mode disabled / tim_oc1 is not active */
    constexpr std::uint16_t TIM12_CCER_CC1E_B_0x0 = 0;
        /** @brief Capture mode enabled / tim_oc1 signal is output on the corresponding output pin */
    constexpr std::uint16_t TIM12_CCER_CC1E_B_0x1 = 1;

    /** @brief Capture/Compare 1 output Polarity. */
    using TIM12_CCER_CC1P = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_oc1 active high (output mode) / Edge sensitivity selection (input mode, see below) (value: 0)
     *          - B_0x1: tim_oc1 active low (output mode) / Edge sensitivity selection (input mode, see below) (value: 1)
     */
        /** @brief tim_oc1 active high (output mode) / Edge sensitivity selection (input mode, see below) */
    constexpr std::uint16_t TIM12_CCER_CC1P_B_0x0 = 0;
        /** @brief tim_oc1 active low (output mode) / Edge sensitivity selection (input mode, see below) */
    constexpr std::uint16_t TIM12_CCER_CC1P_B_0x1 = 1;

    /** @brief Capture/Compare 1 complementary output Polarity */
    using TIM12_CCER_CC1NP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 output enable */
    using TIM12_CCER_CC2E = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 output Polarity */
    using TIM12_CCER_CC2P = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 output Polarity */
    using TIM12_CCER_CC2NP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 counter */
    using TIM12_CNT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TIM12_CNT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UIF Copy */
    using TIM12_CNT_UIFCPY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 prescaler */
    using TIM12_PSC = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler value */
    using TIM12_PSC_PSC = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 autoreload register */
    using TIM12_ARR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto-reload value */
    using TIM12_ARR_ARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 capture/compare register 1 */
    using TIM12_CCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 value */
    using TIM12_CCR1_CCR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 capture/compare register 2 */
    using TIM12_CCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 value */
    using TIM12_CCR2_CCR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM12 timer input selection register */
    using TIM12_TISEL = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief selects tim_ti1_in[15:0] input */
    using TIM12_TISEL_TI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_CH1 input (tim_ti1_in0) (value: 0)
     *          - B_0x1: tim_ti1_in1 (value: 1)
     *          - B_0xF: tim_ti1_in15 (value: 15)
     */
        /** @brief TIMx_CH1 input (tim_ti1_in0) */
    constexpr std::uint16_t TIM12_TISEL_TI1SEL_B_0x0 = 0;
        /** @brief tim_ti1_in1 */
    constexpr std::uint16_t TIM12_TISEL_TI1SEL_B_0x1 = 1;
        /** @brief tim_ti1_in15 */
    constexpr std::uint16_t TIM12_TISEL_TI1SEL_B_0xF = 15;

    /** @brief selects tim_ti2_in[15:0] input */
    using TIM12_TISEL_TI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_CH2 input (tim_ti2_in0) (value: 0)
     *          - B_0x1: tim_ti2_in1 (value: 1)
     *          - B_0x4: tim_ti2_in15 (value: 4)
     */
        /** @brief TIMx_CH2 input (tim_ti2_in0) */
    constexpr std::uint16_t TIM12_TISEL_TI2SEL_B_0x0 = 0;
        /** @brief tim_ti2_in1 */
    constexpr std::uint16_t TIM12_TISEL_TI2SEL_B_0x1 = 1;
        /** @brief tim_ti2_in15 */
    constexpr std::uint16_t TIM12_TISEL_TI2SEL_B_0x4 = 4;

}

#endif
