/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3C5_LPTIM2_HPP
#define EMBEDDED_PP_STM32U3C5_LPTIM2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief LPTIM2 Address block */
namespace STM32U3C5::LPTIM2 {

    /** @brief LPTIM2 interrupt and status register [alternate] */
    using LPTIM2_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare 1 interrupt flag */
    using LPTIM2_ISR_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No match (value: 0)
     *          - B_0x1: The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR1 register's value (value: 1)
     */
        /** @brief No match */
    constexpr std::uint32_t LPTIM2_ISR_CC1IF_B_0x0 = 0;
        /** @brief The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR1 register's value */
    constexpr std::uint32_t LPTIM2_ISR_CC1IF_B_0x1 = 1;

    /** @brief Autoreload match */
    using LPTIM2_ISR_ARRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger edge event */
    using LPTIM2_ISR_ExTTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register 1 update OK */
    using LPTIM2_ISR_CMP1OK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK */
    using LPTIM2_ISR_ARROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change down to up */
    using LPTIM2_ISR_UP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change up to down */
    using LPTIM2_ISR_DOWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM update event occurred */
    using LPTIM2_ISR_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK */
    using LPTIM2_ISR_REPOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare 2 interrupt flag */
    using LPTIM2_ISR_CC2IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No match (value: 0)
     *          - B_0x1: The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR2 register's value (value: 1)
     */
        /** @brief No match */
    constexpr std::uint32_t LPTIM2_ISR_CC2IF_B_0x0 = 0;
        /** @brief The content of the counter LPTIM_CNT register value has matched the LPTIM_CCR2 register's value */
    constexpr std::uint32_t LPTIM2_ISR_CC2IF_B_0x1 = 1;

    /** @brief Compare register 2 update OK */
    using LPTIM2_ISR_CMP2OK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register update OK */
    using LPTIM2_ISR_DIEROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 interrupt and status register */
    using LPTIM2_ISR_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief capture 1 interrupt flag */
    using LPTIM2_ISR_ALTERNATE1_CC1IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input capture occurred (value: 0)
     *          - B_0x1: The counter value has been captured in the LPTIM_CCR1 register. (value: 1)
     */
        /** @brief No input capture occurred */
    constexpr std::uint32_t LPTIM2_ISR_ALTERNATE1_CC1IF_B_0x0 = 0;
        /** @brief The counter value has been captured in the LPTIM_CCR1 register. */
    constexpr std::uint32_t LPTIM2_ISR_ALTERNATE1_CC1IF_B_0x1 = 1;

    /** @brief Autoreload match */
    using LPTIM2_ISR_ALTERNATE1_ARRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger edge event */
    using LPTIM2_ISR_ALTERNATE1_ExTTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK */
    using LPTIM2_ISR_ALTERNATE1_ARROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change down to up */
    using LPTIM2_ISR_ALTERNATE1_UP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter direction change up to down */
    using LPTIM2_ISR_ALTERNATE1_DOWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM update event occurred */
    using LPTIM2_ISR_ALTERNATE1_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK */
    using LPTIM2_ISR_ALTERNATE1_REPOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture 2 interrupt flag */
    using LPTIM2_ISR_ALTERNATE1_CC2IF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input capture occurred (value: 0)
     *          - B_0x1: The counter value has been captured in the LPTIM_CCR2 register. (value: 1)
     */
        /** @brief No input capture occurred */
    constexpr std::uint32_t LPTIM2_ISR_ALTERNATE1_CC2IF_B_0x0 = 0;
        /** @brief The counter value has been captured in the LPTIM_CCR2 register. */
    constexpr std::uint32_t LPTIM2_ISR_ALTERNATE1_CC2IF_B_0x1 = 1;

    /** @brief Capture 1 over-capture flag */
    using LPTIM2_ISR_ALTERNATE1_CC1OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No over-capture has been detected. (value: 0)
     *          - B_0x1: The counter value has been captured in LPTIM_CCR1 register while CC1IF flag was already set. (value: 1)
     */
        /** @brief No over-capture has been detected. */
    constexpr std::uint32_t LPTIM2_ISR_ALTERNATE1_CC1OF_B_0x0 = 0;
        /** @brief The counter value has been captured in LPTIM_CCR1 register while CC1IF flag was already set. */
    constexpr std::uint32_t LPTIM2_ISR_ALTERNATE1_CC1OF_B_0x1 = 1;

    /** @brief Capture 2 over-capture flag */
    using LPTIM2_ISR_ALTERNATE1_CC2OF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No over-capture has been detected. (value: 0)
     *          - B_0x1: The counter value has been captured in LPTIM_CCR2 register while CC2IF flag was already set. (value: 1)
     */
        /** @brief No over-capture has been detected. */
    constexpr std::uint32_t LPTIM2_ISR_ALTERNATE1_CC2OF_B_0x0 = 0;
        /** @brief The counter value has been captured in LPTIM_CCR2 register while CC2IF flag was already set. */
    constexpr std::uint32_t LPTIM2_ISR_ALTERNATE1_CC2OF_B_0x1 = 1;

