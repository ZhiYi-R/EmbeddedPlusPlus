/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H733_DMAMUX1_HPP
#define EMBEDDED_PP_STM32H733_DMAMUX1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DMAMUX */
namespace STM32H733::DMAMUX1 {

    /** @brief DMAMUX_C0CR register */
    using DMAMUX_C0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C0CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C0CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C0CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C0CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C0CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C0CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C0CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C0CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C0CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C0CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C0CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C0CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C0CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C0CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C0CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C0CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C0CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C1CR register */
    using DMAMUX_C1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C1CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C1CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C1CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C1CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C1CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C1CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C1CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C1CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C1CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C1CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C1CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C1CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C1CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C1CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C1CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C1CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C1CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C2CR register */
    using DMAMUX_C2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C2CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C2CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C2CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C2CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C2CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C2CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C2CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C2CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C2CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C2CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C2CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C2CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C2CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C2CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C2CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C2CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C2CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C3CR register */
    using DMAMUX_C3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C3CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C3CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C3CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C3CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C3CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C3CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C3CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C3CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C3CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C3CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C3CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C3CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C3CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C3CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C3CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C3CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C3CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C4CR register */
    using DMAMUX_C4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C4CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C4CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C4CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C4CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C4CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C4CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C4CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C4CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C4CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C4CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C4CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C4CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C4CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C4CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C4CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C4CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C4CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C5CR register */
    using DMAMUX_C5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C5CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C5CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C5CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C5CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C5CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C5CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C5CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C5CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C5CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C5CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C5CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C5CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C5CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C5CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C5CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C5CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C5CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C6CR register */
    using DMAMUX_C6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C6CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C6CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C6CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C6CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C6CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C6CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C6CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C6CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C6CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C6CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C6CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C6CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C6CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C6CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C6CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C6CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C6CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C7CR register */
    using DMAMUX_C7CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C7CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C7CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C7CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C7CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C7CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C7CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C7CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C7CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C7CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C7CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C7CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C7CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C7CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C7CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C7CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C7CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C7CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C8CR register */
    using DMAMUX_C8CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C8CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C8CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C8CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C8CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C8CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C8CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C8CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C8CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C8CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C8CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C8CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C8CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C8CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C8CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C8CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C8CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C8CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C9CR register */
    using DMAMUX_C9CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C9CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C9CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C9CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C9CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C9CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C9CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C9CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C9CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C9CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C9CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C9CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C9CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C9CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C9CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C9CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C9CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C9CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C10CR register */
    using DMAMUX_C10CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C10CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C10CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C10CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C10CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C10CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C10CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C10CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C10CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C10CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C10CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C10CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C10CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C10CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C10CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C10CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C10CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C10CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C11CR register */
    using DMAMUX_C11CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C11CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C11CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C11CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C11CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C11CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C11CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C11CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C11CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C11CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C11CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C11CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C11CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C11CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C11CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C11CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C11CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C11CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C12CR register */
    using DMAMUX_C12CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C12CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C12CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C12CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C12CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C12CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C12CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C12CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C12CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C12CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C12CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C12CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C12CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C12CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C12CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C12CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C12CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C12CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C13CR register */
    using DMAMUX_C13CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C13CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C13CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C13CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C13CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C13CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C13CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C13CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C13CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C13CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C13CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C13CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C13CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C13CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C13CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C13CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C13CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C13CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C14CR register */
    using DMAMUX_C14CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C14CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C14CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C14CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C14CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C14CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C14CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C14CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C14CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C14CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C14CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C14CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C14CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C14CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C14CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C14CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C14CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C14CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_C15CR register */
    using DMAMUX_C15CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request identification Selects the input DMA request. See the DMAMUX table about assignments of multiplexer inputs to resources. */
    using DMAMUX_C15CR_DMAREQ_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun interrupt enable */
    using DMAMUX_C15CR_SOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t DMAMUX_C15CR_SOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t DMAMUX_C15CR_SOIE_B_0x1 = 1;

    /** @brief Event generation enable */
    using DMAMUX_C15CR_EGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event generation disabled (value: 0)
     *          - B_0x1: Event generation enabled (value: 1)
     */
        /** @brief Event generation disabled */
    constexpr std::uint32_t DMAMUX_C15CR_EGE_B_0x0 = 0;
        /** @brief Event generation enabled */
    constexpr std::uint32_t DMAMUX_C15CR_EGE_B_0x1 = 1;

