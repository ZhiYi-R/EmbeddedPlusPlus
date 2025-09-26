/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M33_SIG_HPP
#define EMBEDDED_PP_CORTEX_M33_SIG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Software Interrupt Control */
namespace Cortex_M33::SIG {

    /** @brief STIR */
    using STIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INTID */
    using STIR_INTID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
