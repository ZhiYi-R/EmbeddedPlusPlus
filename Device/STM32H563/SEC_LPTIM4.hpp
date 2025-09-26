/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H563_SEC_LPTIM4_HPP
#define EMBEDDED_PP_STM32H563_SEC_LPTIM4_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Low power timer */
namespace STM32H563::SEC_LPTIM4 {

    /** @brief LPTIM interrupt and status register */
    using LPTIM_ISR_output = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare 1 interrupt flag The CC1IF flag is set by hardware to inform application that LPTIM_CNT register value matches the compare register's value. The CC1IF flag can be cleared by writing 1 to the CC1CF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_output_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No match (value: 0)
     *          - B_0x1: The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR1 register's value (value: 1)
     */
        /** @brief No match */
    constexpr std::uint32_t LPTIM_ISR_output_CC1IF_B_0x0 = 0;
        /** @brief The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR1 register's value */
    constexpr std::uint32_t LPTIM_ISR_output_CC1IF_B_0x1 = 1;

    /** @brief Autoreload match ARRM is set by hardware to inform application that LPTIM_CNT register's value reached the LPTIM_ARR register's value. ARRM flag can be cleared by writing 1 to the ARRMCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_output_ARRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger edge event EXTTRIG is set by hardware to inform application that a valid edge on the selected external trigger input has occurred. If the trigger is ignored because the timer has already started, then this flag is not set. EXTTRIG flag can be cleared by writing 1 to the EXTTRIGCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_output_EXTTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register 1 update OK CMP1OK is set by hardware to inform application that the APB bus write operation to the LPTIM_CCR1 register has been successfully completed. CMP1OK flag can be cleared by writing 1 to the CMP1OKCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_output_CMP1OK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK ARROK is set by hardware to inform application that the APB bus write operation to the LPTIM_ARR register has been successfully completed. ARROK flag can be cleared by writing 1 to the ARROKCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_output_ARROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change down to up In Encoder mode, UP bit is set by hardware to inform application that the counter direction has changed from down to up. UP flag can be cleared by writing 1 to the UPCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ISR_output_UP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change up to down In Encoder mode, DOWN bit is set by hardware to inform application that the counter direction has changed from up to down. DOWN flag can be cleared by writing 1 to the DOWNCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ISR_output_DOWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM update event occurred UE is set by hardware to inform application that an update event was generated. UE flag can be cleared by writing 1 to the UECF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_output_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK REPOK is set by hardware to inform application that the APB bus write operation to the LPTIM_RCR register has been successfully completed. REPOK flag can be cleared by writing 1 to the REPOKCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_output_REPOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register update OK DIEROK is set by hardware to inform application that the APB bus write operation to the LPTIM_DIER register has been successfully completed. DIEROK flag can be cleared by writing 1 to the DIEROKCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_output_DIEROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM interrupt and status register */
    using LPTIM_ISR_intput = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief capture 1 interrupt flag If channel CC1 is configured as input: CC1IF is set by hardware to inform application that the current value of the counter is captured in LPTIM_CCR1 register. The corresponding interrupt or DMA request is generated if enabled. The CC1OF flag is set if the CC1IF flag was already high. */
    using LPTIM_ISR_intput_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input capture occurred (value: 0)
     *          - B_0x1: The counter value has been captured in the LPTIM_CCR1 register. (An edge has been detected on IC1 which matches the selected polarity). The CC1IF flag is automatically cleared by hardware once the captured value is read (CPU or DMA).CC1IF flag can be cleared by writing 1 to the CC1CF bit in the LPTIM_ICR register. (value: 1)
     */
        /** @brief No input capture occurred */
    constexpr std::uint32_t LPTIM_ISR_intput_CC1IF_B_0x0 = 0;
        /** @brief The counter value has been captured in the LPTIM_CCR1 register. (An edge has been detected on IC1 which matches the selected polarity). The CC1IF flag is automatically cleared by hardware once the captured value is read (CPU or DMA).CC1IF flag can be cleared by writing 1 to the CC1CF bit in the LPTIM_ICR register. */
    constexpr std::uint32_t LPTIM_ISR_intput_CC1IF_B_0x1 = 1;

    /** @brief Autoreload match ARRM is set by hardware to inform application that LPTIM_CNT register's value reached the LPTIM_ARR register's value. ARRM flag can be cleared by writing 1 to the ARRMCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_intput_ARRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger edge event EXTTRIG is set by hardware to inform application that a valid edge on the selected external trigger input has occurred. If the trigger is ignored because the timer has already started, then this flag is not set. EXTTRIG flag can be cleared by writing 1 to the EXTTRIGCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_intput_EXTTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK ARROK is set by hardware to inform application that the APB bus write operation to the LPTIM_ARR register has been successfully completed. ARROK flag can be cleared by writing 1 to the ARROKCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_intput_ARROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change down to up In Encoder mode, UP bit is set by hardware to inform application that the counter direction has changed from down to up. UP flag can be cleared by writing 1 to the UPCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ISR_intput_UP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change up to down In Encoder mode, DOWN bit is set by hardware to inform application that the counter direction has changed from up to down. DOWN flag can be cleared by writing 1 to the DOWNCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ISR_intput_DOWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM update event occurred UE is set by hardware to inform application that an update event was generated. UE flag can be cleared by writing 1 to the UECF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_intput_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK REPOK is set by hardware to inform application that the APB bus write operation to the LPTIM_RCR register has been successfully completed. REPOK flag can be cleared by writing 1 to the REPOKCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_intput_REPOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture 2 interrupt flag If channel CC2 is configured as input: CC2IF is set by hardware to inform application that the current value of the counter is captured in LPTIM_CCR2 register. The corresponding interrupt or DMA request is generated if enabled. The CC2OF flag is set if the CC2IF flag was already high. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Please refer to . */
    using LPTIM_ISR_intput_CC2IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input capture occurred (value: 0)
     *          - B_0x1: The counter value has been captured in the LPTIM_CCR2 register. (An edge has been detected on IC2 which matches the selected polarity). The CC2IF flag is automatically cleared by hardware once the captured value is read (CPU or DMA). The CC2IF flag can be cleared by writing 1 to the CC2CF bit in the LPTIM_ICR register. (value: 1)
     */
        /** @brief No input capture occurred */
    constexpr std::uint32_t LPTIM_ISR_intput_CC2IF_B_0x0 = 0;
        /** @brief The counter value has been captured in the LPTIM_CCR2 register. (An edge has been detected on IC2 which matches the selected polarity). The CC2IF flag is automatically cleared by hardware once the captured value is read (CPU or DMA). The CC2IF flag can be cleared by writing 1 to the CC2CF bit in the LPTIM_ICR register. */
    constexpr std::uint32_t LPTIM_ISR_intput_CC2IF_B_0x1 = 1;

