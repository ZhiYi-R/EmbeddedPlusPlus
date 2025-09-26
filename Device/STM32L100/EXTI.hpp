/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32L100_EXTI_HPP
#define EMBEDDED_PP_STM32L100_EXTI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief External interrupt/event controller */
namespace STM32L100::EXTI {

    /** @brief IMR */
    using IMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt mask on line x */
    using IMR_MR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 23, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EMR */
    using EMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event mask on line x */
    using EMR_MR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 23, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTSR */
    using RTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rising edge trigger event configuration bit of line x */
    using RTSR_TR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 23, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FTSR */
    using FTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Falling edge trigger event configuration bit of line x */
    using FTSR_TR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 23, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SWIER */
    using SWIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software interrupt on line x */
    using SWIER_SWIER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 23, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PR */
    using PR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pending bit */
    using PR_PR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 23, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