    /** @brief Interrupt enable register update OK */
    using LPTIM2_ISR_ALTERNATE1_DIEROK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 interrupt clear register [alternate] */
    using LPTIM2_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 clear flag */
    using LPTIM2_ICR_CC1CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload match clear flag */
    using LPTIM2_ICR_ARRMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger valid edge clear flag */
    using LPTIM2_ICR_ExTTRIGCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register 1 update OK clear flag */
    using LPTIM2_ICR_CMP1OKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK clear flag */
    using LPTIM2_ICR_ARROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to UP clear flag */
    using LPTIM2_ICR_UPCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to down clear flag */
    using LPTIM2_ICR_DOWNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update event clear flag */
    using LPTIM2_ICR_UECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK clear flag */
    using LPTIM2_ICR_REPOKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 clear flag */
    using LPTIM2_ICR_CC2CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Compare register 2 update OK clear flag */
    using LPTIM2_ICR_CMP2OKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register update OK clear flag */
    using LPTIM2_ICR_DIEROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 interrupt clear register */
    using LPTIM2_ICR_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 clear flag */
    using LPTIM2_ICR_ALTERNATE1_CC1CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload match clear flag */
    using LPTIM2_ICR_ALTERNATE1_ARRMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External trigger valid edge clear flag */
    using LPTIM2_ICR_ALTERNATE1_ExTTRIGCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Autoreload register update OK clear flag */
    using LPTIM2_ICR_ALTERNATE1_ARROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to UP clear flag */
    using LPTIM2_ICR_ALTERNATE1_UPCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Direction change to down clear flag */
    using LPTIM2_ICR_ALTERNATE1_DOWNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update event clear flag */
    using LPTIM2_ICR_ALTERNATE1_UECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register update OK clear flag */
    using LPTIM2_ICR_ALTERNATE1_REPOKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 clear flag */
    using LPTIM2_ICR_ALTERNATE1_CC2CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 over-capture clear flag */
    using LPTIM2_ICR_ALTERNATE1_CC1OCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 over-capture clear flag */
    using LPTIM2_ICR_ALTERNATE1_CC2OCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register update OK clear flag */
    using LPTIM2_ICR_ALTERNATE1_DIEROKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 interrupt enable register [alternate] */
    using LPTIM2_DIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 interrupt enable */
    using LPTIM2_DIER_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 1 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 1 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 1 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_CC1IE_B_0x0 = 0;
        /** @brief Capture/compare 1 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_CC1IE_B_0x1 = 1;

    /** @brief Autoreload match Interrupt Enable */
    using LPTIM2_DIER_ARRMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARRM interrupt disabled (value: 0)
     *          - B_0x1: ARRM interrupt enabled (value: 1)
     */
        /** @brief ARRM interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ARRMIE_B_0x0 = 0;
        /** @brief ARRM interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ARRMIE_B_0x1 = 1;

    /** @brief External trigger valid edge Interrupt Enable */
    using LPTIM2_DIER_ExTTRIGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ExTTRIG interrupt disabled (value: 0)
     *          - B_0x1: ExTTRIG interrupt enabled (value: 1)
     */
        /** @brief ExTTRIG interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ExTTRIGIE_B_0x0 = 0;
        /** @brief ExTTRIG interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ExTTRIGIE_B_0x1 = 1;

    /** @brief Compare register 1 update OK interrupt enable */
    using LPTIM2_DIER_CMP1OKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMPOK register 1 interrupt disabled (value: 0)
     *          - B_0x1: CMPOK register 1 interrupt enabled (value: 1)
     */
        /** @brief CMPOK register 1 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_CMP1OKIE_B_0x0 = 0;
        /** @brief CMPOK register 1 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_CMP1OKIE_B_0x1 = 1;

    /** @brief Autoreload register update OK Interrupt Enable */
    using LPTIM2_DIER_ARROKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARROK interrupt disabled (value: 0)
     *          - B_0x1: ARROK interrupt enabled (value: 1)
     */
        /** @brief ARROK interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ARROKIE_B_0x0 = 0;
        /** @brief ARROK interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ARROKIE_B_0x1 = 1;

    /** @brief Direction change to UP Interrupt Enable */
    using LPTIM2_DIER_UPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UP interrupt disabled (value: 0)
     *          - B_0x1: UP interrupt enabled (value: 1)
     */
        /** @brief UP interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_UPIE_B_0x0 = 0;
        /** @brief UP interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_UPIE_B_0x1 = 1;

    /** @brief Direction change to down Interrupt Enable */
    using LPTIM2_DIER_DOWNIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOWN interrupt disabled (value: 0)
     *          - B_0x1: DOWN interrupt enabled (value: 1)
     */
        /** @brief DOWN interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_DOWNIE_B_0x0 = 0;
        /** @brief DOWN interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_DOWNIE_B_0x1 = 1;

    /** @brief Update event interrupt enable */
    using LPTIM2_DIER_UEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update event interrupt disabled (value: 0)
     *          - B_0x1: Update event interrupt enabled (value: 1)
     */
        /** @brief Update event interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_UEIE_B_0x0 = 0;
        /** @brief Update event interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_UEIE_B_0x1 = 1;

    /** @brief Repetition register update OK interrupt Enable */
    using LPTIM2_DIER_REPOKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Repetition register update OK interrupt disabled (value: 0)
     *          - B_0x1: Repetition register update OK interrupt enabled (value: 1)
     */
        /** @brief Repetition register update OK interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_REPOKIE_B_0x0 = 0;
        /** @brief Repetition register update OK interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_REPOKIE_B_0x1 = 1;

    /** @brief Capture/compare 2 interrupt enable */
    using LPTIM2_DIER_CC2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 2 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 2 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 2 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_CC2IE_B_0x0 = 0;
        /** @brief Capture/compare 2 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_CC2IE_B_0x1 = 1;

    /** @brief Compare register 2 update OK interrupt enable */
    using LPTIM2_DIER_CMP2OKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CMPOK register 2 interrupt disabled (value: 0)
     *          - B_0x1: CMPOK register 2 interrupt enabled (value: 1)
     */
        /** @brief CMPOK register 2 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_CMP2OKIE_B_0x0 = 0;
        /** @brief CMPOK register 2 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_CMP2OKIE_B_0x1 = 1;

    /** @brief Update event DMA request enable */
    using LPTIM2_DIER_UEDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UE DMA request disabled. (value: 0)
     *          - B_0x1: UE DMA request enabled (value: 1)
     */
        /** @brief UE DMA request disabled. */
    constexpr std::uint32_t LPTIM2_DIER_UEDE_B_0x0 = 0;
        /** @brief UE DMA request enabled */
    constexpr std::uint32_t LPTIM2_DIER_UEDE_B_0x1 = 1;

