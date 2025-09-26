/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_LPTIM2_HPP
#define EMBEDDED_PP_STM32H7S_LPTIM2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Low power timer */
namespace STM32H7S::LPTIM2 {

    /** @brief LPTIM2 interrupt and status register */
    using LPTIM2_ISR_OUTPUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare 1 interrupt flag If channel CC1 is configured as output: The CC1IF flag is set by hardware to inform application that LPTIM_CNT register value matches the compare register's value. CC1IF flag can be cleared by writing 1 to the CC1CF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_OUTPUT_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No match (value: 0)
     *          - B_0x1: The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR1 register's value (value: 1)
     */
        /** @brief No match */
    constexpr std::uint32_t LPTIM2_ISR_OUTPUT_CC1IF_B_0x0 = 0;
        /** @brief The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR1 register's value */
    constexpr std::uint32_t LPTIM2_ISR_OUTPUT_CC1IF_B_0x1 = 1;

    /** @brief Autoreload match ARRM is set by hardware to inform application that LPTIM_CNT registers value reached the LPTIM_ARR registers value. ARRM flag can be cleared by writing 1 to the ARRMCF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_OUTPUT_ARRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger edge event EXTTRIG is set by hardware to inform application that a valid edge on the selected external trigger input has occurred. If the trigger is ignored because the timer has already started, then this flag is not set. EXTTRIG flag can be cleared by writing 1 to the EXTTRIGCF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_OUTPUT_EXTTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register 1 update OK CMP1OK is set by hardware to inform application that the APB bus write operation to the LPTIM_CCR1 register has been successfully completed. CMP1OK flag can be cleared by writing 1 to the CMP1OKCF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_OUTPUT_CMP1OK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK ARROK is set by hardware to inform application that the APB bus write operation to the LPTIM_ARR register has been successfully completed. ARROK flag can be cleared by writing 1 to the ARROKCF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_OUTPUT_ARROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change down to up In Encoder mode, UP bit is set by hardware to inform application that the counter direction has changed from down to up. UP flag can be cleared by writing 1 to the UPCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ISR_OUTPUT_UP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change up to down In Encoder mode, DOWN bit is set by hardware to inform application that the counter direction has changed from up to down. DOWN flag can be cleared by writing 1 to the DOWNCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ISR_OUTPUT_DOWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM update event occurred UE is set by hardware to inform application that an update event was generated. The corresponding interrupt or DMA request is generated if enabled. UE flag can be cleared by writing 1 to the UECF bit in the LPTIM_ICR register. The UE flag is automatically cleared by hardware once the LPTIM_ARR register is written by any bus master like CPU or DMA. */
    using LPTIM2_ISR_OUTPUT_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK REPOK is set by hardware to inform application that the APB bus write operation to the LPTIM_RCR register has been successfully completed. REPOK flag can be cleared by writing 1 to the REPOKCF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_OUTPUT_REPOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare 2 interrupt flag If channel CC2 is configured as output: The CC2IF flag is set by hardware to inform application that LPTIM_CNT register value matches the compare register's value. CC2IF flag can be cleared by writing 1 to the CC2CF bit in the LPTIM_ICR register. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ISR_OUTPUT_CC2IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No match (value: 0)
     *          - B_0x1: The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR2 register's value (value: 1)
     */
        /** @brief No match */
    constexpr std::uint32_t LPTIM2_ISR_OUTPUT_CC2IF_B_0x0 = 0;
        /** @brief The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR2 register's value */
    constexpr std::uint32_t LPTIM2_ISR_OUTPUT_CC2IF_B_0x1 = 1;

