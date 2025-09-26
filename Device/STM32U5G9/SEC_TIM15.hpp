/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U5G9_SEC_TIM15_HPP
#define EMBEDDED_PP_STM32U5G9_SEC_TIM15_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief General purpose timers */
namespace STM32U5G9::SEC_TIM15 {

    /** @brief control register 1 */
    using CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dithering enable */
    using CR1_DITHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UIF status bit remapping */
    using CR1_UIFREMAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock division */
    using CR1_CKD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto-reload preload enable */
    using CR1_ARPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief One-pulse mode */
    using CR1_OPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update request source */
    using CR1_URS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update disable */
    using CR1_UDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter enable */
    using CR1_CEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control register 2 */
    using CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output idle state 2 (OC2 */
    using CR2_OIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output Idle state 1 */
    using CR2_OIS1N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output Idle state 1 */
    using CR2_OIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TI1 selection */
    using CR2_TI1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master mode selection */
    using CR2_MMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare DMA */
    using CR2_CCDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare control update */
    using CR2_CCUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare preloaded */
    using CR2_CCPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief slave mode control register */
    using SMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger selection */
    using SMCR_TS_4_3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Trigger 0 (tim_itr0) (value: 0)
     *          - B_0x1: Internal Trigger 1 (tim_itr1) (value: 1)
     *          - B_0x2: Internal Trigger 2 (tim_itr2) (value: 2)
     *          - B_0x3: Internal Trigger 3 (tim_itr3) (value: 3)
     */
        /** @brief Internal Trigger 0 (tim_itr0) */
    constexpr std::uint32_t SMCR_TS_4_3_B_0x0 = 0;
        /** @brief Internal Trigger 1 (tim_itr1) */
    constexpr std::uint32_t SMCR_TS_4_3_B_0x1 = 1;
        /** @brief Internal Trigger 2 (tim_itr2) */
    constexpr std::uint32_t SMCR_TS_4_3_B_0x2 = 2;
        /** @brief Internal Trigger 3 (tim_itr3) */
    constexpr std::uint32_t SMCR_TS_4_3_B_0x3 = 3;

    /** @brief Slave mode selection */
    using SMCR_SMS_3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Slave mode disabled - if CEN = 1' then the prescaler is clocked directly by the internal clock. (value: 0)
     *          - B_0x1: Quadrature encoder mode 1, x2 mode- Counter counts up/down on tim_ti1fp1 edge depending on tim_ti2fp2 level. (value: 1)
     */
        /** @brief Slave mode disabled - if CEN = 1' then the prescaler is clocked directly by the internal clock. */
    constexpr std::uint32_t SMCR_SMS_3_B_0x0 = 0;
        /** @brief Quadrature encoder mode 1, x2 mode- Counter counts up/down on tim_ti1fp1 edge depending on tim_ti2fp2 level. */
    constexpr std::uint32_t SMCR_SMS_3_B_0x1 = 1;

    /** @brief Capture/Compare 1 DMA request */
    using SMCR_CC1DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master/slave mode */
    using SMCR_MSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger selection */
    using SMCR_TS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Trigger 0 (tim_itr0) (value: 0)
     *          - B_0x1: Internal Trigger 1 (tim_itr1) (value: 1)
     *          - B_0x2: Internal Trigger 2 (tim_itr2) (value: 2)
     *          - B_0x3: Internal Trigger 3 (tim_itr3) (value: 3)
     *          - B_0x4: tim_ti1 Edge Detector (tim_ti1f_ed) (value: 4)
     *          - B_0x5: Filtered Timer Input 1 (tim_ti1fp1) (value: 5)
     *          - B_0x6: Filtered Timer Input 2 (tim_ti2fp2) (value: 6)
     *          - B_0x7: External Trigger input (tim_etrf) (value: 7)
     */
        /** @brief Internal Trigger 0 (tim_itr0) */
    constexpr std::uint32_t SMCR_TS_B_0x0 = 0;
        /** @brief Internal Trigger 1 (tim_itr1) */
    constexpr std::uint32_t SMCR_TS_B_0x1 = 1;
        /** @brief Internal Trigger 2 (tim_itr2) */
    constexpr std::uint32_t SMCR_TS_B_0x2 = 2;
        /** @brief Internal Trigger 3 (tim_itr3) */
    constexpr std::uint32_t SMCR_TS_B_0x3 = 3;
        /** @brief tim_ti1 Edge Detector (tim_ti1f_ed) */
    constexpr std::uint32_t SMCR_TS_B_0x4 = 4;
        /** @brief Filtered Timer Input 1 (tim_ti1fp1) */
    constexpr std::uint32_t SMCR_TS_B_0x5 = 5;
        /** @brief Filtered Timer Input 2 (tim_ti2fp2) */
    constexpr std::uint32_t SMCR_TS_B_0x6 = 6;
        /** @brief External Trigger input (tim_etrf) */
    constexpr std::uint32_t SMCR_TS_B_0x7 = 7;

    /** @brief Slave mode selection */
    using SMCR_SMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Slave mode disabled - if CEN = 1' then the prescaler is clocked directly by the internal clock. (value: 0)
     *          - B_0x1: Quadrature encoder mode 1, x2 mode- Counter counts up/down on tim_ti1fp1 edge depending on tim_ti2fp2 level. (value: 1)
     *          - B_0x2: Quadrature encoder mode 2, x2 mode - Counter counts up/down on tim_ti2fp2 edge depending on tim_ti1fp1 level. (value: 2)
     *          - B_0x3: Quadrature encoder mode 3, x4 mode - Counter counts up/down on both tim_ti1fp1 and tim_ti2fp2 edges depending on the level of the other input. (value: 3)
     *          - B_0x4: Reset Mode - Rising edge of the selected trigger input (tim_trgi) reinitializes the counter and generates an update of the registers. (value: 4)
     *          - B_0x5: Gated Mode - The counter clock is enabled when the trigger input (tim_trgi) is high. (value: 5)
     *          - B_0x6: Trigger Mode - The counter starts at a rising edge of the trigger tim_trgi (but it is not reset). (value: 6)
     *          - B_0x7: External Clock Mode 1 - Rising edges of the selected trigger (tim_trgi) clock the counter. (value: 7)
     */
        /** @brief Slave mode disabled - if CEN = 1' then the prescaler is clocked directly by the internal clock. */
    constexpr std::uint32_t SMCR_SMS_B_0x0 = 0;
        /** @brief Quadrature encoder mode 1, x2 mode- Counter counts up/down on tim_ti1fp1 edge depending on tim_ti2fp2 level. */
    constexpr std::uint32_t SMCR_SMS_B_0x1 = 1;
        /** @brief Quadrature encoder mode 2, x2 mode - Counter counts up/down on tim_ti2fp2 edge depending on tim_ti1fp1 level. */
    constexpr std::uint32_t SMCR_SMS_B_0x2 = 2;
        /** @brief Quadrature encoder mode 3, x4 mode - Counter counts up/down on both tim_ti1fp1 and tim_ti2fp2 edges depending on the level of the other input. */
    constexpr std::uint32_t SMCR_SMS_B_0x3 = 3;
        /** @brief Reset Mode - Rising edge of the selected trigger input (tim_trgi) reinitializes the counter and generates an update of the registers. */
    constexpr std::uint32_t SMCR_SMS_B_0x4 = 4;
        /** @brief Gated Mode - The counter clock is enabled when the trigger input (tim_trgi) is high. */
    constexpr std::uint32_t SMCR_SMS_B_0x5 = 5;
        /** @brief Trigger Mode - The counter starts at a rising edge of the trigger tim_trgi (but it is not reset). */
    constexpr std::uint32_t SMCR_SMS_B_0x6 = 6;
        /** @brief External Clock Mode 1 - Rising edges of the selected trigger (tim_trgi) clock the counter. */
    constexpr std::uint32_t SMCR_SMS_B_0x7 = 7;

    /** @brief DMA/Interrupt enable register */
    using DIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger DMA request enable */
    using DIER_TDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COM DMA request enable */
    using DIER_COMDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 DMA request */
    using DIER_CC2DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 DMA request */
    using DIER_CC1DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update DMA request enable */
    using DIER_UDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break interrupt enable */
    using DIER_BIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger interrupt enable */
    using DIER_TIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COM interrupt enable */
    using DIER_COMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 interrupt */
    using DIER_CC2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 interrupt */
    using DIER_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt enable */
    using DIER_UIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief status register */
    using SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 overcapture */
    using SR_CC2OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 overcapture */
    using SR_CC1OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break interrupt flag */
    using SR_BIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger interrupt flag */
    using SR_TIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COM interrupt flag */
    using SR_COMIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 interrupt */
    using SR_CC2IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 interrupt */
    using SR_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt flag */
    using SR_UIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief event generation register */
    using EGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break generation */
    using EGR_BG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger generation */
    using EGR_TG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare control update */
    using EGR_COMG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 */
    using EGR_CC2G = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 */
    using EGR_CC1G = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update generation */
    using EGR_UG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief capture/compare mode register (output */
    using CCMR1_Output = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output Compare 2 mode - bit */
    using CCMR1_Output_OC2M_bit3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output Compare 1 mode */
    using CCMR1_Output_OC1M_bit3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output Compare 2 mode */
    using CCMR1_Output_OC2M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output Compare 2 preload */
    using CCMR1_Output_OC2PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 2 fast enable */
    using CCMR1_Output_OC2FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 */
    using CCMR1_Output_CC2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 1 clear enable */
    using CCMR1_Output_OC1CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output Compare 1 mode */
    using CCMR1_Output_OC1M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output Compare 1 preload */
    using CCMR1_Output_OC1PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output Compare 1 fast */
    using CCMR1_Output_OC1FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 */
    using CCMR1_Output_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief capture/compare mode register 1 (input */
    using CCMR1_Input = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 2 filter */
    using CCMR1_Input_IC2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 2 prescaler */
    using CCMR1_Input_IC2PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 */
    using CCMR1_Input_CC2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 1 filter */
    using CCMR1_Input_IC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 1 prescaler */
    using CCMR1_Input_IC1PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 */
    using CCMR1_Input_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief capture/compare enable */
    using CCER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 complementary output */
    using CCER_CC2NP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 output */
    using CCER_CC2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 output */
    using CCER_CC2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 output */
    using CCER_CC1NP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 complementary output */
    using CCER_CC1NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 output */
    using CCER_CC1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 output */
    using CCER_CC1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief counter */
    using CNT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UIF Copy */
    using CNT_UIFCPY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief counter value */
    using CNT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief prescaler */
    using PSC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler value */
    using PSC_PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief auto-reload register */
    using ARR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto-reload value */
    using ARR_ARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief repetition counter register */
    using RCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition counter value */
    using RCR_REP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief capture/compare register 1 */
    using CCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 1 value */
    using CCR1_CCR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief capture/compare register 2 */
    using CCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/Compare 2 value */
    using CCR2_CCR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief break and dead-time register */
    using BDTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break Bidirectional */
    using BDTR_BKBID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break Disarm */
    using BDTR_BKDSRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break filter */
    using BDTR_BKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Main output enable */
    using BDTR_MOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic output enable */
    using BDTR_AOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break polarity */
    using BDTR_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break enable */
    using BDTR_BKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Off-state selection for Run */
    using BDTR_OSSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Off-state selection for Idle */
    using BDTR_OSSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lock configuration */
    using BDTR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dead-time generator setup */
    using BDTR_DTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief timer deadtime register 2 */
    using DTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Deadtime preload enable */
    using DTR2_DTPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Deadtime asymmetric enable */
    using DTR2_DTAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dead-time falling edge generator setup */
    using DTR2_DTGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input selection register */
    using TISEL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief selects tim_ti2_in[0..15] input */
    using TISEL_TI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief selects tim_ti1_in[0..15] input */
    using TISEL_TI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief alternate function register 1 */
    using AF1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_brk_cmp4 input polarity */
    using AF1_BKCMP4P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_brk_cmp3 input polarity */
    using AF1_BKCMP3P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_brk_cmp2 input polarity */
    using AF1_BKCMP2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_brk_cmp1 input polarity */
    using AF1_BKCMP1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMx_BKIN input polarity */
    using AF1_BKINP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_brk_cmp7 enable */
    using AF1_BKCMP7E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_brk_cmp6 enable */
    using AF1_BKCMP6E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_brk_cmp5 enable */
    using AF1_BKCMP5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_brk_cmp4 enable */
    using AF1_BKCMP4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_brk_cmp3 enable */
    using AF1_BKCMP3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_brk_cmp2 enable */
    using AF1_BKCMP2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief tim_brk_cmp1 enable */
    using AF1_BKCMP1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMx_BKIN input enable */
    using AF1_BKINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief alternate function register 2 */
    using AF2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ocref_clr source selection */
    using AF2_OCRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA control register */
    using DCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA burst source selection */
    using DCR_DBSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA burst length */
    using DCR_DBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA base address */
    using DCR_DBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address for full transfer */
    using DMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA register for burst accesses */
    using DMAR_DMAB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
