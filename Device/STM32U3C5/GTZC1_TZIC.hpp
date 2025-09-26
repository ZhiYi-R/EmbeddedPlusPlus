/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3C5_GTZC1_TZIC_HPP
#define EMBEDDED_PP_STM32U3C5_GTZC1_TZIC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GTZC1_TZIC address block description */
namespace STM32U3C5::GTZC1_TZIC {

    /** @brief GTZC1 TZIC interrupt enable register 1 */
    using GTZC1_TZIC_IER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access interrupt enable for TIM2 */
    using GTZC1_TZIC_IER1_TIM2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_TIM2IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_TIM2IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for TIM3 */
    using GTZC1_TZIC_IER1_TIM3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_TIM3IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_TIM3IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for TIM4 */
    using GTZC1_TZIC_IER1_TIM4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_TIM4IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_TIM4IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for TIM6 */
    using GTZC1_TZIC_IER1_TIM6IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_TIM6IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_TIM6IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for TIM7 */
    using GTZC1_TZIC_IER1_TIM7IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_TIM7IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_TIM7IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for WWDG */
    using GTZC1_TZIC_IER1_WWDGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_WWDGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_WWDGIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for IWDG */
    using GTZC1_TZIC_IER1_IWDGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_IWDGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_IWDGIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SPI2 */
    using GTZC1_TZIC_IER1_SPI2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_SPI2IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_SPI2IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for USART2 */
    using GTZC1_TZIC_IER1_USART2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_USART2IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_USART2IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for USART3 */
    using GTZC1_TZIC_IER1_USART3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_USART3IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_USART3IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for UART4 */
    using GTZC1_TZIC_IER1_UART4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_UART4IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_UART4IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for UART5 */
    using GTZC1_TZIC_IER1_UART5IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_UART5IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_UART5IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for I2C1 */
    using GTZC1_TZIC_IER1_I2C1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_I2C1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_I2C1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for I2C2 */
    using GTZC1_TZIC_IER1_I2C2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_I2C2IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_I2C2IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for CRS */
    using GTZC1_TZIC_IER1_CRSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_CRSIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_CRSIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for I2C4 */
    using GTZC1_TZIC_IER1_I2C4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_I2C4IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_I2C4IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for LPTIM2 */
    using GTZC1_TZIC_IER1_LPTIM2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_LPTIM2IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_LPTIM2IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for FDCAN1 and FDCAN SRAM */
    using GTZC1_TZIC_IER1_FDCAN1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_FDCAN1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_FDCAN1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for FDCAN2 */
    using GTZC1_TZIC_IER1_FDCAN2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_FDCAN2IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_FDCAN2IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SPI3 */
    using GTZC1_TZIC_IER1_SPI3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_SPI3IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_SPI3IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for I3C1 */
    using GTZC1_TZIC_IER1_I3C1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_I3C1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_I3C1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for OPAMP */
    using GTZC1_TZIC_IER1_OPAMPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_OPAMPIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_OPAMPIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for VREFBUF */
    using GTZC1_TZIC_IER1_VREFBUFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_VREFBUFIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_VREFBUFIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SPI4 */
    using GTZC1_TZIC_IER1_SPI4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_SPI4IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER1_SPI4IE_B_0x1 = 1;

