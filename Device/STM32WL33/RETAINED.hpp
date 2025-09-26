/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_RETAINED_HPP
#define EMBEDDED_PP_STM32WL33_RETAINED_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RETAINED peripheral */
namespace STM32WL33::RETAINED {

    /** @brief RFIP_WAKEUPTIME register */
    using RFIP_WAKEUPTIME = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (Absolute) Target time to wakeup the RFIP. */
    using RFIP_WAKEUPTIME_RFIP_WAKEUPTIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPU_WAKEUPTIME register */
    using CPU_WAKEUPTIME = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief (Absolute) Target time to wakeup the CPU. */
    using CPU_WAKEUPTIME_CPU_WAKEUPTIME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WAKEUP_CTRL register */
    using WAKEUP_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay to be considered by the Wakeup block to anticipate the wakeup request to the PWRC of the SoC versus the target to wakeup the RFIP (or the CPU). */
    using WAKEUP_CTRL_SOC_WAKEUP_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicates if the wakeup timer has to wakeup the SoC (match on CPU_WAKEUPTIME[31:4] bit field only) + set the CPU_WAKEUP_F in the WAKEUP_IRQ_STATUS Misc register when match on CPU_WAKEUPTIME[31:0] occurs. */
    using WAKEUP_CTRL_CPU_WAKEUP_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicates if the wakeup timer has to wakeup the SoC (match on RFIP_WAKEUPTIME[31:4] bit field only) + trigger an event on the Sequencer and set the RFIP_WAKEUP_F in the WAKEUP_IRQ_STATUS Misc register when match on RFIP_WAKEUPTIME[31:0] occurs. */
    using WAKEUP_CTRL_RFIP_WAKEUP_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RRM_CMDLIST_PTR register */
    using RRM_CMDLIST_PTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contain the offset versus the SoC RAM base address where to find the RRM-UDRA command list entry point. */
    using RRM_CMDLIST_PTR_CMDLIST_PTR_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicate if a command list has to be executed or not */
    using RRM_CMDLIST_PTR_CMDLIST_PTR_VALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEQ_GLOBALTABLE_PTR register */
    using SEQ_GLOBALTABLE_PTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contain the offset versus the SoC RAM base address of the GlobalConfiguration RAM table entry point. */
    using SEQ_GLOBALTABLE_PTR_SEQ_GLOBALTABLE_PTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