    /** @brief Compare register 2 update OK CMP2OK is set by hardware to inform application that the APB bus write operation to the LPTIM_CCR2 register has been successfully completed. CMP2OK flag can be cleared by writing 1 to the CMP2OKCF bit in the LPTIM_ICR register. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ISR_OUTPUT_CMP2OK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register update OK DIEROK is set by hardware to inform application that the APB bus write operation to the LPTIM_DIER register has been successfully completed. DIEROK flag can be cleared by writing 1 to the DIEROKCF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_OUTPUT_DIEROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 interrupt and status register */
    using LPTIM2_ISR_INPUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief capture 1 interrupt flag If channel CC1 is configured as input: CC1IF is set by hardware to inform application that the current value of the counter is captured in LPTIM_CCR1 register. The corresponding interrupt or DMA request is generated if enabled. The CC1OF flag is set if the CC1IF flag was already high. */
    using LPTIM2_ISR_INPUT_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input capture occurred (value: 0)
     *          - B_0x1: The counter value has been captured in the LPTIM_CCR1 register. (An edge has been detected on IC1 which matches the selected polarity). The CC1IF flag is automatically cleared by hardware once the captured value is read (CPU or DMA).CC1IF flag can be cleared by writing 1 to the CC1CF bit in the LPTIM_ICR register. (value: 1)
     */
        /** @brief No input capture occurred */
    constexpr std::uint32_t LPTIM2_ISR_INPUT_CC1IF_B_0x0 = 0;
        /** @brief The counter value has been captured in the LPTIM_CCR1 register. (An edge has been detected on IC1 which matches the selected polarity). The CC1IF flag is automatically cleared by hardware once the captured value is read (CPU or DMA).CC1IF flag can be cleared by writing 1 to the CC1CF bit in the LPTIM_ICR register. */
    constexpr std::uint32_t LPTIM2_ISR_INPUT_CC1IF_B_0x1 = 1;

    /** @brief Autoreload match ARRM is set by hardware to inform application that LPTIM_CNT registers value reached the LPTIM_ARR registers value. ARRM flag can be cleared by writing 1 to the ARRMCF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_INPUT_ARRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger edge event EXTTRIG is set by hardware to inform application that a valid edge on the selected external trigger input has occurred. If the trigger is ignored because the timer has already started, then this flag is not set. EXTTRIG flag can be cleared by writing 1 to the EXTTRIGCF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_INPUT_EXTTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK ARROK is set by hardware to inform application that the APB bus write operation to the LPTIM_ARR register has been successfully completed. ARROK flag can be cleared by writing 1 to the ARROKCF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_INPUT_ARROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change down to up In Encoder mode, UP bit is set by hardware to inform application that the counter direction has changed from down to up. UP flag can be cleared by writing 1 to the UPCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ISR_INPUT_UP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change up to down In Encoder mode, DOWN bit is set by hardware to inform application that the counter direction has changed from up to down. DOWN flag can be cleared by writing 1 to the DOWNCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ISR_INPUT_DOWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM update event occurred UE is set by hardware to inform application that an update event was generated. UE flag can be cleared by writing 1 to the UECF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_INPUT_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK REPOK is set by hardware to inform application that the APB bus write operation to the LPTIM_RCR register has been successfully completed. REPOK flag can be cleared by writing 1 to the REPOKCF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_INPUT_REPOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture 2 interrupt flag If channel CC2 is configured as input: CC2IF is set by hardware to inform application that the current value of the counter is captured in LPTIM_CCR2 register. The corresponding interrupt or DMA request is generated if enabled. The CC2OF flag is set if the CC2IF flag was already high. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ISR_INPUT_CC2IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input capture occurred (value: 0)
     *          - B_0x1: The counter value has been captured in the LPTIM_CCR2 register. (An edge has been detected on IC2 which matches the selected polarity). The CC2IF flag is automatically cleared by hardware once the captured value is read (CPU or DMA). The CC2IF flag can be cleared by writing 1 to the CC2CF bit in the LPTIM_ICR register. (value: 1)
     */
        /** @brief No input capture occurred */
    constexpr std::uint32_t LPTIM2_ISR_INPUT_CC2IF_B_0x0 = 0;
        /** @brief The counter value has been captured in the LPTIM_CCR2 register. (An edge has been detected on IC2 which matches the selected polarity). The CC2IF flag is automatically cleared by hardware once the captured value is read (CPU or DMA). The CC2IF flag can be cleared by writing 1 to the CC2CF bit in the LPTIM_ICR register. */
    constexpr std::uint32_t LPTIM2_ISR_INPUT_CC2IF_B_0x1 = 1;

