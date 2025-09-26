/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32C091_TIM15_HPP
#define EMBEDDED_PP_STM32C091_TIM15_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief TIM15 address block description */
namespace STM32C091::TIM15 {

    /** @brief TIM15 control register 1 */
    using TIM15_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter enable */
    using TIM15_CR1_CEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: Counter enabled (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint16_t TIM15_CR1_CEN_B_0x0 = 0;
        /** @brief Counter enabled */
    constexpr std::uint16_t TIM15_CR1_CEN_B_0x1 = 1;

    /** @brief Update disable */
    using TIM15_CR1_UDIS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UEV enabled. (value: 0)
     *          - B_0x1: UEV disabled. (value: 1)
     */
        /** @brief UEV enabled. */
    constexpr std::uint16_t TIM15_CR1_UDIS_B_0x0 = 0;
        /** @brief UEV disabled. */
    constexpr std::uint16_t TIM15_CR1_UDIS_B_0x1 = 1;

    /** @brief Update request source */
    using TIM15_CR1_URS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any of the following events generate an update interrupt if enabled. (value: 0)
     *          - B_0x1: Only counter overflow/underflow generates an update interrupt if enabled (value: 1)
     */
        /** @brief Any of the following events generate an update interrupt if enabled. */
    constexpr std::uint16_t TIM15_CR1_URS_B_0x0 = 0;
        /** @brief Only counter overflow/underflow generates an update interrupt if enabled */
    constexpr std::uint16_t TIM15_CR1_URS_B_0x1 = 1;

    /** @brief One-pulse mode */
    using TIM15_CR1_OPM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter is not stopped at update event (value: 0)
     *          - B_0x1: Counter stops counting at the next update event (clearing the bit CEN) (value: 1)
     */
        /** @brief Counter is not stopped at update event */
    constexpr std::uint16_t TIM15_CR1_OPM_B_0x0 = 0;
        /** @brief Counter stops counting at the next update event (clearing the bit CEN) */
    constexpr std::uint16_t TIM15_CR1_OPM_B_0x1 = 1;

    /** @brief Auto-reload preload enable */
    using TIM15_CR1_ARPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_ARR register is not buffered (value: 0)
     *          - B_0x1: TIMx_ARR register is buffered (value: 1)
     */
        /** @brief TIMx_ARR register is not buffered */
    constexpr std::uint16_t TIM15_CR1_ARPE_B_0x0 = 0;
        /** @brief TIMx_ARR register is buffered */
    constexpr std::uint16_t TIM15_CR1_ARPE_B_0x1 = 1;

    /** @brief Clock division */
    using TIM15_CR1_CKD = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tless thansub>DTS less than/sub>= tless thansub>CK_INTless than/sub> (value: 0)
     *          - B_0x1: tless thansub>DTSless than/sub> = 2*tless thansub>CK_INTless than/sub> (value: 1)
     *          - B_0x2: tless thansub>DTSless than/sub> = 4*tless thansub>CK_INTless than/sub> (value: 2)
     */
        /** @brief tless thansub>DTS less than/sub>= tless thansub>CK_INTless than/sub> */
    constexpr std::uint16_t TIM15_CR1_CKD_B_0x0 = 0;
        /** @brief tless thansub>DTSless than/sub> = 2*tless thansub>CK_INTless than/sub> */
    constexpr std::uint16_t TIM15_CR1_CKD_B_0x1 = 1;
        /** @brief tless thansub>DTSless than/sub> = 4*tless thansub>CK_INTless than/sub> */
    constexpr std::uint16_t TIM15_CR1_CKD_B_0x2 = 2;

    /** @brief UIF status bit remapping */
    using TIM15_CR1_UIFREMAP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No remapping. (value: 0)
     *          - B_0x1: Remapping enabled. (value: 1)
     */
        /** @brief No remapping. */
    constexpr std::uint16_t TIM15_CR1_UIFREMAP_B_0x0 = 0;
        /** @brief Remapping enabled. */
    constexpr std::uint16_t TIM15_CR1_UIFREMAP_B_0x1 = 1;

    /** @brief TIM15 control register 2 */
    using TIM15_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare preloaded control */
    using TIM15_CR2_CCPC = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCxE, CCxNE and OCxM bits are not preloaded (value: 0)
     *          - B_0x1: CCxE, CCxNE and OCxM bits are preloaded, after having been written, they are updated only when a commutation event (COM) occurs (COMG bit set or rising edge detected on TRGI, depending on the CCUS bit). (value: 1)
     */
        /** @brief CCxE, CCxNE and OCxM bits are not preloaded */
    constexpr std::uint16_t TIM15_CR2_CCPC_B_0x0 = 0;
        /** @brief CCxE, CCxNE and OCxM bits are preloaded, after having been written, they are updated only when a commutation event (COM) occurs (COMG bit set or rising edge detected on TRGI, depending on the CCUS bit). */
    constexpr std::uint16_t TIM15_CR2_CCPC_B_0x1 = 1;

    /** @brief Capture/compare control update selection */
    using TIM15_CR2_CCUS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit only. (value: 0)
     *          - B_0x1: When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit or when an rising edge occurs on TRGI. (value: 1)
     */
        /** @brief When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit only. */
    constexpr std::uint16_t TIM15_CR2_CCUS_B_0x0 = 0;
        /** @brief When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit or when an rising edge occurs on TRGI. */
    constexpr std::uint16_t TIM15_CR2_CCUS_B_0x1 = 1;

    /** @brief Capture/compare DMA selection */
    using TIM15_CR2_CCDS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCx DMA request sent when CCx event occurs (value: 0)
     *          - B_0x1: CCx DMA requests sent when update event occurs (value: 1)
     */
        /** @brief CCx DMA request sent when CCx event occurs */
    constexpr std::uint16_t TIM15_CR2_CCDS_B_0x0 = 0;
        /** @brief CCx DMA requests sent when update event occurs */
    constexpr std::uint16_t TIM15_CR2_CCDS_B_0x1 = 1;

    /** @brief Master mode selection */
    using TIM15_CR2_MMS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset - the UG bit from the TIMx_EGR register is used as trigger output (TRGO). (value: 0)
     *          - B_0x1: Enable - the Counter Enable signal CNT_EN is used as trigger output (TRGO). (value: 1)
     *          - B_0x2: Update - The update event is selected as trigger output (TRGO). (value: 2)
     *          - B_0x3: Compare Pulse - The trigger output send a positive pulse when the CC1IF flag is to be set (even if it was already high), as soon as a capture or a compare match occurred. (value: 3)
     *          - B_0x4: Compare - OC1REFC signal is used as trigger output (TRGO). (value: 4)
     *          - B_0x5: Compare - OC2REFC signal is used as trigger output (TRGO). (value: 5)
     */
        /** @brief Reset - the UG bit from the TIMx_EGR register is used as trigger output (TRGO). */
    constexpr std::uint16_t TIM15_CR2_MMS_B_0x0 = 0;
        /** @brief Enable - the Counter Enable signal CNT_EN is used as trigger output (TRGO). */
    constexpr std::uint16_t TIM15_CR2_MMS_B_0x1 = 1;
        /** @brief Update - The update event is selected as trigger output (TRGO). */
    constexpr std::uint16_t TIM15_CR2_MMS_B_0x2 = 2;
        /** @brief Compare Pulse - The trigger output send a positive pulse when the CC1IF flag is to be set (even if it was already high), as soon as a capture or a compare match occurred. */
    constexpr std::uint16_t TIM15_CR2_MMS_B_0x3 = 3;
        /** @brief Compare - OC1REFC signal is used as trigger output (TRGO). */
    constexpr std::uint16_t TIM15_CR2_MMS_B_0x4 = 4;
        /** @brief Compare - OC2REFC signal is used as trigger output (TRGO). */
    constexpr std::uint16_t TIM15_CR2_MMS_B_0x5 = 5;

    /** @brief TI1 selection */
    using TIM15_CR2_TI1S = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The TIMx_CH1 pin is connected to TI1 input (value: 0)
     *          - B_0x1: The TIMx_CH1, CH2 pins are connected to the TI1 input (XOR combination) (value: 1)
     */
        /** @brief The TIMx_CH1 pin is connected to TI1 input */
    constexpr std::uint16_t TIM15_CR2_TI1S_B_0x0 = 0;
        /** @brief The TIMx_CH1, CH2 pins are connected to the TI1 input (XOR combination) */
    constexpr std::uint16_t TIM15_CR2_TI1S_B_0x1 = 1;

    /** @brief Output Idle state 1 (OC1 output) */
    using TIM15_CR2_OIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OC1=0 (after a dead-time if OC1N is implemented) when MOE=0 (value: 0)
     *          - B_0x1: OC1=1 (after a dead-time if OC1N is implemented) when MOE=0 (value: 1)
     */
        /** @brief OC1=0 (after a dead-time if OC1N is implemented) when MOE=0 */
    constexpr std::uint16_t TIM15_CR2_OIS1_B_0x0 = 0;
        /** @brief OC1=1 (after a dead-time if OC1N is implemented) when MOE=0 */
    constexpr std::uint16_t TIM15_CR2_OIS1_B_0x1 = 1;

    /** @brief Output Idle state 1 (OC1N output) */
    using TIM15_CR2_OIS1N = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OC1N=0 after a dead-time when MOE=0 (value: 0)
     *          - B_0x1: OC1N=1 after a dead-time when MOE=0 (value: 1)
     */
        /** @brief OC1N=0 after a dead-time when MOE=0 */
    constexpr std::uint16_t TIM15_CR2_OIS1N_B_0x0 = 0;
        /** @brief OC1N=1 after a dead-time when MOE=0 */
    constexpr std::uint16_t TIM15_CR2_OIS1N_B_0x1 = 1;

    /** @brief Output idle state 2 (OC2 output) */
    using TIM15_CR2_OIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OC2=0 when MOE=0 (value: 0)
     *          - B_0x1: OC2=1 when MOE=0 (value: 1)
     */
        /** @brief OC2=0 when MOE=0 */
    constexpr std::uint16_t TIM15_CR2_OIS2_B_0x0 = 0;
        /** @brief OC2=1 when MOE=0 */
    constexpr std::uint16_t TIM15_CR2_OIS2_B_0x1 = 1;

    /** @brief TIM15 slave mode control register */
    using TIM15_SMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMS[2:0]: Slave mode selection */
    using TIM15_SMCR_SMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Slave mode disabled - if CEN = 1' then the prescaler is clocked directly by the internal clock. (value: 0)
     *          - B_0x4: Reset Mode - Rising edge of the selected trigger input (TRGI) reinitializes the counter and generates an update of the registers. (value: 4)
     *          - B_0x5: Gated Mode - The counter clock is enabled when the trigger input (TRGI) is high. (value: 5)
     *          - B_0x6: Trigger Mode - The counter starts at a rising edge of the trigger TRGI (but it is not reset). (value: 6)
     *          - B_0x7: External Clock Mode 1 - Rising edges of the selected trigger (TRGI) clock the counter. (value: 7)
     */
        /** @brief Slave mode disabled - if CEN = 1' then the prescaler is clocked directly by the internal clock. */
    constexpr std::uint32_t TIM15_SMCR_SMS_B_0x0 = 0;
        /** @brief Reset Mode - Rising edge of the selected trigger input (TRGI) reinitializes the counter and generates an update of the registers. */
    constexpr std::uint32_t TIM15_SMCR_SMS_B_0x4 = 4;
        /** @brief Gated Mode - The counter clock is enabled when the trigger input (TRGI) is high. */
    constexpr std::uint32_t TIM15_SMCR_SMS_B_0x5 = 5;
        /** @brief Trigger Mode - The counter starts at a rising edge of the trigger TRGI (but it is not reset). */
    constexpr std::uint32_t TIM15_SMCR_SMS_B_0x6 = 6;
        /** @brief External Clock Mode 1 - Rising edges of the selected trigger (TRGI) clock the counter. */
    constexpr std::uint32_t TIM15_SMCR_SMS_B_0x7 = 7;

    /** @brief TS[2:0]: Trigger selection */
    using TIM15_SMCR_TS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Trigger 0 (ITR0) (value: 0)
     *          - B_0x1: Internal Trigger 1 (ITR1) (value: 1)
     *          - B_0x2: Internal Trigger 2 (ITR2) (value: 2)
     *          - B_0x3: Internal Trigger 3 (ITR3) (value: 3)
     *          - B_0x4: TI1 Edge Detector (TI1F_ED) (value: 4)
     *          - B_0x5: Filtered Timer Input 1 (TI1FP1) (value: 5)
     *          - B_0x6: Filtered Timer Input 2 (TI2FP2) (value: 6)
     */
        /** @brief Internal Trigger 0 (ITR0) */
    constexpr std::uint32_t TIM15_SMCR_TS_B_0x0 = 0;
        /** @brief Internal Trigger 1 (ITR1) */
    constexpr std::uint32_t TIM15_SMCR_TS_B_0x1 = 1;
        /** @brief Internal Trigger 2 (ITR2) */
    constexpr std::uint32_t TIM15_SMCR_TS_B_0x2 = 2;
        /** @brief Internal Trigger 3 (ITR3) */
    constexpr std::uint32_t TIM15_SMCR_TS_B_0x3 = 3;
        /** @brief TI1 Edge Detector (TI1F_ED) */
    constexpr std::uint32_t TIM15_SMCR_TS_B_0x4 = 4;
        /** @brief Filtered Timer Input 1 (TI1FP1) */
    constexpr std::uint32_t TIM15_SMCR_TS_B_0x5 = 5;
        /** @brief Filtered Timer Input 2 (TI2FP2) */
    constexpr std::uint32_t TIM15_SMCR_TS_B_0x6 = 6;

    /** @brief Master/slave mode */
    using TIM15_SMCR_MSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: The effect of an event on the trigger input (TRGI) is delayed to allow a perfect synchronization between the current timer and its slaves (through TRGO). (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t TIM15_SMCR_MSM_B_0x0 = 0;
        /** @brief The effect of an event on the trigger input (TRGI) is delayed to allow a perfect synchronization between the current timer and its slaves (through TRGO). */
    constexpr std::uint32_t TIM15_SMCR_MSM_B_0x1 = 1;

    /** @brief SMS[3] */
    using TIM15_SMCR_SMS_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TS[4:3] */
    using TIM15_SMCR_TS_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 DMA/interrupt enable register */
    using TIM15_DIER = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt enable */
    using TIM15_DIER_UIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update interrupt disabled (value: 0)
     *          - B_0x1: Update interrupt enabled (value: 1)
     */
        /** @brief Update interrupt disabled */
    constexpr std::uint16_t TIM15_DIER_UIE_B_0x0 = 0;
        /** @brief Update interrupt enabled */
    constexpr std::uint16_t TIM15_DIER_UIE_B_0x1 = 1;

    /** @brief Capture/Compare 1 interrupt enable */
    using TIM15_DIER_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 interrupt disabled (value: 0)
     *          - B_0x1: CC1 interrupt enabled (value: 1)
     */
        /** @brief CC1 interrupt disabled */
    constexpr std::uint16_t TIM15_DIER_CC1IE_B_0x0 = 0;
        /** @brief CC1 interrupt enabled */
    constexpr std::uint16_t TIM15_DIER_CC1IE_B_0x1 = 1;

    /** @brief Capture/Compare 2 interrupt enable */
    using TIM15_DIER_CC2IE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 interrupt disabled (value: 0)
     *          - B_0x1: CC2 interrupt enabled (value: 1)
     */
        /** @brief CC2 interrupt disabled */
    constexpr std::uint16_t TIM15_DIER_CC2IE_B_0x0 = 0;
        /** @brief CC2 interrupt enabled */
    constexpr std::uint16_t TIM15_DIER_CC2IE_B_0x1 = 1;

    /** @brief COM interrupt enable */
    using TIM15_DIER_COMIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COM interrupt disabled (value: 0)
     *          - B_0x1: COM interrupt enabled (value: 1)
     */
        /** @brief COM interrupt disabled */
    constexpr std::uint16_t TIM15_DIER_COMIE_B_0x0 = 0;
        /** @brief COM interrupt enabled */
    constexpr std::uint16_t TIM15_DIER_COMIE_B_0x1 = 1;

    /** @brief Trigger interrupt enable */
    using TIM15_DIER_TIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger interrupt disabled (value: 0)
     *          - B_0x1: Trigger interrupt enabled (value: 1)
     */
        /** @brief Trigger interrupt disabled */
    constexpr std::uint16_t TIM15_DIER_TIE_B_0x0 = 0;
        /** @brief Trigger interrupt enabled */
    constexpr std::uint16_t TIM15_DIER_TIE_B_0x1 = 1;

    /** @brief Break interrupt enable */
    using TIM15_DIER_BIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break interrupt disabled (value: 0)
     *          - B_0x1: Break interrupt enabled (value: 1)
     */
        /** @brief Break interrupt disabled */
    constexpr std::uint16_t TIM15_DIER_BIE_B_0x0 = 0;
        /** @brief Break interrupt enabled */
    constexpr std::uint16_t TIM15_DIER_BIE_B_0x1 = 1;

    /** @brief Update DMA request enable */
    using TIM15_DIER_UDE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update DMA request disabled (value: 0)
     *          - B_0x1: Update DMA request enabled (value: 1)
     */
        /** @brief Update DMA request disabled */
    constexpr std::uint16_t TIM15_DIER_UDE_B_0x0 = 0;
        /** @brief Update DMA request enabled */
    constexpr std::uint16_t TIM15_DIER_UDE_B_0x1 = 1;

    /** @brief Capture/Compare 1 DMA request enable */
    using TIM15_DIER_CC1DE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 DMA request disabled (value: 0)
     *          - B_0x1: CC1 DMA request enabled (value: 1)
     */
        /** @brief CC1 DMA request disabled */
    constexpr std::uint16_t TIM15_DIER_CC1DE_B_0x0 = 0;
        /** @brief CC1 DMA request enabled */
    constexpr std::uint16_t TIM15_DIER_CC1DE_B_0x1 = 1;

    /** @brief COM DMA request enable */
    using TIM15_DIER_COMDE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COM DMA request disabled (value: 0)
     *          - B_0x1: COM DMA request enabled (value: 1)
     */
        /** @brief COM DMA request disabled */
    constexpr std::uint16_t TIM15_DIER_COMDE_B_0x0 = 0;
        /** @brief COM DMA request enabled */
    constexpr std::uint16_t TIM15_DIER_COMDE_B_0x1 = 1;

    /** @brief Trigger DMA request enable */
    using TIM15_DIER_TDE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger DMA request disabled (value: 0)
     *          - B_0x1: Trigger DMA request enabled (value: 1)
     */
        /** @brief Trigger DMA request disabled */
    constexpr std::uint16_t TIM15_DIER_TDE_B_0x0 = 0;
        /** @brief Trigger DMA request enabled */
    constexpr std::uint16_t TIM15_DIER_TDE_B_0x1 = 1;

    /** @brief TIM15 status register */
    using TIM15_SR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt flag */
    using TIM15_SR_UIF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No update occurred. (value: 0)
     *          - B_0x1: Update interrupt pending. (value: 1)
     */
        /** @brief No update occurred. */
    constexpr std::uint16_t TIM15_SR_UIF_B_0x0 = 0;
        /** @brief Update interrupt pending. */
    constexpr std::uint16_t TIM15_SR_UIF_B_0x1 = 1;

    /** @brief Capture/Compare 1 interrupt flag */
    using TIM15_SR_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No compare match / No input capture occurred (value: 0)
     *          - B_0x1: A compare match or an input capture occurred (value: 1)
     */
        /** @brief No compare match / No input capture occurred */
    constexpr std::uint16_t TIM15_SR_CC1IF_B_0x0 = 0;
        /** @brief A compare match or an input capture occurred */
    constexpr std::uint16_t TIM15_SR_CC1IF_B_0x1 = 1;

    /** @brief Capture/Compare 2 interrupt flag */
    using TIM15_SR_CC2IF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COM interrupt flag */
    using TIM15_SR_COMIF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No COM event occurred (value: 0)
     *          - B_0x1: COM interrupt pending (value: 1)
     */
        /** @brief No COM event occurred */
    constexpr std::uint16_t TIM15_SR_COMIF_B_0x0 = 0;
        /** @brief COM interrupt pending */
    constexpr std::uint16_t TIM15_SR_COMIF_B_0x1 = 1;

    /** @brief Trigger interrupt flag */
    using TIM15_SR_TIF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger event occurred (value: 0)
     *          - B_0x1: Trigger interrupt pending (value: 1)
     */
        /** @brief No trigger event occurred */
    constexpr std::uint16_t TIM15_SR_TIF_B_0x0 = 0;
        /** @brief Trigger interrupt pending */
    constexpr std::uint16_t TIM15_SR_TIF_B_0x1 = 1;

    /** @brief Break interrupt flag */
    using TIM15_SR_BIF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break event occurred (value: 0)
     *          - B_0x1: An active level has been detected on the break input (value: 1)
     */
        /** @brief No break event occurred */
    constexpr std::uint16_t TIM15_SR_BIF_B_0x0 = 0;
        /** @brief An active level has been detected on the break input */
    constexpr std::uint16_t TIM15_SR_BIF_B_0x1 = 1;

    /** @brief Capture/Compare 1 overcapture flag */
    using TIM15_SR_CC1OF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overcapture has been detected (value: 0)
     *          - B_0x1: The counter value has been captured in TIMx_CCR1 register while CC1IF flag was already set (value: 1)
     */
        /** @brief No overcapture has been detected */
    constexpr std::uint16_t TIM15_SR_CC1OF_B_0x0 = 0;
        /** @brief The counter value has been captured in TIMx_CCR1 register while CC1IF flag was already set */
    constexpr std::uint16_t TIM15_SR_CC1OF_B_0x1 = 1;

    /** @brief Capture/Compare 2 overcapture flag */
    using TIM15_SR_CC2OF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 event generation register */
    using TIM15_EGR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update generation */
    using TIM15_EGR_UG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Reinitialize the counter and generates an update of the registers. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM15_EGR_UG_B_0x0 = 0;
        /** @brief Reinitialize the counter and generates an update of the registers. */
    constexpr std::uint16_t TIM15_EGR_UG_B_0x1 = 1;

    /** @brief Capture/Compare 1 generation */
    using TIM15_EGR_CC1G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: A capture/compare event is generated on channel 1: (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM15_EGR_CC1G_B_0x0 = 0;
        /** @brief A capture/compare event is generated on channel 1: */
    constexpr std::uint16_t TIM15_EGR_CC1G_B_0x1 = 1;

    /** @brief Capture/Compare 2 generation */
    using TIM15_EGR_CC2G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare control update generation */
    using TIM15_EGR_COMG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: When the CCPC bit is set, it is possible to update the CCxE, CCxNE and OCxM bits (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM15_EGR_COMG_B_0x0 = 0;
        /** @brief When the CCPC bit is set, it is possible to update the CCxE, CCxNE and OCxM bits */
    constexpr std::uint16_t TIM15_EGR_COMG_B_0x1 = 1;

    /** @brief Trigger generation */
    using TIM15_EGR_TG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: The TIF flag is set in TIMx_SR register. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM15_EGR_TG_B_0x0 = 0;
        /** @brief The TIF flag is set in TIMx_SR register. */
    constexpr std::uint16_t TIM15_EGR_TG_B_0x1 = 1;

    /** @brief Break generation */
    using TIM15_EGR_BG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: A break event is generated. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM15_EGR_BG_B_0x0 = 0;
        /** @brief A break event is generated. */
    constexpr std::uint16_t TIM15_EGR_BG_B_0x1 = 1;

    /** @brief TIM15 capture/compare mode register 1 */
    using TIM15_CCMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 Selection */
    using TIM15_CCMR1_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured as output (value: 0)
     *          - B_0x1: CC1 channel is configured as input, IC1 is mapped on TI1 (value: 1)
     *          - B_0x2: CC1 channel is configured as input, IC1 is mapped on TI2 (value: 2)
     *          - B_0x3: CC1 channel is configured as input, IC1 is mapped on TRC. (value: 3)
     */
        /** @brief CC1 channel is configured as output */
    constexpr std::uint32_t TIM15_CCMR1_CC1S_B_0x0 = 0;
        /** @brief CC1 channel is configured as input, IC1 is mapped on TI1 */
    constexpr std::uint32_t TIM15_CCMR1_CC1S_B_0x1 = 1;
        /** @brief CC1 channel is configured as input, IC1 is mapped on TI2 */
    constexpr std::uint32_t TIM15_CCMR1_CC1S_B_0x2 = 2;
        /** @brief CC1 channel is configured as input, IC1 is mapped on TRC. */
    constexpr std::uint32_t TIM15_CCMR1_CC1S_B_0x3 = 3;

    /** @brief Input capture 1 prescaler */
    using TIM15_CCMR1_IC1PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no prescaler, capture is done each time an edge is detected on the capture input (value: 0)
     *          - B_0x1: capture is done once every 2 events (value: 1)
     *          - B_0x2: capture is done once every 4 events (value: 2)
     *          - B_0x3: capture is done once every 8 events (value: 3)
     */
        /** @brief no prescaler, capture is done each time an edge is detected on the capture input */
    constexpr std::uint32_t TIM15_CCMR1_IC1PSC_B_0x0 = 0;
        /** @brief capture is done once every 2 events */
    constexpr std::uint32_t TIM15_CCMR1_IC1PSC_B_0x1 = 1;
        /** @brief capture is done once every 4 events */
    constexpr std::uint32_t TIM15_CCMR1_IC1PSC_B_0x2 = 2;
        /** @brief capture is done once every 8 events */
    constexpr std::uint32_t TIM15_CCMR1_IC1PSC_B_0x3 = 3;

    /** @brief Input capture 1 filter */
    using TIM15_CCMR1_IC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No filter, sampling is done at fless thansub>DTSless than/sub> (value: 0)
     *          - B_0x1: fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=2 (value: 1)
     *          - B_0x2: fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=4 (value: 2)
     *          - B_0x3: fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=8 (value: 3)
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
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0x0 = 0;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=2 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0x1 = 1;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=4 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0x2 = 2;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=8 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0x3 = 3;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=6 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0x4 = 4;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0x5 = 5;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0x6 = 6;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0x7 = 7;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0x8 = 8;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0x9 = 9;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0xA = 10;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0xB = 11;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0xC = 12;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0xD = 13;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0xE = 14;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 */
    constexpr std::uint32_t TIM15_CCMR1_IC1F_B_0xF = 15;

    /** @brief Capture/Compare 2 selection */
    using TIM15_CCMR1_CC2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 channel is configured as output (value: 0)
     *          - B_0x1: CC2 channel is configured as input, IC2 is mapped on TI2 (value: 1)
     *          - B_0x2: CC2 channel is configured as input, IC2 is mapped on TI1 (value: 2)
     *          - B_0x3: CC2 channel is configured as input, IC2 is mapped on TRC. (value: 3)
     */
        /** @brief CC2 channel is configured as output */
    constexpr std::uint32_t TIM15_CCMR1_CC2S_B_0x0 = 0;
        /** @brief CC2 channel is configured as input, IC2 is mapped on TI2 */
    constexpr std::uint32_t TIM15_CCMR1_CC2S_B_0x1 = 1;
        /** @brief CC2 channel is configured as input, IC2 is mapped on TI1 */
    constexpr std::uint32_t TIM15_CCMR1_CC2S_B_0x2 = 2;
        /** @brief CC2 channel is configured as input, IC2 is mapped on TRC. */
    constexpr std::uint32_t TIM15_CCMR1_CC2S_B_0x3 = 3;

    /** @brief Input capture 2 prescaler */
    using TIM15_CCMR1_IC2PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 2 filter */
    using TIM15_CCMR1_IC2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 capture/compare mode register 1 */
    using TIM15_CCMR1_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 selection */
    using TIM15_CCMR1_ALTERNATE1_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured as output. (value: 0)
     *          - B_0x1: CC1 channel is configured as input, IC1 is mapped on TI1. (value: 1)
     *          - B_0x2: CC1 channel is configured as input, IC1 is mapped on TI2. (value: 2)
     *          - B_0x3: CC1 channel is configured as input, IC1 is mapped on TRC. (value: 3)
     */
        /** @brief CC1 channel is configured as output. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_CC1S_B_0x0 = 0;
        /** @brief CC1 channel is configured as input, IC1 is mapped on TI1. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_CC1S_B_0x1 = 1;
        /** @brief CC1 channel is configured as input, IC1 is mapped on TI2. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_CC1S_B_0x2 = 2;
        /** @brief CC1 channel is configured as input, IC1 is mapped on TRC. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_CC1S_B_0x3 = 3;

    /** @brief Output Compare 1 fast enable */
    using TIM15_CCMR1_ALTERNATE1_OC1FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 behaves normally depending on counter and CCR1 values even when the trigger is ON. (value: 0)
     *          - B_0x1: An active edge on the trigger input acts like a compare match on CC1 output. (value: 1)
     */
        /** @brief CC1 behaves normally depending on counter and CCR1 values even when the trigger is ON. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1FE_B_0x0 = 0;
        /** @brief An active edge on the trigger input acts like a compare match on CC1 output. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1FE_B_0x1 = 1;

    /** @brief Output Compare 1 preload enable */
    using TIM15_CCMR1_ALTERNATE1_OC1PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Preload register on TIMx_CCR1 disabled. (value: 0)
     *          - B_0x1: Preload register on TIMx_CCR1 enabled. (value: 1)
     */
        /** @brief Preload register on TIMx_CCR1 disabled. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1PE_B_0x0 = 0;
        /** @brief Preload register on TIMx_CCR1 enabled. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1PE_B_0x1 = 1;

    /** @brief OC1M[2:0]: Output Compare 1 mode */
    using TIM15_CCMR1_ALTERNATE1_OC1M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Frozen - The comparison between the output compare register TIMx_CCR1 and the counter TIMx_CNT has no effect on the outputs. (value: 0)
     *          - B_0x1: Set channel 1 to active level on match. (value: 1)
     *          - B_0x2: Set channel 1 to inactive level on match. (value: 2)
     *          - B_0x3: Toggle - OC1REF toggles when TIMx_CNT=TIMx_CCR1. (value: 3)
     *          - B_0x4: Force inactive level - OC1REF is forced low. (value: 4)
     *          - B_0x5: Force active level - OC1REF is forced high. (value: 5)
     *          - B_0x6: PWM mode 1 - Channel 1 is active as long as TIMx_CNTless thanTIMx_CCR1 else inactive. (value: 6)
     *          - B_0x7: PWM mode 2 - Channel 1 is inactive as long as TIMx_CNTless thanTIMx_CCR1 else active. (value: 7)
     */
        /** @brief Frozen - The comparison between the output compare register TIMx_CCR1 and the counter TIMx_CNT has no effect on the outputs. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1M_B_0x0 = 0;
        /** @brief Set channel 1 to active level on match. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1M_B_0x1 = 1;
        /** @brief Set channel 1 to inactive level on match. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1M_B_0x2 = 2;
        /** @brief Toggle - OC1REF toggles when TIMx_CNT=TIMx_CCR1. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1M_B_0x3 = 3;
        /** @brief Force inactive level - OC1REF is forced low. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1M_B_0x4 = 4;
        /** @brief Force active level - OC1REF is forced high. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1M_B_0x5 = 5;
        /** @brief PWM mode 1 - Channel 1 is active as long as TIMx_CNTless thanTIMx_CCR1 else inactive. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1M_B_0x6 = 6;
        /** @brief PWM mode 2 - Channel 1 is inactive as long as TIMx_CNTless thanTIMx_CCR1 else active. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_OC1M_B_0x7 = 7;

    /** @brief Capture/Compare 2 selection */
    using TIM15_CCMR1_ALTERNATE1_CC2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 channel is configured as output. (value: 0)
     *          - B_0x1: CC2 channel is configured as input, IC2 is mapped on TI2. (value: 1)
     *          - B_0x2: CC2 channel is configured as input, IC2 is mapped on TI1. (value: 2)
     *          - B_0x3: CC2 channel is configured as input, IC2 is mapped on TRC. (value: 3)
     */
        /** @brief CC2 channel is configured as output. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_CC2S_B_0x0 = 0;
        /** @brief CC2 channel is configured as input, IC2 is mapped on TI2. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_CC2S_B_0x1 = 1;
        /** @brief CC2 channel is configured as input, IC2 is mapped on TI1. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_CC2S_B_0x2 = 2;
        /** @brief CC2 channel is configured as input, IC2 is mapped on TRC. */
    constexpr std::uint32_t TIM15_CCMR1_ALTERNATE1_CC2S_B_0x3 = 3;

    /** @brief Output Compare 2 fast enable */
    using TIM15_CCMR1_ALTERNATE1_OC2FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output Compare 2 preload enable */
    using TIM15_CCMR1_ALTERNATE1_OC2PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC2M[2:0]: Output Compare 2 mode */
    using TIM15_CCMR1_ALTERNATE1_OC2M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC1M[3] */
    using TIM15_CCMR1_ALTERNATE1_OC1M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC2M[3] */
    using TIM15_CCMR1_ALTERNATE1_OC2M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 capture/compare enable register */
    using TIM15_CCER = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 output enable */
    using TIM15_CCER_CC1E = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture mode disabled / OC1 is not active (see below) (value: 0)
     *          - B_0x1: Capture mode enabled / OC1 signal is output on the corresponding output pin (value: 1)
     */
        /** @brief Capture mode disabled / OC1 is not active (see below) */
    constexpr std::uint16_t TIM15_CCER_CC1E_B_0x0 = 0;
        /** @brief Capture mode enabled / OC1 signal is output on the corresponding output pin */
    constexpr std::uint16_t TIM15_CCER_CC1E_B_0x1 = 1;

    /** @brief Capture/Compare 1 output polarity */
    using TIM15_CCER_CC1P = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OC1 active high (output mode) / Edge sensitivity selection (input mode, see below) (value: 0)
     *          - B_0x1: OC1 active low (output mode) / Edge sensitivity selection (input mode, see below) (value: 1)
     */
        /** @brief OC1 active high (output mode) / Edge sensitivity selection (input mode, see below) */
    constexpr std::uint16_t TIM15_CCER_CC1P_B_0x0 = 0;
        /** @brief OC1 active low (output mode) / Edge sensitivity selection (input mode, see below) */
    constexpr std::uint16_t TIM15_CCER_CC1P_B_0x1 = 1;

    /** @brief Capture/Compare 1 complementary output enable */
    using TIM15_CCER_CC1NE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Off - OC1N is not active. (value: 0)
     *          - B_0x1: On - OC1N signal is output on the corresponding output pin depending on MOE, OSSI, OSSR, OIS1, OIS1N and CC1E bits. (value: 1)
     */
        /** @brief Off - OC1N is not active. */
    constexpr std::uint16_t TIM15_CCER_CC1NE_B_0x0 = 0;
        /** @brief On - OC1N signal is output on the corresponding output pin depending on MOE, OSSI, OSSR, OIS1, OIS1N and CC1E bits. */
    constexpr std::uint16_t TIM15_CCER_CC1NE_B_0x1 = 1;

    /** @brief Capture/Compare 1 complementary output polarity */
    using TIM15_CCER_CC1NP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OC1N active high (value: 0)
     *          - B_0x1: OC1N active low (value: 1)
     */
        /** @brief OC1N active high */
    constexpr std::uint16_t TIM15_CCER_CC1NP_B_0x0 = 0;
        /** @brief OC1N active low */
    constexpr std::uint16_t TIM15_CCER_CC1NP_B_0x1 = 1;

    /** @brief Capture/Compare 2 output enable */
    using TIM15_CCER_CC2E = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 output polarity */
    using TIM15_CCER_CC2P = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 complementary output polarity */
    using TIM15_CCER_CC2NP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 counter */
    using TIM15_CNT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TIM15_CNT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UIF Copy */
    using TIM15_CNT_UIFCPY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 prescaler */
    using TIM15_PSC = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler value */
    using TIM15_PSC_PSC = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 auto-reload register */
    using TIM15_ARR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto-reload value */
    using TIM15_ARR_ARR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 repetition counter register */
    using TIM15_RCR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition counter value */
    using TIM15_RCR_REP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 capture/compare register 1 */
    using TIM15_CCR1 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 value */
    using TIM15_CCR1_CCR1 = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 capture/compare register 2 */
    using TIM15_CCR2 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 value */
    using TIM15_CCR2_CCR2 = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 break and dead-time register */
    using TIM15_BDTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dead-time generator setup */
    using TIM15_BDTR_DTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lock configuration */
    using TIM15_BDTR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LOCK OFF - No bit is write protected (value: 0)
     *          - B_0x1: LOCK Level 1 = DTG bits in TIMx_BDTR register, OISx and OISxN bits in TIMx_CR2 register and BKE/BKP/AOE bits in TIMx_BDTR register can no longer be written (value: 1)
     *          - B_0x2: LOCK Level 2 = LOCK Level 1 + CC Polarity bits (CCxP/CCxNP bits in TIMx_CCER register, as long as the related channel is configured in output through the CCxS bits) as well as OSSR and OSSI bits can no longer be written. (value: 2)
     *          - B_0x3: LOCK Level 3 = LOCK Level 2 + CC Control bits (OCxM and OCxPE bits in TIMx_CCMRx registers, as long as the related channel is configured in output through the CCxS bits) can no longer be written. (value: 3)
     */
        /** @brief LOCK OFF - No bit is write protected */
    constexpr std::uint32_t TIM15_BDTR_LOCK_B_0x0 = 0;
        /** @brief LOCK Level 1 = DTG bits in TIMx_BDTR register, OISx and OISxN bits in TIMx_CR2 register and BKE/BKP/AOE bits in TIMx_BDTR register can no longer be written */
    constexpr std::uint32_t TIM15_BDTR_LOCK_B_0x1 = 1;
        /** @brief LOCK Level 2 = LOCK Level 1 + CC Polarity bits (CCxP/CCxNP bits in TIMx_CCER register, as long as the related channel is configured in output through the CCxS bits) as well as OSSR and OSSI bits can no longer be written. */
    constexpr std::uint32_t TIM15_BDTR_LOCK_B_0x2 = 2;
        /** @brief LOCK Level 3 = LOCK Level 2 + CC Control bits (OCxM and OCxPE bits in TIMx_CCMRx registers, as long as the related channel is configured in output through the CCxS bits) can no longer be written. */
    constexpr std::uint32_t TIM15_BDTR_LOCK_B_0x3 = 3;

    /** @brief Off-state selection for Idle mode */
    using TIM15_BDTR_OSSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When inactive, OC/OCN outputs are disabled (OC/OCN enable output signal=0) (value: 0)
     *          - B_0x1: When inactive, OC/OCN outputs are forced first with their idle level as soon as CCxE=1 or CCxNE=1. (value: 1)
     */
        /** @brief When inactive, OC/OCN outputs are disabled (OC/OCN enable output signal=0) */
    constexpr std::uint32_t TIM15_BDTR_OSSI_B_0x0 = 0;
        /** @brief When inactive, OC/OCN outputs are forced first with their idle level as soon as CCxE=1 or CCxNE=1. */
    constexpr std::uint32_t TIM15_BDTR_OSSI_B_0x1 = 1;

    /** @brief Off-state selection for Run mode */
    using TIM15_BDTR_OSSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When inactive, OC/OCN outputs are disabled (the timer releases the output control which is taken over by the GPIO, which forces a Hi-Z state) (value: 0)
     *          - B_0x1: When inactive, OC/OCN outputs are enabled with their inactive level as soon as CCxE=1 or CCxNE=1 (the output is still controlled by the timer). (value: 1)
     */
        /** @brief When inactive, OC/OCN outputs are disabled (the timer releases the output control which is taken over by the GPIO, which forces a Hi-Z state) */
    constexpr std::uint32_t TIM15_BDTR_OSSR_B_0x0 = 0;
        /** @brief When inactive, OC/OCN outputs are enabled with their inactive level as soon as CCxE=1 or CCxNE=1 (the output is still controlled by the timer). */
    constexpr std::uint32_t TIM15_BDTR_OSSR_B_0x1 = 1;

    /** @brief Break enable */
    using TIM15_BDTR_BKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break inputs (BRK and CCS clock failure event) disabled (value: 0)
     */
        /** @brief Break inputs (BRK and CCS clock failure event) disabled */
    constexpr std::uint32_t TIM15_BDTR_BKE_B_0x0 = 0;

    /** @brief Break polarity */
    using TIM15_BDTR_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break input BRK is active low (value: 0)
     *          - B_0x1: Break input BRK is active high (value: 1)
     */
        /** @brief Break input BRK is active low */
    constexpr std::uint32_t TIM15_BDTR_BKP_B_0x0 = 0;
        /** @brief Break input BRK is active high */
    constexpr std::uint32_t TIM15_BDTR_BKP_B_0x1 = 1;

    /** @brief Automatic output enable */
    using TIM15_BDTR_AOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MOE can be set only by software (value: 0)
     *          - B_0x1: MOE can be set by software or automatically at the next update event (if the break input is not be active) (value: 1)
     */
        /** @brief MOE can be set only by software */
    constexpr std::uint32_t TIM15_BDTR_AOE_B_0x0 = 0;
        /** @brief MOE can be set by software or automatically at the next update event (if the break input is not be active) */
    constexpr std::uint32_t TIM15_BDTR_AOE_B_0x1 = 1;

    /** @brief Main output enable */
    using TIM15_BDTR_MOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OC and OCN outputs are disabled or forced to idle state depending on the OSSI bit. (value: 0)
     *          - B_0x1: OC and OCN outputs are enabled if their respective enable bits are set (CCxE, CCxNE in TIMx_CCER register) (value: 1)
     */
        /** @brief OC and OCN outputs are disabled or forced to idle state depending on the OSSI bit. */
    constexpr std::uint32_t TIM15_BDTR_MOE_B_0x0 = 0;
        /** @brief OC and OCN outputs are enabled if their respective enable bits are set (CCxE, CCxNE in TIMx_CCER register) */
    constexpr std::uint32_t TIM15_BDTR_MOE_B_0x1 = 1;

    /** @brief Break filter */
    using TIM15_BDTR_BKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No filter, BRK acts asynchronously (value: 0)
     *          - B_0x1: fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=2 (value: 1)
     *          - B_0x2: fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=4 (value: 2)
     *          - B_0x3: fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=8 (value: 3)
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
        /** @brief No filter, BRK acts asynchronously */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0x0 = 0;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=2 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0x1 = 1;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=4 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0x2 = 2;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>CK_INTless than/sub>, N=8 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0x3 = 3;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=6 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0x4 = 4;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0x5 = 5;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0x6 = 6;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0x7 = 7;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0x8 = 8;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0x9 = 9;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0xA = 10;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0xB = 11;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0xC = 12;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0xD = 13;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0xE = 14;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 */
    constexpr std::uint32_t TIM15_BDTR_BKF_B_0xF = 15;

    /** @brief Break Disarm */
    using TIM15_BDTR_BKDSRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break input BRK is armed (value: 0)
     *          - B_0x1: Break input BRK is disarmed (value: 1)
     */
        /** @brief Break input BRK is armed */
    constexpr std::uint32_t TIM15_BDTR_BKDSRM_B_0x0 = 0;
        /** @brief Break input BRK is disarmed */
    constexpr std::uint32_t TIM15_BDTR_BKDSRM_B_0x1 = 1;

    /** @brief Break Bidirectional */
    using TIM15_BDTR_BKBID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break input BRK in input mode (value: 0)
     *          - B_0x1: Break input BRK in bidirectional mode (value: 1)
     */
        /** @brief Break input BRK in input mode */
    constexpr std::uint32_t TIM15_BDTR_BKBID_B_0x0 = 0;
        /** @brief Break input BRK in bidirectional mode */
    constexpr std::uint32_t TIM15_BDTR_BKBID_B_0x1 = 1;

    /** @brief TIM15 DMA control register */
    using TIM15_DCR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA base address */
    using TIM15_DCR_DBA = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_CR1, (value: 0)
     *          - B_0x1: TIMx_CR2, (value: 1)
     *          - B_0x2: TIMx_SMCR, (value: 2)
     */
        /** @brief TIMx_CR1, */
    constexpr std::uint16_t TIM15_DCR_DBA_B_0x0 = 0;
        /** @brief TIMx_CR2, */
    constexpr std::uint16_t TIM15_DCR_DBA_B_0x1 = 1;
        /** @brief TIMx_SMCR, */
    constexpr std::uint16_t TIM15_DCR_DBA_B_0x2 = 2;

    /** @brief DMA burst length */
    using TIM15_DCR_DBL = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 transfer, (value: 0)
     *          - B_0x1: 2 transfers, (value: 1)
     *          - B_0x2: 3 transfers, (value: 2)
     *          - B_0x11: 18 transfers. (value: 17)
     */
        /** @brief 1 transfer, */
    constexpr std::uint16_t TIM15_DCR_DBL_B_0x0 = 0;
        /** @brief 2 transfers, */
    constexpr std::uint16_t TIM15_DCR_DBL_B_0x1 = 1;
        /** @brief 3 transfers, */
    constexpr std::uint16_t TIM15_DCR_DBL_B_0x2 = 2;
        /** @brief 18 transfers. */
    constexpr std::uint16_t TIM15_DCR_DBL_B_0x11 = 17;

    /** @brief TIM15 DMA address for full transfer */
    using TIM15_DMAR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA register for burst accesses */
    using TIM15_DMAR_DMAB = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM15 alternate register 1 */
    using TIM15_AF1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRK BKIN input enable */
    using TIM15_AF1_BKINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKIN input disabled (value: 0)
     *          - B_0x1: BKIN input enabled (value: 1)
     */
        /** @brief BKIN input disabled */
    constexpr std::uint32_t TIM15_AF1_BKINE_B_0x0 = 0;
        /** @brief BKIN input enabled */
    constexpr std::uint32_t TIM15_AF1_BKINE_B_0x1 = 1;

    /** @brief BRK BKIN input polarity */
    using TIM15_AF1_BKINP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BKIN input is active low (value: 0)
     *          - B_0x1: BKIN input is active high (value: 1)
     */
        /** @brief BKIN input is active low */
    constexpr std::uint32_t TIM15_AF1_BKINP_B_0x0 = 0;
        /** @brief BKIN input is active high */
    constexpr std::uint32_t TIM15_AF1_BKINP_B_0x1 = 1;

    /** @brief TIM15 input selection register */
    using TIM15_TISEL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief selects TI1[0] to TI1[15] input */
    using TIM15_TISEL_TI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15_CH1 input (value: 0)
     *          - B_0x1: TIM2_IC1 (value: 1)
     *          - B_0x2: TIM3_IC1 (value: 2)
     */
        /** @brief TIM15_CH1 input */
    constexpr std::uint32_t TIM15_TISEL_TI1SEL_B_0x0 = 0;
        /** @brief TIM2_IC1 */
    constexpr std::uint32_t TIM15_TISEL_TI1SEL_B_0x1 = 1;
        /** @brief TIM3_IC1 */
    constexpr std::uint32_t TIM15_TISEL_TI1SEL_B_0x2 = 2;

    /** @brief selects TI2[0] to TI2[15] input */
    using TIM15_TISEL_TI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIM15_CH2 input (value: 0)
     *          - B_0x1: TIM2_IC2 (value: 1)
     *          - B_0x2: TIM3_IC2 (value: 2)
     */
        /** @brief TIM15_CH2 input */
    constexpr std::uint32_t TIM15_TISEL_TI2SEL_B_0x0 = 0;
        /** @brief TIM2_IC2 */
    constexpr std::uint32_t TIM15_TISEL_TI2SEL_B_0x1 = 1;
        /** @brief TIM3_IC2 */
    constexpr std::uint32_t TIM15_TISEL_TI2SEL_B_0x2 = 2;

}

#endif
