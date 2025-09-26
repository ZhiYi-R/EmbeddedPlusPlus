/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F103_IWDG_HPP
#define EMBEDDED_PP_STM32F103_IWDG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Independent watchdog */
namespace STM32F103::IWDG {

    /** @brief Key register (IWDG_KR) */
    using KR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key value */
    using KR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler register (IWDG_PR) */
    using PR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler divider */
    using PR_PR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reload register (IWDG_RLR) */
    using RLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter reload value */
    using RLR_RL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status register (IWDG_SR) */
    using SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog prescaler value update */
    using SR_PVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter reload value update */
    using SR_RVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
