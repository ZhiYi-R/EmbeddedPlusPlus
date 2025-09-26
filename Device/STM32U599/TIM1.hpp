/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U599_TIM1_HPP
#define EMBEDDED_PP_STM32U599_TIM1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Advanced-timers */
namespace STM32U599::TIM1 {

    /** @brief TIM1 control register 1 */
    using TIM1_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter enable */
    using TIM1_CR1_CEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: Counter enabled (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint16_t TIM1_CR1_CEN_B_0x0 = 0;
        /** @brief Counter enabled */
    constexpr std::uint16_t TIM1_CR1_CEN_B_0x1 = 1;

    /** @brief Update disable */
    using TIM1_CR1_UDIS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UEV enabled. (value: 0)
     *          - B_0x1: UEV disabled. (value: 1)
     */
        /** @brief UEV enabled. */
    constexpr std::uint16_t TIM1_CR1_UDIS_B_0x0 = 0;
        /** @brief UEV disabled. */
    constexpr std::uint16_t TIM1_CR1_UDIS_B_0x1 = 1;

    /** @brief Update request source */
    using TIM1_CR1_URS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any of the following events generate an update interrupt or DMA request if enabled. (value: 0)
     *          - B_0x1: Only counter overflow/underflow generates an update interrupt or DMA request if enabled. (value: 1)
     */
        /** @brief Any of the following events generate an update interrupt or DMA request if enabled. */
    constexpr std::uint16_t TIM1_CR1_URS_B_0x0 = 0;
        /** @brief Only counter overflow/underflow generates an update interrupt or DMA request if enabled. */
    constexpr std::uint16_t TIM1_CR1_URS_B_0x1 = 1;

    /** @brief One-pulse mode */
    using TIM1_CR1_OPM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter is not stopped at update event (value: 0)
     *          - B_0x1: Counter stops counting at the next update event (clearing the bit CEN) (value: 1)
     */
        /** @brief Counter is not stopped at update event */
    constexpr std::uint16_t TIM1_CR1_OPM_B_0x0 = 0;
        /** @brief Counter stops counting at the next update event (clearing the bit CEN) */
    constexpr std::uint16_t TIM1_CR1_OPM_B_0x1 = 1;

    /** @brief Direction */
    using TIM1_CR1_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter used as upcounter (value: 0)
     *          - B_0x1: Counter used as downcounter (value: 1)
     */
        /** @brief Counter used as upcounter */
    constexpr std::uint16_t TIM1_CR1_DIR_B_0x0 = 0;
        /** @brief Counter used as downcounter */
    constexpr std::uint16_t TIM1_CR1_DIR_B_0x1 = 1;

    /** @brief Center-aligned mode selection */
    using TIM1_CR1_CMS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Edge-aligned mode. (value: 0)
     *          - B_0x1: Center-aligned mode 1. (value: 1)
     *          - B_0x2: Center-aligned mode 2. (value: 2)
     *          - B_0x3: Center-aligned mode 3. (value: 3)
     */
        /** @brief Edge-aligned mode. */
    constexpr std::uint16_t TIM1_CR1_CMS_B_0x0 = 0;
        /** @brief Center-aligned mode 1. */
    constexpr std::uint16_t TIM1_CR1_CMS_B_0x1 = 1;
        /** @brief Center-aligned mode 2. */
    constexpr std::uint16_t TIM1_CR1_CMS_B_0x2 = 2;
        /** @brief Center-aligned mode 3. */
    constexpr std::uint16_t TIM1_CR1_CMS_B_0x3 = 3;

    /** @brief Auto-reload preload enable */
    using TIM1_CR1_ARPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_ARR register is not buffered (value: 0)
     *          - B_0x1: TIMx_ARR register is buffered (value: 1)
     */
        /** @brief TIMx_ARR register is not buffered */
    constexpr std::uint16_t TIM1_CR1_ARPE_B_0x0 = 0;
        /** @brief TIMx_ARR register is buffered */
    constexpr std::uint16_t TIM1_CR1_ARPE_B_0x1 = 1;

    /** @brief Clock division */
    using TIM1_CR1_CKD = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tless thansub>DTSless than/sub>=tless thansub>tim_ker_ckless than/sub> (value: 0)
     *          - B_0x1: tless thansub>DTSless than/sub>=2*tless thansub>tim_ker_ckless than/sub> (value: 1)
     *          - B_0x2: tless thansub>DTSless than/sub>=4*tless thansub>tim_ker_ckless than/sub> (value: 2)
     */
        /** @brief tless thansub>DTSless than/sub>=tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM1_CR1_CKD_B_0x0 = 0;
        /** @brief tless thansub>DTSless than/sub>=2*tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM1_CR1_CKD_B_0x1 = 1;
        /** @brief tless thansub>DTSless than/sub>=4*tless thansub>tim_ker_ckless than/sub> */
    constexpr std::uint16_t TIM1_CR1_CKD_B_0x2 = 2;

    /** @brief UIF status bit remapping */
    using TIM1_CR1_UIFREMAP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No remapping. (value: 0)
     *          - B_0x1: Remapping enabled. (value: 1)
     */
        /** @brief No remapping. */
    constexpr std::uint16_t TIM1_CR1_UIFREMAP_B_0x0 = 0;
        /** @brief Remapping enabled. */
    constexpr std::uint16_t TIM1_CR1_UIFREMAP_B_0x1 = 1;

    /** @brief Dithering enable */
    using TIM1_CR1_DITHEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dithering disabled (value: 0)
     *          - B_0x1: Dithering enabled (value: 1)
     */
        /** @brief Dithering disabled */
    constexpr std::uint16_t TIM1_CR1_DITHEN_B_0x0 = 0;
        /** @brief Dithering enabled */
    constexpr std::uint16_t TIM1_CR1_DITHEN_B_0x1 = 1;

    /** @brief TIM1 control register 2 */
    using TIM1_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare preloaded control */
    using TIM1_CR2_CCPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCxE, CCxNE and OCxM bits are not preloaded (value: 0)
     *          - B_0x1: CCxE, CCxNE and OCxM bits are preloaded, after having been written, they are updated only when a commutation event (COM) occurs (COMG bit set or rising edge detected on tim_trgi, depending on the CCUS bit). (value: 1)
     */
        /** @brief CCxE, CCxNE and OCxM bits are not preloaded */
    constexpr std::uint32_t TIM1_CR2_CCPC_B_0x0 = 0;
        /** @brief CCxE, CCxNE and OCxM bits are preloaded, after having been written, they are updated only when a commutation event (COM) occurs (COMG bit set or rising edge detected on tim_trgi, depending on the CCUS bit). */
    constexpr std::uint32_t TIM1_CR2_CCPC_B_0x1 = 1;

    /** @brief Capture/compare control update selection */
    using TIM1_CR2_CCUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit only (value: 0)
     *          - B_0x1: When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit or when an rising edge occurs on tim_trgi (value: 1)
     */
        /** @brief When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit only */
    constexpr std::uint32_t TIM1_CR2_CCUS_B_0x0 = 0;
        /** @brief When capture/compare control bits are preloaded (CCPC=1), they are updated by setting the COMG bit or when an rising edge occurs on tim_trgi */
    constexpr std::uint32_t TIM1_CR2_CCUS_B_0x1 = 1;

    /** @brief Capture/compare DMA selection */
    using TIM1_CR2_CCDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CCx DMA request sent when CCx event occurs (value: 0)
     *          - B_0x1: CCx DMA requests sent when update event occurs (value: 1)
     */
        /** @brief CCx DMA request sent when CCx event occurs */
    constexpr std::uint32_t TIM1_CR2_CCDS_B_0x0 = 0;
        /** @brief CCx DMA requests sent when update event occurs */
    constexpr std::uint32_t TIM1_CR2_CCDS_B_0x1 = 1;

    /** @brief MMS[2:0]: Master mode selection */
    using TIM1_CR2_MMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset - the UG bit from the TIMx_EGR register is used as trigger output (tim_trgo). (value: 0)
     *          - B_0x1: Enable - the Counter Enable signal CNT_EN is used as trigger output (tim_trgo). (value: 1)
     *          - B_0x2: Update - The update event is selected as trigger output (tim_trgo). (value: 2)
     *          - B_0x3: Compare Pulse - The trigger output send a positive pulse when the CC1IF flag is to be set (even if it was already high), as soon as a capture or a compare match occurred. (value: 3)
     *          - B_0x4: Compare - tim_oc1refc signal is used as trigger output (tim_trgo) (value: 4)
     *          - B_0x5: Compare - tim_oc2refc signal is used as trigger output (tim_trgo) (value: 5)
     *          - B_0x6: Compare - tim_oc3refc signal is used as trigger output (tim_trgo) (value: 6)
     *          - B_0x7: Compare - tim_oc4refc signal is used as trigger output (tim_trgo) (value: 7)
     */
        /** @brief Reset - the UG bit from the TIMx_EGR register is used as trigger output (tim_trgo). */
    constexpr std::uint32_t TIM1_CR2_MMS_B_0x0 = 0;
        /** @brief Enable - the Counter Enable signal CNT_EN is used as trigger output (tim_trgo). */
    constexpr std::uint32_t TIM1_CR2_MMS_B_0x1 = 1;
        /** @brief Update - The update event is selected as trigger output (tim_trgo). */
    constexpr std::uint32_t TIM1_CR2_MMS_B_0x2 = 2;
        /** @brief Compare Pulse - The trigger output send a positive pulse when the CC1IF flag is to be set (even if it was already high), as soon as a capture or a compare match occurred. */
    constexpr std::uint32_t TIM1_CR2_MMS_B_0x3 = 3;
        /** @brief Compare - tim_oc1refc signal is used as trigger output (tim_trgo) */
    constexpr std::uint32_t TIM1_CR2_MMS_B_0x4 = 4;
        /** @brief Compare - tim_oc2refc signal is used as trigger output (tim_trgo) */
    constexpr std::uint32_t TIM1_CR2_MMS_B_0x5 = 5;
        /** @brief Compare - tim_oc3refc signal is used as trigger output (tim_trgo) */
    constexpr std::uint32_t TIM1_CR2_MMS_B_0x6 = 6;
        /** @brief Compare - tim_oc4refc signal is used as trigger output (tim_trgo) */
    constexpr std::uint32_t TIM1_CR2_MMS_B_0x7 = 7;

    /** @brief tim_ti1 selection */
    using TIM1_CR2_TI1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The tim_ti1_in[15:0] multiplexer output is connected to tim_ti1 input (value: 0)
     *          - B_0x1: tim_ti1_in[15:0], tim_ti2_in[15:0] and tim_ti3_in[15:0] multiplexers outputs are XORed and connected to the tim_ti1 input (value: 1)
     */
        /** @brief The tim_ti1_in[15:0] multiplexer output is connected to tim_ti1 input */
    constexpr std::uint32_t TIM1_CR2_TI1S_B_0x0 = 0;
        /** @brief tim_ti1_in[15:0], tim_ti2_in[15:0] and tim_ti3_in[15:0] multiplexers outputs are XORed and connected to the tim_ti1 input */
    constexpr std::uint32_t TIM1_CR2_TI1S_B_0x1 = 1;

    /** @brief Output idle state 1 (tim_oc1 output) */
    using TIM1_CR2_OIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_oc1=0 (after a dead-time) when MOE=0 (value: 0)
     *          - B_0x1: tim_oc1=1 (after a dead-time) when MOE=0 (value: 1)
     */
        /** @brief tim_oc1=0 (after a dead-time) when MOE=0 */
    constexpr std::uint32_t TIM1_CR2_OIS1_B_0x0 = 0;
        /** @brief tim_oc1=1 (after a dead-time) when MOE=0 */
    constexpr std::uint32_t TIM1_CR2_OIS1_B_0x1 = 1;

    /** @brief Output idle state 1 (tim_oc1n output) */
    using TIM1_CR2_OIS1N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_oc1n=0 after a dead-time when MOE=0 (value: 0)
     *          - B_0x1: tim_oc1n=1 after a dead-time when MOE=0 (value: 1)
     */
        /** @brief tim_oc1n=0 after a dead-time when MOE=0 */
    constexpr std::uint32_t TIM1_CR2_OIS1N_B_0x0 = 0;
        /** @brief tim_oc1n=1 after a dead-time when MOE=0 */
    constexpr std::uint32_t TIM1_CR2_OIS1N_B_0x1 = 1;

    /** @brief Output idle state 2 (tim_oc2 output) */
    using TIM1_CR2_OIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output idle state 2 (tim_oc2n output) */
    using TIM1_CR2_OIS2N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output idle state 3 (tim_oc3n output) */
    using TIM1_CR2_OIS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output idle state 3 (tim_oc3n output) */
    using TIM1_CR2_OIS3N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output idle state 4 (tim_oc4 output) */
    using TIM1_CR2_OIS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output idle state 4 (tim_oc4n output) */
    using TIM1_CR2_OIS4N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output idle state 5 (tim_oc5 output) */
    using TIM1_CR2_OIS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output idle state 6 (tim_oc6 output) */
    using TIM1_CR2_OIS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master mode selection 2 */
    using TIM1_CR2_MMS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset - the UG bit from the TIMx_EGR register is used as trigger output (tim_trgo2). (value: 0)
     *          - B_0x1: Enable - the Counter Enable signal CNT_EN is used as trigger output (tim_trgo2). (value: 1)
     *          - B_0x2: Update - the update event is selected as trigger output (tim_trgo2). (value: 2)
     *          - B_0x3: Compare pulse - the trigger output sends a positive pulse when the CC1IF flag is to be set (even if it was already high), as soon as a capture or compare match occurs (tim_trgo2). (value: 3)
     *          - B_0x4: Compare - tim_oc1refc signal is used as trigger output (tim_trgo2) (value: 4)
     *          - B_0x5: Compare - tim_oc2refc signal is used as trigger output (tim_trgo2) (value: 5)
     *          - B_0x6: Compare - tim_oc3refc signal is used as trigger output (tim_trgo2) (value: 6)
     *          - B_0x7: Compare - tim_oc4refc signal is used as trigger output (tim_trgo2) (value: 7)
     *          - B_0x8: Compare - tim_oc5refc signal is used as trigger output (tim_trgo2) (value: 8)
     *          - B_0x9: Compare - tim_oc6refc signal is used as trigger output (tim_trgo2) (value: 9)
     *          - B_0xA: Compare Pulse - tim_oc4refc rising or falling edges generate pulses on tim_trgo2 (value: 10)
     *          - B_0xB: Compare pulse - tim_oc6refc rising or falling edges generate pulses on tim_trgo2 (value: 11)
     *          - B_0xC: Compare pulse - tim_oc4refc or tim_oc6refc rising edges generate pulses on tim_trgo2 (value: 12)
     *          - B_0xD: Compare pulse - tim_oc4refc rising or tim_oc6refc falling edges generate pulses on tim_trgo2 (value: 13)
     *          - B_0xE: Compare pulse - tim_oc5refc or tim_oc6refc rising edges generate pulses on tim_trgo2 (value: 14)
     *          - B_0xF: Compare pulse - tim_oc5refc rising or tim_oc6refc falling edges generate pulses on tim_trgo2 (value: 15)
     */
        /** @brief Reset - the UG bit from the TIMx_EGR register is used as trigger output (tim_trgo2). */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0x0 = 0;
        /** @brief Enable - the Counter Enable signal CNT_EN is used as trigger output (tim_trgo2). */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0x1 = 1;
        /** @brief Update - the update event is selected as trigger output (tim_trgo2). */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0x2 = 2;
        /** @brief Compare pulse - the trigger output sends a positive pulse when the CC1IF flag is to be set (even if it was already high), as soon as a capture or compare match occurs (tim_trgo2). */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0x3 = 3;
        /** @brief Compare - tim_oc1refc signal is used as trigger output (tim_trgo2) */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0x4 = 4;
        /** @brief Compare - tim_oc2refc signal is used as trigger output (tim_trgo2) */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0x5 = 5;
        /** @brief Compare - tim_oc3refc signal is used as trigger output (tim_trgo2) */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0x6 = 6;
        /** @brief Compare - tim_oc4refc signal is used as trigger output (tim_trgo2) */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0x7 = 7;
        /** @brief Compare - tim_oc5refc signal is used as trigger output (tim_trgo2) */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0x8 = 8;
        /** @brief Compare - tim_oc6refc signal is used as trigger output (tim_trgo2) */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0x9 = 9;
        /** @brief Compare Pulse - tim_oc4refc rising or falling edges generate pulses on tim_trgo2 */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0xA = 10;
        /** @brief Compare pulse - tim_oc6refc rising or falling edges generate pulses on tim_trgo2 */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0xB = 11;
        /** @brief Compare pulse - tim_oc4refc or tim_oc6refc rising edges generate pulses on tim_trgo2 */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0xC = 12;
        /** @brief Compare pulse - tim_oc4refc rising or tim_oc6refc falling edges generate pulses on tim_trgo2 */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0xD = 13;
        /** @brief Compare pulse - tim_oc5refc or tim_oc6refc rising edges generate pulses on tim_trgo2 */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0xE = 14;
        /** @brief Compare pulse - tim_oc5refc rising or tim_oc6refc falling edges generate pulses on tim_trgo2 */
    constexpr std::uint32_t TIM1_CR2_MMS2_B_0xF = 15;

    /** @brief MMS[3] */
    using TIM1_CR2_MMS_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 slave mode control register */
    using TIM1_SMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMS[2:0]: Slave mode selection */
    using TIM1_SMCR_SMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t TIM1_SMCR_SMS_B_0x0 = 0;
        /** @brief Quadrature encoder mode 1, x2 mode- Counter counts up/down on tim_ti1fp1 edge depending on tim_ti2fp2 level. */
    constexpr std::uint32_t TIM1_SMCR_SMS_B_0x1 = 1;
        /** @brief Quadrature encoder mode 2, x2 mode - Counter counts up/down on tim_ti2fp2 edge depending on tim_ti1fp1 level. */
    constexpr std::uint32_t TIM1_SMCR_SMS_B_0x2 = 2;
        /** @brief Quadrature encoder mode 3, x4 mode - Counter counts up/down on both tim_ti1fp1 and tim_ti2fp2 edges depending on the level of the other input. */
    constexpr std::uint32_t TIM1_SMCR_SMS_B_0x3 = 3;
        /** @brief Reset Mode - Rising edge of the selected trigger input (tim_trgi) reinitializes the counter and generates an update of the registers. */
    constexpr std::uint32_t TIM1_SMCR_SMS_B_0x4 = 4;
        /** @brief Gated Mode - The counter clock is enabled when the trigger input (tim_trgi) is high. */
    constexpr std::uint32_t TIM1_SMCR_SMS_B_0x5 = 5;
        /** @brief Trigger Mode - The counter starts at a rising edge of the trigger tim_trgi (but it is not reset). */
    constexpr std::uint32_t TIM1_SMCR_SMS_B_0x6 = 6;
        /** @brief External Clock Mode 1 - Rising edges of the selected trigger (tim_trgi) clock the counter. */
    constexpr std::uint32_t TIM1_SMCR_SMS_B_0x7 = 7;

    /** @brief OCREF clear selection */
    using TIM1_SMCR_OCCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ocref_clr_int is connected to the tim_ocref_clr input (value: 0)
     *          - B_0x1: tim_ocref_clr_int is connected to tim_etrf (value: 1)
     */
        /** @brief tim_ocref_clr_int is connected to the tim_ocref_clr input */
    constexpr std::uint32_t TIM1_SMCR_OCCS_B_0x0 = 0;
        /** @brief tim_ocref_clr_int is connected to tim_etrf */
    constexpr std::uint32_t TIM1_SMCR_OCCS_B_0x1 = 1;

    /** @brief TS[2:0]: Trigger selection */
    using TIM1_SMCR_TS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t TIM1_SMCR_TS_B_0x0 = 0;
        /** @brief Internal Trigger 1 (tim_itr1) */
    constexpr std::uint32_t TIM1_SMCR_TS_B_0x1 = 1;
        /** @brief Internal Trigger 2 (tim_itr2) */
    constexpr std::uint32_t TIM1_SMCR_TS_B_0x2 = 2;
        /** @brief Internal Trigger 3 (tim_itr3) */
    constexpr std::uint32_t TIM1_SMCR_TS_B_0x3 = 3;
        /** @brief tim_ti1 Edge Detector (tim_ti1f_ed) */
    constexpr std::uint32_t TIM1_SMCR_TS_B_0x4 = 4;
        /** @brief Filtered Timer Input 1 (tim_ti1fp1) */
    constexpr std::uint32_t TIM1_SMCR_TS_B_0x5 = 5;
        /** @brief Filtered Timer Input 2 (tim_ti2fp2) */
    constexpr std::uint32_t TIM1_SMCR_TS_B_0x6 = 6;
        /** @brief External Trigger input (tim_etrf) */
    constexpr std::uint32_t TIM1_SMCR_TS_B_0x7 = 7;

    /** @brief Master/slave mode */
    using TIM1_SMCR_MSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: The effect of an event on the trigger input (tim_trgi) is delayed to allow a perfect synchronization between the current timer and its slaves (through tim_trgo). (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t TIM1_SMCR_MSM_B_0x0 = 0;
        /** @brief The effect of an event on the trigger input (tim_trgi) is delayed to allow a perfect synchronization between the current timer and its slaves (through tim_trgo). */
    constexpr std::uint32_t TIM1_SMCR_MSM_B_0x1 = 1;

    /** @brief External trigger filter */
    using TIM1_SMCR_ETF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0x0 = 0;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=2 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0x1 = 1;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=4 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0x2 = 2;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=8 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0x3 = 3;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=6 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0x4 = 4;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0x5 = 5;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0x6 = 6;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0x7 = 7;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0x8 = 8;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0x9 = 9;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0xA = 10;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0xB = 11;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0xC = 12;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0xD = 13;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0xE = 14;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 */
    constexpr std::uint32_t TIM1_SMCR_ETF_B_0xF = 15;

    /** @brief External trigger prescaler */
    using TIM1_SMCR_ETPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Prescaler OFF (value: 0)
     *          - B_0x1: tim_etr_in frequency divided by 2 (value: 1)
     *          - B_0x2: tim_etr_in frequency divided by 4 (value: 2)
     *          - B_0x3: tim_etr_in frequency divided by 8 (value: 3)
     */
        /** @brief Prescaler OFF */
    constexpr std::uint32_t TIM1_SMCR_ETPS_B_0x0 = 0;
        /** @brief tim_etr_in frequency divided by 2 */
    constexpr std::uint32_t TIM1_SMCR_ETPS_B_0x1 = 1;
        /** @brief tim_etr_in frequency divided by 4 */
    constexpr std::uint32_t TIM1_SMCR_ETPS_B_0x2 = 2;
        /** @brief tim_etr_in frequency divided by 8 */
    constexpr std::uint32_t TIM1_SMCR_ETPS_B_0x3 = 3;

    /** @brief External clock enable */
    using TIM1_SMCR_ECE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External clock mode 2 disabled (value: 0)
     *          - B_0x1: External clock mode 2 enabled. (value: 1)
     */
        /** @brief External clock mode 2 disabled */
    constexpr std::uint32_t TIM1_SMCR_ECE_B_0x0 = 0;
        /** @brief External clock mode 2 enabled. */
    constexpr std::uint32_t TIM1_SMCR_ECE_B_0x1 = 1;

    /** @brief External trigger polarity */
    using TIM1_SMCR_ETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_etr_in is non-inverted, active at high level or rising edge. (value: 0)
     *          - B_0x1: tim_etr_in is inverted, active at low level or falling edge. (value: 1)
     */
        /** @brief tim_etr_in is non-inverted, active at high level or rising edge. */
    constexpr std::uint32_t TIM1_SMCR_ETP_B_0x0 = 0;
        /** @brief tim_etr_in is inverted, active at low level or falling edge. */
    constexpr std::uint32_t TIM1_SMCR_ETP_B_0x1 = 1;

    /** @brief SMS[3] */
    using TIM1_SMCR_SMS_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Slave mode disabled - if CEN = 1' then the prescaler is clocked directly by the internal clock. (value: 0)
     *          - B_0x1: Quadrature encoder mode 1, x2 mode- Counter counts up/down on tim_ti1fp1 edge depending on tim_ti2fp2 level. (value: 1)
     */
        /** @brief Slave mode disabled - if CEN = 1' then the prescaler is clocked directly by the internal clock. */
    constexpr std::uint32_t TIM1_SMCR_SMS_1_B_0x0 = 0;
        /** @brief Quadrature encoder mode 1, x2 mode- Counter counts up/down on tim_ti1fp1 edge depending on tim_ti2fp2 level. */
    constexpr std::uint32_t TIM1_SMCR_SMS_1_B_0x1 = 1;

    /** @brief TS[4:3] */
    using TIM1_SMCR_TS_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal Trigger 0 (tim_itr0) (value: 0)
     *          - B_0x1: Internal Trigger 1 (tim_itr1) (value: 1)
     *          - B_0x2: Internal Trigger 2 (tim_itr2) (value: 2)
     *          - B_0x3: Internal Trigger 3 (tim_itr3) (value: 3)
     */
        /** @brief Internal Trigger 0 (tim_itr0) */
    constexpr std::uint32_t TIM1_SMCR_TS_1_B_0x0 = 0;
        /** @brief Internal Trigger 1 (tim_itr1) */
    constexpr std::uint32_t TIM1_SMCR_TS_1_B_0x1 = 1;
        /** @brief Internal Trigger 2 (tim_itr2) */
    constexpr std::uint32_t TIM1_SMCR_TS_1_B_0x2 = 2;
        /** @brief Internal Trigger 3 (tim_itr3) */
    constexpr std::uint32_t TIM1_SMCR_TS_1_B_0x3 = 3;

    /** @brief SMS preload enable */
    using TIM1_SMCR_SMSPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SMS[3:0] bit field is not preloaded (value: 0)
     *          - B_0x1: SMS[3:0] preload is enabled (value: 1)
     */
        /** @brief SMS[3:0] bit field is not preloaded */
    constexpr std::uint32_t TIM1_SMCR_SMSPE_B_0x0 = 0;
        /** @brief SMS[3:0] preload is enabled */
    constexpr std::uint32_t TIM1_SMCR_SMSPE_B_0x1 = 1;

    /** @brief SMS preload source */
    using TIM1_SMCR_SMSPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The transfer is triggered by the Timer's Update event (value: 0)
     *          - B_0x1: The transfer is triggered by the Index event (value: 1)
     */
        /** @brief The transfer is triggered by the Timer's Update event */
    constexpr std::uint32_t TIM1_SMCR_SMSPS_B_0x0 = 0;
        /** @brief The transfer is triggered by the Index event */
    constexpr std::uint32_t TIM1_SMCR_SMSPS_B_0x1 = 1;

    /** @brief TIM1 DMA/interrupt enable register */
    using TIM1_DIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt enable */
    using TIM1_DIER_UIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update interrupt disabled (value: 0)
     *          - B_0x1: Update interrupt enabled (value: 1)
     */
        /** @brief Update interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_UIE_B_0x0 = 0;
        /** @brief Update interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_UIE_B_0x1 = 1;

    /** @brief Capture/compare 1 interrupt enable */
    using TIM1_DIER_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 interrupt disabled (value: 0)
     *          - B_0x1: CC1 interrupt enabled (value: 1)
     */
        /** @brief CC1 interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_CC1IE_B_0x0 = 0;
        /** @brief CC1 interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_CC1IE_B_0x1 = 1;

    /** @brief Capture/compare 2 interrupt enable */
    using TIM1_DIER_CC2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 interrupt disabled (value: 0)
     *          - B_0x1: CC2 interrupt enabled (value: 1)
     */
        /** @brief CC2 interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_CC2IE_B_0x0 = 0;
        /** @brief CC2 interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_CC2IE_B_0x1 = 1;

    /** @brief Capture/compare 3 interrupt enable */
    using TIM1_DIER_CC3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC3 interrupt disabled (value: 0)
     *          - B_0x1: CC3 interrupt enabled (value: 1)
     */
        /** @brief CC3 interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_CC3IE_B_0x0 = 0;
        /** @brief CC3 interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_CC3IE_B_0x1 = 1;

    /** @brief Capture/compare 4 interrupt enable */
    using TIM1_DIER_CC4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC4 interrupt disabled (value: 0)
     *          - B_0x1: CC4 interrupt enabled (value: 1)
     */
        /** @brief CC4 interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_CC4IE_B_0x0 = 0;
        /** @brief CC4 interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_CC4IE_B_0x1 = 1;

    /** @brief COM interrupt enable */
    using TIM1_DIER_COMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COM interrupt disabled (value: 0)
     *          - B_0x1: COM interrupt enabled (value: 1)
     */
        /** @brief COM interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_COMIE_B_0x0 = 0;
        /** @brief COM interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_COMIE_B_0x1 = 1;

    /** @brief Trigger interrupt enable */
    using TIM1_DIER_TIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger interrupt disabled (value: 0)
     *          - B_0x1: Trigger interrupt enabled (value: 1)
     */
        /** @brief Trigger interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_TIE_B_0x0 = 0;
        /** @brief Trigger interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_TIE_B_0x1 = 1;

    /** @brief Break interrupt enable */
    using TIM1_DIER_BIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break interrupt disabled (value: 0)
     *          - B_0x1: Break interrupt enabled (value: 1)
     */
        /** @brief Break interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_BIE_B_0x0 = 0;
        /** @brief Break interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_BIE_B_0x1 = 1;

    /** @brief Update DMA request enable */
    using TIM1_DIER_UDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update DMA request disabled (value: 0)
     *          - B_0x1: Update DMA request enabled (value: 1)
     */
        /** @brief Update DMA request disabled */
    constexpr std::uint32_t TIM1_DIER_UDE_B_0x0 = 0;
        /** @brief Update DMA request enabled */
    constexpr std::uint32_t TIM1_DIER_UDE_B_0x1 = 1;

    /** @brief Capture/compare 1 DMA request enable */
    using TIM1_DIER_CC1DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 DMA request disabled (value: 0)
     *          - B_0x1: CC1 DMA request enabled (value: 1)
     */
        /** @brief CC1 DMA request disabled */
    constexpr std::uint32_t TIM1_DIER_CC1DE_B_0x0 = 0;
        /** @brief CC1 DMA request enabled */
    constexpr std::uint32_t TIM1_DIER_CC1DE_B_0x1 = 1;

    /** @brief Capture/compare 2 DMA request enable */
    using TIM1_DIER_CC2DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 DMA request disabled (value: 0)
     *          - B_0x1: CC2 DMA request enabled (value: 1)
     */
        /** @brief CC2 DMA request disabled */
    constexpr std::uint32_t TIM1_DIER_CC2DE_B_0x0 = 0;
        /** @brief CC2 DMA request enabled */
    constexpr std::uint32_t TIM1_DIER_CC2DE_B_0x1 = 1;

    /** @brief Capture/compare 3 DMA request enable */
    using TIM1_DIER_CC3DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC3 DMA request disabled (value: 0)
     *          - B_0x1: CC3 DMA request enabled (value: 1)
     */
        /** @brief CC3 DMA request disabled */
    constexpr std::uint32_t TIM1_DIER_CC3DE_B_0x0 = 0;
        /** @brief CC3 DMA request enabled */
    constexpr std::uint32_t TIM1_DIER_CC3DE_B_0x1 = 1;

    /** @brief Capture/compare 4 DMA request enable */
    using TIM1_DIER_CC4DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC4 DMA request disabled (value: 0)
     *          - B_0x1: CC4 DMA request enabled (value: 1)
     */
        /** @brief CC4 DMA request disabled */
    constexpr std::uint32_t TIM1_DIER_CC4DE_B_0x0 = 0;
        /** @brief CC4 DMA request enabled */
    constexpr std::uint32_t TIM1_DIER_CC4DE_B_0x1 = 1;

    /** @brief COM DMA request enable */
    using TIM1_DIER_COMDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COM DMA request disabled (value: 0)
     *          - B_0x1: COM DMA request enabled (value: 1)
     */
        /** @brief COM DMA request disabled */
    constexpr std::uint32_t TIM1_DIER_COMDE_B_0x0 = 0;
        /** @brief COM DMA request enabled */
    constexpr std::uint32_t TIM1_DIER_COMDE_B_0x1 = 1;

    /** @brief Trigger DMA request enable */
    using TIM1_DIER_TDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger DMA request disabled (value: 0)
     *          - B_0x1: Trigger DMA request enabled (value: 1)
     */
        /** @brief Trigger DMA request disabled */
    constexpr std::uint32_t TIM1_DIER_TDE_B_0x0 = 0;
        /** @brief Trigger DMA request enabled */
    constexpr std::uint32_t TIM1_DIER_TDE_B_0x1 = 1;

    /** @brief Index interrupt enable */
    using TIM1_DIER_IDXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index interrupt disabled (value: 0)
     *          - B_0x1: Index Change interrupt enabled (value: 1)
     */
        /** @brief Index interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_IDXIE_B_0x0 = 0;
        /** @brief Index Change interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_IDXIE_B_0x1 = 1;

    /** @brief Direction change interrupt enable */
    using TIM1_DIER_DIRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Direction Change interrupt disabled (value: 0)
     *          - B_0x1: Direction Change interrupt enabled (value: 1)
     */
        /** @brief Direction Change interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_DIRIE_B_0x0 = 0;
        /** @brief Direction Change interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_DIRIE_B_0x1 = 1;

    /** @brief Index error interrupt enable */
    using TIM1_DIER_IERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index error interrupt disabled (value: 0)
     *          - B_0x1: Index error interrupt enabled (value: 1)
     */
        /** @brief Index error interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_IERRIE_B_0x0 = 0;
        /** @brief Index error interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_IERRIE_B_0x1 = 1;

    /** @brief Transition error interrupt enable */
    using TIM1_DIER_TERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transition error interrupt disabled (value: 0)
     *          - B_0x1: Transition error interrupt enabled (value: 1)
     */
        /** @brief Transition error interrupt disabled */
    constexpr std::uint32_t TIM1_DIER_TERRIE_B_0x0 = 0;
        /** @brief Transition error interrupt enabled */
    constexpr std::uint32_t TIM1_DIER_TERRIE_B_0x1 = 1;

    /** @brief TIM1 status register */
    using TIM1_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt flag */
    using TIM1_SR_UIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No update occurred. (value: 0)
     *          - B_0x1: Update interrupt pending. (value: 1)
     */
        /** @brief No update occurred. */
    constexpr std::uint32_t TIM1_SR_UIF_B_0x0 = 0;
        /** @brief Update interrupt pending. */
    constexpr std::uint32_t TIM1_SR_UIF_B_0x1 = 1;

    /** @brief Capture/compare 1 interrupt flag */
    using TIM1_SR_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No compare match / No input capture occurred (value: 0)
     *          - B_0x1: A compare match or an input capture occurred (value: 1)
     */
        /** @brief No compare match / No input capture occurred */
    constexpr std::uint32_t TIM1_SR_CC1IF_B_0x0 = 0;
        /** @brief A compare match or an input capture occurred */
    constexpr std::uint32_t TIM1_SR_CC1IF_B_0x1 = 1;

    /** @brief Capture/compare 2 interrupt flag */
    using TIM1_SR_CC2IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 3 interrupt flag */
    using TIM1_SR_CC3IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 4 interrupt flag */
    using TIM1_SR_CC4IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COM interrupt flag */
    using TIM1_SR_COMIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No COM event occurred. (value: 0)
     *          - B_0x1: COM interrupt pending. (value: 1)
     */
        /** @brief No COM event occurred. */
    constexpr std::uint32_t TIM1_SR_COMIF_B_0x0 = 0;
        /** @brief COM interrupt pending. */
    constexpr std::uint32_t TIM1_SR_COMIF_B_0x1 = 1;

    /** @brief Trigger interrupt flag */
    using TIM1_SR_TIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger event occurred. (value: 0)
     *          - B_0x1: Trigger interrupt pending. (value: 1)
     */
        /** @brief No trigger event occurred. */
    constexpr std::uint32_t TIM1_SR_TIF_B_0x0 = 0;
        /** @brief Trigger interrupt pending. */
    constexpr std::uint32_t TIM1_SR_TIF_B_0x1 = 1;

    /** @brief Break interrupt flag */
    using TIM1_SR_BIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break event occurred. (value: 0)
     *          - B_0x1: An active level has been detected on the break input. (value: 1)
     */
        /** @brief No break event occurred. */
    constexpr std::uint32_t TIM1_SR_BIF_B_0x0 = 0;
        /** @brief An active level has been detected on the break input. */
    constexpr std::uint32_t TIM1_SR_BIF_B_0x1 = 1;

    /** @brief Break 2 interrupt flag */
    using TIM1_SR_B2IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break event occurred. (value: 0)
     *          - B_0x1: An active level has been detected on the break 2 input. (value: 1)
     */
        /** @brief No break event occurred. */
    constexpr std::uint32_t TIM1_SR_B2IF_B_0x0 = 0;
        /** @brief An active level has been detected on the break 2 input. */
    constexpr std::uint32_t TIM1_SR_B2IF_B_0x1 = 1;

    /** @brief Capture/compare 1 overcapture flag */
    using TIM1_SR_CC1OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overcapture has been detected. (value: 0)
     *          - B_0x1: The counter value has been captured in TIMx_CCR1 register while CC1IF flag was already set (value: 1)
     */
        /** @brief No overcapture has been detected. */
    constexpr std::uint32_t TIM1_SR_CC1OF_B_0x0 = 0;
        /** @brief The counter value has been captured in TIMx_CCR1 register while CC1IF flag was already set */
    constexpr std::uint32_t TIM1_SR_CC1OF_B_0x1 = 1;

    /** @brief Capture/compare 2 overcapture flag */
    using TIM1_SR_CC2OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 3 overcapture flag */
    using TIM1_SR_CC3OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 4 overcapture flag */
    using TIM1_SR_CC4OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System break interrupt flag */
    using TIM1_SR_SBIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break event occurred. (value: 0)
     *          - B_0x1: An active level has been detected on the system break input. (value: 1)
     */
        /** @brief No break event occurred. */
    constexpr std::uint32_t TIM1_SR_SBIF_B_0x0 = 0;
        /** @brief An active level has been detected on the system break input. */
    constexpr std::uint32_t TIM1_SR_SBIF_B_0x1 = 1;

    /** @brief Compare 5 interrupt flag */
    using TIM1_SR_CC5IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare 6 interrupt flag */
    using TIM1_SR_CC6IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Index interrupt flag */
    using TIM1_SR_IDXF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No index event occurred. (value: 0)
     *          - B_0x1: An index event has occurred (value: 1)
     */
        /** @brief No index event occurred. */
    constexpr std::uint32_t TIM1_SR_IDXF_B_0x0 = 0;
        /** @brief An index event has occurred */
    constexpr std::uint32_t TIM1_SR_IDXF_B_0x1 = 1;

    /** @brief Direction change interrupt flag */
    using TIM1_SR_DIRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No direction change (value: 0)
     *          - B_0x1: Direction change (value: 1)
     */
        /** @brief No direction change */
    constexpr std::uint32_t TIM1_SR_DIRF_B_0x0 = 0;
        /** @brief Direction change */
    constexpr std::uint32_t TIM1_SR_DIRF_B_0x1 = 1;

    /** @brief Index error interrupt flag */
    using TIM1_SR_IERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No index error has been detected. (value: 0)
     *          - B_0x1: An index error has been detected (value: 1)
     */
        /** @brief No index error has been detected. */
    constexpr std::uint32_t TIM1_SR_IERRF_B_0x0 = 0;
        /** @brief An index error has been detected */
    constexpr std::uint32_t TIM1_SR_IERRF_B_0x1 = 1;

    /** @brief Transition error interrupt flag */
    using TIM1_SR_TERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No encoder transition error has been detected. (value: 0)
     *          - B_0x1: An encoder transition error has been detected (value: 1)
     */
        /** @brief No encoder transition error has been detected. */
    constexpr std::uint32_t TIM1_SR_TERRF_B_0x0 = 0;
        /** @brief An encoder transition error has been detected */
    constexpr std::uint32_t TIM1_SR_TERRF_B_0x1 = 1;

    /** @brief TIM1 event generation register */
    using TIM1_EGR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update generation */
    using TIM1_EGR_UG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Reinitialize the counter and generates an update of the registers. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM1_EGR_UG_B_0x0 = 0;
        /** @brief Reinitialize the counter and generates an update of the registers. */
    constexpr std::uint16_t TIM1_EGR_UG_B_0x1 = 1;

    /** @brief Capture/compare 1 generation */
    using TIM1_EGR_CC1G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: A capture/compare event is generated on channel 1: (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM1_EGR_CC1G_B_0x0 = 0;
        /** @brief A capture/compare event is generated on channel 1: */
    constexpr std::uint16_t TIM1_EGR_CC1G_B_0x1 = 1;

    /** @brief Capture/compare 2 generation */
    using TIM1_EGR_CC2G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 3 generation */
    using TIM1_EGR_CC3G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 4 generation */
    using TIM1_EGR_CC4G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare control update generation */
    using TIM1_EGR_COMG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: CCxE, CCxNE and OCxM bits update (providing CCPC bit is set) (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM1_EGR_COMG_B_0x0 = 0;
        /** @brief CCxE, CCxNE and OCxM bits update (providing CCPC bit is set) */
    constexpr std::uint16_t TIM1_EGR_COMG_B_0x1 = 1;

    /** @brief Trigger generation */
    using TIM1_EGR_TG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: The TIF flag is set in TIMx_SR register. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM1_EGR_TG_B_0x0 = 0;
        /** @brief The TIF flag is set in TIMx_SR register. */
    constexpr std::uint16_t TIM1_EGR_TG_B_0x1 = 1;

    /** @brief Break generation */
    using TIM1_EGR_BG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: A break event is generated. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM1_EGR_BG_B_0x0 = 0;
        /** @brief A break event is generated. */
    constexpr std::uint16_t TIM1_EGR_BG_B_0x1 = 1;

    /** @brief Break 2 generation */
    using TIM1_EGR_B2G = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: A break 2 event is generated. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint16_t TIM1_EGR_B2G_B_0x0 = 0;
        /** @brief A break 2 event is generated. */
    constexpr std::uint16_t TIM1_EGR_B2G_B_0x1 = 1;

    /** @brief TIM1 capture/compare mode register 1 */
    using TIM1_CCMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 Selection */
    using TIM1_CCMR1_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured as output (value: 0)
     *          - B_0x1: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 (value: 1)
     *          - B_0x2: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2 (value: 2)
     *          - B_0x3: CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC1 channel is configured as output */
    constexpr std::uint32_t TIM1_CCMR1_CC1S_B_0x0 = 0;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM1_CCMR1_CC1S_B_0x1 = 1;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2 */
    constexpr std::uint32_t TIM1_CCMR1_CC1S_B_0x2 = 2;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. */
    constexpr std::uint32_t TIM1_CCMR1_CC1S_B_0x3 = 3;

    /** @brief Input capture 1 prescaler */
    using TIM1_CCMR1_IC1PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no prescaler, capture is done each time an edge is detected on the capture input (value: 0)
     *          - B_0x1: capture is done once every 2 events (value: 1)
     *          - B_0x2: capture is done once every 4 events (value: 2)
     *          - B_0x3: capture is done once every 8 events (value: 3)
     */
        /** @brief no prescaler, capture is done each time an edge is detected on the capture input */
    constexpr std::uint32_t TIM1_CCMR1_IC1PSC_B_0x0 = 0;
        /** @brief capture is done once every 2 events */
    constexpr std::uint32_t TIM1_CCMR1_IC1PSC_B_0x1 = 1;
        /** @brief capture is done once every 4 events */
    constexpr std::uint32_t TIM1_CCMR1_IC1PSC_B_0x2 = 2;
        /** @brief capture is done once every 8 events */
    constexpr std::uint32_t TIM1_CCMR1_IC1PSC_B_0x3 = 3;

    /** @brief Input capture 1 filter */
    using TIM1_CCMR1_IC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0x0 = 0;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=2 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0x1 = 1;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=4 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0x2 = 2;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=8 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0x3 = 3;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=6 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0x4 = 4;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0x5 = 5;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0x6 = 6;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0x7 = 7;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0x8 = 8;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0x9 = 9;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0xA = 10;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0xB = 11;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0xC = 12;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0xD = 13;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0xE = 14;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 */
    constexpr std::uint32_t TIM1_CCMR1_IC1F_B_0xF = 15;

    /** @brief Capture/compare 2 selection */
    using TIM1_CCMR1_CC2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 channel is configured as output (value: 0)
     *          - B_0x1: CC2 channel is configured as input, tim_ic2 is mapped on tim_ti2 (value: 1)
     *          - B_0x2: CC2 channel is configured as input, tim_ic2 is mapped on tim_ti1 (value: 2)
     *          - B_0x3: CC2 channel is configured as input, tim_ic2 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC2 channel is configured as output */
    constexpr std::uint32_t TIM1_CCMR1_CC2S_B_0x0 = 0;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_ti2 */
    constexpr std::uint32_t TIM1_CCMR1_CC2S_B_0x1 = 1;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM1_CCMR1_CC2S_B_0x2 = 2;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_trc. */
    constexpr std::uint32_t TIM1_CCMR1_CC2S_B_0x3 = 3;

    /** @brief Input capture 2 prescaler */
    using TIM1_CCMR1_IC2PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 2 filter */
    using TIM1_CCMR1_IC2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1_CCMR1_ALTERNATE1 register */
    using TIM1_CCMR1_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 selection */
    using TIM1_CCMR1_ALTERNATE1_CC1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured as output (value: 0)
     *          - B_0x1: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 (value: 1)
     *          - B_0x2: CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2 (value: 2)
     *          - B_0x3: CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC1 channel is configured as output */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_CC1S_B_0x0 = 0;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_CC1S_B_0x1 = 1;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_ti2 */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_CC1S_B_0x2 = 2;
        /** @brief CC1 channel is configured as input, tim_ic1 is mapped on tim_trc. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_CC1S_B_0x3 = 3;

    /** @brief Output compare 1 fast enable */
    using TIM1_CCMR1_ALTERNATE1_OC1FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 behaves normally depending on counter and CCR1 values even when the trigger is ON. (value: 0)
     *          - B_0x1: An active edge on the trigger input acts like a compare match on CC1 output. (value: 1)
     */
        /** @brief CC1 behaves normally depending on counter and CCR1 values even when the trigger is ON. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1FE_B_0x0 = 0;
        /** @brief An active edge on the trigger input acts like a compare match on CC1 output. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1FE_B_0x1 = 1;

    /** @brief Output compare 1 preload enable */
    using TIM1_CCMR1_ALTERNATE1_OC1PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Preload register on TIMx_CCR1 disabled. (value: 0)
     *          - B_0x1: Preload register on TIMx_CCR1 enabled. (value: 1)
     */
        /** @brief Preload register on TIMx_CCR1 disabled. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1PE_B_0x0 = 0;
        /** @brief Preload register on TIMx_CCR1 enabled. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1PE_B_0x1 = 1;

    /** @brief OC1M[2:0]: Output compare 1 mode */
    using TIM1_CCMR1_ALTERNATE1_OC1M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1M_B_0x0 = 0;
        /** @brief Set channel 1 to active level on match. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1M_B_0x1 = 1;
        /** @brief Set channel 1 to inactive level on match. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1M_B_0x2 = 2;
        /** @brief Toggle - tim_oc1ref toggles when TIMx_CNT=TIMx_CCR1. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1M_B_0x3 = 3;
        /** @brief Force inactive level - tim_oc1ref is forced low. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1M_B_0x4 = 4;
        /** @brief Force active level - tim_oc1ref is forced high. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1M_B_0x5 = 5;
        /** @brief PWM mode 1 - In upcounting, channel 1 is active as long as TIMx_CNTless thanTIMx_CCR1 else inactive. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1M_B_0x6 = 6;
        /** @brief PWM mode 2 - In upcounting, channel 1 is inactive as long as TIMx_CNTless thanTIMx_CCR1 else active. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1M_B_0x7 = 7;

    /** @brief Output compare 1 clear enable */
    using TIM1_CCMR1_ALTERNATE1_OC1CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_oc1ref is not affected by the tim_ocref_clr_int signal (value: 0)
     *          - B_0x1: tim_oc1ref is cleared as soon as a High level is detected on tim_ocref_clr_int signal (tim_ocref_clr input or tim_etrf input) (value: 1)
     */
        /** @brief tim_oc1ref is not affected by the tim_ocref_clr_int signal */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1CE_B_0x0 = 0;
        /** @brief tim_oc1ref is cleared as soon as a High level is detected on tim_ocref_clr_int signal (tim_ocref_clr input or tim_etrf input) */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_OC1CE_B_0x1 = 1;

    /** @brief Capture/compare 2 selection */
    using TIM1_CCMR1_ALTERNATE1_CC2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 channel is configured as output (value: 0)
     *          - B_0x1: CC2 channel is configured as input, tim_ic2 is mapped on tim_ti2 (value: 1)
     *          - B_0x2: CC2 channel is configured as input, tim_ic2 is mapped on tim_ti1 (value: 2)
     *          - B_0x3: CC2 channel is configured as input, tim_ic2 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC2 channel is configured as output */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_CC2S_B_0x0 = 0;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_ti2 */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_CC2S_B_0x1 = 1;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_ti1 */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_CC2S_B_0x2 = 2;
        /** @brief CC2 channel is configured as input, tim_ic2 is mapped on tim_trc. */
    constexpr std::uint32_t TIM1_CCMR1_ALTERNATE1_CC2S_B_0x3 = 3;

    /** @brief Output compare 2 fast enable */
    using TIM1_CCMR1_ALTERNATE1_OC2FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 2 preload enable */
    using TIM1_CCMR1_ALTERNATE1_OC2PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC2M[2:0]: Output compare 2 mode */
    using TIM1_CCMR1_ALTERNATE1_OC2M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 2 clear enable */
    using TIM1_CCMR1_ALTERNATE1_OC2CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC1M[3] */
    using TIM1_CCMR1_ALTERNATE1_OC1M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC2M[3] */
    using TIM1_CCMR1_ALTERNATE1_OC2M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 capture/compare mode register 2 */
    using TIM1_CCMR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 3 selection */
    using TIM1_CCMR2_CC3S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC3 channel is configured as output (value: 0)
     *          - B_0x1: CC3 channel is configured as input, tim_ic3 is mapped on tim_ti3 (value: 1)
     *          - B_0x2: CC3 channel is configured as input, tim_ic3 is mapped on tim_ti4 (value: 2)
     *          - B_0x3: CC3 channel is configured as input, tim_ic3 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC3 channel is configured as output */
    constexpr std::uint32_t TIM1_CCMR2_CC3S_B_0x0 = 0;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_ti3 */
    constexpr std::uint32_t TIM1_CCMR2_CC3S_B_0x1 = 1;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_ti4 */
    constexpr std::uint32_t TIM1_CCMR2_CC3S_B_0x2 = 2;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_trc. */
    constexpr std::uint32_t TIM1_CCMR2_CC3S_B_0x3 = 3;

    /** @brief Input capture 3 prescaler */
    using TIM1_CCMR2_IC3PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 3 filter */
    using TIM1_CCMR2_IC3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 4 selection */
    using TIM1_CCMR2_CC4S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC4 channel is configured as output (value: 0)
     *          - B_0x1: CC4 channel is configured as input, tim_ic4 is mapped on tim_ti4 (value: 1)
     *          - B_0x2: CC4 channel is configured as input, tim_ic4 is mapped on tim_ti3 (value: 2)
     *          - B_0x3: CC4 channel is configured as input, tim_ic4 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC4 channel is configured as output */
    constexpr std::uint32_t TIM1_CCMR2_CC4S_B_0x0 = 0;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_ti4 */
    constexpr std::uint32_t TIM1_CCMR2_CC4S_B_0x1 = 1;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_ti3 */
    constexpr std::uint32_t TIM1_CCMR2_CC4S_B_0x2 = 2;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_trc. */
    constexpr std::uint32_t TIM1_CCMR2_CC4S_B_0x3 = 3;

    /** @brief Input capture 4 prescaler */
    using TIM1_CCMR2_IC4PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input capture 4 filter */
    using TIM1_CCMR2_IC4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1_CCMR2_ALTERNATE1 register */
    using TIM1_CCMR2_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 3 selection */
    using TIM1_CCMR2_ALTERNATE1_CC3S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC3 channel is configured as output (value: 0)
     *          - B_0x1: CC3 channel is configured as input, tim_ic3 is mapped on tim_ti3 (value: 1)
     *          - B_0x2: CC3 channel is configured as input, tim_ic3 is mapped on tim_ti4 (value: 2)
     *          - B_0x3: CC3 channel is configured as input, tim_ic3 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC3 channel is configured as output */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_CC3S_B_0x0 = 0;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_ti3 */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_CC3S_B_0x1 = 1;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_ti4 */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_CC3S_B_0x2 = 2;
        /** @brief CC3 channel is configured as input, tim_ic3 is mapped on tim_trc. */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_CC3S_B_0x3 = 3;

    /** @brief Output compare 3 fast enable */
    using TIM1_CCMR2_ALTERNATE1_OC3FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 3 preload enable */
    using TIM1_CCMR2_ALTERNATE1_OC3PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC3M[2:0]: Output compare 3 mode */
    using TIM1_CCMR2_ALTERNATE1_OC3M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Frozen - The comparison between the output compare register TIMx_CCR3 and the counter TIMx_CNT has no effect on the outputs. (value: 0)
     *          - B_0x1: Set channel 3 to active level on match. (value: 1)
     *          - B_0x2: Set channel 3 to inactive level on match. (value: 2)
     *          - B_0x3: Toggle - tim_oc3ref toggles when TIMx_CNT=TIMx_CCR3. (value: 3)
     *          - B_0x4: Force inactive level - tim_oc3ref is forced low. (value: 4)
     *          - B_0x5: Force active level - tim_oc3ref is forced high. (value: 5)
     *          - B_0x6: PWM mode 1 - In upcounting, channel 3 is active as long as TIMx_CNTless thanTIMx_CCR3 else inactive. (value: 6)
     *          - B_0x7: PWM mode 2 - In upcounting, channel 3 is inactive as long as TIMx_CNTless thanTIMx_CCR3 else active. (value: 7)
     */
        /** @brief Frozen - The comparison between the output compare register TIMx_CCR3 and the counter TIMx_CNT has no effect on the outputs. */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_OC3M_B_0x0 = 0;
        /** @brief Set channel 3 to active level on match. */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_OC3M_B_0x1 = 1;
        /** @brief Set channel 3 to inactive level on match. */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_OC3M_B_0x2 = 2;
        /** @brief Toggle - tim_oc3ref toggles when TIMx_CNT=TIMx_CCR3. */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_OC3M_B_0x3 = 3;
        /** @brief Force inactive level - tim_oc3ref is forced low. */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_OC3M_B_0x4 = 4;
        /** @brief Force active level - tim_oc3ref is forced high. */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_OC3M_B_0x5 = 5;
        /** @brief PWM mode 1 - In upcounting, channel 3 is active as long as TIMx_CNTless thanTIMx_CCR3 else inactive. */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_OC3M_B_0x6 = 6;
        /** @brief PWM mode 2 - In upcounting, channel 3 is inactive as long as TIMx_CNTless thanTIMx_CCR3 else active. */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_OC3M_B_0x7 = 7;

    /** @brief Output compare 3 clear enable */
    using TIM1_CCMR2_ALTERNATE1_OC3CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 4 selection */
    using TIM1_CCMR2_ALTERNATE1_CC4S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC4 channel is configured as output (value: 0)
     *          - B_0x1: CC4 channel is configured as input, tim_ic4 is mapped on tim_ti4 (value: 1)
     *          - B_0x2: CC4 channel is configured as input, tim_ic4 is mapped on tim_ti3 (value: 2)
     *          - B_0x3: CC4 channel is configured as input, tim_ic4 is mapped on tim_trc. (value: 3)
     */
        /** @brief CC4 channel is configured as output */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_CC4S_B_0x0 = 0;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_ti4 */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_CC4S_B_0x1 = 1;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_ti3 */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_CC4S_B_0x2 = 2;
        /** @brief CC4 channel is configured as input, tim_ic4 is mapped on tim_trc. */
    constexpr std::uint32_t TIM1_CCMR2_ALTERNATE1_CC4S_B_0x3 = 3;

    /** @brief Output compare 4 fast enable */
    using TIM1_CCMR2_ALTERNATE1_OC4FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 4 preload enable */
    using TIM1_CCMR2_ALTERNATE1_OC4PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC4M[2:0]: Output compare 4 mode */
    using TIM1_CCMR2_ALTERNATE1_OC4M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 4 clear enable */
    using TIM1_CCMR2_ALTERNATE1_OC4CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC3M[3] */
    using TIM1_CCMR2_ALTERNATE1_OC3M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC4M[3] */
    using TIM1_CCMR2_ALTERNATE1_OC4M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 capture/compare enable register */
    using TIM1_CCER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 output enable */
    using TIM1_CCER_CC1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture mode disabled / OC1 is not active (see below) (value: 0)
     *          - B_0x1: Capture mode enabled / OC1 signal is output on the corresponding output pin (value: 1)
     */
        /** @brief Capture mode disabled / OC1 is not active (see below) */
    constexpr std::uint32_t TIM1_CCER_CC1E_B_0x0 = 0;
        /** @brief Capture mode enabled / OC1 signal is output on the corresponding output pin */
    constexpr std::uint32_t TIM1_CCER_CC1E_B_0x1 = 1;

    /** @brief Capture/compare 1 output polarity */
    using TIM1_CCER_CC1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OC1 active high (output mode) / Edge sensitivity selection (input mode, see below) (value: 0)
     *          - B_0x1: OC1 active low (output mode) / Edge sensitivity selection (input mode, see below) (value: 1)
     */
        /** @brief OC1 active high (output mode) / Edge sensitivity selection (input mode, see below) */
    constexpr std::uint32_t TIM1_CCER_CC1P_B_0x0 = 0;
        /** @brief OC1 active low (output mode) / Edge sensitivity selection (input mode, see below) */
    constexpr std::uint32_t TIM1_CCER_CC1P_B_0x1 = 1;

    /** @brief Capture/compare 1 complementary output enable */
    using TIM1_CCER_CC1NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Off - tim_oc1n is not active. (value: 0)
     *          - B_0x1: On - tim_oc1n signal is output on the corresponding output pin depending on MOE, OSSI, OSSR, OIS1, OIS1N and CC1E bits. (value: 1)
     */
        /** @brief Off - tim_oc1n is not active. */
    constexpr std::uint32_t TIM1_CCER_CC1NE_B_0x0 = 0;
        /** @brief On - tim_oc1n signal is output on the corresponding output pin depending on MOE, OSSI, OSSR, OIS1, OIS1N and CC1E bits. */
    constexpr std::uint32_t TIM1_CCER_CC1NE_B_0x1 = 1;

    /** @brief Capture/compare 1 complementary output polarity */
    using TIM1_CCER_CC1NP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_oc1n active high. (value: 0)
     *          - B_0x1: tim_oc1n active low. (value: 1)
     */
        /** @brief tim_oc1n active high. */
    constexpr std::uint32_t TIM1_CCER_CC1NP_B_0x0 = 0;
        /** @brief tim_oc1n active low. */
    constexpr std::uint32_t TIM1_CCER_CC1NP_B_0x1 = 1;

    /** @brief Capture/compare 2 output enable */
    using TIM1_CCER_CC2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 output polarity */
    using TIM1_CCER_CC2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 complementary output enable */
    using TIM1_CCER_CC2NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 complementary output polarity */
    using TIM1_CCER_CC2NP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 3 output enable */
    using TIM1_CCER_CC3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 3 output polarity */
    using TIM1_CCER_CC3P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 3 complementary output enable */
    using TIM1_CCER_CC3NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 3 complementary output polarity */
    using TIM1_CCER_CC3NP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 4 output enable */
    using TIM1_CCER_CC4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 4 output polarity */
    using TIM1_CCER_CC4P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 4 complementary output enable */
    using TIM1_CCER_CC4NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 4 complementary output polarity */
    using TIM1_CCER_CC4NP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 5 output enable */
    using TIM1_CCER_CC5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 5 output polarity */
    using TIM1_CCER_CC5P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 6 output enable */
    using TIM1_CCER_CC6E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 6 output polarity */
    using TIM1_CCER_CC6P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 counter */
    using TIM1_CNT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TIM1_CNT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UIF copy */
    using TIM1_CNT_UIFCPY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 prescaler */
    using TIM1_PSC = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler value */
    using TIM1_PSC_PSC = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 auto-reload register */
    using TIM1_ARR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto-reload value */
    using TIM1_ARR_ARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 repetition counter register */
    using TIM1_RCR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition counter reload value */
    using TIM1_RCR_REP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 capture/compare register 1 */
    using TIM1_CCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 value */
    using TIM1_CCR1_CCR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 capture/compare register 2 */
    using TIM1_CCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 value */
    using TIM1_CCR2_CCR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 capture/compare register 3 */
    using TIM1_CCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare value */
    using TIM1_CCR3_CCR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 capture/compare register 4 */
    using TIM1_CCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare value */
    using TIM1_CCR4_CCR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 break and dead-time register */
    using TIM1_BDTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dead-time generator setup */
    using TIM1_BDTR_DTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lock configuration */
    using TIM1_BDTR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LOCK OFF - No bit is write protected. (value: 0)
     *          - B_0x1: LOCK Level 1 = DTG bits in TIMx_BDTR register, OISx and OISxN bits in TIMx_CR2 register and BKBID/BK2BID/BKE/BKP/AOE bits in TIMx_BDTR register can no longer be written. (value: 1)
     *          - B_0x2: LOCK Level 2 = LOCK Level 1 + CC Polarity bits (CCxP/CCxNP bits in TIMx_CCER register, as long as the related channel is configured in output through the CCxS bits) as well as OSSR and OSSI bits can no longer be written. (value: 2)
     *          - B_0x3: LOCK Level 3 = LOCK Level 2 + CC Control bits (OCxM and OCxPE bits in TIMx_CCMRx registers, as long as the related channel is configured in output through the CCxS bits) can no longer be written. (value: 3)
     */
        /** @brief LOCK OFF - No bit is write protected. */
    constexpr std::uint32_t TIM1_BDTR_LOCK_B_0x0 = 0;
        /** @brief LOCK Level 1 = DTG bits in TIMx_BDTR register, OISx and OISxN bits in TIMx_CR2 register and BKBID/BK2BID/BKE/BKP/AOE bits in TIMx_BDTR register can no longer be written. */
    constexpr std::uint32_t TIM1_BDTR_LOCK_B_0x1 = 1;
        /** @brief LOCK Level 2 = LOCK Level 1 + CC Polarity bits (CCxP/CCxNP bits in TIMx_CCER register, as long as the related channel is configured in output through the CCxS bits) as well as OSSR and OSSI bits can no longer be written. */
    constexpr std::uint32_t TIM1_BDTR_LOCK_B_0x2 = 2;
        /** @brief LOCK Level 3 = LOCK Level 2 + CC Control bits (OCxM and OCxPE bits in TIMx_CCMRx registers, as long as the related channel is configured in output through the CCxS bits) can no longer be written. */
    constexpr std::uint32_t TIM1_BDTR_LOCK_B_0x3 = 3;

    /** @brief Off-state selection for idle mode */
    using TIM1_BDTR_OSSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When inactive, OC/OCN outputs are disabled (the timer releases the output control which is taken over by the GPIO logic and which imposes a Hi-Z state). (value: 0)
     *          - B_0x1: When inactive, OC/OCN outputs are first forced with their inactive level then forced to their idle level after the deadtime. (value: 1)
     */
        /** @brief When inactive, OC/OCN outputs are disabled (the timer releases the output control which is taken over by the GPIO logic and which imposes a Hi-Z state). */
    constexpr std::uint32_t TIM1_BDTR_OSSI_B_0x0 = 0;
        /** @brief When inactive, OC/OCN outputs are first forced with their inactive level then forced to their idle level after the deadtime. */
    constexpr std::uint32_t TIM1_BDTR_OSSI_B_0x1 = 1;

    /** @brief Off-state selection for Run mode */
    using TIM1_BDTR_OSSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When inactive, OC/OCN outputs are disabled (the timer releases the output control which is taken over by the GPIO logic, which forces a Hi-Z state). (value: 0)
     *          - B_0x1: When inactive, OC/OCN outputs are enabled with their inactive level as soon as CCxE=1 or CCxNE=1 (the output is still controlled by the timer). (value: 1)
     */
        /** @brief When inactive, OC/OCN outputs are disabled (the timer releases the output control which is taken over by the GPIO logic, which forces a Hi-Z state). */
    constexpr std::uint32_t TIM1_BDTR_OSSR_B_0x0 = 0;
        /** @brief When inactive, OC/OCN outputs are enabled with their inactive level as soon as CCxE=1 or CCxNE=1 (the output is still controlled by the timer). */
    constexpr std::uint32_t TIM1_BDTR_OSSR_B_0x1 = 1;

    /** @brief Break enable */
    using TIM1_BDTR_BKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break function disabled (value: 0)
     *          - B_0x1: Break function enabled (value: 1)
     */
        /** @brief Break function disabled */
    constexpr std::uint32_t TIM1_BDTR_BKE_B_0x0 = 0;
        /** @brief Break function enabled */
    constexpr std::uint32_t TIM1_BDTR_BKE_B_0x1 = 1;

    /** @brief Break polarity */
    using TIM1_BDTR_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break input tim_brk is active low (value: 0)
     *          - B_0x1: Break input tim_brk is active high (value: 1)
     */
        /** @brief Break input tim_brk is active low */
    constexpr std::uint32_t TIM1_BDTR_BKP_B_0x0 = 0;
        /** @brief Break input tim_brk is active high */
    constexpr std::uint32_t TIM1_BDTR_BKP_B_0x1 = 1;

    /** @brief Automatic output enable */
    using TIM1_BDTR_AOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MOE can be set only by software (value: 0)
     *          - B_0x1: MOE can be set by software or automatically at the next update event (if none of the break inputs tim_brk and tim_brk2 is active) (value: 1)
     */
        /** @brief MOE can be set only by software */
    constexpr std::uint32_t TIM1_BDTR_AOE_B_0x0 = 0;
        /** @brief MOE can be set by software or automatically at the next update event (if none of the break inputs tim_brk and tim_brk2 is active) */
    constexpr std::uint32_t TIM1_BDTR_AOE_B_0x1 = 1;

    /** @brief Main output enable */
    using TIM1_BDTR_MOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: In response to a break 2 event. (value: 0)
     *          - B_0x1: OC and OCN outputs are enabled if their respective enable bits are set (CCxE, CCxNE in TIMx_CCER register). (value: 1)
     */
        /** @brief In response to a break 2 event. */
    constexpr std::uint32_t TIM1_BDTR_MOE_B_0x0 = 0;
        /** @brief OC and OCN outputs are enabled if their respective enable bits are set (CCxE, CCxNE in TIMx_CCER register). */
    constexpr std::uint32_t TIM1_BDTR_MOE_B_0x1 = 1;

    /** @brief Break filter */
    using TIM1_BDTR_BKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0x0 = 0;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=2 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0x1 = 1;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=4 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0x2 = 2;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0x3 = 3;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=6 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0x4 = 4;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0x5 = 5;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0x6 = 6;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0x7 = 7;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0x8 = 8;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0x9 = 9;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0xA = 10;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0xB = 11;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0xC = 12;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0xD = 13;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0xE = 14;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BKF_B_0xF = 15;

    /** @brief Break 2 filter */
    using TIM1_BDTR_BK2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No filter, tim_brk2 acts asynchronously (value: 0)
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
        /** @brief No filter, tim_brk2 acts asynchronously */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0x0 = 0;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=2 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0x1 = 1;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=4 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0x2 = 2;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>tim_ker_ckless than/sub>, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0x3 = 3;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=6 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0x4 = 4;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/2, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0x5 = 5;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=6 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0x6 = 6;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/4, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0x7 = 7;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=6 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0x8 = 8;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/8, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0x9 = 9;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=5 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0xA = 10;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=6 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0xB = 11;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/16, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0xC = 12;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=5 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0xD = 13;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=6 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0xE = 14;
        /** @brief fless thansub>SAMPLINGless than/sub>=fless thansub>DTSless than/sub>/32, N=8 */
    constexpr std::uint32_t TIM1_BDTR_BK2F_B_0xF = 15;

    /** @brief Break 2 enable */
    using TIM1_BDTR_BK2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break2 function disabled (value: 0)
     *          - B_0x1: Break2 function enabled (value: 1)
     */
        /** @brief Break2 function disabled */
    constexpr std::uint32_t TIM1_BDTR_BK2E_B_0x0 = 0;
        /** @brief Break2 function enabled */
    constexpr std::uint32_t TIM1_BDTR_BK2E_B_0x1 = 1;

    /** @brief Break 2 polarity */
    using TIM1_BDTR_BK2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break input tim_brk2 is active low (value: 0)
     *          - B_0x1: Break input tim_brk2 is active high (value: 1)
     */
        /** @brief Break input tim_brk2 is active low */
    constexpr std::uint32_t TIM1_BDTR_BK2P_B_0x0 = 0;
        /** @brief Break input tim_brk2 is active high */
    constexpr std::uint32_t TIM1_BDTR_BK2P_B_0x1 = 1;

    /** @brief Break disarm */
    using TIM1_BDTR_BKDSRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break input tim_brk is armed (value: 0)
     *          - B_0x1: Break input tim_brk is disarmed (value: 1)
     */
        /** @brief Break input tim_brk is armed */
    constexpr std::uint32_t TIM1_BDTR_BKDSRM_B_0x0 = 0;
        /** @brief Break input tim_brk is disarmed */
    constexpr std::uint32_t TIM1_BDTR_BKDSRM_B_0x1 = 1;

    /** @brief Break2 disarm */
    using TIM1_BDTR_BK2DSRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Break bidirectional */
    using TIM1_BDTR_BKBID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Break input tim_brk in input mode (value: 0)
     *          - B_0x1: Break input tim_brk in bidirectional mode (value: 1)
     */
        /** @brief Break input tim_brk in input mode */
    constexpr std::uint32_t TIM1_BDTR_BKBID_B_0x0 = 0;
        /** @brief Break input tim_brk in bidirectional mode */
    constexpr std::uint32_t TIM1_BDTR_BKBID_B_0x1 = 1;

    /** @brief Break2 bidirectional */
    using TIM1_BDTR_BK2BID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 capture/compare register 5 */
    using TIM1_CCR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 5 value */
    using TIM1_CCR5_CCR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Group channel 5 and channel 1 */
    using TIM1_CCR5_GC5C1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect of oc5ref on oc1refc (value: 0)
     *          - B_0x1: oc1refc is the logical AND of oc1ref and oc5ref (value: 1)
     */
        /** @brief No effect of oc5ref on oc1refc */
    constexpr std::uint32_t TIM1_CCR5_GC5C1_B_0x0 = 0;
        /** @brief oc1refc is the logical AND of oc1ref and oc5ref */
    constexpr std::uint32_t TIM1_CCR5_GC5C1_B_0x1 = 1;

    /** @brief Group channel 5 and channel 2 */
    using TIM1_CCR5_GC5C2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect of tim_oc5ref on tim_oc2refc (value: 0)
     *          - B_0x1: tim_oc2refc is the logical AND of tim_oc2ref and tim_oc5ref (value: 1)
     */
        /** @brief No effect of tim_oc5ref on tim_oc2refc */
    constexpr std::uint32_t TIM1_CCR5_GC5C2_B_0x0 = 0;
        /** @brief tim_oc2refc is the logical AND of tim_oc2ref and tim_oc5ref */
    constexpr std::uint32_t TIM1_CCR5_GC5C2_B_0x1 = 1;

    /** @brief Group channel 5 and channel 3 */
    using TIM1_CCR5_GC5C3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect of tim_oc5ref on tim_oc3refc (value: 0)
     *          - B_0x1: tim_oc3refc is the logical AND of tim_oc3ref and tim_oc5ref (value: 1)
     */
        /** @brief No effect of tim_oc5ref on tim_oc3refc */
    constexpr std::uint32_t TIM1_CCR5_GC5C3_B_0x0 = 0;
        /** @brief tim_oc3refc is the logical AND of tim_oc3ref and tim_oc5ref */
    constexpr std::uint32_t TIM1_CCR5_GC5C3_B_0x1 = 1;

    /** @brief TIM1 capture/compare register 6 */
    using TIM1_CCR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 6 value */
    using TIM1_CCR6_CCR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 capture/compare mode register 3 */
    using TIM1_CCMR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 5 fast enable */
    using TIM1_CCMR3_OC5FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 5 preload enable */
    using TIM1_CCMR3_OC5PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC5M[2:0]: Output compare 5 mode */
    using TIM1_CCMR3_OC5M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 5 clear enable */
    using TIM1_CCMR3_OC5CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 6 fast enable */
    using TIM1_CCMR3_OC6FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 6 preload enable */
    using TIM1_CCMR3_OC6PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC6M[2:0]: Output compare 6 mode */
    using TIM1_CCMR3_OC6M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output compare 6 clear enable */
    using TIM1_CCMR3_OC6CE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC5M[3] */
    using TIM1_CCMR3_OC5M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OC6M[3] */
    using TIM1_CCMR3_OC6M_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 timer deadtime register 2 */
    using TIM1_DTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dead-time falling edge generator setup */
    using TIM1_DTR2_DTGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Deadtime asymmetric enable */
    using TIM1_DTR2_DTAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Deadtime on rising and falling edges are identical, and defined with DTG[7:0] register (value: 0)
     *          - B_0x1: Deadtime on rising edge is defined with DTG[7:0] register and deadtime on falling edge is defined with DTGF[7:0] bits. (value: 1)
     */
        /** @brief Deadtime on rising and falling edges are identical, and defined with DTG[7:0] register */
    constexpr std::uint32_t TIM1_DTR2_DTAE_B_0x0 = 0;
        /** @brief Deadtime on rising edge is defined with DTG[7:0] register and deadtime on falling edge is defined with DTGF[7:0] bits. */
    constexpr std::uint32_t TIM1_DTR2_DTAE_B_0x1 = 1;

    /** @brief Deadtime preload enable */
    using TIM1_DTR2_DTPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Deadtime value is not preloaded (value: 0)
     *          - B_0x1: Deadtime value preload is enabled (value: 1)
     */
        /** @brief Deadtime value is not preloaded */
    constexpr std::uint32_t TIM1_DTR2_DTPE_B_0x0 = 0;
        /** @brief Deadtime value preload is enabled */
    constexpr std::uint32_t TIM1_DTR2_DTPE_B_0x1 = 1;

    /** @brief TIM1 timer encoder control register */
    using TIM1_ECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Index enable */
    using TIM1_ECR_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index disabled (value: 0)
     *          - B_0x1: Index enabled (value: 1)
     */
        /** @brief Index disabled */
    constexpr std::uint32_t TIM1_ECR_IE_B_0x0 = 0;
        /** @brief Index enabled */
    constexpr std::uint32_t TIM1_ECR_IE_B_0x1 = 1;

    /** @brief Index direction */
    using TIM1_ECR_IDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index resets the counter whatever the direction (value: 0)
     *          - B_0x1: Index resets the counter when up-counting only (value: 1)
     *          - B_0x2: Index resets the counter when down-counting only (value: 2)
     */
        /** @brief Index resets the counter whatever the direction */
    constexpr std::uint32_t TIM1_ECR_IDIR_B_0x0 = 0;
        /** @brief Index resets the counter when up-counting only */
    constexpr std::uint32_t TIM1_ECR_IDIR_B_0x1 = 1;
        /** @brief Index resets the counter when down-counting only */
    constexpr std::uint32_t TIM1_ECR_IDIR_B_0x2 = 2;

    /** @brief Index blanking */
    using TIM1_ECR_IBLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index always active (value: 0)
     *          - B_0x1: Index disabled when tim_ti3 input is active, as per CC3P bit field (value: 1)
     *          - B_0x2: Index disabled when tim_ti4 input is active, as per CC4P bit field (value: 2)
     */
        /** @brief Index always active */
    constexpr std::uint32_t TIM1_ECR_IBLK_B_0x0 = 0;
        /** @brief Index disabled when tim_ti3 input is active, as per CC3P bit field */
    constexpr std::uint32_t TIM1_ECR_IBLK_B_0x1 = 1;
        /** @brief Index disabled when tim_ti4 input is active, as per CC4P bit field */
    constexpr std::uint32_t TIM1_ECR_IBLK_B_0x2 = 2;

    /** @brief First index */
    using TIM1_ECR_FIDX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index is always active (value: 0)
     *          - B_0x1: the first Index only resets the counter (value: 1)
     */
        /** @brief Index is always active */
    constexpr std::uint32_t TIM1_ECR_FIDX_B_0x0 = 0;
        /** @brief the first Index only resets the counter */
    constexpr std::uint32_t TIM1_ECR_FIDX_B_0x1 = 1;

    /** @brief Index positioning */
    using TIM1_ECR_IPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Index resets the counter when AB = 00 (value: 0)
     *          - B_0x1: Index resets the counter when AB = 01 (value: 1)
     *          - B_0x2: Index resets the counter when AB = 10 (value: 2)
     *          - B_0x3: Index resets the counter when AB = 11 (value: 3)
     */
        /** @brief Index resets the counter when AB = 00 */
    constexpr std::uint32_t TIM1_ECR_IPOS_B_0x0 = 0;
        /** @brief Index resets the counter when AB = 01 */
    constexpr std::uint32_t TIM1_ECR_IPOS_B_0x1 = 1;
        /** @brief Index resets the counter when AB = 10 */
    constexpr std::uint32_t TIM1_ECR_IPOS_B_0x2 = 2;
        /** @brief Index resets the counter when AB = 11 */
    constexpr std::uint32_t TIM1_ECR_IPOS_B_0x3 = 3;

    /** @brief Pulse width */
    using TIM1_ECR_PW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pulse width prescaler */
    using TIM1_ECR_PWPRSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 timer input selection register */
    using TIM1_TISEL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Selects tim_ti1[15:0] input */
    using TIM1_TISEL_TI1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ti1_in0: TIMx_CH1 (value: 0)
     *          - B_0x1: tim_ti1_in1 (value: 1)
     *          - B_0xF: tim_ti1_in15 (value: 15)
     */
        /** @brief tim_ti1_in0: TIMx_CH1 */
    constexpr std::uint32_t TIM1_TISEL_TI1SEL_B_0x0 = 0;
        /** @brief tim_ti1_in1 */
    constexpr std::uint32_t TIM1_TISEL_TI1SEL_B_0x1 = 1;
        /** @brief tim_ti1_in15 */
    constexpr std::uint32_t TIM1_TISEL_TI1SEL_B_0xF = 15;

    /** @brief Selects tim_ti2[15:0] input */
    using TIM1_TISEL_TI2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ti2_in0: TIMx_CH2 (value: 0)
     *          - B_0x1: tim_ti2_in1 (value: 1)
     *          - B_0xF: tim_ti2_in15 (value: 15)
     */
        /** @brief tim_ti2_in0: TIMx_CH2 */
    constexpr std::uint32_t TIM1_TISEL_TI2SEL_B_0x0 = 0;
        /** @brief tim_ti2_in1 */
    constexpr std::uint32_t TIM1_TISEL_TI2SEL_B_0x1 = 1;
        /** @brief tim_ti2_in15 */
    constexpr std::uint32_t TIM1_TISEL_TI2SEL_B_0xF = 15;

    /** @brief Selects tim_ti3[15:0] input */
    using TIM1_TISEL_TI3SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ti3_in0: TIMx_CH2 (value: 0)
     *          - B_0x1: tim_ti3_in1 (value: 1)
     *          - B_0xF: tim_ti3_in15 (value: 15)
     */
        /** @brief tim_ti3_in0: TIMx_CH2 */
    constexpr std::uint32_t TIM1_TISEL_TI3SEL_B_0x0 = 0;
        /** @brief tim_ti3_in1 */
    constexpr std::uint32_t TIM1_TISEL_TI3SEL_B_0x1 = 1;
        /** @brief tim_ti3_in15 */
    constexpr std::uint32_t TIM1_TISEL_TI3SEL_B_0xF = 15;

    /** @brief Selects tim_ti4[15:0] input */
    using TIM1_TISEL_TI4SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ti4_in0: TIMx_CH4 (value: 0)
     *          - B_0x1: tim_ti4_in1 (value: 1)
     *          - B_0xF: tim_ti4_in15 (value: 15)
     */
        /** @brief tim_ti4_in0: TIMx_CH4 */
    constexpr std::uint32_t TIM1_TISEL_TI4SEL_B_0x0 = 0;
        /** @brief tim_ti4_in1 */
    constexpr std::uint32_t TIM1_TISEL_TI4SEL_B_0x1 = 1;
        /** @brief tim_ti4_in15 */
    constexpr std::uint32_t TIM1_TISEL_TI4SEL_B_0xF = 15;

    /** @brief TIM1 alternate function option register 1 */
    using TIM1_AF1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMx_BKIN input enable */
    using TIM1_AF1_BKINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_BKIN input disabled (value: 0)
     *          - B_0x1: TIMx_BKIN input enabled (value: 1)
     */
        /** @brief TIMx_BKIN input disabled */
    constexpr std::uint32_t TIM1_AF1_BKINE_B_0x0 = 0;
        /** @brief TIMx_BKIN input enabled */
    constexpr std::uint32_t TIM1_AF1_BKINE_B_0x1 = 1;

    /** @brief tim_brk_cmp1 enable */
    using TIM1_AF1_BKCMP1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp1 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp1 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp1 input disabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP1E_B_0x0 = 0;
        /** @brief tim_brk_cmp1 input enabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP1E_B_0x1 = 1;

    /** @brief tim_brk_cmp2 enable */
    using TIM1_AF1_BKCMP2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp2 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp2 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp2 input disabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP2E_B_0x0 = 0;
        /** @brief tim_brk_cmp2 input enabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP2E_B_0x1 = 1;

    /** @brief tim_brk_cmp3 enable */
    using TIM1_AF1_BKCMP3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp3 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp3 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp3 input disabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP3E_B_0x0 = 0;
        /** @brief tim_brk_cmp3 input enabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP3E_B_0x1 = 1;

    /** @brief tim_brk_cmp4 enable */
    using TIM1_AF1_BKCMP4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp4 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp4 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp4 input disabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP4E_B_0x0 = 0;
        /** @brief tim_brk_cmp4 input enabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP4E_B_0x1 = 1;

    /** @brief tim_brk_cmp5 enable */
    using TIM1_AF1_BKCMP5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp5 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp5 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp5 input disabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP5E_B_0x0 = 0;
        /** @brief tim_brk_cmp5 input enabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP5E_B_0x1 = 1;

    /** @brief tim_brk_cmp6 enable */
    using TIM1_AF1_BKCMP6E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp6 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp6 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp6 input disabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP6E_B_0x0 = 0;
        /** @brief tim_brk_cmp6 input enabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP6E_B_0x1 = 1;

    /** @brief tim_brk_cmp7 enable */
    using TIM1_AF1_BKCMP7E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp7 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp7 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp7 input disabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP7E_B_0x0 = 0;
        /** @brief tim_brk_cmp7 input enabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP7E_B_0x1 = 1;

    /** @brief tim_brk_cmp8 enable */
    using TIM1_AF1_BKCMP8E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp8 input disabled (value: 0)
     *          - B_0x1: tim_brk_cmp8 input enabled (value: 1)
     */
        /** @brief tim_brk_cmp8 input disabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP8E_B_0x0 = 0;
        /** @brief tim_brk_cmp8 input enabled */
    constexpr std::uint32_t TIM1_AF1_BKCMP8E_B_0x1 = 1;

    /** @brief TIMx_BKIN input polarity */
    using TIM1_AF1_BKINP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_BKIN input polarity is not inverted (active low if BKP=0, active high if BKP=1) (value: 0)
     *          - B_0x1: TIMx_BKIN input polarity is inverted (active high if BKP=0, active low if BKP=1) (value: 1)
     */
        /** @brief TIMx_BKIN input polarity is not inverted (active low if BKP=0, active high if BKP=1) */
    constexpr std::uint32_t TIM1_AF1_BKINP_B_0x0 = 0;
        /** @brief TIMx_BKIN input polarity is inverted (active high if BKP=0, active low if BKP=1) */
    constexpr std::uint32_t TIM1_AF1_BKINP_B_0x1 = 1;

    /** @brief tim_brk_cmp1 input polarity */
    using TIM1_AF1_BKCMP1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp1 input polarity is not inverted (active low if BKP=0, active high if BKP=1) (value: 0)
     *          - B_0x1: tim_brk_cmp1 input polarity is inverted (active high if BKP=0, active low if BKP=1) (value: 1)
     */
        /** @brief tim_brk_cmp1 input polarity is not inverted (active low if BKP=0, active high if BKP=1) */
    constexpr std::uint32_t TIM1_AF1_BKCMP1P_B_0x0 = 0;
        /** @brief tim_brk_cmp1 input polarity is inverted (active high if BKP=0, active low if BKP=1) */
    constexpr std::uint32_t TIM1_AF1_BKCMP1P_B_0x1 = 1;

    /** @brief tim_brk_cmp2 input polarity */
    using TIM1_AF1_BKCMP2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp2 input polarity is not inverted (active low if BKP=0, active high if BKP=1) (value: 0)
     *          - B_0x1: tim_brk_cmp2 input polarity is inverted (active high if BKP=0, active low if BKP=1) (value: 1)
     */
        /** @brief tim_brk_cmp2 input polarity is not inverted (active low if BKP=0, active high if BKP=1) */
    constexpr std::uint32_t TIM1_AF1_BKCMP2P_B_0x0 = 0;
        /** @brief tim_brk_cmp2 input polarity is inverted (active high if BKP=0, active low if BKP=1) */
    constexpr std::uint32_t TIM1_AF1_BKCMP2P_B_0x1 = 1;

    /** @brief tim_brk_cmp3 input polarity */
    using TIM1_AF1_BKCMP3P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp3 input polarity is not inverted (active low if BKP=0, active high if BKP=1) (value: 0)
     *          - B_0x1: tim_brk_cmp3 input polarity is inverted (active high if BKP=0, active low if BKP=1) (value: 1)
     */
        /** @brief tim_brk_cmp3 input polarity is not inverted (active low if BKP=0, active high if BKP=1) */
    constexpr std::uint32_t TIM1_AF1_BKCMP3P_B_0x0 = 0;
        /** @brief tim_brk_cmp3 input polarity is inverted (active high if BKP=0, active low if BKP=1) */
    constexpr std::uint32_t TIM1_AF1_BKCMP3P_B_0x1 = 1;

    /** @brief tim_brk_cmp4 input polarity */
    using TIM1_AF1_BKCMP4P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk_cmp4 input polarity is not inverted (active low if BKP=0, active high if BKP=1) (value: 0)
     *          - B_0x1: tim_brk_cmp4 input polarity is inverted (active high if BKP=0, active low if BKP=1) (value: 1)
     */
        /** @brief tim_brk_cmp4 input polarity is not inverted (active low if BKP=0, active high if BKP=1) */
    constexpr std::uint32_t TIM1_AF1_BKCMP4P_B_0x0 = 0;
        /** @brief tim_brk_cmp4 input polarity is inverted (active high if BKP=0, active low if BKP=1) */
    constexpr std::uint32_t TIM1_AF1_BKCMP4P_B_0x1 = 1;

    /** @brief etr_in source selection */
    using TIM1_AF1_ETRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_etr0: TIMx_ETR input (value: 0)
     *          - B_0x1: tim_etr1 (value: 1)
     *          - B_0xF: tim_etr15 (value: 15)
     */
        /** @brief tim_etr0: TIMx_ETR input */
    constexpr std::uint32_t TIM1_AF1_ETRSEL_B_0x0 = 0;
        /** @brief tim_etr1 */
    constexpr std::uint32_t TIM1_AF1_ETRSEL_B_0x1 = 1;
        /** @brief tim_etr15 */
    constexpr std::uint32_t TIM1_AF1_ETRSEL_B_0xF = 15;

    /** @brief TIM1 alternate function register 2 */
    using TIM1_AF2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMx_BKIN2 input enable */
    using TIM1_AF2_BK2INE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_BKIN2 input disabled (value: 0)
     *          - B_0x1: TIMx_BKIN2 input enabled (value: 1)
     */
        /** @brief TIMx_BKIN2 input disabled */
    constexpr std::uint32_t TIM1_AF2_BK2INE_B_0x0 = 0;
        /** @brief TIMx_BKIN2 input enabled */
    constexpr std::uint32_t TIM1_AF2_BK2INE_B_0x1 = 1;

    /** @brief tim_brk2_cmp1 enable */
    using TIM1_AF2_BK2CMP1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp1 input disabled (value: 0)
     *          - B_0x1: tim_brk2_cmp1 input enabled (value: 1)
     */
        /** @brief tim_brk2_cmp1 input disabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP1E_B_0x0 = 0;
        /** @brief tim_brk2_cmp1 input enabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP1E_B_0x1 = 1;

    /** @brief tim_brk2_cmp2 enable */
    using TIM1_AF2_BK2CMP2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp2 input disabled (value: 0)
     *          - B_0x1: tim_brk2_cmp2 input enabled (value: 1)
     */
        /** @brief tim_brk2_cmp2 input disabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP2E_B_0x0 = 0;
        /** @brief tim_brk2_cmp2 input enabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP2E_B_0x1 = 1;

    /** @brief tim_brk2_cmp3 enable */
    using TIM1_AF2_BK2CMP3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp3 input disabled (value: 0)
     *          - B_0x1: tim_brk2_cmp3 input enabled (value: 1)
     */
        /** @brief tim_brk2_cmp3 input disabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP3E_B_0x0 = 0;
        /** @brief tim_brk2_cmp3 input enabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP3E_B_0x1 = 1;

    /** @brief tim_brk2_cmp4 enable */
    using TIM1_AF2_BK2CMP4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp4 input disabled (value: 0)
     *          - B_0x1: tim_brk2_cmp4 input enabled (value: 1)
     */
        /** @brief tim_brk2_cmp4 input disabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP4E_B_0x0 = 0;
        /** @brief tim_brk2_cmp4 input enabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP4E_B_0x1 = 1;

    /** @brief tim_brk2_cmp5 enable */
    using TIM1_AF2_BK2CMP5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp5 input disabled (value: 0)
     *          - B_0x1: tim_brk2_cmp5 input enabled (value: 1)
     */
        /** @brief tim_brk2_cmp5 input disabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP5E_B_0x0 = 0;
        /** @brief tim_brk2_cmp5 input enabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP5E_B_0x1 = 1;

    /** @brief tim_brk2_cmp6 enable */
    using TIM1_AF2_BK2CMP6E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp6 input disabled (value: 0)
     *          - B_0x1: tim_brk2_cmp6 input enabled (value: 1)
     */
        /** @brief tim_brk2_cmp6 input disabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP6E_B_0x0 = 0;
        /** @brief tim_brk2_cmp6 input enabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP6E_B_0x1 = 1;

    /** @brief tim_brk2_cmp7 enable */
    using TIM1_AF2_BK2CMP7E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp7 input disabled (value: 0)
     *          - B_0x1: tim_brk2_cmp7 input enabled (value: 1)
     */
        /** @brief tim_brk2_cmp7 input disabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP7E_B_0x0 = 0;
        /** @brief tim_brk2_cmp7 input enabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP7E_B_0x1 = 1;

    /** @brief tim_brk2_cmp8 enable */
    using TIM1_AF2_BK2CMP8E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp8 input disabled (value: 0)
     *          - B_0x1: tim_brk2_cmp8 input enabled (value: 1)
     */
        /** @brief tim_brk2_cmp8 input disabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP8E_B_0x0 = 0;
        /** @brief tim_brk2_cmp8 input enabled */
    constexpr std::uint32_t TIM1_AF2_BK2CMP8E_B_0x1 = 1;

    /** @brief TIMx_BKIN2 input polarity */
    using TIM1_AF2_BK2INP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_BKIN2 input polarity is not inverted (active low if BK2P=0, active high if BK2P=1) (value: 0)
     *          - B_0x1: TIMx_BKIN2 input polarity is inverted (active high if BK2P=0, active low if BK2P=1) (value: 1)
     */
        /** @brief TIMx_BKIN2 input polarity is not inverted (active low if BK2P=0, active high if BK2P=1) */
    constexpr std::uint32_t TIM1_AF2_BK2INP_B_0x0 = 0;
        /** @brief TIMx_BKIN2 input polarity is inverted (active high if BK2P=0, active low if BK2P=1) */
    constexpr std::uint32_t TIM1_AF2_BK2INP_B_0x1 = 1;

    /** @brief tim_brk2_cmp1 input polarity */
    using TIM1_AF2_BK2CMP1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp1 input polarity is not inverted (active low if BK2P=0, active high if BK2P=1) (value: 0)
     *          - B_0x1: tim_brk2_cmp1 input polarity is inverted (active high if BK2P=0, active low if BK2P=1) (value: 1)
     */
        /** @brief tim_brk2_cmp1 input polarity is not inverted (active low if BK2P=0, active high if BK2P=1) */
    constexpr std::uint32_t TIM1_AF2_BK2CMP1P_B_0x0 = 0;
        /** @brief tim_brk2_cmp1 input polarity is inverted (active high if BK2P=0, active low if BK2P=1) */
    constexpr std::uint32_t TIM1_AF2_BK2CMP1P_B_0x1 = 1;

    /** @brief tim_brk2_cmp2 input polarity */
    using TIM1_AF2_BK2CMP2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp2 input polarity is not inverted (active low if BK2P=0, active high if BK2P=1) (value: 0)
     *          - B_0x1: tim_brk2_cmp2 input polarity is inverted (active high if BK2P=0, active low if BK2P=1) (value: 1)
     */
        /** @brief tim_brk2_cmp2 input polarity is not inverted (active low if BK2P=0, active high if BK2P=1) */
    constexpr std::uint32_t TIM1_AF2_BK2CMP2P_B_0x0 = 0;
        /** @brief tim_brk2_cmp2 input polarity is inverted (active high if BK2P=0, active low if BK2P=1) */
    constexpr std::uint32_t TIM1_AF2_BK2CMP2P_B_0x1 = 1;

    /** @brief tim_brk2_cmp3 input polarity */
    using TIM1_AF2_BK2CMP3P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp3 input polarity is not inverted (active low if BK2P=0, active high if BK2P=1) (value: 0)
     *          - B_0x1: tim_brk2_cmp3 input polarity is inverted (active high if BK2P=0, active low if BK2P=1) (value: 1)
     */
        /** @brief tim_brk2_cmp3 input polarity is not inverted (active low if BK2P=0, active high if BK2P=1) */
    constexpr std::uint32_t TIM1_AF2_BK2CMP3P_B_0x0 = 0;
        /** @brief tim_brk2_cmp3 input polarity is inverted (active high if BK2P=0, active low if BK2P=1) */
    constexpr std::uint32_t TIM1_AF2_BK2CMP3P_B_0x1 = 1;

    /** @brief tim_brk2_cmp4 input polarity */
    using TIM1_AF2_BK2CMP4P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_brk2_cmp4 input polarity is not inverted (active low if BK2P=0, active high if BK2P=1) (value: 0)
     *          - B_0x1: tim_brk2_cmp4 input polarity is inverted (active high if BK2P=0, active low if BK2P=1) (value: 1)
     */
        /** @brief tim_brk2_cmp4 input polarity is not inverted (active low if BK2P=0, active high if BK2P=1) */
    constexpr std::uint32_t TIM1_AF2_BK2CMP4P_B_0x0 = 0;
        /** @brief tim_brk2_cmp4 input polarity is inverted (active high if BK2P=0, active low if BK2P=1) */
    constexpr std::uint32_t TIM1_AF2_BK2CMP4P_B_0x1 = 1;

    /** @brief ocref_clr source selection */
    using TIM1_AF2_OCRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: tim_ocref_clr0 (value: 0)
     *          - B_0x1: tim_ocref_clr1 (value: 1)
     *          - B_0x7: tim_ocref_clr7 (value: 7)
     */
        /** @brief tim_ocref_clr0 */
    constexpr std::uint32_t TIM1_AF2_OCRSEL_B_0x0 = 0;
        /** @brief tim_ocref_clr1 */
    constexpr std::uint32_t TIM1_AF2_OCRSEL_B_0x1 = 1;
        /** @brief tim_ocref_clr7 */
    constexpr std::uint32_t TIM1_AF2_OCRSEL_B_0x7 = 7;

    /** @brief TIM1 DMA control register */
    using TIM1_DCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA base address */
    using TIM1_DCR_DBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_CR1 (value: 0)
     *          - B_0x1: TIMx_CR2 (value: 1)
     *          - B_0x2: TIMx_SMCR (value: 2)
     */
        /** @brief TIMx_CR1 */
    constexpr std::uint32_t TIM1_DCR_DBA_B_0x0 = 0;
        /** @brief TIMx_CR2 */
    constexpr std::uint32_t TIM1_DCR_DBA_B_0x1 = 1;
        /** @brief TIMx_SMCR */
    constexpr std::uint32_t TIM1_DCR_DBA_B_0x2 = 2;

    /** @brief DMA burst length */
    using TIM1_DCR_DBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 transfer (value: 0)
     *          - B_0x1: 2 transfers (value: 1)
     *          - B_0x2: 3 transfers (value: 2)
     *          - B_0x1A: 26 transfers (value: 26)
     */
        /** @brief 1 transfer */
    constexpr std::uint32_t TIM1_DCR_DBL_B_0x0 = 0;
        /** @brief 2 transfers */
    constexpr std::uint32_t TIM1_DCR_DBL_B_0x1 = 1;
        /** @brief 3 transfers */
    constexpr std::uint32_t TIM1_DCR_DBL_B_0x2 = 2;
        /** @brief 26 transfers */
    constexpr std::uint32_t TIM1_DCR_DBL_B_0x1A = 26;

    /** @brief DMA burst source selection */
    using TIM1_DCR_DBSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t TIM1_DCR_DBSS_B_0x1 = 1;
        /** @brief CC1 */
    constexpr std::uint32_t TIM1_DCR_DBSS_B_0x2 = 2;
        /** @brief CC2 */
    constexpr std::uint32_t TIM1_DCR_DBSS_B_0x3 = 3;
        /** @brief CC3 */
    constexpr std::uint32_t TIM1_DCR_DBSS_B_0x4 = 4;
        /** @brief CC4 */
    constexpr std::uint32_t TIM1_DCR_DBSS_B_0x5 = 5;
        /** @brief COM */
    constexpr std::uint32_t TIM1_DCR_DBSS_B_0x6 = 6;
        /** @brief Trigger */
    constexpr std::uint32_t TIM1_DCR_DBSS_B_0x7 = 7;

    /** @brief TIM1 DMA address for full transfer */
    using TIM1_DMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA register for burst accesses */
    using TIM1_DMAR_DMAB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