    /** @brief LPTIM2 interrupt enable register */
    using LPTIM2_DIER_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 interrupt enable */
    using LPTIM2_DIER_ALTERNATE1_CC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 1 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 1 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 1 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC1IE_B_0x0 = 0;
        /** @brief Capture/compare 1 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC1IE_B_0x1 = 1;

    /** @brief Autoreload match Interrupt Enable */
    using LPTIM2_DIER_ALTERNATE1_ARRMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARRM interrupt disabled (value: 0)
     *          - B_0x1: ARRM interrupt enabled (value: 1)
     */
        /** @brief ARRM interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_ARRMIE_B_0x0 = 0;
        /** @brief ARRM interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_ARRMIE_B_0x1 = 1;

    /** @brief External trigger valid edge Interrupt Enable */
    using LPTIM2_DIER_ALTERNATE1_ExTTRIGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ExTTRIG interrupt disabled (value: 0)
     *          - B_0x1: ExTTRIG interrupt enabled (value: 1)
     */
        /** @brief ExTTRIG interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_ExTTRIGIE_B_0x0 = 0;
        /** @brief ExTTRIG interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_ExTTRIGIE_B_0x1 = 1;

    /** @brief Autoreload register update OK Interrupt Enable */
    using LPTIM2_DIER_ALTERNATE1_ARROKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ARROK interrupt disabled (value: 0)
     *          - B_0x1: ARROK interrupt enabled (value: 1)
     */
        /** @brief ARROK interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_ARROKIE_B_0x0 = 0;
        /** @brief ARROK interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_ARROKIE_B_0x1 = 1;

    /** @brief Direction change to UP Interrupt Enable */
    using LPTIM2_DIER_ALTERNATE1_UPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UP interrupt disabled (value: 0)
     *          - B_0x1: UP interrupt enabled (value: 1)
     */
        /** @brief UP interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_UPIE_B_0x0 = 0;
        /** @brief UP interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_UPIE_B_0x1 = 1;

    /** @brief Direction change to down Interrupt Enable */
    using LPTIM2_DIER_ALTERNATE1_DOWNIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DOWN interrupt disabled (value: 0)
     *          - B_0x1: DOWN interrupt enabled (value: 1)
     */
        /** @brief DOWN interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_DOWNIE_B_0x0 = 0;
        /** @brief DOWN interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_DOWNIE_B_0x1 = 1;

    /** @brief Update event interrupt enable */
    using LPTIM2_DIER_ALTERNATE1_UEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Update event interrupt disabled (value: 0)
     *          - B_0x1: Update event interrupt enabled (value: 1)
     */
        /** @brief Update event interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_UEIE_B_0x0 = 0;
        /** @brief Update event interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_UEIE_B_0x1 = 1;

    /** @brief Repetition register update OK interrupt Enable */
    using LPTIM2_DIER_ALTERNATE1_REPOKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Repetition register update OK interrupt disabled (value: 0)
     *          - B_0x1: Repetition register update OK interrupt enabled (value: 1)
     */
        /** @brief Repetition register update OK interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_REPOKIE_B_0x0 = 0;
        /** @brief Repetition register update OK interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_REPOKIE_B_0x1 = 1;

    /** @brief Capture/compare 2 interrupt enable */
    using LPTIM2_DIER_ALTERNATE1_CC2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture/compare 2 interrupt disabled (value: 0)
     *          - B_0x1: Capture/compare 2 interrupt enabled (value: 1)
     */
        /** @brief Capture/compare 2 interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC2IE_B_0x0 = 0;
        /** @brief Capture/compare 2 interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC2IE_B_0x1 = 1;

    /** @brief Capture/compare 1 over-capture interrupt enable */
    using LPTIM2_DIER_ALTERNATE1_CC1OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 over-capture interrupt disabled (value: 0)
     *          - B_0x1: CC1 over-capture interrupt enabled (value: 1)
     */
        /** @brief CC1 over-capture interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC1OIE_B_0x0 = 0;
        /** @brief CC1 over-capture interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC1OIE_B_0x1 = 1;

    /** @brief Capture/compare 2 over-capture interrupt enable */
    using LPTIM2_DIER_ALTERNATE1_CC2OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 over-capture interrupt disabled (value: 0)
     *          - B_0x1: CC2 over-capture interrupt enabled (value: 1)
     */
        /** @brief CC2 over-capture interrupt disabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC2OIE_B_0x0 = 0;
        /** @brief CC2 over-capture interrupt enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC2OIE_B_0x1 = 1;

    /** @brief Capture/compare 1 DMA request enable */
    using LPTIM2_DIER_ALTERNATE1_CC1DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 DMA request disabled. (value: 0)
     *          - B_0x1: CC1 DMA request enabled (value: 1)
     */
        /** @brief CC1 DMA request disabled. */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC1DE_B_0x0 = 0;
        /** @brief CC1 DMA request enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC1DE_B_0x1 = 1;

    /** @brief Update event DMA request enable */
    using LPTIM2_DIER_ALTERNATE1_UEDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UE DMA request disabled. (value: 0)
     *          - B_0x1: UE DMA request enabled (value: 1)
     */
        /** @brief UE DMA request disabled. */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_UEDE_B_0x0 = 0;
        /** @brief UE DMA request enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_UEDE_B_0x1 = 1;

    /** @brief Capture/compare 2 DMA request enable */
    using LPTIM2_DIER_ALTERNATE1_CC2DE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 DMA request disabled. (value: 0)
     *          - B_0x1: CC2 DMA request enabled (value: 1)
     */
        /** @brief CC2 DMA request disabled. */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC2DE_B_0x0 = 0;
        /** @brief CC2 DMA request enabled */
    constexpr std::uint32_t LPTIM2_DIER_ALTERNATE1_CC2DE_B_0x1 = 1;

