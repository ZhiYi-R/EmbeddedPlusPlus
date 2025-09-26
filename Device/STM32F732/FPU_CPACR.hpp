/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F732_FPU_CPACR_HPP
#define EMBEDDED_PP_STM32F732_FPU_CPACR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Floating point unit CPACR */
namespace STM32F732::FPU_CPACR {

    /** @brief Coprocessor access control register */
    using CPACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP */
    using CPACR_CP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
