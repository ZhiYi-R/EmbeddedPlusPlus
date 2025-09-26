/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U083_DBGMCU_HPP
#define EMBEDDED_PP_STM32U083_DBGMCU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DBGMCU register block */
namespace STM32U083::DBGMCU {

    /** @brief DBGMCU device ID code register */
    using DBGMCU_IDCODE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device identifier This field indicates the device ID. */
    using DBGMCU_IDCODE_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x459: STM32U031xx (value: 1113)
     *          - B_0x489: STM32U073/083xx (value: 1161)
     */
        /** @brief STM32U031xx */
    constexpr std::uint32_t DBGMCU_IDCODE_DEV_ID_B_0x459 = 1113;
        /** @brief STM32U073/083xx */
    constexpr std::uint32_t DBGMCU_IDCODE_DEV_ID_B_0x489 = 1161;

    /** @brief Revision identifier This field indicates the revision of the device. */
    using DBGMCU_IDCODE_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1000: Revision A for STM32U031/73/83xx (value: 4096)
     */
        /** @brief Revision A for STM32U031/73/83xx */
    constexpr std::uint32_t DBGMCU_IDCODE_REV_ID_B_0x1000 = 4096;

    /** @brief DBGMCU configuration register */
    using DBGMCU_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Stop mode Debug options in Stop mode. */
    using DBGMCU_CR_DBG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All clocks disabled, including FCLK and HCLK. Upon Stop mode exit, the CPU is clocked by the HSI internal RC oscillator. (value: 0)
     *          - B_0x1: FCLK and HCLK running, derived from the internal RC oscillator remaining active. If SysTick is enabled, it may generate periodic interrupt and wake up events.Upon Stop mode exit, the software must re-establish the desired clock configuration. (value: 1)
     */
        /** @brief All clocks disabled, including FCLK and HCLK. Upon Stop mode exit, the CPU is clocked by the HSI internal RC oscillator. */
    constexpr std::uint32_t DBGMCU_CR_DBG_STOP_B_0x0 = 0;
        /** @brief FCLK and HCLK running, derived from the internal RC oscillator remaining active. If SysTick is enabled, it may generate periodic interrupt and wake up events.Upon Stop mode exit, the software must re-establish the desired clock configuration. */
    constexpr std::uint32_t DBGMCU_CR_DBG_STOP_B_0x1 = 1;

    /** @brief Debug Standby and Shutdown modes Debug options in Standby or Shutdown mode. */
    using DBGMCU_CR_DBG_STANDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital part powered. From software point of view, exiting Standby and Shutdown modes is identical as fetching reset vector (except for status bits indicating that the MCU exits Standby) (value: 0)
     *          - B_0x1: Digital part powered and FCLK and HCLK running, derived from the internal RC oscillator remaining active. The MCU generates a system reset so that exiting Standby and Shutdown has the same effect as starting from reset. (value: 1)
     */
        /** @brief Digital part powered. From software point of view, exiting Standby and Shutdown modes is identical as fetching reset vector (except for status bits indicating that the MCU exits Standby) */
    constexpr std::uint32_t DBGMCU_CR_DBG_STANDBY_B_0x0 = 0;
        /** @brief Digital part powered and FCLK and HCLK running, derived from the internal RC oscillator remaining active. The MCU generates a system reset so that exiting Standby and Shutdown has the same effect as starting from reset. */
    constexpr std::uint32_t DBGMCU_CR_DBG_STANDBY_B_0x1 = 1;

    /** @brief DBGMCU APB1 freeze register */
    using DBGMCU_APB1FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 stop in debug */
    using DBGMCU_APB1FZR_DBG_TIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM2 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM2 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM2 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_TIM2_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM2 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_TIM2_STOP_B_0x1 = 1;

    /** @brief TIM3 stop in debug */
    using DBGMCU_APB1FZR_DBG_TIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM3 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM3 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM3 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_TIM3_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM3 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_TIM3_STOP_B_0x1 = 1;

    /** @brief TIM4 stop in debug */
    using DBGMCU_APB1FZR_DBG_TIM4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM4 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM34 is frozen while CPU is in debug mode (value: 1)
     */
        /** @brief normal operation. TIM4 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_TIM4_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM34 is frozen while CPU is in debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_TIM4_STOP_B_0x1 = 1;

    /** @brief TIM6 stop in debug */
    using DBGMCU_APB1FZR_DBG_TIM6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM6 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM6 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM6 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_TIM6_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM6 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_TIM6_STOP_B_0x1 = 1;

    /** @brief TIM7 stop in debug */
    using DBGMCU_APB1FZR_DBG_TIM7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM7 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM7 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM7 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_TIM7_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM7 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_TIM7_STOP_B_0x1 = 1;

