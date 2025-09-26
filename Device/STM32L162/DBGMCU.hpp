/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32L162_DBGMCU_HPP
#define EMBEDDED_PP_STM32L162_DBGMCU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief debug support */
namespace STM32L162::DBGMCU {

    /** @brief DBGMCU_IDCODE */
    using IDCODE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device identifier */
    using IDCODE_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision identifie */
    using IDCODE_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU configuration register */
    using CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Sleep mode */
    using CR_DBG_SLEEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Stop mode */
    using CR_DBG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Standby mode */
    using CR_DBG_STANDBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trace pin assignment control */
    using CR_TRACE_IOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trace pin assignment control */
    using CR_TRACE_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU APB1 freeze register1 */
    using APB1_FZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 counter stopped when core is halted */
    using APB1_FZ_DBG_TIM2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM3 counter stopped when core is halted */
    using APB1_FZ_DBG_TIM3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM4 counter stopped when core is halted */
    using APB1_FZ_DBG_TIM4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM5 counter stopped when core is halted */
    using APB1_FZ_DBG_TIM5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM6 counter stopped when core is halted */
    using APB1_FZ_DBG_TIM6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM7 counter stopped when core is halted */
    using APB1_FZ_DBG_TIM7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug RTC stopped when core is halted */
    using APB1_FZ_DBG_RTC_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug window watchdog stopped when core is halted */
    using APB1_FZ_DBG_WWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug independent watchdog stopped when core is halted */
    using APB1_FZ_DBG_IWDG_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMBUS timeout mode stopped when core is halted */
    using APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMBUS timeout mode stopped when core is halted */
    using APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug MCU APB1 freeze register 2 */
    using APB2_FZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM counter stopped when core is halted */
    using APB2_FZ_DBG_TIM9_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM counter stopped when core is halted */
    using APB2_FZ_DBG_TIM10_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM counter stopped when core is halted */
    using APB2_FZ_DBG_TIM11_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
