/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H503_DBGMCU_HPP
#define EMBEDDED_PP_STM32H503_DBGMCU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Microcontroller debug unit */
namespace STM32H503::DBGMCU {

    /** @brief DBGMCU identity code register */
    using DBGMCU_IDCODE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief device identification */
    using DBGMCU_IDCODE_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x474: STM32H503 (value: 1140)
     */
        /** @brief STM32H503 */
    constexpr std::uint32_t DBGMCU_IDCODE_DEV_ID_B_0x474 = 1140;

    /** @brief revision This field indicates the revision of the device. */
    using DBGMCU_IDCODE_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1000: Revision A (value: 4096)
     */
        /** @brief Revision A */
    constexpr std::uint32_t DBGMCU_IDCODE_REV_ID_B_0x1000 = 4096;

    /** @brief DBGMCU configuration register */
    using DBGMCU_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allows debug in Stop mode All clocks are disabled automatically in Stop mode. All active clocks and oscillators continue to run during Stop mode, allowing full debug capability. On exit from Stop mode, the clock settings are set to the Stop mode exit state. */
    using DBGMCU_CR_DBG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation (value: 0)
     *          - B_0x1: automatic clock stop disabled (value: 1)
     */
        /** @brief normal operation */
    constexpr std::uint32_t DBGMCU_CR_DBG_STOP_B_0x0 = 0;
        /** @brief automatic clock stop disabled */
    constexpr std::uint32_t DBGMCU_CR_DBG_STOP_B_0x1 = 1;

    /** @brief Allows debug in Standby mode All clocks are disabled and the core powered down automatically in Standby mode. All active clocks and oscillators continue to run during Standby mode, and the core supply is maintained, allowing full debug capability. On exit from Standby mode, a system reset is performed. */
    using DBGMCU_CR_DBG_STANDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation (value: 0)
     *          - B_0x1: automatic clock stop/power down disabled (value: 1)
     */
        /** @brief normal operation */
    constexpr std::uint32_t DBGMCU_CR_DBG_STANDBY_B_0x0 = 0;
        /** @brief automatic clock stop/power down disabled */
    constexpr std::uint32_t DBGMCU_CR_DBG_STANDBY_B_0x1 = 1;

    /** @brief trace pin enable */
    using DBGMCU_CR_TRACE_IOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled - trace pins not assigned (value: 0)
     *          - B_0x1: enabled - trace pins assigned according to the value of TRACE_MODE field (value: 1)
     */
        /** @brief disabled - trace pins not assigned */
    constexpr std::uint32_t DBGMCU_CR_TRACE_IOEN_B_0x0 = 0;
        /** @brief enabled - trace pins assigned according to the value of TRACE_MODE field */
    constexpr std::uint32_t DBGMCU_CR_TRACE_IOEN_B_0x1 = 1;

    /** @brief trace port and clock enable. This bit enables the trace port clock, TRACECK. */
    using DBGMCU_CR_TRACE_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DBGMCU_CR_TRACE_EN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DBGMCU_CR_TRACE_EN_B_0x1 = 1;