    /** @brief Synchronization enable */
    using DMAMUX_C15CR_SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization disabled (value: 0)
     *          - B_0x1: Synchronization enabled (value: 1)
     */
        /** @brief Synchronization disabled */
    constexpr std::uint32_t DMAMUX_C15CR_SE_B_0x0 = 0;
        /** @brief Synchronization enabled */
    constexpr std::uint32_t DMAMUX_C15CR_SE_B_0x1 = 1;

    /** @brief Synchronization polarity Defines the edge polarity of the selected synchronization input: */
    using DMAMUX_C15CR_SPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no synchronization nor detection. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no synchronization nor detection. */
    constexpr std::uint32_t DMAMUX_C15CR_SPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_C15CR_SPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_C15CR_SPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_C15CR_SPOL_B_0x3 = 3;

    /** @brief Number of DMA requests minus 1 to forward Defines the number of DMA requests to forward to the DMA controller after a synchronization event, and/or the number of DMA requests before an output event is generated. This field shall only be written when both SE and EGE bits are low. */
    using DMAMUX_C15CR_NBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization identification Selects the synchronization input (see inputs to resources). */
    using DMAMUX_C15CR_SYNC_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_CSR register */
    using DMAMUX_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization overrun event flag The flag is set when a synchronization event occurs on a DMA request line multiplexer channel x, while the DMA request counter value is lower than NBREQ. The flag is cleared by writing 1 to the corresponding CSOFx bit in DMAMUX_CFR register. For DMAMUX2 bits 15:8 are reserved, keep them at reset value. */
    using DMAMUX_CSR_SOF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_CFR register */
    using DMAMUX_CFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear synchronization overrun event flag Writing 1 in each bit clears the corresponding overrun flag SOFx in the DMAMUX_CSR register. */
    using DMAMUX_CFR_CSOF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_RG0CR register */
    using DMAMUX_RG0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator */
    using DMAMUX_RG0CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger overrun interrupt enable */
    using DMAMUX_RG0CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on a trigger overrun event occurrence is disabled (value: 0)
     *          - B_0x1: Interrupt on a trigger overrun event occurrence is enabled (value: 1)
     */
        /** @brief Interrupt on a trigger overrun event occurrence is disabled */
    constexpr std::uint32_t DMAMUX_RG0CR_OIE_B_0x0 = 0;
        /** @brief Interrupt on a trigger overrun event occurrence is enabled */
    constexpr std::uint32_t DMAMUX_RG0CR_OIE_B_0x1 = 1;

    /** @brief DMA request generator channel x enable */
    using DMAMUX_RG0CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA request generator channel x disabled (value: 0)
     *          - B_0x1: DMA request generator channel x enabled (value: 1)
     */
        /** @brief DMA request generator channel x disabled */
    constexpr std::uint32_t DMAMUX_RG0CR_GE_B_0x0 = 0;
        /** @brief DMA request generator channel x enabled */
    constexpr std::uint32_t DMAMUX_RG0CR_GE_B_0x1 = 1;

    /** @brief DMA request generator trigger polarity Defines the edge polarity of the selected trigger input */
    using DMAMUX_RG0CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no trigger detection nor generation. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no trigger detection nor generation. */
    constexpr std::uint32_t DMAMUX_RG0CR_GPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_RG0CR_GPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_RG0CR_GPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_RG0CR_GPOL_B_0x3 = 3;

    /** @brief Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field must be written only when GE bit is disabled. */
    using DMAMUX_RG0CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_RG1CR register */
    using DMAMUX_RG1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator */
    using DMAMUX_RG1CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger overrun interrupt enable */
    using DMAMUX_RG1CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on a trigger overrun event occurrence is disabled (value: 0)
     *          - B_0x1: Interrupt on a trigger overrun event occurrence is enabled (value: 1)
     */
        /** @brief Interrupt on a trigger overrun event occurrence is disabled */
    constexpr std::uint32_t DMAMUX_RG1CR_OIE_B_0x0 = 0;
        /** @brief Interrupt on a trigger overrun event occurrence is enabled */
    constexpr std::uint32_t DMAMUX_RG1CR_OIE_B_0x1 = 1;

