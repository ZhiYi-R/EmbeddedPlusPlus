/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7R_LPTIM4_HPP
#define EMBEDDED_PP_STM32H7R_LPTIM4_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Low power timer */
namespace STM32H7R::LPTIM4 {

    /** @brief LPTIM4 interrupt and status register */
    using LPTIM4_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare 1 interrupt flag The CC1IF flag is set by hardware to inform application that LPTIM_CNT register value matches the compare register's value. The CC1IF flag can be cleared by writing 1 to the CC1CF bit in the LPTIM_ICR register. */
    using LPTIM4_ISR_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No match (value: 0)
     *          - B_0x1: The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR1 register's value (value: 1)
     */
        /** @brief No match */
    constexpr std::uint32_t LPTIM4_ISR_CC1IF_B_0x0 = 0;
        /** @brief The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR1 register's value */
    constexpr std::uint32_t LPTIM4_ISR_CC1IF_B_0x1 = 1;

    /** @brief Autoreload match ARRM is set by hardware to inform application that LPTIM_CNT registers value reached the LPTIM_ARR registers value. ARRM flag can be cleared by writing 1 to the ARRMCF bit in the LPTIM_ICR register. */
    using LPTIM4_ISR_ARRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger edge event EXTTRIG is set by hardware to inform application that a valid edge on the selected external trigger input has occurred. If the trigger is ignored because the timer has already started, then this flag is not set. EXTTRIG flag can be cleared by writing 1 to the EXTTRIGCF bit in the LPTIM_ICR register. */
    using LPTIM4_ISR_EXTTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register 1 update OK CMP1OK is set by hardware to inform application that the APB bus write operation to the LPTIM_CCR1 register has been successfully completed. CMP1OK flag can be cleared by writing 1 to the CMP1OKCF bit in the LPTIM_ICR register. */
    using LPTIM4_ISR_CMP1OK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK ARROK is set by hardware to inform application that the APB bus write operation to the LPTIM_ARR register has been successfully completed. ARROK flag can be cleared by writing 1 to the ARROKCF bit in the LPTIM_ICR register. */
    using LPTIM4_ISR_ARROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change down to up In Encoder mode, UP bit is set by hardware to inform application that the counter direction has changed from down to up. UP flag can be cleared by writing 1 to the UPCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3: LPTIM implementation. */
    using LPTIM4_ISR_UP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change up to down In Encoder mode, DOWN bit is set by hardware to inform application that the counter direction has changed from up to down. DOWN flag can be cleared by writing 1 to the DOWNCF bit in the LPTIM_ICR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3: LPTIM implementation. */
    using LPTIM4_ISR_DOWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM update event occurred UE is set by hardware to inform application that an update event was generated. UE flag can be cleared by writing 1 to the UECF bit in the LPTIM_ICR register. */
    using LPTIM4_ISR_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK REPOK is set by hardware to inform application that the APB bus write operation to the LPTIM_RCR register has been successfully completed. REPOK flag can be cleared by writing 1 to the REPOKCF bit in the LPTIM_ICR register. */
    using LPTIM4_ISR_REPOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register update OK DIEROK is set by hardware to inform application that the APB bus write operation to the LPTIM_DIER register has been successfully completed. DIEROK flag can be cleared by writing 1 to the DIEROKCF bit in the LPTIM_ICR register. */
    using LPTIM4_ISR_DIEROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 interrupt clear register */
    using LPTIM4_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 clear flag Writing 1 to this bit clears the CC1IF flag in the LPTIM_ISR register. */
    using LPTIM4_ICR_CC1CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload match clear flag Writing 1 to this bit clears the ARRM flag in the LPTIM_ISR register */
    using LPTIM4_ICR_ARRMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger valid edge clear flag Writing 1 to this bit clears the EXTTRIG flag in the LPTIM_ISR register */
    using LPTIM4_ICR_EXTTRIGCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register 1 update OK clear flag Writing 1 to this bit clears the CMP1OK flag in the LPTIM_ISR register. */
    using LPTIM4_ICR_CMP1OKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK clear flag Writing 1 to this bit clears the ARROK flag in the LPTIM_ISR register */
    using LPTIM4_ICR_ARROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to UP clear flag Writing 1 to this bit clear the UP flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM4_ICR_UPCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to down clear flag Writing 1 to this bit clear the DOWN flag in the LPTIM_ISR register. Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM4_ICR_DOWNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update event clear flag Writing 1 to this bit clear the UE flag in the LPTIM_ISR register. */
    using LPTIM4_ICR_UECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK clear flag Writing 1 to this bit clears the REPOK flag in the LPTIM_ISR register. */
    using LPTIM4_ICR_REPOKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register update OK clear flag Writing 1 to this bit clears the DIEROK flag in the LPTIM_ISR register. */
    using LPTIM4_ICR_DIEROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM4 interrupt enable register */
    using LPTIM4_DIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 interrupt enable */
    using LPTIM4_DIER_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 1 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 1 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 1 interrupt disabled */
    constexpr std::uint32_t LPTIM4_DIER_CC1IE_B_0x0 = 0;
        /** @brief Capture/compare 1 interrupt enabled */
    constexpr std::uint32_t LPTIM4_DIER_CC1IE_B_0x1 = 1;