    /** @brief GTZC1 TZIC interrupt enable register 2 */
    using GTZC1_TZIC_IER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access interrupt enable for TIM1 */
    using GTZC1_TZIC_IER2_TIM1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SPI1 */
    using GTZC1_TZIC_IER2_SPI1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_SPI1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_SPI1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for TIM8 */
    using GTZC1_TZIC_IER2_TIM8IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM8IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM8IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for USART1 */
    using GTZC1_TZIC_IER2_USART1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_USART1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_USART1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for TIM15 */
    using GTZC1_TZIC_IER2_TIM15IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM15IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM15IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for TIM16 */
    using GTZC1_TZIC_IER2_TIM16IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM16IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM16IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for TIM17 */
    using GTZC1_TZIC_IER2_TIM17IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM17IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM17IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SAI1 */
    using GTZC1_TZIC_IER2_SAI1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_SAI1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_SAI1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for TIM12 */
    using GTZC1_TZIC_IER2_TIM12IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM12IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_TIM12IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for USB */
    using GTZC1_TZIC_IER2_USBIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_USBIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_USBIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for I3C2 */
    using GTZC1_TZIC_IER2_I3C2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_I3C2IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_I3C2IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for LPUART1 */
    using GTZC1_TZIC_IER2_LPUART1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_LPUART1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_LPUART1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for I2C3 */
    using GTZC1_TZIC_IER2_I2C3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_I2C3IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_I2C3IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for LPTIM1 */
    using GTZC1_TZIC_IER2_LPTIM1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_LPTIM1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_LPTIM1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for LPTIM3 */
    using GTZC1_TZIC_IER2_LPTIM3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_LPTIM3IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_LPTIM3IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for LPTIM4 */
    using GTZC1_TZIC_IER2_LPTIM4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_LPTIM4IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_LPTIM4IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for COMP */
    using GTZC1_TZIC_IER2_COMPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_COMPIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER2_COMPIE_B_0x1 = 1;

    /** @brief GTZC1 TZIC interrupt enable register 3 */
    using GTZC1_TZIC_IER3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access interrupt enable for CRC */
    using GTZC1_TZIC_IER3_CRCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_CRCIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_CRCIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for TSC */
    using GTZC1_TZIC_IER3_TSCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_TSCIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_TSCIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for ICACHE registers */
    using GTZC1_TZIC_IER3_ICACHE_REGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_ICACHE_REGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_ICACHE_REGIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for ADC1 and ADC2 */
    using GTZC1_TZIC_IER3_ADC12IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_ADC12IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_ADC12IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for AES */
    using GTZC1_TZIC_IER3_AESIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_AESIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_AESIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for HASH */
    using GTZC1_TZIC_IER3_HASHIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_HASHIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_HASHIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for RNG */
    using GTZC1_TZIC_IER3_RNGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_RNGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_RNGIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for PKA */
    using GTZC1_TZIC_IER3_PKAIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_PKAIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_PKAIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SAES */
    using GTZC1_TZIC_IER3_SAESIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_SAESIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_SAESIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for CCB */
    using GTZC1_TZIC_IER3_CCBIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_CCBIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_CCBIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SDMMC1 */
    using GTZC1_TZIC_IER3_SDMMC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_SDMMC1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_SDMMC1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for OCTOSPI1 registers */
    using GTZC1_TZIC_IER3_OCTOSPI1_REGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_OCTOSPI1_REGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_OCTOSPI1_REGIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for RAMCFG */
    using GTZC1_TZIC_IER3_RAMCFGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_RAMCFGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_RAMCFGIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for DAC1 */
    using GTZC1_TZIC_IER3_DAC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_DAC1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_DAC1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for ADF1 */
    using GTZC1_TZIC_IER3_ADF1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_ADF1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_ADF1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for HSP1 */
    using GTZC1_TZIC_IER3_HSP1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_HSP1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER3_HSP1IE_B_0x1 = 1;

    /** @brief GTZC1 TZIC interrupt enable register 4 */
    using GTZC1_TZIC_IER4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access interrupt enable for GPDMA1 */
    using GTZC1_TZIC_IER4_GPDMA1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_GPDMA1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_GPDMA1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for FLASH registers */
    using GTZC1_TZIC_IER4_FLASH_REGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_FLASH_REGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_FLASH_REGIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for FLASH memory */
    using GTZC1_TZIC_IER4_FLASHIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_FLASHIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_FLASHIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for PWR */
    using GTZC1_TZIC_IER4_PWRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_PWRIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_PWRIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for RCC */
    using GTZC1_TZIC_IER4_RCCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_RCCIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_RCCIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SYSCFG */
    using GTZC1_TZIC_IER4_SYSCFGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_SYSCFGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_SYSCFGIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for EXTI */
    using GTZC1_TZIC_IER4_EXTIIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_EXTIIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_EXTIIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for RTC */
    using GTZC1_TZIC_IER4_RTCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_RTCIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_RTCIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for TAMP */
    using GTZC1_TZIC_IER4_TAMPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_TAMPIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_TAMPIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for GTZC1 TZSC registers */
    using GTZC1_TZIC_IER4_TZSC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_TZSC1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_TZSC1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for GTZC1 TZIC registers */
    using GTZC1_TZIC_IER4_TZIC1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_TZIC1IE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_TZIC1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SRAM1 */
    using GTZC1_TZIC_IER4_SRAM1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_SRAM1IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_SRAM1IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for MPCBB1 registers */
    using GTZC1_TZIC_IER4_MPCBB1_REGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_MPCBB1_REGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_MPCBB1_REGIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SRAM2 */
    using GTZC1_TZIC_IER4_SRAM2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_SRAM2IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_SRAM2IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for MPCBB2 registers */
    using GTZC1_TZIC_IER4_MPCBB2_REGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_MPCBB2_REGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_MPCBB2_REGIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SRAM3 */
    using GTZC1_TZIC_IER4_SRAM3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_SRAM3IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_SRAM3IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for MPCBB3 registers */
    using GTZC1_TZIC_IER4_MPCBB3_REGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_MPCBB3_REGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_MPCBB3_REGIE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for SRAM4 */
    using GTZC1_TZIC_IER4_SRAM4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_SRAM4IE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_SRAM4IE_B_0x1 = 1;