    /** @brief Capture 1 over-capture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing 1 to the CC1OCF bit in the LPTIM_ICR register. Note: If LPTIM does not implement at least 1 channel this bit is reserved. Please refer to . */
    using LPTIM_ISR_intput_CC1OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No over-capture has been detected. (value: 0)
     *          - B_0x1: The counter value has been captured in LPTIM_CCR1 register while CC1IF flag was already set. (value: 1)
     */
        /** @brief No over-capture has been detected. */
    constexpr std::uint32_t LPTIM_ISR_intput_CC1OF_B_0x0 = 0;
        /** @brief The counter value has been captured in LPTIM_CCR1 register while CC1IF flag was already set. */
    constexpr std::uint32_t LPTIM_ISR_intput_CC1OF_B_0x1 = 1;

    /** @brief Capture 2 over-capture flag This flag is set by hardware only when the corresponding channel is configured in input capture mode. It is cleared by software by writing 1 to the CC2OCF bit in the LPTIM_ICR register. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Please refer to . */
    using LPTIM_ISR_intput_CC2OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No over-capture has been detected. (value: 0)
     *          - B_0x1: The counter value has been captured in LPTIM_CCR2 register while CC2IF flag was already set. (value: 1)
     */
        /** @brief No over-capture has been detected. */
    constexpr std::uint32_t LPTIM_ISR_intput_CC2OF_B_0x0 = 0;
        /** @brief The counter value has been captured in LPTIM_CCR2 register while CC2IF flag was already set. */
    constexpr std::uint32_t LPTIM_ISR_intput_CC2OF_B_0x1 = 1;