    /** @brief DMA request generator channel x enable */
    using DMAMUX_RG1CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA request generator channel x disabled (value: 0)
     *          - B_0x1: DMA request generator channel x enabled (value: 1)
     */
        /** @brief DMA request generator channel x disabled */
    constexpr std::uint32_t DMAMUX_RG1CR_GE_B_0x0 = 0;
        /** @brief DMA request generator channel x enabled */
    constexpr std::uint32_t DMAMUX_RG1CR_GE_B_0x1 = 1;

    /** @brief DMA request generator trigger polarity Defines the edge polarity of the selected trigger input */
    using DMAMUX_RG1CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no trigger detection nor generation. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no trigger detection nor generation. */
    constexpr std::uint32_t DMAMUX_RG1CR_GPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_RG1CR_GPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_RG1CR_GPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_RG1CR_GPOL_B_0x3 = 3;

    /** @brief Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field must be written only when GE bit is disabled. */
    using DMAMUX_RG1CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_RG2CR register */
    using DMAMUX_RG2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator */
    using DMAMUX_RG2CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger overrun interrupt enable */
    using DMAMUX_RG2CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on a trigger overrun event occurrence is disabled (value: 0)
     *          - B_0x1: Interrupt on a trigger overrun event occurrence is enabled (value: 1)
     */
        /** @brief Interrupt on a trigger overrun event occurrence is disabled */
    constexpr std::uint32_t DMAMUX_RG2CR_OIE_B_0x0 = 0;
        /** @brief Interrupt on a trigger overrun event occurrence is enabled */
    constexpr std::uint32_t DMAMUX_RG2CR_OIE_B_0x1 = 1;

    /** @brief DMA request generator channel x enable */
    using DMAMUX_RG2CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA request generator channel x disabled (value: 0)
     *          - B_0x1: DMA request generator channel x enabled (value: 1)
     */
        /** @brief DMA request generator channel x disabled */
    constexpr std::uint32_t DMAMUX_RG2CR_GE_B_0x0 = 0;
        /** @brief DMA request generator channel x enabled */
    constexpr std::uint32_t DMAMUX_RG2CR_GE_B_0x1 = 1;

    /** @brief DMA request generator trigger polarity Defines the edge polarity of the selected trigger input */
    using DMAMUX_RG2CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no trigger detection nor generation. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no trigger detection nor generation. */
    constexpr std::uint32_t DMAMUX_RG2CR_GPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_RG2CR_GPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_RG2CR_GPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_RG2CR_GPOL_B_0x3 = 3;

    /** @brief Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field must be written only when GE bit is disabled. */
    using DMAMUX_RG2CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_RG3CR register */
    using DMAMUX_RG3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator */
    using DMAMUX_RG3CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger overrun interrupt enable */
    using DMAMUX_RG3CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on a trigger overrun event occurrence is disabled (value: 0)
     *          - B_0x1: Interrupt on a trigger overrun event occurrence is enabled (value: 1)
     */
        /** @brief Interrupt on a trigger overrun event occurrence is disabled */
    constexpr std::uint32_t DMAMUX_RG3CR_OIE_B_0x0 = 0;
        /** @brief Interrupt on a trigger overrun event occurrence is enabled */
    constexpr std::uint32_t DMAMUX_RG3CR_OIE_B_0x1 = 1;

    /** @brief DMA request generator channel x enable */
    using DMAMUX_RG3CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA request generator channel x disabled (value: 0)
     *          - B_0x1: DMA request generator channel x enabled (value: 1)
     */
        /** @brief DMA request generator channel x disabled */
    constexpr std::uint32_t DMAMUX_RG3CR_GE_B_0x0 = 0;
        /** @brief DMA request generator channel x enabled */
    constexpr std::uint32_t DMAMUX_RG3CR_GE_B_0x1 = 1;

    /** @brief DMA request generator trigger polarity Defines the edge polarity of the selected trigger input */
    using DMAMUX_RG3CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no trigger detection nor generation. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no trigger detection nor generation. */
    constexpr std::uint32_t DMAMUX_RG3CR_GPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_RG3CR_GPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_RG3CR_GPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_RG3CR_GPOL_B_0x3 = 3;