    /** @brief Capture 1 over-capture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing 1 to the CC1OCF bit in the LPTIM_ICR register. Note: If LPTIM does not implement at least 1 channel this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ISR_INPUT_CC1OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No over-capture has been detected. (value: 0)
     *          - B_0x1: The counter value has been captured in LPTIM_CCR1 register while CC1IF flag was already set. (value: 1)
     */
        /** @brief No over-capture has been detected. */
    constexpr std::uint32_t LPTIM2_ISR_INPUT_CC1OF_B_0x0 = 0;
        /** @brief The counter value has been captured in LPTIM_CCR1 register while CC1IF flag was already set. */
    constexpr std::uint32_t LPTIM2_ISR_INPUT_CC1OF_B_0x1 = 1;

    /** @brief Capture 2 over-capture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing 1 to the CC2OCF bit in the LPTIM_ICR register. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ISR_INPUT_CC2OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No over-capture has been detected. (value: 0)
     *          - B_0x1: The counter value has been captured in LPTIM_CCR2 register while CC2IF flag was already set. (value: 1)
     */
        /** @brief No over-capture has been detected. */
    constexpr std::uint32_t LPTIM2_ISR_INPUT_CC2OF_B_0x0 = 0;
        /** @brief The counter value has been captured in LPTIM_CCR2 register while CC2IF flag was already set. */
    constexpr std::uint32_t LPTIM2_ISR_INPUT_CC2OF_B_0x1 = 1;

