/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_DBGMCU_HPP
#define EMBEDDED_PP_STM32U3B5_DBGMCU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DBGMCU address block description */
namespace STM32U3B5::DBGMCU {

    /** @brief DBGMCU identity code register */
    using DBGMCU_IDCODE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device identification */
    using DBGMCU_IDCODE_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x454: STM32U375/385 (value: 1108)
     *          - B_0x42A: STM32U3B5/3C5 (value: 1066)
     */
        /** @brief STM32U375/385 */
    constexpr std::uint32_t DBGMCU_IDCODE_DEV_ID_B_0x454 = 1108;
        /** @brief STM32U3B5/3C5 */
    constexpr std::uint32_t DBGMCU_IDCODE_DEV_ID_B_0x42A = 1066;

    /** @brief Revision */
    using DBGMCU_IDCODE_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1000: Revision A (value: 4096)
     *          - B_0x1001: Revision Z (value: 4097)
     */
        /** @brief Revision A */
    constexpr std::uint32_t DBGMCU_IDCODE_REV_ID_B_0x1000 = 4096;
        /** @brief Revision Z */
    constexpr std::uint32_t DBGMCU_IDCODE_REV_ID_B_0x1001 = 4097;

    /** @brief DBGMCU configuration register */
    using DBGMCU_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allows debug in Stop mode */
    using DBGMCU_CR_DBG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Automatic clock stop disabled. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_CR_DBG_STOP_B_0x0 = 0;
        /** @brief Automatic clock stop disabled. */
    constexpr std::uint32_t DBGMCU_CR_DBG_STOP_B_0x1 = 1;

    /** @brief Allows debug in Standby mode */
    using DBGMCU_CR_DBG_STANDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Automatic clock stop/power-down disabled. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_CR_DBG_STANDBY_B_0x0 = 0;
        /** @brief Automatic clock stop/power-down disabled. */
    constexpr std::uint32_t DBGMCU_CR_DBG_STANDBY_B_0x1 = 1;

    /** @brief Trace pin enable */
    using DBGMCU_CR_TRACE_IOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled - trace pins not assigned (value: 0)
     *          - B_0x1: Enabled - trace pins assigned according to the value of TRACE_MODE bit field (value: 1)
     */
        /** @brief Disabled - trace pins not assigned */
    constexpr std::uint32_t DBGMCU_CR_TRACE_IOEN_B_0x0 = 0;
        /** @brief Enabled - trace pins assigned according to the value of TRACE_MODE bit field */
    constexpr std::uint32_t DBGMCU_CR_TRACE_IOEN_B_0x1 = 1;

    /** @brief Trace port and clock enable. */
    using DBGMCU_CR_TRACE_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t DBGMCU_CR_TRACE_EN_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t DBGMCU_CR_TRACE_EN_B_0x1 = 1;

    /** @brief Trace pin assignment */
    using DBGMCU_CR_TRACE_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trace pins assigned for asynchronous mode (TRACESWO) (value: 0)
     *          - B_0x1: Trace pins assigned for synchronous mode with a port width of 1 (TRACECK, TRACED0) (value: 1)
     *          - B_0x2: Trace pins assigned for synchronous mode with a port width of 2 (TRACECK, TRACED0-1) (value: 2)
     *          - B_0x3: Trace pins assigned for synchronous mode with a port width of 4 (TRACECK, TRACED0-3) (value: 3)
     */
        /** @brief Trace pins assigned for asynchronous mode (TRACESWO) */
    constexpr std::uint32_t DBGMCU_CR_TRACE_MODE_B_0x0 = 0;
        /** @brief Trace pins assigned for synchronous mode with a port width of 1 (TRACECK, TRACED0) */
    constexpr std::uint32_t DBGMCU_CR_TRACE_MODE_B_0x1 = 1;
        /** @brief Trace pins assigned for synchronous mode with a port width of 2 (TRACECK, TRACED0-1) */
    constexpr std::uint32_t DBGMCU_CR_TRACE_MODE_B_0x2 = 2;
        /** @brief Trace pins assigned for synchronous mode with a port width of 4 (TRACECK, TRACED0-3) */
    constexpr std::uint32_t DBGMCU_CR_TRACE_MODE_B_0x3 = 3;

    /** @brief DBGMCU APB1L peripheral freeze register */
    using DBGMCU_APB1LFZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIMy stop in debug */
    using DBGMCU_APB1LFZR_DBG_TIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM2_STOP_B_0x1 = 1;

    /** @brief TIMy stop in debug */
    using DBGMCU_APB1LFZR_DBG_TIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM3_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM3_STOP_B_0x1 = 1;

    /** @brief TIMy stop in debug */
    using DBGMCU_APB1LFZR_DBG_TIM4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM4_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM4_STOP_B_0x1 = 1;