    /** @brief LPTIM configuration register */
    using LPTIM2_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock selector */
    using LPTIM2_CFGR_CKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM is clocked by internal clock source (APB clock or any of the embedded oscillators) (value: 0)
     *          - B_0x1: LPTIM is clocked by an external clock source through the LPTIM external Input1 (value: 1)
     */
        /** @brief LPTIM is clocked by internal clock source (APB clock or any of the embedded oscillators) */
    constexpr std::uint32_t LPTIM2_CFGR_CKSEL_B_0x0 = 0;
        /** @brief LPTIM is clocked by an external clock source through the LPTIM external Input1 */
    constexpr std::uint32_t LPTIM2_CFGR_CKSEL_B_0x1 = 1;

    /** @brief Clock Polarity */
    using LPTIM2_CFGR_CKPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the rising edge is the active edge used for counting. (value: 0)
     *          - B_0x1: the falling edge is the active edge used for counting. (value: 1)
     *          - B_0x2: both edges are active edges. (value: 2)
     *          - B_0x3: not allowed (value: 3)
     */
        /** @brief the rising edge is the active edge used for counting. */
    constexpr std::uint32_t LPTIM2_CFGR_CKPOL_B_0x0 = 0;
        /** @brief the falling edge is the active edge used for counting. */
    constexpr std::uint32_t LPTIM2_CFGR_CKPOL_B_0x1 = 1;
        /** @brief both edges are active edges. */
    constexpr std::uint32_t LPTIM2_CFGR_CKPOL_B_0x2 = 2;
        /** @brief not allowed */
    constexpr std::uint32_t LPTIM2_CFGR_CKPOL_B_0x3 = 3;

    /** @brief Configurable digital filter for external clock */
    using LPTIM2_CFGR_CKFLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: any external clock signal level change is considered as a valid transition (value: 0)
     *          - B_0x1: external clock signal level change must be stable for at least 2 clock periods before it is considered as valid transition. (value: 1)
     *          - B_0x2: external clock signal level change must be stable for at least 4 clock periods before it is considered as valid transition. (value: 2)
     *          - B_0x3: external clock signal level change must be stable for at least 8 clock periods before it is considered as valid transition. (value: 3)
     */
        /** @brief any external clock signal level change is considered as a valid transition */
    constexpr std::uint32_t LPTIM2_CFGR_CKFLT_B_0x0 = 0;
        /** @brief external clock signal level change must be stable for at least 2 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM2_CFGR_CKFLT_B_0x1 = 1;
        /** @brief external clock signal level change must be stable for at least 4 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM2_CFGR_CKFLT_B_0x2 = 2;
        /** @brief external clock signal level change must be stable for at least 8 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM2_CFGR_CKFLT_B_0x3 = 3;

    /** @brief Configurable digital filter for trigger */
    using LPTIM2_CFGR_TRGFLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: any trigger active level change is considered as a valid trigger (value: 0)
     *          - B_0x1: trigger active level change must be stable for at least 2 clock periods before it is considered as valid trigger. (value: 1)
     *          - B_0x2: trigger active level change must be stable for at least 4 clock periods before it is considered as valid trigger. (value: 2)
     *          - B_0x3: trigger active level change must be stable for at least 8 clock periods before it is considered as valid trigger. (value: 3)
     */
        /** @brief any trigger active level change is considered as a valid trigger */
    constexpr std::uint32_t LPTIM2_CFGR_TRGFLT_B_0x0 = 0;
        /** @brief trigger active level change must be stable for at least 2 clock periods before it is considered as valid trigger. */
    constexpr std::uint32_t LPTIM2_CFGR_TRGFLT_B_0x1 = 1;
        /** @brief trigger active level change must be stable for at least 4 clock periods before it is considered as valid trigger. */
    constexpr std::uint32_t LPTIM2_CFGR_TRGFLT_B_0x2 = 2;
        /** @brief trigger active level change must be stable for at least 8 clock periods before it is considered as valid trigger. */
    constexpr std::uint32_t LPTIM2_CFGR_TRGFLT_B_0x3 = 3;