    /** @brief Interrupt enable register update OK DIEROK is set by hardware to inform application that the APB bus write operation to the LPTIM_DIER register has been successfully completed. DIEROK flag can be cleared by writing 1 to the DIEROKCF bit in the LPTIM_ICR register. */
    using LPTIM_ISR_intput_DIEROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM interrupt clear register */
    using LPTIM_ICR_output = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 clear flag Writing 1 to this bit clears the CC1IF flag in the LPTIM_ISR register. */
    using LPTIM_ICR_output_CC1CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload match clear flag Writing 1 to this bit clears the ARRM flag in the LPTIM_ISR register */
    using LPTIM_ICR_output_ARRMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger valid edge clear flag Writing 1 to this bit clears the EXTTRIG flag in the LPTIM_ISR register */
    using LPTIM_ICR_output_EXTTRIGCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register 1 update OK clear flag Writing 1 to this bit clears the CMP1OK flag in the LPTIM_ISR register. */
    using LPTIM_ICR_output_CMP1OKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK clear flag Writing 1 to this bit clears the ARROK flag in the LPTIM_ISR register */
    using LPTIM_ICR_output_ARROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to UP clear flag Writing 1 to this bit clear the UP flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ICR_output_UPCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to down clear flag Writing 1 to this bit clear the DOWN flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ICR_output_DOWNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update event clear flag Writing 1 to this bit clear the UE flag in the LPTIM_ISR register. */
    using LPTIM_ICR_output_UECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK clear flag Writing 1 to this bit clears the REPOK flag in the LPTIM_ISR register. */
    using LPTIM_ICR_output_REPOKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register update OK clear flag Writing 1 to this bit clears the DIEROK flag in the LPTIM_ISR register. */
    using LPTIM_ICR_output_DIEROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM interrupt clear register */
    using LPTIM_ICR_intput = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 clear flag Writing 1 to this bit clears the CC1IF flag in the LPTIM_ISR register. */
    using LPTIM_ICR_intput_CC1CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload match clear flag Writing 1 to this bit clears the ARRM flag in the LPTIM_ISR register */
    using LPTIM_ICR_intput_ARRMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger valid edge clear flag Writing 1 to this bit clears the EXTTRIG flag in the LPTIM_ISR register */
    using LPTIM_ICR_intput_EXTTRIGCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK clear flag Writing 1 to this bit clears the ARROK flag in the LPTIM_ISR register */
    using LPTIM_ICR_intput_ARROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to UP clear flag Writing 1 to this bit clear the UP flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ICR_intput_UPCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to down clear flag Writing 1 to this bit clear the DOWN flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_ICR_intput_DOWNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update event clear flag Writing 1 to this bit clear the UE flag in the LPTIM_ISR register. */
    using LPTIM_ICR_intput_UECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK clear flag Writing 1 to this bit clears the REPOK flag in the LPTIM_ISR register. */
    using LPTIM_ICR_intput_REPOKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 clear flag Writing 1 to this bit clears the CC2IF flag in the LPTIM_ISR register. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Please refer to . */
    using LPTIM_ICR_intput_CC2CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 over-capture clear flag Writing 1 to this bit clears the CC1OF flag in the LPTIM_ISR register. Note: If LPTIM does not implement at least 1 channel this bit is reserved. Please refer to . */
    using LPTIM_ICR_intput_CC1OCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 over-capture clear flag Writing 1 to this bit clears the CC2OF flag in the LPTIM_ISR register. Note: If LPTIM does not implement at least 2 channels this bit is reserved. Please refer to . */
    using LPTIM_ICR_intput_CC2OCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register update OK clear flag Writing 1 to this bit clears the DIEROK flag in the LPTIM_ISR register. */
    using LPTIM_ICR_intput_DIEROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM interrupt enable register */
    using LPTIM_DIER_output = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 interrupt enable */
    using LPTIM_DIER_output_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 1 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 1 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 1 interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_output_CC1IE_B_0x0 = 0;
        /** @brief Capture/compare 1 interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_output_CC1IE_B_0x1 = 1;

    /** @brief Autoreload match Interrupt Enable */
    using LPTIM_DIER_output_ARRMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARRM interrupt disabled (value: 0)
     *          - B_0x1: ARRM interrupt enabled (value: 1)
     */
        /** @brief ARRM interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_output_ARRMIE_B_0x0 = 0;
        /** @brief ARRM interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_output_ARRMIE_B_0x1 = 1;

    /** @brief External trigger valid edge Interrupt Enable */
    using LPTIM_DIER_output_EXTTRIGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EXTTRIG interrupt disabled (value: 0)
     *          - B_0x1: EXTTRIG interrupt enabled (value: 1)
     */
        /** @brief EXTTRIG interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_output_EXTTRIGIE_B_0x0 = 0;
        /** @brief EXTTRIG interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_output_EXTTRIGIE_B_0x1 = 1;

    /** @brief Compare register 1 update OK interrupt enable */
    using LPTIM_DIER_output_CMP1OKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMPOK register 1 interrupt disabled (value: 0)
     *          - B_0x1: CMPOK register 1 interrupt enabled (value: 1)
     */
        /** @brief CMPOK register 1 interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_output_CMP1OKIE_B_0x0 = 0;
        /** @brief CMPOK register 1 interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_output_CMP1OKIE_B_0x1 = 1;

    /** @brief Autoreload register update OK Interrupt Enable */
    using LPTIM_DIER_output_ARROKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARROK interrupt disabled (value: 0)
     *          - B_0x1: ARROK interrupt enabled (value: 1)
     */
        /** @brief ARROK interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_output_ARROKIE_B_0x0 = 0;
        /** @brief ARROK interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_output_ARROKIE_B_0x1 = 1;

    /** @brief Direction change to UP Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_DIER_output_UPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UP interrupt disabled (value: 0)
     *          - B_0x1: UP interrupt enabled (value: 1)
     */
        /** @brief UP interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_output_UPIE_B_0x0 = 0;
        /** @brief UP interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_output_UPIE_B_0x1 = 1;

    /** @brief Direction change to down Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_DIER_output_DOWNIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOWN interrupt disabled (value: 0)
     *          - B_0x1: DOWN interrupt enabled (value: 1)
     */
        /** @brief DOWN interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_output_DOWNIE_B_0x0 = 0;
        /** @brief DOWN interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_output_DOWNIE_B_0x1 = 1;

    /** @brief Update event interrupt enable */
    using LPTIM_DIER_output_UEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update event interrupt disabled (value: 0)
     *          - B_0x1: Update event interrupt enabled (value: 1)
     */
        /** @brief Update event interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_output_UEIE_B_0x0 = 0;
        /** @brief Update event interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_output_UEIE_B_0x1 = 1;

    /** @brief Repetition register update OK interrupt Enable */
    using LPTIM_DIER_output_REPOKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Repetition register update OK interrupt disabled (value: 0)
     *          - B_0x1: Repetition register update OK interrupt enabled (value: 1)
     */
        /** @brief Repetition register update OK interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_output_REPOKIE_B_0x0 = 0;
        /** @brief Repetition register update OK interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_output_REPOKIE_B_0x1 = 1;

    /** @brief LPTIM interrupt enable register */
    using LPTIM_DIER_intput = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 interrupt enable */
    using LPTIM_DIER_intput_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 1 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 1 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 1 interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_intput_CC1IE_B_0x0 = 0;
        /** @brief Capture/compare 1 interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_CC1IE_B_0x1 = 1;

    /** @brief Autoreload match Interrupt Enable */
    using LPTIM_DIER_intput_ARRMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARRM interrupt disabled (value: 0)
     *          - B_0x1: ARRM interrupt enabled (value: 1)
     */
        /** @brief ARRM interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_intput_ARRMIE_B_0x0 = 0;
        /** @brief ARRM interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_ARRMIE_B_0x1 = 1;

    /** @brief External trigger valid edge Interrupt Enable */
    using LPTIM_DIER_intput_EXTTRIGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EXTTRIG interrupt disabled (value: 0)
     *          - B_0x1: EXTTRIG interrupt enabled (value: 1)
     */
        /** @brief EXTTRIG interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_intput_EXTTRIGIE_B_0x0 = 0;
        /** @brief EXTTRIG interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_EXTTRIGIE_B_0x1 = 1;

    /** @brief Autoreload register update OK Interrupt Enable */
    using LPTIM_DIER_intput_ARROKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARROK interrupt disabled (value: 0)
     *          - B_0x1: ARROK interrupt enabled (value: 1)
     */
        /** @brief ARROK interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_intput_ARROKIE_B_0x0 = 0;
        /** @brief ARROK interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_ARROKIE_B_0x1 = 1;

    /** @brief Direction change to UP Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_DIER_intput_UPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UP interrupt disabled (value: 0)
     *          - B_0x1: UP interrupt enabled (value: 1)
     */
        /** @brief UP interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_intput_UPIE_B_0x0 = 0;
        /** @brief UP interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_UPIE_B_0x1 = 1;

    /** @brief Direction change to down Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_DIER_intput_DOWNIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOWN interrupt disabled (value: 0)
     *          - B_0x1: DOWN interrupt enabled (value: 1)
     */
        /** @brief DOWN interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_intput_DOWNIE_B_0x0 = 0;
        /** @brief DOWN interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_DOWNIE_B_0x1 = 1;

    /** @brief Update event interrupt enable */
    using LPTIM_DIER_intput_UEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update event interrupt disabled (value: 0)
     *          - B_0x1: Update event interrupt enabled (value: 1)
     */
        /** @brief Update event interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_intput_UEIE_B_0x0 = 0;
        /** @brief Update event interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_UEIE_B_0x1 = 1;

    /** @brief Repetition register update OK interrupt Enable */
    using LPTIM_DIER_intput_REPOKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Repetition register update OK interrupt disabled (value: 0)
     *          - B_0x1: Repetition register update OK interrupt enabled (value: 1)
     */
        /** @brief Repetition register update OK interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_intput_REPOKIE_B_0x0 = 0;
        /** @brief Repetition register update OK interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_REPOKIE_B_0x1 = 1;

    /** @brief Capture/compare 2 interrupt enable Note: If LPTIM does not implement at least 2 channels this bit is reserved. Please refer to . */
    using LPTIM_DIER_intput_CC2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 2 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 2 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 2 interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_intput_CC2IE_B_0x0 = 0;
        /** @brief Capture/compare 2 interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_CC2IE_B_0x1 = 1;

    /** @brief Capture/compare 1 over-capture interrupt enable Note: If LPTIM does not implement at least 1 channel this bit is reserved. Please refer to . */
    using LPTIM_DIER_intput_CC1OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 over-capture interrupt disabled (value: 0)
     *          - B_0x1: CC1 over-capture interrupt enabled (value: 1)
     */
        /** @brief CC1 over-capture interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_intput_CC1OIE_B_0x0 = 0;
        /** @brief CC1 over-capture interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_CC1OIE_B_0x1 = 1;

    /** @brief Capture/compare 2 over-capture interrupt enable Note: If LPTIM does not implement at least 2 channels this bit is reserved. Please refer to . */
    using LPTIM_DIER_intput_CC2OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 over-capture interrupt disabled (value: 0)
     *          - B_0x1: CC2 over-capture interrupt enabled (value: 1)
     */
        /** @brief CC2 over-capture interrupt disabled */
    constexpr std::uint32_t LPTIM_DIER_intput_CC2OIE_B_0x0 = 0;
        /** @brief CC2 over-capture interrupt enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_CC2OIE_B_0x1 = 1;

    /** @brief Capture/compare 1 DMA request enable Note: If LPTIM does not implement at least 1 channel this bit is reserved. Please refer to . */
    using LPTIM_DIER_intput_CC1DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 DMA request disabled. Writing 0 to the CC1DE bit resets the associated ic1_dma_req signal. (value: 0)
     *          - B_0x1: CC1 DMA request enabled (value: 1)
     */
        /** @brief CC1 DMA request disabled. Writing 0 to the CC1DE bit resets the associated ic1_dma_req signal. */
    constexpr std::uint32_t LPTIM_DIER_intput_CC1DE_B_0x0 = 0;
        /** @brief CC1 DMA request enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_CC1DE_B_0x1 = 1;

    /** @brief Update event DMA request enable Note: If LPTIM does not implement at least 1 channel this bit is reserved. Please refer to . */
    using LPTIM_DIER_intput_UEDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UE DMA request disabled. Writing 0 to the UEDE bit resets the associated ue_dma_req signal. (value: 0)
     *          - B_0x1: UE DMA request enabled (value: 1)
     */
        /** @brief UE DMA request disabled. Writing 0 to the UEDE bit resets the associated ue_dma_req signal. */
    constexpr std::uint32_t LPTIM_DIER_intput_UEDE_B_0x0 = 0;
        /** @brief UE DMA request enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_UEDE_B_0x1 = 1;

    /** @brief Capture/compare 2 DMA request enable Note: If LPTIM does not implement at least 2 channels this bit is reserved. Please refer to . */
    using LPTIM_DIER_intput_CC2DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 DMA request disabled. Writing 0 to the CC2DE bit resets the associated ic2_dma_req signal. (value: 0)
     *          - B_0x1: CC2 DMA request enabled (value: 1)
     */
        /** @brief CC2 DMA request disabled. Writing 0 to the CC2DE bit resets the associated ic2_dma_req signal. */
    constexpr std::uint32_t LPTIM_DIER_intput_CC2DE_B_0x0 = 0;
        /** @brief CC2 DMA request enabled */
    constexpr std::uint32_t LPTIM_DIER_intput_CC2DE_B_0x1 = 1;

