/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U5F7_VREFBUF_HPP
#define EMBEDDED_PP_STM32U5F7_VREFBUF_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Voltage reference buffer */
namespace STM32U5F7::VREFBUF {

    /** @brief VREFBUF control and status register */
    using VREFBUF_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENVR */
    using VREFBUF_CSR_ENVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HIZ */
    using VREFBUF_CSR_HIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VRR */
    using VREFBUF_CSR_VRR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VRS */
    using VREFBUF_CSR_VRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREFBUF calibration control register */
    using VREFBUF_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIM */
    using VREFBUF_CCR_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