    /** @brief Clock prescaler */
    using LPTIM2_CFGR_PRESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t LPTIM2_CFGR_PRESC_B_0x0 = 0;
        /** @brief /2 */
    constexpr std::uint32_t LPTIM2_CFGR_PRESC_B_0x1 = 1;
        /** @brief /4 */
    constexpr std::uint32_t LPTIM2_CFGR_PRESC_B_0x2 = 2;
        /** @brief /8 */
    constexpr std::uint32_t LPTIM2_CFGR_PRESC_B_0x3 = 3;
        /** @brief /16 */
    constexpr std::uint32_t LPTIM2_CFGR_PRESC_B_0x4 = 4;
        /** @brief /32 */
    constexpr std::uint32_t LPTIM2_CFGR_PRESC_B_0x5 = 5;
        /** @brief /64 */
    constexpr std::uint32_t LPTIM2_CFGR_PRESC_B_0x6 = 6;
        /** @brief /128 */
    constexpr std::uint32_t LPTIM2_CFGR_PRESC_B_0x7 = 7;

    /** @brief Trigger selector */
    using LPTIM2_CFGR_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t LPTIM2_CFGR_TRIGSEL_B_0x0 = 0;
        /** @brief lptim_ext_trig1 */
    constexpr std::uint32_t LPTIM2_CFGR_TRIGSEL_B_0x1 = 1;
        /** @brief lptim_ext_trig2 */
    constexpr std::uint32_t LPTIM2_CFGR_TRIGSEL_B_0x2 = 2;
        /** @brief lptim_ext_trig3 */
    constexpr std::uint32_t LPTIM2_CFGR_TRIGSEL_B_0x3 = 3;
        /** @brief lptim_ext_trig4 */
    constexpr std::uint32_t LPTIM2_CFGR_TRIGSEL_B_0x4 = 4;
        /** @brief lptim_ext_trig5 */
    constexpr std::uint32_t LPTIM2_CFGR_TRIGSEL_B_0x5 = 5;
        /** @brief lptim_ext_trig6 */
    constexpr std::uint32_t LPTIM2_CFGR_TRIGSEL_B_0x6 = 6;
        /** @brief lptim_ext_trig7 */
    constexpr std::uint32_t LPTIM2_CFGR_TRIGSEL_B_0x7 = 7;

    /** @brief Trigger enable and polarity */
    using LPTIM2_CFGR_TRIGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: software trigger (counting start is initiated by software) (value: 0)
     *          - B_0x1: rising edge is the active edge (value: 1)
     *          - B_0x2: falling edge is the active edge (value: 2)
     *          - B_0x3: both edges are active edges (value: 3)
     */
        /** @brief software trigger (counting start is initiated by software) */
    constexpr std::uint32_t LPTIM2_CFGR_TRIGEN_B_0x0 = 0;
        /** @brief rising edge is the active edge */
    constexpr std::uint32_t LPTIM2_CFGR_TRIGEN_B_0x1 = 1;
        /** @brief falling edge is the active edge */
    constexpr std::uint32_t LPTIM2_CFGR_TRIGEN_B_0x2 = 2;
        /** @brief both edges are active edges */
    constexpr std::uint32_t LPTIM2_CFGR_TRIGEN_B_0x3 = 3;

    /** @brief Timeout enable */
    using LPTIM2_CFGR_TIMOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A trigger event arriving when the timer is already started is ignored (value: 0)
     *          - B_0x1: A trigger event arriving when the timer is already started resets and restarts the LPTIM counter and the repetition counter (value: 1)
     */
        /** @brief A trigger event arriving when the timer is already started is ignored */
    constexpr std::uint32_t LPTIM2_CFGR_TIMOUT_B_0x0 = 0;
        /** @brief A trigger event arriving when the timer is already started resets and restarts the LPTIM counter and the repetition counter */
    constexpr std::uint32_t LPTIM2_CFGR_TIMOUT_B_0x1 = 1;

    /** @brief Waveform shape */
    using LPTIM2_CFGR_WAVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Deactivate Set-once mode (value: 0)
     *          - B_0x1: Activate the Set-once mode (value: 1)
     */
        /** @brief Deactivate Set-once mode */
    constexpr std::uint32_t LPTIM2_CFGR_WAVE_B_0x0 = 0;
        /** @brief Activate the Set-once mode */
    constexpr std::uint32_t LPTIM2_CFGR_WAVE_B_0x1 = 1;

    /** @brief Waveform shape polarity */
    using LPTIM2_CFGR_WAVPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The LPTIM output reflects the compare results between LPTIM_CNT and LPTIM_CCRx registers (value: 0)
     *          - B_0x1: The LPTIM output reflects the inverse of the compare results between LPTIM_CNT and LPTIM_CCRx registers (value: 1)
     */
        /** @brief The LPTIM output reflects the compare results between LPTIM_CNT and LPTIM_CCRx registers */
    constexpr std::uint32_t LPTIM2_CFGR_WAVPOL_B_0x0 = 0;
        /** @brief The LPTIM output reflects the inverse of the compare results between LPTIM_CNT and LPTIM_CCRx registers */
    constexpr std::uint32_t LPTIM2_CFGR_WAVPOL_B_0x1 = 1;