    /** @brief LPTIM configuration register */
    using LPTIM_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock selector The CKSEL bit selects which clock source the LPTIM uses: */
    using LPTIM_CFGR_CKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM is clocked by internal clock source (APB clock or any of the embedded oscillators) (value: 0)
     *          - B_0x1: LPTIM is clocked by an external clock source through the LPTIM external Input1 (value: 1)
     */
        /** @brief LPTIM is clocked by internal clock source (APB clock or any of the embedded oscillators) */
    constexpr std::uint32_t LPTIM_CFGR_CKSEL_B_0x0 = 0;
        /** @brief LPTIM is clocked by an external clock source through the LPTIM external Input1 */
    constexpr std::uint32_t LPTIM_CFGR_CKSEL_B_0x1 = 1;

    /** @brief Clock Polarity When the LPTIM is clocked by an external clock source, CKPOL bits is used to configure the active edge or edges used by the counter: If the LPTIM is configured in Encoder mode (ENC bit is set), the encoder sub-mode 1 is active. If the LPTIM is configured in Encoder mode (ENC bit is set), the encoder sub-mode 2 is active. Refer to for more details about Encoder mode sub-modes. */
    using LPTIM_CFGR_CKPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the rising edge is the active edge used for counting. (value: 0)
     *          - B_0x1: the falling edge is the active edge used for counting. (value: 1)
     *          - B_0x2: both edges are active edges. When both external clock signal edges are considered active ones, the LPTIM must also be clocked by an internal clock source with a frequency equal to at least four times the external clock frequency.If the LPTIM is configured in Encoder mode (ENC bit is set), the encoder sub-mode 3 is active. (value: 2)
     *          - B_0x3: not allowed (value: 3)
     */
        /** @brief the rising edge is the active edge used for counting. */
    constexpr std::uint32_t LPTIM_CFGR_CKPOL_B_0x0 = 0;
        /** @brief the falling edge is the active edge used for counting. */
    constexpr std::uint32_t LPTIM_CFGR_CKPOL_B_0x1 = 1;
        /** @brief both edges are active edges. When both external clock signal edges are considered active ones, the LPTIM must also be clocked by an internal clock source with a frequency equal to at least four times the external clock frequency.If the LPTIM is configured in Encoder mode (ENC bit is set), the encoder sub-mode 3 is active. */
    constexpr std::uint32_t LPTIM_CFGR_CKPOL_B_0x2 = 2;
        /** @brief not allowed */
    constexpr std::uint32_t LPTIM_CFGR_CKPOL_B_0x3 = 3;

    /** @brief Configurable digital filter for external clock The CKFLT value sets the number of consecutive equal samples that should be detected when a level change occurs on an external clock signal before it is considered as a valid level transition. An internal clock source must be present to use this feature */
    using LPTIM_CFGR_CKFLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: any external clock signal level change is considered as a valid transition (value: 0)
     *          - B_0x1: external clock signal level change must be stable for at least 2 clock periods before it is considered as valid transition. (value: 1)
     *          - B_0x2: external clock signal level change must be stable for at least 4 clock periods before it is considered as valid transition. (value: 2)
     *          - B_0x3: external clock signal level change must be stable for at least 8 clock periods before it is considered as valid transition. (value: 3)
     */
        /** @brief any external clock signal level change is considered as a valid transition */
    constexpr std::uint32_t LPTIM_CFGR_CKFLT_B_0x0 = 0;
        /** @brief external clock signal level change must be stable for at least 2 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CFGR_CKFLT_B_0x1 = 1;
        /** @brief external clock signal level change must be stable for at least 4 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CFGR_CKFLT_B_0x2 = 2;
        /** @brief external clock signal level change must be stable for at least 8 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CFGR_CKFLT_B_0x3 = 3;

    /** @brief Configurable digital filter for trigger The TRGFLT value sets the number of consecutive equal samples that should be detected when a level change occurs on an internal trigger before it is considered as a valid level transition. An internal clock source must be present to use this feature */
    using LPTIM_CFGR_TRGFLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: any trigger active level change is considered as a valid trigger (value: 0)
     *          - B_0x1: trigger active level change must be stable for at least 2 clock periods before it is considered as valid trigger. (value: 1)
     *          - B_0x2: trigger active level change must be stable for at least 4 clock periods before it is considered as valid trigger. (value: 2)
     *          - B_0x3: trigger active level change must be stable for at least 8 clock periods before it is considered as valid trigger. (value: 3)
     */
        /** @brief any trigger active level change is considered as a valid trigger */
    constexpr std::uint32_t LPTIM_CFGR_TRGFLT_B_0x0 = 0;
        /** @brief trigger active level change must be stable for at least 2 clock periods before it is considered as valid trigger. */
    constexpr std::uint32_t LPTIM_CFGR_TRGFLT_B_0x1 = 1;
        /** @brief trigger active level change must be stable for at least 4 clock periods before it is considered as valid trigger. */
    constexpr std::uint32_t LPTIM_CFGR_TRGFLT_B_0x2 = 2;
        /** @brief trigger active level change must be stable for at least 8 clock periods before it is considered as valid trigger. */
    constexpr std::uint32_t LPTIM_CFGR_TRGFLT_B_0x3 = 3;