    /** @brief RTC stop in debug */
    using DBGMCU_APB1FZR_DBG_RTC_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. RTC counter continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. RTC counter is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. RTC counter continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_RTC_STOP_B_0x0 = 0;
        /** @brief stop in debug. RTC counter is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_RTC_STOP_B_0x1 = 1;

    /** @brief WWDG stop in debug */
    using DBGMCU_APB1FZR_DBG_WWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. WWDG continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. WWDG is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. WWDG continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_WWDG_STOP_B_0x0 = 0;
        /** @brief stop in debug. WWDG is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_WWDG_STOP_B_0x1 = 1;

    /** @brief IWDG stop in debug */
    using DBGMCU_APB1FZR_DBG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. IWDG continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. IWDG is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. IWDG continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_IWDG_STOP_B_0x0 = 0;
        /** @brief stop in debug. IWDG is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_IWDG_STOP_B_0x1 = 1;

    /** @brief I2C3 SMBUS timeout stop in debug */
    using DBGMCU_APB1FZR_DBG_I2C3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. I2C3 SMBUS timeout continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. I2C3 SMBUS timeout is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. I2C3 SMBUS timeout continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_I2C3_STOP_B_0x0 = 0;
        /** @brief stop in debug. I2C3 SMBUS timeout is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_I2C3_STOP_B_0x1 = 1;

    /** @brief I2C1 SMBUS timeout stop in debug */
    using DBGMCU_APB1FZR_DBG_I2C1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. I2C1 SMBUS timeout continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. I2C1 SMBUS timeout is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. I2C1 SMBUS timeout continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_I2C1_STOP_B_0x0 = 0;
        /** @brief stop in debug. I2C1 SMBUS timeout is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_I2C1_STOP_B_0x1 = 1;

    /** @brief LPTIM2 stop in debug */
    using DBGMCU_APB1FZR_DBG_LPTIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. LPTIM2 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. LPTIM2 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. LPTIM2 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_LPTIM2_STOP_B_0x0 = 0;
        /** @brief stop in debug. LPTIM2 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_LPTIM2_STOP_B_0x1 = 1;

    /** @brief LPTIM1 stop in debug */
    using DBGMCU_APB1FZR_DBG_LPTIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. LPTIM1 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. LPTIM1 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. LPTIM1 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_LPTIM1_STOP_B_0x0 = 0;
        /** @brief stop in debug. LPTIM1 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1FZR_DBG_LPTIM1_STOP_B_0x1 = 1;

    /** @brief DBG APB2 freeze register */
    using DBGMCU_APB2FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 stop in debug */
    using DBGMCU_APB2FZR_DBG_TIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM1 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM1 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM1 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM1_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM1 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM1_STOP_B_0x1 = 1;

    /** @brief TIM14 stop in debug */
    using DBGMCU_APB2FZR_DBG_TIM14_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM14 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM14 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM14 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM14_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM14 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM14_STOP_B_0x1 = 1;

    /** @brief TIM15 stop in debug */
    using DBGMCU_APB2FZR_DBG_TIM15_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM15 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM15 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM15 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM15_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM15 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM15_STOP_B_0x1 = 1;

    /** @brief TIM16 stop in debug */
    using DBGMCU_APB2FZR_DBG_TIM16_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM16 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM16 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM16 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM16_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM16 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM16_STOP_B_0x1 = 1;

    /** @brief LPTIM3 stop in debug */
    using DBGMCU_APB2FZR_DBG_LPTIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. LPTIM3 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. LPTIM3 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. LPTIM3 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_LPTIM3_STOP_B_0x0 = 0;
        /** @brief stop in debug. LPTIM3 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_LPTIM3_STOP_B_0x1 = 1;

    /** @brief DBGMCU status register */
    using DBGMCU_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Identifies whether access port AP1 is present in device */
    using DBGMCU_SR_AP1_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: AP1 present (value: 1)
     */
        /** @brief AP1 present */
    constexpr std::uint32_t DBGMCU_SR_AP1_PRESENT_B_0x1 = 1;

    /** @brief Identifies whether access port AP0 is present in device */
    using DBGMCU_SR_AP0_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: AP0 present (value: 1)
     */
        /** @brief AP0 present */
    constexpr std::uint32_t DBGMCU_SR_AP0_PRESENT_B_0x1 = 1;

    /** @brief Identifies whether access port AP0 is open (can be accessed via the debug port) or locked (debug access to the AP is blocked) */
    using DBGMCU_SR_AP1_ENABLED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AP1 locked (value: 0)
     *          - B_0x1: AP1 enabled (value: 1)
     */
        /** @brief AP1 locked */
    constexpr std::uint32_t DBGMCU_SR_AP1_ENABLED_B_0x0 = 0;
        /** @brief AP1 enabled */
    constexpr std::uint32_t DBGMCU_SR_AP1_ENABLED_B_0x1 = 1;

    /** @brief Identifies whether access port AP0 is open (can be accessed via the debug port) or locked (debug access to the AP is blocked) */
    using DBGMCU_SR_AP0_ENABLED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AP0 locked (value: 0)
     *          - B_0x1: AP0 enabled (value: 1)
     */
        /** @brief AP0 locked */
    constexpr std::uint32_t DBGMCU_SR_AP0_ENABLED_B_0x0 = 0;
        /** @brief AP0 enabled */
    constexpr std::uint32_t DBGMCU_SR_AP0_ENABLED_B_0x1 = 1;

