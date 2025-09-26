/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_MISC_HPP
#define EMBEDDED_PP_STM32WL33_MISC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief MISC peripheral */
namespace STM32WL33::MISC {

    /** @brief RFIP_VERSION register */
    using RFIP_VERSION = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision of the MR_SubG (to be used for metal fixes) */
    using RFIP_VERSION_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version of the MR_SubG (to be used for cut upgrades) */
    using RFIP_VERSION_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Used for major upgrades (new protocols support / new features) */
    using RFIP_VERSION_PRODUCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RRM_UDRA_CTRL register */
    using RRM_UDRA_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Action bit: write 1 to request a RRM-UDRA command. */
    using RRM_UDRA_CTRL_RRM_CMD_REQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEQUENCER_CTRL register */
    using SEQUENCER_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Action bit: write 1 to generate a trigger event on Sequencer. */
    using SEQUENCER_CTRL_GEN_SEQ_TRIGGER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable/disable the Sequencer */
    using SEQUENCER_CTRL_DISABLE_SEQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ABSOLUTE_TIME register */
    using ABSOLUTE_TIME = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate the interpolated absolute. */
    using ABSOLUTE_TIME_ABSOLUTE_TIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCM_COUNTER_VAL register */
    using SCM_COUNTER_VAL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slow Clock Measurement: number of 16 MHz clock cycles contained in 32 slow clock periods. */
    using SCM_COUNTER_VAL_SCM_COUNTER_CURRVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCM_MIN_MAX register */
    using SCM_MIN_MAX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slow Clock Measurement: minimum SCM_COUNTER value seen since the counter is ON and since last clear request. */
    using SCM_MIN_MAX_SCM_COUNTER_MINVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slow Clock Measurement: maximum SCM_COUNTER value seen since the counter is ON and since last clear request. */
    using SCM_MIN_MAX_SCM_COUNTER_MAXVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write 1' to clear the SCM_COUNTER_MINVAL and SCM_COUNTER_MAXVAL bit fields. */
    using SCM_MIN_MAX_CLEAR_MIN_MAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WAKEUP_IRQ_STATUS register */
    using WAKEUP_IRQ_STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set when the interpolated absolute time matches the CPU_WAKEUPTIME while WAKEUP_CTRL. */
    using WAKEUP_IRQ_STATUS_CPU_WAKEUP_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set when the interpolated absolute time matches the RFIP_WAKEUPTIME while WAKEUP_CTRL. */
    using WAKEUP_IRQ_STATUS_RFIP_WAKEUP_F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
