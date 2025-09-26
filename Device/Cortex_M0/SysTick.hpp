/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M0_SYSTICK_HPP
#define EMBEDDED_PP_CORTEX_M0_SYSTICK_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System Timer registers */
namespace Cortex_M0::SysTick {

    /** @brief SYST_CSR */
    using SYST_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COUNTFLAG */
    using SYST_CSR_COUNTFLAG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - not_counted_to_0: No description (value: 0)
     *          - counted_to_0: No description (value: 1)
     */
        /** @brief not_counted_to_0 value */
    constexpr std::uint32_t SYST_CSR_COUNTFLAG_not_counted_to_0 = 0;
        /** @brief counted_to_0 value */
    constexpr std::uint32_t SYST_CSR_COUNTFLAG_counted_to_0 = 1;

    /** @brief CLKSOURCE */
    using SYST_CSR_CLKSOURCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - External_clock: No description (value: 0)
     *          - Processor_clock: No description (value: 1)
     */
        /** @brief External_clock value */
    constexpr std::uint32_t SYST_CSR_CLKSOURCE_External_clock = 0;
        /** @brief Processor_clock value */
    constexpr std::uint32_t SYST_CSR_CLKSOURCE_Processor_clock = 1;

    /** @brief TICKINT */
    using SYST_CSR_TICKINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Does_not_affect_exception_status: No description (value: 0)
     *          - Changes_exception_status: No description (value: 1)
     */
        /** @brief Does_not_affect_exception_status value */
    constexpr std::uint32_t SYST_CSR_TICKINT_Does_not_affect_exception_status = 0;
        /** @brief Changes_exception_status value */
    constexpr std::uint32_t SYST_CSR_TICKINT_Changes_exception_status = 1;

    /** @brief ENABLE */
    using SYST_CSR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Counter_disabled: No description (value: 0)
     *          - Counter_operating: No description (value: 1)
     */
        /** @brief Counter_disabled value */
    constexpr std::uint32_t SYST_CSR_ENABLE_Counter_disabled = 0;
        /** @brief Counter_operating value */
    constexpr std::uint32_t SYST_CSR_ENABLE_Counter_operating = 1;

    /** @brief SYST_RVR */
    using SYST_RVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RELOAD */
    using SYST_RVR_RELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYST_CVR */
    using SYST_CVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CURRENT */
    using SYST_CVR_CURRENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYST_CALIB */
    using SYST_CALIB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NOREF */
    using SYST_CALIB_NOREF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Implemented: No description (value: 0)
     *          - Not_implemented: No description (value: 1)
     */
        /** @brief Implemented value */
    constexpr std::uint32_t SYST_CALIB_NOREF_Implemented = 0;
        /** @brief Not_implemented value */
    constexpr std::uint32_t SYST_CALIB_NOREF_Not_implemented = 1;

    /** @brief SKEW */
    using SYST_CALIB_SKEW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Exact: No description (value: 0)
     *          - Inexact: No description (value: 1)
     */
        /** @brief Exact value */
    constexpr std::uint32_t SYST_CALIB_SKEW_Exact = 0;
        /** @brief Inexact value */
    constexpr std::uint32_t SYST_CALIB_SKEW_Inexact = 1;

    /** @brief TENMS */
    using SYST_CALIB_TENMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