    /** @brief Registers update mode */
    using LPTIM2_CFGR_PRELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Registers are updated after each APB bus write access (value: 0)
     *          - B_0x1: Registers are updated at the end of the current LPTIM period (value: 1)
     */
        /** @brief Registers are updated after each APB bus write access */
    constexpr std::uint32_t LPTIM2_CFGR_PRELOAD_B_0x0 = 0;
        /** @brief Registers are updated at the end of the current LPTIM period */
    constexpr std::uint32_t LPTIM2_CFGR_PRELOAD_B_0x1 = 1;

    /** @brief counter mode enabled */
    using LPTIM2_CFGR_COUNTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the counter is incremented following each internal clock pulse (value: 0)
     *          - B_0x1: the counter is incremented following each valid clock pulse on the LPTIM external Input1 (value: 1)
     */
        /** @brief the counter is incremented following each internal clock pulse */
    constexpr std::uint32_t LPTIM2_CFGR_COUNTMODE_B_0x0 = 0;
        /** @brief the counter is incremented following each valid clock pulse on the LPTIM external Input1 */
    constexpr std::uint32_t LPTIM2_CFGR_COUNTMODE_B_0x1 = 1;

    /** @brief Encoder mode enable */
    using LPTIM2_CFGR_ENC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Encoder mode disabled (value: 0)
     *          - B_0x1: Encoder mode enabled (value: 1)
     */
        /** @brief Encoder mode disabled */
    constexpr std::uint32_t LPTIM2_CFGR_ENC_B_0x0 = 0;
        /** @brief Encoder mode enabled */
    constexpr std::uint32_t LPTIM2_CFGR_ENC_B_0x1 = 1;

    /** @brief LPTIM control register */
    using LPTIM2_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM enable */
    using LPTIM2_CR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPTIM is disabled. (value: 0)
     *          - B_0x1: LPTIM is enabled (value: 1)
     */
        /** @brief LPTIM is disabled. */
    constexpr std::uint32_t LPTIM2_CR_ENABLE_B_0x0 = 0;
        /** @brief LPTIM is enabled */
    constexpr std::uint32_t LPTIM2_CR_ENABLE_B_0x1 = 1;

    /** @brief LPTIM start in Single mode */
    using LPTIM2_CR_SNGSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer start in Continuous mode */
    using LPTIM2_CR_CNTSTRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter reset */
    using LPTIM2_CR_COUNTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset after read enable */
    using LPTIM2_CR_RSTARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM compare register 1 */
    using LPTIM2_CCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 value */
    using LPTIM2_CCR1_CCR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM autoreload register */
    using LPTIM2_ARR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto reload value */
    using LPTIM2_ARR_ARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM counter register */
    using LPTIM2_CNT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using LPTIM2_CNT_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM configuration register 2 */
    using LPTIM2_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM input 1 selection */
    using LPTIM2_CFGR2_IN1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_in1_mux0 (value: 0)
     *          - B_0x1: lptim_in1_mux1 (value: 1)
     *          - B_0x2: lptim_in1_mux2 (value: 2)
     *          - B_0x3: lptim_in1_mux3 (value: 3)
     */
        /** @brief lptim_in1_mux0 */
    constexpr std::uint32_t LPTIM2_CFGR2_IN1SEL_B_0x0 = 0;
        /** @brief lptim_in1_mux1 */
    constexpr std::uint32_t LPTIM2_CFGR2_IN1SEL_B_0x1 = 1;
        /** @brief lptim_in1_mux2 */
    constexpr std::uint32_t LPTIM2_CFGR2_IN1SEL_B_0x2 = 2;
        /** @brief lptim_in1_mux3 */
    constexpr std::uint32_t LPTIM2_CFGR2_IN1SEL_B_0x3 = 3;

    /** @brief LPTIM input 2 selection */
    using LPTIM2_CFGR2_IN2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_in2_mux0 (value: 0)
     *          - B_0x1: lptim_in2_mux1 (value: 1)
     *          - B_0x2: lptim_in2_mux2 (value: 2)
     *          - B_0x3: lptim_in2_mux3 (value: 3)
     */
        /** @brief lptim_in2_mux0 */
    constexpr std::uint32_t LPTIM2_CFGR2_IN2SEL_B_0x0 = 0;
        /** @brief lptim_in2_mux1 */
    constexpr std::uint32_t LPTIM2_CFGR2_IN2SEL_B_0x1 = 1;
        /** @brief lptim_in2_mux2 */
    constexpr std::uint32_t LPTIM2_CFGR2_IN2SEL_B_0x2 = 2;
        /** @brief lptim_in2_mux3 */
    constexpr std::uint32_t LPTIM2_CFGR2_IN2SEL_B_0x3 = 3;

    /** @brief LPTIM input capture 1 selection */
    using LPTIM2_CFGR2_IC1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_ic1_mux0 (value: 0)
     *          - B_0x1: lptim_ic1_mux1 (value: 1)
     *          - B_0x2: lptim_ic1_mux2 (value: 2)
     *          - B_0x3: lptim_ic1_mux3 (value: 3)
     */
        /** @brief lptim_ic1_mux0 */
    constexpr std::uint32_t LPTIM2_CFGR2_IC1SEL_B_0x0 = 0;
        /** @brief lptim_ic1_mux1 */
    constexpr std::uint32_t LPTIM2_CFGR2_IC1SEL_B_0x1 = 1;
        /** @brief lptim_ic1_mux2 */
    constexpr std::uint32_t LPTIM2_CFGR2_IC1SEL_B_0x2 = 2;
        /** @brief lptim_ic1_mux3 */
    constexpr std::uint32_t LPTIM2_CFGR2_IC1SEL_B_0x3 = 3;

