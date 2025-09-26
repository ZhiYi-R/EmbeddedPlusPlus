/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H742X_STK_HPP
#define EMBEDDED_PP_STM32H742X_STK_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SysTick timer */
namespace STM32H742x::STK {

    /** @brief SysTick control and status register */
    using CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter enable */
    using CSR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SysTick exception request enable */
    using CSR_TICKINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock source selection */
    using CSR_CLKSOURCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COUNTFLAG */
    using CSR_COUNTFLAG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SysTick reload value register */
    using RVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RELOAD value */
    using RVR_RELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SysTick current value register */
    using CVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current counter value */
    using CVR_CURRENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SysTick calibration value register */
    using CALIB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration value */
    using CALIB_TENMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SKEW flag: Indicates whether the TENMS value is exact */
    using CALIB_SKEW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NOREF flag. Reads as zero */
    using CALIB_NOREF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
