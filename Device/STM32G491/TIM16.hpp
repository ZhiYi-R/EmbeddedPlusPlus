/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G491_TIM16_HPP
#define EMBEDDED_PP_STM32G491_TIM16_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief General purpose timers */
namespace STM32G491::TIM16 {

    /** @brief TIM16 control register 1 */
    using TIM16_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter enable */
    using TIM16_CR1_CEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: Counter enabled (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint16_t TIM16_CR1_CEN_B_0x0 = 0;
        /** @brief Counter enabled */
    constexpr std::uint16_t TIM16_CR1_CEN_B_0x1 = 1;

    /** @brief Update disable */
    using TIM16_CR1_UDIS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UEV enabled. (value: 0)
     *          - B_0x1: UEV disabled. (value: 1)
     */
        /** @brief UEV enabled. */
    constexpr std::uint16_t TIM16_CR1_UDIS_B_0x0 = 0;
        /** @brief UEV disabled. */
    constexpr std::uint16_t TIM16_CR1_UDIS_B_0x1 = 1;

    /** @brief Update request source */
    using TIM16_CR1_URS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any of the following events generate an update interrupt or DMA request if enabled. (value: 0)
     *          - B_0x1: nly counter overflow/underflow generates an update interrupt or DMA request if enabled. (value: 1)
     */
        /** @brief Any of the following events generate an update interrupt or DMA request if enabled. */
    constexpr std::uint16_t TIM16_CR1_URS_B_0x0 = 0;
        /** @brief nly counter overflow/underflow generates an update interrupt or DMA request if enabled. */
    constexpr std::uint16_t TIM16_CR1_URS_B_0x1 = 1;

    /** @brief One pulse mode */
    using TIM16_CR1_OPM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter is not stopped at update event (value: 0)
     *          - B_0x1: Counter stops counting at the next update event (clearing the bit CEN) (value: 1)
     */
        /** @brief Counter is not stopped at update event */
    constexpr std::uint16_t TIM16_CR1_OPM_B_0x0 = 0;
        /** @brief Counter stops counting at the next update event (clearing the bit CEN) */
    constexpr std::uint16_t TIM16_CR1_OPM_B_0x1 = 1;

    /** @brief Auto-reload preload enable */
    using TIM16_CR1_ARPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_ARR register is not buffered (value: 0)
     *          - B_0x1: TIMx_ARR register is buffered (value: 1)
     */
        /** @brief TIMx_ARR register is not buffered */
    constexpr std::uint16_t TIM16_CR1_ARPE_B_0x0 = 0;
        /** @brief TIMx_ARR register is buffered */
    constexpr std::uint16_t TIM16_CR1_ARPE_B_0x1 = 1;

    /** @brief Clock division */
    using TIM16_CR1_CKD = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tless thansub>DTSless than/sub>=tless thansub>tim_ker_ckless than/sub> (value: 0)
     *          - B_0x1: tless thansub>DTSless than/sub>=2*tless thansub>tim_ker_ckless than/sub> (value: 1)
     *          - B_0x2: tless thansub>DTSless than/sub>=4*tless thansub>tim_ker_ckless than/sub> (value: 2)
     */
        /** @brief tless thansub>DTSless than/sub>=tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM16_CR1_CKD_B_0x0 = 0;
        /** @brief tless thansub>DTSless than/sub>=2*tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM16_CR1_CKD_B_0x1 = 1;
        /** @brief tless thansub>DTSless than/sub>=4*tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM16_CR1_CKD_B_0x2 = 2;

    /** @brief UIF status bit remapping */
    using TIM16_CR1_UIFREMAP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No remapping. (value: 0)
     *          - B_0x1: Remapping enabled. (value: 1)
     */
        /** @brief No remapping. */
    constexpr std::uint16_t TIM16_CR1_UIFREMAP_B_0x0 = 0;
        /** @brief Remapping enabled. */
    constexpr std::uint16_t TIM16_CR1_UIFREMAP_B_0x1 = 1;

    /** @brief Dithering enable */
    using TIM16_CR1_DITHEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dithering disabled (value: 0)
     *          - B_0x1: Dithering enabled (value: 1)
     */
        /** @brief Dithering disabled */
    constexpr std::uint16_t TIM16_CR1_DITHEN_B_0x0 = 0;
        /** @brief Dithering enabled */
    constexpr std::uint16_t TIM16_CR1_DITHEN_B_0x1 = 1;

    /** @brief TIM16 control register 2 */
    using TIM16_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare preloaded control */
    using TIM16_CR2_CCPC = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCxE, CCxNE and OCxM bits are not preloaded (value: 0)
     *          - B_0x1: CCxE, CCxNE and OCxM bits are preloaded, after having been written, they are updated only when COM bit is set. (value: 1)
     */
        /** @brief CCxE, CCxNE and OCxM bits are not preloaded */
    constexpr std::uint16_t TIM16_CR2_CCPC_B_0x0 = 0;
        /** @brief CCxE, CCxNE and OCxM bits are preloaded, after having been written, they are updated only when COM bit is set. */
    constexpr std::uint16_t TIM16_CR2_CCPC_B_0x1 = 1;

    /** @brief Capture/compare control update selection */
    using TIM16_CR2_CCUS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit only. (value: 0)
     *          - B_0x1: When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit or when a rising edge occurs on tim_trgi (if available). (value: 1)
     */
        /** @brief When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit only. */
    constexpr std::uint16_t TIM16_CR2_CCUS_B_0x0 = 0;
        /** @brief When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit or when a rising edge occurs on tim_trgi (if available). */
    constexpr std::uint16_t TIM16_CR2_CCUS_B_0x1 = 1;

    /** @brief Capture/compare DMA selection */
    using TIM16_CR2_CCDS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCx DMA request sent when CCx event occurs (value: 0)
     *          - B_0x1: CCx DMA requests sent when update event occurs (value: 1)
     */
        /** @brief CCx DMA request sent when CCx event occurs */
    constexpr std::uint16_t TIM16_CR2_CCDS_B_0x0 = 0;
        /** @brief CCx DMA requests sent when update event occurs */
    constexpr std::uint16_t TIM16_CR2_CCDS_B_0x1 = 1;

    /** @brief Output Idle state 1 (tim_oc1 output) */
    using TIM16_CR2_OIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_oc1=0 after a dead-time when MOE=0 (value: 0)
     *          - B_0x1: tim_oc1=1 after a dead-time when MOE=0 (value: 1)
     */
        /** @brief tim_oc1=0 after a dead-time when MOE=0 */
    constexpr std::uint16_t TIM16_CR2_OIS1_B_0x0 = 0;
        /** @brief tim_oc1=1 after a dead-time when MOE=0 */
    constexpr std::uint16_t TIM16_CR2_OIS1_B_0x1 = 1;

    /** @brief Output Idle state 1 (tim_oc1n output) */
    using TIM16_CR2_OIS1N = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_oc1n=0 after a dead-time when MOE=0 (value: 0)
     *          - B_0x1: tim_oc1n=1 after a dead-time when MOE=0 (value: 1)
     */
        /** @brief tim_oc1n=0 after a dead-time when MOE=0 */
    constexpr std::uint16_t TIM16_CR2_OIS1N_B_0x0 = 0;
        /** @brief tim_oc1n=1 after a dead-time when MOE=0 */
    constexpr std::uint16_t TIM16_CR2_OIS1N_B_0x1 = 1;

    /** @brief TIM16 DMA/interrupt enable register */
    using TIM16_DIER = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt enable */
    using TIM16_DIER_UIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update interrupt disabled (value: 0)
     *          - B_0x1: Update interrupt enabled (value: 1)
     */
        /** @brief Update interrupt disabled */
    constexpr std::uint16_t TIM16_DIER_UIE_B_0x0 = 0;
        /** @brief Update interrupt enabled */
    constexpr std::uint16_t TIM16_DIER_UIE_B_0x1 = 1;

    /** @brief Capture/Compare 1 interrupt enable */
    using TIM16_DIER_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 interrupt disabled (value: 0)
     *          - B_0x1: CC1 interrupt enabled (value: 1)
     */
        /** @brief CC1 interrupt disabled */
    constexpr std::uint16_t TIM16_DIER_CC1IE_B_0x0 = 0;
        /** @brief CC1 interrupt enabled */
    constexpr std::uint16_t TIM16_DIER_CC1IE_B_0x1 = 1;

    /** @brief COM interrupt enable */
    using TIM16_DIER_COMIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COM interrupt disabled (value: 0)
     *          - B_0x1: COM interrupt enabled (value: 1)
     */
        /** @brief COM interrupt disabled */
    constexpr std::uint16_t TIM16_DIER_COMIE_B_0x0 = 0;
        /** @brief COM interrupt enabled */
    constexpr std::uint16_t TIM16_DIER_COMIE_B_0x1 = 1;

    /** @brief Break interrupt enable */
    using TIM16_DIER_BIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break interrupt disabled (value: 0)
     *          - B_0x1: Break interrupt enabled (value: 1)
     */
        /** @brief Break interrupt disabled */
    constexpr std::uint16_t TIM16_DIER_BIE_B_0x0 = 0;
        /** @brief Break interrupt enabled */
    constexpr std::uint16_t TIM16_DIER_BIE_B_0x1 = 1;

    /** @brief Update DMA request enable */
    using TIM16_DIER_UDE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update DMA request disabled (value: 0)
     *          - B_0x1: Update DMA request enabled (value: 1)
     */
        /** @brief Update DMA request disabled */
    constexpr std::uint16_t TIM16_DIER_UDE_B_0x0 = 0;
        /** @brief Update DMA request enabled */
    constexpr std::uint16_t TIM16_DIER_UDE_B_0x1 = 1;

    /** @brief Capture/Compare 1 DMA request enable */
    using TIM16_DIER_CC1DE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 DMA request disabled (value: 0)
     *          - B_0x1: CC1 DMA request enabled (value: 1)
     */
        /** @brief CC1 DMA request disabled */
    constexpr std::uint16_t TIM16_DIER_CC1DE_B_0x0 = 0;
        /** @brief CC1 DMA request enabled */
    constexpr std::uint16_t TIM16_DIER_CC1DE_B_0x1 = 1;

    /** @brief TIM16 status register */
    using TIM16_SR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt flag */
    using TIM16_SR_UIF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No update occurred. (value: 0)
     *          - B_0x1: Update interrupt pending. (value: 1)
     */
        /** @brief No update occurred. */
    constexpr std::uint16_t TIM16_SR_UIF_B_0x0 = 0;
        /** @brief Update interrupt pending. */
    constexpr std::uint16_t TIM16_SR_UIF_B_0x1 = 1;

    /** @brief Capture/Compare 1 interrupt flag */
    using TIM16_SR_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No compare match / No input capture occurred (value: 0)
     *          - B_0x1: A compare match or an input capture occurred (value: 1)
     */
        /** @brief No compare match / No input capture occurred */
    constexpr std::uint16_t TIM16_SR_CC1IF_B_0x0 = 0;
        /** @brief A compare match or an input capture occurred */
    constexpr std::uint16_t TIM16_SR_CC1IF_B_0x1 = 1;

    /** @brief COM interrupt flag */
    using TIM16_SR_COMIF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No COM event occurred (value: 0)
     *          - B_0x1: COM interrupt pending (value: 1)
     */
        /** @brief No COM event occurred */
    constexpr std::uint16_t TIM16_SR_COMIF_B_0x0 = 0;
        /** @brief COM interrupt pending */
    constexpr std::uint16_t TIM16_SR_COMIF_B_0x1 = 1;

    /** @brief Break interrupt flag */
    using TIM16_SR_BIF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break event occurred (value: 0)
     *          - B_0x1: An active level has been detected on the break input (value: 1)
     */
        /** @brief No break event occurred */
    constexpr std::uint16_t TIM16_SR_BIF_B_0x0 = 0;
        /** @brief An active level has been detected on the break input */
    constexpr std::uint16_t TIM16_SR_BIF_B_0x1 = 1;

    /** @brief Capture/Compare 1 overcapture flag */
    using TIM16_SR_CC1OF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overcapture has been detected (value: 0)
     *          - B_0x1: The counter value has been captured in TIMx_CCR1 register while CC1IF flag was already set (value: 1)
     */
        /** @brief No overcapture has been detected */
    constexpr std::uint16_t TIM16_SR_CC1OF_B_0x0 = 0;
        /** @brief The counter value has been captured in TIMx_CCR1 register while CC1IF flag was already set */
    constexpr std::uint16_t TIM16_SR_CC1OF_B_0x1 = 1;

    /** @brief TIM16 event generation register */
    using TIM16_EGR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update generation */
    using TIM16_EGR_UG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action. (value: 0)
     *          - B_0x1: Reinitialize the counter and generates an update of the registers. (value: 1)
     */
        /** @brief No action. */
    constexpr std::uint16_t TIM16_EGR_UG_B_0x0 = 0;
        /** @brief Reinitialize the counter and generates an update of the registers. */
    constexpr std::uint16_t TIM16_EGR_UG_B_0x1 = 1;

    /** @brief Capture/Compare 1 generation */
    using TIM16_EGR_CC1G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action. (value: 0)
     *          - B_0x1: A capture/compare event is generated on channel 1: (value: 1)
     */
        /** @brief No action. */
    constexpr std::uint16_t TIM16_EGR_CC1G_B_0x0 = 0;
        /** @brief A capture/compare event is generated on channel 1: */
    constexpr std::uint16_t TIM16_EGR_CC1G_B_0x1 = 1;

    /** @brief Capture/Compare control update generation */
    using TIM16_EGR_COMG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: When the CCPC bit is set, it is possible to update the CCxE, CCxNE and OCxM bits (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM16_EGR_COMG_B_0x0 = 0;
        /** @brief When the CCPC bit is set, it is possible to update the CCxE, CCxNE and OCxM bits */
    constexpr std::uint16_t TIM16_EGR_COMG_B_0x1 = 1;

    /** @brief Break generation */
    using TIM16_EGR_BG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action. (value: 0)
     *          - B_0x1: A break event is generated. (value: 1)
     */
        /** @brief No action. */
    constexpr std::uint16_t TIM16_EGR_BG_B_0x0 = 0;
        /** @brief A break event is generated. */
    constexpr std::uint16_t TIM16_EGR_BG_B_0x1 = 1;

    /** @brief TIM16 capture/compare mode register 1 */
    using TIM16_CCMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 selection */
    using TIM16_CCMR1_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured as output (value: 0)
     *          - B_0x1: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 (value: 1)
     */
        /** @brief CC1 channel is configured as output */
    constexpr std::uint32_t TIM16_CCMR1_CC1S_B_0x0 = 0;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM16_CCMR1_CC1S_B_0x1 = 1;

    /** @brief Input capture 1 prescaler */
    using TIM16_CCMR1_IC1PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no prescaler, capture is done each time an edge is detected on the capture input. (value: 0)
     *          - B_0x1: capture is done once every 2 events (value: 1)
     *          - B_0x2: capture is done once every 4 events (value: 2)
     *          - B_0x3: capture is done once every 8 events (value: 3)
     */
        /** @brief no prescaler, capture is done each time an edge is detected on the capture input. */
    constexpr std::uint32_t TIM16_CCMR1_IC1PSC_B_0x0 = 0;
        /** @brief capture is done once every 2 events */
    constexpr std::uint32_t TIM16_CCMR1_IC1PSC_B_0x1 = 1;
        /** @brief capture is done once every 4 events */
    constexpr std::uint32_t TIM16_CCMR1_IC1PSC_B_0x2 = 2;
        /** @brief capture is done once every 8 events */
    constexpr std::uint32_t TIM16_CCMR1_IC1PSC_B_0x3 = 3;

    /** @brief Input capture 1 filter */
    using TIM16_CCMR1_IC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No filter, sampling is done at fless thansub>DTSless than/sub> (value: 0)
     *          - B_0x1: fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=2 (value: 1)
     *          - B_0x2: fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=4 (value: 2)
     *          - B_0x3: fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=8 (value: 3)
     *          - B_0x4: fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N= (value: 4)
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
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0x0 = 0;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=2 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0x1 = 1;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=4 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0x2 = 2;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=8 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0x3 = 3;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N= */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0x4 = 4;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0x5 = 5;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0x6 = 6;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0x7 = 7;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0x8 = 8;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0x9 = 9;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0xA = 10;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0xB = 11;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0xC = 12;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0xD = 13;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0xE = 14;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 */
    constexpr std::uint32_t TIM16_CCMR1_IC1F_B_0xF = 15;

    /** @brief TIM16 capture/compare mode register 1 */
    using TIM16_CCMR1_Alternate = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 selection */
    using TIM16_CCMR1_Alternate_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured as output (value: 0)
     *          - B_0x1: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 (value: 1)
     */
        /** @brief CC1 channel is configured as output */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_CC1S_B_0x0 = 0;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_CC1S_B_0x1 = 1;

    /** @brief Output Compare 1 fast enable */
    using TIM16_CCMR1_Alternate_OC1FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 behaves normally depending on counter and CCR1 values even when the trigger is ON. (value: 0)
     *          - B_0x1: An active edge on the trigger input acts like a compare match on CC1 output. (value: 1)
     */
        /** @brief CC1 behaves normally depending on counter and CCR1 values even when the trigger is ON. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1FE_B_0x0 = 0;
        /** @brief An active edge on the trigger input acts like a compare match on CC1 output. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1FE_B_0x1 = 1;

    /** @brief Output Compare 1 preload enable */
    using TIM16_CCMR1_Alternate_OC1PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Preload register on TIMx_CCR1 disabled. (value: 0)
     *          - B_0x1: Preload register on TIMx_CCR1 enabled. (value: 1)
     */
        /** @brief Preload register on TIMx_CCR1 disabled. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1PE_B_0x0 = 0;
        /** @brief Preload register on TIMx_CCR1 enabled. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1PE_B_0x1 = 1;

    /** @brief OC1M[2:0]: Output Compare 1 mode */
    using TIM16_CCMR1_Alternate_OC1M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Frozen - The comparison between the output compare register TIMx_CCR1 and the counter TIMx_CNT has no effect on the outputs. (value: 0)
     *          - B_0x1: Set channel 1 to active level on match. (value: 1)
     *          - B_0x2: Set channel 1 to inactive level on match. (value: 2)
     *          - B_0x3: Toggle - tim_oc1ref toggles when TIMx_CNT=TIMx_CCR1. (value: 3)
     *          - B_0x4: Force inactive level - tim_oc1ref is forced low. (value: 4)
     *          - B_0x5: Force active level - tim_oc1ref is forced high. (value: 5)
     *          - B_0x6: PWM mode 1 - Channel 1 is active as long as TIMx_CNTless thanTIMx_CCR1 else inactive. (value: 6)
     *          - B_0x7: PWM mode 2 - Channel 1 is inactive as long as TIMx_CNTless thanTIMx_CCR1 else active. (value: 7)
     */
        /** @brief Frozen - The comparison between the output compare register TIMx_CCR1 and the counter TIMx_CNT has no effect on the outputs. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1M_B_0x0 = 0;
        /** @brief Set channel 1 to active level on match. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1M_B_0x1 = 1;
        /** @brief Set channel 1 to inactive level on match. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1M_B_0x2 = 2;
        /** @brief Toggle - tim_oc1ref toggles when TIMx_CNT=TIMx_CCR1. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1M_B_0x3 = 3;
        /** @brief Force inactive level - tim_oc1ref is forced low. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1M_B_0x4 = 4;
        /** @brief Force active level - tim_oc1ref is forced high. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1M_B_0x5 = 5;
        /** @brief PWM mode 1 - Channel 1 is active as long as TIMx_CNTless thanTIMx_CCR1 else inactive. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1M_B_0x6 = 6;
        /** @brief PWM mode 2 - Channel 1 is inactive as long as TIMx_CNTless thanTIMx_CCR1 else active. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1M_B_0x7 = 7;

    /** @brief Output Compare 1 clear enable */
    using TIM16_CCMR1_Alternate_OC1CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_oc1ref is not affected by the tim_ocref_clr input. (value: 0)
     *          - B_0x1: tim_oc1ref is cleared as soon as a High level is detected on tim_ocref_clr input. (value: 1)
     */
        /** @brief tim_oc1ref is not affected by the tim_ocref_clr input. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1CE_B_0x0 = 0;
        /** @brief tim_oc1ref is cleared as soon as a High level is detected on tim_ocref_clr input. */
    constexpr std::uint32_t TIM16_CCMR1_Alternate_OC1CE_B_0x1 = 1;

    /** @brief OC1M[3] */
    using TIM16_CCMR1_Alternate_OC1M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 capture/compare enable register */
    using TIM16_CCER = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 output enable */
    using TIM16_CCER_CC1E = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture mode disabled / OC1 is not active (see below) (value: 0)
     *          - B_0x1: Capture mode enabled / OC1 signal is output on the corresponding output pin (value: 1)
     */
        /** @brief Capture mode disabled / OC1 is not active (see below) */
    constexpr std::uint16_t TIM16_CCER_CC1E_B_0x0 = 0;
        /** @brief Capture mode enabled / OC1 signal is output on the corresponding output pin */
    constexpr std::uint16_t TIM16_CCER_CC1E_B_0x1 = 1;

    /** @brief Capture/Compare 1 output polarity */
    using TIM16_CCER_CC1P = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OC1 active high (output mode) / Edge sensitivity selection (input mode, see below) (value: 0)
     *          - B_0x1: OC1 active low (output mode) / Edge sensitivity selection (input mode, see below) (value: 1)
     */
        /** @brief OC1 active high (output mode) / Edge sensitivity selection (input mode, see below) */
    constexpr std::uint16_t TIM16_CCER_CC1P_B_0x0 = 0;
        /** @brief OC1 active low (output mode) / Edge sensitivity selection (input mode, see below) */
    constexpr std::uint16_t TIM16_CCER_CC1P_B_0x1 = 1;

    /** @brief Capture/Compare 1 complementary output enable */
    using TIM16_CCER_CC1NE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Off - tim_oc1n is not active. (value: 0)
     *          - B_0x1: On - tim_oc1n signal is output on the corresponding output pin depending on MOE, OSSI, OSSR, OIS1, OIS1N and CC1E bits. (value: 1)
     */
        /** @brief Off - tim_oc1n is not active. */
    constexpr std::uint16_t TIM16_CCER_CC1NE_B_0x0 = 0;
        /** @brief On - tim_oc1n signal is output on the corresponding output pin depending on MOE, OSSI, OSSR, OIS1, OIS1N and CC1E bits. */
    constexpr std::uint16_t TIM16_CCER_CC1NE_B_0x1 = 1;

    /** @brief Capture/Compare 1 complementary output polarity */
    using TIM16_CCER_CC1NP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_oc1n active high (value: 0)
     *          - B_0x1: tim_oc1n active low (value: 1)
     */
        /** @brief tim_oc1n active high */
    constexpr std::uint16_t TIM16_CCER_CC1NP_B_0x0 = 0;
        /** @brief tim_oc1n active low */
    constexpr std::uint16_t TIM16_CCER_CC1NP_B_0x1 = 1;

    /** @brief TIM16 counter */
    using TIM16_CNT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TIM16_CNT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UIF Copy */
    using TIM16_CNT_UIFCPY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 prescaler */
    using TIM16_PSC = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler value */
    using TIM16_PSC_PSC = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 auto-reload register */
    using TIM16_ARR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto-reload value */
    using TIM16_ARR_ARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 repetition counter register */
    using TIM16_RCR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition counter reload value */
    using TIM16_RCR_REP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 capture/compare register 1 */
    using TIM16_CCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 value */
    using TIM16_CCR1_CCR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 break and dead-time register */
    using TIM16_BDTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dead-time generator setup */
    using TIM16_BDTR_DTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lock configuration */
    using TIM16_BDTR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LOCK OFF - No bit is write protected (value: 0)
     *          - B_0x1: LOCK Level 1 = DTG bits in TIMx_BDTR register, OISx and OISxN bits in TIMx_CR2 register and BKBID/BKE/BKP/AOE bits in TIMx_BDTR register can no longer be written. (value: 1)
     *          - B_0x2: LOCK Level 2 = LOCK Level 1 + CC Polarity bits (CCxP/CCxNP bits in TIMx_CCER register, as long as the related channel is configured in output through the CCxS bits) as well as OSSR and OSSI bits can no longer be written. (value: 2)
     *          - B_0x3: LOCK Level 3 = LOCK Level 2 + CC Control bits (OCxM and OCxPE bits in TIMx_CCMRx registers, as long as the related channel is configured in output through the CCxS bits) can no longer be written. (value: 3)
     */
        /** @brief LOCK OFF - No bit is write protected */
    constexpr std::uint32_t TIM16_BDTR_LOCK_B_0x0 = 0;
        /** @brief LOCK Level 1 = DTG bits in TIMx_BDTR register, OISx and OISxN bits in TIMx_CR2 register and BKBID/BKE/BKP/AOE bits in TIMx_BDTR register can no longer be written. */
    constexpr std::uint32_t TIM16_BDTR_LOCK_B_0x1 = 1;
        /** @brief LOCK Level 2 = LOCK Level 1 + CC Polarity bits (CCxP/CCxNP bits in TIMx_CCER register, as long as the related channel is configured in output through the CCxS bits) as well as OSSR and OSSI bits can no longer be written. */
    constexpr std::uint32_t TIM16_BDTR_LOCK_B_0x2 = 2;
        /** @brief LOCK Level 3 = LOCK Level 2 + CC Control bits (OCxM and OCxPE bits in TIMx_CCMRx registers, as long as the related channel is configured in output through the CCxS bits) can no longer be written. */
    constexpr std::uint32_t TIM16_BDTR_LOCK_B_0x3 = 3;

    /** @brief Off-state selection for Idle mode */
    using TIM16_BDTR_OSSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When inactive, tim_oc1/tim_oc1n outputs are disabled (tim_oc1/tim_oc1n enable output signal=0) (value: 0)
     *          - B_0x1: When inactive, tim_oc1/tim_oc1n outputs are forced first with their idle level as soon as CC1E=1 or CC1NE=1. (value: 1)
     */
        /** @brief When inactive, tim_oc1/tim_oc1n outputs are disabled (tim_oc1/tim_oc1n enable output signal=0) */
    constexpr std::uint32_t TIM16_BDTR_OSSI_B_0x0 = 0;
        /** @brief When inactive, tim_oc1/tim_oc1n outputs are forced first with their idle level as soon as CC1E=1 or CC1NE=1. */
    constexpr std::uint32_t TIM16_BDTR_OSSI_B_0x1 = 1;

    /** @brief Off-state selection for Run mode */
    using TIM16_BDTR_OSSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When inactive, tim_oc1/tim_oc1n outputs are disabled (the timer releases the output control which is taken over by the GPIO, which forces a Hi-Z state) (value: 0)
     *          - B_0x1: When inactive, tim_oc1/tim_oc1n outputs are enabled with their inactive level as soon as CC1E=1 or CC1NE=1 (the output is still controlled by the timer). (value: 1)
     */
        /** @brief When inactive, tim_oc1/tim_oc1n outputs are disabled (the timer releases the output control which is taken over by the GPIO, which forces a Hi-Z state) */
    constexpr std::uint32_t TIM16_BDTR_OSSR_B_0x0 = 0;
        /** @brief When inactive, tim_oc1/tim_oc1n outputs are enabled with their inactive level as soon as CC1E=1 or CC1NE=1 (the output is still controlled by the timer). */
    constexpr std::uint32_t TIM16_BDTR_OSSR_B_0x1 = 1;

    /** @brief Break enable */
    using TIM16_BDTR_BKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break inputs (tim_brk and tim_sys_brk event) disabled (value: 0)
     */
        /** @brief Break inputs (tim_brk and tim_sys_brk event) disabled */
    constexpr std::uint32_t TIM16_BDTR_BKE_B_0x0 = 0;

    /** @brief Break polarity */
    using TIM16_BDTR_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break input tim_brk is active low (value: 0)
     *          - B_0x1: Break input tim_brk is active high (value: 1)
     */
        /** @brief Break input tim_brk is active low */
    constexpr std::uint32_t TIM16_BDTR_BKP_B_0x0 = 0;
        /** @brief Break input tim_brk is active high */
    constexpr std::uint32_t TIM16_BDTR_BKP_B_0x1 = 1;

    /** @brief Automatic output enable */
    using TIM16_BDTR_AOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MOE can be set only by software (value: 0)
     *          - B_0x1: MOE can be set by software or automatically at the next update event (if the tim_brk input is not active) (value: 1)
     */
        /** @brief MOE can be set only by software */
    constexpr std::uint32_t TIM16_BDTR_AOE_B_0x0 = 0;
        /** @brief MOE can be set by software or automatically at the next update event (if the tim_brk input is not active) */
    constexpr std::uint32_t TIM16_BDTR_AOE_B_0x1 = 1;

    /** @brief Main output enable */
    using TIM16_BDTR_MOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_oc1 and tim_oc1n outputs are disabled or forced to idle state depending on the OSSI bit. (value: 0)
     *          - B_0x1: tim_oc1 and tim_oc1n outputs are enabled if their respective enable bits are set (CC1E, CC1NE in TIMx_CCER register) (value: 1)
     */
        /** @brief tim_oc1 and tim_oc1n outputs are disabled or forced to idle state depending on the OSSI bit. */
    constexpr std::uint32_t TIM16_BDTR_MOE_B_0x0 = 0;
        /** @brief tim_oc1 and tim_oc1n outputs are enabled if their respective enable bits are set (CC1E, CC1NE in TIMx_CCER register) */
    constexpr std::uint32_t TIM16_BDTR_MOE_B_0x1 = 1;

    /** @brief Break filter */
    using TIM16_BDTR_BKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No filter, tim_brk acts asynchronously (value: 0)
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
        /** @brief No filter, tim_brk acts asynchronously */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0x0 = 0;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=2 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0x1 = 1;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=4 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0x2 = 2;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=8 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0x3 = 3;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=6 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0x4 = 4;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0x5 = 5;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0x6 = 6;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0x7 = 7;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0x8 = 8;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0x9 = 9;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0xA = 10;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0xB = 11;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0xC = 12;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0xD = 13;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0xE = 14;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 */
    constexpr std::uint32_t TIM16_BDTR_BKF_B_0xF = 15;

    /** @brief Break Disarm */
    using TIM16_BDTR_BKDSRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break input tim_brk is armed (value: 0)
     *          - B_0x1: Break input tim_brk is disarmed (value: 1)
     */
        /** @brief Break input tim_brk is armed */
    constexpr std::uint32_t TIM16_BDTR_BKDSRM_B_0x0 = 0;
        /** @brief Break input tim_brk is disarmed */
    constexpr std::uint32_t TIM16_BDTR_BKDSRM_B_0x1 = 1;

    /** @brief Break Bidirectional */
    using TIM16_BDTR_BKBID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break input tim_brk in input mode (value: 0)
     *          - B_0x1: Break input tim_brk in bidirectional mode (value: 1)
     */
        /** @brief Break input tim_brk in input mode */
    constexpr std::uint32_t TIM16_BDTR_BKBID_B_0x0 = 0;
        /** @brief Break input tim_brk in bidirectional mode */
    constexpr std::uint32_t TIM16_BDTR_BKBID_B_0x1 = 1;

    /** @brief TIM16 timer deadtime register 2 */
    using TIM16_DTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dead-time falling edge generator setup */
    using TIM16_DTR2_DTGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Deadtime asymmetric enable */
    using TIM16_DTR2_DTAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Deadtime on rising and falling edges are identical, and defined with DTG[7:0] register (value: 0)
     *          - B_0x1: Deadtime on rising edge is defined with DTG[7:0] register and deadtime on falling edge is defined with DTGF[7:0] bits. (value: 1)
     */
        /** @brief Deadtime on rising and falling edges are identical, and defined with DTG[7:0] register */
    constexpr std::uint32_t TIM16_DTR2_DTAE_B_0x0 = 0;
        /** @brief Deadtime on rising edge is defined with DTG[7:0] register and deadtime on falling edge is defined with DTGF[7:0] bits. */
    constexpr std::uint32_t TIM16_DTR2_DTAE_B_0x1 = 1;

    /** @brief Deadtime preload enable */
    using TIM16_DTR2_DTPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Deadtime value is not preloaded (value: 0)
     *          - B_0x1: Deadtime value preload is enabled (value: 1)
     */
        /** @brief Deadtime value is not preloaded */
    constexpr std::uint32_t TIM16_DTR2_DTPE_B_0x0 = 0;
        /** @brief Deadtime value preload is enabled */
    constexpr std::uint32_t TIM16_DTR2_DTPE_B_0x1 = 1;

    /** @brief TIM16 input selection register */
    using TIM16_TISEL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief selects tim_ti1_in[15:0] input */
    using TIM16_TISEL_TI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_CH1 input (tim_ti1_in0) (value: 0)
     *          - B_0x1: tim_ti1_in1 (value: 1)
     *          - B_0xF: tim_ti1_in15 (value: 15)
     */
        /** @brief TIMx_CH1 input (tim_ti1_in0) */
    constexpr std::uint32_t TIM16_TISEL_TI1SEL_B_0x0 = 0;
        /** @brief tim_ti1_in1 */
    constexpr std::uint32_t TIM16_TISEL_TI1SEL_B_0x1 = 1;
        /** @brief tim_ti1_in15 */
    constexpr std::uint32_t TIM16_TISEL_TI1SEL_B_0xF = 15;

    /** @brief TIM16 alternate function register 1 */
    using TIM16_AF1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMx_BKIN input enable */
    using TIM16_AF1_BKINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_BKIN input disabled (value: 0)
     *          - B_0x1: TIMx_BKIN input enabled (value: 1)
     */
        /** @brief TIMx_BKIN input disabled */
    constexpr std::uint32_t TIM16_AF1_BKINE_B_0x0 = 0;
        /** @brief TIMx_BKIN input enabled */
    constexpr std::uint32_t TIM16_AF1_BKINE_B_0x1 = 1;

    /** @brief tim_brk_cmp1 enable */
    using TIM16_AF1_BKCMP1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp1 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp1 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp1 input disabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP1E_B_0x0 = 0;
        /** @brief tim_brk_cmp1 input enabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP1E_B_0x1 = 1;

    /** @brief tim_brk_cmp2 enable */
    using TIM16_AF1_BKCMP2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp2 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp2 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp2 input disabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP2E_B_0x0 = 0;
        /** @brief tim_brk_cmp2 input enabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP2E_B_0x1 = 1;

    /** @brief tim_brk_cmp3 enable */
    using TIM16_AF1_BKCMP3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp3 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp3 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp3 input disabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP3E_B_0x0 = 0;
        /** @brief tim_brk_cmp3 input enabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP3E_B_0x1 = 1;

    /** @brief tim_brk_cmp4 enable */
    using TIM16_AF1_BKCMP4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp4 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp4 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp4 input disabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP4E_B_0x0 = 0;
        /** @brief tim_brk_cmp4 input enabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP4E_B_0x1 = 1;

    /** @brief tim_brk_cmp5 enable */
    using TIM16_AF1_BKCMP5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp5 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp5 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp5 input disabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP5E_B_0x0 = 0;
        /** @brief tim_brk_cmp5 input enabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP5E_B_0x1 = 1;

    /** @brief tim_brk_cmp6 enable */
    using TIM16_AF1_BKCMP6E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp6 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp6 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp6 input disabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP6E_B_0x0 = 0;
        /** @brief tim_brk_cmp6 input enabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP6E_B_0x1 = 1;

    /** @brief tim_brk_cmp7 enable */
    using TIM16_AF1_BKCMP7E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp7 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp7 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp7 input disabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP7E_B_0x0 = 0;
        /** @brief tim_brk_cmp7 input enabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP7E_B_0x1 = 1;

    /** @brief tim_brk_cmp8 enable */
    using TIM16_AF1_BKCMP8E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp8 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp8 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp8 input disabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP8E_B_0x0 = 0;
        /** @brief tim_brk_cmp8 input enabled */
    constexpr std::uint32_t TIM16_AF1_BKCMP8E_B_0x1 = 1;

    /** @brief TIMx_BKIN input polarity */
    using TIM16_AF1_BKINP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_BKIN input is active high (value: 0)
     *          - B_0x1: TIMx_BKIN input is active low (value: 1)
     */
        /** @brief TIMx_BKIN input is active high */
    constexpr std::uint32_t TIM16_AF1_BKINP_B_0x0 = 0;
        /** @brief TIMx_BKIN input is active low */
    constexpr std::uint32_t TIM16_AF1_BKINP_B_0x1 = 1;

    /** @brief tim_brk_cmp1 input polarity */
    using TIM16_AF1_BKCMP1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp1 input is active high (value: 0)
     *          - B_0x1: tim_brk_cmp1 input is active low (value: 1)
     */
        /** @brief tim_brk_cmp1 input is active high */
    constexpr std::uint32_t TIM16_AF1_BKCMP1P_B_0x0 = 0;
        /** @brief tim_brk_cmp1 input is active low */
    constexpr std::uint32_t TIM16_AF1_BKCMP1P_B_0x1 = 1;

    /** @brief tim_brk_cmp2 input polarity */
    using TIM16_AF1_BKCMP2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp2 input is active high (value: 0)
     *          - B_0x1: tim_brk_cmp2 input is active low (value: 1)
     */
        /** @brief tim_brk_cmp2 input is active high */
    constexpr std::uint32_t TIM16_AF1_BKCMP2P_B_0x0 = 0;
        /** @brief tim_brk_cmp2 input is active low */
    constexpr std::uint32_t TIM16_AF1_BKCMP2P_B_0x1 = 1;

    /** @brief tim_brk_cmp3 input polarity */
    using TIM16_AF1_BKCMP3P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp3 input is active high (value: 0)
     *          - B_0x1: tim_brk_cmp3 input is active low (value: 1)
     */
        /** @brief tim_brk_cmp3 input is active high */
    constexpr std::uint32_t TIM16_AF1_BKCMP3P_B_0x0 = 0;
        /** @brief tim_brk_cmp3 input is active low */
    constexpr std::uint32_t TIM16_AF1_BKCMP3P_B_0x1 = 1;

    /** @brief tim_brk_cmp4 input polarity */
    using TIM16_AF1_BKCMP4P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp4 input is active high (value: 0)
     *          - B_0x1: tim_brk_cmp4 input is active low (value: 1)
     */
        /** @brief tim_brk_cmp4 input is active high */
    constexpr std::uint32_t TIM16_AF1_BKCMP4P_B_0x0 = 0;
        /** @brief tim_brk_cmp4 input is active low */
    constexpr std::uint32_t TIM16_AF1_BKCMP4P_B_0x1 = 1;

    /** @brief TIM16 alternate function register 2 */
    using TIM16_AF2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_ocref_clr source selection */
    using TIM16_AF2_OCRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ocref_clr0 (value: 0)
     *          - B_0x1: tim_ocref_clr1 (value: 1)
     *          - B_0x2: tim_ocref_clr2 (value: 2)
     *          - B_0x3: tim_ocref_clr3 (value: 3)
     *          - B_0x4: tim_ocref_clr4 (value: 4)
     *          - B_0x5: tim_ocref_clr5 (value: 5)
     *          - B_0x6: tim_ocref_clr6 (value: 6)
     *          - B_0x7: tim_ocref_clr7 (value: 7)
     */
        /** @brief tim_ocref_clr0 */
    constexpr std::uint32_t TIM16_AF2_OCRSEL_B_0x0 = 0;
        /** @brief tim_ocref_clr1 */
    constexpr std::uint32_t TIM16_AF2_OCRSEL_B_0x1 = 1;
        /** @brief tim_ocref_clr2 */
    constexpr std::uint32_t TIM16_AF2_OCRSEL_B_0x2 = 2;
        /** @brief tim_ocref_clr3 */
    constexpr std::uint32_t TIM16_AF2_OCRSEL_B_0x3 = 3;
        /** @brief tim_ocref_clr4 */
    constexpr std::uint32_t TIM16_AF2_OCRSEL_B_0x4 = 4;
        /** @brief tim_ocref_clr5 */
    constexpr std::uint32_t TIM16_AF2_OCRSEL_B_0x5 = 5;
        /** @brief tim_ocref_clr6 */
    constexpr std::uint32_t TIM16_AF2_OCRSEL_B_0x6 = 6;
        /** @brief tim_ocref_clr7 */
    constexpr std::uint32_t TIM16_AF2_OCRSEL_B_0x7 = 7;

    /** @brief TIM16 option register 1 */
    using TIM16_OR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE Divided by 32 enable */
    using TIM16_OR1_HSE32EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSE divided by 32 disabled (value: 0)
     *          - B_0x1: HSE divided by 32 enabled (value: 1)
     */
        /** @brief HSE divided by 32 disabled */
    constexpr std::uint32_t TIM16_OR1_HSE32EN_B_0x0 = 0;
        /** @brief HSE divided by 32 enabled */
    constexpr std::uint32_t TIM16_OR1_HSE32EN_B_0x1 = 1;

    /** @brief TIM16 DMA control register */
    using TIM16_DCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA base address */
    using TIM16_DCR_DBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_CR1, (value: 0)
     *          - B_0x1: TIMx_CR2, (value: 1)
     *          - B_0x2: TIMx_SMCR, (value: 2)
     */
        /** @brief TIMx_CR1, */
    constexpr std::uint32_t TIM16_DCR_DBA_B_0x0 = 0;
        /** @brief TIMx_CR2, */
    constexpr std::uint32_t TIM16_DCR_DBA_B_0x1 = 1;
        /** @brief TIMx_SMCR, */
    constexpr std::uint32_t TIM16_DCR_DBA_B_0x2 = 2;

    /** @brief DMA burst length */
    using TIM16_DCR_DBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 transfer, (value: 0)
     *          - B_0x1: 2 transfers, (value: 1)
     *          - B_0x2: 3 transfers, (value: 2)
     *          - B_0x11: 18 transfers. (value: 17)
     */
        /** @brief 1 transfer, */
    constexpr std::uint32_t TIM16_DCR_DBL_B_0x0 = 0;
        /** @brief 2 transfers, */
    constexpr std::uint32_t TIM16_DCR_DBL_B_0x1 = 1;
        /** @brief 3 transfers, */
    constexpr std::uint32_t TIM16_DCR_DBL_B_0x2 = 2;
        /** @brief 18 transfers. */
    constexpr std::uint32_t TIM16_DCR_DBL_B_0x11 = 17;

    /** @brief TIM16/TIM17 DMA address for full transfer */
    using TIM16_DMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA register for burst accesses */
    using TIM16_DMAR_DMAB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