    /** @brief Clock prescaler The PRESC bits configure the prescaler division factor. It can be one among the following division factors: */
    using LPTIM_CFGR_PRESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: /1 (value: 0)
     *          - B_0x1: /2 (value: 1)
     *          - B_0x2: /4 (value: 2)
     *          - B_0x3: /8 (value: 3)
     *          - B_0x4: /16 (value: 4)
     *          - B_0x5: /32 (value: 5)
     *          - B_0x6: /64 (value: 6)
     *          - B_0x7: /128 (value: 7)
     */
        /** @brief /1 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x0 = 0;
        /** @brief /2 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x1 = 1;
        /** @brief /4 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x2 = 2;
        /** @brief /8 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x3 = 3;
        /** @brief /16 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x4 = 4;
        /** @brief /32 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x5 = 5;
        /** @brief /64 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x6 = 6;
        /** @brief /128 */
    constexpr std::uint32_t LPTIM_CFGR_PRESC_B_0x7 = 7;

    /** @brief Trigger selector The TRIGSEL bits select the trigger source that serves as a trigger event for the LPTIM among the below 8 available sources: See for details. */
    using LPTIM_CFGR_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_ext_trig0 (value: 0)
     *          - B_0x1: lptim_ext_trig1 (value: 1)
     *          - B_0x2: lptim_ext_trig2 (value: 2)
     *          - B_0x3: lptim_ext_trig3 (value: 3)
     *          - B_0x4: lptim_ext_trig4 (value: 4)
     *          - B_0x5: lptim_ext_trig5 (value: 5)
     *          - B_0x6: lptim_ext_trig6 (value: 6)
     *          - B_0x7: lptim_ext_trig7 (value: 7)
     */
        /** @brief lptim_ext_trig0 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x0 = 0;
        /** @brief lptim_ext_trig1 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x1 = 1;
        /** @brief lptim_ext_trig2 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x2 = 2;
        /** @brief lptim_ext_trig3 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x3 = 3;
        /** @brief lptim_ext_trig4 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x4 = 4;
        /** @brief lptim_ext_trig5 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x5 = 5;
        /** @brief lptim_ext_trig6 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x6 = 6;
        /** @brief lptim_ext_trig7 */
    constexpr std::uint32_t LPTIM_CFGR_TRIGSEL_B_0x7 = 7;

    /** @brief Trigger enable and polarity The TRIGEN bits controls whether the LPTIM counter is started by an external trigger or not. If the external trigger option is selected, three configurations are possible for the trigger active edge: */
    using LPTIM_CFGR_TRIGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: software trigger (counting start is initiated by software) (value: 0)
     *          - B_0x1: rising edge is the active edge (value: 1)
     *          - B_0x2: falling edge is the active edge (value: 2)
     *          - B_0x3: both edges are active edges (value: 3)
     */
        /** @brief software trigger (counting start is initiated by software) */
    constexpr std::uint32_t LPTIM_CFGR_TRIGEN_B_0x0 = 0;
        /** @brief rising edge is the active edge */
    constexpr std::uint32_t LPTIM_CFGR_TRIGEN_B_0x1 = 1;
        /** @brief falling edge is the active edge */
    constexpr std::uint32_t LPTIM_CFGR_TRIGEN_B_0x2 = 2;
        /** @brief both edges are active edges */
    constexpr std::uint32_t LPTIM_CFGR_TRIGEN_B_0x3 = 3;

    /** @brief Timeout enable The TIMOUT bit controls the Timeout feature */
    using LPTIM_CFGR_TIMOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A trigger event arriving when the timer is already started is ignored (value: 0)
     *          - B_0x1: A trigger event arriving when the timer is already started resets and restarts the LPTIM counter and the repetition counter (value: 1)
     */
        /** @brief A trigger event arriving when the timer is already started is ignored */
    constexpr std::uint32_t LPTIM_CFGR_TIMOUT_B_0x0 = 0;
        /** @brief A trigger event arriving when the timer is already started resets and restarts the LPTIM counter and the repetition counter */
    constexpr std::uint32_t LPTIM_CFGR_TIMOUT_B_0x1 = 1;

    /** @brief Waveform shape The WAVE bit controls the output shape */
    using LPTIM_CFGR_WAVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Deactivate Set-once mode (value: 0)
     *          - B_0x1: Activate the Set-once mode (value: 1)
     */
        /** @brief Deactivate Set-once mode */
    constexpr std::uint32_t LPTIM_CFGR_WAVE_B_0x0 = 0;
        /** @brief Activate the Set-once mode */
    constexpr std::uint32_t LPTIM_CFGR_WAVE_B_0x1 = 1;

    /** @brief Waveform shape polarity The WAVEPOL bit controls the output polarity Note: If the LPTIM implements at least one capture/compare channel, this bit is reserved. Please refer to . */
    using LPTIM_CFGR_WAVPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The LPTIM output reflects the compare results between LPTIM_CNT and LPTIM_CCRx registers (value: 0)
     *          - B_0x1: The LPTIM output reflects the inverse of the compare results between LPTIM_CNT and LPTIM_CCRx registers (value: 1)
     */
        /** @brief The LPTIM output reflects the compare results between LPTIM_CNT and LPTIM_CCRx registers */
    constexpr std::uint32_t LPTIM_CFGR_WAVPOL_B_0x0 = 0;
        /** @brief The LPTIM output reflects the inverse of the compare results between LPTIM_CNT and LPTIM_CCRx registers */
    constexpr std::uint32_t LPTIM_CFGR_WAVPOL_B_0x1 = 1;

    /** @brief Registers update mode The PRELOAD bit controls the LPTIM_ARR, LPTIM_RCR and the LPTIM_CCRx registers update modality */
    using LPTIM_CFGR_PRELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Registers are updated after each APB bus write access (value: 0)
     *          - B_0x1: Registers are updated at the end of the current LPTIM period (value: 1)
     */
        /** @brief Registers are updated after each APB bus write access */
    constexpr std::uint32_t LPTIM_CFGR_PRELOAD_B_0x0 = 0;
        /** @brief Registers are updated at the end of the current LPTIM period */
    constexpr std::uint32_t LPTIM_CFGR_PRELOAD_B_0x1 = 1;

    /** @brief counter mode enabled The COUNTMODE bit selects which clock source is used by the LPTIM to clock the counter: */
    using LPTIM_CFGR_COUNTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the counter is incremented following each internal clock pulse (value: 0)
     *          - B_0x1: the counter is incremented following each valid clock pulse on the LPTIM external Input1 (value: 1)
     */
        /** @brief the counter is incremented following each internal clock pulse */
    constexpr std::uint32_t LPTIM_CFGR_COUNTMODE_B_0x0 = 0;
        /** @brief the counter is incremented following each valid clock pulse on the LPTIM external Input1 */
    constexpr std::uint32_t LPTIM_CFGR_COUNTMODE_B_0x1 = 1;