    /** @brief DBGMCU debug authentication mailbox host register */
    using DBGMCU_DBG_AUTH_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug host to device mailbox message. During debug authentication the debug host communicates with the device via this register. */
    using DBGMCU_DBG_AUTH_HOST_MESSAGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug authentication mailbox device register */
    using DBGMCU_DBG_AUTH_DEVICE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device to debug host mailbox message. During debug authentication the device communicates with the debug host via this register. */
    using DBGMCU_DBG_AUTH_DEVICE_MESSAGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU CoreSight peripheral identity register 4 */
    using DBGMCU_PIDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 continuation code */
    using DBGMCU_PIDR4_JEP106CON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STMicroelectronics JEDEC code (value: 0)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR4_JEP106CON_B_0x0 = 0;

    /** @brief register file size */
    using DBGMCU_PIDR4_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The register file occupies a single 4-Kbyte region. (value: 0)
     */
        /** @brief The register file occupies a single 4-Kbyte region. */
    constexpr std::uint32_t DBGMCU_PIDR4_SIZE_B_0x0 = 0;

    /** @brief DBGMCU CoreSight peripheral identity register 0 */
    using DBGMCU_PIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief part number bits [7:0] */
    using DBGMCU_PIDR0_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: DBGMCU part number (value: 0)
     */
        /** @brief DBGMCU part number */
    constexpr std::uint32_t DBGMCU_PIDR0_PARTNUM_B_0x00 = 0;

    /** @brief DBGMCU CoreSight peripheral identity register 1 */
    using DBGMCU_PIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief part number bits [11:8] */
    using DBGMCU_PIDR1_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DBGMCU part number (value: 0)
     */
        /** @brief DBGMCU part number */
    constexpr std::uint32_t DBGMCU_PIDR1_PARTNUM_B_0x0 = 0;

    /** @brief JEP106 identity code bits [3:0] */
    using DBGMCU_PIDR1_JEP106ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STMicroelectronics JEDEC code (value: 0)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR1_JEP106ID_B_0x0 = 0;

    /** @brief DBGMCU CoreSight peripheral identity register 2 */
    using DBGMCU_PIDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 identity code bits [6:4] */
    using DBGMCU_PIDR2_JEP106ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: STMicroelectronics JEDEC code (value: 2)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR2_JEP106ID_B_0x2 = 2;

    /** @brief JEDEC assigned value */
    using DBGMCU_PIDR2_JEDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: designer identification specified by JEDEC (value: 1)
     */
        /** @brief designer identification specified by JEDEC */
    constexpr std::uint32_t DBGMCU_PIDR2_JEDEC_B_0x1 = 1;

    /** @brief component revision number */
    using DBGMCU_PIDR2_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: r0p0 (value: 0)
     */
        /** @brief r0p0 */
    constexpr std::uint32_t DBGMCU_PIDR2_REVISION_B_0x0 = 0;

    /** @brief DBGMCU CoreSight peripheral identity register 3 */
    using DBGMCU_PIDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief customer modified */
    using DBGMCU_PIDR3_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no customer modifications (value: 0)
     */
        /** @brief no customer modifications */
    constexpr std::uint32_t DBGMCU_PIDR3_CMOD_B_0x0 = 0;

    /** @brief metal fix version */
    using DBGMCU_PIDR3_REVAND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no metal fix (value: 0)
     */
        /** @brief no metal fix */
    constexpr std::uint32_t DBGMCU_PIDR3_REVAND_B_0x0 = 0;

    /** @brief DBGMCU CoreSight component identity register 0 */
    using DBGMCU_CIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief component identification bits [7:0] */
    using DBGMCU_CIDR0_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0D: common identification value (value: 13)
     */
        /** @brief common identification value */
    constexpr std::uint32_t DBGMCU_CIDR0_PREAMBLE_B_0x0D = 13;

    /** @brief DBGMCU CoreSight component identity register 1 */
    using DBGMCU_CIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief component identification bits [11:8] */
    using DBGMCU_CIDR1_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: common identification value (value: 0)
     */
        /** @brief common identification value */
    constexpr std::uint32_t DBGMCU_CIDR1_PREAMBLE_B_0x0 = 0;

    /** @brief component identification bits [15:12] - component class */
    using DBGMCU_CIDR1_CLASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xF: Non-CoreSight component (value: 15)
     */
        /** @brief Non-CoreSight component */
    constexpr std::uint32_t DBGMCU_CIDR1_CLASS_B_0xF = 15;

    /** @brief DBGMCU CoreSight component identity register 2 */
    using DBGMCU_CIDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief component identification bits [23:16] */
    using DBGMCU_CIDR2_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x05: common identification value (value: 5)
     */
        /** @brief common identification value */
    constexpr std::uint32_t DBGMCU_CIDR2_PREAMBLE_B_0x05 = 5;

    /** @brief DBGMCU CoreSight component identity register 3 */
    using DBGMCU_CIDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief component identification bits [31:24] */
    using DBGMCU_CIDR3_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB1: common identification value (value: 177)
     */
        /** @brief common identification value */
    constexpr std::uint32_t DBGMCU_CIDR3_PREAMBLE_B_0xB1 = 177;

}

#endif