    /** @brief Illegal access interrupt enable for MPCBB4 registers */
    using GTZC1_TZIC_IER4_MPCBB4_REGIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_MPCBB4_REGIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t GTZC1_TZIC_IER4_MPCBB4_REGIE_B_0x1 = 1;

    /** @brief GTZC1 TZIC status register 1 */
    using GTZC1_TZIC_SR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access flag for TIM2 */
    using GTZC1_TZIC_SR1_TIM2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_TIM2F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_TIM2F_B_0x1 = 1;

    /** @brief Illegal access flag for TIM3 */
    using GTZC1_TZIC_SR1_TIM3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_TIM3F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_TIM3F_B_0x1 = 1;

    /** @brief Illegal access flag for TIM4 */
    using GTZC1_TZIC_SR1_TIM4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_TIM4F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_TIM4F_B_0x1 = 1;

    /** @brief Illegal access flag for TIM6 */
    using GTZC1_TZIC_SR1_TIM6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_TIM6F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_TIM6F_B_0x1 = 1;

    /** @brief Illegal access flag for TIM7 */
    using GTZC1_TZIC_SR1_TIM7F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_TIM7F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_TIM7F_B_0x1 = 1;

    /** @brief Illegal access flag for WWDG */
    using GTZC1_TZIC_SR1_WWDGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_WWDGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_WWDGF_B_0x1 = 1;

    /** @brief Illegal access flag for IWDG */
    using GTZC1_TZIC_SR1_IWDGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_IWDGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_IWDGF_B_0x1 = 1;

    /** @brief Illegal access flag for SPI2 */
    using GTZC1_TZIC_SR1_SPI2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_SPI2F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_SPI2F_B_0x1 = 1;

    /** @brief Illegal access flag for USART2 */
    using GTZC1_TZIC_SR1_USART2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_USART2F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_USART2F_B_0x1 = 1;

    /** @brief Illegal access flag for USART3 */
    using GTZC1_TZIC_SR1_USART3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_USART3F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_USART3F_B_0x1 = 1;

    /** @brief Illegal access flag for UART4 */
    using GTZC1_TZIC_SR1_UART4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_UART4F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_UART4F_B_0x1 = 1;

    /** @brief Illegal access flag for UART5 */
    using GTZC1_TZIC_SR1_UART5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_UART5F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_UART5F_B_0x1 = 1;

    /** @brief Illegal access flag for I2C1 */
    using GTZC1_TZIC_SR1_I2C1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_I2C1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_I2C1F_B_0x1 = 1;

    /** @brief Illegal access flag for I2C2 */
    using GTZC1_TZIC_SR1_I2C2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_I2C2F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_I2C2F_B_0x1 = 1;

    /** @brief Illegal access flag for CRS */
    using GTZC1_TZIC_SR1_CRSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_CRSF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_CRSF_B_0x1 = 1;

    /** @brief Illegal access flag for I2C4 */
    using GTZC1_TZIC_SR1_I2C4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_I2C4F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_I2C4F_B_0x1 = 1;

