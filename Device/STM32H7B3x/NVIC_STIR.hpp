/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7B3X_NVIC_STIR_HPP
#define EMBEDDED_PP_STM32H7B3X_NVIC_STIR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Nested vectored interrupt controller */
namespace STM32H7B3x::NVIC_STIR {

    /** @brief Software trigger interrupt register */
    using STIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software generated interrupt ID */
    using STIR_INTID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
