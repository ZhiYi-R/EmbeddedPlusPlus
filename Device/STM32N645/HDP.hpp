/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N645_HDP_HPP
#define EMBEDDED_PP_STM32N645_HDP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Hardware debug port */
namespace STM32N645::HDP {

    /** @brief HDP control register */
    using HDP_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable HDP, valid if enabled in BSEC */
    using HDP_CTRL_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP multiplexer control register */
    using HDP_MUX = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the HDPy output among the 16 available signals */
    using HDP_MUX_MUX0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the HDPy output among the 16 available signals */
    using HDP_MUX_MUX1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the HDPy output among the 16 available signals */
    using HDP_MUX_MUX2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the HDPy output among the 16 available signals */
    using HDP_MUX_MUX3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the HDPy output among the 16 available signals */
    using HDP_MUX_MUX4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the HDPy output among the 16 available signals */
    using HDP_MUX_MUX5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the HDPy output among the 16 available signals */
    using HDP_MUX_MUX6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select the HDPy output among the 16 available signals */
    using HDP_MUX_MUX7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP read back value register */
    using HDP_VAL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Value of the HDP signals */
    using HDP_VAL_HDPVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP general-purpose output set register */
    using HDP_GPOSET = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief When a bit is written to 1, the corresponding HDP GPO is set */
    using HDP_GPOSET_HDPGPOSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP general purpose output clear register */
    using HDP_GPOCLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief When a bit is written to 1, the corresponding HDP GPO is cleared. */
    using HDP_GPOCLR_HDPGPOCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HDP general purpose output value register */
    using HDP_GPOVAL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief When written, define the value of the HDP GPO. */
    using HDP_GPOVAL_HDPGPOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