    /** @brief Interrupt enable register update OK DIEROK is set by hardware to inform application that the APB bus write operation to the LPTIM_DIER register has been successfully completed. DIEROK flag can be cleared by writing 1 to the DIEROKCF bit in the LPTIM_ICR register. */
    using LPTIM2_ISR_INPUT_DIEROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 interrupt clear register */
    using LPTIM2_ICR_OUTPUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 clear flag Writing 1 to this bit clears the CC1IF flag in the LPTIM_ISR register. */
    using LPTIM2_ICR_OUTPUT_CC1CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload match clear flag Writing 1 to this bit clears the ARRM flag in the LPTIM_ISR register */
    using LPTIM2_ICR_OUTPUT_ARRMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger valid edge clear flag Writing 1 to this bit clears the EXTTRIG flag in the LPTIM_ISR register */
    using LPTIM2_ICR_OUTPUT_EXTTRIGCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register 1 update OK clear flag Writing 1 to this bit clears the CMP1OK flag in the LPTIM_ISR register. */
    using LPTIM2_ICR_OUTPUT_CMP1OKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK clear flag Writing 1 to this bit clears the ARROK flag in the LPTIM_ISR register */
    using LPTIM2_ICR_OUTPUT_ARROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to UP clear flag Writing 1 to this bit clear the UP flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ICR_OUTPUT_UPCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to down clear flag Writing 1 to this bit clear the DOWN flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ICR_OUTPUT_DOWNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update event clear flag Writing 1 to this bit clear the UE flag in the LPTIM_ISR register. */
    using LPTIM2_ICR_OUTPUT_UECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK clear flag Writing 1 to this bit clears the REPOK flag in the LPTIM_ISR register. */
    using LPTIM2_ICR_OUTPUT_REPOKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 clear flag Writing 1 to this bit clears the CC2IF flag in the LPTIM_ISR register. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ICR_OUTPUT_CC2CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register 2 update OK clear flag Writing 1 to this bit clears the CMP2OK flag in the LPTIM_ISR register. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ICR_OUTPUT_CMP2OKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register update OK clear flag Writing 1 to this bit clears the DIEROK flag in the LPTIM_ISR register. */
    using LPTIM2_ICR_OUTPUT_DIEROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 interrupt clear register */
    using LPTIM2_ICR_INPUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 clear flag Writing 1 to this bit clears the CC1IF flag in the LPTIM_ISR register. */
    using LPTIM2_ICR_INPUT_CC1CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload match clear flag Writing 1 to this bit clears the ARRM flag in the LPTIM_ISR register */
    using LPTIM2_ICR_INPUT_ARRMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger valid edge clear flag Writing 1 to this bit clears the EXTTRIG flag in the LPTIM_ISR register */
    using LPTIM2_ICR_INPUT_EXTTRIGCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK clear flag Writing 1 to this bit clears the ARROK flag in the LPTIM_ISR register */
    using LPTIM2_ICR_INPUT_ARROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to UP clear flag Writing 1 to this bit clear the UP flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ICR_INPUT_UPCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to down clear flag Writing 1 to this bit clear the DOWN flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ICR_INPUT_DOWNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update event clear flag Writing 1 to this bit clear the UE flag in the LPTIM_ISR register. */
    using LPTIM2_ICR_INPUT_UECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK clear flag Writing 1 to this bit clears the REPOK flag in the LPTIM_ISR register. */
    using LPTIM2_ICR_INPUT_REPOKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 clear flag Writing 1 to this bit clears the CC2IF flag in the LPTIM_ISR register. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ICR_INPUT_CC2CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 over-capture clear flag Writing 1 to this bit clears the CC1OF flag in the LPTIM_ISR register. Note: If LPTIM does not implement at least 1 channel this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ICR_INPUT_CC1OCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 over-capture clear flag Writing 1 to this bit clears the CC2OF flag in the LPTIM_ISR register. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_ICR_INPUT_CC2OCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register update OK clear flag Writing 1 to this bit clears the DIEROK flag in the LPTIM_ISR register. */
    using LPTIM2_ICR_INPUT_DIEROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 interrupt enable register */
    using LPTIM2_DIER_OUTPUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 interrupt enable */
    using LPTIM2_DIER_OUTPUT_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 1 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 1 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 1 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_CC1IE_B_0x0 = 0;
        /** @brief Capture/compare 1 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_CC1IE_B_0x1 = 1;

    /** @brief Autoreload match Interrupt Enable */
    using LPTIM2_DIER_OUTPUT_ARRMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARRM interrupt disabled (value: 0)
     *          - B_0x1: ARRM interrupt enabled (value: 1)
     */
        /** @brief ARRM interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_ARRMIE_B_0x0 = 0;
        /** @brief ARRM interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_ARRMIE_B_0x1 = 1;

    /** @brief External trigger valid edge Interrupt Enable */
    using LPTIM2_DIER_OUTPUT_EXTTRIGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EXTTRIG interrupt disabled (value: 0)
     *          - B_0x1: EXTTRIG interrupt enabled (value: 1)
     */
        /** @brief EXTTRIG interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_EXTTRIGIE_B_0x0 = 0;
        /** @brief EXTTRIG interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_EXTTRIGIE_B_0x1 = 1;

    /** @brief Compare register 1 update OK interrupt enable */
    using LPTIM2_DIER_OUTPUT_CMP1OKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMPOK register 1 interrupt disabled (value: 0)
     *          - B_0x1: CMPOK register 1 interrupt enabled (value: 1)
     */
        /** @brief CMPOK register 1 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_CMP1OKIE_B_0x0 = 0;
        /** @brief CMPOK register 1 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_CMP1OKIE_B_0x1 = 1;

    /** @brief Autoreload register update OK Interrupt Enable */
    using LPTIM2_DIER_OUTPUT_ARROKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARROK interrupt disabled (value: 0)
     *          - B_0x1: ARROK interrupt enabled (value: 1)
     */
        /** @brief ARROK interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_ARROKIE_B_0x0 = 0;
        /** @brief ARROK interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_ARROKIE_B_0x1 = 1;

    /** @brief Direction change to UP Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_OUTPUT_UPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UP interrupt disabled (value: 0)
     *          - B_0x1: UP interrupt enabled (value: 1)
     */
        /** @brief UP interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_UPIE_B_0x0 = 0;
        /** @brief UP interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_UPIE_B_0x1 = 1;

    /** @brief Direction change to down Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_OUTPUT_DOWNIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOWN interrupt disabled (value: 0)
     *          - B_0x1: DOWN interrupt enabled (value: 1)
     */
        /** @brief DOWN interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_DOWNIE_B_0x0 = 0;
        /** @brief DOWN interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_DOWNIE_B_0x1 = 1;

    /** @brief Update event interrupt enable */
    using LPTIM2_DIER_OUTPUT_UEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update event interrupt disabled (value: 0)
     *          - B_0x1: Update event interrupt enabled (value: 1)
     */
        /** @brief Update event interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_UEIE_B_0x0 = 0;
        /** @brief Update event interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_UEIE_B_0x1 = 1;

    /** @brief Repetition register update OK interrupt Enable */
    using LPTIM2_DIER_OUTPUT_REPOKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Repetition register update OK interrupt disabled (value: 0)
     *          - B_0x1: Repetition register update OK interrupt enabled (value: 1)
     */
        /** @brief Repetition register update OK interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_REPOKIE_B_0x0 = 0;
        /** @brief Repetition register update OK interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_REPOKIE_B_0x1 = 1;

    /** @brief Capture/compare 2 interrupt enable Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_OUTPUT_CC2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 2 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 2 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 2 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_CC2IE_B_0x0 = 0;
        /** @brief Capture/compare 2 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_CC2IE_B_0x1 = 1;

    /** @brief Compare register 2 update OK interrupt enable Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_OUTPUT_CMP2OKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMPOK register 2 interrupt disabled (value: 0)
     *          - B_0x1: CMPOK register 2 interrupt enabled (value: 1)
     */
        /** @brief CMPOK register 2 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_CMP2OKIE_B_0x0 = 0;
        /** @brief CMPOK register 2 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_CMP2OKIE_B_0x1 = 1;

    /** @brief Update event DMA request enable Note: If LPTIM does not implement at least 1 channel this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_OUTPUT_UEDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UE DMA request disabled. Writing '0' to the UEDE bit resets the associated ue_dma_req signal. (value: 0)
     *          - B_0x1: UE DMA request enabled (value: 1)
     */
        /** @brief UE DMA request disabled. Writing '0' to the UEDE bit resets the associated ue_dma_req signal. */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_UEDE_B_0x0 = 0;
        /** @brief UE DMA request enabled */
    constexpr std::uint32_t LPTIM2_DIER_OUTPUT_UEDE_B_0x1 = 1;

