/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H747_CM4_ART_HPP
#define EMBEDDED_PP_STM32H747_CM4_ART_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief accelerator - control register (ART_CTR) */
namespace STM32H747_CM4::ART {

    /** @brief control register */
    using CTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cache enable */
    using CTR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cacheable page index */
    using CTR_PCACHEADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
