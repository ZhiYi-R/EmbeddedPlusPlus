/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7A3X_SCB_ACTRL_HPP
#define EMBEDDED_PP_STM32H7A3X_SCB_ACTRL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System control block ACTLR */
namespace STM32H7A3x::SCB_ACTRL {

    /** @brief Auxiliary control register */
    using ACTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DISFOLD */
    using ACTRL_DISFOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FPEXCODIS */
    using ACTRL_FPEXCODIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DISRAMODE */
    using ACTRL_DISRAMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DISITMATBFLUSH */
    using ACTRL_DISITMATBFLUSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