    /** @brief Illegal access flag for LPTIM2 */
    using GTZC1_TZIC_SR1_LPTIM2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_LPTIM2F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_LPTIM2F_B_0x1 = 1;

    /** @brief Illegal access flag for FDCAN1 and FDCAN SRAM */
    using GTZC1_TZIC_SR1_FDCAN1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_FDCAN1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_FDCAN1F_B_0x1 = 1;

    /** @brief Illegal access flag for FDCAN2 */
    using GTZC1_TZIC_SR1_FDCAN2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_FDCAN2F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_FDCAN2F_B_0x1 = 1;

    /** @brief Illegal access flag for SPI3 */
    using GTZC1_TZIC_SR1_SPI3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_SPI3F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_SPI3F_B_0x1 = 1;

    /** @brief Illegal access flag for I3C1 */
    using GTZC1_TZIC_SR1_I3C1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_I3C1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_I3C1F_B_0x1 = 1;

    /** @brief Illegal access flag for OPAMP */
    using GTZC1_TZIC_SR1_OPAMPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_OPAMPF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_OPAMPF_B_0x1 = 1;

    /** @brief Illegal access flag for VREFBUF */
    using GTZC1_TZIC_SR1_VREFBUFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_VREFBUFF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_VREFBUFF_B_0x1 = 1;

    /** @brief Illegal access flag for SPI4 */
    using GTZC1_TZIC_SR1_SPI4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_SPI4F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR1_SPI4F_B_0x1 = 1;

    /** @brief GTZC1 TZIC status register 2 */
    using GTZC1_TZIC_SR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access flag for TIM1 */
    using GTZC1_TZIC_SR2_TIM1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM1F_B_0x1 = 1;

    /** @brief Illegal access flag for SPI1 */
    using GTZC1_TZIC_SR2_SPI1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_SPI1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_SPI1F_B_0x1 = 1;

    /** @brief Illegal access flag for TIM8 */
    using GTZC1_TZIC_SR2_TIM8F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM8F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM8F_B_0x1 = 1;

    /** @brief Illegal access flag for USART1 */
    using GTZC1_TZIC_SR2_USART1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_USART1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_USART1F_B_0x1 = 1;

    /** @brief Illegal access flag for TIM15 */
    using GTZC1_TZIC_SR2_TIM15F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM15F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM15F_B_0x1 = 1;

    /** @brief Illegal access flag for TIM16 */
    using GTZC1_TZIC_SR2_TIM16F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM16F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM16F_B_0x1 = 1;

    /** @brief Illegal access flag for TIM17 */
    using GTZC1_TZIC_SR2_TIM17F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM17F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM17F_B_0x1 = 1;

    /** @brief Illegal access flag for SAI1 */
    using GTZC1_TZIC_SR2_SAI1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_SAI1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_SAI1F_B_0x1 = 1;

    /** @brief Illegal access flag for TIM12 */
    using GTZC1_TZIC_SR2_TIM12F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM12F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_TIM12F_B_0x1 = 1;

    /** @brief Illegal access flag for USB */
    using GTZC1_TZIC_SR2_USBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_USBF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_USBF_B_0x1 = 1;

    /** @brief Illegal access flag for I3C2 */
    using GTZC1_TZIC_SR2_I3C2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_I3C2F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_I3C2F_B_0x1 = 1;

    /** @brief Illegal access flag for LPUART1 */
    using GTZC1_TZIC_SR2_LPUART1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_LPUART1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_LPUART1F_B_0x1 = 1;

    /** @brief Illegal access flag for I2C3 */
    using GTZC1_TZIC_SR2_I2C3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_I2C3F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_I2C3F_B_0x1 = 1;

    /** @brief Illegal access flag for LPTIM1 */
    using GTZC1_TZIC_SR2_LPTIM1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_LPTIM1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_LPTIM1F_B_0x1 = 1;

    /** @brief Illegal access flag for LPTIM3 */
    using GTZC1_TZIC_SR2_LPTIM3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_LPTIM3F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_LPTIM3F_B_0x1 = 1;

    /** @brief Illegal access flag for LPTIM4 */
    using GTZC1_TZIC_SR2_LPTIM4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_LPTIM4F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_LPTIM4F_B_0x1 = 1;

