/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G471_VREFBUF_HPP
#define EMBEDDED_PP_STM32G471_VREFBUF_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Voltage reference buffer */
namespace STM32G471::VREFBUF {

    /** @brief VREF_BUF Control and Status Register */
    using VREFBUF_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Voltage Reference */
    using VREFBUF_CSR_ENVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High impedence mode for the VREF_BUF */
    using VREFBUF_CSR_HIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage reference buffer ready */
    using VREFBUF_CSR_VRR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage reference scale */
    using VREFBUF_CSR_VRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VREF_BUF Calibration Control Register */
    using VREFBUF_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trimming code */
    using VREFBUF_CCR_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
