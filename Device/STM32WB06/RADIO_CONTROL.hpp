/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB06_RADIO_CONTROL_HPP
#define EMBEDDED_PP_STM32WB06_RADIO_CONTROL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RADIO_CONTROL peripheral */
namespace STM32WB06::RADIO_CONTROL {

    /** @brief RADIO_CONTROL_ID register */
    using RADIO_CONTROL_ID = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incremented for metal fix version */
    using RADIO_CONTROL_ID_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cut Number */
    using RADIO_CONTROL_ID_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief incremented on major features add-on like new Bluetooth LE SIG version support */
    using RADIO_CONTROL_ID_PRODUCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLK32COUNT_REG register */
    using CLK32COUNT_REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief program the window length (in slow clock period) for slow clock measurement. */
    using CLK32COUNT_REG_SLOW_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLK32PERIOD_REG register */
    using CLK32PERIOD_REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief indicates slow clock period information. */
    using CLK32PERIOD_REG_SLOW_PERIOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLK32FREQUENCY_REG register */
    using CLK32FREQUENCY_REG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief value equal to (2^39/ SLOW_PERIOD). */
    using CLK32FREQUENCY_REG_SLOW_FREQUENCY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RADIO_CONTROL_IRQ_STATUS register */
    using RADIO_CONTROL_IRQ_STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief slow clock measurement end of calculation interrupt status */
    using RADIO_CONTROL_IRQ_STATUS_SLOW_CLK_IRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Radio FSM interrupt status (aka RfFsm_event_irq). */
    using RADIO_CONTROL_IRQ_STATUS_RADIO_FSM_IRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RADIO_CONTROL_IRQ_ENABLE register */
    using RADIO_CONTROL_IRQ_ENABLE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief mask slow clock measurement interrupt */
    using RADIO_CONTROL_IRQ_ENABLE_SLOW_CLK_IRQ_MASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief mask for each RfFsm_event (Radio FSM) interrupt. */
    using RADIO_CONTROL_IRQ_ENABLE_RADIO_FSM_IRQ_MASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