    /** @brief Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field must be written only when GE bit is disabled. */
    using DMAMUX_RG3CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_RG4CR register */
    using DMAMUX_RG4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator */
    using DMAMUX_RG4CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger overrun interrupt enable */
    using DMAMUX_RG4CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on a trigger overrun event occurrence is disabled (value: 0)
     *          - B_0x1: Interrupt on a trigger overrun event occurrence is enabled (value: 1)
     */
        /** @brief Interrupt on a trigger overrun event occurrence is disabled */
    constexpr std::uint32_t DMAMUX_RG4CR_OIE_B_0x0 = 0;
        /** @brief Interrupt on a trigger overrun event occurrence is enabled */
    constexpr std::uint32_t DMAMUX_RG4CR_OIE_B_0x1 = 1;

    /** @brief DMA request generator channel x enable */
    using DMAMUX_RG4CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA request generator channel x disabled (value: 0)
     *          - B_0x1: DMA request generator channel x enabled (value: 1)
     */
        /** @brief DMA request generator channel x disabled */
    constexpr std::uint32_t DMAMUX_RG4CR_GE_B_0x0 = 0;
        /** @brief DMA request generator channel x enabled */
    constexpr std::uint32_t DMAMUX_RG4CR_GE_B_0x1 = 1;

    /** @brief DMA request generator trigger polarity Defines the edge polarity of the selected trigger input */
    using DMAMUX_RG4CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no trigger detection nor generation. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no trigger detection nor generation. */
    constexpr std::uint32_t DMAMUX_RG4CR_GPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_RG4CR_GPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_RG4CR_GPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_RG4CR_GPOL_B_0x3 = 3;

    /** @brief Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field must be written only when GE bit is disabled. */
    using DMAMUX_RG4CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_RG5CR register */
    using DMAMUX_RG5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator */
    using DMAMUX_RG5CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger overrun interrupt enable */
    using DMAMUX_RG5CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on a trigger overrun event occurrence is disabled (value: 0)
     *          - B_0x1: Interrupt on a trigger overrun event occurrence is enabled (value: 1)
     */
        /** @brief Interrupt on a trigger overrun event occurrence is disabled */
    constexpr std::uint32_t DMAMUX_RG5CR_OIE_B_0x0 = 0;
        /** @brief Interrupt on a trigger overrun event occurrence is enabled */
    constexpr std::uint32_t DMAMUX_RG5CR_OIE_B_0x1 = 1;

    /** @brief DMA request generator channel x enable */
    using DMAMUX_RG5CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA request generator channel x disabled (value: 0)
     *          - B_0x1: DMA request generator channel x enabled (value: 1)
     */
        /** @brief DMA request generator channel x disabled */
    constexpr std::uint32_t DMAMUX_RG5CR_GE_B_0x0 = 0;
        /** @brief DMA request generator channel x enabled */
    constexpr std::uint32_t DMAMUX_RG5CR_GE_B_0x1 = 1;

    /** @brief DMA request generator trigger polarity Defines the edge polarity of the selected trigger input */
    using DMAMUX_RG5CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no trigger detection nor generation. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no trigger detection nor generation. */
    constexpr std::uint32_t DMAMUX_RG5CR_GPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_RG5CR_GPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_RG5CR_GPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_RG5CR_GPOL_B_0x3 = 3;

    /** @brief Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field must be written only when GE bit is disabled. */
    using DMAMUX_RG5CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_RG6CR register */
    using DMAMUX_RG6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator */
    using DMAMUX_RG6CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger overrun interrupt enable */
    using DMAMUX_RG6CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on a trigger overrun event occurrence is disabled (value: 0)
     *          - B_0x1: Interrupt on a trigger overrun event occurrence is enabled (value: 1)
     */
        /** @brief Interrupt on a trigger overrun event occurrence is disabled */
    constexpr std::uint32_t DMAMUX_RG6CR_OIE_B_0x0 = 0;
        /** @brief Interrupt on a trigger overrun event occurrence is enabled */
    constexpr std::uint32_t DMAMUX_RG6CR_OIE_B_0x1 = 1;

    /** @brief DMA request generator channel x enable */
    using DMAMUX_RG6CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA request generator channel x disabled (value: 0)
     *          - B_0x1: DMA request generator channel x enabled (value: 1)
     */
        /** @brief DMA request generator channel x disabled */
    constexpr std::uint32_t DMAMUX_RG6CR_GE_B_0x0 = 0;
        /** @brief DMA request generator channel x enabled */
    constexpr std::uint32_t DMAMUX_RG6CR_GE_B_0x1 = 1;