    /** @brief trace pin assignment */
    using DBGMCU_CR_TRACE_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: trace pins assigned for asynchronous mode (TRACESWO) (value: 0)
     *          - B_0x1: trace pins assigned for synchronous mode with a port width of 1 (TRACECK, TRACED0) (value: 1)
     *          - B_0x2: trace pins assigned for synchronous mode with a port width of 2 ((TRACECK, TRACED0-1) (value: 2)
     *          - B_0x3: trace pins assigned for synchronous mode with a port width of 4 ((TRACECK, TRACED0-3) (value: 3)
     */
        /** @brief trace pins assigned for asynchronous mode (TRACESWO) */
    constexpr std::uint32_t DBGMCU_CR_TRACE_MODE_B_0x0 = 0;
        /** @brief trace pins assigned for synchronous mode with a port width of 1 (TRACECK, TRACED0) */
    constexpr std::uint32_t DBGMCU_CR_TRACE_MODE_B_0x1 = 1;
        /** @brief trace pins assigned for synchronous mode with a port width of 2 ((TRACECK, TRACED0-1) */
    constexpr std::uint32_t DBGMCU_CR_TRACE_MODE_B_0x2 = 2;
        /** @brief trace pins assigned for synchronous mode with a port width of 4 ((TRACECK, TRACED0-3) */
    constexpr std::uint32_t DBGMCU_CR_TRACE_MODE_B_0x3 = 3;

    /** @brief Debug credentials reset type This bit selects which type of reset is used to revoke the debug authentication credentials */
    using DBGMCU_CR_DCRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: System reset (value: 0)
     *          - B_0x1: Power reset (value: 1)
     */
        /** @brief System reset */
    constexpr std::uint32_t DBGMCU_CR_DCRT_B_0x0 = 0;
        /** @brief Power reset */
    constexpr std::uint32_t DBGMCU_CR_DCRT_B_0x1 = 1;

    /** @brief DBGMCU APB1L peripheral freeze register */
    using DBGMCU_APB1LFZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 stop in debug */
    using DBGMCU_APB1LFZR_DBG_TIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM2 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM2 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM2 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM2_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM2 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM2_STOP_B_0x1 = 1;

    /** @brief TIM3 stop in debug */
    using DBGMCU_APB1LFZR_DBG_TIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM3 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM3 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM3 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM3_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM3 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM3_STOP_B_0x1 = 1;

    /** @brief TIM6 stop in debug */
    using DBGMCU_APB1LFZR_DBG_TIM6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM6 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM6 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM6 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM6_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM6 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM6_STOP_B_0x1 = 1;

    /** @brief TIM7 stop in debug */
    using DBGMCU_APB1LFZR_DBG_TIM7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. TIM7 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. TIM7 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. TIM7 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM7_STOP_B_0x0 = 0;
        /** @brief stop in debug. TIM7 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_TIM7_STOP_B_0x1 = 1;

    /** @brief WWDG stop in debug */
    using DBGMCU_APB1LFZR_DBG_WWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. WWDG continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. WWDG is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. WWDG continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_WWDG_STOP_B_0x0 = 0;
        /** @brief stop in debug. WWDG is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_WWDG_STOP_B_0x1 = 1;

    /** @brief IWDG stop in debug */
    using DBGMCU_APB1LFZR_DBG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. IWDG continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. IWDG is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. IWDG continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_IWDG_STOP_B_0x0 = 0;
        /** @brief stop in debug. IWDG is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_IWDG_STOP_B_0x1 = 1;

    /** @brief I2C1 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZR_DBG_I2C1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. I2C1 SMBUS timeout continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. I2C1 SMBUS timeout is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. I2C1 SMBUS timeout continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I2C1_STOP_B_0x0 = 0;
        /** @brief stop in debug. I2C1 SMBUS timeout is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I2C1_STOP_B_0x1 = 1;

    /** @brief I2C2 SMBUS timeout stop in debug */
    using DBGMCU_APB1LFZR_DBG_I2C2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. I2C2 SMBUS timeout continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. I2C2 SMBUS timeout is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. I2C2 SMBUS timeout continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I2C2_STOP_B_0x0 = 0;
        /** @brief stop in debug. I2C2 SMBUS timeout is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I2C2_STOP_B_0x1 = 1;

    /** @brief I3C1 SCL stall counter stop in debug */
    using DBGMCU_APB1LFZR_DBG_I3C1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. I3C1 SCL stall timeout counter continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. I3C1 SCL stall timeout counter is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. I3C1 SCL stall timeout counter continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I3C1_STOP_B_0x0 = 0;
        /** @brief stop in debug. I3C1 SCL stall timeout counter is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1LFZR_DBG_I3C1_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB1H peripheral freeze register */
    using DBGMCU_APB1HFZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 stop in debug */
    using DBGMCU_APB1HFZR_DBG_LPTIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. LPTIM2 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. LPTIM2 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. LPTIM2 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1HFZR_DBG_LPTIM2_STOP_B_0x0 = 0;
        /** @brief stop in debug. LPTIM2 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB1HFZR_DBG_LPTIM2_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB2 peripheral freeze register */
    using DBGMCU_APB2FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief DBGMCU APB3 peripheral freeze register */
    using DBGMCU_APB3FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I3C2 SCL stall counter stop in debug */
    using DBGMCU_APB3FZR_DBG_I3C2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. I3C2 SCL stall timeout counter continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. I3C2 SCL stall timeout counter is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. I3C2 SCL stall timeout counter continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_I3C2_STOP_B_0x0 = 0;
        /** @brief stop in debug. I3C2 SCL stall timeout counter is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_I3C2_STOP_B_0x1 = 1;

    /** @brief LPTIM1 stop in debug */
    using DBGMCU_APB3FZR_DBG_LPTIM1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. LPTIM1 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. LPTIM1 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. LPTIM1 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_LPTIM1_STOP_B_0x0 = 0;
        /** @brief stop in debug. LPTIM1 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_LPTIM1_STOP_B_0x1 = 1;

    /** @brief RTC stop in debug */
    using DBGMCU_APB3FZR_DBG_RTC_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. RTC continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. RTC is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. RTC continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_RTC_STOP_B_0x0 = 0;
        /** @brief stop in debug. RTC is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_APB3FZR_DBG_RTC_STOP_B_0x1 = 1;

    /** @brief DBGMCU AHB1 peripheral freeze register */
    using DBGMCU_AHB1FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA1 channel 0 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_0_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA1 channel 0 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA1 channel 0 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA1 channel 0 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_0_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA1 channel 0 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_0_STOP_B_0x1 = 1;

    /** @brief GPDMA1 channel 1 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA1 channel 1 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA1 channel 1 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA1 channel 1 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_1_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA1 channel 1 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_1_STOP_B_0x1 = 1;

    /** @brief GPDMA1 channel 2 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA1 channel 2 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA1 channel 2 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA1 channel 2 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_2_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA1 channel 2 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_2_STOP_B_0x1 = 1;

    /** @brief GPDMA1 channel 3 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA1 channel 3 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA1 channel 3 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA1 channel 3 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_3_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA1 channel 3 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_3_STOP_B_0x1 = 1;

    /** @brief GPDMA1 channel 4 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA1 channel 4 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA1 channel 4 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA1 channel 4 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_4_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA1 channel 4 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_4_STOP_B_0x1 = 1;

    /** @brief GPDMA1 channel 5 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA1 channel 5 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA1 channel 5 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA1 channel 5 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_5_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA1 channel 5 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_5_STOP_B_0x1 = 1;

    /** @brief GPDMA1 channel 6 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA1 channel 6 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA1 channel 6 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA1 channel 6 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_6_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA1 channel 6 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_6_STOP_B_0x1 = 1;

    /** @brief GPDMA1 channel 7 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA1_7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA1 channel 7 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA1 channel 7 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA1 channel 7 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_7_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA1 channel 7 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA1_7_STOP_B_0x1 = 1;

    /** @brief GPDMA2 channel 0 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA2_0_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA2 channel 0 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA2 channel 0 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA2 channel 0 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_0_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA2 channel 0 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_0_STOP_B_0x1 = 1;

    /** @brief GPDMA2 channel 1 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA2_1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA2 channel 1 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA2 channel 1 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA2 channel 1 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_1_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA2 channel 1 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_1_STOP_B_0x1 = 1;

    /** @brief GPDMA2 channel 2 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA2_2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA2 channel 2 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA2 channel 2 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA2 channel 2 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_2_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA2 channel 2 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_2_STOP_B_0x1 = 1;

    /** @brief GPDMA2 channel 3 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA2_3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA2 channel 3 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA2 channel 3 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA2 channel 3 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_3_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA2 channel 3 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_3_STOP_B_0x1 = 1;

    /** @brief GPDMA2 channel 4 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA2_4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA2 channel 4 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA2 channel 4 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA2 channel 4 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_4_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA2 channel 4 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_4_STOP_B_0x1 = 1;

    /** @brief GPDMA2 channel 5 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA2_5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA2 channel 5 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA2 channel 5 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA2 channel 5 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_5_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA2 channel 5 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_5_STOP_B_0x1 = 1;

    /** @brief GPDMA2 channel 6 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA2_6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA2 channel 6 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA2 channel 6 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA2 channel 6 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_6_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA2 channel 6 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_6_STOP_B_0x1 = 1;

    /** @brief GPDMA2 channel 7 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA2_7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA2 channel 7 continues to operate while CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA2 channel 7 is frozen while CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA2 channel 7 continues to operate while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_7_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA2 channel 7 is frozen while CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA2_7_STOP_B_0x1 = 1;

    /** @brief DBGMCU status register */
    using DBGMCU_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit n identifies whether access port AP n is present in device Bit n = 0: APn absent Bit n = 1: APn present */
    using DBGMCU_SR_AP_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit n identifies whether access port AP n is open (can be accessed via the debug port) or locked (debug access to the AP is blocked) Bit n = 0: APn locked Bit n = 1: APn enabled */
    using DBGMCU_SR_AP_ENABLED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug authentication mailbox host register */
    using DBGMCU_DBG_AUTH_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug host to device mailbox message. During debug authentication the debug host communicates with the device via this register. */
    using DBGMCU_DBG_AUTH_HOST_MESSAGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug authentication mailbox device register */
    using DBGMCU_DBG_AUTH_DEVICE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device to debug host mailbox message. During debug authentication the device communicates with the debug host via this register. */
    using DBGMCU_DBG_AUTH_DEVICE_MESSAGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug authentication mailbox acknowledge register */
    using DBGMCU_DBG_AUTH_ACK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host to device acknowledge. The device sets this bit to indicate that it has placed a message in the DBGMCU_DBG_AUTH_DEVICE register. It should be reset by the host after reading the message */
    using DBGMCU_DBG_AUTH_ACK_HOST_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device to device acknowledge. The host sets this bit to indicate that it has placed a message in the DBGMCU_DBG_AUTH_HOST register. It is reset by the device after reading the message */
    using DBGMCU_DBG_AUTH_ACK_DEV_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