    /** @brief Encoder mode enable The ENC bit controls the Encoder mode Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Please refer to . */
    using LPTIM_CFGR_ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Encoder mode disabled (value: 0)
     *          - B_0x1: Encoder mode enabled (value: 1)
     */
        /** @brief Encoder mode disabled */
    constexpr std::uint32_t LPTIM_CFGR_ENC_B_0x0 = 0;
        /** @brief Encoder mode enabled */
    constexpr std::uint32_t LPTIM_CFGR_ENC_B_0x1 = 1;

    /** @brief LPTIM control register */
    using LPTIM_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM enable The ENABLE bit is set and cleared by software. */
    using LPTIM_CR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM is disabled. Writing '0' to the ENABLE bit resets all the DMA request signals (input capture and update event DMA requests). (value: 0)
     *          - B_0x1: LPTIM is enabled (value: 1)
     */
        /** @brief LPTIM is disabled. Writing '0' to the ENABLE bit resets all the DMA request signals (input capture and update event DMA requests). */
    constexpr std::uint32_t LPTIM_CR_ENABLE_B_0x0 = 0;
        /** @brief LPTIM is enabled */
    constexpr std::uint32_t LPTIM_CR_ENABLE_B_0x1 = 1;

    /** @brief LPTIM start in Single mode This bit is set by software and cleared by hardware. In case of software start (TRIGEN[1:0] = '00'), setting this bit starts the LPTIM in single pulse mode. If the software start is disabled (TRIGEN[1:0] different than '00'), setting this bit starts the LPTIM in single pulse mode as soon as an external trigger is detected. If this bit is set when the LPTIM is in continuous counting mode, then the LPTIM stops at the following match between LPTIM_ARR and LPTIM_CNT registers. This bit can only be set when the LPTIM is enabled. It is automatically reset by hardware. */
    using LPTIM_CR_SNGSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer start in Continuous mode This bit is set by software and cleared by hardware. In case of software start (TRIGEN[1:0] = '00'), setting this bit starts the LPTIM in Continuous mode. If the software start is disabled (TRIGEN[1:0] different than '00'), setting this bit starts the timer in Continuous mode as soon as an external trigger is detected. If this bit is set when a single pulse mode counting is ongoing, then the timer does not stop at the next match between the LPTIM_ARR and LPTIM_CNT registers and the LPTIM counter keeps counting in Continuous mode. This bit can be set only when the LPTIM is enabled. It is automatically reset by hardware. */
    using LPTIM_CR_CNTSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter reset This bit is set by software and cleared by hardware. When set to '1' this bit triggers a synchronous reset of the LPTIM_CNT counter register. Due to the synchronous nature of this reset, it only takes place after a synchronization delay of 3 LPTimer core clock cycles (LPTimer core clock may be different from APB clock). This bit can be set only when the LPTIM is enabled. It is automatically reset by hardware. COUNTRST must never be set to '1' by software before it is already cleared to '0' by hardware. Software should consequently check that COUNTRST bit is already cleared to '0' before attempting to set it to '1'. */
    using LPTIM_CR_COUNTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset after read enable This bit is set and cleared by software. When RSTARE is set to '1', any read access to LPTIM_CNT register asynchronously resets LPTIM_CNT register content. This bit can be set only when the LPTIM is enabled. */
    using LPTIM_CR_RSTARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM compare register 1 */
    using LPTIM_CCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 value If channel CC1 is configured as output: CCR1 is the value to be loaded in the capture/compare 1 register. Depending on the PRELOAD option, the CCR1 register is immediately updated if the PRELOAD bit is reset and updated at next LPTIM update event if PREOAD bit is reset. The capture/compare register 1 contains the value to be compared to the counter LPTIM_CNT and signaled on OC1 output. If channel CC1 is configured as input: CCR1 contains the counter value transferred by the last input capture 1 event. The LPTIM_CCR1 register is read-only and cannot be programmed. If LPTIM does not implement any channel: The compare register 1 contains the value to be compared to the counter LPTIM_CNT and signaled on LPTIM output. */
    using LPTIM_CCR1_CCR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM autoreload register */
    using LPTIM_ARR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto reload value ARR is the autoreload value for the LPTIM. This value must be strictly greater than the CCRx[15:0] value. */
    using LPTIM_ARR_ARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM counter register */
    using LPTIM_CNT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value When the LPTIM is running with an asynchronous clock, reading the LPTIM_CNT register may return unreliable values. So in this case it is necessary to perform two consecutive read accesses and verify that the two returned values are identical. */
    using LPTIM_CNT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM configuration register 2 */
    using LPTIM_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM input 1 selection The IN1SEL bits control the LPTIM input 1 multiplexer, which connects LPTIM input 1 to one of the available inputs. For connection details refer to . */
    using LPTIM_CFGR2_IN1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_in1_mux0 (value: 0)
     *          - B_0x1: lptim_in1_mux1 (value: 1)
     *          - B_0x2: lptim_in1_mux2 (value: 2)
     *          - B_0x3: lptim_in1_mux3 (value: 3)
     */
        /** @brief lptim_in1_mux0 */
    constexpr std::uint32_t LPTIM_CFGR2_IN1SEL_B_0x0 = 0;
        /** @brief lptim_in1_mux1 */
    constexpr std::uint32_t LPTIM_CFGR2_IN1SEL_B_0x1 = 1;
        /** @brief lptim_in1_mux2 */
    constexpr std::uint32_t LPTIM_CFGR2_IN1SEL_B_0x2 = 2;
        /** @brief lptim_in1_mux3 */
    constexpr std::uint32_t LPTIM_CFGR2_IN1SEL_B_0x3 = 3;

    /** @brief LPTIM input 2 selection The IN2SEL bits control the LPTIM input 2 multiplexer, which connects LPTIM input 2 to one of the available inputs. For connection details refer to . */
    using LPTIM_CFGR2_IN2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_in2_mux0 (value: 0)
     *          - B_0x1: lptim_in2_mux1 (value: 1)
     *          - B_0x2: lptim_in2_mux2 (value: 2)
     *          - B_0x3: lptim_in2_mux3 (value: 3)
     */
        /** @brief lptim_in2_mux0 */
    constexpr std::uint32_t LPTIM_CFGR2_IN2SEL_B_0x0 = 0;
        /** @brief lptim_in2_mux1 */
    constexpr std::uint32_t LPTIM_CFGR2_IN2SEL_B_0x1 = 1;
        /** @brief lptim_in2_mux2 */
    constexpr std::uint32_t LPTIM_CFGR2_IN2SEL_B_0x2 = 2;
        /** @brief lptim_in2_mux3 */
    constexpr std::uint32_t LPTIM_CFGR2_IN2SEL_B_0x3 = 3;

