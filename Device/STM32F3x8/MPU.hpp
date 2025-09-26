/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32F3X8_MPU_HPP
#define EMBEDDED_PP_STM32F3X8_MPU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Memory protection unit */
namespace STM32F3x8::MPU {

    /** @brief MPU type register */
    using MPU_TYPER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Separate flag */
    using MPU_TYPER_SEPARATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of MPU data regions */
    using MPU_TYPER_DREGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of MPU instruction regions */
    using MPU_TYPER_IREGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU control register */
    using MPU_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enables the MPU */
    using MPU_CTRL_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enables the operation of MPU during hard fault */
    using MPU_CTRL_HFNMIENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable priviliged software access to default memory map */
    using MPU_CTRL_PRIVDEFENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU region number register */
    using MPU_RNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU region */
    using MPU_RNR_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU region base address register */
    using MPU_RBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU region field */
    using MPU_RBAR_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU region number valid */
    using MPU_RBAR_VALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region base address field */
    using MPU_RBAR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU region attribute and size register */
    using MPU_RASR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region enable bit. */
    using MPU_RASR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Size of the MPU protection region */
    using MPU_RASR_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Subregion disable bits */
    using MPU_RASR_SRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief memory attribute */
    using MPU_RASR_B = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief memory attribute */
    using MPU_RASR_C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Shareable memory attribute */
    using MPU_RASR_S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief memory attribute */
    using MPU_RASR_TEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access permission */
    using MPU_RASR_AP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction access disable bit */
    using MPU_RASR_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