    /** @brief LPTIM2 interrupt enable register */
    using LPTIM2_DIER_INPUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 interrupt enable */
    using LPTIM2_DIER_INPUT_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 1 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 1 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 1 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC1IE_B_0x0 = 0;
        /** @brief Capture/compare 1 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC1IE_B_0x1 = 1;

    /** @brief Autoreload match Interrupt Enable */
    using LPTIM2_DIER_INPUT_ARRMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARRM interrupt disabled (value: 0)
     *          - B_0x1: ARRM interrupt enabled (value: 1)
     */
        /** @brief ARRM interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_ARRMIE_B_0x0 = 0;
        /** @brief ARRM interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_ARRMIE_B_0x1 = 1;

    /** @brief External trigger valid edge Interrupt Enable */
    using LPTIM2_DIER_INPUT_EXTTRIGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EXTTRIG interrupt disabled (value: 0)
     *          - B_0x1: EXTTRIG interrupt enabled (value: 1)
     */
        /** @brief EXTTRIG interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_EXTTRIGIE_B_0x0 = 0;
        /** @brief EXTTRIG interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_EXTTRIGIE_B_0x1 = 1;

    /** @brief Autoreload register update OK Interrupt Enable */
    using LPTIM2_DIER_INPUT_ARROKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARROK interrupt disabled (value: 0)
     *          - B_0x1: ARROK interrupt enabled (value: 1)
     */
        /** @brief ARROK interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_ARROKIE_B_0x0 = 0;
        /** @brief ARROK interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_ARROKIE_B_0x1 = 1;

    /** @brief Direction change to UP Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_INPUT_UPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UP interrupt disabled (value: 0)
     *          - B_0x1: UP interrupt enabled (value: 1)
     */
        /** @brief UP interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_UPIE_B_0x0 = 0;
        /** @brief UP interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_UPIE_B_0x1 = 1;

    /** @brief Direction change to down Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_INPUT_DOWNIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOWN interrupt disabled (value: 0)
     *          - B_0x1: DOWN interrupt enabled (value: 1)
     */
        /** @brief DOWN interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_DOWNIE_B_0x0 = 0;
        /** @brief DOWN interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_DOWNIE_B_0x1 = 1;

    /** @brief Update event interrupt enable */
    using LPTIM2_DIER_INPUT_UEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update event interrupt disabled (value: 0)
     *          - B_0x1: Update event interrupt enabled (value: 1)
     */
        /** @brief Update event interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_UEIE_B_0x0 = 0;
        /** @brief Update event interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_UEIE_B_0x1 = 1;

    /** @brief Repetition register update OK interrupt Enable */
    using LPTIM2_DIER_INPUT_REPOKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Repetition register update OK interrupt disabled (value: 0)
     *          - B_0x1: Repetition register update OK interrupt enabled (value: 1)
     */
        /** @brief Repetition register update OK interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_REPOKIE_B_0x0 = 0;
        /** @brief Repetition register update OK interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_REPOKIE_B_0x1 = 1;

    /** @brief Capture/compare 2 interrupt enable Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_INPUT_CC2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 2 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 2 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 2 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC2IE_B_0x0 = 0;
        /** @brief Capture/compare 2 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC2IE_B_0x1 = 1;

    /** @brief Capture/compare 1 over-capture interrupt enable Note: If LPTIM does not implement at least 1 channel this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_INPUT_CC1OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 over-capture interrupt disabled (value: 0)
     *          - B_0x1: CC1 over-capture interrupt enabled (value: 1)
     */
        /** @brief CC1 over-capture interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC1OIE_B_0x0 = 0;
        /** @brief CC1 over-capture interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC1OIE_B_0x1 = 1;

    /** @brief Capture/compare 2 over-capture interrupt enable Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_INPUT_CC2OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 over-capture interrupt disabled (value: 0)
     *          - B_0x1: CC2 over-capture interrupt enabled (value: 1)
     */
        /** @brief CC2 over-capture interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC2OIE_B_0x0 = 0;
        /** @brief CC2 over-capture interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC2OIE_B_0x1 = 1;

    /** @brief Capture/compare 1 DMA request enable Note: If LPTIM does not implement at least 1 channel this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_INPUT_CC1DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 DMA request disabled. Writing '0' to the CC1DE bit resets the associated ic1_dma_req signal. (value: 0)
     *          - B_0x1: CC1 DMA request enabled (value: 1)
     */
        /** @brief CC1 DMA request disabled. Writing '0' to the CC1DE bit resets the associated ic1_dma_req signal. */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC1DE_B_0x0 = 0;
        /** @brief CC1 DMA request enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC1DE_B_0x1 = 1;

    /** @brief Update event DMA request enable Note: If LPTIM does not implement at least 1 channel this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_INPUT_UEDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UE DMA request disabled. Writing '0' to the UEDE bit resets the associated ue_dma_req signal. (value: 0)
     *          - B_0x1: UE DMA request enabled (value: 1)
     */
        /** @brief UE DMA request disabled. Writing '0' to the UEDE bit resets the associated ue_dma_req signal. */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_UEDE_B_0x0 = 0;
        /** @brief UE DMA request enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_UEDE_B_0x1 = 1;

    /** @brief Capture/compare 2 DMA request enable Note: If LPTIM does not implement at least 2 channels this bit is reserved. Refer to Section 26.3. */
    using LPTIM2_DIER_INPUT_CC2DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 DMA request disabled. Writing '0' to the CC2DE bit resets the associated ic2_dma_req signal. (value: 0)
     *          - B_0x1: CC2 DMA request enabled (value: 1)
     */
        /** @brief CC2 DMA request disabled. Writing '0' to the CC2DE bit resets the associated ic2_dma_req signal. */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC2DE_B_0x0 = 0;
        /** @brief CC2 DMA request enabled */
    constexpr std::uint32_t LPTIM2_DIER_INPUT_CC2DE_B_0x1 = 1;

}

#endif
