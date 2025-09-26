/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB07_WAKEUP_HPP
#define EMBEDDED_PP_STM32WB07_WAKEUP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief WAKEUP peripheral */
namespace STM32WB07::WAKEUP {

    /** @brief WAKEUP_OFFSET register */
    using WAKEUP_OFFSET = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delay of anticipation of the Soc device to settle power and clock */
    using WAKEUP_OFFSET_WAKEUP_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ABSOLUTE_TIME register */
    using ABSOLUTE_TIME = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief absolute time */
    using ABSOLUTE_TIME_ABSOLUTE_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MINIMUM_PERIOD_LENGTH register */
    using MINIMUM_PERIOD_LENGTH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief minimum period length computed by Time Interpolator */
    using MINIMUM_PERIOD_LENGTH_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AVERAGE_PERIOD_LENGTH register */
    using AVERAGE_PERIOD_LENGTH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief additional information/precision on slow clock frequency. */
    using AVERAGE_PERIOD_LENGTH_LENGTH_FRACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief average period length computed by Time Interpolator. */
    using AVERAGE_PERIOD_LENGTH_LENGTH_INT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of slow clock cycles. */
    using AVERAGE_PERIOD_LENGTH_AVERAGE_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAXIMUM_PERIOD_LENGTH register */
    using MAXIMUM_PERIOD_LENGTH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief maximum period length computed by Time Interpolator */
    using MAXIMUM_PERIOD_LENGTH_LENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STATISTICS_RESTART register */
    using STATISTICS_RESTART = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write '1' to clear the minimum and maximum registers. */
    using STATISTICS_RESTART_CLR_MIN_MAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write '1' to clear the AVERAGE_PERIOD_LENGTH register value. */
    using STATISTICS_RESTART_CLR_AVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BLUE_WAKEUP_TIME register */
    using BLUE_WAKEUP_TIME = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief programmed wakeup time for the IP_BLE. */
    using BLUE_WAKEUP_TIME_WAKEUP_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BLUE_SLEEP_REQUEST_MODE register */
    using BLUE_SLEEP_REQUEST_MODE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE sleeping mode enable: */
    using BLUE_SLEEP_REQUEST_MODE_SLEEP_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE wakeup enable: */
    using BLUE_SLEEP_REQUEST_MODE_BLE_WAKEUP_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE sleeping control: */
    using BLUE_SLEEP_REQUEST_MODE_FORCE_SLEEPING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CM0_WAKEUP_TIME register */
    using CM0_WAKEUP_TIME = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief programmed wakeup time for CPU. */
    using CM0_WAKEUP_TIME_WAKEUP_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CM0_SLEEP_REQUEST_MODE register */
    using CM0_SLEEP_REQUEST_MODE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wakeup enable: */
    using CM0_SLEEP_REQUEST_MODE_CPU_WAKEUP_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU sleeping control: */
    using CM0_SLEEP_REQUEST_MODE_FORCE_SLEEPING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WAKEUP_BLE_IRQ_ENABLE register */
    using WAKEUP_BLE_IRQ_ENABLE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE wakeup interrupt enable: */
    using WAKEUP_BLE_IRQ_ENABLE_WAKEUP_IT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WAKEUP_BLE_IRQ_STATUS register */
    using WAKEUP_BLE_IRQ_STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief On read, returns the IP_BLE wakeup interrupt status. */
    using WAKEUP_BLE_IRQ_STATUS_WAKEUP_IT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WAKEUP_CM0_IRQ_ENABLE register */
    using WAKEUP_CM0_IRQ_ENABLE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU wakeup interrupt enable: */
    using WAKEUP_CM0_IRQ_ENABLE_WAKEUP_IT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WAKEUP_CM0_IRQ_STATUS register */
    using WAKEUP_CM0_IRQ_STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief On read, returns the CPU wakeup interrupt status. */
    using WAKEUP_CM0_IRQ_STATUS_WAKEUP_IT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
