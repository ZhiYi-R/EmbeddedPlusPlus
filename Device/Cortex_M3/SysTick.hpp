/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M3_SYSTICK_HPP
#define EMBEDDED_PP_CORTEX_M3_SYSTICK_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System Timer registers */
namespace Cortex_M3::SysTick {

    /** @brief STCSR */
    using STCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COUNTFLAG */
    using STCSR_COUNTFLAG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - not_counted_to_0: No description (value: 0)
     *          - counted_to_0: No description (value: 1)
     */
        /** @brief not_counted_to_0 value */
    constexpr std::uint32_t STCSR_COUNTFLAG_not_counted_to_0 = 0;
        /** @brief counted_to_0 value */
    constexpr std::uint32_t STCSR_COUNTFLAG_counted_to_0 = 1;

    /** @brief CLKSOURCE */
    using STCSR_CLKSOURCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - External_clock: No description (value: 0)
     *          - Processor_clock: No description (value: 1)
     */
        /** @brief External_clock value */
    constexpr std::uint32_t STCSR_CLKSOURCE_External_clock = 0;
        /** @brief Processor_clock value */
    constexpr std::uint32_t STCSR_CLKSOURCE_Processor_clock = 1;

    /** @brief TICKINT */
    using STCSR_TICKINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Does_not_affect_exception_status: No description (value: 0)
     *          - Changes_exception_status: No description (value: 1)
     */
        /** @brief Does_not_affect_exception_status value */
    constexpr std::uint32_t STCSR_TICKINT_Does_not_affect_exception_status = 0;
        /** @brief Changes_exception_status value */
    constexpr std::uint32_t STCSR_TICKINT_Changes_exception_status = 1;

    /** @brief ENABLE */
    using STCSR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Counter_disabled: No description (value: 0)
     *          - Counter_operating: No description (value: 1)
     */
        /** @brief Counter_disabled value */
    constexpr std::uint32_t STCSR_ENABLE_Counter_disabled = 0;
        /** @brief Counter_operating value */
    constexpr std::uint32_t STCSR_ENABLE_Counter_operating = 1;

    /** @brief STRVR */
    using STRVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RELOAD */
    using STRVR_RELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STCVR */
    using STCVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CURRENT */
    using STCVR_CURRENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STCR */
    using STCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NOREF */
    using STCR_NOREF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Implemented: No description (value: 0)
     *          - Not_implemented: No description (value: 1)
     */
        /** @brief Implemented value */
    constexpr std::uint32_t STCR_NOREF_Implemented = 0;
        /** @brief Not_implemented value */
    constexpr std::uint32_t STCR_NOREF_Not_implemented = 1;

    /** @brief SKEW */
    using STCR_SKEW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Exact: No description (value: 0)
     *          - Inexact: No description (value: 1)
     */
        /** @brief Exact value */
    constexpr std::uint32_t STCR_SKEW_Exact = 0;
        /** @brief Inexact value */
    constexpr std::uint32_t STCR_SKEW_Inexact = 1;

    /** @brief TENMS */
    using STCR_TENMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