    /** @brief LPTIM input capture 2 selection */
    using LPTIM2_CFGR2_IC2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: lptim_ic2_mux0 (value: 0)
     *          - B_0x1: lptim_ic2_mux1 (value: 1)
     *          - B_0x2: lptim_ic2_mux2 (value: 2)
     *          - B_0x3: lptim_ic2_mux3 (value: 3)
     */
        /** @brief lptim_ic2_mux0 */
    constexpr std::uint32_t LPTIM2_CFGR2_IC2SEL_B_0x0 = 0;
        /** @brief lptim_ic2_mux1 */
    constexpr std::uint32_t LPTIM2_CFGR2_IC2SEL_B_0x1 = 1;
        /** @brief lptim_ic2_mux2 */
    constexpr std::uint32_t LPTIM2_CFGR2_IC2SEL_B_0x2 = 2;
        /** @brief lptim_ic2_mux3 */
    constexpr std::uint32_t LPTIM2_CFGR2_IC2SEL_B_0x3 = 3;

    /** @brief LPTIM repetition register */
    using LPTIM2_RCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Repetition register value */
    using LPTIM2_RCR_REP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM capture/compare mode register 1 */
    using LPTIM2_CCMR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 1 selection */
    using LPTIM2_CCMR1_CC1SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC1 channel is configured in output PWM mode (value: 0)
     *          - B_0x1: CC1 channel is configured in input capture mode (value: 1)
     */
        /** @brief CC1 channel is configured in output PWM mode */
    constexpr std::uint32_t LPTIM2_CCMR1_CC1SEL_B_0x0 = 0;
        /** @brief CC1 channel is configured in input capture mode */
    constexpr std::uint32_t LPTIM2_CCMR1_CC1SEL_B_0x1 = 1;

    /** @brief Capture/compare 1 output enable. */
    using LPTIM2_CCMR1_CC1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_CC1_AS_OUTPUT: Off-OC1 is not active. (value: 0)
     *          - B_0x1_CC1_AS_OUTPUT: On-OC1 signal is output on the corresponding output pin (value: 1)
     */
        /** @brief Off-OC1 is not active. */
    constexpr std::uint32_t LPTIM2_CCMR1_CC1E_B_0x0_CC1_AS_OUTPUT = 0;
        /** @brief On-OC1 signal is output on the corresponding output pin */
    constexpr std::uint32_t LPTIM2_CCMR1_CC1E_B_0x1_CC1_AS_OUTPUT = 1;

    /** @brief Capture/compare 1 output polarity. */
    using LPTIM2_CCMR1_CC1P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_CC1_AS_OUTPUT: OC1 active high, the LPTIM output reflects the compare results between LPTIM_ARR and LPTIM_CCRx registers (value: 0)
     *          - B_0x1_CC1_AS_OUTPUT: OC1 active low, the LPTIM output reflects the inverse of the compare results between LPTIM_ARR and LPTIM_CCRx registers (value: 1)
     *          - B_0x3_CC1_AS_INPUT: both edges, circuit is sensitive to both IC1 rising and falling edges. (value: 3)
     */
        /** @brief OC1 active high, the LPTIM output reflects the compare results between LPTIM_ARR and LPTIM_CCRx registers */
    constexpr std::uint32_t LPTIM2_CCMR1_CC1P_B_0x0_CC1_AS_OUTPUT = 0;
        /** @brief OC1 active low, the LPTIM output reflects the inverse of the compare results between LPTIM_ARR and LPTIM_CCRx registers */
    constexpr std::uint32_t LPTIM2_CCMR1_CC1P_B_0x1_CC1_AS_OUTPUT = 1;
        /** @brief both edges, circuit is sensitive to both IC1 rising and falling edges. */
    constexpr std::uint32_t LPTIM2_CCMR1_CC1P_B_0x3_CC1_AS_INPUT = 3;

    /** @brief Input capture 1 prescaler */
    using LPTIM2_CCMR1_IC1PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no prescaler, capture is done each time an edge is detected on the capture input (value: 0)
     *          - B_0x1: capture is done once every 2 events (value: 1)
     *          - B_0x2: capture is done once every 4 events (value: 2)
     *          - B_0x3: capture is done once every 8 events (value: 3)
     */
        /** @brief no prescaler, capture is done each time an edge is detected on the capture input */
    constexpr std::uint32_t LPTIM2_CCMR1_IC1PSC_B_0x0 = 0;
        /** @brief capture is done once every 2 events */
    constexpr std::uint32_t LPTIM2_CCMR1_IC1PSC_B_0x1 = 1;
        /** @brief capture is done once every 4 events */
    constexpr std::uint32_t LPTIM2_CCMR1_IC1PSC_B_0x2 = 2;
        /** @brief capture is done once every 8 events */
    constexpr std::uint32_t LPTIM2_CCMR1_IC1PSC_B_0x3 = 3;

