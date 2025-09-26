/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G483_TIM6_HPP
#define EMBEDDED_PP_STM32G483_TIM6_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Basic-timers */
namespace STM32G483::TIM6 {

    /** @brief TIM6 control register 1 */
    using TIM6_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter enable */
    using TIM6_CR1_CEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter disabled (value: 0)
     *          - B_0x1: Counter enabled (value: 1)
     */
        /** @brief Counter disabled */
    constexpr std::uint16_t TIM6_CR1_CEN_B_0x0 = 0;
        /** @brief Counter enabled */
    constexpr std::uint16_t TIM6_CR1_CEN_B_0x1 = 1;

    /** @brief Update disable */
    using TIM6_CR1_UDIS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UEV enabled. (value: 0)
     *          - B_0x1: UEV disabled. (value: 1)
     */
        /** @brief UEV enabled. */
    constexpr std::uint16_t TIM6_CR1_UDIS_B_0x0 = 0;
        /** @brief UEV disabled. */
    constexpr std::uint16_t TIM6_CR1_UDIS_B_0x1 = 1;

    /** @brief Update request source */
    using TIM6_CR1_URS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any of the following events generates an update interrupt or DMA request if enabled. (value: 0)
     *          - B_0x1: Only counter overflow/underflow generates an update interrupt or DMA request if enabled. (value: 1)
     */
        /** @brief Any of the following events generates an update interrupt or DMA request if enabled. */
    constexpr std::uint16_t TIM6_CR1_URS_B_0x0 = 0;
        /** @brief Only counter overflow/underflow generates an update interrupt or DMA request if enabled. */
    constexpr std::uint16_t TIM6_CR1_URS_B_0x1 = 1;

    /** @brief One-pulse mode */
    using TIM6_CR1_OPM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Counter is not stopped at update event (value: 0)
     *          - B_0x1: Counter stops counting at the next update event (clearing the CEN bit). (value: 1)
     */
        /** @brief Counter is not stopped at update event */
    constexpr std::uint16_t TIM6_CR1_OPM_B_0x0 = 0;
        /** @brief Counter stops counting at the next update event (clearing the CEN bit). */
    constexpr std::uint16_t TIM6_CR1_OPM_B_0x1 = 1;

    /** @brief Auto-reload preload enable */
    using TIM6_CR1_ARPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMx_ARR register is not buffered. (value: 0)
     *          - B_0x1: TIMx_ARR register is buffered. (value: 1)
     */
        /** @brief TIMx_ARR register is not buffered. */
    constexpr std::uint16_t TIM6_CR1_ARPE_B_0x0 = 0;
        /** @brief TIMx_ARR register is buffered. */
    constexpr std::uint16_t TIM6_CR1_ARPE_B_0x1 = 1;

    /** @brief UIF status bit remapping */
    using TIM6_CR1_UIFREMAP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No remapping. (value: 0)
     *          - B_0x1: Remapping enabled. (value: 1)
     */
        /** @brief No remapping. */
    constexpr std::uint16_t TIM6_CR1_UIFREMAP_B_0x0 = 0;
        /** @brief Remapping enabled. */
    constexpr std::uint16_t TIM6_CR1_UIFREMAP_B_0x1 = 1;

    /** @brief Dithering enable */
    using TIM6_CR1_DITHEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dithering disabled (value: 0)
     *          - B_0x1: Dithering enabled (value: 1)
     */
        /** @brief Dithering disabled */
    constexpr std::uint16_t TIM6_CR1_DITHEN_B_0x0 = 0;
        /** @brief Dithering enabled */
    constexpr std::uint16_t TIM6_CR1_DITHEN_B_0x1 = 1;

    /** @brief TIM6 control register 2 */
    using TIM6_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master mode selection */
    using TIM6_CR2_MMS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset - the UG bit from the TIMx_EGR register is used as a trigger output (tim_trgo). (value: 0)
     *          - B_0x1: Enable - the Counter enable signal, tim_cnt_en, is used as a trigger output (tim_trgo). (value: 1)
     *          - B_0x2: Update - The update event is selected as a trigger output (tim_trgo). (value: 2)
     */
        /** @brief Reset - the UG bit from the TIMx_EGR register is used as a trigger output (tim_trgo). */
    constexpr std::uint16_t TIM6_CR2_MMS_B_0x0 = 0;
        /** @brief Enable - the Counter enable signal, tim_cnt_en, is used as a trigger output (tim_trgo). */
    constexpr std::uint16_t TIM6_CR2_MMS_B_0x1 = 1;
        /** @brief Update - The update event is selected as a trigger output (tim_trgo). */
    constexpr std::uint16_t TIM6_CR2_MMS_B_0x2 = 2;

    /** @brief TIM6 DMA/Interrupt enable register */
    using TIM6_DIER = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt enable */
    using TIM6_DIER_UIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update interrupt disabled. (value: 0)
     *          - B_0x1: Update interrupt enabled. (value: 1)
     */
        /** @brief Update interrupt disabled. */
    constexpr std::uint16_t TIM6_DIER_UIE_B_0x0 = 0;
        /** @brief Update interrupt enabled. */
    constexpr std::uint16_t TIM6_DIER_UIE_B_0x1 = 1;

    /** @brief Update DMA request enable */
    using TIM6_DIER_UDE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update DMA request disabled. (value: 0)
     *          - B_0x1: Update DMA request enabled. (value: 1)
     */
        /** @brief Update DMA request disabled. */
    constexpr std::uint16_t TIM6_DIER_UDE_B_0x0 = 0;
        /** @brief Update DMA request enabled. */
    constexpr std::uint16_t TIM6_DIER_UDE_B_0x1 = 1;

    /** @brief TIM6 status register */
    using TIM6_SR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update interrupt flag */
    using TIM6_SR_UIF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No update occurred. (value: 0)
     *          - B_0x1: Update interrupt pending. (value: 1)
     */
        /** @brief No update occurred. */
    constexpr std::uint16_t TIM6_SR_UIF_B_0x0 = 0;
        /** @brief Update interrupt pending. */
    constexpr std::uint16_t TIM6_SR_UIF_B_0x1 = 1;

    /** @brief TIM6 event generation register */
    using TIM6_EGR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update generation */
    using TIM6_EGR_UG = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action. (value: 0)
     *          - B_0x1: Re-initializes the timer counter and generates an update of the registers. (value: 1)
     */
        /** @brief No action. */
    constexpr std::uint16_t TIM6_EGR_UG_B_0x0 = 0;
        /** @brief Re-initializes the timer counter and generates an update of the registers. */
    constexpr std::uint16_t TIM6_EGR_UG_B_0x1 = 1;

    /** @brief TIM6 counter */
    using TIM6_CNT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TIM6_CNT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UIF copy */
    using TIM6_CNT_UIFCPY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 prescaler */
    using TIM6_PSC = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler value */
    using TIM6_PSC_PSC = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 auto-reload register */
    using TIM6_ARR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto-reload value */
    using TIM6_ARR_ARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
