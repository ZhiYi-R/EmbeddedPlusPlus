/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32L052_FIREWALL_HPP
#define EMBEDDED_PP_STM32L052_FIREWALL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Firewall */
namespace STM32L052::Firewall {

    /** @brief Code segment start address */
    using FIREWALL_CSSA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief code segment start address */
    using FIREWALL_CSSA_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Code segment length */
    using FIREWALL_CSL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief code segment length */
    using FIREWALL_CSL_LENG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile data segment start address */
    using FIREWALL_NVDSSA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile data segment start address */
    using FIREWALL_NVDSSA_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile data segment length */
    using FIREWALL_NVDSL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile data segment length */
    using FIREWALL_NVDSL_LENG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Volatile data segment start address */
    using FIREWALL_VDSSA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Volatile data segment start address */
    using FIREWALL_VDSSA_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Volatile data segment length */
    using FIREWALL_VDSL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-volatile data segment length */
    using FIREWALL_VDSL_LENG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Configuration register */
    using FIREWALL_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Volatile data execution */
    using FIREWALL_CR_VDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Volatile data shared */
    using FIREWALL_CR_VDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Firewall pre alarm */
    using FIREWALL_CR_FPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