    /** @brief LPTIM input capture 1 selection The IC1SEL bits control the LPTIM Input capture 1 multiplexer, which connects LPTIM Input capture 1 to one of the available inputs. For connection details refer to . */
    using LPTIM_CFGR2_IC1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_ic1_mux0 (value: 0)
     *          - B_0x1: lptim_ic1_mux1 (value: 1)
     *          - B_0x2: lptim_ic1_mux2 (value: 2)
     *          - B_0x3: lptim_ic1_mux3 (value: 3)
     */
        /** @brief lptim_ic1_mux0 */
    constexpr std::uint32_t LPTIM_CFGR2_IC1SEL_B_0x0 = 0;
        /** @brief lptim_ic1_mux1 */
    constexpr std::uint32_t LPTIM_CFGR2_IC1SEL_B_0x1 = 1;
        /** @brief lptim_ic1_mux2 */
    constexpr std::uint32_t LPTIM_CFGR2_IC1SEL_B_0x2 = 2;
        /** @brief lptim_ic1_mux3 */
    constexpr std::uint32_t LPTIM_CFGR2_IC1SEL_B_0x3 = 3;

    /** @brief LPTIM input capture 2 selection The IC2SEL bits control the LPTIM Input capture 2 multiplexer, which connects LPTIM Input capture 2 to one of the available inputs. For connection details refer to . */
    using LPTIM_CFGR2_IC2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_ic2_mux0 (value: 0)
     *          - B_0x1: lptim_ic2_mux1 (value: 1)
     *          - B_0x2: lptim_ic2_mux2 (value: 2)
     *          - B_0x3: lptim_ic2_mux3 (value: 3)
     */
        /** @brief lptim_ic2_mux0 */
    constexpr std::uint32_t LPTIM_CFGR2_IC2SEL_B_0x0 = 0;
        /** @brief lptim_ic2_mux1 */
    constexpr std::uint32_t LPTIM_CFGR2_IC2SEL_B_0x1 = 1;
        /** @brief lptim_ic2_mux2 */
    constexpr std::uint32_t LPTIM_CFGR2_IC2SEL_B_0x2 = 2;
        /** @brief lptim_ic2_mux3 */
    constexpr std::uint32_t LPTIM_CFGR2_IC2SEL_B_0x3 = 3;

    /** @brief LPTIM repetition register */
    using LPTIM_RCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register value REP is the repetition value for the LPTIM. */
    using LPTIM_RCR_REP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM capture/compare mode register 1 */
    using LPTIM_CCMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 selection This bitfield defines the direction of the channel input (capture) or output mode. */
    using LPTIM_CCMR1_CC1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured in output PWM mode (value: 0)
     *          - B_0x1: CC1 channel is configured in input capture mode (value: 1)
     */
        /** @brief CC1 channel is configured in output PWM mode */
    constexpr std::uint32_t LPTIM_CCMR1_CC1SEL_B_0x0 = 0;
        /** @brief CC1 channel is configured in input capture mode */
    constexpr std::uint32_t LPTIM_CCMR1_CC1SEL_B_0x1 = 1;

    /** @brief Capture/compare 1 output enable. This bit determines if a capture of the counter value can actually be done into the input capture/compare register 1 (LPTIM_CCR1) or not. */
    using LPTIM_CCMR1_CC1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_CC1_AS_OUTPUT: OffOC1 is not active. Writing '0' to the CC1E bit resets the ue_dma_req signal only if all the other LPTIM channels are disabled. (value: 0)
     *          - B_0x1_CC1_AS_OUTPUT: OnOC1 signal is output on the corresponding output pin (value: 1)
     */
        /** @brief OffOC1 is not active. Writing '0' to the CC1E bit resets the ue_dma_req signal only if all the other LPTIM channels are disabled. */
    constexpr std::uint32_t LPTIM_CCMR1_CC1E_B_0x0_CC1_AS_OUTPUT = 0;
        /** @brief OnOC1 signal is output on the corresponding output pin */
    constexpr std::uint32_t LPTIM_CCMR1_CC1E_B_0x1_CC1_AS_OUTPUT = 1;

    /** @brief Capture/compare 1 output polarity. Only bit2 is used to set polarity when output mode is enabled, bit3 is don't care. This field is used to select the IC1 polarity for capture operations. */
    using LPTIM_CCMR1_CC1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_CC1_AS_OUTPUT: OC1 active high, the LPTIM output reflects the compare results between LPTIM_ARR and LPTIM_CCRx registers (value: 0)
     *          - B_0x1_CC1_AS_OUTPUT: OC1 active low, the LPTIM output reflects the inverse of the compare results between LPTIM_ARR and LPTIM_CCRx registers (value: 1)
     *          - B_0x2_CC1_AS_INPUT: reserved, do not use this configuration. (value: 2)
     *          - B_0x3_CC1_AS_INPUT: both edges, circuit is sensitive to both IC1 rising and falling edges. (value: 3)
     */
        /** @brief OC1 active high, the LPTIM output reflects the compare results between LPTIM_ARR and LPTIM_CCRx registers */
    constexpr std::uint32_t LPTIM_CCMR1_CC1P_B_0x0_CC1_AS_OUTPUT = 0;
        /** @brief OC1 active low, the LPTIM output reflects the inverse of the compare results between LPTIM_ARR and LPTIM_CCRx registers */
    constexpr std::uint32_t LPTIM_CCMR1_CC1P_B_0x1_CC1_AS_OUTPUT = 1;
        /** @brief reserved, do not use this configuration. */
    constexpr std::uint32_t LPTIM_CCMR1_CC1P_B_0x2_CC1_AS_INPUT = 2;
        /** @brief both edges, circuit is sensitive to both IC1 rising and falling edges. */
    constexpr std::uint32_t LPTIM_CCMR1_CC1P_B_0x3_CC1_AS_INPUT = 3;

    /** @brief Input capture 1 prescaler This bitfield defines the ratio of the prescaler acting on the CC1 input (IC1). */
    using LPTIM_CCMR1_IC1PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no prescaler, capture is done each time an edge is detected on the capture input (value: 0)
     *          - B_0x1: capture is done once every 2 events (value: 1)
     *          - B_0x2: capture is done once every 4 events (value: 2)
     *          - B_0x3: capture is done once every 8 events (value: 3)
     */
        /** @brief no prescaler, capture is done each time an edge is detected on the capture input */
    constexpr std::uint32_t LPTIM_CCMR1_IC1PSC_B_0x0 = 0;
        /** @brief capture is done once every 2 events */
    constexpr std::uint32_t LPTIM_CCMR1_IC1PSC_B_0x1 = 1;
        /** @brief capture is done once every 4 events */
    constexpr std::uint32_t LPTIM_CCMR1_IC1PSC_B_0x2 = 2;
        /** @brief capture is done once every 8 events */
    constexpr std::uint32_t LPTIM_CCMR1_IC1PSC_B_0x3 = 3;

