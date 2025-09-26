/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_DBGMCU_HPP
#define EMBEDDED_PP_STM32WL33_DBGMCU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DBGMCU peripheral */
namespace STM32WL33::DBGMCU {

    /** @brief CR register */
    using CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allow debug of the CPU in SLEEP mode - 0: Normal operation. All clocks will be disabled automatically in SLEEP mode - 1: Automatic clock stop disabled. All active CPU clocks and oscillators will continue to run during SLEEP mode, allowing full CPU debug capability. On exit from SLEEP mode, the clock settings will be set to the SLEEP mode exit state. */
    using CR_DBG_SLEEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allow debug of the CPU in DEEPSTOP mode - 0: Normal operation. All clocks will be disabled automatically in STOP mode - 1: Automatic clock stop disabled. All active CPU clocks and oscillators will continue to run during STOP mode, allowing full CPU debug capability. On exit from STOP mode, the clock settings will be set to the STOP mode exit state. */
    using CR_DBG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG_APB0_FZ register */
    using DBG_APB0_FZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 stop in the CPU debug - 0: Normal operation. TIM2 continues to operate while the CPU is in debug mode - 1: Stop in debug. TIM2 is frozen while the CPU is in debug mode. */
    using DBG_APB0_FZ_DBG_TIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM16 stop in the CPU debug - 0: Normal operation. TIM16 continues to operate while the CPU is in debug mode - 1: Stop in debug. TIM16 is frozen while the CPU is in debug mode. */
    using DBG_APB0_FZ_DBG_TIM16_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC stop in CPU debug - 0: Normal operation. RTC continues to operate while the CPU is in debug mode - 1: Stop in debug. RTC is frozen while the CPU is in debug mode. */
    using DBG_APB0_FZ_DBG_RTC_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG stop in the CPU debug - 0: Normal operation. IWDG continues to operate while the CPU is in debug mode - 1: Stop in debug. IWDG is frozen while the CPU is in debug mode. */
    using DBG_APB0_FZ_DBG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG_APB1_FZ register */
    using DBG_APB1_FZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 SMBUS timeout stop in CPU debug - 0: Normal operation. I2C1 SMBUS timeout continues to operate while the CPU is in debug mode - 1: Stop in debug. I2C1 SMBUS timeou is frozen while the CPU is in debug mode. */
    using DBG_APB1_FZ_DBG_I2C1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2 SMBUS timeout stop in CPU debug - 0: Normal operation. I2C2 SMBUS timeout continues to operate while the CPU is in debug mode - 1: Stop in debug. I2C2 SMBUS timeou is frozen while the CPU is in debug mode. */
    using DBG_APB1_FZ_DBG_I2C2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
