/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F3X8_SCB_ACTRL_HPP
#define EMBEDDED_PP_STM32F3X8_SCB_ACTRL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System control block ACTLR */
namespace STM32F3x8::SCB_ACTRL {

    /** @brief Auxiliary control register */
    using ACTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DISMCYCINT */
    using ACTRL_DISMCYCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DISDEFWBUF */
    using ACTRL_DISDEFWBUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DISFOLD */
    using ACTRL_DISFOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DISFPCA */
    using ACTRL_DISFPCA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DISOOFP */
    using ACTRL_DISOOFP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