    /** @brief DMA request generator trigger polarity Defines the edge polarity of the selected trigger input */
    using DMAMUX_RG6CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no trigger detection nor generation. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no trigger detection nor generation. */
    constexpr std::uint32_t DMAMUX_RG6CR_GPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_RG6CR_GPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_RG6CR_GPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_RG6CR_GPOL_B_0x3 = 3;

    /** @brief Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field must be written only when GE bit is disabled. */
    using DMAMUX_RG6CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_RG7CR register */
    using DMAMUX_RG7CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal identification Selects the DMA request trigger input used for the channel x of the DMA request generator */
    using DMAMUX_RG7CR_SIG_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger overrun interrupt enable */
    using DMAMUX_RG7CR_OIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt on a trigger overrun event occurrence is disabled (value: 0)
     *          - B_0x1: Interrupt on a trigger overrun event occurrence is enabled (value: 1)
     */
        /** @brief Interrupt on a trigger overrun event occurrence is disabled */
    constexpr std::uint32_t DMAMUX_RG7CR_OIE_B_0x0 = 0;
        /** @brief Interrupt on a trigger overrun event occurrence is enabled */
    constexpr std::uint32_t DMAMUX_RG7CR_OIE_B_0x1 = 1;

    /** @brief DMA request generator channel x enable */
    using DMAMUX_RG7CR_GE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA request generator channel x disabled (value: 0)
     *          - B_0x1: DMA request generator channel x enabled (value: 1)
     */
        /** @brief DMA request generator channel x disabled */
    constexpr std::uint32_t DMAMUX_RG7CR_GE_B_0x0 = 0;
        /** @brief DMA request generator channel x enabled */
    constexpr std::uint32_t DMAMUX_RG7CR_GE_B_0x1 = 1;

    /** @brief DMA request generator trigger polarity Defines the edge polarity of the selected trigger input */
    using DMAMUX_RG7CR_GPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No event, i.e. no trigger detection nor generation. (value: 0)
     *          - B_0x1: Rising edge (value: 1)
     *          - B_0x2: Falling edge (value: 2)
     *          - B_0x3: Rising and falling edges (value: 3)
     */
        /** @brief No event, i.e. no trigger detection nor generation. */
    constexpr std::uint32_t DMAMUX_RG7CR_GPOL_B_0x0 = 0;
        /** @brief Rising edge */
    constexpr std::uint32_t DMAMUX_RG7CR_GPOL_B_0x1 = 1;
        /** @brief Falling edge */
    constexpr std::uint32_t DMAMUX_RG7CR_GPOL_B_0x2 = 2;
        /** @brief Rising and falling edges */
    constexpr std::uint32_t DMAMUX_RG7CR_GPOL_B_0x3 = 3;

    /** @brief Number of DMA requests to be generated (minus 1) Defines the number of DMA requests to be generated after a trigger event. The actual number of generated DMA requests is GNBREQ +1. Note: This field must be written only when GE bit is disabled. */
    using DMAMUX_RG7CR_GNBREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_RGSR register */
    using DMAMUX_RGSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [:0]: Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register. */
    using DMAMUX_RGSR_OF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [:0]: Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register. */
    using DMAMUX_RGSR_OF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [:0]: Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register. */
    using DMAMUX_RGSR_OF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [:0]: Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register. */
    using DMAMUX_RGSR_OF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [:0]: Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register. */
    using DMAMUX_RGSR_OF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [:0]: Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register. */
    using DMAMUX_RGSR_OF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [:0]: Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register. */
    using DMAMUX_RGSR_OF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [:0]: Trigger overrun event flag The flag is set when a new trigger event occurs on DMA request generator channel x, before the request counter underrun (the internal request counter programmed via the GNBREQ field of the DMAMUX_RGxCR register). The flag is cleared by writing 1 to the corresponding COFx bit in the DMAMUX_RGCFR register. */
    using DMAMUX_RGSR_OF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAMUX_RGCFR register */
    using DMAMUX_RGCFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register. */
    using DMAMUX_RGCFR_COF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register. */
    using DMAMUX_RGCFR_COF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register. */
    using DMAMUX_RGCFR_COF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register. */
    using DMAMUX_RGCFR_COF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register. */
    using DMAMUX_RGCFR_COF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register. */
    using DMAMUX_RGCFR_COF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register. */
    using DMAMUX_RGCFR_COF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear trigger overrun event flag Writing 1 in each bit clears the corresponding overrun flag OFx in the DMAMUX_RGSR register. */
    using DMAMUX_RGCFR_COF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