    /** @brief Autoreload match Interrupt Enable */
    using LPTIM4_DIER_ARRMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARRM interrupt disabled (value: 0)
     *          - B_0x1: ARRM interrupt enabled (value: 1)
     */
        /** @brief ARRM interrupt disabled */
    constexpr std::uint32_t LPTIM4_DIER_ARRMIE_B_0x0 = 0;
        /** @brief ARRM interrupt enabled */
    constexpr std::uint32_t LPTIM4_DIER_ARRMIE_B_0x1 = 1;

    /** @brief External trigger valid edge Interrupt Enable */
    using LPTIM4_DIER_EXTTRIGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EXTTRIG interrupt disabled (value: 0)
     *          - B_0x1: EXTTRIG interrupt enabled (value: 1)
     */
        /** @brief EXTTRIG interrupt disabled */
    constexpr std::uint32_t LPTIM4_DIER_EXTTRIGIE_B_0x0 = 0;
        /** @brief EXTTRIG interrupt enabled */
    constexpr std::uint32_t LPTIM4_DIER_EXTTRIGIE_B_0x1 = 1;

    /** @brief Compare register 1 update OK interrupt enable */
    using LPTIM4_DIER_CMP1OKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMPOK register 1 interrupt disabled (value: 0)
     *          - B_0x1: CMPOK register 1 interrupt enabled (value: 1)
     */
        /** @brief CMPOK register 1 interrupt disabled */
    constexpr std::uint32_t LPTIM4_DIER_CMP1OKIE_B_0x0 = 0;
        /** @brief CMPOK register 1 interrupt enabled */
    constexpr std::uint32_t LPTIM4_DIER_CMP1OKIE_B_0x1 = 1;

    /** @brief Autoreload register update OK Interrupt Enable */
    using LPTIM4_DIER_ARROKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARROK interrupt disabled (value: 0)
     *          - B_0x1: ARROK interrupt enabled (value: 1)
     */
        /** @brief ARROK interrupt disabled */
    constexpr std::uint32_t LPTIM4_DIER_ARROKIE_B_0x0 = 0;
        /** @brief ARROK interrupt enabled */
    constexpr std::uint32_t LPTIM4_DIER_ARROKIE_B_0x1 = 1;

    /** @brief Direction change to UP Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM4_DIER_UPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UP interrupt disabled (value: 0)
     *          - B_0x1: UP interrupt enabled (value: 1)
     */
        /** @brief UP interrupt disabled */
    constexpr std::uint32_t LPTIM4_DIER_UPIE_B_0x0 = 0;
        /** @brief UP interrupt enabled */
    constexpr std::uint32_t LPTIM4_DIER_UPIE_B_0x1 = 1;

    /** @brief Direction change to down Interrupt Enable Note: If the LPTIM does not support encoder mode feature, this bit is reserved. Refer to Section 26.3. */
    using LPTIM4_DIER_DOWNIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOWN interrupt disabled (value: 0)
     *          - B_0x1: DOWN interrupt enabled (value: 1)
     */
        /** @brief DOWN interrupt disabled */
    constexpr std::uint32_t LPTIM4_DIER_DOWNIE_B_0x0 = 0;
        /** @brief DOWN interrupt enabled */
    constexpr std::uint32_t LPTIM4_DIER_DOWNIE_B_0x1 = 1;

    /** @brief Update event interrupt enable */
    using LPTIM4_DIER_UEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update event interrupt disabled (value: 0)
     *          - B_0x1: Update event interrupt enabled (value: 1)
     */
        /** @brief Update event interrupt disabled */
    constexpr std::uint32_t LPTIM4_DIER_UEIE_B_0x0 = 0;
        /** @brief Update event interrupt enabled */
    constexpr std::uint32_t LPTIM4_DIER_UEIE_B_0x1 = 1;

    /** @brief Repetition register update OK interrupt Enable */
    using LPTIM4_DIER_REPOKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Repetition register update OK interrupt disabled (value: 0)
     *          - B_0x1: Repetition register update OK interrupt enabled (value: 1)
     */
        /** @brief Repetition register update OK interrupt disabled */
    constexpr std::uint32_t LPTIM4_DIER_REPOKIE_B_0x0 = 0;
        /** @brief Repetition register update OK interrupt enabled */
    constexpr std::uint32_t LPTIM4_DIER_REPOKIE_B_0x1 = 1;

}

#endif
