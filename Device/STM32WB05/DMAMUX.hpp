/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB05_DMAMUX_HPP
#define EMBEDDED_PP_STM32WB05_DMAMUX_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DMAMUX peripheral */
namespace STM32WB05::DMAMUX {

    /** @brief CxCR register */
    using C0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAREQ_ID[4:0]: DMA REQuest IDentification Selects the input DMA request. C.f. the DMAMUX table about assignments of multiplexer inputs to resources. */
    using C0CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CxCR register */
    using C1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAREQ_ID[4:0]: DMA REQuest IDentification Selects the input DMA request. C.f. the DMAMUX table about assignments of multiplexer inputs to resources. */
    using C1CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CxCR register */
    using C2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAREQ_ID[4:0]: DMA REQuest IDentification Selects the input DMA request. C.f. the DMAMUX table about assignments of multiplexer inputs to resources. */
    using C2CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CxCR register */
    using C3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAREQ_ID[4:0]: DMA REQuest IDentification Selects the input DMA request. C.f. the DMAMUX table about assignments of multiplexer inputs to resources. */
    using C3CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CxCR register */
    using C4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAREQ_ID[4:0]: DMA REQuest IDentification Selects the input DMA request. C.f. the DMAMUX table about assignments of multiplexer inputs to resources. */
    using C4CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CxCR register */
    using C5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAREQ_ID[4:0]: DMA REQuest IDentification Selects the input DMA request. C.f. the DMAMUX table about assignments of multiplexer inputs to resources. */
    using C5CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CxCR register */
    using C6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAREQ_ID[4:0]: DMA REQuest IDentification Selects the input DMA request. C.f. the DMAMUX table about assignments of multiplexer inputs to resources. */
    using C6CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CxCR register */
    using C7CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAREQ_ID[4:0]: DMA REQuest IDentification Selects the input DMA request. C.f. the DMAMUX table about assignments of multiplexer inputs to resources. */
    using C7CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