    /** @brief TIMy stop in debug */
    using DBGMCU_APB1LFZR_DBG_TIM6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM6_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM6_STOP_B_0x1 = 1;

    /** @brief TIMy stop in debug */
    using DBGMCU_APB1LFZR_DBG_TIM7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM7_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM7_STOP_B_0x1 = 1;

    /** @brief WWDG stop in debug */
    using DBGMCU_APB1LFZR_DBG_WWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_WWDG_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_WWDG_STOP_B_0x1 = 1;

    /** @brief IWDG stop in debug */
    using DBGMCU_APB1LFZR_DBG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_IWDG_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_IWDG_STOP_B_0x1 = 1;

    /** @brief I2C1 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZR_DBG_I2C1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I2C1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I2C1_STOP_B_0x1 = 1;

    /** @brief I2C2 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZR_DBG_I2C2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I2C2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I2C2_STOP_B_0x1 = 1;

    /** @brief I3C1 timeout stop in debug */
    using DBGMCU_APB1LFZR_DBG_I3C1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I3C1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I3C1_STOP_B_0x1 = 1;

    /** @brief RTC stop in debug */
    using DBGMCU_APB1LFZR_DBG_RTC_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_RTC_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_RTC_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB1H peripheral freeze register */
    using DBGMCU_APB1HFZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C4 SMBUS timeout stop in debug */
    using DBGMCU_APB1HFZR_DBG_I2C4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1HFZR_DBG_I2C4_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1HFZR_DBG_I2C4_STOP_B_0x1 = 1;

    /** @brief LPTIM2 stop in debug */
    using DBGMCU_APB1HFZR_DBG_LPTIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB1HFZR_DBG_LPTIM2_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB1HFZR_DBG_LPTIM2_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB2 peripheral freeze register */
    using DBGMCU_APB2FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 stop in debug */
    using DBGMCU_APB2FZR_DBG_TIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM1_STOP_B_0x1 = 1;

    /** @brief TIM8 stop in debug */
    using DBGMCU_APB2FZR_DBG_TIM8_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM8_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM8_STOP_B_0x1 = 1;

    /** @brief TIM12 stop in debug */
    using DBGMCU_APB2FZR_DBG_TIM12_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM12_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM12_STOP_B_0x1 = 1;

    /** @brief TIMy stop in debug */
    using DBGMCU_APB2FZR_DBG_TIM15_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM15_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM15_STOP_B_0x1 = 1;

    /** @brief TIMy stop in debug */
    using DBGMCU_APB2FZR_DBG_TIM16_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM16_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM16_STOP_B_0x1 = 1;

    /** @brief TIMy stop in debug */
    using DBGMCU_APB2FZR_DBG_TIM17_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM17_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_TIM17_STOP_B_0x1 = 1;

    /** @brief I3C2 timeout stop in debug */
    using DBGMCU_APB2FZR_DBG_I3C2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Normal in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_I3C2_STOP_B_0x0 = 0;
        /** @brief Normal in debug. */
    constexpr std::uint32_t DBGMCU_APB2FZR_DBG_I3C2_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB3 peripheral freeze register */
    using DBGMCU_APB3FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C3 stop in debug */
    using DBGMCU_APB3FZR_DBG_I2C3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_I2C3_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_I2C3_STOP_B_0x1 = 1;

    /** @brief LPTIM1 stop in debug */
    using DBGMCU_APB3FZR_DBG_LPTIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_LPTIM1_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_LPTIM1_STOP_B_0x1 = 1;

    /** @brief LPTIM3 stop in debug */
    using DBGMCU_APB3FZR_DBG_LPTIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_LPTIM3_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_LPTIM3_STOP_B_0x1 = 1;

    /** @brief LPTIM4 stop in debug */
    using DBGMCU_APB3FZR_DBG_LPTIM4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. (value: 0)
     *          - B_0x1: Stop in debug. (value: 1)
     */
        /** @brief Normal operation. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_LPTIM4_STOP_B_0x0 = 0;
        /** @brief Stop in debug. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_LPTIM4_STOP_B_0x1 = 1;

    /** @brief DBGMCU AHB1 peripheral freeze register */
    using DBGMCU_AHB1FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA0_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA0_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA0_STOP_B_0x1 = 1;

    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_STOP_B_0x1 = 1;

    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_STOP_B_0x1 = 1;

    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA3_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA3_STOP_B_0x1 = 1;

    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA4_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA4_STOP_B_0x1 = 1;

    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA5_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA5_STOP_B_0x1 = 1;

    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA6_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA6_STOP_B_0x1 = 1;

    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA7_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA7_STOP_B_0x1 = 1;

    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA8_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA8_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA8_STOP_B_0x1 = 1;

    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA9_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA9_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA9_STOP_B_0x1 = 1;

    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA10_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA10_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA10_STOP_B_0x1 = 1;