    /** @brief Input capture 1 filter This bitfield defines the number of consecutive equal samples that should be detected when a level change occurs on an external input capture signal before it is considered as a valid level transition. An internal clock source must be present to use this feature. */
    using LPTIM_CCMR1_IC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: any external input capture signal level change is considered as a valid transition (value: 0)
     *          - B_0x1: external input capture signal level change must be stable for at least 2 clock periods before it is considered as valid transition. (value: 1)
     *          - B_0x2: external input capture signal level change must be stable for at least 4 clock periods before it is considered as valid transition. (value: 2)
     *          - B_0x3: external input capture signal level change must be stable for at least 8 clock periods before it is considered as valid transition. (value: 3)
     */
        /** @brief any external input capture signal level change is considered as a valid transition */
    constexpr std::uint32_t LPTIM_CCMR1_IC1F_B_0x0 = 0;
        /** @brief external input capture signal level change must be stable for at least 2 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CCMR1_IC1F_B_0x1 = 1;
        /** @brief external input capture signal level change must be stable for at least 4 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CCMR1_IC1F_B_0x2 = 2;
        /** @brief external input capture signal level change must be stable for at least 8 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CCMR1_IC1F_B_0x3 = 3;

    /** @brief Capture/compare 2 selection This bitfield defines the direction of the channel, input (capture) or output mode. */
    using LPTIM_CCMR1_CC2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 channel is configured in output PWM mode (value: 0)
     *          - B_0x1: CC2 channel is configured in input capture mode (value: 1)
     */
        /** @brief CC2 channel is configured in output PWM mode */
    constexpr std::uint32_t LPTIM_CCMR1_CC2SEL_B_0x0 = 0;
        /** @brief CC2 channel is configured in input capture mode */
    constexpr std::uint32_t LPTIM_CCMR1_CC2SEL_B_0x1 = 1;

    /** @brief Capture/compare 2 output enable. This bit determines if a capture of the counter value can actually be done into the input capture/compare register 2 (LPTIM_CCR2) or not. */
    using LPTIM_CCMR1_CC2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_CC2_AS_OUTPUT: OffOC2 is not active. Writing '0' to the CC2E bit resets the ue_dma_req signal only if all the other LPTIM channels are disabled. (value: 0)
     *          - B_0x1_CC2_AS_OUTPUT: OnOC2 signal is output on the corresponding output pin (value: 1)
     */
        /** @brief OffOC2 is not active. Writing '0' to the CC2E bit resets the ue_dma_req signal only if all the other LPTIM channels are disabled. */
    constexpr std::uint32_t LPTIM_CCMR1_CC2E_B_0x0_CC2_AS_OUTPUT = 0;
        /** @brief OnOC2 signal is output on the corresponding output pin */
    constexpr std::uint32_t LPTIM_CCMR1_CC2E_B_0x1_CC2_AS_OUTPUT = 1;

    /** @brief Capture/compare 2 output polarity. Only bit2 is used to set polarity when output mode is enabled, bit3 is don't care. This field is used to select the IC2 polarity for capture operations. */
    using LPTIM_CCMR1_CC2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_CC2_AS_OUTPUT: OC2 active high (value: 0)
     *          - B_0x1_CC2_AS_OUTPUT: OC2 active low (value: 1)
     *          - B_0x2_CC2_AS_INPUT: reserved, do not use this configuration. (value: 2)
     *          - B_0x3_CC2_AS_INPUT: both edges, circuit is sensitive to both IC2 rising and falling edges. (value: 3)
     */
        /** @brief OC2 active high */
    constexpr std::uint32_t LPTIM_CCMR1_CC2P_B_0x0_CC2_AS_OUTPUT = 0;
        /** @brief OC2 active low */
    constexpr std::uint32_t LPTIM_CCMR1_CC2P_B_0x1_CC2_AS_OUTPUT = 1;
        /** @brief reserved, do not use this configuration. */
    constexpr std::uint32_t LPTIM_CCMR1_CC2P_B_0x2_CC2_AS_INPUT = 2;
        /** @brief both edges, circuit is sensitive to both IC2 rising and falling edges. */
    constexpr std::uint32_t LPTIM_CCMR1_CC2P_B_0x3_CC2_AS_INPUT = 3;

    /** @brief Input capture 2 prescaler This bitfield defines the ratio of the prescaler acting on the CC2 input (IC2). */
    using LPTIM_CCMR1_IC2PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no prescaler, capture is done each time an edge is detected on the capture input (value: 0)
     *          - B_0x1: capture is done once every 2 events (value: 1)
     *          - B_0x2: capture is done once every 4 events (value: 2)
     *          - B_0x3: capture is done once every 8 events (value: 3)
     */
        /** @brief no prescaler, capture is done each time an edge is detected on the capture input */
    constexpr std::uint32_t LPTIM_CCMR1_IC2PSC_B_0x0 = 0;
        /** @brief capture is done once every 2 events */
    constexpr std::uint32_t LPTIM_CCMR1_IC2PSC_B_0x1 = 1;
        /** @brief capture is done once every 4 events */
    constexpr std::uint32_t LPTIM_CCMR1_IC2PSC_B_0x2 = 2;
        /** @brief capture is done once every 8 events */
    constexpr std::uint32_t LPTIM_CCMR1_IC2PSC_B_0x3 = 3;

    /** @brief Input capture 2 filter This bitfield defines the number of consecutive equal samples that should be detected when a level change occurs on an external input capture signal before it is considered as a valid level transition. An internal clock source must be present to use this feature. */
    using LPTIM_CCMR1_IC2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: any external input capture signal level change is considered as a valid transition (value: 0)
     *          - B_0x1: external input capture signal level change must be stable for at least 2 clock periods before it is considered as valid transition. (value: 1)
     *          - B_0x2: external input capture signal level change must be stable for at least 4 clock periods before it is considered as valid transition. (value: 2)
     *          - B_0x3: external input capture signal level change must be stable for at least 8 clock periods before it is considered as valid transition. (value: 3)
     */
        /** @brief any external input capture signal level change is considered as a valid transition */
    constexpr std::uint32_t LPTIM_CCMR1_IC2F_B_0x0 = 0;
        /** @brief external input capture signal level change must be stable for at least 2 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CCMR1_IC2F_B_0x1 = 1;
        /** @brief external input capture signal level change must be stable for at least 4 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CCMR1_IC2F_B_0x2 = 2;
        /** @brief external input capture signal level change must be stable for at least 8 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM_CCMR1_IC2F_B_0x3 = 3;

    /** @brief LPTIM compare register 2 */
    using LPTIM_CCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 value If channel CC2 is configured as output: CCR2 is the value to be loaded in the capture/compare 2 register. Depending on the PRELOAD option, the CCR2 register is immediately updated if the PRELOAD bit is reset and updated at next LPTIM update event if PREOAD bit is reset. The capture/compare register 2 contains the value to be compared to the counter LPTIM_CNT and signaled on OC2 output. If channel CC2 is configured as input: CCR2 contains the counter value transferred by the last input capture 2 event. The LPTIM_CCR2 register is read-only and cannot be programmed. */
    using LPTIM_CCR2_CCR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