    /** @brief Input capture 1 filter */
    using LPTIM2_CCMR1_IC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: any external input capture signal level change is considered as a valid transition (value: 0)
     *          - B_0x1: external input capture signal level change must be stable for at least 2 clock periods before it is considered as valid transition. (value: 1)
     *          - B_0x2: external input capture signal level change must be stable for at least 4 clock periods before it is considered as valid transition. (value: 2)
     *          - B_0x3: external input capture signal level change must be stable for at least 8 clock periods before it is considered as valid transition. (value: 3)
     */
        /** @brief any external input capture signal level change is considered as a valid transition */
    constexpr std::uint32_t LPTIM2_CCMR1_IC1F_B_0x0 = 0;
        /** @brief external input capture signal level change must be stable for at least 2 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM2_CCMR1_IC1F_B_0x1 = 1;
        /** @brief external input capture signal level change must be stable for at least 4 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM2_CCMR1_IC1F_B_0x2 = 2;
        /** @brief external input capture signal level change must be stable for at least 8 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM2_CCMR1_IC1F_B_0x3 = 3;

    /** @brief Capture/compare 2 selection */
    using LPTIM2_CCMR1_CC2SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CC2 channel is configured in output PWM mode (value: 0)
     *          - B_0x1: CC2 channel is configured in input capture mode (value: 1)
     */
        /** @brief CC2 channel is configured in output PWM mode */
    constexpr std::uint32_t LPTIM2_CCMR1_CC2SEL_B_0x0 = 0;
        /** @brief CC2 channel is configured in input capture mode */
    constexpr std::uint32_t LPTIM2_CCMR1_CC2SEL_B_0x1 = 1;

    /** @brief Capture/compare 2 output enable. */
    using LPTIM2_CCMR1_CC2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_CC2_AS_OUTPUT: Off-OC2 is not active. (value: 0)
     *          - B_0x1_CC2_AS_OUTPUT: On-OC2 signal is output on the corresponding output pin (value: 1)
     */
        /** @brief Off-OC2 is not active. */
    constexpr std::uint32_t LPTIM2_CCMR1_CC2E_B_0x0_CC2_AS_OUTPUT = 0;
        /** @brief On-OC2 signal is output on the corresponding output pin */
    constexpr std::uint32_t LPTIM2_CCMR1_CC2E_B_0x1_CC2_AS_OUTPUT = 1;

    /** @brief Capture/compare 2 output polarity. */
    using LPTIM2_CCMR1_CC2P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_CC2_AS_OUTPUT: OC2 active high (value: 0)
     *          - B_0x1_CC2_AS_OUTPUT: OC2 active low (value: 1)
     *          - B_0x3_CC2_AS_INPUT: both edges, circuit is sensitive to both IC2 rising and falling edges. (value: 3)
     */
        /** @brief OC2 active high */
    constexpr std::uint32_t LPTIM2_CCMR1_CC2P_B_0x0_CC2_AS_OUTPUT = 0;
        /** @brief OC2 active low */
    constexpr std::uint32_t LPTIM2_CCMR1_CC2P_B_0x1_CC2_AS_OUTPUT = 1;
        /** @brief both edges, circuit is sensitive to both IC2 rising and falling edges. */
    constexpr std::uint32_t LPTIM2_CCMR1_CC2P_B_0x3_CC2_AS_INPUT = 3;

    /** @brief Input capture 2 prescaler */
    using LPTIM2_CCMR1_IC2PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no prescaler, capture is done each time an edge is detected on the capture input (value: 0)
     *          - B_0x1: capture is done once every 2 events (value: 1)
     *          - B_0x2: capture is done once every 4 events (value: 2)
     *          - B_0x3: capture is done once every 8 events (value: 3)
     */
        /** @brief no prescaler, capture is done each time an edge is detected on the capture input */
    constexpr std::uint32_t LPTIM2_CCMR1_IC2PSC_B_0x0 = 0;
        /** @brief capture is done once every 2 events */
    constexpr std::uint32_t LPTIM2_CCMR1_IC2PSC_B_0x1 = 1;
        /** @brief capture is done once every 4 events */
    constexpr std::uint32_t LPTIM2_CCMR1_IC2PSC_B_0x2 = 2;
        /** @brief capture is done once every 8 events */
    constexpr std::uint32_t LPTIM2_CCMR1_IC2PSC_B_0x3 = 3;

    /** @brief Input capture 2 filter */
    using LPTIM2_CCMR1_IC2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: any external input capture signal level change is considered as a valid transition (value: 0)
     *          - B_0x1: external input capture signal level change must be stable for at least 2 clock periods before it is considered as valid transition. (value: 1)
     *          - B_0x2: external input capture signal level change must be stable for at least 4 clock periods before it is considered as valid transition. (value: 2)
     *          - B_0x3: external input capture signal level change must be stable for at least 8 clock periods before it is considered as valid transition. (value: 3)
     */
        /** @brief any external input capture signal level change is considered as a valid transition */
    constexpr std::uint32_t LPTIM2_CCMR1_IC2F_B_0x0 = 0;
        /** @brief external input capture signal level change must be stable for at least 2 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM2_CCMR1_IC2F_B_0x1 = 1;
        /** @brief external input capture signal level change must be stable for at least 4 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM2_CCMR1_IC2F_B_0x2 = 2;
        /** @brief external input capture signal level change must be stable for at least 8 clock periods before it is considered as valid transition. */
    constexpr std::uint32_t LPTIM2_CCMR1_IC2F_B_0x3 = 3;

    /** @brief LPTIM compare register 2 */
    using LPTIM2_CCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture/compare 2 value */
    using LPTIM2_CCR2_CCR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