    /** @brief GPDMA channel y stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA11_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA11_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA11_STOP_B_0x1 = 1;

    /** @brief HSP1 stop in debug */
    using DBGMCU_AHB1FZR_DBG_HSP1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. (value: 0)
     *          - B_0x1: stop in debug. (value: 1)
     */
        /** @brief normal operation. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_HSP1_STOP_B_0x0 = 0;
        /** @brief stop in debug. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_HSP1_STOP_B_0x1 = 1;

    /** @brief DBGMCU status register */
    using DBGMCU_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit n identifies whether access port AP n is present in device */
    using DBGMCU_SR_AP_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit n identifies whether access port AP n is open (can be accessed via the debug port) or locked (debug access to the AP is blocked) */
    using DBGMCU_SR_AP_ENABLED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug host authentication register */
    using DBGMCU_DBG_AUTH_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device authentication key */
    using DBGMCU_DBG_AUTH_HOST_AUTH_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug device authentication register */
    using DBGMCU_DBG_AUTH_DEVICE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device specific authentication ID */
    using DBGMCU_DBG_AUTH_DEVICE_AUTH_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU CoreSight peripheral identity register 4 */
    using DBGMCU_PIDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 continuation code */
    using DBGMCU_PIDR4_JEP106CON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STMicroelectronics JEDEC code (value: 0)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR4_JEP106CON_B_0x0 = 0;

    /** @brief Register file size */
    using DBGMCU_PIDR4_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The register file occupies a single 4-Kbyte region. (value: 0)
     */
        /** @brief The register file occupies a single 4-Kbyte region. */
    constexpr std::uint32_t DBGMCU_PIDR4_SIZE_B_0x0 = 0;

    /** @brief DBGMCU CoreSight peripheral identity register 0 */
    using DBGMCU_PIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Part number bits [7:0] */
    using DBGMCU_PIDR0_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: DBGMCU part number (value: 0)
     */
        /** @brief DBGMCU part number */
    constexpr std::uint32_t DBGMCU_PIDR0_PARTNUM_B_0x00 = 0;

    /** @brief DBGMCU CoreSight peripheral identity register 1 */
    using DBGMCU_PIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Part number bits [11:8] */
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

    /** @brief Component revision number */
    using DBGMCU_PIDR2_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: r0p0 (value: 0)
     */
        /** @brief r0p0 */
    constexpr std::uint32_t DBGMCU_PIDR2_REVISION_B_0x0 = 0;

    /** @brief DBGMCU CoreSight peripheral identity register 3 */
    using DBGMCU_PIDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Customer modified */
    using DBGMCU_PIDR3_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No customer modifications (value: 0)
     */
        /** @brief No customer modifications */
    constexpr std::uint32_t DBGMCU_PIDR3_CMOD_B_0x0 = 0;

    /** @brief Metal fix version */
    using DBGMCU_PIDR3_REVAND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No metal fix (value: 0)
     */
        /** @brief No metal fix */
    constexpr std::uint32_t DBGMCU_PIDR3_REVAND_B_0x0 = 0;

    /** @brief DBGMCU CoreSight component identity register 0 */
    using DBGMCU_CIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component identification bits [7:0] */
    using DBGMCU_CIDR0_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0D: Common identification value (value: 13)
     */
        /** @brief Common identification value */
    constexpr std::uint32_t DBGMCU_CIDR0_PREAMBLE_B_0x0D = 13;

    /** @brief DBGMCU CoreSight component identity register 1 */
    using DBGMCU_CIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component identification bits [11:8] */
    using DBGMCU_CIDR1_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Common identification value (value: 0)
     */
        /** @brief Common identification value */
    constexpr std::uint32_t DBGMCU_CIDR1_PREAMBLE_B_0x0 = 0;

    /** @brief Component identification bits [15:12] - component class */
    using DBGMCU_CIDR1_CLASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xF: Non-CoreSight component (value: 15)
     */
        /** @brief Non-CoreSight component */
    constexpr std::uint32_t DBGMCU_CIDR1_CLASS_B_0xF = 15;

    /** @brief DBGMCU CoreSight component identity register 2 */
    using DBGMCU_CIDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component identification bits [23:16] */
    using DBGMCU_CIDR2_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x05: Common identification value (value: 5)
     */
        /** @brief Common identification value */
    constexpr std::uint32_t DBGMCU_CIDR2_PREAMBLE_B_0x05 = 5;

    /** @brief DBGMCU CoreSight component identity register 3 */
    using DBGMCU_CIDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component identification bits [31:24] */
    using DBGMCU_CIDR3_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB1: Common identification value (value: 177)
     */
        /** @brief Common identification value */
    constexpr std::uint32_t DBGMCU_CIDR3_PREAMBLE_B_0xB1 = 177;

}

#endif