    /** @brief Illegal access flag for COMP */
    using GTZC1_TZIC_SR2_COMPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_COMPF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR2_COMPF_B_0x1 = 1;

    /** @brief GTZC1 TZIC status register 3 */
    using GTZC1_TZIC_SR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access flag for CRC */
    using GTZC1_TZIC_SR3_CRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_CRCF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_CRCF_B_0x1 = 1;

    /** @brief Illegal access flag for TSC */
    using GTZC1_TZIC_SR3_TSCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_TSCF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_TSCF_B_0x1 = 1;

    /** @brief Illegal access flag for ICACHE registers */
    using GTZC1_TZIC_SR3_ICACHE_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_ICACHE_REGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_ICACHE_REGF_B_0x1 = 1;

    /** @brief Illegal access flag for ADC1 and ADC2 */
    using GTZC1_TZIC_SR3_ADC12F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_ADC12F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_ADC12F_B_0x1 = 1;

    /** @brief Illegal access flag for AES */
    using GTZC1_TZIC_SR3_AESF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_AESF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_AESF_B_0x1 = 1;

    /** @brief Illegal access flag for HASH */
    using GTZC1_TZIC_SR3_HASHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_HASHF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_HASHF_B_0x1 = 1;

    /** @brief Illegal access flag for RNG */
    using GTZC1_TZIC_SR3_RNGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_RNGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_RNGF_B_0x1 = 1;

    /** @brief Illegal access flag for PKA */
    using GTZC1_TZIC_SR3_PKAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_PKAF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_PKAF_B_0x1 = 1;

    /** @brief Illegal access flag for SAES */
    using GTZC1_TZIC_SR3_SAESF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_SAESF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_SAESF_B_0x1 = 1;

    /** @brief Illegal access flag for CCB */
    using GTZC1_TZIC_SR3_CCBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_CCBF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_CCBF_B_0x1 = 1;

    /** @brief Illegal access flag for SDMMC1 */
    using GTZC1_TZIC_SR3_SDMMC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_SDMMC1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_SDMMC1F_B_0x1 = 1;

    /** @brief Illegal access flag for OCTOSPI1 registers */
    using GTZC1_TZIC_SR3_OCTOSPI1_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_OCTOSPI1_REGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_OCTOSPI1_REGF_B_0x1 = 1;

    /** @brief Illegal access flag for RAMCFG */
    using GTZC1_TZIC_SR3_RAMCFGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_RAMCFGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_RAMCFGF_B_0x1 = 1;

    /** @brief Illegal access flag for DAC1 */
    using GTZC1_TZIC_SR3_DAC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_DAC1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_DAC1F_B_0x1 = 1;

    /** @brief Illegal access flag for ADF1 */
    using GTZC1_TZIC_SR3_ADF1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_ADF1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_ADF1F_B_0x1 = 1;

    /** @brief Illegal access flag for HSP1 */
    using GTZC1_TZIC_SR3_HSP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_HSP1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR3_HSP1F_B_0x1 = 1;

    /** @brief GTZC1 TZIC status register 4 */
    using GTZC1_TZIC_SR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Illegal access flag for GPDMA1 */
    using GTZC1_TZIC_SR4_GPDMA1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_GPDMA1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_GPDMA1F_B_0x1 = 1;

    /** @brief Illegal access flag for FLASH registers */
    using GTZC1_TZIC_SR4_FLASH_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_FLASH_REGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_FLASH_REGF_B_0x1 = 1;

    /** @brief Illegal access flag for FLASH memory */
    using GTZC1_TZIC_SR4_FLASHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_FLASHF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_FLASHF_B_0x1 = 1;

    /** @brief Illegal access flag for PWR */
    using GTZC1_TZIC_SR4_PWRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_PWRF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_PWRF_B_0x1 = 1;

    /** @brief Illegal access flag for RCC */
    using GTZC1_TZIC_SR4_RCCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_RCCF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_RCCF_B_0x1 = 1;

    /** @brief Illegal access flag for SYSCFG */
    using GTZC1_TZIC_SR4_SYSCFGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_SYSCFGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_SYSCFGF_B_0x1 = 1;

