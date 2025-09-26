/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U545_DCB_HPP
#define EMBEDDED_PP_STM32U545_DCB_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Debug Control Block */
namespace STM32U545::DCB {

    /** @brief Debug Security Control and Status Register */
    using DSCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current domain Secure */
    using DSCSR_CDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
