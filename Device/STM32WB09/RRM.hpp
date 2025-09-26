/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB09_RRM_HPP
#define EMBEDDED_PP_STM32WB09_RRM_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RRM peripheral */
namespace STM32WB09::RRM {

    /** @brief UDRA_CTRL0 register */
    using UDRA_CTRL0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief reload the radio configuration pointer from RAM. */
    using UDRA_CTRL0_RELOAD_RDCFGPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UDRA_IRQ_ENABLE register */
    using UDRA_IRQ_ENABLE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UDRA interrupt enable (reload radio config pointer) */
    using UDRA_IRQ_ENABLE_RADIO_CFG_PTR_RELOADED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UDRA interrupt enable (command start) */
    using UDRA_IRQ_ENABLE_CMD_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UDRA interrupt enable (command end) */
    using UDRA_IRQ_ENABLE_CMD_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UDRA_IRQ_STATUS register */
    using UDRA_IRQ_STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief On read, returns the UDRA reload radio configuration pointer interrupt status. */
    using UDRA_IRQ_STATUS_RADIO_CFG_PTR_RELOADED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief On read, returns the UDRA command start interrupt status. */
    using UDRA_IRQ_STATUS_CMD_STARD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief On read, returns the UDRA command end interrupt status */
    using UDRA_IRQ_STATUS_CMD_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UDRA_RADIO_CFG_PTR register */
    using UDRA_RADIO_CFG_PTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UDRA radio configuration address. */
    using UDRA_RADIO_CFG_PTR_RADIO_CONFIG_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEMA_IRQ_ENABLE register */
    using SEMA_IRQ_ENABLE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief semaphore locked (= one port granted) interrupt enable */
    using SEMA_IRQ_ENABLE_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief semaphore unlocked (=no port selected) interrupt enable */
    using SEMA_IRQ_ENABLE_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEMA_IRQ_STATUS register */
    using SEMA_IRQ_STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief On read, returns the semaphore locked interrupt status. */
    using SEMA_IRQ_STATUS_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief On read, returns the semaphore unlocked interrupt status. */
    using SEMA_IRQ_STATUS_UNLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BLE_IRQ_ENABLE register */
    using BLE_IRQ_ENABLE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE Port grant interrupt enable */
    using BLE_IRQ_ENABLE_PORT_GRANT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE Port release interrupt enable */
    using BLE_IRQ_ENABLE_PORT_RELEASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE Port command start interrup enable */
    using BLE_IRQ_ENABLE_PORT_CMD_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE Port command end interrup enable */
    using BLE_IRQ_ENABLE_PORT_CMD_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BLE_IRQ_STATUS register */
    using BLE_IRQ_STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE hardware port granted interrupt status: */
    using BLE_IRQ_STATUS_PORT_GRANT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE hardware port released interrupt status. */
    using BLE_IRQ_STATUS_PORT_RELEASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE hardware port command start interrupt status. */
    using BLE_IRQ_STATUS_CMD_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP_BLE hardware port command end interrupt status. */
    using BLE_IRQ_STATUS_CMD_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VP_CPU_CMD_BUS register */
    using VP_CPU_CMD_BUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief command number */
    using VP_CPU_CMD_BUS_COMMAND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU Virtual port command request: */
    using VP_CPU_CMD_BUS_COMMAND_REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VP_CPU_SEMA_BUS register */
    using VP_CPU_SEMA_BUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief semaphore priority: priority value (between 0 and 7) of the take request. */
    using VP_CPU_SEMA_BUS_TAKE_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief semaphore token request: */
    using VP_CPU_SEMA_BUS_TAKE_REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VP_CPU_IRQ_ENABLE register */
    using VP_CPU_IRQ_ENABLE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU virtual port grant interrupt enable */
    using VP_CPU_IRQ_ENABLE_PORT_GRANT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU virtual port release interrupt enable */
    using VP_CPU_IRQ_ENABLE_PORT_RELEASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU virtual port command start interrup enable */
    using VP_CPU_IRQ_ENABLE_PORT_CMD_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU virtual port command end interrup enable */
    using VP_CPU_IRQ_ENABLE_PORT_CMD_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VP_CPU_IRQ_STATUS register */
    using VP_CPU_IRQ_STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU virtual port granted interrupt status. */
    using VP_CPU_IRQ_STATUS_PORT_GRANT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief virtual port released interrupt status. */
    using VP_CPU_IRQ_STATUS_PORT_RELEASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU virtual port preemption (at semaphore level) interrupt status. */
    using VP_CPU_IRQ_STATUS_PORT_PREEMPT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU virtual port command start interrupt status. */
    using VP_CPU_IRQ_STATUS_CMD_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU virtual port command end interrupt status. */
    using VP_CPU_IRQ_STATUS_CMD_END = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