    /** @brief Illegal access flag for EXTI */
    using GTZC1_TZIC_SR4_EXTIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_EXTIF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_EXTIF_B_0x1 = 1;

    /** @brief Illegal access flag for RTC */
    using GTZC1_TZIC_SR4_RTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_RTCF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_RTCF_B_0x1 = 1;

    /** @brief Illegal access flag for TAMP */
    using GTZC1_TZIC_SR4_TAMPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_TAMPF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_TAMPF_B_0x1 = 1;

    /** @brief Illegal access flag for GTZC1 TZSC registers */
    using GTZC1_TZIC_SR4_TZSC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_TZSC1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_TZSC1F_B_0x1 = 1;

    /** @brief Illegal access flag for GTZC1 TZIC registers */
    using GTZC1_TZIC_SR4_TZIC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_TZIC1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_TZIC1F_B_0x1 = 1;

    /** @brief Illegal access flag for SRAM1 */
    using GTZC1_TZIC_SR4_SRAM1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_SRAM1F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_SRAM1F_B_0x1 = 1;

    /** @brief Illegal access flag for MPCBB1 registers */
    using GTZC1_TZIC_SR4_MPCBB1_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_MPCBB1_REGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_MPCBB1_REGF_B_0x1 = 1;

    /** @brief Illegal access flag for SRAM2 */
    using GTZC1_TZIC_SR4_SRAM2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_SRAM2F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_SRAM2F_B_0x1 = 1;

    /** @brief Illegal access flag for MPCBB2 registers */
    using GTZC1_TZIC_SR4_MPCBB2_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_MPCBB2_REGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_MPCBB2_REGF_B_0x1 = 1;

    /** @brief Illegal access flag for SRAM3 */
    using GTZC1_TZIC_SR4_SRAM3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_SRAM3F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_SRAM3F_B_0x1 = 1;

    /** @brief Illegal access flag for MPCBB3 registers */
    using GTZC1_TZIC_SR4_MPCBB3_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_MPCBB3_REGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_MPCBB3_REGF_B_0x1 = 1;

    /** @brief Illegal access flag for SRAM4 */
    using GTZC1_TZIC_SR4_SRAM4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_SRAM4F_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_SRAM4F_B_0x1 = 1;

    /** @brief Illegal access flag for MPCBB4 registers */
    using GTZC1_TZIC_SR4_MPCBB4_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No illegal access event (value: 0)
     *          - B_0x1: Illegal access event (value: 1)
     */
        /** @brief No illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_MPCBB4_REGF_B_0x0 = 0;
        /** @brief Illegal access event */
    constexpr std::uint32_t GTZC1_TZIC_SR4_MPCBB4_REGF_B_0x1 = 1;

    /** @brief GTZC1 TZIC flag clear register 1 */
    using GTZC1_TZIC_FCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the illegal access flag for TIM2 */
    using GTZC1_TZIC_FCR1_CTIM2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CTIM2F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CTIM2F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for TIM3 */
    using GTZC1_TZIC_FCR1_CTIM3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CTIM3F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CTIM3F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for TIM4 */
    using GTZC1_TZIC_FCR1_CTIM4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CTIM4F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CTIM4F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for TIM6 */
    using GTZC1_TZIC_FCR1_CTIM6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CTIM6F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CTIM6F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for TIM7 */
    using GTZC1_TZIC_FCR1_CTIM7F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CTIM7F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CTIM7F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for WWDG */
    using GTZC1_TZIC_FCR1_CWWDGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CWWDGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CWWDGF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for IWDG */
    using GTZC1_TZIC_FCR1_CIWDGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CIWDGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CIWDGF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SPI2 */
    using GTZC1_TZIC_FCR1_CSPI2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CSPI2F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CSPI2F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for USART2 */
    using GTZC1_TZIC_FCR1_CUSART2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CUSART2F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CUSART2F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for USART3 */
    using GTZC1_TZIC_FCR1_CUSART3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CUSART3F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CUSART3F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for UART4 */
    using GTZC1_TZIC_FCR1_CUART4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CUART4F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CUART4F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for UART5 */
    using GTZC1_TZIC_FCR1_CUART5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CUART5F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CUART5F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for I2C1 */
    using GTZC1_TZIC_FCR1_CI2C1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CI2C1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CI2C1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for I2C2 */
    using GTZC1_TZIC_FCR1_CI2C2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CI2C2F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CI2C2F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for CRS */
    using GTZC1_TZIC_FCR1_CCRSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CCRSF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CCRSF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for I2C4 */
    using GTZC1_TZIC_FCR1_CI2C4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CI2C4F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CI2C4F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for LPTIM2 */
    using GTZC1_TZIC_FCR1_CLPTIM2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CLPTIM2F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CLPTIM2F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for FDCAN1 and FDCAN SRAM. */
    using GTZC1_TZIC_FCR1_CFDCAN1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CFDCAN1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CFDCAN1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for FDCAN2 */
    using GTZC1_TZIC_FCR1_CFDCAN2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CFDCAN2F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CFDCAN2F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SPI3 */
    using GTZC1_TZIC_FCR1_CSPI3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CSPI3F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CSPI3F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for I3C1 */
    using GTZC1_TZIC_FCR1_CI3C1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CI3C1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CI3C1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for OPAMP */
    using GTZC1_TZIC_FCR1_COPAMPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_COPAMPF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_COPAMPF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for VREFBUF */
    using GTZC1_TZIC_FCR1_CVREFBUFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CVREFBUFF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CVREFBUFF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SPI4 */
    using GTZC1_TZIC_FCR1_CSPI4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CSPI4F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR1_CSPI4F_B_0x1 = 1;

    /** @brief GTZC1 TZIC flag clear register 2 */
    using GTZC1_TZIC_FCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the illegal access flag for TIM1 */
    using GTZC1_TZIC_FCR2_CTIM1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SPI1 */
    using GTZC1_TZIC_FCR2_CSPI1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CSPI1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CSPI1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for TIM8 */
    using GTZC1_TZIC_FCR2_CTIM8F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM8F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM8F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for USART1 */
    using GTZC1_TZIC_FCR2_CUSART1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CUSART1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CUSART1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for TIM15 */
    using GTZC1_TZIC_FCR2_CTIM15F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM15F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM15F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for TIM16 */
    using GTZC1_TZIC_FCR2_CTIM16F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM16F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM16F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for TIM17 */
    using GTZC1_TZIC_FCR2_CTIM17F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM17F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM17F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SAI1 */
    using GTZC1_TZIC_FCR2_CSAI1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CSAI1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CSAI1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for TIM12 */
    using GTZC1_TZIC_FCR2_CTIM12F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM12F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CTIM12F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for USB */
    using GTZC1_TZIC_FCR2_CUSBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CUSBF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CUSBF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for I3C2 */
    using GTZC1_TZIC_FCR2_CI3C2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CI3C2F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CI3C2F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for LPUART1 */
    using GTZC1_TZIC_FCR2_CLPUART1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CLPUART1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CLPUART1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for I2C3 */
    using GTZC1_TZIC_FCR2_CI2C3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CI2C3F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CI2C3F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for LPTIM1 */
    using GTZC1_TZIC_FCR2_CLPTIM1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CLPTIM1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CLPTIM1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for LPTIM3 */
    using GTZC1_TZIC_FCR2_CLPTIM3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CLPTIM3F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CLPTIM3F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for LPTIM4 */
    using GTZC1_TZIC_FCR2_CLPTIM4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CLPTIM4F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CLPTIM4F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for COMP */
    using GTZC1_TZIC_FCR2_CCOMPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CCOMPF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR2_CCOMPF_B_0x1 = 1;

    /** @brief GTZC1 TZIC flag clear register 3 */
    using GTZC1_TZIC_FCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the illegal access flag for CRC */
    using GTZC1_TZIC_FCR3_CCRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CCRCF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CCRCF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for TSC */
    using GTZC1_TZIC_FCR3_CTSCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CTSCF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CTSCF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for ICACHE registers */
    using GTZC1_TZIC_FCR3_CICACHE_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CICACHE_REGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CICACHE_REGF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for ADC1 and ADC2 */
    using GTZC1_TZIC_FCR3_CADC12F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CADC12F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CADC12F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for AES */
    using GTZC1_TZIC_FCR3_CAESF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CAESF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CAESF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for HASH */
    using GTZC1_TZIC_FCR3_CHASHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CHASHF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CHASHF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for RNG */
    using GTZC1_TZIC_FCR3_CRNGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CRNGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CRNGF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for PKA */
    using GTZC1_TZIC_FCR3_CPKAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CPKAF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CPKAF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SAES */
    using GTZC1_TZIC_FCR3_CSAESF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CSAESF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CSAESF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for CCB */
    using GTZC1_TZIC_FCR3_CCCBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CCCBF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CCCBF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SDMMC1 */
    using GTZC1_TZIC_FCR3_CSDMMC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CSDMMC1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CSDMMC1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for OCTOSPI1 registers */
    using GTZC1_TZIC_FCR3_COCTOSPI1_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_COCTOSPI1_REGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_COCTOSPI1_REGF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for RAMCFG */
    using GTZC1_TZIC_FCR3_CRAMCFGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CRAMCFGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CRAMCFGF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for DAC1 */
    using GTZC1_TZIC_FCR3_CDAC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CDAC1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CDAC1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for ADF1 */
    using GTZC1_TZIC_FCR3_CADF1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CADF1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CADF1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for HSP1 */
    using GTZC1_TZIC_FCR3_CHSP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CHSP1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR3_CHSP1F_B_0x1 = 1;

    /** @brief GTZC1 TZIC flag clear register 4 */
    using GTZC1_TZIC_FCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear the illegal access flag for GPDMA1 */
    using GTZC1_TZIC_FCR4_CGPDMA1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CGPDMA1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CGPDMA1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for FLASH registers */
    using GTZC1_TZIC_FCR4_CFLASH_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CFLASH_REGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CFLASH_REGF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for FLASH memory */
    using GTZC1_TZIC_FCR4_CFLASHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CFLASHF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CFLASHF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for PWR */
    using GTZC1_TZIC_FCR4_CPWRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CPWRF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CPWRF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for RCC */
    using GTZC1_TZIC_FCR4_CRCCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CRCCF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CRCCF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SYSCFG */
    using GTZC1_TZIC_FCR4_CSYSCFGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CSYSCFGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CSYSCFGF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for EXTI */
    using GTZC1_TZIC_FCR4_CEXTIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CEXTIF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CEXTIF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for RTC */
    using GTZC1_TZIC_FCR4_CRTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CRTCF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CRTCF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for TAMP */
    using GTZC1_TZIC_FCR4_CTAMPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CTAMPF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CTAMPF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for GTZC1 TZSC registers */
    using GTZC1_TZIC_FCR4_CTZSC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CTZSC1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CTZSC1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for GTZC1 TZIC registers */
    using GTZC1_TZIC_FCR4_CTZIC1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CTZIC1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CTZIC1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SRAM1 */
    using GTZC1_TZIC_FCR4_CSRAM1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CSRAM1F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CSRAM1F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for MPCBB1 registers */
    using GTZC1_TZIC_FCR4_CMPCBB1_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CMPCBB1_REGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CMPCBB1_REGF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SRAM2 */
    using GTZC1_TZIC_FCR4_CSRAM2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CSRAM2F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CSRAM2F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for MPCBB2 registers */
    using GTZC1_TZIC_FCR4_CMPCBB2_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CMPCBB2_REGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CMPCBB2_REGF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SRAM3 */
    using GTZC1_TZIC_FCR4_CSRAM3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CSRAM3F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CSRAM3F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for MPCBB3 registers */
    using GTZC1_TZIC_FCR4_CMPCBB3_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CMPCBB3_REGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CMPCBB3_REGF_B_0x1 = 1;

    /** @brief Clear the illegal access flag for SRAM4 */
    using GTZC1_TZIC_FCR4_CSRAM4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CSRAM4F_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CSRAM4F_B_0x1 = 1;

    /** @brief Clear the illegal access flag for MPCBB4 registers */
    using GTZC1_TZIC_FCR4_CMPCBB4_REGF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: Status flag cleared (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CMPCBB4_REGF_B_0x0 = 0;
        /** @brief Status flag cleared */
    constexpr std::uint32_t GTZC1_TZIC_FCR4_CMPCBB4_REGF_B_0x1 = 1;

}

#endif
